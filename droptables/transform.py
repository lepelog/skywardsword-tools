from collections import defaultdict
import json

def process_raw():

    drop_tables=[]

    current_drop_table = None

    with open('out.txt') as f:
        lines = f.readlines()
        for line in lines:
            if line.startswith("newset"):
                _, specialItemId, hasBow, hasSlingshot, isHeroMode, hasBombs = line.strip().split(',')
                if current_drop_table:
                    drop_tables.append(current_drop_table)
                current_drop_table = {
                    "specialItemId": specialItemId,
                    "hasBow": hasBow == '1',
                    "hasSlingshot": hasSlingshot == '1',
                    "isHeroMode": isHeroMode == '1',
                    "hasBombs": hasBombs == '1',
                    "dropRates": defaultdict(int)
                }
            else:
                _, item = line.strip().split(':')
                current_drop_table['dropRates'][item] += 1
        if current_drop_table:
            drop_tables.append(current_drop_table)

    with open('out.json','w') as f:
        json.dump(drop_tables, f, indent=2)

ENTRY_TYPES = ["hasBow", "hasSlingshot", "isHeroMode", "hasBombs"]

def extract_entry_types(entry):
    entry_types = {}
    for t in ENTRY_TYPES:
        if (e := entry.get(t)) is not None:
            entry_types[t] = e
    return entry_types

def compare_entry_types(entry_types):
    return lambda entry: all((entry[t] == entry_types[t] for t in entry_types.keys()))

def try_consolidate(entry_list, entry_type):
    # for each entry, check if it's equivalent to the entry where the entry type is different
    for entry in entry_list:
        entry_types = extract_entry_types(entry)
        entry_types[entry_type] = not entry_types[entry_type]
        other_entry = next(filter(compare_entry_types(entry_types), entry_list))
        if entry["dropRates"] != other_entry["dropRates"]:
            # can't consolidate: this entry type makes a difference
            return entry_list
    
    # this entry_type doesn't matter; remove it
    # keep the entries where this type was true
    new_entry_list = list(filter(lambda entry: entry[entry_type], entry_list))
    for entry in new_entry_list:
        entry.pop(entry_type)
    
    return new_entry_list

def consolidate_all(entry_list):
    for entry_type in ENTRY_TYPES:
        entry_list = try_consolidate(entry_list, entry_type)
    return entry_list

def process_consolidate():
    with open('out.json') as f:
        data = json.load(f)
    
    by_special_item_id = defaultdict(list)
    for entry in data:
        d = entry.pop('specialItemId')
        by_special_item_id[d].append(entry)
    
    processed = {sp_item_id: consolidate_all(entry_list) for sp_item_id, entry_list in by_special_item_id.items()}

    with open('by_special_item_id.json', 'w') as f:
        json.dump(processed,f, indent=2)

def process_markdown():
    with open('by_special_item_id.json') as f:
        data = json.load(f)
    
    texts = {
        "hasBow": ["No Bow", "Bow"],
        "hasSlingshot": ["No Slingshot", "Slingshot"],
        "isHeroMode": ["Normal Mode", "Hero Mode"],
        "hasBombs": ["No Bombs", "Bombs"],
    }
    
    with open('droptable.md', 'w') as f:
        f.write("# Drop Tables\n")
        f.write("The highest byte in params2 determines which entry is used\n")
        for sp_item_id, entry_list in data.items():
            f.write(f"## {sp_item_id} (0x{int(sp_item_id):X})\n")
            for entry in entry_list:
                if len(entry_list) > 0:
                    subtitle = ', '.join((texts[t][entry[t]] for t in ENTRY_TYPES if t in entry))
                    f.write(f"### {subtitle}\n")
                if entry['dropRates'].get('ITEM_NONE') == 100:
                    f.write("No drop\n\n")
                else:
                    f.write("| Item | Chance |\n")
                    f.write("|---|---|\n")
                    # sort drops and don't show ITEM_NONE
                    sorted_drops = sorted(filter(lambda x: x[0] != 'ITEM_NONE', entry['dropRates'].items()), key=lambda x: x[1], reverse=True)
                    for item, chance in sorted_drops:
                        # remove ITEM_ prefix
                        f.write(f"| {item[5:]} | {chance}% |\n")
                    f.write("\n")

process_markdown()
