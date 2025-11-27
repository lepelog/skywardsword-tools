import struct
import glob
import pprint
import json
import collections
import os
import storyflag
import tboxSubtypes
from util import *
import re
import yaml

ROOMCOUNT = 16
LAYERCOUNT = 29

sizes = {'FILE':4,
         'SCEN':40,
         'CAM ':44,
         'PATH':12,
         'PNT ':16,
         'SPNT':16,
         'BPNT':40,
         'SPTH':12,
         'AREA':32,
         'EVNT':56,
         'PLY ':24,
         'OBJS':36,
         'OBJ ':36,
         'SOBS':48,
         'SOBJ':48,
         'STAS':48,
         'STAG':48,
         'SNDT':48,
         'DOOR':36,
         'LYSE':4,
         'STIF':20,
         'PCAM':36,
         'LYLT':4}

JP_TO_ENG_EVENT_NAMES = {
    "\u6728\u7bb1\u7834\u58ca": "(JP) Wooden Box Destruction",
    "\u885d\u6483\u30b9\u30a4\u30c3\u30c1\u6b63\u89e3\u30ab\u30e1\u30e9": "(JP) Shock switch correct camera",
    "\u6728\u7bb1": "(JP) Wooden Box",
    "\u50b7\u5ca92": "(JP) Wounded Rock"
}
cumulative_flags_set = [
    [0x40,0x63,0xC4,0xB5,0x3F,0xB8,0xDD,0xF0,0xFF,0xCF,0x1E,0x79,0x00,0x00,0x1F,0x00],
    [0x00,0x00,0x00,0x01,0x20,0x34,0x01,0xF8,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00],
    [0xF8,0x03,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x40,0x10,0x80,0x00],
    [0x00,0x00,0x0C,0x10,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x40,0x00,0x90,0x24,0xC0,0xBF,0x12,0x00,0x06,0x10,0x22,0x02,0x07],
    [0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,0x00,0x03,0x0C],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x09,0x38,0x30,0x00,0x00,0x0C,0x02,0x20,0x1E,0x00,0x02,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0xC0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x01],
    [0x08,0x00,0x24,0xC4,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x7F,0xFE],
    [0x5D,0x40,0x16,0x80,0x00,0x18,0xE0,0x40,0x02,0x3B,0xA0,0x3F,0xFF,0xFF,0x01,0x03],
    [0x00,0x00,0x80,0x31,0x00,0x05,0x00,0x80,0x00,0x10,0x00,0x00,0x00,0x06,0x00,0x82],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x50,0x00,0x22,0x00,0x00,0xC0,0x00,0x00,0x04,0x1F,0xBC,0x02,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x08,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x00,0x10,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00],
    [0x61,0x60,0x06,0x78,0x00,0x32,0x00,0x01,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00],
    [0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x01,0x00,0x00,0x30,0x00,0x00]]

global stage_scens
global flagindex
curr_events = []
flagindex = None
stage_scens = []
story_flags = set()

with open('output/en_US/MapText.json') as f:
    map_text = json.load(f)
with open('allitems.json') as f:
    itemnames = json.load(f)
with open('allstoryflags.json') as f:
    storyflagnames = json.load(f)
with open('allsceneflags.json') as f:
    sceneflagnames = json.load(f)
with open('actor_params.yaml') as f:
    actor_params = yaml.safe_load(f)

PARAM_STUFF = set(['mask','shift','bitfield_name','values','values_default_idx'])

for param_defs in actor_params.values():
    for param_def in param_defs.values():
        for name in param_def.keys():
            assert name in PARAM_STUFF, name

def parseBzs(data):
    name,count,_ff,offset = struct.unpack('>4shhi',data[:12])
    name = name.decode('ascii')
    return parseObj(name, count, data[offset:])

# used for the "Dowsing" objects
DOWSING_OPTIONS=[
    "Faron Trial",
    "Lanayru Trial",
    "Eldin Trial",
    "Skyloft Trial",
    "Propeller",
    "Water Basin",
    "Crystal Ball",
    "Mogma",
    "Plant",#that owlan quest
    "Party Wheel",
    "Zelda",
    "-",
    "-",
    "-",
    "-",
    "Sandship",
]

