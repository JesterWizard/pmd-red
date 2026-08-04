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

## Quick status snapshot

| Item | State |
| --- | --- |
| Default ROM name | `pmd_red.gba` |
| Padding | Off (`PAD_ROM=1` to restore) |
| Ground BPC/BMA LZ | On (`GMLZ`) |
| Ground BPL/BPA LZ | Off |
| Unused unk blobs in modern ROM | Stripped |
| Matching `make compare` | Not expected to match once assets diverge |
