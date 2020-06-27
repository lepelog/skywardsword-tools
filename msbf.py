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

TEXTREPLACEMENTS = {
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x00': '<r<'.encode('utf-16be'),  # red
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x02': '<y+<'.encode('utf-16be'), # yellow-white
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x03': '<b<'.encode('utf-16be'),  # blue
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x04': '<g<'.encode('utf-16be'),  # green
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x05': '<y<'.encode('utf-16be'),  # yellow
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\x00\x09': '<r+<'.encode('utf-16be'), # red-white
    b'\x00\x0E\x00\x00\x00\x03\x00\x02\xFF\xFF': '>>'.encode('utf-16be'),   # end formatting
                
    b'\x00\x0E\x00\x01\x00\x00\x00\x02\xFF\xFF': '[1]'.encode('utf-16be'),  # 1st answer
    b'\x00\x0E\x00\x01\x00\x01\x00\x02\x00\x00': '[2-]'.encode('utf-16be'), # 2nd answer (cancel)
    b'\x00\x0E\x00\x01\x00\x01\x00\x02\xFF\xFF': '[2]'.encode('utf-16be'),  # 2nd answer
    b'\x00\x0E\x00\x01\x00\x02\x00\x02\x00\x00': '[3-]'.encode('utf-16be'), # 3rd answer (cancel)
    b'\x00\x0E\x00\x01\x00\x02\x00\x02\xFF\xFF': '[3]'.encode('utf-16be'),  # 3rd answer
    b'\x00\x0E\x00\x01\x00\x03\x00\x02\x00\x00': '[4-]'.encode('utf-16be'), # 4rd answer (cancel)
    b'\x00\x0E\x00\x01\x00\x03\x00\x02\xFF\xFF': '[4]'.encode('utf-16be'),  # 4th answer
    b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x01': '~'.encode('utf-16be'),    # micro pause
    b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x05': '~~'.encode('utf-16be'),   # short pause
    b'\x00\x0E\x00\x01\x00\x04\x00\x02\x00\x0F': '~~~'.encode('utf-16be'),  # long pause
                
    b'\x00\x0E\x00\x02\x00\x00\x00\x00':         'Link'.encode('utf-16be'), # heroname
    b'\x00\x0E\x00\x02\x00\x04\x00\x02\x00\xCD': '(A)'.encode('utf-16be'),  # A button
    b'\x00\x0E\x00\x02\x00\x04\x00\x02\x01\xCD': '(B)'.encode('utf-16be'),  # B button
    b'\x00\x0E\x00\x02\x00\x04\x00\x02\x06\xCD': '(C)'.encode('utf-16be'),  # C button
    b'\x00\x0E\x00\x02\x00\x04\x00\x02\x07\xCD': '(Z)'.encode('utf-16be'),  # Z button
    b'\x00\x0e\x00\x02\x00\x04\x00\x02\x04\xCD': '(1)'.encode('utf-16be'),  # 1 Button
    b'\x00\x0e\x00\x02\x00\x04\x00\x02\x05\xCD': '(2)'.encode('utf-16be'),  # 1 Button
    b'\x00\x0E\x00\x02\x00\x04\x00\x02\x11\xCD': '(v)'.encode('utf-16be'),  # down button
    b'\x00\x0e\x00\x02\x00\x04\x00\x02\x10\xCD': '(^)'.encode('utf-16be'),  # up Button
}

cumulative_flags_set = [b'\x00'*0x10]*len(flagindex_names)

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
                    assert item['param4'] in (2,3,4)    # number of options
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
            assert two == 2
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
                # decoding special characters:
                for characters, meaning in TEXTREPLACEMENTS.items():
                    bytestring = bytestring.replace(characters, meaning)
                # continue
                
                string = bytestring.decode('utf-16be').replace('\n','\\n').replace('"','\\"')
                string = re.sub(r'[^\x20-\x7e]','_', string)
                parsed['TXT2'].append(string)
        else:
            raise Exception('unimplemented '+seg_id)
    return parsed

