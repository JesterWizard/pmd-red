#include "global.h"
#include "custom_graphics.h"
#include "runtime.h"

/*
 * Flat PMD2-style Poké coin (HUD), replacing the "Poké" text glyph.
 * Source PNG: graphics/custom/poke_coin.png
 *
 * Palette indices (fontpal, unkA bit0 = raw pixels):
 *   0 transparent, 2 darker gold, 3 dark border, 6 yellow
 */
static const u16 sPokeCoinGlyphLeft[] = {
    0x0000, 0x3330, 0x0000,
    0x0000, 0x6663, 0x0000,
    0x3000, 0x6666, 0x0000,
    0x6300, 0x2226, 0x0000,
    0x6300, 0x6662, 0x0000,
    0x6300, 0x2262, 0x0000,
    0x6300, 0x6262, 0x0000,
    0x6300, 0x6262, 0x0000,
    0x3000, 0x6666, 0x0000,
    0x0000, 0x6663, 0x0000,
    0x0000, 0x3330, 0x0000,
};

static const u16 sPokeCoinGlyphRight[] = {
    0x0033, 0x0000, 0x0000,
    0x0366, 0x0000, 0x0000,
    0x3666, 0x0000, 0x0000,
    0x6622, 0x0003, 0x0000,
    0x6266, 0x0003, 0x0000,
    0x6222, 0x0003, 0x0000,
    0x6666, 0x0003, 0x0000,
    0x6666, 0x0003, 0x0000,
    0x3666, 0x0000, 0x0000,
    0x0366, 0x0000, 0x0000,
    0x0033, 0x0000, 0x0000,
};

/* {POKE} = 0x83BF + 0x83C4 in charmap.txt */
static const unkChar sPokeCoinLeft = {
    .unk0 = sPokeCoinGlyphLeft,
    .unk4 = 0x83BF,
    .width = 8,
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 1, /* raw palette indices, no drop shadow */
    .fillB = 0,
};

static const unkChar sPokeCoinRight = {
    .unk0 = sPokeCoinGlyphRight,
    .unk4 = 0x83C4,
    .width = 7,
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 1,
    .fillB = 0,
};

const unkChar *GetCustomPokeCoinChar(s32 chr)
{
    if (!gRuntimeConfig.custom_graphics)
        return NULL;
    if (chr == 0x83BF)
        return &sPokeCoinLeft;
    if (chr == 0x83C4)
        return &sPokeCoinRight;
    return NULL;
}
