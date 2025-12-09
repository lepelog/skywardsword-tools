// from https://github.com/zeldaret/ss/blob/8d9383b0161314d2ef03797e6fcff60651c61c4c/src/toBeSorted/special_item_drop_mgr.cpp#L389
// gcc gen.cpp -o gen && ./gen > out.txt


#include <initializer_list>
#include <stdio.h>
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

typedef int UNKWORD;
typedef void UNKTYPE;

enum {
    FALSE,
    TRUE
};
typedef int BOOL;

typedef unsigned char byte_t;

typedef u8 undefined1;
typedef u16 undefined2;
typedef u32 undefined4;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef volatile f32 vf32;
typedef volatile f64 vf64;


#ifndef NULL
#define NULL 0
#endif
#define nullptr NULL

#define ARRAY_LENGTH(x) (sizeof((x)) / sizeof((x)[0]))

enum ITEM_ID {
    /* 0x000 */ ITEM_NONE = 0,
    /* 0x001 */ ITEM_SMALL_KEY = 1,
    /* 0x002 */ ITEM_GREEN_RUPEE = 2,
    /* 0x003 */ ITEM_BLUE_RUPEE = 3,
    /* 0x004 */ ITEM_RED_RUPEE = 4,
    /* 0x005 */ ITEM_COMPLETE_TRIFORCE = 5,
    /* 0x006 */ ITEM_HEART = 6,
    /* 0x007 */ ITEM_SINGLE_ARROW = 7,
    /* 0x008 */ ITEM_BUNDLE_ARROWS = 8,
    /* 0x009 */ ITEM_GODDESS_WHITESWORD = 9,
    /* 0x00A */ ITEM_PRACTICE_SWORD = 10,
    /* 0x00B */ ITEM_GODDESS_SWORD = 11,
    /* 0x00C */ ITEM_GODDESS_LONGSWORD = 12,
    /* 0x00D */ ITEM_MASTER_SWORD = 13,
    /* 0x00E */ ITEM_TRUE_MASTER_SWORD = 14,
    /* 0x00F */ ITEM_SAILCLOTH = 15,
    /* 0x010 */ ITEM_GODDESS_HARP = 16,
    /* 0x011 */ ITEM_SPIRIT_VESSEL = 17,
    /* 0x012 */ ITEM_UNK_18 = 18,
    /* 0x013 */ ITEM_BOW = 19,
    /* 0x014 */ ITEM_CLAWSHOTS = 20,
    /* 0x015 */ ITEM_BIRD_STATUETTE = 21,
    /* 0x016 */ ITEM_COMMON_BUG = 22,
    /* 0x017 */ ITEM_UNCOMMON_BUG = 23,
    /* 0x018 */ ITEM_RARE_BUG = 24,
    /* 0x019 */ ITEM_AC_BK = 25,
    /* 0x01A */ ITEM_FS_BK = 26,
    /* 0x01B */ ITEM_SSH_BK = 27,
    /* 0x01C */ ITEM_KEY_PIECE = 28,
    /* 0x01D */ ITEM_SV_BK = 29,
    /* 0x01E */ ITEM_ET_BK = 30,
    /* 0x01F */ ITEM_LMF_BK = 31,
    /* 0x020 */ ITEM_SILVER_RUPEE = 32,
    /* 0x021 */ ITEM_GOLD_RUPEE = 33,
    /* 0x022 */ ITEM_RUPOOR = 34,
    /* 0x023 */ ITEM_5_CRYSTALS = 35,
    /* 0x024 */ ITEM_GLITTERING_SPORES = 36,
    /* 0x025 */ ITEM_UNK_37 = 37,
    /* 0x026 */ ITEM_UNK_38 = 38,
    /* 0x027 */ ITEM_UNK_39 = 39,
    /* 0x028 */ ITEM_5_BOMBS = 40,
    /* 0x029 */ ITEM_10_BOMBS = 41,
    /* 0x02A */ ITEM_STAMINA_FRUIT = 42,
    /* 0x02B */ ITEM_FARORE_TEAR = 43,
    /* 0x02C */ ITEM_DIN_TEAR = 44,
    /* 0x02D */ ITEM_NAYRU_TEAR = 45,
    /* 0x02E */ ITEM_SACRED_TEAR = 46,
    /* 0x02F */ ITEM_LIGHT_FRUIT = 47,
    /* 0x030 */ ITEM_1_CRYSTAL = 48,
    /* 0x031 */ ITEM_GUST_BELLOWS = 49,
    /* 0x032 */ ITEM_DUNGEON_MAP_FI = 50,
    /* 0x033 */ ITEM_DUNGEON_MAP = 51,
    /* 0x034 */ ITEM_SLINGSHOT = 52,
    /* 0x035 */ ITEM_BEETLE = 53,
    /* 0x036 */ ITEM_WATER = 54,
    /* 0x037 */ ITEM_MUSHROOM_SPORES = 55,
    /* 0x038 */ ITEM_DIGGING_MITTS = 56,
    /* 0x039 */ ITEM_5_DEKU_SEEDS = 57,
    /* 0x03A */ ITEM_UNK_58 = 58,
    /* 0x03B */ ITEM_UNK_59 = 59,
    /* 0x03C */ ITEM_10_DEKU_SEEDS = 60,
    /* 0x03D */ ITEM_COMMON_TREASURE = 61,
    /* 0x03E */ ITEM_COMMON_TREASURE2 = 62,
    /* 0x03F */ ITEM_UNCOMMON_TREASURE = 63,
    /* 0x040 */ ITEM_RARE_TREASURE = 64,
    /* 0x041 */ ITEM_GUARDIAN_POTION = 65,
    /* 0x042 */ ITEM_GUARDIAN_POTION_PLUS = 66,
    /* 0x043 */ ITEM_UNK_67 = 67,
    /* 0x044 */ ITEM_WATER_SCALE = 68,
    /* 0x045 */ ITEM_UNK_69 = 69,
    /* 0x046 */ ITEM_BUG_MEDAL = 70,
    /* 0x047 */ ITEM_BUG_NET = 71,
    /* 0x048 */ ITEM_FAIRY = 72,
    /* 0x049 */ ITEM_UNK_73 = 73,
    /* 0x04A */ ITEM_SACRED_WATER = 74,
    /* 0x04B */ ITEM_HOOK_BEETLE = 75,
    /* 0x04C */ ITEM_QUICK_BEETLE = 76,
    /* 0x04D */ ITEM_TOUGH_BEETLE = 77,
    /* 0x04E */ ITEM_HEART_POTION = 78,
    /* 0x04F */ ITEM_HEART_POTION_PLUS = 79,
    /* 0x050 */ ITEM_HEART_POTION_ALSO = 80,
    /* 0x051 */ ITEM_HEART_POTION_PLUS_PLUS = 81,
    /* 0x052 */ ITEM_UNK_82 = 82,
    /* 0x053 */ ITEM_GUARDIAN_POTION_NO_TBOX = 83,
    /* 0x054 */ ITEM_STAMINA_POTION = 84,
    /* 0x055 */ ITEM_STAMINA_POTION_PLUS = 85,
    /* 0x056 */ ITEM_AIR_POTION = 86,
    /* 0x057 */ ITEM_AIR_POTION_PLUS = 87,
    /* 0x058 */ ITEM_BOTTLED_FAIRY = 88,
    /* 0x059 */ ITEM_UNK_89 = 89,
    /* 0x05A */ ITEM_IRON_BOW = 90,
    /* 0x05B */ ITEM_SACRED_BOW = 91,
    /* 0x05C */ ITEM_BOMB_BAG = 92,
    /* 0x05D */ ITEM_HEART_CONTAINER = 93,
    /* 0x05E */ ITEM_HEART_PIECE = 94,
    /* 0x05F */ ITEM_TRI_COURAGE = 95,
    /* 0x060 */ ITEM_TRI_POWER = 96,
    /* 0x061 */ ITEM_TRI_WISDOM = 97,
    /* 0x062 */ ITEM_SEA_CHART = 98,
    /* 0x063 */ ITEM_MOGMA_MITTS = 99,
    /* 0x064 */ ITEM_HEART_MEDAL = 100,
    /* 0x065 */ ITEM_RUPEE_MEDAL = 101,
    /* 0x066 */ ITEM_TREASURE_MEDAL = 102,
    /* 0x067 */ ITEM_POTION_MEDAL = 103,
    /* 0x068 */ ITEM_CURSED_MEDAL = 104,
    /* 0x069 */ ITEM_MIGHTY_SCATTERSHOT = 105,
    /* 0x06A */ ITEM_UNK_106 = 106,
    /* 0x06B */ ITEM_UNK_107 = 107,
    /* 0x06C */ ITEM_MEDIUM_WALLET = 108,
    /* 0x06D */ ITEM_BIG_WALLET = 109,
    /* 0x06E */ ITEM_GIANT_WALLET = 110,
    /* 0x06F */ ITEM_TYCOON_WALLET = 111,
    /* 0x070 */ ITEM_ADVENTURE_POUCH = 112,
    /* 0x071 */ ITEM_POUCH_EXPANSION = 113,
    /* 0x072 */ ITEM_LIFE_MEDAL = 114,
    /* 0x073 */ ITEM_UNK_115 = 115,
    /* 0x074 */ ITEM_WOODEN_SHIELD = 116,
    /* 0x075 */ ITEM_BANDED_SHIELD = 117,
    /* 0x076 */ ITEM_BRACED_SHIELD = 118,
    /* 0x077 */ ITEM_IRON_SHIELD = 119,
    /* 0x078 */ ITEM_REINFORCED_SHIELD = 120,
    /* 0x079 */ ITEM_FORTIFIED_SHIELD = 121,
    /* 0x07A */ ITEM_SACRED_SHIELD = 122,
    /* 0x07B */ ITEM_DIVINE_SHIELD = 123,
    /* 0x07C */ ITEM_GODDESS_SHIELD = 124,
    /* 0x07D */ ITEM_HYLIAN_SHIELD = 125,
    /* 0x07E */ ITEM_REVITALIZING_POTION = 126,
    /* 0x07F */ ITEM_REVITALIZING_POTION_PLUS = 127,
    /* 0x080 */ ITEM_SMALL_SEED_SATCHEL = 128,
    /* 0x081 */ ITEM_MEDIUM_SEED_SATCHEL = 129,
    /* 0x082 */ ITEM_LARGE_SEED_SATCHEL = 130,
    /* 0x083 */ ITEM_SMALL_QUIVER = 131,
    /* 0x084 */ ITEM_MEDIUM_QUIVER = 132,
    /* 0x085 */ ITEM_LARGE_QUIVER = 133,
    /* 0x086 */ ITEM_SMALL_BOMB_BAG = 134,
    /* 0x087 */ ITEM_MEDIUM_BOMB_BAG = 135,
    /* 0x088 */ ITEM_LARGE_BOMB_BAG = 136,
    /* 0x089 */ ITEM_WHIP = 137,
    /* 0x08A */ ITEM_FIRESHIELD_EARRINGS = 138,
    /* 0x08B */ ITEM_UNK_139 = 139,
    /* 0x08C */ ITEM_BIG_BUG_NET = 140,
    /* 0x08D */ ITEM_FARON_GRASSHOPPER = 141,
    /* 0x08E */ ITEM_WOODLAND_RHINO_BEETLE = 142,
    /* 0x08F */ ITEM_DEKU_HORNET = 143,
    /* 0x090 */ ITEM_SKYLOFT_MANTIS = 144,
    /* 0x091 */ ITEM_VOLCANIC_LADYBUG = 145,
    /* 0x092 */ ITEM_BLESSED_BUTTERFLY = 146,
    /* 0x093 */ ITEM_LANAYRU_ANT = 147,
    /* 0x094 */ ITEM_SAND_CICADA = 148,
    /* 0x095 */ ITEM_GERUDO_DRAGONFLY = 149,
    /* 0x096 */ ITEM_ELDIN_ROLLER = 150,
    /* 0x097 */ ITEM_SKY_STAG_BEETLE = 151,
    /* 0x098 */ ITEM_STARRY_FIREFLY = 152,
    /* 0x099 */ ITEM_BOTTLE = 153,
    /* 0x09A */ ITEM_RUPEE_MEDAL_ALSO = 154,
    /* 0x09B */ ITEM_HEART_MEDAL_ALSO = 155,
    /* 0x09C */ ITEM_UNK_156 = 156,
    /* 0x09D */ ITEM_UNK_157 = 157,
    /* 0x09E */ ITEM_CAWLIN_LETTER = 158,
    /* 0x09F */ ITEM_BEEDLE_INSECT_CAGE = 159,
    /* 0x0A0 */ ITEM_RATTLE = 160,
    /* 0x0A1 */ ITEM_HORNET_LARVAE = 161,
    /* 0x0A2 */ ITEM_BIRD_FEATHER = 162,
    /* 0x0A3 */ ITEM_TUMBLE_WEED = 163,
    /* 0x0A4 */ ITEM_LIZARD_TAIL = 164,
    /* 0x0A5 */ ITEM_ELDIN_ORE = 165,
    /* 0x0A6 */ ITEM_ANCIENT_FLOWER = 166,
    /* 0x0A7 */ ITEM_AMBER_RELIC = 167,
    /* 0x0A8 */ ITEM_DUSK_RELIC = 168,
    /* 0x0A9 */ ITEM_JELLY_BLOB = 169,
    /* 0x0AA */ ITEM_MONSTER_CLAW = 170,
    /* 0x0AB */ ITEM_MONSTER_HORN = 171,
    /* 0x0AC */ ITEM_ORNAMENTAL_SKULL = 172,
    /* 0x0AD */ ITEM_EVIL_CRYSTAL = 173,
    /* 0x0AE */ ITEM_BLUE_BIRD_FEATHER = 174,
    /* 0x0AF */ ITEM_GOLDEN_SKULL = 175,
    /* 0x0B0 */ ITEM_GODDESS_PLUME = 176,
    /* 0x0B1 */ ITEM_EMERALD_TABLET = 177,
    /* 0x0B2 */ ITEM_RUBY_TABLET = 178,
    /* 0x0B3 */ ITEM_AMBER_TABLET = 179,
    /* 0x0B4 */ ITEM_STONE_OF_TRIALS = 180,
    /* 0x0B5 */ ITEM_UNK_181 = 181,
    /* 0x0B6 */ ITEM_UNK_182 = 182,
    /* 0x0B7 */ ITEM_UNK_183 = 183,
    /* 0x0B8 */ ITEM_UNK_184 = 184,
    /* 0x0B9 */ ITEM_UNK_185 = 185,
    /* 0x0BA */ ITEM_BALLAD_OF_THE_GODDESS = 186,
    /* 0x0BB */ ITEM_FARORES_COURAGE = 187,
    /* 0x0BC */ ITEM_NAYRUS_WISDOM = 188,
    /* 0x0BD */ ITEM_DINS_POWER = 189,
    /* 0x0BE */ ITEM_FARON_SOTH = 190,
    /* 0x0BF */ ITEM_ELDIN_SOTH = 191,
    /* 0x0C0 */ ITEM_LANAYRU_SOTH = 192,
    /* 0x0C1 */ ITEM_SOTH = 193,
    /* 0x0C2 */ ITEM_REVITALIZING_POTION_PLUS_PLUS = 194,
    /* 0x0C3 */ ITEM_HOT_SOUP = 195,
    /* 0x0C4 */ ITEM_COLD_SOUP = 196,
    /* 0x0C5 */ ITEM_LIFE_TREE_SEED = 197,
    /* 0x0C6 */ ITEM_LIFE_TREE_FRUIT = 198,
    /* 0x0C7 */ ITEM_EXTRA_WALLET = 199,
    /* 0x0C8 */ ITEM_UNK_200 = 200,
    /* 0x18D */ ITEM_LIFE_MEDAL_AGAIN = 397,              // ?? Prob doesnt exist
    /* 0x18E */ ITEM_POUCH_EXPANSION_GODDESS_CHEST = 398, // ?? Prob doesnt exist
    /* 0x1FF */ MAX_ITEM_ID = 511
};

