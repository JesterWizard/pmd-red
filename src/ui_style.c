#include "global.h"
#include "globaldata.h"
#include "cpu.h"
#include "game_options.h"
#include "graphics_memory.h"
#include "runtime.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "ui_style.h"

#define FONT_SLOT_FILL 1
#define FONT_SLOT_FRAME_DARK 13
#define FONT_SLOT_FRAME_MID 14
#define FONT_SLOT_FRAME_LIGHT 15
#define FONT_SLOT_TEXT_WHITE 7
#define FONT_SLOT_TEXT_BLACK 3
/* gFontPalette sets 0–6 are window palettes (gender / Windows option);
 * set 7 is the credits palette and keeps its colours. */
#define NUM_WINDOW_PALETTE_SETS 7

#define RGB8(r_, g_, b_) { .r = (r_), .g = (g_), .b = (b_), .unk4 = 0x80 }

struct SkyFrameTint
{
    RGB_Struct dark;
    RGB_Struct mid;
    RGB_Struct light;
};

/* Sampled from Explorers of Sky screenshots (green exact; pink / blue from
 * JPEG captures, rounded to GBA 5-bit steps). Indexed by enum windowColor. */
static const struct SkyFrameTint sSkyFrameTints[NUM_WINDOW_COLORS] = {
    [WINDOW_COLOR_BLUE]  = { RGB8(40, 40, 168),  RGB8(64, 72, 232),   RGB8(224, 248, 248) },
    [WINDOW_COLOR_RED]   = { RGB8(136, 56, 96),  RGB8(184, 96, 152),  RGB8(248, 200, 248) },
    [WINDOW_COLOR_GREEN] = { RGB8(24, 120, 24),  RGB8(72, 184, 72),   RGB8(240, 248, 240) },
};

static const RGB_Struct sSkyFill = RGB8(32, 32, 32);

/* Frame tiles (font chrome sheet indices) replaced in Sky style. */
#include "data/ui_style_sky_chrome.h"

#define FONT_CHROME_FIRST_TILE 0x278
#define FONT_CHROME_VRAM (VRAM + 0x4F00)

/* Style whose chrome tiles are in VRAM. InitGraphics loads the vanilla sheet
 * at boot, before the runtime config exists. */
static EWRAM_DATA u8 sLoadedUiStyle = UI_STYLE_RED;

static const u8 sUiStyleNameRed[] = _("Red");
static const u8 sUiStyleNameSky[] = _("Sky");

const u8 *GetUiStyleName(u8 style)
{
    return style == UI_STYLE_SKY ? sUiStyleNameSky : sUiStyleNameRed;
}

bool8 UiStyleIsSky(void)
{
    return gRuntimeConfig.ui_style == UI_STYLE_SKY;
}

void ApplyUiStyleToFontPalette(void)
{
    const struct SkyFrameTint *tint;
    s32 i;
    u8 color;

    if (!UiStyleIsSky())
        return;

    color = gGameOptionsRef != NULL ? gGameOptionsRef->windowColor : WINDOW_COLOR_BLUE;
    if (color >= NUM_WINDOW_COLORS)
        color = WINDOW_COLOR_BLUE;
    tint = &sSkyFrameTints[color];

    for (i = 0; i < NUM_WINDOW_PALETTE_SETS; i++) {
        RGB_Struct *set = &gFontPalette[16 * i];

        set[FONT_SLOT_FILL] = sSkyFill;
        set[FONT_SLOT_FRAME_DARK] = tint->dark;
        set[FONT_SLOT_FRAME_MID] = tint->mid;
        set[FONT_SLOT_FRAME_LIGHT] = tint->light;
    }
}

void LoadUiStyleChromeTiles(void)
{
    s32 i;

    sLoadedUiStyle = gRuntimeConfig.ui_style;
    if (!UiStyleIsSky())
        return;

    for (i = 0; i < UI_STYLE_SKY_CHROME_TILE_COUNT; i++) {
        u32 tile = sUiStyleSkyChromeTileIds[i] - FONT_CHROME_FIRST_TILE;

        CpuCopy((void *)(FONT_CHROME_VRAM + tile * 32), &sUiStyleSkyChromeTiles[i * 32], 32);
    }
}

void ApplyUiStyle(void)
{
    if (gRuntimeConfig.ui_style == sLoadedUiStyle)
        return;
    /* Reloads the vanilla chrome sheet + font palette; both hooks re-apply
     * the current style on top. */
    ReloadFontSheet();
}

void GetUiStyleDialogueTopRows(u32 rows[4])
{
    if (UiStyleIsSky()) {
        /* mid, light, light, dark: the Sky frame's top edge (outer → inner) */
        rows[0] = 0xEEEEEEEE;
        rows[1] = 0xFFFFFFFF;
        rows[2] = 0xFFFFFFFF;
        rows[3] = 0xDDDDDDDD;
    }
    else {
        rows[0] = 0xFFFFFFFF;
        rows[1] = 0xEEEEEEEE;
        rows[2] = 0xDDDDDDDD;
        rows[3] = 0;
    }
}

void GetUiStyleDialogueBottomRows(u32 rows[3])
{
    if (UiStyleIsSky()) {
        /* dark, light, mid (inner → outer) */
        rows[0] = 0xDDDDDDDD;
        rows[1] = 0xFFFFFFFF;
        rows[2] = 0xEEEEEEEE;
    }
    else {
        rows[0] = 0xDDDDDDDD;
        rows[1] = 0xEEEEEEEE;
        rows[2] = 0xFFFFFFFF;
    }
}

/* Sky dialogue corners live in two chrome slots vanilla never draws
 * (0x2E4 / 0x2E5, see sky_chrome.png); Red flips 0x297 for the bottom. */
u16 GetUiStyleDialogueCornerTile(bool8 bottom)
{
    if (UiStyleIsSky())
        return TILEMAP_TILE_NUM(bottom ? 0x2E5 : 0x2E4) | TILEMAP_PAL(15);
    return TILEMAP_TILE_NUM(0x297) | TILEMAP_PAL(15) | (bottom ? TILEMAP_FLIP_VERTICAL(1) : 0);
}

bool8 UiStyleWantsOpaqueWindows(u16 bldCnt)
{
    const u16 firstTargets = BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ;

    return UiStyleIsSky() && (bldCnt & BLDCNT_EFFECT_BLEND) && (bldCnt & firstTargets) == BLDCNT_TGT1_BG1;
}

void GetUiStyleHeaderLineColors(u8 *top, u8 *shadow)
{
    if (UiStyleIsSky()) {
        *top = FONT_SLOT_TEXT_WHITE;
        *shadow = FONT_SLOT_TEXT_BLACK;
    }
    else {
        *top = FONT_SLOT_FRAME_MID;
        *shadow = FONT_SLOT_FRAME_DARK;
    }
}
