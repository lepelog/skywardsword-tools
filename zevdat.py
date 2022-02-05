from util import toStr, unpack, objToJson
from collections import OrderedDict
from pathlib import Path
import struct
import sys

def parse_zevdat(zevdat: bytes):
    out = OrderedDict()
    out['header'] = unpack("magic evntcount actorcount unk1count unk2count unk3count alwaysev unk4count unk5count unk6count", ">Hhhhhh2shhh",zevdat[:0x14])
    assert out['header']['magic'] == 0x775A
    evnts = []
    for i in range(out['header']['evntcount']):
        offset = 0x14+i*0x28
        evntdata = zevdat[offset:0x14+(i+1)*0x28]
        # dummies always just zeros
        evnt = unpack('name dummy1 unk1 dummy2 actorindex actorcount', '>32ssb2shh',evntdata)
        evnt['name'] = toStr(evnt['name'])
        evnt['offset'] = offset
        evnts.append(evnt)
    out['evnts'] = evnts
    # print(f"evntslen: {len(out['evnts'])}")
    actors = []
    evntsend = 0x14+out['header']['evntcount']*0x28
    for i in range(out['header']['actorcount']):
        offset = evntsend+i*0x28
        evntdata = zevdat[offset:evntsend+(i+1)*0x28]
        # dummies always just zeros
        actor = unpack('name unk1 unk2 actindex actcount', '>32shhhh',evntdata)
        actor['name'] = toStr(actor['name'])
        actor['offset'] = offset
        actors.append(actor)
    out['actors'] = actors
    # print(f"actorlen: {len(out['actors'])}")
    actorsend = evntsend+out['header']['actorcount']*0x28
    unk1s = []
    for i in range(out['header']['unk1count']):
        offset = actorsend+i*0x1C
        evntdata = zevdat[offset:actorsend+(i+1)*0x1C]
        # dummy0 is always 0, dummy1 is always1
        unk1 = unpack('name waitfor actorindex unk3 dummy0 thisindex dummy1', '>16shhhhhh', evntdata)
        unk1['name'] = toStr(unk1['name'])
        # unk1['actor'] = out['actors'][unk1['actorindex']]
        unk1['offset'] = offset
        unk1s.append(unk1)
    out['unk1s'] = unk1s
    # print(f"unk1len: {len(out['unk1s'])}")
    unk1send = actorsend+out['header']['unk1count']*0x1C
    unk2s = []
    for i in range(out['header']['unk2count']):
        offset = unk1send+i*0xC
        evntdata = zevdat[offset:unk1send+(i+1)*0xC]
        # thisindex is never read
        unk2 = unpack('name eventSubManagerIndex thisindex unk3Index unk3Count', '>4shhhh', evntdata)
        unk2['name'] = toStr(unk2['name'])
        unk2['offset'] = offset
        # unk2['asdfunk1'] = unk1s[unk2['thisindex']]
        unk2s.append(unk2)
    out['unk2s'] = unk2s
    assert len(out['unk2s']) == len(out['unk1s'])
    # print(f"unk2len: {len(out['unk2s'])}")
    unk2send = unk1send+out['header']['unk2count']*0xC
    unk3s = []
    for i in range(out['header']['unk3count']):
        offset = unk2send+i*0xC
        evntdata = zevdat[offset:unk2send+(i+1)*0xC]
        # unkindex is either to unk1s or unk2s
        unk3 = unpack('name unk1 datatype dataindex datalen', '>4shhhh', evntdata)
        unk3['name'] = toStr(unk3['name'])
        unk3['offset'] = offset
        unk3s.append(unk3)
    out['unk3s'] = unk3s
    # print(f"unk2len: {len(out['unk2s'])}")
    unk3send = unk2send+out['header']['unk3count']*0xC
    unk4s = []
    out['intsoffset'] = unk3send
    for i in range(out['header']['unk4count']):
        evntdata = zevdat[unk3send+i*4:unk3send+(i+1)*4]
        
        unk4 = struct.unpack('>I', evntdata)[0]
        unk4s.append(unk4)
    out['ints'] = unk4s
    unk4send = unk3send+out['header']['unk4count']*4
    out['floatsoffset'] = unk4send
    unk5s = []
    for i in range(out['header']['unk5count']):
        evntdata = zevdat[unk4send+i*4:unk4send+(i+1)*4]
        
        unk5 = struct.unpack('>f', evntdata)[0]
        unk5s.append(unk5)
    out['floats'] = unk5s
    unk5send = unk4send+out['header']['unk5count']*4
    out['stringssoffset'] = unk5send
    out['stringbytes'] = zevdat[unk5send:]
    out['strings'] = str(zevdat[unk5send:])
    for cmd in out['unk3s']:
        if cmd['datatype'] == 0:
            typename = 'ints'
        elif cmd['datatype'] == 1:
            typename = 'floats'
        elif cmd['datatype'] == 2:
            typename = 'stringbytes'
        else:
            raise Exception(f'unk datatype {cmd["datatype"]}')
        dataindex = cmd['dataindex']
        datalen = cmd['datalen']
        cmd['data'] = out[typename][dataindex:dataindex+datalen]
        if typename == 'stringbytes':
            cmd['data'] = toStr(cmd['data'])
    for event in out['evnts']:
        start = event['actorindex']
        length = event['actorcount']
        event['actors'] = out['actors'][start:start+length]
    for actor in out['actors']:
        start = actor['actindex']
        length = actor['actcount']
        actor['acts1'] = out['unk1s'][start:start+length]
        actor['acts2'] = out['unk2s'][start:start+length]
    for unk2 in out['unk2s']:
        start = unk2['unk3Index']
        length = unk2['unk3Count']
        unk2['data'] = out['unk3s'][start:start+length]
    
    # all the data *should* be in events somehow, so delete the individual things
    del out['actors']
    del out['unk1s']
    del out['unk2s']
    del out['unk3s']
    del out['floats']
    del out['strings']
    del out['stringbytes']
    del out['ints']
    return out

