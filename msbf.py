from pathlib import Path
import glob
import pprint
import struct
import collections
import os
import re
from util import *
from storyflag import idx_to_story_flag
import sceneChanges

pause_re = re.compile(b'\x00\x0E\x00\x01\x00\x04\x00\x02(..)',re.DOTALL)
item_re = re.compile(b'\x00\x0E\x00\x02\x00\x01\x00\x02(..)',re.DOTALL)
call_next_entrypoint_re = re.compile(b'\x00\x0E\x00\x01\x00\x0C\x00\x04\x00\x06(..)',re.DOTALL)

COLORS = {
    0: "red",
    1: "also red",
    2: "yellow white",
    3: "blue",
    4: "green",
    5: "yellow",
    6: "fi",
    7: "green rupee",
    8: "blue rupee",
    9: "red rupee",
    10: "silver",
    11: "gold",
    12: "black",
}

ICONS = {
    0: '(A)',  # A button
    1: '(B)',  # B button
    2: '(-)',  # - button
    3: '(+)',  # + button
    4: '(1)',  # 1 Button
    5: '(2)',  # 2 Button
    6: '(C)',  # C button
    7: '(Z)',  # Z button
    8: '(ControlStick2)',
    9: '(StickUp)',
    14: '(ControlStick)',
    17: '(v)',  # down button
    16: '(^)',  # up Button
    24: '(Hand)',
    25: '(X)', # marker X
    26: '(O)', # insect marker

}

LANGS = ['de_DE','en_GB','es_ES','fr_FR','it_IT','en_US','es_US','fr_US','de_DE_hd','en_GB_hd','es_ES_hd','fr_FR_hd','it_IT_hd','en_US_hd','es_US_hd','fr_US_hd','nl_NL_hd']
# LANGS = ['en_US']

cumulative_flags_set = [b'\x00'*0x10]*len(flagindex_names)

def process_utf16_ss(byts: bytes) -> str:
    cur_pos = 0
    out_str = ""
    while cur_pos < len(byts):
        cur_char = struct.unpack(">H", byts[cur_pos:cur_pos + 2])[0]
        if cur_char == 0xE:
            command, extra_len = struct.unpack(">IxB", byts[cur_pos + 2:cur_pos + 8])
            extra_bytes = byts[cur_pos+8:cur_pos+8+extra_len]
            cur_pos += extra_len + 8
            out_str += process_text_cmd(command, extra_bytes)
        else:
            char = byts[cur_pos:cur_pos + 2].decode('utf-16be')
            out_str += char
            cur_pos += 2
    return out_str

unknown_commands = set()

def process_text_cmd(command, extra_bytes) -> str:
    if command == 3:
        color_cmd, = struct.unpack(">h", extra_bytes)
        if color_cmd == -1:
            return ">coloroff>"
        else:
            return f"<color {COLORS.get(color_cmd, color_cmd)}<"
    elif command == 0x1000C:
        index, entrypoint = struct.unpack(">HH", extra_bytes)
        return f"<entrypoint_{index}_{entrypoint}>"
    elif command == 0x10004:
        duration, = struct.unpack(">H", extra_bytes)
        return f"<pause {duration}>"
    elif command == 0x1000B:
        sound, = struct.unpack(">I", extra_bytes)
        return f"<sound {sound}>"
    elif command == 0x20000:
        return f"<heroname>"
    elif command == 0x20001:
        item, = struct.unpack(">H", extra_bytes)
        return f"<item {item}>"
    elif command == 0x20003:
        index, a0, a1 = struct.unpack(">IBB", extra_bytes)
        assert a1 == 0xCD
        return f"<numeric arg{index} {a0}>"
    elif command == 0x20004:
        index, cd = struct.unpack(">BB", extra_bytes)
        assert cd == 0xCD
        if icon := ICONS.get(index):
            return icon
        else:
            return f"<icon {index}>"
    elif command == 0x20002:
        index, = struct.unpack(">I", extra_bytes)
        return f"<string arg{index}>"
    elif command in (0x10000, 0x10001, 0x10002, 0x10003):
        extra = ""
        if extra_bytes == b'\xFF\xFF':
            extra = "-" # cancel
        if extra_bytes == b'\xFF\x00':
            extra = "?" # cancel but different?
        return f"[{command + 1 & 0xFF}{extra}]"
    else:
        unknown_commands.add(command)
        return f"<0x{command:X}:0x{extra_bytes.hex()}>"

