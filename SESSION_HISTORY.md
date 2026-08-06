# Session history — pmd-red size / shiftability work

Running log of ROM-hack changes in this workspace so they can be understood and
reversed later. Newest entries at the bottom.

---

## 2026-08-04 — Build defaults

### What changed
- Default `make` builds **`pmd_red.gba`** with the modern toolchain +
  `ld_script_modern.ld` (no 32 MiB pad unless `PAD_ROM=1`).
- `MODERN=0` still uses agbcc + retail-pinned `ld_script.ld` (objects under
  `build/pmd_red_matching/`).
- Removed the separate `pmd_red_modern.gba` output name; both modes emit
  `pmd_red.gba`.

### Reverse
- Set `MODERN ?= 0` in `Makefile` (or `make MODERN=0`).
- Restore `BUILD_NAME` / `pmd_red_modern` naming if you need the old dual-ROM
  workflow (see git history before this session).

---

## 2026-08-04 — Ground map BPC/BMA LZ77 compression

### What changed
- Editable assets remain in `data/map_bg/`.
- Shipped compressed copies: `data/map_bg_lz/*.bpc.lz` and `*.bma.lz`.
- Container format: **`GMLZ` + standard BIOS LZ77** (`0x10…`), produced by
  `compress_ground_assets.py` (default `--only bpc-bma`).
- **BPL/BPA stay uncompressed** — they stay memory-mapped for palette/tile
  animations; full-file heap decompress hung boot (`STARTMODE_14` / intro).
- Runtime: `src/ground_assets.c`, `include/ground_assets.h`.
  - Large BPC decompresses into existing `GroundBg.unk544` scratch (no heap spike).
  - BMA uses the small heap-backed open path.
  - Bare `0x10` detection is intentionally avoided (many BPA headers start with
    `numFrames == 16`).
- Map load order in `src/ground_bg.c`: BPC first → copy/free → then BPL/BMA.
- `src/ground_map_files_*.c` INCBINs `.lz` for BPC/BMA only.

### Why boot hung earlier
1. Heap OOM when BPL+BPC+BMA(+BPA) were all decompressed onto the main heap.
2. False LZ decode on raw BPA files whose first byte is `0x10`.

### Size (approx.)
- BPC+BMA: `4,016,884 → 2,585,864` bytes (saved ~1.43 MiB in those assets).
- Full ROM after this + unpadded modern link: ~29.85 MiB vs 32.00 MiB baserom.

### Reverse
1. Point all `ground_map_files_*.c` INCBINs back at `data/map_bg/…` (no `_lz`).
2. Optionally stop calling `OpenGroundFile*` and restore
   `OpenFileAndGetFileDataPtr` / `CloseFile` in `src/ground_bg.c`.
3. `data/map_bg_lz/` can remain on disk unused.

### Verify
- Headless libmgba boot proof scripts/screenshots under `docs/boot_proof/`
  (`comp_*.png` after compression re-enabled).

---

## 2026-08-04 — Strip unused opaque ROM blobs (this step)

### What changed
Default (**modern**) build **no longer links** these asm objects:

| Asm stub | Binary | Size |
| --- | --- | ---: |
| `data/unk_96BD7AC.s` | `data/unknown_unused/unk_96BD7AC.bin` | 534,612 |
| `data/unk_98589A4.s` | `data/unknown_unused/unk_98589A4.bin` | 226,908 |
| `data/unk_9D02950.s` | `data/unknown_unused/unk_9D02950.bin` | 1,431,216 |
| `data/unk_9E7EB08.s` | `data/unknown_unused/unk_9E7EB08.bin` | 5,368 |
| `data/unk_9fbd5d0.s` | `data/unknown_unused/unk_9fbd5d0.bin` | 272,944 |
| **Total** | | **2,470,048 (~2.36 MiB)** |

Mechanism: `Makefile` filters `UNUSED_UNK_ASM` out of `ASM_SOURCES` when
`MODERN=1`. Files stay in the tree. Matching `ld_script.ld` still lists the
sections for `MODERN=0`.

### Evidence they are unused
- No `.global` consumers in `src/` / `asm/` / `include/` (only
  `gUnknown_98589A4` is labeled, and nothing references it).
- Blobs are unlabeled `.incbin` padding for retail address layout.
- Docs already flagged `unk_9D02950` as unused (`docs/rom_asset_sizes.md`).

### Reverse
1. In `Makefile`, remove the `UNUSED_UNK_ASM` / `filter-out` block (or set the
   filter to empty) so `data/unk_*.s` are assembled again under `MODERN=1`.
2. Rebuild: `make -j$(nproc)`.
3. Do **not** delete `data/unknown_unused/*.bin` unless you also drop the
   matching linker entries and accept a non-baserom `MODERN=0` layout.

### Size after this step
- `pmd_red.gba`: **27.49 MiB** (baserom 32.00 MiB → **~4.51 MiB** smaller overall).
- Boot re-checked with libmgba: **PASS** (colorful in-game frames).

