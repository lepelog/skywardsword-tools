import re
import glob
from allobjects import all_story_flags, raw_stages
from storyflag import idx_to_story_flag
from collections import defaultdict

# find all storyflags in the events
set_sf_re=re.compile(r'.+story_flags\[([0-9]+) [^[]+\] = ([a-z]+);')
check_sf_re=re.compile(r'.+switch \(story_flags\[([0-9]+) [^[]+\]\) \{')

def add_event_sf(by_sf):
    set_matches=[]
    check_matches=[]

    for file in glob.glob('output/event2/*.c'):
    # for file in glob.glob('output/event2/100-*.c'):
        with open(file) as f:
            shortfile=file[14:]
            for linenr, line in enumerate(f.readlines()):
                setm = set_sf_re.match(line)
                if setm != None:
                    set_matches.append((shortfile, linenr+1, int(setm[1]), setm[2]=='true'))
                checkm = check_sf_re.match(line)
                if checkm != None:
                    check_matches.append((shortfile, linenr+1, int(checkm[1])))
    for match in set_matches:
        link=f'{match[0]}#L{match[1]}'
        by_sf[match[2]].append(f'{"set" if match[3] else "unset"}: [{link}](https://github.com/lepelog/skywardsword-tools/blob/output/event2/{link})')
    for match in check_matches:
        link=f'{match[0]}#L{match[1]}'
        by_sf[match[2]].append(f'checked: [{link}](https://github.com/lepelog/skywardsword-tools/blob/output/event2/{link})')

def add_EVNT_sf(by_sf):
    for stage, stagedata in raw_stages.items():
        for rid, room in stagedata.get('rooms',{}).items():
            for idx, evnt in enumerate(room.get('EVNT',[])):
                txt = f'EVNT ({stage}, {rid}, idx:{idx}, {evnt["name"]})'
                if evnt['story_flag1'] != -1:
                    by_sf[evnt['story_flag1']].append(txt)
                if evnt['story_flag2'] != -1:
                    by_sf[evnt['story_flag2']].append(txt)
print('| index | memory | meaning | sources |\n| ---- | ---- | ---- | ---- |')
by_sf=defaultdict(list)
add_event_sf(by_sf)
add_EVNT_sf(by_sf)
# storyflags=[]
for fidx, flag in enumerate(all_story_flags):
    print(f'{fidx} | {idx_to_story_flag(fidx)} | {flag} | {", ".join(by_sf[fidx])} |')

# set_evnts=[]
# for name, stage in all_stages.items():
#     for i, evnt in enumerate(stage.get('EVNT',[])):
#         if evnt['story_flag1'] != -1:
#             set_evnts.append((name, i,))