enum SHIELD_TYPE_e {
    /* 0x00 */ SHIELD_WOODEN_SHIELD = 0,
    /* 0x01 */ SHIELD_BANDED_SHIELD = 1,
    /* 0x02 */ SHIELD_BRACED_SHIELD = 2,
    /* 0x03 */ SHIELD_IRON_SHIELD = 3,
    /* 0x04 */ SHIELD_REINFORCED_SHIELD = 4,
    /* 0x05 */ SHIELD_FORTIFIED_SHIELD = 5,
    /* 0x06 */ SHIELD_SACRED_SHIELD = 6,
    /* 0x07 */ SHIELD_DIVINE_SHIELD = 7,
    /* 0x08 */ SHIELD_GODDESS_SHIELD = 8,
    /* 0x09 */ SHIELD_HYLIAN_SHIELD = 9,
    /* 0x0A */ SHIELD_NONE = 10,
};

struct DropEntry {
    /* 0x0 */ u8 mEntryIndex;
    /* 0x1 */ u8 mDropChance;
};

struct DropList {
    /* 0x0 */ u16 mLen;
    /* 0x2 */ u16 mFlags;
    /* 0x4 */ const DropEntry *mpEntries;
};

static const DropEntry e01[] = {
    {0x01, 20},
    {0x03, 40},
    {0x04, 10},
};

