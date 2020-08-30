import json
import collections
import struct

def toStr(bytestr):
    return bytestr.split(b'\x00',1)[0].decode('shift-jis')

def encodeBytes(bytestr):
    return ' '.join(['%02X'%x for x in bytestr])

def objToJson(parsed):
    return json.dumps(parsed,indent=4,ensure_ascii=True,allow_nan=False,default=encodeBytes)

def unpack(fields, formatstr, item):
    return collections.namedtuple('_',fields)._make(struct.unpack(formatstr,item))._asdict()

def sprintHex(bytestr):
    return ' '.join('%02X'%x for x in bytestr)

def bitOr(bytestr1, bytestr2):
    return bytes([a|b for a,b in list(zip(bytestr1,bytestr2))])

def setBit(bytestr, bitindex):
    assert 0<=bitindex<=127
    bits = [0]*16
    bits[(bitindex//8)^1] |= (1 << (bitindex%8))
    return bitOr(bytestr, bits)

fix=[(1,'01'),(1,'02'),(1,'04'),(1,'08'),(1,'10'),(1,'20'),(1,'40'),(1,'80'),(0,'01'),(0,'02'),(0,'04'),(0,'08'),(0,'10'),(0,'20'),(0,'40'),(0,'80')]
def idx_to_scene_flag(idx):
    rest=idx%16
    return '0x{:01X} '.format(idx//16*2+fix[rest][0])+str(fix[rest][1])

def flag_id_to_sheet_rep(idx):
    if idx == 255:
        return 'no flag'
    elif idx >= 0 and idx < 128:
        return 'scene flag: '+idx_to_scene_flag(idx)
    elif idx >= 128 and idx < 192:
        return 'temp flag: '+idx_to_scene_flag(idx-128)
    elif idx >= 192 and idx < 255:
        return 'zone temp flag: '+idx_to_scene_flag(idx-192)
    elif idx < 0:
        return flag_id_to_sheet_rep(idx+255)
    else:
        raise Exception('invalid areaflagid!')

def read_halfword(btes):
    return struct.unpack('>H',btes)[0]

def read_word(btes):
    return struct.unpack('>I',btes)[0]

flagindex_to_stages = [
                   ["D000","F000","F001r","F002r","F004r","F005r","F006r","F007r",
                    "F008r","F009r","F012r","F013r","F014r","F015r","F016r","F017r","F018r"],
                   ["F100","F100_1","F101"],
                   ["F102","F102_1","F102_2"],
                   ["F103","F103_1"],
                   ["F200","F202_3","F202_4","F210","F211"],
                   ["F201_1","F201_2","F201_3","F201_4","F202","F202_1","F202_2","F221"],
                   # unused
                   [],
                   ["F300","F300_1","F300_2","F300_3","F300_4"],
                   ["F301","F301_1","F301_2","F301_3","F301_4","F301_5","F301_6","F301_7"],
                   ["F302","F303"],
                   ["B400","F400","F401","F402","F403","F404","F406","F407"],
                   ["B100","B100_1","D100"],
                   ["B101","B101_1","D101"],
                   # unused
                   [],
                   ["B200","B210","D200"],
                   ["B201","B201_1","D201","D201_1"],
                   [],
                   ["D300","D300_1","B300","F300_5"],
                   ["B301","D301","D301_1"],
                   [],
                   ["D003_0","D003_1","D003_2","D003_3","D003_4","D003_5",
                    "D003_6","D003_7","D003_8"],
                   ["F010r","F011r","F019r","F020","F023"],
                   ["S100"],
                   ["S200"],
                   ["S300"],
                   ["S000"]]

flagindex_names = ["Skyloft",
                   "Faron Woods",
                   "Lake Floria",
                   "Flooded Faron Woods",
                   "Eldin Volcano",
                   "Eldin Volcano Summit",
                   "-Unused-",
                   "Lanayru Desert",
                   "Lanayru Sand Sea",
                   "Lanayru Gorge",
                   "Sealed Grounds",
                   "Faron: Skyview Temple",
                   "Faron: Ancient Cistern",
                   "-Unused-",
                   "Eldin: Earth Temple",
                   "Eldin: Fire Sanctuary",
                   "-Unused-",
                   "Lanayru: Mining Facility",
                   "Lanayru: Sandship",
                   "-Unused-",
                   "Skyloft: Sky Keep",
                   "The Sky",
                   "Faron: Silent Realm",
                   "Eldin: Silent Realm",
                   "Lanayru: Silent Realm",
                   "Skyloft: Silent Realm"]

stagenames = {
    "F000": "Skyloft: Skyloft",
    "F001r": "Skyloft: Knight's Academy",
    "F002r": "Skyloft: Beedle's Airshop",
    "F004r": "Skyloft: Bazaar",
    "F005r": "Skyloft: Orielle & Parrow’s House",
    "F006r": "Skyloft: Repairman Kukiel’s House",
    "F007r": "Skyloft: Piper’s House",
    "F008r": "Skyloft: Inside the Statue of the Goddess",
    "F009r": "Skyloft: Sparring Hall",
    "F010r": "Skyloft: Isle of Songs Tower",
    "F011r": "Skyloft: The Lumpy Pumpkin",
    "F012r": "Skyloft: Demon Guy Batreaux’s House",
    "F013r": "Skyloft: Fortune-teller Sparrot’s House",
    "F014r": "Skyloft: Potion Shop Owner Bertie’s House",
    "F015r": "Skyloft: Scrap Shop Owner Gondo’s House",
    "F016r": "Skyloft: Pipit's House",
    "F017r": "Skyloft: Gear Peddler Rupin’s House",
    "F018r": "Skyloft: Item Check Girl Peatrice’s House",
    "F019r": "Skyloft: Bamboo Island",
    "F020": "The Sky: Sky Field",
    "F021": "The Sky: Cutscene Sky",
    "F023": "The Sky: Thunderhead",
    "D000": "Skyloft: Waterfall Cave",
    "D003_0": "Skyloft: Sky Keep R00 (Enemy)",
    "D003_1": "Skyloft: Sky Keep R01 (Underground)",
    "D003_2": "Skyloft: Sky Keep R02 (Lava)",
    "D003_3": "Skyloft: Sky Keep R03 (Timeshift 2)",
    "D003_4": "Skyloft: Sky Keep R04 (Timeshift 1)",
    "D003_5": "Skyloft: Sky Keep R05 (ツタ系)",
    "D003_6": "Skyloft: Sky Keep R06 (Captain 2)",
    "D003_7": "Skyloft: Sky Keep R07 (Entrance)",
    "D003_8": "Skyloft: Sky Keep R08 Tri Get",
    "S000": "Skyloft: Town Silent Realm",

    "F100": "Faron Woods: Faron Woods",
    "F100_1": "Faron Woods: Inside the Great Tree",
    "F101": "Faron Woods: Deep Woods",
    "F102": "Faron Woods: Lake Floria",
    "F102_1": "Faron Woods: Outside Ancient Cistern",
    "F102_2": "Faron Woods: Faron's Lair",
    "F103": "Faron Woods: Faron Woods (Flooded)",
    "F103_1": "Faron Woods: Forest F3 (Tree Interior)",
    "D100": "Faron Woods: Skyview Temple",
    "D101": "Faron Woods: Ancient Cistern",
    "B100": "Faron Woods: Forest Boss (R00 Ghirahim)",
    "B100_1": "Faron Woods: After Forest Boss (R00 Skyview Spring)",
    "B101": "Faron Woods: Forest Boss (Asura)",
    "B101_1": "Faron Woods: Farore's Candle Room",
    "S100": "Faron Woods: Forest Silent Realm",

    "F200": "Eldin Volcano: Eldin Volcano",
    "F201_1": "Eldin Volcano: Inside Volcano",
    "F201_2": "Eldin Volcano: Volcano F3 (Crater)",
    "F201_3": "Eldin Volcano: Fire Sanctuary Entrance",
    "F201_4": "Eldin Volcano: Volcano Summit - Waterfall",
    "F202": "Eldin Volcano: Volcano F3",
    "F202_1": "Eldin Volcano: Volcano F3 (Fire Dragon Dummy 1)",
    "F202_2": "Eldin Volcano: Volcano F3 (Fire Dragon Dummy 2)",
    "F202_3": "Eldin Volcano: Volcano F3 Completed (Fire Dragon Dummy 1)",
    "F202_4": "Eldin Volcano: Volcano F3 Completed (Fire Dragon Dummy 2)",
    "F210": "Eldin Volcano: Caves",
    "F211": "Eldin Volcano: Thrill Digger",
    "F221": "Eldin Volcano: Volcano F2 (Fire Dragon Room)",
    "D200": "Eldin Volcano: Earth Temple",
    "D201": "Eldin Volcano: Fire Sanctuary (A)",
    "D201_1": "Eldin Volcano: Fire Sanctuary (B)",
    "B200": "Eldin Volcano: Volcano D1 Boss",
    "B201": "Eldin Volcano: Volcano D2 Boss (Ghirahim 2nd Fight)",
    "B201_1": "Eldin Volcano: Volcano D2 Boss (Din's Fire)",
    "B210": "Eldin Volcano: Volcano D1 Boss (Earth Spring)",
    "S200": "Eldin Volcano: Mountain Silent Realm",

    "F300": "Lanayru Desert: Lanayru Desert",
    "F300_1": "Lanayru Desert: Lanayru Mine",
    "F300_2": "Lanayru Desert: Power Generator #1",
    "F300_3": "Lanayru Desert: Power Generator #2",
    "F300_4": "Lanayru Desert: Temple of Time",
    "F300_5": "Lanayru Desert: LMF to ToT",
    "F301": "Lanayru Desert: Sand Sea Docks",
    "F301_1": "Lanayru Desert: Sand Sea",
    "F301_2": "Lanayru Desert: Pirate Stronghold",
    "F301_3": "Lanayru Desert: Skipper's Retreat",
    "F301_4": "Lanayru Desert: Shipyard",
    "F301_5": "Lanayru Desert: Skipper's Retreat Shack",
    "F301_6": "Lanayru Desert: Desert F2 Timeshift Island",
    "F301_7": "Lanayru Desert: Shipyard Construction Bay",
    "F302": "Lanayru Desert: Lanayru Gorge",
    "F303": "Lanayru Desert: Lanayru Caves",
    "D300": "Lanayru Desert: Lanayru Mining Facility (A)",
    "D300_1": "Lanayru Desert: Lanayru Mining Facility (B)",
    "D301": "Lanayru Desert: Sandship (A)",
    "D301_1": "Lanayru Desert: Sandship (B)",
    "B300": "Lanayru Desert: Desert Boss 00 (Moldarach)",
    "B301": "Lanayru Desert: Desert Boss Kraken",
    "S300": "Lanayru Desert: Sand Silent Realm",

    "F400": "Sealed Grounds: Forest",
    "F401": "Sealed Grounds: Whirlpool",
    "F402": "Sealed Grounds: Temple",
    "F403": "Sealed Grounds: Whirlpool (Past)",
    "F404": "Sealed Grounds: Temple (Past)",
    "F405": "Sealed Grounds: Whirlpool (Cutscene)",
    "F406": "Sealed Grounds: Whirlpool (With Statue)",
    "F407": "Sealed Grounds: Temple (Cutscene)",
    "B400": "Sealed Grounds: Last Boss",

    "Demo": "Staff Roll"}