# pretty-prints a node from the flow graph
# generates cumulative_flags_set as a side-effect 
def interpretFlow(item, strings, attrs):
    if item['type']=='type1': # type-1 (text)
        msbt_file, msbt_line = item['param3'], item['param4']
        return 'printf(/* textboxtype: %d, unk: %d */ "%s")' % (attrs[msbt_line]['unk1'], attrs[msbt_line]['unk2'], strings[msbt_line])

    elif item['type']=='start': # type-4
        return 'start()'

    elif item['type']=='switch': # type-2
        if item['subType']==6:
            if item['param2']==0 and (item['param3'] == 1 or item['param3']==0): #TODO is there a difference in those choices? 
                return 'switch (choice(%d, %d)) {' % (item['param4'], item['param3'])
            elif item['param3']==3:
                return 'switch (story_flags[%d /* %s */]) {' % (item['param2'], idx_to_story_flag(item['param2']))
            elif item['param3']==5:
                assert item['param4']==2
                return 'switch (loadzone_temp_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(64+item['param2']))
            elif item['param3']==6:
                assert item['param4']==2
                return 'switch (scene_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(item['param2']))
            elif item['param3']==9:
                assert item['param4']==2
                return 'switch (temp_flags[%d /* %s */]) {' % (item['param2'], idx_to_scene_flag(item['param2']))
            elif item['param3']==10:
                assert item['param4']==2
                return 'switch (has_rupees(%d)) {' % item['param2']
            elif item['param3']==11:
                assert item['param4']==2
                assert item['param2']==0
                return 'switch (random(%d)) {' % item['param4']
            elif item['param3']==12:
                assert item['param4']==3
                assert item['param2']==0
                return 'switch (random(%d)) {' % item['param4']
            elif item['param3']==13:
                assert item['param4']==4
                assert item['param2']==0
                return 'switch (random(%d)) {' % item['param4']
            elif item['param3']==19:
                assert item['param4']==2
                return 'switch (adventure_pouch_has(%d 0x%04X)) {' % (item['param2'], item['param2'])
            else:
                assert item['param3'] in (2,7,17,18,21,22)
                return 'switch (%s) {' % str(item)

        elif item['subType']==0:
            if item['param3']==14:
                assert item['param4']==2
                return 'switch (gratitude_crystals(%d)) {' % item['param2'] # TODO this is not only used for gratitude crystals
            elif item['param3']==16:
                return 'switch (minigame_related[%d]) {' % item['param2']
            else:
                assert item['param3'] in (15,20)
                return 'switch (%s) {' % str(item)

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
            elif item['param3']==9 and item['param1']==0:
                return "give_item(%d 0x%02X);" % (item['param2'], item['param2'])
            else:
                assert item['param3'] in (6,24,26,31,32,34,36,37,43,44,45,49,52,53,55,58,59)
                return str(item)

        elif item['subType']==1:
            if item['param3']==2:
                cumulative_flags_set[item['param2']] = setBit(cumulative_flags_set[item['param2']],item['param1'])
                return "scene_flags[%d '%s'][%d /* %s */] = true;" % (item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==3:
                return "scene_flags[%d '%s'][%d /* %s */] = false;" % (item['param2'],flagindex_names[item['param2']],item['param1'],idx_to_scene_flag(item['param1']))
            elif item['param3']==4:
                return "loadzone_temp_flags[%d /* %s */] = true;" % (item['param1'],idx_to_scene_flag(64+item['param1']))
            elif item['param3']==5:
                return "loadzone_temp_flags[%d /* %s */] = false;" % (item['param1'],idx_to_scene_flag(64+item['param1']))
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
            elif item['param3']==28:
                return "temp_flags[%d /* %s */] = true;" % (item['param1'], idx_to_scene_flag(item['param1']))
            elif item['param3']==29:    # assuming it matches 28 (unconfirmed)
                return "temp_flags[%d /* %s */] = false;" % (item['param1'], idx_to_scene_flag(item['param1']))
            else:
                assert item['param3'] in (16,17,23,25,33,35,39,40,42,47,48,50,51,54)
                return str(item)
        
        elif item['subType']==2:
            assert item['param3'] in (14, 15)
            return str(item)
        elif item['subType']==4:
            assert item['param3'] in (13, 22, 30)
            return str(item)
        elif item['subType']==6:
            assert item['param3'] in (12, 38, 46, 56, 57)
            return str(item)
        else:
            raise Exception

if __name__ == "__main__":
    Path("output/").mkdir(exist_ok=True)

    # global names
    world = parseMSB('en_US/0-Common/0-Common/007-MapText.msbt')
    itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
    world = sorted(itr, key=lambda a: a[0])
    with open('output/MapText.json','w') as f:
        f.write(objToJson(collections.OrderedDict(world)))

    world = parseMSB('en_US/0-Common/0-Common/word.msbt')
    itr = ((item['name'], world['TXT2'][item['value']]) for items in world['LBL1'] for item in items)
    world = sorted(itr, key=lambda a: a[0])
    with open('output/word.json','w') as f:
        f.write(objToJson(collections.OrderedDict(world)))

    # events
    for fname in glob.glob('en_US/**/*.msbf', recursive=True):
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
            assert len(already_printed) == len(parsed['FLW3']['flow'])
        
        # output/event: raw event data
        Path("output/event/").mkdir(parents=True, exist_ok=True)
        with open('output/event/'+fname.split(os.sep)[-1].replace('.msbf','.json'),'w', encoding='utf-8') as f:
            f.write(objToJson(parsed))

        # output/event2: interpreted event data
        Path("output/event2/").mkdir(parents=True, exist_ok=True)
        with open('output/event2/'+fname.split(os.sep)[-1].replace('.msbf','.c'),'w', encoding='utf-8') as f:
            printEvflFile(f,parsed,parsedMsbt)

        # output/text: text only
        Path("output/text/").mkdir(parents=True, exist_ok=True)
        with open('output/text/'+fname.split(os.sep)[-1].replace('.msbf','.txt'),'w', encoding='utf-8') as f:
            for line in parsedMsbt['TXT2']:
                f.write(line + '\n')

        # output/cumulSceneFlags.txt: a listing of scene flags found to be set by the event system
        with open('output/cumulSceneFlags.txt','w') as f:
            f.write('> cumulative scene flags:  0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F\n')
            f.write('                          -----------------------------------------------\n')
            for i in range(len(flagindex_names)):
                f.write('%24s  %s\n' % (flagindex_names[i], sprintHex(cumulative_flags_set[i])))