static const DropEntry e02[] = {
    {0x01, 20},
    {0x03, 10},
    {0x04, 40},
};

static const DropEntry e03[] = {
    {0x01, 20},
    {0x04, 25},
    {0x05, 25},
};

static const DropEntry e04[] = {
    {0x01, 100},
};

static const DropEntry e05[] = {
    {0x01, 60},
    {0x02, 10},
};

static const DropEntry e06[] = {
    {0x02, 100},
};

static const DropEntry e07[] = {
    {0x03, 40},
    {0x04, 10},
};

static const DropEntry e08[] = {
    {0x03, 50},
    {0x04, 40},
    {0x05, 10},
};

static const DropEntry e09[] = {
    {0x04, 70},
    {0x05, 30},
};

static const DropEntry e10[] = {
    {0x06, 100},
};

static const DropEntry e11[] = {
    {0x08, 100},
};

static const DropEntry e12[] = {
    {0x0A, 100},
};

static const DropEntry e13[] = {
    {0x0B, 100},
};

static const DropEntry e14[] = {
    {0x0C, 100},
};

static const DropEntry e15[] = {
    {0x0D, 100},
};

static const DropEntry e16[] = {
    {0x03, 7},
    {0x04, 3},
};

static const DropEntry e17[] = {
    {0x01, 7},
    {0x03, 3},
};

