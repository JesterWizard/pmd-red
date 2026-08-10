#include "global.h"
#include "custom_graphics.h"
#include "runtime.h"
#include "bg_palette_buffer.h"
#include "constants/item.h"
#include "cpu.h"
#include "graphics_memory.h"
#include "items.h"
#include "sprite.h"
#include "structs/rgb.h"
#include "structs/sprite_oam.h"
#include "structs/str_position.h"
#include "text_1.h"
#include "dungeon_vram.h"

/*
 * Poké coin — see include/palette_owners.h (enforced by tools/check_palette_owners.py).
 *
 * Dungeon: custom poke_coin.4bpp as OBJ (floor ITEM_POKE palette for golds —
 * not itempat art). Town: full gold on BG bank 14 (map flowers stay on 12;
 * rank badge on 13). Portrait on bank 14 → coin uses bank 13 with same golds.
 */

#define POKE_COIN_OBJ_MAX 8
/* Spare OBJ tiles before UI arrow cluster at 0x3F0 (see dungeon_hp_bars gap notes). */
#define POKE_COIN_OBJ_VRAM_INDEX 0x3E8
#define POKE_COIN_OBJ_TILE_COUNT 4
#define POKE_COIN_OBJ_UPLOAD_BYTES (POKE_COIN_OBJ_TILE_COUNT * 32)

static EWRAM_DATA DungeonPos sPokeCoinObjPos[POKE_COIN_OBJ_MAX] = {0};
static EWRAM_DATA s32 sPokeCoinObjCount = {0};

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

static u32 GetTownPokeCoinPalBank(void)
{
    if (sTownPortraitOwnsBank14)
        return POKE_COIN_PAL_BANK_TOWN_PORTRAIT;
    return POKE_COIN_PAL_BANK_TOWN;
}

static void LoadTownPokeCoinPalette(void)
{
    s32 i;
    s32 base;
    const RGB_Struct *fontPal;
    const RGB_Struct *fill;

    if (!gRuntimeConfig.custom_graphics || gUnknown_203B40C)
        return;

    base = GetTownPokeCoinPalBank() * 16;
    for (i = 0; i < 16; i++)
        SetBGPaletteBufferColorArray(base + i, &sPokeCoinTownPal[i]);

    /* Slot 1 + WINDOW_TYPE_0 top bevel (0xD–0xF) mirror active fontpal so a
     * coin 16×16 on the first text row does not notch the light-blue outline. */
    if (sub_80063B0() == 1)
        fontPal = &gFontPalette[0];
    else
        fontPal = &gFontPalette[16];
    fill = &fontPal[POKE_COIN_SLOT_WINDOW_FILL];
    SetBGPaletteBufferColorArray(base + POKE_COIN_SLOT_WINDOW_FILL, fill);
    for (i = 13; i < 16; i++)
        SetBGPaletteBufferColorArray(base + i, &fontPal[i]);
}

void SetPokeCoinTownPortraitBankInUse(bool8 inUse)
{
    /* Only track ownership. Coin golds load onto bank 13 while set (bank 14
     * stays with the portrait). Restored lazily on the next {POKE} draw. */
    sTownPortraitOwnsBank14 = inUse;
}

u32 GetPokeCoinPalBank(void)
{
    if (gUnknown_203B40C)
        return POKE_COIN_PAL_BANK_DUNGEON;
    return GetTownPokeCoinPalBank();
}

static void LoadPokeCoinPalette(void)
{
    /* Dungeon coins are custom OBJ tiles + floor pal; do not touch BG bank 12. */
    if (gUnknown_203B40C)
        return;

    LoadTownPokeCoinPalette();
}

void ClearPokeCoinObjSprites(void)
{
    sPokeCoinObjCount = 0;
}

void RegisterPokeCoinObjSprite(s32 screenX, s32 screenY)
{
    if (sPokeCoinObjCount >= POKE_COIN_OBJ_MAX)
        return;
    sPokeCoinObjPos[sPokeCoinObjCount].x = screenX;
    sPokeCoinObjPos[sPokeCoinObjCount].y = screenY;
    sPokeCoinObjCount++;
}

static void UnpackCoinSource(u8 out[16][16]);
static void PackCoinBlit(u8 in[16][16]);

static u8 RemapCoinPixelForFloorObj(u8 p)
{
    if (p == POKE_COIN_SLOT_WHITE)
        return POKE_COIN_SLOT_WHITE_OBJ_FLOOR;
    if (p == POKE_COIN_SLOT_PALE)
        return POKE_COIN_SLOT_PALE_OBJ_FLOOR;
    if (p == POKE_COIN_SLOT_YELLOW)
        return POKE_COIN_SLOT_YELLOW_OBJ_FLOOR;
    if (p == POKE_COIN_SLOT_MID)
        return POKE_COIN_SLOT_MID_OBJ_FLOOR;
    if (p == POKE_COIN_SLOT_DARK_TOWN)
        return POKE_COIN_SLOT_DARK_OBJ_FLOOR;
    return p;
}

