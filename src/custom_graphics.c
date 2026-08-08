#include "global.h"
#include "custom_graphics.h"
#include "runtime.h"
#include "bg_palette_buffer.h"
#include "graphics_memory.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "dungeon_vram.h"

/*
 * Poké coin — see include/palette_owners.h (enforced by tools/check_palette_owners.py).
 *
 * Dungeon: BG bank 12 slots 8–11 (full 4 golds); stairs indices 1–7,15 intact.
 * Town: full gold on BG bank 14 (map flowers stay on 12; rank badge on 13).
 * If a dialogue portrait owns bank 14, that draw remaps onto font bank 15.
 */

static const RGB_Struct sItemPinkColor = {
    ITEM_PINK_R, ITEM_PINK_G, ITEM_PINK_B, 0x80
}; /* must match palette_owners.h / check_palette_owners.py */

/* Slot 0 = BG transparent. Slot 1 = menu window fill (fontpal / town bank). */
#define POKE_COIN_SLOT_WINDOW_FILL 1

static const RGB_Struct sPokeCoinTownPal[16] = {
    [POKE_COIN_SLOT_TRANSPARENT] = {   0,   0,   0, 0x80 },
    [POKE_COIN_SLOT_WINDOW_FILL] = {  39,  79, 111, 0x80 }, /* placeholder; replaced at load */
    [POKE_COIN_SLOT_WHITE] = { 255, 255, 255, 0x80 },
    [POKE_COIN_SLOT_PALE] = { 255, 255, 115, 0x80 },
    [POKE_COIN_SLOT_YELLOW] = { 247, 206,   0, 0x80 },
    [POKE_COIN_SLOT_MID] = { 222, 173,   0, 0x80 },
    [POKE_COIN_SLOT_DARK_TOWN] = { 165, 115,   0, 0x80 },
};

static const RGB_Struct sPokeCoinPale = { 255, 255, 115, 0x80 };
static const RGB_Struct sPokeCoinYellow = { 247, 206,   0, 0x80 };
static const RGB_Struct sPokeCoinMid = { 222, 173,   0, 0x80 };
static const RGB_Struct sPokeCoinDark = { 165, 115,   0, 0x80 };

/* 16×16 from poke_coin.png — built by tools/convert_poke_coin.py (town slots). */
static const u32 sPokeCoinTiles[32] = INCBIN_U32("graphics/custom/poke_coin.4bpp");

static EWRAM_DATA u32 sPokeCoinBlitBuf[32] = {0};
static EWRAM_DATA bool8 sTownPortraitOwnsBank14 = {FALSE};

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
    .width = POKE_COIN_ART_WIDTH,
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

/* Button/icon glyphs with 9→8, 10→7 (safe when dungeon coin uses 9/10). */
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
    0x8888, 0x8888, 0x0008,
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

static bool8 TownCoinUsesFontFallback(void)
{
    return sTownPortraitOwnsBank14;
}

static void LoadTownPokeCoinPalette(void)
{
    s32 i;
    s32 base;
    const RGB_Struct *fill;

    if (!gRuntimeConfig.custom_graphics || gUnknown_203B40C)
        return;

    base = POKE_COIN_PAL_BANK_TOWN * 16;
    for (i = 0; i < 16; i++)
        SetBGPaletteBufferColorArray(base + i, &sPokeCoinTownPal[i]);
    /* Slot 1 mirrors font window fill so merged menu pixels stay blue. */
    if (sub_80063B0() == 1)
        fill = &gFontPalette[POKE_COIN_SLOT_WINDOW_FILL];
    else
        fill = &gFontPalette[16 + POKE_COIN_SLOT_WINDOW_FILL];
    SetBGPaletteBufferColorArray(base + POKE_COIN_SLOT_WINDOW_FILL, fill);
}

void SetPokeCoinTownPortraitBankInUse(bool8 inUse)
{
    /* Only track ownership. Eagerly writing coin golds here races VBlank while
     * portrait tiles (pal 14) are still on-screen — one-frame gold/glitch flash
     * on open and close. Bank 14 is restored lazily by ApplyPokeCoinPaletteForDraw
     * / LoadPokeCoinPalette once the flag is clear. */
    sTownPortraitOwnsBank14 = inUse;
}

u32 GetPokeCoinPalBank(void)
{
    if (gUnknown_203B40C)
        return POKE_COIN_PAL_BANK_DUNGEON;
    if (TownCoinUsesFontFallback())
        return POKE_COIN_PAL_BANK_TOWN_FONT_FALLBACK;
    return POKE_COIN_PAL_BANK_TOWN;
}

