# ROM asset sizes

Retail baseline is a fixed **32.00 MiB** GBA image (`baserom.gba`). The default
**modern** build (`make`) emits an unpadded `pmd_red.gba` packed with
`ld_script_modern.ld`.

Current modern image: **~21.92 MiB** (~10.08 MiB under 32 MiB). Details and
reversals: `SESSION_HISTORY.md`.

Percentages below are of the **32 MiB** retail image unless noted.

## Image size timeline

| Stage | `pmd_red.gba` | Δ vs previous | What changed |
| --- | ---: | ---: | --- |
| Retail / matching pad | **32.00 MiB** | — | Fixed 32 MiB image |
| Unpadded modern + ground BPC/BMA LZ | ~29.85 MiB | **−~2.15 MiB** | No `PAD_ROM`; BPC/BMA → `GMLZ` |
| Strip unused unk blobs | **27.49 MiB** | **−~2.36 MiB** | Drop `UNUSED_UNK_ASM` from modern link |
| AX tile LZ77 | **24.76 MiB** | **−~2.73 MiB** | `.4bpp` → `.4bpp.lz` (`LZ77UnCompVram`) |
| (+ custom title BGs / portraits) | **25.30 MiB** | +~0.54 MiB | New always-linked assets |
| AX pose/anim table dedupe | **21.92 MiB** | **−~3.38 MiB** | Alias duplicate pose/anim arrays |

## High-level layout — before vs after

Retail addresses apply to the **matching** layout only. Modern packs sections
contiguously (see `pmd_red.map`).

| Section | Before (retail) | After (modern) | Saved | What was done |
| --- | ---: | ---: | ---: | --- |
| **Monster AX** (`monster_sbin` / `monster_gfx*`) | **17.68 MiB** | **~11.33 MiB** | **~6.35 MiB** | Tile LZ77 + pose/anim dedupe (see below) |
| **Ground maps** (`ground_sbin`) | **4.45 MiB** raw | **~3.08 MiB** | **~1.37 MiB** | BPC/BMA LZ77 only; BPL/BPA still raw |
| **Unused opaque blobs** | **~2.36 MiB** | **0** (not linked) | **~2.36 MiB** | Stripped from modern `ASM_SOURCES` |
| `dungeon_sbin` | 1.32 MiB | ~1.32 MiB | — | Already AT4PX-heavy; unchanged |
| `sound_data` | 1.24 MiB | ~1.23 MiB | — | Unchanged |
| `effect_sbin` | 1.10 MiB | ~1.21 MiB | — | Unchanged (still 0 AT4PX; slight map drift) |
| `system_sbin` | 0.45 MiB | ~0.45 MiB | — | Already AT4PX-heavy; unchanged |
| `titlemenu_sbin` | 0.14 MiB | ~0.14 MiB | — | Unchanged (vanilla `titlen*`) |
| `ornament_sbin` | 0.12 MiB | ~0.12 MiB | — | Unchanged |
| `.text` + `.rodata` | ~2.44 MiB | ~2.4 MiB | — | Poor compression target |
| Custom title BGs + portraits | 0 | **~0.51 MiB** | *(added)* | Hack features; always linked today |
| **Full image** | **32.00 MiB** | **~21.92 MiB** | **~10.08 MiB** | Sum of the above (+ unpad) |

```
BEFORE (retail 32 MiB)          AFTER (modern ~21.92 MiB)
monster  ████████████████ 17.7   monster  ██████████░░░░ 11.3
ground   ████░░░░░░░░░░░░  4.5   ground   ███░░░░░░░░░░░  3.1
unks     ██░░░░░░░░░░░░░░  2.4   unks     (stripped)
other    ██████░░░░░░░░░░  7.4   other    █████░░░░░░░░░ ~7.5
```

## Per-section detail

### 1. Monster graphics — 17.68 → ~11.33 MiB (−~6.35 MiB)

Largest bucket. Two separate reductions:

| Sub-bucket | Before | After | Saved | Method |
| --- | ---: | ---: | ---: | --- |
| AX **tiles** (`.4bpp`) | ~7.67 MiB raw / ~8.04 MiB linked | **~4.93 MiB** LZ | **~2.73 MiB** | `compress_ax_tiles.py` / `make ax-compress` — `GMLZ` + BIOS LZ77; `LZ77UnCompVram` on blit |
| AX **pose/anim tables** | **~9.77 MiB** | **~6.39 MiB** | **~3.38 MiB** | `dedupe_ax_tables.py` / `make ax-dedupe` |
| → pose bodies | 2.06 MiB | 0.81 MiB | 1.25 MiB | Within-species identical `ax_pose` arrays aliased |
| → anim frames | 5.03 MiB | 2.89 MiB | 2.14 MiB | Within-file aliases + cross-species pool (`ax_shared_anims.c`) |
| → positions | 1.43 MiB | 1.43 MiB | — | Untouched |
| → ptr tables / sprite meta | ~1.25 MiB | ~1.25 MiB | — | Untouched |

Retail also had AT4PX portraits inside `monster_sbin` (~329 markers). Hack adds
optional SpriteCollab portraits outside this bucket (`custom_portraits_*`).

