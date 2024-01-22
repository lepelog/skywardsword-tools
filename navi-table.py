from util import *

with open('navi_table.dat','rb') as f:
    navi_dat = f.read()

count = read_halfword(navi_dat[0x4:0x4+2])
offset = read_word(navi_dat[0x0C:0x0C+4])
block_size = 0x04

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*block_size:offset+(i+1)*block_size]
    data_blobs.append(unpack('storyflag KEN0_entry','>hh', cur_data))

with open('output/navi-table-summary.json','w') as f:
    f.write(objToJson(data_blobs))


count = read_halfword(navi_dat[0x6:0x6+2])
offset = read_word(navi_dat[0x10:0x10+4])
block_size = 0x08

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*block_size:offset+(i+1)*block_size]
    data_blobs.append(unpack('name_offset storyflag KEN1_entry','>ihh', cur_data))
    data_blobs[-1]['name'] = toStr(navi_dat[data_blobs[-1]['name_offset']:])
    del data_blobs[-1]['name_offset']

with open('output/navi-table-hint.json','w') as f:
    f.write(objToJson(data_blobs))


count = read_halfword(navi_dat[0x8:0x8+2])
offset = read_word(navi_dat[0x14:0x14+4])
block_size = 0x04

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*block_size:offset+(i+1)*block_size]
    data_blobs.append(unpack('storyflag KEN2_entry','>hh', cur_data))


with open('output/navi-table-objective.json','w') as f:
    f.write(objToJson(data_blobs))

count = read_halfword(navi_dat[0xa:0xa+2])
offset = read_word(navi_dat[0x18:0x18+4])
block_size = 0x18

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*block_size:offset+(i+1)*block_size]
    # appending split due to the 2 middle arrays
    dict1 = unpack('name_offset storyflag KEN3_danger_entry','>ihh', cur_data[0x00:0x08])
    dict1.update(unpack('shield_damage_type KEN3_shield_warning', '>hh', cur_data[0x14:0x18]))
    per1, per2, per3, per4, val1, val2, val3, val4 = struct.unpack('>4b4h', cur_data[0x08:0x014])
    dict1["sutability_percent"] = [per1,per2,per3,per4]
    dict1["KEN3_sutability_entry"] = [val1,val2,val3,val4]
    data_blobs.append(dict1)
    data_blobs[-1]['name'] = toStr(navi_dat[data_blobs[-1]['name_offset']:])
    del data_blobs[-1]['name_offset']

with open('output/navi-table-analysis.json','w') as f:
    f.write(objToJson(data_blobs))