def objAddExtraInfo(parsed_item):
    extraInfo = collections.OrderedDict()
    params1 = read_word(parsed_item['params1'])
    params2 = read_word(parsed_item['params2'])
    # if parsed_item['name'].startswith('Npc'):
    param_defs = actor_params.get(parsed_item['name'])
    if param_defs is None and parsed_item['name'].startswith('Npc'):
        param_defs = actor_params['Npc']
    if param_defs is not None:
        for prm_name, prm_def in param_defs.items():
            bitfield_name = prm_def.get('bitfield_name', 'params1')
            if bitfield_name == 'params1':
                val = params1
            elif bitfield_name == 'params2':
                val = params2
            else:
                val = parsed_item[bitfield_name]
            val = (val >> prm_def['shift']) & prm_def['mask']
            if values := prm_def.get('values'):
                if val >= len(values):
                    val = prm_def.get("values_default_idx")
                val = values[val]
            extraInfo[prm_name] = val

            # goddess wall stuff
            # extraInfo['exhaustedstoryfid'] = 0x190 + extraInfo['flag_add']
            # extraInfo['spawnstoryfid'] = 0x1AE + extraInfo['flag_add']
            if 'eventIdx' in prm_name:
                if val != 0xFF and val < len(curr_events):
                    extraInfo['Event Name']=curr_events[val]['name']
                elif val != 0xFF and val >= len(curr_events):
                    extraInfo['Event Name']="Unable to Attach"
                else:
                    extraInfo['Event Name']="No Event"
            if 'itemid' == prm_name:
                extraInfo['item']=itemnames.get(str(val), '?')
            elif prm_name.endswith('storyfid'):
                extraInfo[prm_name[:-2]]=storyflagnames[val] if val < len(storyflagnames) else '-'
            elif prm_name.endswith('scenefid'):
                extraInfo[prm_name[:-2]]=flag_id_to_sheet_rep(val)
            elif prm_name == 'map_name_idx':
                extraInfo['name'] = map_text['MAP_%02d' % val]
            elif prm_name == 'saveobj_name_id':
                if val == 0xFF:
                    extraInfo['name'] = map_text['SAVEOBJ_NAME_UNKNOWN']
                else:
                    extraInfo['name'] = map_text['SAVEOBJ_NAME_%02d' % val]
    viewclip_index = read_halfword(parsed_item["id"]) >> 10
    if viewclip_index != 63:
        extraInfo["viewclip_index"] = viewclip_index

    if len(extraInfo) > 0:
        parsed_item['extra_info'] = extraInfo

