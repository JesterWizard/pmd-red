#ifndef GUARD_UI_STYLE_H
#define GUARD_UI_STYLE_H

/*
 * Runtime `ui_style`: swaps the window / frame look.
 *   UI_STYLE_RED — vanilla Red Rescue Team windows.
 *   UI_STYLE_SKY — Explorers of Sky: dark grey fill and a beveled frame
 *                  (dark line, mid colour, light band) tinted by
 *                  Options > Windows (Blue / Red → pink / Green).
 * The style only touches font bank 15 (fill slot 1, frame slots 13–15) and
 * the frame tiles in the font chrome sheet, so window layouts are unchanged.
 */

const u8 *GetUiStyleName(u8 style);
bool8 UiStyleIsSky(void);

/* Patch the gFontPalette master copy (call after it is (re)loaded). */
void ApplyUiStyleToFontPalette(void);
/* Upload the style's frame tiles over the font chrome sheet in VRAM. */
void LoadUiStyleChromeTiles(void);
/* Apply a style change immediately (reloads chrome tiles and palette). */
void ApplyUiStyle(void);

/* Dialogue (WINDOW_TYPE_0) top-edge rows (0–3) and bottom-edge rows (5–7 of
 * the last tile row) drawn into the window graphics. */
void GetUiStyleDialogueTopRows(u32 rows[4]);
void GetUiStyleDialogueBottomRows(u32 rows[3]);
/* Dialogue (WINDOW_TYPE_0) left corner tilemap entries; flip H for the right. */
u16 GetUiStyleDialogueCornerTile(bool8 bottom);
/* Swap flipped left-hand frame pieces for the Sky right-hand tiles inside
 * [x0..x1] x [y0..y1] of a BG0 tilemap (no-op in Red style). */
void RemapUiStyleFrameTiles(u16 tilemap[32][32], s32 x0, s32 y0, s32 x1, s32 y1);
/* Sky windows are opaque: TRUE when the window layer (BG1) is the only
 * first blend target, i.e. vanilla's translucent window mode. */
bool8 UiStyleWantsOpaqueWindows(u16 bldCnt);
/* Colours for the header window's separator line (top row, shadow row). */
void GetUiStyleHeaderLineColors(u8 *top, u8 *shadow);

#endif /* GUARD_UI_STYLE_H */
