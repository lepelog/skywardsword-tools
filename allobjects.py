import json
import glob
import os.path
try:
    from .util import *
except ImportError:
    from util import *
try:
    from .eventnumbers import foundevents
except ImportError:
    from eventnumbers import foundevents

basepath = os.path.abspath(os.path.dirname(__file__))

with open(basepath + '/allsceneflags.json') as f:
    all_scene_flags=json.load(f)

with open(basepath + '/allstoryflags.json') as f:
    all_story_flags=json.load(f)

with open(basepath + '/allitems.json') as f:
    all_items=json.load(f)

all_stages={}

totally_all_objects=[]
raw_stages={}
all_ENVTS=[]
all_AREAS=[]
all_PLY=[]

sizeobjs = ('SOBS','SOBJ','STAS','STAG','SNDT')
objs = ('OBJS','OBJ ','DOOR')
allobjtypes = sizeobjs + objs + ('AREA',)

# iterate through all object to attach some extra info/get bounds
for stagefile in glob.glob(basepath + '/output/stage/*.json'):
    
    output={}
    output['stageid']=os.path.split(stagefile)[-1][:-5]
    output['stagename']=stagenames[output['stageid']]

    maxx=0
    minx=0
    maxz=0
    minz=0
    all_objects=[]

    with open(stagefile) as f:
        raw_stage=json.load(f)
        raw_stages[output['stageid']]=raw_stage
        stage={'rooms': raw_stage['rooms']}
        for (objt, objects) in raw_stage.items():
            if not objt in allobjtypes:
                continue
            for obj in objects:
                # find min max bounds
                maxx=max(maxx,obj['posx'])
                maxz=max(maxz,obj['posz'])
                minx=min(minx,obj['posx'])
                minz=min(minz,obj['posz'])

                obj['type'] = objt
                obj['roomid'] = -1
                obj['layerid'] = 0
                obj['stageid'] = output['stageid']
                all_objects.append(obj)
                totally_all_objects.append(obj)
        for (lid, layer) in raw_stage['LAY '].items():
            for (objt, objects) in layer.items():
                if not objt in allobjtypes:
                    continue
                for obj in objects:
                    # find min max bounds
                    maxx=max(maxx,obj['posx'])
                    maxz=max(maxz,obj['posz'])
                    minx=min(minx,obj['posx'])
                    minz=min(minz,obj['posz'])

                    obj['type'] = objt
                    obj['roomid'] = -1
                    obj['layerid'] = int(lid[1:])
                    obj['stageid'] = output['stageid']
                    all_objects.append(obj)
                    totally_all_objects.append(obj)
        for (rid, room) in stage['rooms'].items():
            if 'EVNT' in room:
                all_ENVTS.extend(room['EVNT'])
            all_PLY.extend(room.get('PLY ',[]))
            for obj in room.get('AREA',[]):
                # find min max bounds
                maxx=max(maxx,obj['posx'])
                maxz=max(maxz,obj['posz'])
                minx=min(minx,obj['posx'])
                minz=min(minz,obj['posz'])

                obj['type'] = 'AREA'
                obj['name'] = 'AREA'
                obj['roomid'] = int(rid[1:])
                obj['layerid'] = 0 # no layer would be more accurate
                obj['stageid'] = output['stageid']
                all_objects.append(obj)
                totally_all_objects.append(obj)
            for (objt, objects) in room.items():
                if not objt in allobjtypes:
                    continue
                for obj in objects:
                    # find min max bounds
                    maxx=max(maxx,obj['posx'])
                    maxz=max(maxz,obj['posz'])
                    minx=min(minx,obj['posx'])
                    minz=min(minz,obj['posz'])

                    obj['type'] = objt
                    obj['roomid'] = int(rid[1:])
                    obj['layerid'] = 0
                    obj['stageid'] = output['stageid']
                    all_objects.append(obj)
                    totally_all_objects.append(obj)
            for (lid, layer) in room['LAY '].items():
                for (objt, objects) in layer.items():
                    if not objt in allobjtypes:
                        continue
                    for obj in objects:
                        # find min max bounds
                        maxx=max(maxx,obj['posx'])
                        maxz=max(maxz,obj['posz'])
                        minx=min(minx,obj['posx'])
                        minz=min(minz,obj['posz'])

                        obj['type'] = objt
                        obj['roomid'] = int(rid[1:])
                        obj['layerid'] = int(lid[1:])
                        obj['stageid'] = output['stageid']
                        all_objects.append(obj)
                        totally_all_objects.append(obj)
    
    # repeat for every stage
    used_layers=sorted(set(obj['layerid'] for obj in all_objects))
    used_rooms=sorted(set(obj['roomid'] for obj in all_objects))

    output['maxx']=maxx
    output['minx']=minx
    output['maxz']=maxz
    output['minz']=minz
    output['usedLayers']=used_layers
    output['usedRooms']=used_rooms
    output['allObjects']=all_objects

    all_stages[output['stageid']]=output

for obj in totally_all_objects:
    if obj.get('talk_behaviour',None) in foundevents:
        if not 'extra_info' in obj:
            obj['extra_info'] = {}
        obj['extra_info']['eventSrc'] = foundevents[obj['talk_behaviour']]
    if obj.get('extra_info',{}).get('talk_behaviour',None) in foundevents:
        obj['extra_info']['eventSrc'] = foundevents[obj['extra_info']['talk_behaviour']]

# typnamemap = collections.OrderedDict()
# for typ in allobjtypes:
#     typnamemap[typ] = collections.Counter((a['name'] for a in totally_all_objects if a['type']==typ))

# for typ, counter in typnamemap.items():
#     print('\n'+typ+':')
#     for item, count in counter.most_common():
#         print('%s: %d'%(item,count))

# all_unknown=[]
# for i, stages in enumerate(flagindex_to_stages):
#     for stage in stages:
#         for obj in all_stages[stage]['allObjects']:
#             if 'extraInfo' in obj and 'flagid' in obj['extraInfo']:
#                 flagid=obj['extraInfo']['flagid']
#                 if flagid>=0:
#                     flagdesc=all_scene_flags[i]['sceneflags'][flagid]
#                     if flagdesc.strip()=='' or '[' in flagdesc:
#                         all_unknown.append(obj)
# blacklist=set(('posx','posy','posz','sizex','sizey','sizez','extraInfo'))
# info=collections.defaultdict(set)

# for obj in totally_all_objects:
#     if obj['name'] == 'NpcTke':
#         for k,v in obj.items():
#             if not k in blacklist:
#                 info[k].add(v)