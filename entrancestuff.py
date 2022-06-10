import json
import glob
import os.path
from collections import OrderedDict, defaultdict

from allobjects import raw_stages
from util import *

# stage, room, entrance object
all_entrances=[]

# fromstage, fromroom, exitid, exit object
all_exits=[]

used_layers=defaultdict(set)

existing_entrances = defaultdict(set)

for stageid, data in raw_stages.items():
    for roomid, room in data['rooms'].items():
        rid=int(roomid[1:])
        # for eid, ext in enumerate(room.get('SCEN',[])):
        #     entr_name = f"r{ext['room']:02}:{ext['entrance']:02}"
        #     existing_entrances[entr_name].add(ext['name'])
            # if ext['saveprompt'] == 1:
            #     print(f"stage: {ext['name']}, room: {ext['room']}, entrance: {ext['entrance']}")
        for ply in room.get('PLY ', []):
            entr_name = f"r{rid:02}:{ply['entrance_id']:02}"
            existing_entrances[entr_name].add(stageid)


print(existing_entrances)

cleaned = sorted(existing_entrances.items(), key=lambda x: x[0])

cdict = {}

for clean in cleaned:
    cdict[clean[0]] = sorted(clean[1])
    print(f"{clean[0]}: {sorted(clean[1])}")

# print(cdict)

# stage, room, entranceid
# entrance_set={}
# for entrance in all_entrances:
#     entrance_set[(entrance['stage'], entrance['room'], entrance['entrance_id'])]=entrance

# exit_set={}
# for eexit in all_exits:
#     exit_set[(eexit['name'], eexit['room'], eexit['entrance'])]=eexit
#     used_layers[eexit['name']].add(eexit['layer'])

# for stageid, stage in raw_stages.items():
#     for layermapping in stage.get('LYSE',[]):
#         used_layers[stageid].add(layermapping['layer'])

# unused_layers=defaultdict(set)
# for obj in totally_all_objects:
#     if not obj['layerid'] in used_layers[obj['stageid']] and obj['layerid'] != 0:
#         unused_layers[obj['stageid']].add(obj['layerid'])

# unused_layers=sorted(unused_layers.items(), key=lambda x: x[0])
# for stageid, layers in unused_layers:
#     print('\n'+stageid+' ('+stagenames[stageid]+'):\n'+', '.join(map(lambda x: str(x),layers)))
#for eexit in all_exits:
#    try:
#        del entrance_set[(eexit['name'], eexit['room'], eexit['entrance'])]
#    except KeyError:
#        pass