static const DropEntry e18[] = {
    {0x03, 100},
};

static const DropEntry e19[] = {
    {0x04, 100},
};

static const DropEntry e20[] = {
    {0x05, 100},
};

static const DropEntry e21[] = {
    {0x0E, 100},
};

static const DropEntry e22[] = {
    {0x0F, 100},
};

static const DropEntry e23[] = {
    {0x03, 60},
    {0x04, 30},
    {0x0F, 10},
};

static const DropEntry e24[] = {
    {0x03, 30},
    {0x04, 30},
    {0x05, 20},
    {0x0F, 20},
};

static const DropEntry e25[] = {
    {0x10, 100},
};

static const DropEntry e26[] = {
    {0x12, 100},
};

static const DropEntry e27[] = {
    {0x13, 100},
};

static const DropEntry e28[] = {
    {0x14, 100},
};

static const DropEntry e29[] = {
    {0x10, 10},
};

static const DropEntry e30[] = {
    {0x0B, 100},
};

static const DropEntry e31[] = {
    {0x01, 100},
};

static const DropEntry e32[] = {
    {0x01, 12},
};

static const DropEntry e33[] = {
    {0x01, 35},
};

static const DropEntry e34[] = {
    {0x16, 30},
    {0x15, 10},
    {0x02, 20},
    {0x01, 20},
};

