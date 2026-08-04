# Custom Title Backgrounds: Full-Bleed 8bpp Art

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Artist / build workflow](#artist--build-workflow)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

Vanilla title screens cycle three compressed 4bpp backgrounds (`titlen0`–`titlen2`) with a limited per-tile palette. That is fine for stock art, but hand-painted 240×160 images lose color and can hit VRAM tile caps when converted naively.

This feature loads **custom PNGs** from `graphics/title_screen_backgrounds/`, converts them at build time to **8bpp** tiles + a shared palette, and displays a **random** one on the title screen while keeping the normal menu UI.

Toggle: `gRuntimeConfig.custom_title_backgrounds` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to restore vanilla `titlen*`.

| Mode | Source | BG format |
|------|--------|-----------|
| `TRUE` (default) | `title_01.png` … `title_06.png` | 8bpp BG3, up to ~239 art colors |
| `FALSE` | `titlen0`–`titlen2` | Vanilla 4bpp |

---

## Plan

### Runtime behavior

1. `LoadTitleScreen` picks `RandInt(6)` and opens `ctitleN` / `ctitleNp` from `gCustomTitleBgArchive`.
2. Decompress AT4PN → heap: two 32×32 tilemaps + 8bpp tile bytes.
3. Enable title-only VRAM layout (`SetTitleBg8bpp(TRUE)`), copy tiles, schedule tilemap DMA.
4. Fade in the 240-entry palette; main menu runs as usual (Continue stats, Adventure Log, etc.).
5. On title exit, `SetTitleBg8bpp(FALSE)` restores vanilla BG control.

### Title-only VRAM layout

Vanilla maps sit at screenbases 12–15 (`0x6000`–`0x7FFF`) and UI chrome (font sheet) at `0x4F00` (tiles `0x278+`). Continue’s load screen alone allocates ~360 window tiles (VRAM through ~`0x2D00`), so UI maps must sit **above** that region while 8bpp tiles fill most of the upper half of VRAM.

| Region | Title 8bpp mode | Purpose |
|--------|-----------------|--------|
| `0x0000`–`0x2FFF` | Window / UI 4bpp tiles (CHARBASE 0) | Menu text & window fill (Continue-sized OK) |
| `0x3000`–`0x37FF` | Screenbase **6** | BG0 tilemap |
| `0x3800`–`0x3FFF` | Screenbase **7** | BG1 tilemap |
| `0x4000`–`0x47FF` | Screenbase **8** | BG2 tilemap (empty) |
| `0x4F00`–`0x5FFF` | Font / window chrome (untouched) | Borders, fill tiles `0x278+` |
| `0x6000`–`0xF5FF` | 8bpp title tiles | CHARBASE1 indices **128…727** (max **600** tiles) |
| `0xF800`–`0xFFFF` | Screenbase **31** | BG3 tilemap |

BG3CNT while active: `BGCNT_256COLOR | CHARBASE(1) | SCREENBASE(31)`.

Loader adds **128** to every BG3 tile index so art tiles land at `VRAM+0x6000`, not on top of the font sheet.

### Left gutter

The text system normally paints map column 0 with tiles `0x279` / `0x27A` (an 8px black strip above BG3). For custom titles that column is cleared to transparent so full-bleed 240×160 art is visible (`LoadTitleScreen` + `sub_8009388` / `sub_8009408` when `gTitleBg8bpp`).

### Converter model

`convert_title_backgrounds.py`:

| Constraint | Value | Notes |
|------------|------:|-------|
| Canvas | 240×160 | Resized nearest if needed; alpha composited on black |
| Colors | ≤239 opaque | Palette index **0** reserved (GBA transparent); Continue icons use **OBJ** palette |
| Palette file | 240 RGBX | `unk4=0x80`; fade loop loads indices 0–239 |
| Unique tiles | ≤600 | Flip-aware; extras nearest-merged |
| Output tile size | 64 B | 8bpp 8×8 |
| Tilemaps | 2×32×32 | BG2 empty; image on BG3 (30×20 used) |

---

## Artist / build workflow

### Adding or replacing art

1. Drop or replace PNGs as `graphics/title_screen_backgrounds/title_XX.png` (`01`–`06`). Prefer exact **240×160**.
2. Rebuild the ROM (`make`). The Makefile target `title-bg-convert` regenerates sibling `.at4pn` / `.pal` via the stamp `build/pmd_red/title_bg.stamp` before assembling `custom_title_backgrounds.o`.
3. Optional manual convert:

```bash
python3 convert_title_backgrounds.py
# or force all:
rm -f graphics/title_screen_backgrounds/*.at4pn graphics/title_screen_backgrounds/*.pal
python3 convert_title_backgrounds.py
```

4. To add a **7th** background: extend `CUSTOM_TITLE_BG_COUNT`, add `INCBIN` + `ctitleN` / `ctitleNp` entries in `src/custom_title_backgrounds.c` (names must stay sorted for `OpenFile` binary search), and update `LoadTitleScreen` name tables.

### Design tips

- Stay under ~600 unique 8×8 tiles after flips. Heavy noise/dither raises tile count and may force merges.
- Prefer ≤239 distinct colors; the converter quantizes with median-cut, no dither.
- Index 0 is transparent on BG3 — avoid relying on pure “unused” holes in the image unless you want backdrop showing through.

### Disable

Set `.custom_title_backgrounds = FALSE` in `configs/runtime.c`. No need to delete assets.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Runtime toggle | `RuntimeConfig.custom_title_backgrounds` in `include/runtime.h`, `configs/runtime.c` | Gates custom vs vanilla title BG |
| Archive / INCBIN | `src/custom_title_backgrounds.c`, `include/custom_title_backgrounds.h` | `ctitle0`…`ctitle5` + palettes |
| Load / fade | `LoadTitleScreen` in `src/main_loops.c` | Decompress, tile base +128, copy to `VRAM+0x6000`, clear left gutter |
| 8bpp flag | `SetTitleBg8bpp` / `gTitleBg8bpp` in `src/bg_control.c`, `include/bg_control.h` | Title-only layout switch; cleared on title exit |
| BG registers | `UpdateBGControlRegisters` in `src/reg_control.c` | SB 6–8 + BG3 SB 31 / CHARBASE1 / 256-color |
| Tilemap DMA | `DoScheduledMemCopies` / `CopyBgTilemaps0And1` in `src/graphics_memory.c` | Copies to bases 6–8 / 31 when flag set |
| Left gutter | `sub_8009388` / `sub_8009408` in `src/text_3.c` | Transparent column 0 while title 8bpp |
| Converter | `convert_title_backgrounds.py` | PNG → AT4PN + `.pal` |
| Build hook | `title-bg-convert` / `TITLE_BG_STAMP` in `Makefile` | Order-only dep for archive object |

---

## TODO

- Support more than six backgrounds without hand-editing archive tables (glob / generated header).
- Optional per-image metadata (force regenerate, skip merge warnings).
- Document / automate a round-trip preview (`at4pn` → PNG) in-tree.

---

## Limitations & Bugs

- **600-tile cap** (CHARBASE1 from index 128 through `0xF5FF`). Images that exceed it are similarity-merged and can show soft 8×8 mismatches.
- **Palette 0–239** for art (index 0 transparent); **240–255** font/UI. Continue legendary icons load into the **OBJ palette** (buffer 256+) and draw as sprites when custom title 8bpp is on, so they do not clash with the title art.
- Title 8bpp layout is **title-screen only**. Leaving `gTitleBg8bpp` set outside that path will mis-place maps and break UI.
- Vanilla `titlen*` path is unchanged and still uses CHARBASE2 / screenbase 15.
- Generated `.at4pn` / `.pal` should be treated as build outputs; edit the PNGs, not the binaries.

If something looks wrong (garbled Continue UI, scrambled tiles), check that window tile GFX stayed below `0x3000` and that tile indices were offset by 128.