static void LoadPokeCoinPalette(void)
{
    s32 base;

    if (gUnknown_203B40C) {
        /* Full 4 golds into trappat bank slots 8–11 only (stairs use 1–7,15). */
        base = POKE_COIN_PAL_BANK_DUNGEON * 16;
        SetBGPaletteBufferColorArray(base + POKE_COIN_DUNGEON_GOLD_SLOT0, &sPokeCoinPale);
        SetBGPaletteBufferColorArray(base + POKE_COIN_DUNGEON_GOLD_SLOT1, &sPokeCoinYellow);
        SetBGPaletteBufferColorArray(base + POKE_COIN_DUNGEON_GOLD_SLOT2, &sPokeCoinMid);
        SetBGPaletteBufferColorArray(base + POKE_COIN_DUNGEON_GOLD_SLOT3, &sPokeCoinDark);
        return;
    }

    if (TownCoinUsesFontFallback())
        return; /* Remap onto stock fontpal; leave bank 14 for the portrait. */

    LoadTownPokeCoinPalette();
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

static u8 RemapCoinPixelForBank(u8 p)
{
    if (gUnknown_203B40C) {
        /* Town indices → dungeon bank12 slots 8–11; white/transparent unchanged. */
        if (p == POKE_COIN_SLOT_PALE)
            return POKE_COIN_SLOT_PALE_DUNGEON;
        if (p == POKE_COIN_SLOT_YELLOW)
            return POKE_COIN_SLOT_YELLOW_DUNGEON;
        if (p == POKE_COIN_SLOT_MID)
            return POKE_COIN_SLOT_MID_DUNGEON;
        if (p == POKE_COIN_SLOT_DARK_TOWN)
            return POKE_COIN_SLOT_DARK_DUNGEON;
        return p;
    }

    if (!TownCoinUsesFontFallback())
        return p; /* Town bank 14 — .4bpp indices match sPokeCoinTownPal. */

    /* Portrait owns bank 14: stock fontpal yellow / HUD orange / shadow. */
    if (p == POKE_COIN_SLOT_PALE)
        return POKE_COIN_SLOT_PALE_TOWN_FONT;
    if (p == POKE_COIN_SLOT_YELLOW)
        return POKE_COIN_SLOT_YELLOW_TOWN_FONT;
    if (p == POKE_COIN_SLOT_MID)
        return POKE_COIN_SLOT_MID_TOWN_FONT;
    if (p == POKE_COIN_SLOT_DARK_TOWN)
        return POKE_COIN_SLOT_DARK_TOWN_FONT;
    return p; /* 0 transparent, 1 window fill, 7 white */
}

static void PackCoinBlit(u8 in[16][16])
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
    /* ox/oy may be negative (shift art up/left within the 16×16). */

    if (baseTiles != NULL) {
        const u32 *p = baseTiles;
        s32 ty, tx, row, col;

        for (ty = 0; ty < 2; ty++) {
            for (tx = 0; tx < 2; tx++) {
                for (row = 0; row < 8; row++) {
                    u32 word = *p++;
                    for (col = 0; col < 8; col++) {
                        u8 pix = (word >> (col * 4)) & 0xF;
                        /* Keep transparent + menu fill (town); dungeon clears
                         * fill too so HUD transparency stays clean. */
                        if (pix != 0 && (gUnknown_203B40C || pix != POKE_COIN_SLOT_WINDOW_FILL))
                            pix = 0;
                        dst[ty * 8 + row][tx * 8 + col] = pix;
                    }
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
            s32 dx = x + ox;
            s32 dy = y + oy;

            if (p != 0 && dx >= 0 && dx < 16 && dy >= 0 && dy < 16)
                dst[dy][dx] = RemapCoinPixelForBank(p);
        }
    }
    PackCoinBlit(dst);
    return sPokeCoinBlitBuf;
}

void ApplyCustomPokeCoinPalette(void)
{
    s32 bank;

    /* Dungeon golds; town bank-14 load is deferred to glyph draw (and skipped
     * while a portrait owns that bank). */
    if (gRuntimeConfig.custom_graphics && gUnknown_203B40C)
        LoadPokeCoinPalette();

    if (gRuntimeConfig.pmd2_battle_info_colors) {
        for (bank = 0; bank < 8; bank++)
            gFontPalette[bank * 16 + ITEM_PINK_SLOT] = sItemPinkColor;
        RefreshActiveFontPalette();
        /* Dungeon coin is on bank 12 — font refresh does not clear it. */
    }
}

void ApplyPokeCoinPaletteForDraw(void)
{
    if (gRuntimeConfig.custom_graphics)
        LoadPokeCoinPalette();
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

/*
 * Half {STAR_BULLET} for move Power (IQ uses the full glyph at 0x8742).
 * Pixel data / unkA match kanji_a STAR_BULLET (width 8, unkA 3, multi-tone).
 */
static const u16 sPowerStarHalfGlyph[] = {
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x6000, 0x0003, 0x0000,
    0x7200, 0x0002, 0x0000,
    0x7776, 0x0006, 0x0000,
    0x7600, 0x0002, 0x0000,
    0x6720, 0x0007, 0x0000,
    0x3260, 0x0002, 0x0000,
    0x3300, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
};

static const unkChar sPowerStarHalf = {
    .unk0 = sPowerStarHalfGlyph,
    .unk4 = POWER_STAR_HALF_CHR,
    .width = 5,
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 3, /* same direct multi-color blit path as STAR_BULLET */
    .fillB = 0,
};

const unkChar *GetPowerStarChar(s32 chr)
{
    if (chr == POWER_STAR_HALF_CHR)
        return &sPowerStarHalf;
    return NULL;
}
