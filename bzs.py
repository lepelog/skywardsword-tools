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
    # sceneflags
    if parsed_item['name'] in ['TlpTag', 'EMagupp']: # EMagupp: spume
        # flag is first byte
        extraInfo['scenefid'] = params1 >> 24
        if parsed_item['name'] == 'TlpTag':
            extraInfo['nameidx'] = (params1 >> 8) & 0xFF
            extraInfo['name'] = map_text['MAP_%02d'%extraInfo['nameidx']]
    if parsed_item['name'] in ['Log','trolley','Fence','Chandel','Est']:#Chandel: Chandelier in Lumpy Pumpkin
        # flag is second byte
        extraInfo['scenefid'] = (params1 >> 16) & 0xFF
    elif parsed_item['name'] in ['FrmLand','SwWall','SwDir2','BrgFall','D300Obj','TSBase']: # SwWall: wall switch, BrgFall: drawbridges in ET and fire dragon room, D300Obj: LMF in lanayru desert, TSBase: time shift orb base
        # flag is third byte
        extraInfo['scenefid'] = (params1 >> 8) & 0xFF
    elif parsed_item['name'] in ['TgReact','saveObj','HrpHint','BlsRock','TowerB','WdBoard','SStatue','FShutte','Lotus','WaterSW','FireObs','StprRc','Gear','Lotus','MDvTg','chest','IslTreB','RoAtLog','swsyako','TgDefea','SwHrp','SwdStb','TAgo','SdCdl']:# WdBoard: board near staldra in skyview, SStatue are statues you can bomb down in lanayru, FShutte: iron bars, Lotus: lillypad in AC, WaterSW: thirsty frog, FireObs: fire wall, StprRc: stopper rock in ET, Gear: Ropes to cut in ET and fire dragon room, MDvTg: megami diving tag used for diving after sailcloth, chest: wardrobes, IslTreB: Treasure island in the sky, RoAtLog: Roll attack log, swsyako: lanayru generators to feed with ampilus, TgDefea: Tag after defeated boss, SwHrp: Harp playing related, SwdStb: warps to triforce room, SdCdl: Crests to hit with skyward strike after dungeons (not isle of songs)
        # flag is fourth byte
        extraInfo['scenefid'] = params1 & 0xFF
        if parsed_item['name'] == 'Lotus':
            extraInfo['2scenefid'] = (params1 >> 0xE) & 0xFF
        elif parsed_item['name']=='BlsRock':
            # sceneflag for walls, that can be half broken
            extraInfo['2scenefid']=(params1 >> 0x18) & 0xFF
        elif parsed_item['name']=='TgReact':
            # uses a different item table
            extraInfo['tgreactitemid'] = params2 >> 24
            subtypes = ['bonk','slingshot','gust bellow blow','underwater something']
            extraInfo['subtype'] = subtypes[params1 >> 28]
        elif parsed_item['name']=='SdCdl':
            extraInfo['scen_link']=(params1 >> 8) & 0xF
        elif parsed_item['name'] == 'TowerB':
            extraInfo['event_id'] = (params1 >> 8) & 0xFF
        elif parsed_item['name']=='saveObj':
            # that one skyloft statue
            if parsed_item['anglez'] == 0xFFFE:
                extraInfo['scenefid']=0xFF
            # statues with story flag instead of scene flag
            elif (parsed_item['anglex']>>8) != 0xFF:
                extraInfo['scenefid'] = 0xFF
                extraInfo['setstoryfid'] = parsed_item['anglex']&0x7FF
            extraInfo['tosky_scen_link'] = (params1 >> 16) & 0xFF
            extraInfo['name_id'] = params2 & 0xFF
            subtypes = ['normal','overworld','dungeon']
            extraInfo['subtype'] = subtypes[(params1>>8)&0xFF]
            if extraInfo['name_id'] == 0xFF:
                extraInfo['name'] = map_text['SAVEOBJ_NAME_UNKNOWN']
            else:
                extraInfo['name'] = map_text['SAVEOBJ_NAME_%02d' % extraInfo['name_id']]
        elif parsed_item['name'] == 'HrpHint':
            extraInfo['talk_behaviour'] = parsed_item['anglez']
    elif parsed_item['name'] in ['Barrel','TimeStn','EAm']: # TimeStn: time shift stone, EAm: Armos
        # flag is between byte 1 and 2
        extraInfo['scenefid'] = (params1 >> 20) & 0xFF
        if parsed_item['name'] == 'Barrel':
            extraInfo['2scenefid'] = (params1 >> 12) & 0xFF
        elif parsed_item['name'] == 'TimeStn':
            extraInfo['subtype'] = (params1 >> 0x1C) 
    elif parsed_item['name'] in ['Tubo','Soil','Wind','ColStp','EEye','Wind03','SldDoor','Wind02','ERemly','RolRock','Fire','SwBnkS','Char','TouchTa']: # ColStp: Logs before skyloft cave and elsewhere, EEye: Eyes in Skyview, Est: Spider, Wind03: water spot in AC, SldDoor: Door after bosses, Wind02: Appears in Eldin, probably lava fountains, ERemly: Remlit, RolRock: Rolling rocks, SwBnkS: small lanayru node & sandship switches to rotate, Char: Chair
        # flag is between byte 3 and 4
        extraInfo['scenefid'] = (params1 >> 4) & 0xFF
        if parsed_item['name'] == 'SldDoor':
            extraInfo['2scenefid'] = (params1 >> 0xD) & 0xFF 
        if parsed_item['name'] == 'Fire':
            extraInfo['checkscenefid'] = (params1 >> 0x16) & 0xFF
    elif parsed_item['name'] in ['Kibako', 'PushBlk','vmSand','Truck','BlkRope','Heartf','Windmill']: # vmSand is sand dust to blow away, Truck: minecart at shipcart, BlkRope: Box hanging from rope, Heartf: heartflowers
        # flag is between byte 2 and 3
        extraInfo['scenefid'] = (params1 >> 12) & 0xFF
        if parsed_item['name'] == 'Windmill':
            extraInfo['2scenefid'] = (params1 >> 4) & 0xFF
    elif parsed_item['name'] in ['Item','ShtCS']:
        # flag is between byte 2 and 3 with bit shift
        extraInfo['scenefid'] = (params1 >> 10) & 0xFF
        if parsed_item['name'] == 'Item':
            extraInfo['itemid'] = params1 & 0xFF
            extraInfo['unk_param2'] = (params1 >> 20) & 0xF
            extraInfo['unk_param3'] = (params1 >> 9) & 0x1 # mask unknown
            extraInfo['unk_param5'] = (params1 >> 19) & 0x1
    elif parsed_item['name'] in ['HitLVSW', 'ArrowSW']: # ArrowSW: Bow switches, HitLVSW: underground switches to move gates in FS
        extraInfo['scenefid'] = (params1 >> 10) & 0xFF
        extraInfo['2scenefid'] = (params1 >> 18) & 0xFF
    elif parsed_item['name'] == 'BlwCoal': # Hot Floor to blow out with gust bellows
        extraInfo['scenefid'] = (params1) & 0xFF
        extraInfo['2scenefid'] = (params1 >> 8) & 0xFF
    elif parsed_item['name'] == 'BulbSW': # switches you can whip in ancient cistern
        extraInfo['scenefid'] = (params1 >> 2) & 0xFF
    elif parsed_item['name'] == 'sw_whip':
        extraInfo['1scenefid'] = (params1 >> 2) & 0xFF
        extraInfo['2scenefid'] = (params1 >> 10) & 0xFF
    elif parsed_item['name'] == 'Swhit': # crystal switches hittable with any damage
        extraInfo['setscenefid'] = (params1 >> 3) & 0xFF
        extraInfo['unsetscenefid'] = (params1 >> 0xb) & 0xFF
    elif parsed_item['name'] == 'FenceIr': # Iron gate, openable with sceneflag
        extraInfo['scenefid'] = params1 & 0xFF
    elif parsed_item['name'] == 'DoorBs': # boss door
        extraInfo['scenefid'] = (params1 >> 6) & 0xFF
    elif parsed_item['name'] == 'EHidoK':
        extraInfo['scenefid'] = (params1 >> 0x15) & 0xFF
    elif parsed_item['name'].startswith('Npc'):
        triggerstoryf=(params1 >> 10) & 0x7FF
        untriggerstoryf=(params1 >> 21) & 0x7FF
        extraInfo['trigstoryfid']=triggerstoryf
        extraInfo['untrigstoryfid']=untriggerstoryf
        extraInfo['talk_behaviour']=parsed_item['anglez']
        # there might be more Npc actors with this sceneflag behaviour but needs testing
        if parsed_item['name']=='NpcTke':
            extraInfo['triggerarea']=parsed_item['angley'] & 0xFF
            extraInfo['trigscenefid']=(parsed_item['anglex']&0xFF)
            extraInfo['untrigscenefid']=(parsed_item['anglex']>>8)
    elif parsed_item['name']=='Door':
        extraInfo['scenefid']=(parsed_item['anglex']>>8)
        extraInfo['subtype2']=parsed_item['anglex'] & 0xFF
        extraInfo['scen_link'] = (params1 >> 8) & 0xFF
        extraInfo['talk_behaviour'] = params1 >> 16
        extraInfo['subtype'] = params1 & 0x3F
        extraInfo['locked'] = bool((params1 >> 6) & 1)
    elif parsed_item['name']=='TBox': # note: if the first 4 bits are 0, the chest won't spawn at all, if it's 1 the chest being open is determined by the sceneflag instead of the chestflag and if it's 0xF=15, it uses the chestflag to determine if it should be open
        spawnscenef=((params1 & 0x0FF00000) >> 20)
        extraInfo['spawnscenefid']=spawnscenef
        extraInfo['setscenefid']=(parsed_item['anglex']&0xFF)
        extraInfo['itemid']=parsed_item['anglez']&0x1FF
        subtype = tboxSubtypes.tboxSubtypes[extraInfo['itemid']]
        if subtype == 3:# goddess chest
            # the special items for goddess chest are only used to
            # determine that this is a goddess chest
            extraInfo['itemid'] = 0x1FF - extraInfo['itemid']
            extraInfo['trigstoryfid']=params2&0x7FF
        extraInfo['subtype']=['Normal','Small','Boss','Goddess'][subtype]
        extraInfo['chestid']=(parsed_item['anglez']&0xFE00)>>9
    elif parsed_item['name']=='DNight':
        extraInfo['sleep_storyfid']=params1 & 0x07FF
    elif parsed_item['name']=='WarpObj':
        extraInfo['scen_link']=(params1 >> 16) & 0xFF
        extraInfo['trigscenefid']=(params1 >> 8) & 0xFF
        extraInfo['untrigscenefid']=params1 & 0xFF
    elif parsed_item['name']=='IvyRope': # IvyRope: Ropes, used for the ones you need to balance and the ones you can swing on
        extraInfo['scenefid']=parsed_item['anglez'] & 0xFF
        extraInfo['2scenefid']=(params1 >> 12) & 0xFF
    elif parsed_item['name'] == 'TChk':
        extraInfo['scenefid'] = (params1 >> 8) & 0xFF
        extraInfo['2scenefid'] = params1 & 0xFF
    elif parsed_item['name']=='Kanban':
        extraInfo['talk_behaviour']=(params1 >> 4) & 0xFFFF
        extraInfo['setscenefid']= (params1 >> 0x18) & 0xFF
    elif parsed_item['name']=='KanbanS':
        extraInfo['talk_behaviour']=params1 & 0xFFFF
        extraInfo['setscenefid']= (params1 >> 0x10) & 0xFF
    elif parsed_item['name']=='AutoMes':
        extraInfo['talk_behaviour']=params1 & 0xFFFF
    elif parsed_item['name'] == 'BlockUg':
        extraInfo['scenefid'] = (params1 >> 8) & 0xFF
        extraInfo['2scenefid'] = (params1 >> 16) & 0xFF
    elif parsed_item['name'] == 'LvPlt':
        extraInfo['checkscenefid'] = (params1) & 0xFF
        extraInfo['setscenefid'] = (params1 >> 8) & 0xFF
    elif parsed_item['name'] == 'Piston':# Pistons in Sandship engine room
        extraInfo['setscenefid'] = parsed_item['anglez'] >> 8
    elif parsed_item['name'] == 'DoorDun': # dungeon door
        extraInfo['setscenefid'] = (params1 >> 8) & 0xFF
        extraInfo['checkscenefid'] = (params1 >> 16) & 0xFF
    elif parsed_item['name']=='GodCube':
        extraInfo['storyfid']=params1&0x7FF
    elif parsed_item['name']=='ScChang':
        extraInfo['scen_link']=params1 & 0xFF
        extraInfo['trigscenefid']=(params1 >> 24) & 0xFF
        triggerstoryf=parsed_item['anglex']&0x7FF
        untriggerstoryf=parsed_item['anglez']&0x7FF
        extraInfo['trigstoryfid']=triggerstoryf
        extraInfo['untrigstoryfid']=untriggerstoryf
    elif parsed_item['name'] == 'SwAreaT':
        extraInfo['setstoryfid']=parsed_item['anglex']&0x7FF
        extraInfo['unsetstoryfid']=parsed_item['anglez']&0x7FF
        extraInfo['setscenefid'] = params1 & 0xFF
        extraInfo['unsetscenefid'] = (params1 >> 8) & 0xFF
    elif parsed_item['name'] == 'DieTag':
        extraInfo['setscenefid'] = (params1 & 0x00000FF0) >> 4
    elif parsed_item['name'] == 'EvntTag':
        extraInfo['trigscenefid'] = (params1 >> 16) & 0xFF
        extraInfo['setscenefid'] = (params1 >> 8) & 0xFF
        extraInfo['event'] = params1 & 0xFF
        extraInfo['subType'] = 'unsetflag' if (params1 >> 0x18) & 0x3 == 0 else 'setflag'
    elif parsed_item['name'] == 'EvfTag':
        extraInfo['trigstoryfid'] = (params1 >> 19) & 0x7FF
        extraInfo['setstoryfid'] = (params1 >> 8) & 0x7FF
        extraInfo['event'] = params1 & 0xFF
    elif parsed_item['name'] == 'TDoorB': # closed gate of time
        extraInfo['trigstoryfid'] = params1 & 0x7FF
        extraInfo['untrigstoryfid'] = (params1>>11) & 0x7FF
        extraInfo['setscenefid'] = (params1>>22) & 0xFF
    elif parsed_item['name'] == 'TDoor': # opened gate of time
        extraInfo['trigstoryfid'] = params1 & 0x7FF
    elif parsed_item['name'] == 'TstShtr': # TstShtr: Dungeon door
        extraInfo['side1scenefid'] = (parsed_item['anglex']&0xFF)
        extraInfo['side2scenefid'] = (parsed_item['anglex']>>8)
    elif parsed_item['name'] == 'PlRsTag':
        # byte 1 always FF
        # byte 2 left 6 bytes {'010001', '110101', '110111', '010011', '110001', '010101', '110011', '111011'}
        # unk2 always FF DF FF FF
        extraInfo['trigscenefid'] = parsed_item['anglez']&0xFF
        extraInfo['untrigscenefid'] = (parsed_item['anglez']>>8)&0xFF
        extraInfo['roomid'] = (params1>>12)&0x3F
        extraInfo['entranceid'] = params1 & 0xFF
        # all bits set mean stay in the same room
        if extraInfo['roomid'] == 63:
            del extraInfo['roomid']
    elif parsed_item['name'] == 'Dowsing':
        extraInfo['option'] = DOWSING_OPTIONS[(params1 >> 16) & 0xF]
        extraInfo['trigstoryfid'] = parsed_item['anglez'] & 0x7FF
        extraInfo['untrigstoryfid'] = (params1 >> 20) & 0x7FF
        extraInfo['trigscenefid'] = (params1 >> 8) & 0xFF
        extraInfo['untrigscenefid'] = params1 & 0xFF
    elif parsed_item['name'] in ('CamTag', 'Cam2Tag'): # special cameras, idk where the difference is
        extraInfo['trigscenefid'] = (params1 >> 16) & 0xFF
        extraInfo['untrigscenefid'] = parsed_item['anglez'] & 0xFF
        extraInfo['camidx'] = (params1) & 0xFF
    elif parsed_item['name'] == 'SwTag':
        # tag to set sceneflag based on multiple other sceneflags
        # first 4 bits always F, then 6 bits counts (counting n flags up from the following sceneflag), 8 bits start sceneflag (it watches range that+count)
        # then 8 bits set sceneflag, then 6 unknown bits
        extraInfo['trigscenefid'] = (params1>>14)&0xFF
        extraInfo['setscenefid'] = (params1>>6)&0xFF
        extraInfo['count'] = (params1>>22)&0x3F
    elif parsed_item['name'] == 'TgTimer':
        extraInfo['trigscenefid'] = (params1>>16)&0xFF
        extraInfo['setscenefid'] = (params1>>24)&0xFF
    elif parsed_item['name'] == 'WndMilD':
        extraInfo['setscenefid'] = (params1>>0)&0xFF
        extraInfo['2setscenefid'] = ((params1>>0)&0xFF)+1
        extraInfo['checkscenefid'] = (params1>>8)&0xFF
    elif parsed_item['name'] in ['EBc', 'EMr', 'EBce','EBeamos']:
        # set when the enemy dies
        extraInfo['setscenefid'] = parsed_item['anglez']&0xFF
    elif parsed_item['name'] == 'EHydra':
        extraInfo['setscenefid'] = (params1>>22)&0xFF
    elif parsed_item['name'] == 'EGumarm': # Magmanos
        extraInfo['setscenefid'] = params1 & 0xFF
        extraInfo['set2scenefid'] = (params1 >> 8) & 0xFF
    elif parsed_item['name'] == 'MapMark':
        extraInfo['trigstoryfid'] = (params1 >> 12) & 0x7FF
    elif parsed_item['name'] == 'SwrdPrj':
        flag_add = (params1 >> 3) & 0x1F
        if flag_add != 0x1F:
            extraInfo['flag_add'] = flag_add
            extraInfo['exhaustedstoryfid'] = 0x190 + extraInfo['flag_add']
            extraInfo['spawnstoryfid'] = 0x1AE + extraInfo['flag_add']
    #     extraInfo['map_pop_id'] = (parsed_item['anglez'] & 0xFF00) >> 8
    #     key = 'MAP_POP_%02d'%extraInfo['map_pop_id']
    #     extraInfo['map_pop'] = map_text.get(key, 'not found')
    elif parsed_item['name'] == 'EBfish':
        extraInfo['appearscenefid'] = parsed_item['anglez']&0xFF
        extraInfo['diescenefid'] = parsed_item['anglez']>>8
    if 'flagid' in extraInfo:
        extraInfo['areaflag'] = flag_id_to_sheet_rep(extraInfo['flagid'])
    if 'itemid' in extraInfo:
        extraInfo['item']=itemnames.get(str(extraInfo['itemid']), '?')
    for key in list(extraInfo.keys()):
        if key.endswith('storyfid'):
            info = extraInfo[key]
            extraInfo[key[:-2]]=storyflagnames[info] if info < len(storyflagnames) else '-'
        if key.endswith('scenefid'):
            info = extraInfo[key]
            extraInfo[key[:-2]]=flag_id_to_sheet_rep(info)
            
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
                parsed_item = unpack('pos1x pos1y pos1z pos2x pos2y pos2z angle wtf unk','>3f3fff4s',item)
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


