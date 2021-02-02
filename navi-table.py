from util import *

with open('navi_table.dat','rb') as f:
    navi_dat = f.read()

count = read_halfword(navi_dat[0x6:0x6+2])
offset = read_word(navi_dat[0x10:0x10+4])

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*8:offset+(i+1)*8]
    data_blobs.append(unpack('name_offset storyflag data','>ihh', cur_data))
    data_blobs[-1]['name'] = toStr(navi_dat[data_blobs[-1]['name_offset']:])
    del data_blobs[-1]['name_offset']


with open('output/navi-table.json','w') as f:
    f.write(objToJson(data_blobs))


count = read_halfword(navi_dat[0x8:0x8+2])
offset = read_word(navi_dat[0x14:0x14+4])

data_blobs = []

for i in range(count):
    cur_data = navi_dat[offset+i*4:offset+(i+1)*4]
    data_blobs.append(unpack('storyflag data','>hh', cur_data))
    # data_blobs[-1]['name'] = toStr(navi_dat[data_blobs[-1]['name_offset']:])
    # del data_blobs[-1]['name_offset']


with open('output/navi-table3.json','w') as f:
    f.write(objToJson(data_blobs))

data_blobs = []
count2 = read_halfword(navi_dat[0xa:0xa+2])
offset2 = read_word(navi_dat[0x18:0x18+4])

for i in range(count2):
    cur_data = navi_dat[offset2+i*24:offset2+(i+1)*24]
    data_blobs.append(unpack('name_offset storyflag data unk unk2 unk3','>ihh12shh', cur_data))
    data_blobs[-1]['name'] = toStr(navi_dat[data_blobs[-1]['name_offset']:])
    del data_blobs[-1]['name_offset']

with open('output/navi-table2.json','w') as f:
    f.write(objToJson(data_blobs))
