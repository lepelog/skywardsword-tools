from util import toStr, unpack, objToJson
from collections import OrderedDict
from pathlib import Path
import struct

def parse_zevdat(zevdat: bytes):
    out = OrderedDict()
    out['header'] = unpack("magic evntcount actorcount unk1count unk2count unk3count alwaysev unk4count unk5count unk6count", ">Hhhhhh2shhh",zevdat[:0x14])
    assert out['header']['magic'] == 0x775A
    evnts = []
    for i in range(out['header']['evntcount']):
        evntdata = zevdat[0x14+i*0x28:0x14+(i+1)*0x28]
        # dummies always just zeros
        evnt = unpack('name dummy1 unk1 dummy2 actorindex actorcount', '>32ssb2shh',evntdata)
        evnt['name'] = toStr(evnt['name'])
        evnts.append(evnt)
    out['evnts'] = evnts
    # print(f"evntslen: {len(out['evnts'])}")
    actors = []
    evntsend = 0x14+out['header']['evntcount']*0x28
    for i in range(out['header']['actorcount']):
        evntdata = zevdat[evntsend+i*0x28:evntsend+(i+1)*0x28]
        # dummies always just zeros
        actor = unpack('name unk1 unk2 actindex actcount', '>32shhhh',evntdata)
        actor['name'] = toStr(actor['name'])
        actors.append(actor)
    out['actors'] = actors
    # print(f"actorlen: {len(out['actors'])}")
    actorsend = evntsend+out['header']['actorcount']*0x28
    unk1s = []
    for i in range(out['header']['unk1count']):
        evntdata = zevdat[actorsend+i*0x1C:actorsend+(i+1)*0x1C]
        # dummy0 is always 0, dummy1 is always1
        # unkindex is either to unk1s or unk2s
        unk1 = unpack('name next actorindex unk3 dummy0 thisindex dummy1', '>16shhhhhh', evntdata)
        unk1['name'] = toStr(unk1['name'])
        unk1['actor'] = out['actors'][unk1['actorindex']]
        unk1s.append(unk1)
    out['unk1s'] = unk1s
    # print(f"unk1len: {len(out['unk1s'])}")
    unk1send = actorsend+out['header']['unk1count']*0x1C
    unk2s = []
    for i in range(out['header']['unk2count']):
        evntdata = zevdat[unk1send+i*0xC:unk1send+(i+1)*0xC]
        # unkindex is either to unk1s or unk2s
        unk2 = unpack('name eventSubManagerIndex thisindex unk3Index unk3Count', '>4shhhh', evntdata)
        unk2['name'] = toStr(unk2['name'])
        unk2['asdfunk1'] = unk1s[unk2['thisindex']]
        unk2s.append(unk2)
    out['unk2s'] = unk2s
    # print(f"unk2len: {len(out['unk2s'])}")
    unk2send = unk1send+out['header']['unk2count']*0xC
    unk3s = []
    for i in range(out['header']['unk3count']):
        evntdata = zevdat[unk2send+i*0xC:unk2send+(i+1)*0xC]
        # unkindex is either to unk1s or unk2s
        unk3 = unpack('name unk1 datatype dataindex datalen', '>4shhhh', evntdata)
        unk3['name'] = toStr(unk3['name'])
        unk3s.append(unk3)
    out['unk3s'] = unk3s
    # print(f"unk2len: {len(out['unk2s'])}")
    unk3send = unk2send+out['header']['unk3count']*0xC
    unk4s = []
    for i in range(out['header']['unk4count']):
        evntdata = zevdat[unk3send+i*4:unk3send+(i+1)*4]
        
        unk4 = struct.unpack('>I', evntdata)[0]
        unk4s.append(unk4)
    out['ints'] = unk4s
    unk4send = unk3send+out['header']['unk4count']*4
    unk5s = []
    for i in range(out['header']['unk5count']):
        evntdata = zevdat[unk4send+i*4:unk4send+(i+1)*4]
        
        unk5 = struct.unpack('>f', evntdata)[0]
        unk5s.append(unk5)
    out['floats'] = unk5s
    unk5send = unk4send+out['header']['unk5count']*4
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
    return out

outdir = Path('output') / 'zev'
outdir.mkdir(exist_ok=True)

for i, zevfile in enumerate(Path('allzev').glob('*_zev.dat')):
    # if i > 5:
    #     break
    parsed = parse_zevdat(zevfile.read_bytes())
    name = zevfile.parts[-1][:-8]
    with (outdir / f'{name}.json').open('w') as f:
        f.write(objToJson(parsed))

def get_event(parsed, evnt_name):
    # find event
    found_evnt = next((x for x in parsed['evnts'] if x['name'] == evnt_name))
    print(found_evnt)
    print()
    next_evnt = found_evnt['startindex']
    while next_evnt != -1:
        unk2 = parsed['unk2s'][next_evnt]
        print(unk2)
        print()
        next_evnt = parsed['unk1s'][next_evnt]['next']
# get_event(parse_zevdat((Path('allzev') / 'F000_zev.dat').read_bytes()), "LINK_YOKAN")
# asdf = parse_zevdat((Path('allzev') / 'Common_zev.dat').read_bytes())
# asdf = parse_zevdat((Path('allzev') / 'Asura_zev.dat').read_bytes())