---

## 2026-08-04 — Monster AX tile LZ77 compression

### What changed
AX sprite **tiles** (raw `.4bpp`, not AT4PX — portraits were the only AT4PX in
`monster_sbin`) are now shipped as `graphics/ax/mon/**/*.4bpp.lz` (`GMLZ` +
BIOS LZ77).

- Tool: `compress_ax_tiles.py` / `make ax-compress`
- Headers: all 423 `src/data/ax/*.h` INCBINs point at `.4bpp.lz` (`ALIGNED(4)`)
- Runtime: `src/sprite.c` `RegisterSpriteParts_80052BC` / `sub_8005304`
  - Reads uncompressed size from the LZ header (so VRAM packing stays correct)
  - `LZ77UnCompVram` straight into OBJ VRAM (no heap; tiles ≤ 2 KiB each)
- Pose/anim tables stay uncompressed in ROM (~9.8 MiB of the old AX blob)

### Size
- Tiles: `8,044,576 → 5,179,292` bytes (saved **~2.73 MiB**, ~35.6%)
- `pmd_red.gba`: **24.76 MiB** (baserom 32.00 → **~7.24 MiB** smaller overall)
- Boot check `docs/boot_proof/ax_*.png`: **PASS** (intro Pelipper / maps OK)

### Reverse
1. Rewrite `src/data/ax/*.h` INCBINs back to `….4bpp` (drop `.lz` / optional
   `ALIGNED(4)`).
2. Restore `sub_8005304` / `RegisterSpriteParts_80052BC` to plain `CpuCopy`.
3. Remove `ax-compress` Makefile hook; delete `compress_ax_tiles.py` if desired.
4. `.4bpp.lz` under `graphics/ax/mon/` can be deleted (`make tidy` regenerates
   only if hooks remain).

---

## 2026-08-04 — Runtime config (build-time settings)

