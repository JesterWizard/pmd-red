#include "global.h"
#include "custom_graphics.h"
#include "runtime.h"
#include "bg_palette_buffer.h"
#include "graphics_memory.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "dungeon_map.h"

/*
 * Poké coin + shared fontpal coexistence
 * --------------------------------------
 * Coin uses dedicated BG palette bank 12 (192–207). Bank 14 is the dungeon
 * minimap (items/stairs); bank 15 is shared fontpal. Source black (#000000)
 * stays index 0 (BG hardware transparent). Blits merge into existing window
 * tiles so opaque menus keep their fill and transparent HUD stays clear.
 * Team-rank badges use bank 13 so both can appear together.
 *
 * Item pink (pmd2_battle_info_colors) still patches fontpal slot 11.
 */

enum {
    ITEM_PINK_SLOT = 11,
    COIN_FILL_INDEX = 1, /* window fill when present in merged base tiles */
};

static const RGB_Struct sItemPinkColor = { 255, 119, 199, 0x80 }; /* #FF77C7 */

/* Slot 0 = transparent. Slot 1 mirrors window fill for merged menu pixels. */
static const RGB_Struct sPokeCoinPalette[16] = {
    [0]  = {   0,   0,   0, 0x80 }, /* transparent */
    [1]  = {  39,  79, 111, 0x80 }, /* placeholder; replaced by window fill */
    [7]  = { 255, 255, 255, 0x80 }, /* rim highlight */
    [9]  = { 255, 255, 115, 0x80 }, /* pale gold */
    [10] = { 247, 206,   0, 0x80 }, /* yellow */
    [11] = { 222, 173,   0, 0x80 }, /* mid gold */
    [12] = { 165, 115,   0, 0x80 }, /* dark gold */
};

/* 16×16 from poke_coin.png — black (#000000) is index 0. */
static const u32 sPokeCoinTiles[32] = {
    0xA9977700, 0xAAA99770, 0xACCCCC77, 0xCBAABC97,
    0xBBAABCA7, 0xABCCBCA9, 0xAAAABCAA, 0x9AAABCAB,
    0x00000000, 0x0000000A, 0x000000AA, 0x0000009A,
    0x0000009A, 0x0000009A, 0x00000079, 0x000000C7,
    0x7999AAB0, 0xCCCCCC00, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x0000000C, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000,
};

static EWRAM_DATA u32 sPokeCoinBlitBuf[32] = {0};

/* Dummy glyphs for width / GetCharacter; pixels come from sPokeCoinTiles. */
static const u16 sPokeCoinGlyphDummy[] = {
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
};

static const unkChar sPokeCoinLeft = {
    .unk0 = sPokeCoinGlyphDummy,
    .unk4 = POKE_COIN_CHR_LEFT,
    .width = 16,
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 1,
    .fillB = 0,
};

static const unkChar sPokeCoinRight = {
    .unk0 = sPokeCoinGlyphDummy,
    .unk4 = POKE_COIN_CHR_RIGHT,
    .width = 0, /* drawn with the left half */
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 1,
    .fillB = 0,
};

