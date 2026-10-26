#include "global.h"
#include "globaldata.h"
#include "cpu.h"
#include "def_filearchives.h"
#include "file_system.h"
#include "game_options.h"
#include "graphics_memory.h"
#include "runtime.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "ui_style.h"

#define FONT_SLOT_FILL 1
#define FONT_SLOT_FRAME_INNER 9   /* unused grey in vanilla */
#define FONT_SLOT_FRAME_DARK 13
#define FONT_SLOT_FRAME_OUTER 14  /* also COLOR_LIGHT_BLUE text (leader name): keep it readable */
#define FONT_SLOT_FRAME_LIGHT 15  /* also colour codes E / S / T */
#define FONT_SLOT_TEXT_WHITE 7
#define FONT_SLOT_TEXT_BLACK 3
/* gFontPalette sets 0–6 are window palettes (gender / Windows option);
 * set 7 is the credits palette and keeps its colours. */
#define NUM_WINDOW_PALETTE_SETS 7

#define RGB8(r_, g_, b_) { .r = (r_), .g = (g_), .b = (b_), .unk4 = 0x80 }

struct SkyFrameTint
{
    RGB_Struct dark;   /* inner line */
    RGB_Struct inner;  /* top / left inner tone */
    RGB_Struct outer;  /* outer edge, right / bottom inner tone, corner glow */
    RGB_Struct light;  /* light band */
};

/* Sampled from Explorers of Sky screenshots (green from a lossless capture;
 * pink / blue averaged along JPEG frame edges), rounded to GBA 5-bit steps.
 * Indexed by enum windowColor. */
static const struct SkyFrameTint sSkyFrameTints[NUM_WINDOW_COLORS] = {
    [WINDOW_COLOR_BLUE]  = { RGB8(40, 40, 168), RGB8(48, 48, 216),  RGB8(144, 176, 232), RGB8(224, 248, 248) },
    [WINDOW_COLOR_RED]   = { RGB8(128, 56, 88), RGB8(160, 72, 112), RGB8(224, 104, 176), RGB8(248, 192, 240) },
    [WINDOW_COLOR_GREEN] = { RGB8(24, 120, 24), RGB8(32, 160, 32),  RGB8(72, 184, 72),   RGB8(240, 248, 240) },
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
        set[FONT_SLOT_FRAME_INNER] = tint->inner;
        set[FONT_SLOT_FRAME_DARK] = tint->dark;
        set[FONT_SLOT_FRAME_OUTER] = tint->outer;
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

/* Menu cursor (OBJ tile 0x3F4 of the fontsp sheet, OBJ bank 15). Sky: EoS's
 * yellow arrow — white tip, yellow body, orange / brown lower edge — using
 * the gold ramp already in fontsppa (slots 5–8), so no palette change. */
#define MENU_CURSOR_OBJ_TILE 0x3F4
#define FONTSP_FIRST_OBJ_TILE 0x3F0
#define OBJ_TILE_VRAM(tile) (VRAM + 0x10000 + (tile) * 32)

struct FontSheetFile
{
    s32 size;
    u8 dataArray[0];
};

static const u8 sSkyMenuCursorTile[32] ALIGNED(4) = {
    0x70, 0x04, 0x00, 0x00, /* .74..... */
    0x70, 0x48, 0x00, 0x00, /* .784.... */
    0x70, 0x88, 0x04, 0x00, /* .7884... */
    0x70, 0x88, 0x68, 0x00, /* .78886.. */
    0x70, 0x88, 0x56, 0x00, /* .78865.. */
    0x70, 0x68, 0x05, 0x00, /* .7865... */
    0x70, 0x56, 0x00, 0x00, /* .765.... */
    0x60, 0x05, 0x00, 0x00, /* .65..... */
};

static void LoadUiStyleSpriteTiles(void)
{
    OpenedFile *file;
    const struct FontSheetFile *sheet;

    if (UiStyleIsSky()) {
        CpuCopy((void *)OBJ_TILE_VRAM(MENU_CURSOR_OBJ_TILE), sSkyMenuCursorTile, 32);
        return;
    }
    /* Back to Red: restore the vanilla sprite sheet (InitGraphics loads it). */
    file = OpenFileAndGetFileDataPtr("fontsp", &gSystemFileArchive);
    sheet = (const struct FontSheetFile *)file->data;
    CpuCopy((void *)OBJ_TILE_VRAM(FONTSP_FIRST_OBJ_TILE), sheet->dataArray, sheet->size * 32);
    CloseFile(file);
}

void ApplyUiStyle(void)
{
    if (gRuntimeConfig.ui_style == sLoadedUiStyle)
        return;
    /* Reloads the vanilla chrome sheet + font palette; both hooks re-apply
     * the current style on top. */
    ReloadFontSheet();
    LoadUiStyleSpriteTiles();
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

#define SKY_TILE_RIGHT                 0x2FC
#define SKY_TILE_CORNER_TOP_RIGHT      0x2FD
#define SKY_TILE_CORNER_BOTTOM_RIGHT   0x2FE
#define SKY_TILE_DIALOGUE_TOP_RIGHT    0x2FF
#define SKY_TILE_DIALOGUE_BOTTOM_RIGHT 0x2E6

#define FRAME_ENTRY(tile, flips) (TILEMAP_TILE_NUM(tile) | TILEMAP_PAL(15) | (flips))
#define FLIP_H TILEMAP_FLIP_HORIZONTAL(1)
#define FLIP_V TILEMAP_FLIP_VERTICAL(1)

/* EoS frames are lit from the top left: the right edge gets a dark outer line,
 * so the right-hand pieces are their own tiles instead of flipped left ones. */
static u16 RemapSkyFrameEntry(u16 entry)
{
    switch (entry) {
        case FRAME_ENTRY(0x2DA, FLIP_H):
        case FRAME_ENTRY(0x2EA, FLIP_H):
            return FRAME_ENTRY(SKY_TILE_RIGHT, 0);
        case FRAME_ENTRY(0x2D8, FLIP_H):
        case FRAME_ENTRY(0x2E8, FLIP_H):
            return FRAME_ENTRY(SKY_TILE_CORNER_TOP_RIGHT, 0);
        case FRAME_ENTRY(0x2D8, FLIP_H | FLIP_V):
        case FRAME_ENTRY(0x2E8, FLIP_H | FLIP_V):
            return FRAME_ENTRY(SKY_TILE_CORNER_BOTTOM_RIGHT, 0);
        case FRAME_ENTRY(0x2E4, FLIP_H):
            return FRAME_ENTRY(SKY_TILE_DIALOGUE_TOP_RIGHT, 0);
        case FRAME_ENTRY(0x2E5, FLIP_H):
            return FRAME_ENTRY(SKY_TILE_DIALOGUE_BOTTOM_RIGHT, 0);
        default:
            return entry;
    }
}

void RemapUiStyleFrameTiles(u16 tilemap[32][32], s32 x0, s32 y0, s32 x1, s32 y1)
{
    s32 x, y;

    if (!UiStyleIsSky())
        return;
    if (x0 < 0)
        x0 = 0;
    if (y0 < 0)
        y0 = 0;
    if (x1 > 31)
        x1 = 31;
    if (y1 > 31)
        y1 = 31;
    for (y = y0; y <= y1; y++) {
        for (x = x0; x <= x1; x++)
            tilemap[y][x] = RemapSkyFrameEntry(tilemap[y][x]);
    }
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
        *top = FONT_SLOT_FRAME_OUTER;
        *shadow = FONT_SLOT_FRAME_DARK;
    }
}