### What changed
- `include/runtime.h` — `RuntimeConfig` struct + `gRuntimeConfig` alias.
- `configs/runtime.c` — editable defaults in `.runtime_config` ROM section
  (same pattern as [sigma_star_saga](https://github.com/JesterWizard/sigma_star_saga/blob/master/configs/runtime.c)).
- Modern Makefile links `configs/runtime.o`; `ld_script_modern.ld` keeps the
  section (would otherwise hit `/DISCARD/`).
- Matching (`MODERN=0`) does not link the config object.

### Hooked toggles
| Field | Hook site(s) |
| --- | --- |
| `always_run` | `DungeonHandlePlayerInput` / `sub_805EC4C` (`dungeon_main.c`); `sub_809CDC8` (`ground_lives_helper.c`) |
| `infinite_belly` | `DoEndOfTurnEffects_Async`; wall −5 / ally ribbons (`dungeon_misc.c`); Pass Scarf drain (`dungeon_move.c`) |
| `exp_multiplier` | `AddExpPoints` (`dungeon_leveling.c`) |
| `recruit_rate_boost` | `TryRecruitMonster` (+ Friend Bow amount) |
| `all_friend_areas` | `LoadFriendAreas` / `InitializeFriendAreas` / `GetFriendAreaStatus` / `HasAllFriendAreas` |
| `debug_menu` | `SetMainMenuItems` appends **Debug** → existing `MENU_DEBUG` path |
| `disable_something_approaches` | `HandleWind` (`dungeon_wind.c`) |
| `l_to_use_move` | `DungeonHandlePlayerInput` (`dungeon_main.c`): L alone uses set move |

### Reverse
1. Drop `configs/`, `include/runtime.h`, Makefile `CONFIG_*` bits, and the
  `.runtime_config` block in `ld_script_modern.ld`.
2. Revert the `gRuntimeConfig` checks in the files listed above.

---

## 2026-08-04 — Faster incremental makes (AX tiles)

### What changed
- `ax-compress` no longer forces every `monster_gfx*.o` rebuild (it was
  `.PHONY` → full cpp/cc1/as of all 43 units each `make`).
- Lazy stamp `build/pmd_red/ax_tiles.stamp`: compressor always re-checks, but
  stamp mtime only moves when a `.lz` is rewritten. `monster_gfx` depends
  **order-only** on the stamp; per-tile rebuilds come from scaninc `.d` →
  `.4bpp.lz`.
- `compress_ax_tiles.py`: cache hits use `stat` only (no full-file reads);
  `--stamp` / `--quiet` for make; verify only newly built tiles.
- ELF now depends on `libagbsyscall/libagbsyscall.a` (real file) instead of
  phony `libagbsyscall`, so no-op makes no longer re-link the whole ROM.

### Reverse
Restore `$(MONSTER_GFX_OBJECTS): ax-compress`, ELF ← `libagbsyscall`, and the
old script loop.

---

## 2026-08-04 — Custom title-screen backgrounds

Docs: [`documentation/Features/CustomTitleBackgrounds.md`](documentation/Features/CustomTitleBackgrounds.md).

### What changed
- Source art: `graphics/title_screen_backgrounds/title_01.png` … `title_06.png`
  (240×160).
- Build converter: `convert_title_backgrounds.py` → sibling `.at4pn` (AT4PN
  tilemaps+8bpp) + `.pal` (240 RGBX).
- Archive: `src/custom_title_backgrounds.c` / `include/custom_title_backgrounds.h`
  (`ctitle0`…`ctitle5` + `*p` palettes).
- Runtime toggle: `gRuntimeConfig.custom_title_backgrounds` (default `TRUE`)
  in `configs/runtime.c` / `include/runtime.h`.
- Hook: `LoadTitleScreen` in `src/main_loops.c` picks a random custom BG when
  enabled; otherwise vanilla `titlen0`–`titlen2`.
- Makefile: `title-bg-convert` / `build/pmd_red/title_bg.stamp` (order-only
  dep for `custom_title_backgrounds.o`).

### Reverse
1. Set `.custom_title_backgrounds = FALSE` (or drop the field + hook).
2. Remove `src/custom_title_backgrounds.c`, converter, Makefile stamp, and
   generated `.at4pn`/`.pal` if desired.

---

## 2026-08-04 — Custom title BGs → 8bpp

Docs: [`documentation/Features/CustomTitleBackgrounds.md`](documentation/Features/CustomTitleBackgrounds.md).

### What changed
- Converter emits **8bpp** tiles + up to **239** art colors (index 0 reserved).
  Continue `clmkpat` icons use the **OBJ palette** (sprites) when title 8bpp
  is on, so they no longer steal BG colors 176–239.
- Title-only BG3: `BGCNT_256COLOR | CHARBASE(1) | SCREENBASE(31)` via
  `gTitleBg8bpp`; BG0–2 maps at screenbases **6–8** (`0x3000–0x47FF`) so
  Continue window tiles (~`0x2D00`) do not smash maps; BG3 map at **31**
  (`0xF800`) after the tile blob.
- 8bpp tiles load at **`VRAM+0x6000`** (tile index base **128**, max **600**)
  through `0xF5FF`.
- Left text gutter (column 0) cleared while title 8bpp so art is full-bleed.
- `LoadTitleScreen` clears flag on title exit.
- Vanilla `titlen*` path unchanged (4bpp @ CHARBASE 2).

### Reverse
Restore 4bpp converter + always-vanilla BG3CNT / screenbases 12–15.

---

## 2026-08-04 — Fix Continue glitch with custom title BGs

Continue’s load-screen windows overwrote title-mode tilemaps when maps lived
at `0x2000+`. Maps relocated above window GFX / after the tile blob; tile cap
**600**, art colors **200**.

---

## 2026-08-06 — AX pose/anim table dedupe

### What changed
Pose/anim **tables** (not tiles) were full of duplicate arrays. Tool:
`dedupe_ax_tables.py` / `make ax-dedupe`.

1. **Within each** `src/data/ax/*.h`: identical `ax_pose` / `ax_anim` arrays
   keep one definition; pose/anim table slots alias it.
2. **Across species**: anim bodies used by 2+ mons move to
   `src/data/ax_shared_anims.c` + `include/ax_shared_anims.h`.

No runtime/loader changes — still ROM-mapped SIRO pointers.

### Size
| | Before | After |
| --- | ---: | ---: |
| `pmd_red.gba` | 25.30 MiB | **21.92 MiB** |
| AX tables (excl. tiles) | ~9.77 MiB | **~6.39 MiB** |
| **Saved** | | **~3.38 MiB** |

Breakdown: poses 2.06→0.81 MiB, anims 5.03→2.89 MiB (local+shared),
positions unchanged (1.43 MiB).

### Reverse
1. `git checkout -- src/data/ax/ include/ax_shared_anims.h`
2. Delete `src/data/ax_shared_anims.c` (and optional Makefile `ax-dedupe` bits).
3. Rebuild.

Re-running `make ax-dedupe` on an already-deduped tree is a no-op.

---

## Quick status snapshot

| Item | State |
| --- | --- |
| Default ROM name | `pmd_red.gba` |
| Padding | Off (`PAD_ROM=1` to restore) |
| Ground BPC/BMA LZ | On (`GMLZ`) |
| Ground BPL/BPA LZ | Off |
| Monster AX tile LZ | On (`GMLZ` → `LZ77UnCompVram`) |
| AX pose/anim dedupe | On (`make ax-dedupe`) |
| Unused unk blobs in modern ROM | Stripped |
| Runtime config | On (modern; edit `configs/runtime.c`) |
| Custom title backgrounds | On (8bpp ≤600 tiles @ +128; maps SB 6–8/31; `custom_title_backgrounds`) |
| Matching `make compare` | Not expected to match once assets diverge |
