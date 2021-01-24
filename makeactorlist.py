import json

# actor_id, internal_name, stage_name, rel_name
actor_list = []

with open('actor_names.json') as f:
    actor_names = json.load(f)
    for i, name in enumerate(actor_names):
        actor_list.append({'actor_id':i, 'name':name, 'obj_name':'', 'rel_name':''})

with open('obj_table.json') as f:
    obj_table = json.load(f)
    for obj in obj_table:
        actor_list[obj['actor_id']]['obj_name'] = obj['name']
        rel_name = obj['rel_name']
        if rel_name != '?':
            actor_list[obj['actor_id']]['rel_name'] = rel_name

with open('actor_list.md','w') as f:
    f.write('| Actor Id | Name | OBJ Name | REL Name |\n| ---- | ---- | ---- | ---- |\n')
    for actor in actor_list:
        f.write(f'| {actor["actor_id"]:03} (0x{actor["actor_id"]:03X}) | {actor["name"]} | {actor["obj_name"]} | {actor["rel_name"]} | \n')

with open('actor_list.json','w') as f:
    json.dump(actor_list, f, indent=4)