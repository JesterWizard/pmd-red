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
#ifdef SKY_STORY
void SetUiStyleFrameColorOverride(s32 color);
#endif
/* Upload the style's frame tiles over the font chrome sheet in VRAM. */
void LoadUiStyleChromeTiles(void);
/* Apply a style change immediately (reloads chrome tiles and palette). */
void ApplyUiStyle(void);

/* Dialogue (WINDOW_TYPE_0) top-edge rows (0–3) and bottom-edge rows (5–7 of
 * the last tile row) drawn into the window graphics. */
void GetUiStyleDialogueTopRows(u32 rows[4]);
void GetUiStyleDialogueBottomRows(u32 rows[3]);
#ifdef SKY_STORY
/* Sky style (UiStyleIsSky): EoS's 52 px dialogue box in a 7-row window. */
#define SKY_DIALOGUE_INSET 2   /* transparent pixel rows above and below */
#define SKY_DIALOGUE_FRAME 5   /* frame rows top and bottom */
void GetSkyDialogueTopTileRows(u32 rows[8]);
void GetSkyDialogueBottomTileRows(u32 rows[6]);

/* EoS's titled menu windows (dungeon submenus, measured on DeSmuME): title
 * 8 px in, a separator 12 px below the title's top (white, black shadow
 * under it) from 2 px in to 2 px short of the right edge, the first option
 * 18 px down, options 13 px in with the cursor 1 px in. EoS spaces options
 * 14 px apart on its 192 px screen; the GBA keeps Red's 12 px. */
#define SKY_MENU_TITLE_X 8
#define SKY_MENU_SEPARATOR_Y 12
#define SKY_MENU_SEPARATOR_INSET 2
#define SKY_MENU_FIRST_ENTRY_Y 18
#define SKY_MENU_ENTRY_X 13
#define SKY_MENU_ENTRY_HEIGHT 12
#endif
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