/* Button/icon glyphs with 9→8, 10→7 (kept; harmless with isolated coin bank). */
static const u16 sRemap_A_BUTTON[] = {
    0x7700, 0x7777, 0x0000,
    0x3770, 0x7333, 0x0007,
    0x3777, 0x7888, 0x0077,
    0x8377, 0x8877, 0x0077,
    0x8377, 0x8377, 0x0077,
    0x3837, 0x8333, 0x0078,
    0x7837, 0x3777, 0x0078,
    0x7838, 0x3777, 0x0088,
    0x7780, 0x7777, 0x0008,
    0x8800, 0x8888, 0x0000,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_B_BUTTON[] = {
    0x7700, 0x7777, 0x0000,
    0x3370, 0x3333, 0x0007,
    0x8377, 0x8777, 0x0073,
    0x8377, 0x3777, 0x0078,
    0x8377, 0x3333, 0x0077,
    0x8377, 0x8777, 0x0073,
    0x8377, 0x3777, 0x0078,
    0x8378, 0x3333, 0x0087,
    0x7780, 0x7777, 0x0008,
    0x8800, 0x8888, 0x0000,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_L_BUTTON[] = {
    0x7700, 0x7777, 0x0000,
    0x3370, 0x7777, 0x0007,
    0x8377, 0x7777, 0x0077,
    0x8377, 0x7777, 0x0077,
    0x8377, 0x7777, 0x0077,
    0x8377, 0x7777, 0x0077,
    0x8377, 0x3377, 0x0077,
    0x8378, 0x8333, 0x0087,
    0x7780, 0x7777, 0x0008,
    0x8800, 0x8888, 0x0000,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_R_BUTTON[] = {
    0x7700, 0x7777, 0x0000,
    0x3370, 0x7333, 0x0007,
    0x8377, 0x3377, 0x0077,
    0x8377, 0x8377, 0x0077,
    0x8377, 0x7333, 0x0077,
    0x8377, 0x3877, 0x0077,
    0x8377, 0x8377, 0x0077,
    0x8378, 0x8377, 0x0087,
    0x7780, 0x7777, 0x0008,
    0x8800, 0x8888, 0x0000,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_START1[] = {
    0x7770, 0x7777, 0x0077,
    0x3877, 0x3338, 0x0037,
    0x7377, 0x7373, 0x0073,
    0x7377, 0x7377, 0x0073,
    0x3777, 0x7377, 0x0073,
    0x7777, 0x7373, 0x0033,
    0x7377, 0x7373, 0x0073,
    0x3877, 0x7378, 0x0073,
    0x7778, 0x7777, 0x0077,
    0x8880, 0x8888, 0x0088,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_START2[] = {
    0x7777, 0x7777, 0x0007,
    0x3377, 0x3337, 0x0077,
    0x7373, 0x7373, 0x0077,
    0x7373, 0x7373, 0x0077,
    0x7373, 0x7373, 0x0077,
    0x3373, 0x7377, 0x0077,
    0x7373, 0x7373, 0x0077,
    0x7373, 0x7373, 0x0077,
    0x7777, 0x7777, 0x0087,
    0x8888, 0x8888, 0x0008,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_SELECT1[] = {
    0x7770, 0x7777, 0x0077,
    0x8387, 0x7337, 0x0073,
    0x3737, 0x7737, 0x0073,
    0x7737, 0x7737, 0x0073,
    0x7377, 0x7337, 0x0073,
    0x3777, 0x7737, 0x0073,
    0x3737, 0x7737, 0x0073,
    0x8387, 0x7337, 0x0033,
    0x7778, 0x7777, 0x0077,
    0x8880, 0x8888, 0x0088,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_SELECT2[] = {
    0x7777, 0x7777, 0x0077,
    0x7337, 0x3733, 0x0733,
    0x7737, 0x7773, 0x0773,
    0x7737, 0x7773, 0x0773,
    0x7337, 0x7773, 0x0773,
    0x7737, 0x7773, 0x0773,
    0x7737, 0x7773, 0x0773,
    0x7337, 0x7733, 0x0773,
    0x7777, 0x7777, 0x0877,
    0x8888, 0x8888, 0x0088,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_NDS_Y[] = {
    0x7700, 0x7777, 0x0000,
    0x7380, 0x3777, 0x0008,
    0x3837, 0x8377, 0x0078,
    0x8877, 0x8833, 0x0077,
    0x8777, 0x7888, 0x0077,
    0x7777, 0x7788, 0x0077,
    0x7777, 0x7783, 0x0077,
    0x7778, 0x7783, 0x0087,
    0x7780, 0x7777, 0x0008,
    0x8800, 0x8888, 0x0000,
    0x0000, 0x0000, 0x0000,
};
static const u16 sRemap_NEWS[] = {
    0x3333, 0x3333, 0x0003,
    0x7773, 0x7777, 0x0003,
    0x8873, 0x7778, 0x0003,
    0x7773, 0x7777, 0x0003,
    0x7773, 0x7877, 0x0003,
    0x7773, 0x7787, 0x0003,
    0x7773, 0x7777, 0x0003,
    0x7773, 0x7777, 0x0003,
    0x7773, 0x7788, 0x0003,
    0x3333, 0x3333, 0x0003,
    0x0000, 0x0000, 0x0000,
};

static const unkChar sRemapIconChars[] = {
    { .unk0 = sRemap_A_BUTTON, .unk4 = 0x8750, .width = 11, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_B_BUTTON, .unk4 = 0x8751, .width = 11, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_L_BUTTON, .unk4 = 0x8774, .width = 11, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_R_BUTTON, .unk4 = 0x8486, .width = 11, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_START1, .unk4 = 0x8753, .width = 10, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_START2, .unk4 = 0x8771, .width = 11, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_SELECT1, .unk4 = 0x8772, .width = 10, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_SELECT2, .unk4 = 0x8773, .width = 12, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_NDS_Y, .unk4 = 0x83C7, .width = 10, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
    { .unk0 = sRemap_NEWS, .unk4 = 0x83C3, .width = 8, .unk8 = 0, .fill9 = 0, .unkA = 3, .fillB = 0 },
};

const unkChar *GetRemappedIconChar(s32 chr, const unkChar *src)
{
    s32 i;

    (void)src;
    if (!gRuntimeConfig.custom_graphics)
        return NULL;

    for (i = 0; i < (s32)ARRAY_COUNT(sRemapIconChars); i++) {
        if (sRemapIconChars[i].unk4 == chr)
            return &sRemapIconChars[i];
    }
    return NULL;
}

static void RefreshActiveFontPalette(void)
{
    s32 i;
    RGB_Struct *ptr;

    if (sub_80063B0() == 1)
        ptr = &gFontPalette[0];
    else
        ptr = &gFontPalette[16];
    for (i = 0; i < 16; ptr++, i++)
        SetBGPaletteBufferColorArray(i + 240, ptr);
}

static void LoadPokeCoinPaletteBank(void)
{
    s32 i;
    const RGB_Struct *fill;

    for (i = 0; i < 16; i++)
        SetBGPaletteBufferColorArray(POKE_COIN_PAL_BANK * 16 + i, &sPokeCoinPalette[i]);

    /* Keep slot 1 as window fill so merged menu pixels stay correct. */
    if (sub_80063B0() == 1)
        fill = &gFontPalette[1];
    else
        fill = &gFontPalette[16 + 1];
    SetBGPaletteBufferColorArray(POKE_COIN_PAL_BANK * 16 + COIN_FILL_INDEX, fill);
}

/* Unpack one 8×8 tile row-words into a 16×16 nibble grid. */
static void UnpackCoinSource(u8 out[16][16])
{
    s32 ty, tx, row, col;
    const u32 *src = sPokeCoinTiles;

    for (ty = 0; ty < 2; ty++) {
        for (tx = 0; tx < 2; tx++) {
            for (row = 0; row < 8; row++) {
                u32 word = *src++;
                for (col = 0; col < 8; col++)
                    out[ty * 8 + row][tx * 8 + col] = (word >> (col * 4)) & 0xF;
            }
        }
    }
}

static void PackCoinBlit(const u8 in[16][16])
{
    s32 ty, tx, row, col;
    u32 *dst = sPokeCoinBlitBuf;

    for (ty = 0; ty < 2; ty++) {
        for (tx = 0; tx < 2; tx++) {
            for (row = 0; row < 8; row++) {
                u32 word = 0;
                for (col = 0; col < 8; col++)
                    word |= ((u32)(in[ty * 8 + row][tx * 8 + col] & 0xF)) << (col * 4);
                *dst++ = word;
            }
        }
    }
}

/*
 * Build a 16×16 blit: start from baseTiles (or transparent), then stamp the
 * coin at (ox, oy). Empty source pixels leave the base alone (true BG
 * transparency on HUD; window fill preserved on menus).
 */
const u32 *BuildPokeCoinBlit(const u32 *baseTiles, s32 ox, s32 oy)
{
    u8 src[16][16];
    u8 dst[16][16];
    s32 y, x;

    if (!gRuntimeConfig.custom_graphics)
        return NULL;
    if (ox < 0)
        ox = 0;
    if (oy < 0)
        oy = 0;
    if (ox > 6)
        ox = 6;
    if (oy > 6)
        oy = 6;

    if (baseTiles != NULL) {
        const u32 *p = baseTiles;
        s32 ty, tx, row, col;

        for (ty = 0; ty < 2; ty++) {
            for (tx = 0; tx < 2; tx++) {
                for (row = 0; row < 8; row++) {
                    u32 word = *p++;
                    for (col = 0; col < 8; col++)
                        dst[ty * 8 + row][tx * 8 + col] = (word >> (col * 4)) & 0xF;
                }
            }
        }
    }
    else {
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++)
                dst[y][x] = 0;
        }
    }

    UnpackCoinSource(src);
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u8 p = src[y][x];
            if (p != 0 && (y + oy) < 16 && (x + ox) < 16)
                dst[y + oy][x + ox] = p;
        }
    }
    PackCoinBlit(dst);
    return sPokeCoinBlitBuf;
}

void ApplyCustomPokeCoinPalette(void)
{
    s32 bank;

    if (gRuntimeConfig.custom_graphics) {
        LoadPokeCoinPaletteBank();
        /* Heal minimap bank 14 if a prior coin build stomped it. */
        LoadDungeonMapPalette();
    }

    if (gRuntimeConfig.pmd2_battle_info_colors) {
        for (bank = 0; bank < 8; bank++)
            gFontPalette[bank * 16 + ITEM_PINK_SLOT] = sItemPinkColor;
        RefreshActiveFontPalette();
    }
}

bool8 IsCustomPokeCoinChar(s32 chr)
{
    if (!gRuntimeConfig.custom_graphics)
        return FALSE;
    return (chr == POKE_COIN_CHR_LEFT || chr == POKE_COIN_CHR_RIGHT);
}

const unkChar *GetCustomPokeCoinChar(s32 chr)
{
    if (!gRuntimeConfig.custom_graphics)
        return NULL;
    if (chr == POKE_COIN_CHR_LEFT)
        return &sPokeCoinLeft;
    if (chr == POKE_COIN_CHR_RIGHT)
        return &sPokeCoinRight;
    return NULL;
}