/* Town .4bpp → floor ITEM_POKE indices, then OBJ VRAM upload. */
static void UploadPokeCoinObjTiles(void)
{
    u8 grid[16][16];
    s32 y, x;

    UnpackCoinSource(grid);
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++)
            grid[y][x] = RemapCoinPixelForFloorObj(grid[y][x]);
    }
    PackCoinBlit(grid);
    CpuCopy((void *)(OBJ_VRAM0 + POKE_COIN_OBJ_VRAM_INDEX * 32),
            sPokeCoinBlitBuf, POKE_COIN_OBJ_UPLOAD_BYTES);
}

void EmitPokeCoinObjSprites(void)
{
    s32 i;
    s32 palNum;
    SpriteOAM sprite;

    if (!gRuntimeConfig.custom_graphics || !gUnknown_203B40C || sPokeCoinObjCount <= 0)
        return;

    UploadPokeCoinObjTiles();
    palNum = GetItemPalette(ITEM_POKE);

    for (i = 0; i < sPokeCoinObjCount; i++) {
        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 0); /* square */
        SpriteSetSize(&sprite, 1);  /* 16×16 */
        SpriteSetY(&sprite, sPokeCoinObjPos[i].y);
        SpriteSetX(&sprite, sPokeCoinObjPos[i].x);
        SpriteSetTileNum(&sprite, POKE_COIN_OBJ_VRAM_INDEX);
        SpriteSetPriority(&sprite, 0); /* above dialogue BG */
        SpriteSetPalNum(&sprite, palNum);
        AddSprite(&sprite, 0x100, NULL, NULL);
    }
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

static u8 RemapCoinPixelForBank(u8 p, bool8 fontRemap)
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

    if (!fontRemap)
        return p; /* Town banks 13/14 — .4bpp indices match sPokeCoinTownPal. */

    /* Dialogue keeps font bank 15 so name text stays correct; map golds onto
     * stock yellow / HUD / shadow. */
    if (p == POKE_COIN_SLOT_PALE)
        return POKE_COIN_SLOT_PALE_TOWN_FONT;
    if (p == POKE_COIN_SLOT_YELLOW)
        return POKE_COIN_SLOT_YELLOW_TOWN_FONT;
    if (p == POKE_COIN_SLOT_MID)
        return POKE_COIN_SLOT_MID_TOWN_FONT;
    if (p == POKE_COIN_SLOT_DARK_TOWN)
        return POKE_COIN_SLOT_DARK_TOWN_FONT;
    return p;
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
 * Build a 16×16 blit. See custom_graphics.h.
 */
const u32 *BuildPokeCoinBlit(const u32 *baseTiles, s32 ox, s32 oy,
                             bool8 preserveTopBevel, bool8 keepBaseText)
{
    u8 src[16][16];
    u8 dst[16][16];
    u8 bevel[3][16];
    s32 y, x;
    u8 emptyPix = gUnknown_203B40C ? POKE_COIN_SLOT_TRANSPARENT : POKE_COIN_SLOT_WINDOW_FILL;
    bool8 keepBevel = FALSE;
    bool8 fontRemap = keepBaseText;

    if (!gRuntimeConfig.custom_graphics)
        return NULL;

    if (baseTiles != NULL) {
        const u32 *p = baseTiles;
        s32 ty, tx, row, col;

        for (ty = 0; ty < 2; ty++) {
            for (tx = 0; tx < 2; tx++) {
                for (row = 0; row < 8; row++) {
                    u32 word = *p++;
                    for (col = 0; col < 8; col++) {
                        u8 pix = (word >> (col * 4)) & 0xF;
                        s32 py = ty * 8 + row;
                        s32 px = tx * 8 + col;

                        if (preserveTopBevel && py < 3) {
                            bevel[py][px] = pix;
                            keepBevel = TRUE;
                        }

                        if (gUnknown_203B40C) {
                            if (pix != 0)
                                pix = 0;
                        }
                        else if (keepBaseText) {
                            /* Keep text/shadow/bevel; only fill true empties. */
                            if (pix == 0)
                                pix = emptyPix;
                        }
                        else if (pix != POKE_COIN_SLOT_WINDOW_FILL) {
                            pix = emptyPix;
                        }
                        dst[py][px] = pix;
                    }
                }
            }
        }
    }
    else {
        for (y = 0; y < 16; y++) {
            for (x = 0; x < 16; x++)
                dst[y][x] = emptyPix;
        }
    }

    UnpackCoinSource(src);
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            u8 p = src[y][x];
            s32 dx = x + ox;
            s32 dy = y + oy;

            if (p != 0 && dx >= 0 && dx < 16 && dy >= 0 && dy < 16
                && !(keepBevel && dy < 3))
                dst[dy][dx] = RemapCoinPixelForBank(p, fontRemap);
        }
    }

    if (keepBevel) {
        for (y = 0; y < 3; y++) {
            for (x = 0; x < 16; x++)
                dst[y][x] = bevel[y][x];
        }
    }

    PackCoinBlit(dst);
    return sPokeCoinBlitBuf;
}

void ApplyCustomPokeCoinPalette(void)
{
    s32 bank;

    /* Town bank-14 load is deferred to glyph draw. Dungeon coin is OBJ. */
    if (gRuntimeConfig.pmd2_battle_info_colors) {
        for (bank = 0; bank < 8; bank++)
            gFontPalette[bank * 16 + ITEM_PINK_SLOT] = sItemPinkColor;
        RefreshActiveFontPalette();
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