def parseMSB(fname):
    print(fname)
    f = open(fname,'rb')
    f.seek(0x20)

    parsed = collections.OrderedDict()

    while True:
        seg_header = f.read(0x10)
        if len(seg_header) <= 0:
            break
        seg_id, seg_len = struct.unpack('>4si8x',seg_header)
        seg_id = seg_id.decode('ascii')
        seg_data = f.read(seg_len)
        f.read(-seg_len%0x10) # pad to next multiple of 0x10

        if seg_id == 'FLW3':
            parsed['FLW3'] = collections.OrderedDict()
            parsed['FLW3']['flow'] = collections.OrderedDict()
            parsed['FLW3']['branch_points'] = []
            count1, count2 = struct.unpack('>hh12x',seg_data[:0x10])
            for i in range(count1): # for every node in FLW3
                item = unpack('type subType param1 param2 next param3 param4 param5','>bb2xhhhhhh',seg_data[0x10+0x10*i:0x20+0x10*i])
                item_id = i
                assert item['type'] in (1,2,3,4)
                item['type'] = ['type1','switch','type3','start'][item['type']-1]
                #unk1: -1 to 13311
                #flagId: -256 to 20480
                #next: -1 to 1016
                #unk4: 0 to 201
                #nextTrue: 0 to 262
                #nextFalse: 0 to 512
                if item['type'] == 'type1': # text
                    assert item.pop('subType') == -1
                    assert item.pop('param1') == 0
                    assert item.pop('param2') == 0
                    # param3 : file index
                    # param4 : line index
                    assert item.pop('param5') == 0
                elif item['type'] == 'switch':
                    assert item['subType'] in (0,6)
                    assert item.pop('param1') == 0
                    assert item['param2'] >= 0
                    assert item.pop('next') == -1
                    assert item['param3'] >= 0
                    assert item['param4'] in (2,3,4,5)    # number of options
                    assert item['param5'] >= 0          # index into branch_points of first item
                elif item['type'] == 'type3':
                    assert item['subType'] in (0,1,2,4,6)
                    assert item.pop('param4') == 0
                    assert item.pop('param5') == 0
                elif item['type'] == 'start':
                    assert item.pop('subType') == -1
                    assert item.pop('param1') == 0
                    assert item.pop('param2') == 0
                    assert item.pop('param3') == 0
                    assert item.pop('param4') == 0
                    assert item.pop('param5') == 0
                else:
                    raise Exception('wat')
                parsed['FLW3']['flow'][item_id] = item
            for i in range(count2): # for every branch point
                item = struct.unpack('>h',seg_data[0x10+0x10*count1+2*i:0x12+0x10*count1+2*i])[0]
                parsed['FLW3']['branch_points'].append(item)

        elif seg_id == 'FEN1' or seg_id == 'LBL1':
            parsed[seg_id] = []
            count = struct.unpack('>i',seg_data[:4])[0]
            for i in range(count):
                count, ptr = struct.unpack('>ii',seg_data[4+8*i:0xC+8*i])
                entrypoint_group = []
                for _ in range(count):
                    strlen = seg_data[ptr]
                    string = seg_data[1+ptr:1+ptr+strlen].decode('ascii')
                    value = struct.unpack('>i',seg_data[1+ptr+strlen:5+ptr+strlen])[0]
                    entrypoint = collections.OrderedDict()
                    entrypoint['name']=string
                    entrypoint['value']=value
                    entrypoint_group.append(entrypoint)
                    ptr += 5+strlen
                parsed[seg_id].append(entrypoint_group)

        elif seg_id == 'ATR1':
            parsed['ATR1'] = []
            count, two = struct.unpack('>ii',seg_data[:8])
            # assert two == 2
            for i in range(count):
                value = struct.unpack('>bb',seg_data[8+2*i:8+2*(i+1)])
                atr = collections.OrderedDict()
                atr['unk1'] = value[0] # 0 to 33 (inclusive), probably textbox type
                atr['unk2'] = value[1] # 0 to 3 (inclusive)
                parsed['ATR1'].append(atr)

        elif seg_id == 'TXT2':
            parsed['TXT2'] = []
            count = struct.unpack('>i',seg_data[:4])[0]
            assert count == len(parsed["ATR1"])
            indices = [struct.unpack('>i',seg_data[4+4*i : 8+4*i])[0] for i in range(count)]
            for i in range(count): # for every item of text
                bytestring = seg_data[indices[i] : (indices[i+1] if i + 1 < count else seg_len) - 2]
                
                string = process_utf16_ss(bytestring).replace('\n','\\n').replace('"','\\"')
                parsed['TXT2'].append(string)
        else:
            raise Exception('unimplemented '+seg_id)
    return parsed