static const DropEntry e35[] = {
    {0x15, 100},
};

static const DropEntry e36[] = {
    {0x16, 100},
};

static const DropEntry e37[] = {
    {0x01, 20},
    {0x03, 30},
    {0x04, 15},
};

static const DropEntry e38[] = {
    {0x04, 30},
    {0x05,  5},
    {0x03, 45},
};

static const DropEntry e39[] = {
    {0x01, 10},
};

static const DropEntry e40[] = {
    {0x03, 10},
    {0x04,  5},
};

static const DropEntry e41[] = {
    {0x17, 100},
};

static const DropEntry e42[] = {
    {0x01, 20},
};

static const DropEntry e44[] = {
    {0x01, 7},
};

static const DropEntry e45[] = {
    {0x03, 14},
    {0x04,  6},
};

static const DropEntry e46[] = {
    {0x01,  7},
    {0x03, 13},
};

static const DropEntry e47[] = {
    {0x18, 100},
};

static const DropEntry e48[] = {
    {0x01, 7},
};

static const DropEntry e49[] = {
    {0x01, 14},
};

static const DropEntry e50[] = {
    {0x01, 50},
};

static const DropEntry e51[] = {
    {0x0B, 20},
    {0x03, 20},
    {0x04, 10},
};

static const DropEntry e52[] = {
    {0x0A, 60},
    {0x01, 20},
    {0x04, 20},
};

