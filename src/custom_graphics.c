#include "global.h"
#include "custom_graphics.h"
#include "runtime.h"
#include "bg_palette_buffer.h"
#include "graphics_memory.h"
#include "structs/rgb.h"
#include "text_1.h"

/*
 * Poké coin HUD glyph from graphics/custom/poke_coin.png (10×10).
 *
 * PNG black → transparent (glyph 0).
 * Do NOT touch fontpal slot 8 — normal text shadows use gTextShadowMask 0x88888888.
 *
 * Opaque mapping (exact PNG RGB except white, which already matches slot 7):
 *   9  = (255,255,115) pale yellow   (PNG 0)
 *   10 = (247,206,0)   yellow        (PNG 1)
 *   11 = (222,173,0)   mid gold      (PNG 2)
 *   12 = (165,115,0)   dark gold     (PNG 3)
 *   7  = (255,255,255) white         (PNG 4, stock fontpal)
 */
enum {
    COIN_T = 0,
    COIN_W = 7,
    COIN_A = 9,
    COIN_B = 10,
    COIN_C = 11,
    COIN_D = 12,
};

/* PNG opaque indices 0–3 only; white uses stock slot 7. */
static const RGB_Struct sPokeCoinColors[4] = {
    { 255, 255, 115, 0x80 },
    { 247, 206,   0, 0x80 },
    { 222, 173,   0, 0x80 },
    { 165, 115,   0, 0x80 },
};

/*
 * 10×10 PNG centered in 15×11. Remap: 0→9, 1→A, 2→B, 3→C, 4→7, 5→0.
 * Generated to match poke_coin.png pixels exactly.
 */
static const u16 sPokeCoinGlyphLeft[] = {
    0x0000, 0x9777, 0x0000,
    0x7000, 0xA997, 0x0000,
    0x7700, 0xCCCC, 0x0000,
    0x9700, 0xAABC, 0x0000,
    0xA700, 0xAABC, 0x0000,
    0xA900, 0xCCBC, 0x0000,
    0xAA00, 0xAABC, 0x0000,
    0xAB00, 0xAABC, 0x0000,
    0xB000, 0x99AA, 0x0000,
    0x0000, 0xCCCC, 0x0000,
    0x0000, 0x0000, 0x0000,
};

static const u16 sPokeCoinGlyphRight[] = {
    0x00A9, 0x0000, 0x0000,
    0x0AAA, 0x0000, 0x0000,
    0xAAAC, 0x0000, 0x0000,
    0x9ACB, 0x0000, 0x0000,
    0x9ABB, 0x0000, 0x0000,
    0x9AAB, 0x0000, 0x0000,
    0x79AA, 0x0000, 0x0000,
    0xC79A, 0x0000, 0x0000,
    0x0C79, 0x0000, 0x0000,
    0x00CC, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000,
};

static const unkChar sPokeCoinLeft = {
    .unk0 = sPokeCoinGlyphLeft,
    .unk4 = 0x83BF,
    .width = 8,
    .unk8 = 0,
    .fill9 = 0,
    .unkA = 1,
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

void ApplyCustomPokeCoinPalette(void)
{
    s32 bank, i;
    RGB_Struct *ptr;

    if (!gRuntimeConfig.custom_graphics)
        return;

    /* Slots 9–12 only — leave slot 8 (text shadow) alone. */
    for (bank = 0; bank < 8; bank++) {
        for (i = 0; i < 4; i++)
            gFontPalette[bank * 16 + COIN_A + i] = sPokeCoinColors[i];
    }

    if (sub_80063B0() == 1)
        ptr = &gFontPalette[0];
    else
        ptr = &gFontPalette[16];
    for (i = 0; i < 16; ptr++, i++)
        SetBGPaletteBufferColorArray(i + 240, ptr);
}

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