**Not done yet:** LZ of remaining tables (~6.4 MiB, ~4× in probes), position-set
indexing (~0.8 MiB potential), culling species/frames.

### 2. Ground maps — 4.45 → ~3.08 MiB (−~1.37 MiB)

| Sub-bucket | Before | After | Method |
| --- | ---: | ---: | --- |
| BPC + BMA | ~4.02 MiB | **~2.59 MiB** | `compress_ground_assets.py` / `make ground-compress` (`GMLZ`); runtime in `ground_assets.c` |
| BPL + BPA | ~0.64 MiB | ~0.64 MiB | **Still raw** — stay memory-mapped; heap decompress hung boot |

Matching build keeps raw `data/map_bg/` so `make compare` can still match.

**Not done yet:** careful BPL/BPA LZ (~0.4 MiB) with a non-heap scratch path.

### 3. Unused opaque blobs — ~2.36 → 0 MiB (−~2.36 MiB)

| Blob | Size | Status |
| --- | ---: | --- |
| `unk_9D02950` | 1.36 MiB | Stripped (modern); bins kept under `data/unknown_unused/` |
| `unk_96BD7AC` | 0.51 MiB | Stripped |
| `unk_data_9FBD5D0` | 0.26 MiB | Stripped |
| `unk_98589A4` | 0.22 MiB | Stripped |
| `unk_9E7EB08` | 5.2 KiB | Stripped |

`Makefile` `UNUSED_UNK_ASM` filter when `MODERN=1`. Matching linker still lists
them for baserom layout.

### 4. Sound — 1.24 MiB (unchanged)

DirectSound waves under `sound/wave/`. No AT4PX. Next levers: shorten/downsample
samples, drop unused SFX/songs, or add a decode path.

### 5. Effect graphics — ~1.10–1.21 MiB (unchanged)

SIRO-wrapped, **0 AT4PX**. Probe: raw effect payloads LZ well (~67%). Needs a
load-time decompress path (same idea as ground/AX tiles).

### 6. Dungeon + system — ~1.77 MiB (unchanged)

Already AT4PX-rich (`dungeon_sbin` ~204, `system_sbin` ~387 markers). Little
headroom without deleting content.

### 7. Code / general rodata — ~2.4 MiB (unchanged)

`.text` ~0.65–0.71 MiB, misc `.rodata` ~1.7 MiB. Prefer trimming systems/strings
over compressing code.

### 8. Custom hack assets — 0 → ~0.51 MiB (added)

| Asset | ~Size | Notes |
| --- | ---: | --- |
| Custom title backgrounds | ~0.25 MiB | `custom_title_backgrounds.c`; runtime toggle does **not** unlink |
| Custom portraits | ~0.27 MiB | `custom_portraits_data.c`; same |

Build-time exclusion or fewer BG/expression files would reclaim this.

## What retail already compressed

| Marker in baserom | Count |
| --- | ---: |
| `SIRO` | 1325 |
| `AT4PX` | 929 |
| `pksdir0` | 634 |

| Section | AT4PX | SIRO |
| --- | ---: | ---: |
| `monster_sbin` | 329 | 496 |
| `system_sbin` | 387 | 392 |
| `dungeon_sbin` | 204 | 240 |
| `effect_sbin` | 0 | 147 |
| `ground_sbin` | 0 | 0 |
| `titlemenu_sbin` | 9 | 8 |
| `sound_data` | 0 | 1 |

Modern **adds** `GMLZ` (BIOS LZ77) for ground BPC/BMA and AX tiles, plus
structural dedupe for AX pose/anim tables.

## Forced gaps (matching layout only)

Pinned addresses leave `0xFF` gaps (~0.7 MiB total). Irrelevant to the default
unpadded modern pack.

## Source-tree sizes (not ROM sizes)

| Tree path | On-disk size | Role |
| --- | ---: | --- |
| `graphics/ax/` | ~15.3 MiB+ | Monster sprite source (PNG/4bpp + `.lz`) |
| `sound/wave/` + `sound/songs/` | ~14.4 MiB | Samples + sequences (source form) |
| `data/` | ~22 MiB | Archives, JSON, dungeon data, `map_bg` / `map_bg_lz` |
| `src/data/ax/` | large | Per-species AX headers (deduped in place) |

## Remaining checklist

1. **LZ `effect_sbin`** (~0.4 MiB likely) — needs decompress-on-open.
2. **Ground BPL/BPA LZ** (~0.4 MiB) — boot-safe scratch path required.
3. **Position-set indexing** in AX tables (~0.8 MiB potential).
4. **LZ remaining AX tables** (~6.4 MiB raw; large win, heap/fixup work).
5. **Trim or build-exclude** custom title BGs / portraits if unused.
6. **Sound** downsample/cull if quality can drop.

## Regenerating these numbers

```bash
make -j$(nproc)
# optional refresh tools:
make ground-compress ax-compress ax-dedupe
# then inspect pmd_red.map / `arm-none-eabi-nm -S` on monster_gfx*.o
ls -lh pmd_red.gba
```
