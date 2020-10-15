import re
import glob
import json
import os.path

foundevents={}

basepath = os.path.abspath(os.path.dirname(__file__))

eventstart=re.compile(r' *void entrypoint_([0-9]+)_([0-9]+)\(\) {')
for fil in glob.glob(basepath+'/output/event2/*.c'):
    with open(fil) as f:
        for linenum, line in enumerate(f):
            match=eventstart.match(line)
            if match:
                fname=os.path.split(fil)[1]
                foundevents[int(match[1]+match[2])] = '{}#L{}'.format(fname,linenum+1)

# def entrypoint_hash(name: str, entries: int) -> int:
#     hash = 0
#     for char in name:
#         hash = (hash * 0x492 + ord(char)) & 0xFFFFFFFF
#     return hash % entries

# for fil in glob.glob(basepath+'/output/event/*.json'):
#     with open(fil) as f:
#         evnt = json.load(f)
#     entrysize = len(evnt['FEN1'])
#     for bucknum, entrybuck in enumerate(evnt['FEN1']):
#         for entry in entrybuck:
#             if bucknum == entrypoint_hash(entry['name'], entrysize):
#                 print("match for %s" % entry['name'])
#             else:
#                 print("didn't match for %s" % entry['name'])