static const DropEntry e53[] = {
    {0x08, 20},
    {0x0A, 20},
    {0x0B, 20},
    {0x03, 10},
    {0x04,  5},
};

#define FLAG_EXTRA_HEARTS 1
#define FLAG_EXTRA_RUPEES 2

#define FLAG_EXTRA_ALL (FLAG_EXTRA_HEARTS | FLAG_EXTRA_RUPEES)

static const DropList sList[] = {
    {0,                 0, nullptr},
    {3,    FLAG_EXTRA_ALL,     e01},
    {3,    FLAG_EXTRA_ALL,     e02},
    {3,    FLAG_EXTRA_ALL,     e03},
    {1,    FLAG_EXTRA_ALL,     e04},
    {2,    FLAG_EXTRA_ALL,     e05},
    {1,    FLAG_EXTRA_ALL,     e06},
    {2,    FLAG_EXTRA_ALL,     e07},
    {3,    FLAG_EXTRA_ALL,     e08},
    {2,    FLAG_EXTRA_ALL,     e09},
    {1,                 0,     e10},
    {1,                 0,     e11},
    {1,                 0,     e12},
    {1,                 0,     e13},
    {1,                 0,     e14},
    {1,                 0,     e15},
    {2,    FLAG_EXTRA_ALL,     e16},
    {2,    FLAG_EXTRA_ALL,     e17},
    {1,                 0,     e18},
    {1,                 0,     e19},
    {1,                 0,     e20},
    {1,                 0,     e21},
    {1,                 0,     e22},
    {3,    FLAG_EXTRA_ALL,     e23},
    {4,    FLAG_EXTRA_ALL,     e24},
    {1,                 0,     e25},
    {1,                 0,     e26},
    {1,                 0,     e27},
    {1,                 0,     e28},
    {1,                 0,     e29},
    {1,                 0,     e30},
    {1,    FLAG_EXTRA_ALL,     e31},
    {1,    FLAG_EXTRA_ALL,     e32},
    {1,    FLAG_EXTRA_ALL,     e33},
    {4,    FLAG_EXTRA_ALL,     e34},
    {1,                 0,     e35},
    {1,                 0,     e36},
    {3,    FLAG_EXTRA_ALL,     e37},
    {3,    FLAG_EXTRA_ALL,     e38},
    {1,                 0,     e39},
    {2,                 0,     e40},
    {1,                 0,     e41},
    {1, FLAG_EXTRA_HEARTS,     e42},
    {0,                 0, nullptr},
    {1, FLAG_EXTRA_HEARTS,     e44},
    {2,    FLAG_EXTRA_ALL,     e45},
    {2,    FLAG_EXTRA_ALL,     e46},
    {1,                 0,     e47},
    {1, FLAG_EXTRA_HEARTS,     e48},
    {1, FLAG_EXTRA_HEARTS,     e49},
    {1,                 0,     e50},
    {3,    FLAG_EXTRA_ALL,     e51},
    {3,                 0,     e52},
    {5, FLAG_EXTRA_RUPEES,     e53},
};