def parseObj(objtype, quantity, data):
    if objtype == 'V001':
        #root
        parsed = collections.OrderedDict()
        for i in range(quantity):
            addr = i*12
            name,count,ff,offset = struct.unpack('>4shhi',data[addr:addr+12])
            name = name.decode('ascii')
            parsed[name]=parseObj(name,count,data[addr+offset:])
            #if name != 'LAY ':
            #    parsed[name]=len(parsed[name])
        return parsed
    elif objtype == 'LAY ':
        #different layers of the room (always 29 of them)
        assert quantity == LAYERCOUNT
        parsed = {}
        for i in range(quantity):
            addr = i*8
            count,ff,offset = struct.unpack('>hhi',data[addr:addr+8])
            parsed['l%d'%i] = parseObj('V001',count,data[addr+offset:])
        return parsed
            
    elif objtype in ('OBJN','ARCN'):
        parsed = []
        for i in range(quantity):
            addr = data[2*i]*0x100 + data[2*i+1]
            name = toStr(data[addr:])
            parsed.append(name)
        return parsed
    elif objtype == 'RMPL':
        parsed = collections.OrderedDict()
        for i in range(quantity):
            rmpldata = data[4*i:]
            rmpl_id = rmpldata[0]
            count = rmpldata[1]
            addr = rmpldata[2]*0x100 + rmpldata[3]
            parsed[rmpl_id] = []
            for j in range(count):
                parsed[rmpl_id].append(rmpldata[addr+2*j:addr+2*j+2])
        return parsed

    else:
        parsed = []
        for i in range(quantity):
            item = data[sizes[objtype]*i:sizes[objtype]*(i+1)]

            if objtype == 'FILE':
                assert quantity == 1
                parsed_item = item
                return parsed_item
            elif objtype == 'SCEN':
                #link to other stage
                parsed_item = unpack('name room layer entrance night transtype fadeframestype zero saveprompt','>32sbbbbbbbb',item)
                parsed_item['name'] = toStr(parsed_item['name'])
                stage_scens.append(parsed_item)
            elif objtype == 'CAM ':
                parsed_item = unpack('unk1 posx posy posz angle unk2 name','>4s3ff8s16s', item)
                parsed_item['name'] = toStr(parsed_item['name'])
            elif objtype in ('PATH','SPTH'):
                parsed_item = unpack('unk1 pnt_start_idx pnt_total_count unk2','>2sHH6s', item)
            elif objtype in ('PNT ','SPNT'):
                parsed_item = unpack('posx posy posz unk','>3f4s',item)
            elif objtype == 'BPNT':
                parsed_item = unpack('pos1x pos1y pos1z pos2x pos2y pos2z pos3x pos3y pos3z unk','>3f3f3f4s',item)
            elif objtype == 'AREA':
                # byte 1,2,4 very variable
                # byte 3 FF or 00
                # byte 5 01 or 00
                # byte 6, 7, 8 FF
                parsed_item = unpack('posx posy posz sizex sizey sizez angley area_link unk3 dummy','>3f3fHhb3s',item)
                parsed_item['index']=i
            elif objtype == 'EVNT':
                parsed_item = unpack('unk1 story_flag1 story_flag2 unk2 exit_id unk3 skipevent unk4 sceneflag1 sceneflag2 skipflag dummy1 item dummy2 name','>2shh3sb3sb1sBBBhhh32s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
                if parsed_item['name'].startswith('\u6728') or parsed_item['name'].startswith('\u50b7') or parsed_item['name'].startswith('\u885d'):
                    parsed_item['name'] = JP_TO_ENG_EVENT_NAMES[parsed_item['name']]
            elif objtype == 'PLY ':
                #room entrance
                parsed_item = unpack('storyflag play_cutscene byte4 posx posy posz anglex angley anglez entrance_id','>Hbb3fHHHh',item)
                # anglex and anglez are almost always 0, there is one entrance in the thunderhead that uses 0x8000 for both of them
                # storyflag, if set don't play the cutscene
                parsed_item['storyflag']=parsed_item['storyflag']&0x7FF # rest is always set
                if parsed_item['play_cutscene'] != -1:
                    print('%d: entrance %d -- cutscene %d'%(i,parsed_item['entrance_id'],parsed_item['play_cutscene']))
            elif objtype in ('OBJS','OBJ ','DOOR'):
                # objects without size
                parsed_item = unpack('params1 params2 posx posy posz                   anglex angley anglez id name','>4s4s3fHHH2s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
                objAddExtraInfo(parsed_item)
            elif objtype in ('SOBS','SOBJ','STAS','STAG','SNDT'):
                # object with size information
                parsed_item = unpack('params1 params2 posx posy posz sizex sizey sizez anglex angley anglez id name','>4s4s3f3fHHH2s8s',item)
                parsed_item['name'] = toStr(parsed_item['name'])
                objAddExtraInfo(parsed_item)
            
            elif objtype == 'LYSE':
                #logic for overriding layer when attempting to load layer 0
                parsed_item = unpack('story_flag night layer','>hbb',item)
                #if parsed_item['story_flag'] == -1:
                #    print ('\tDefault, night=%d -- layer=%d'%(parsed_item['night'], parsed_item['layer']))
                #else:
                #    print ('\tFlag %04X (JP %s / US %s), night=%d -- layer=%d'%(parsed_item['story_flag'],
                #                                                        storyflag.flagid_to_spreadsheet(False,parsed_item['story_flag']),
                #                                                        storyflag.flagid_to_spreadsheet(True,parsed_item['story_flag']),
                #                                                        parsed_item['night'],
                #                                                        parsed_item['layer']))
                story_flags.add(parsed_item['story_flag'])
            elif objtype == 'STIF':
                #Stage Info
                assert quantity == 1
                # wtf2 seems to be fog distance
                # wtf3 seems to be default draw distance (some actors override it though)
                # byte1 belongs to flagindex (is short)
                # byte4 is beacon area index
                parsed_item = unpack('wtf1 wtf2 wtf3 byte1 flagindex byte3 byte4 unk1 map_name_id unk2','>3fbbbb2sb1s',item)
                flagindex = parsed_item['flagindex']
                return parsed_item
            elif objtype == 'PCAM':
                parsed_item = unpack('pos1x pos1y pos1z pos2x pos2y pos2z angle wtf id unk','>3f3fffb3s',item)
            elif objtype == 'LYLT':
                #Demo definitions
                parsed_item = unpack('layer demo_high demo_low dummy','>bbbb',item)
                assert parsed_item['dummy'] == -1
                
            else:
                raise Exception(objtype)

            #if type(parsed_item) == collections.OrderedDict and 'name' in parsed_item:
            #    if parsed_item['name'] == 'HrpHint' and parsed_item['byte4'] != -1:
            #        cumulative_flags_set[flagindex]=setBit(cumulative_flags_set[flagindex],parsed_item['byte4'])
                #if parsed_item['name'] == 'TBox' and parsed_item['unk2'][0] != 0xFF:
                #    cumulative_flags_set[flagindex]=setBit(cumulative_flags_set[flagindex],parsed_item['unk2'][0])
                
            parsed.append(parsed_item)
            #if type(parsed_item) != bytes and 'name' in parsed_item and parsed_item['name'] == 'Door':
            #    if 0 <= parsed_item['scen_link'] < len(stage_scens):
            #        print('\tDoor %f %f %f  -- scene: %s' % (parsed_item['posx'],parsed_item['posy'],parsed_item['posz'],stage_scens[parsed_item['scen_link']]))
            #    else:
            #        print('\tDoor %f %f %f  -- scene: invalid exit %d' % (parsed_item['posx'],parsed_item['posy'],parsed_item['posz'],parsed_item['scen_link']))
            if objtype == 'EVNT':
                if i == 0:
                    curr_events.clear()
                curr_events.append(parsed_item)

        return parsed

def do_extract_bzs(basedir, outdir):
    for stageid in os.listdir(basedir):
        stage_scens = []
        flagindex = None
        print(stageid+' - '+stagenames[stageid])
        stagepath = '%s/%s/%s_stg_l0/dat/stage.bzs'%(basedir,stageid,stageid)
        stage = parseBzs(open(stagepath, 'rb').read())
        stage['rooms'] = collections.OrderedDict()
        for i in range(ROOMCOUNT):
            roomid = 'r%02d'%i
            roompath = '%s/%s/%s_stg_l0/rarc/%s_r%02d/dat/room.bzs' % (basedir,stageid,stageid,stageid,i)
            if os.path.isfile(roompath):
                print(stageid, roomid)
                stage_scens = []
                room = parseBzs(open(roompath, 'rb').read())
                stage['rooms'][roomid]=room
        if 'RMPL' in stage:
            assert len(stage['rooms']) == len(stage['RMPL'])
        else:
            assert len(stage['rooms']) == 1
        f2=open('output/%s/%s.json'%(outdir,stageid),'w',encoding='utf-8')
        f2.write(objToJson(stage))
        s = objToJson(stage)
        f2.close()
    print('-----------------------------------------------')
    print('50 51 52 53 54 55 56 57 58 59 5A 5B 5C 5D 5E 5F')
    print('-----------------------------------------------')
    for i in range(len(flagindex_names)):
        print(flagindex_names[i])
        print(sprintHex(cumulative_flags_set[i]))

do_extract_bzs('Stage','stage')
do_extract_bzs('StageHD','stageHD')