# pretty-prints a node from the flow graph
# generates cumulative_flags_set as a side-effect 
def interpretFlow(item, strings, attrs):
    if item['type']=='type1': # type-1 (text)
        msbt_file, msbt_line = item['param3'], item['param4']
        # return 'printf(/* textboxtype: %d, unk: %d, line: %d */ "%s")' % (attrs[msbt_line]['unk1'], attrs[msbt_line]['unk2'], msbt_line, strings[msbt_line])
        return 'printf("%s")' % strings[msbt_line]

    elif item['type']=='start': # type-4
        return 'start()'

    elif item['type']=='switch': # type-2
        if item['subType']==6:
            if item['param2']==0 and (item['param3'] in (0,1,2)):
                assert item['param3'] == item['param4']-2 # different param3 for different amount of options
                return 'switch (choice(%d)) {' % (item['param4'])
            elif item['param3']==3:
                return 'switch (story_flags[%d /* %s */]) {' % (item['param2'], idx_to_story_flag(item['param2']))
            elif item['param3']==5:
                assert item['param4']==2
                return 'switch (zone_temp_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(item['param2']))
            elif item['param3']==6:
                assert item['param4']==2
                return 'switch (scene_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(item['param2']))
            elif item['param3']==9:
                assert item['param4']==2
                return 'switch (temp_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(item['param2']))
            elif item['param3']==10:
                assert item['param4']==2
                return 'switch (has_rupees(%d)) {' % item['param2']
            elif item['param3'] in (11,12,13):
                assert item['param4']==item['param3']-9 # uses different param3 for different amount of options
                assert item['param2']==0
                return 'switch (random(%d)) {' % item['param4']
            elif item['param3']==17:
                assert item['param4']==2
                assert item['param2']==0
                return 'switch (is_adventure_pouch_full()) {'
            elif item['param3']==19:
                assert item['param4']==2
                return 'switch (adventure_pouch_has(%d 0x%04X)) {' % (item['param2'], item['param2'])
            elif item['param3']==18:
                assert item['param2']==0
                return 'switch (has_empty_bottle()) {' # is only used to check if you can catch a fairy
            else:
                # 21 has 2 options, 22 has 4, both only appear related to fi
                # 7 seems to be contextually for something computed above that statement
                # assert item['param3'] in (7,21,22)
                return 'switch (%s) {' % str(item)

        elif item['subType']==0:
            if item['param3']==14:
                assert item['param4']==2
                # all of these are typically used for minigames, to seperate different results, but they're also used for gratitude crystal rewards
                # so they might be some kind of actor context
                return 'switch (context_related2(%d)) {' % item['param2']
            if item['param3']==15:
                assert item['param4']==3
                return 'switch (context_related3(%d)) {' % item['param2']
            if item['param3']==16:
                assert item['param4']==4
                return 'switch (context_related4(%d)) {' % item['param2']
            elif item['param3']==20:
                assert item['param4']==2
                assert item['param2']==0
                return 'switch (is_item_check_full()) {'
            else:
                raise Exception

        else:
            raise Exception

    elif item['type']=='type3': # type-3
        if item['subType']==0:
            if item['param3']==0 and item['param1']==0:
                return "story_flags[%d /* %s */] = true;" % (item['param2'], idx_to_story_flag(item['param2']))
            elif item['param3']==1 and item['param1']==0:
                return "story_flags[%d /* %s */] = false;" % (item['param2'], idx_to_story_flag(item['param2']))
            elif item['param3']==8:
                return "rupees += %d;" % item['param2']
            elif item['param3']==9:
                assert item['param1']==0
                return "give_item(%d 0x%02X);" % (item['param2'], item['param2'])
            elif item['param3']==43:
                assert item['param1'] == 0
                return "give_gratitude_crystals();"
            elif item['param3']==53:
                assert item['param1']==0
                return "set_item_flag(%d /* 0x%02X */);" % (item['param2'], item['param2'])
            elif item['param3'] == 59:
                assert item['param1']==0
                assert item['param2']==0
                return "open_collection_screen();"
            elif item['param3'] == 6:
                # param1 is part of the wait time as well, but always 0
                return "wait_frames(%d)" % item['param2']
            else:
                # assert item['param3'] in (24,26,31,32,34,36,37,44,45,49,52,53,55,58,59)
                return str(item)

        elif item['subType']==1:
            if item['param3']==2:
                cumulative_flags_set[item['param2']] = setBit(cumulative_flags_set[item['param2']],item['param1'])
                return "scene_flags[%d '%s'][%d /* %s */] = true;" % (item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==3:
                return "scene_flags[%d '%s'][%d /* %s */] = false;" % (item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==4:
                return "zone_temp_flags[%d /* %s */] = true;" % (item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==5:
                return "zone_temp_flags[%d /* %s */] = false;" % (item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==7:
                assert item['next'] == -1
                return "entrypoint_%03d_%02d();" % (item['param1'], item['param2'])
            elif item['param3']==10:
                scen = None
                if '460' in fname:
                    scen = sceneChanges.sc460
                elif '008' in fname:
                    scen = sceneChanges.sc008
                return "changeScene(%d, %d) // %s" % (item['param1'], item['param2'], scen[item['param1']] if scen is not None else '')
            elif item['param3']==23:
                return "check_item_flag(%d, %d)" % (item['param1'], item['param2'])
            elif item['param3']==25:
                return "add_to_counter(%d, %d)" % (item['param1'], item['param2'])
            elif item['param3']==28:
                return "temp_flags[%d /* %s */] = true;" % (item['param1'], idx_to_scene_flag(item['param1']))
            elif item['param3']==29:    # assuming it matches 28 (unconfirmed)
                return "temp_flags[%d /* %s */] = false;" % (item['param1'], idx_to_scene_flag(item['param1']))
            elif item['param3']==33:
                return "make_actor_do_something(%d, %d)" % (item['param1'], item['param2'])
            elif item['param3']==39:
                return "set_camera(%d, %d)"%(item['param1'], item['param2'])
            else:
                assert item['param3'] in (16,17,23,25,33,35,40,42,47,48,50,51,54)
                return str(item)
        
        elif item['subType']==2:
            assert item['param3'] in (14, 15)
            return str(item)
        elif item['subType']==4:
            assert item['param3'] in (13, 22, 30)
            return str(item)
        elif item['subType']==6:
            if item['param3'] == 38:
                assert item['param1'] == 0
                return "open_item_wheel(%d)"%item['param2']
            if item['param3'] == 57:
                assert item['param1'] == 0
                return "open_adventure_pouch(%d)"%item['param2']
            if item['param3'] == 56:
                assert item['param1'] == 0
                return "open_dowsing_wheel(%d)"%item['param2']
            assert item['param3'] in (12, 46)
            return str(item)
        else:
            raise Exception

if __name__ == "__main__":
    Path("output/").mkdir(exist_ok=True)

    for lang in LANGS:
        outdir = Path("output") / lang
        outdir.mkdir(exist_ok=True)
        # global names
        world = parseMSB(f'{lang}/0-Common/0-Common/007-MapText.msbt')
        itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
        world = sorted(itr, key=lambda a: a[0])
        (outdir / 'MapText.json').write_text(objToJson(collections.OrderedDict(world)), encoding='utf-8')

        world = parseMSB(f'{lang}/0-Common/0-Common/word.msbt')
        itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
        world = sorted(itr, key=lambda a: a[0])
        (outdir / 'word.json').write_text(objToJson(collections.OrderedDict(world)), encoding='utf-8')

        # events
        for fname in glob.glob(f'{lang}/**/*.msbf', recursive=True):
            parsed = parseMSB(fname)
            parsedMsbt = parseMSB(fname.replace('.msbf','.msbt'))
            
            def printItem(allItems,lines,itemId,indent,already_printed,needed_labels,strings,attrs):
                if itemId is -1:
                    return
                if itemId in already_printed:
                    needed_labels.add(itemId)
                    lines.append((None,indent,'goto flw_'+str(itemId)))
                    return
                already_printed.add(itemId)
                item = allItems['flow'][itemId]
                lines.append((itemId, indent, interpretFlow(item, strings, attrs)))
                if item['type'] == 'switch':    # recursively expand switch
                    for i in range(item['param4']):
                        lines.append((None,indent,'  case %d:'%i))
                        printItem(allItems,lines,allItems['branch_points'][item['param5']+i],indent+1,already_printed,needed_labels,strings,attrs)
                    lines.append((None,indent,'}'))
                if 'next' in item:              # continue
                    printItem(allItems,lines,item['next'],indent,already_printed,needed_labels,strings,attrs)
                    
            def printEvflFile(file,parsed,parsedMsbt):
                lines = []
                already_printed = set()
                needed_labels = set()
                for entrypoint_group in parsed['FEN1']:
                    for entrypoint in entrypoint_group:
                        lines.append((None,0,'void entrypoint_'+entrypoint['name']+'() {'))
                        printItem(parsed['FLW3'],lines,entrypoint['value'],1,already_printed,needed_labels,parsedMsbt['TXT2'], parsedMsbt['ATR1'])
                        lines.append((None,0,'}\n'))
                for lineId,indent,lineStr in lines:
                    if lineId in needed_labels:
                        file.write(' '*10+'\t'*indent+'flw_'+str(lineId)+':\n')
                    if lineStr is not None:
                        file.write(('/*<%3d>*/ '%(lineId) if lineId else ' '*10)+'\t'*indent+lineStr+'\n')
                # assert len(already_printed) == len(parsed['FLW3']['flow'])

            text_index_to_label = {}
            for labelrow in parsedMsbt['LBL1']:
                for label in labelrow:
                    text_index_to_label[label['value']] = label['name']
            
            filename = fname.split(os.sep)[-1]
            # output/event: raw event data
            (outdir / "event").mkdir(parents=True, exist_ok=True)
            (outdir / "event" / filename.replace('.msbf','.json')).write_text(objToJson(parsed), encoding='utf-8')
            # (outdir / "event" / filename.replace('.msbf','_text.json')).write_text(objToJson(parsedMsbt), encoding='utf-8')

            # output/event2: interpreted event data
            (outdir / "event2").mkdir(parents=True, exist_ok=True)
            with (outdir / "event2" / filename.replace('.msbf','.c')).open('w', encoding='utf-8') as f:
                printEvflFile(f,parsed,parsedMsbt)

            # output/text: text only
            (outdir / "text").mkdir(parents=True, exist_ok=True)
            with (outdir / "text" / filename.replace('.msbf','.txt')).open('w', encoding='utf-8') as f:
                for linenum, line in enumerate(parsedMsbt['TXT2']):
                    f.write(text_index_to_label[linenum] + ': ' + line + '\n')

        # output/cumulSceneFlags.txt: a listing of scene flags found to be set by the event system
        with open('output/cumulSceneFlags.txt','w') as f:
            f.write('> cumulative scene flags:  0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n')
            f.write('                          -----------------------------------------------\n')
            for i in range(len(flagindex_names)):
                f.write('%24s  %s\n' % (flagindex_names[i], sprintHex(cumulative_flags_set[i])))
    print(unknown_commands)