struct LowHealthReplacement {
    s32 mOriginalIdx;
    s32 mReplacementIndex;
};

const LowHealthReplacement LOW_HEALTH_REPLACEMENTS[] = {
    {
     0x10, 0x11,
     },
    {
     0x1E, 0x1F,
     },
    {
     0x2B, 0x2C,
     },
    {
     0x2D, 0x2E,
     },
};

static const char* SPECIAL_ITEM_ARRAY[] = {"ITEM_NONE",       "ITEM_HEART",        "ITEM_HEART",         "ITEM_GREEN_RUPEE",
                                         "ITEM_BLUE_RUPEE", "ITEM_RED_RUPEE",    "ITEM_FARORE_TEAR",   "ITEM_5_BOMBS",
                                         "ITEM_10_BOMBS",   "ITEM_SINGLE_ARROW", "ITEM_BUNDLE_ARROWS", "ITEM_5_DEKU_SEEDS",
                                         "ITEM_NONE",       "ITEM_NONE",         "ITEM_KEY_PIECE",     "ITEM_ELDIN_ORE",
                                         "ITEM_UNK_58",     "ITEM_UNK_59",       "ITEM_UNK_183",       "ITEM_UNK_184",
                                         "ITEM_UNK_185",    "ITEM_FAIRY",        "ITEM_FAIRY",         "ITEM_SMALL_KEY",
                                         "ITEM_RUPOOR"};

static const u32 sNumDropEntries = 0x36;
static const struct {
    u16 mNumEntries;
    const DropList *mList;
} sDropTable = {
    0x36,
    sList,
};
static const u16 RAND_RUPEE_ARRAY[3] = {ITEM_GREEN_RUPEE, ITEM_BLUE_RUPEE, ITEM_RED_RUPEE};

int fn_800C7BB0(int specialItemId, int random, bool hasBow, bool hasSlingshot, bool isHeroMode, bool hasBombs) {
    const DropList *list = &sDropTable.mList[specialItemId];
    const DropEntry *e = list->mpEntries;

    int acc = 0;

    for (int i = 0; i < list->mLen; i++) {
        int entryIdx = e->mEntryIndex;
        int weight = e->mDropChance;

        if (entryIdx == 9 || entryIdx == 10) {
            if (!hasBow) {
                // No arrows until you get the Bow
                weight = 0;
            }
        } else if (entryIdx == 11) {
            if (!hasSlingshot) {
                // No seeds until you get the Slingshot
                weight = 0;
            }
        } else if (specialItemId != 0x27 && (entryIdx == 1 || entryIdx == 2) && isHeroMode) {
            // Hearts generally don't drop on Hero Mode unless it's a special kind of heart (TODO which?)
            weight = 0;
        } else if ((entryIdx == 7 || entryIdx == 8) && !hasBombs) {
            // Bombs won't drop until you get the Bomb Bag
            weight = 0;
        }

        if (weight != 0) {
            int x = 0x1E / weight;
            acc += weight;
            if (x != 0) {
                int tmp = x <= 3 ? x : 3;
                if (random % tmp != 0) {
                    return 0;
                }
            }

            if (random < acc) {
                return entryIdx;
            }
        }
        e++;
    }

    return 0;
}

int main() {
    for (bool hasBow : {false, true}) {

    for (bool hasSlingshot : {false, true}) {

    for (bool isHeroMode : {false, true}) {

    for (bool hasBombs : {false, true}) {
    
    for (int specialItemId = 0; specialItemId < sDropTable.mNumEntries; specialItemId++) {
        printf("newset,%d,%d,%d,%d,%d\n", specialItemId, hasBow, hasSlingshot, isHeroMode, hasBombs);
        for (int i = 0; i < 100; i++) {
            int res = fn_800C7BB0(specialItemId, i, hasBow, hasSlingshot, isHeroMode, hasBombs);
            printf("%d:%s\n", i, SPECIAL_ITEM_ARRAY[res]);
        }
    }
    }
    }
    }
    }
    return 0;
}