def process_all():
    outdir = Path('output') / 'zev'
    outdir.mkdir(exist_ok=True)

    for i, zevfile in enumerate(Path('allzev').glob('*_zev.dat')):
        # if i > 5:
        #     break
        parsed = parse_zevdat(zevfile.read_bytes())
        name = zevfile.parts[-1][:-8]
        with (outdir / f'{name}.json').open('w') as f:
            f.write(objToJson(parsed))

def get_event(filename, evnt_name):
    parsed = parse_zevdat((Path('allzev') / f"{filename}_zev.dat").read_bytes())
    return next((x for x in parsed['evnts'] if x['name'] == evnt_name), None)

def event_to_graphviz(event) -> str:
    out = "digraph {\n"
    # draw each actor
    for actoridx, actor in enumerate(event['actors']):
        out += f'actor{actoridx} [label="{actor["name"]}"];\n'
        # draw each action of the actor
        for i in range(len(actor['acts1'])):
            unk1 = actor['acts1'][i]
            actionidx = unk1['thisindex']
            out += f'action{actionidx} [label="{unk1["name"]}"];\n'
            # line from previous
            if i == 0:
                prev = f"actor{actoridx}"
            else:
                prev = f"action{actionidx-1}"
            out += f"{prev} -> action{actionidx};\n"
            # if this waits
            waitfor = unk1['waitfor']
            if waitfor != -1:
                out += f"action{waitfor} -> action{actionidx} [label=wait];\n"
    return out + '\n}'

if __name__ == '__main__':
    if len(sys.argv) == 1:
        process_all()
    elif len(sys.argv) == 3:
        evntfile = sys.argv[1]
        evntname = sys.argv[2]
        evnt = get_event(evntfile, evntname)
        if evnt is None:
            print(f"cannot fine event '{evntname}'", file=sys.stderr)
            exit(1)
        print(event_to_graphviz(evnt))
    else:
        usage = "python3 zevdat.py filename eventname\nExample: python3 zevdat.py F300 SalbageFayCall2"
        print(usage, file=sys.stderr)
# evnt = get_event("F300", "SalbageFayCall2")
# print(event_to_graphviz(evnt))

# get_event(parse_zevdat((Path('allzev') / 'F000_zev.dat').read_bytes()), "LINK_YOKAN")
# asdf = parse_zevdat((Path('allzev') / 'Common_zev.dat').read_bytes())
# asdf = parse_zevdat((Path('allzev') / 'Asura_zev.dat').read_bytes())
