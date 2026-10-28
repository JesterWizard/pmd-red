# ROM size report: `pmd_red.gba` (modern build)

Measured size report for the ROM size pass that ran on 2026-10-28, from master
`c334a10fd` to `188fe7e3e`. Background and the full timeline are in
[`rom_asset_sizes.md`](rom_asset_sizes.md). Session entries are in
`SESSION_HISTORY.md`.

## Summary

- The default modern ROM (`make`) went from **24,721,801 bytes** to
  **23,657,497 bytes**.
- Saved this pass: **1,064,304 bytes = 1,064.3 KB = 1,039.4 KiB**.
- Free space against the 32 MiB retail image (33,554,432 bytes):
  **9,896,935 bytes = 9,896.9 KB = 9,665.0 KiB (about 9.44 MiB)**.
- The ROM is now **70.5%** of the retail size (it was 73.7% at the start of
  this pass).

KB = 1000 bytes. KiB = 1024 bytes.

## Size table

| Stage | Commit | Bytes | KB | KiB | Delta (bytes) | % of retail |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| Retail `baserom.gba` | — | 33,554,432 | 33,554.4 | 32,768.0 | — | 100.0% |
| Start of this pass | `c334a10fd` | 24,721,801 | 24,721.8 | 24,142.4 | — | 73.7% |
| After step 1: AT4PX intro/title art | `ba432f97c` | 23,878,109 | 23,878.1 | 23,318.5 | −843,692 | 71.2% |
| After step 2: ground map aliases | `188fe7e3e` | 23,657,497 | 23,657.5 | 23,103.0 | −220,612 | 70.5% |
| **Saved this pass** | | **1,064,304** | **1,064.3** | **1,039.4** | **−1,064,304** | |
| **Free vs retail 32 MiB** | | **9,896,935** | **9,896.9** | **9,665.0** | | **29.5%** |

Commit `fda84078f` (RescueTemple reader for AT4PX intro art) changes only
`RescueEditor/` C# code. It does not change the ROM.

## What changed

### Step 1: AT4PX for intro and title backgrounds (`ba432f97c`): −843,692 bytes

The custom art was linked as **AT4PN**, an uncompressed container.

| Asset | Before | After | Saved |
| --- | ---: | ---: | ---: |
| Friend-area intro art (57 files, `graphics/custom/backgrounds/*.png`, also used by chapter title cards) | 2,422,607 | 1,685,039 | −737,568 |
| Title-screen art (6 files, `graphics/title_screen_backgrounds/*.png`) | 251,434 | 145,242 | −106,192 |

- The converters `convert_friend_area_backgrounds.py` and
  `convert_title_backgrounds.py` now write **AT4PX** (PX compression, via
  skytemple-files). The retail decompressor `DecompressAT` already handles
  AT4PX, so no new decoder was added.
- The loaders used to size their buffer from header bytes 5..6. For AT4PX,
  those bytes hold the compressed length. `LoadFullscreenArt`
  (`src/fullscreen_art.c`) and the custom-title block of `LoadTitleScreen`
  (`src/main_loops.c`) now allocate the decompressed length from bytes
  0x10..0x11. AT4PN keeps the old path.
- Note: the two component figures sum to 843,760 bytes. The measured ROM
  delta is 843,692 bytes. The 68-byte difference is not broken down here.
- Why AT4PX and not a new codec: PX reaches about 70% on 8bpp art (it was
  designed for 4bpp). BIOS LZ77 measured about the same (69.0%). AT4PX
  reuses the retail decoder.
- Verified: friend-area intro and title-menu art render pixel-identical in
  headless screenshots. Only the menu cursor blink phase shifts by a few
  frames.

### Step 2: alias duplicate ground map files (`188fe7e3e`): −220,612 bytes

117 ground map files were byte-identical copies of another file (34 groups).

| Type | Bytes saved |
| --- | ---: |
| `.bpl` palettes | 86,736 |
| `.bpa` tile animations | 70,120 |
| Compressed `.bpc.lz` / `.bma.lz` | 63,756 |
| **Total** | **220,612** |

- In `src/ground_files_table.c`, each duplicate entry now points at the kept
  symbol and carries a `/* alias: <path> */` comment. The duplicate `INCBIN`s
  are gone.
- Files are opened by name and never compared by pointer, so sharing
  read-only data is safe.
- `tools/check_ground_file_aliases.py` runs from a Makefile stamp. It fails
  the build if an aliased file stops being identical. The fix is to restore
  that file's own `INCBIN`.
- Verified: the check passes with 117 aliases. Maps that use aliased files
  render in-game (the Squirtle-construction team base room and the
  Thunderwave Cave end). The smoke test passes.

## Current ROM by category

Measured from `pmd_red.map` (ROM addresses only). Shares are of the full
23,657,497-byte image.

| Category | Bytes | Share |
| --- | ---: | ---: |
| Monster sprites (AX graphics, poses, anims) | 10,864,340 | 45.9% |
| Ground maps | 3,128,472 | 13.2% |
| Dungeon/system/title/ornament archives | 2,121,532 | 9.0% |
| Custom intro/title backgrounds | 1,892,031 | 8.0% |
| Sound | 1,290,906 | 5.5% |
| Effects | 1,245,048 | 5.3% |
| Ground scripts | 1,124,916 | 4.8% |
| Code + other data | 930,584 | 3.9% |
| Custom portraits | 590,572 | 2.5% |
| Not attributed (alignment padding and sections the map parse did not assign to an object) | 469,096 | 2.0% |
| **Total** | **23,657,497** | **100.0%** |

The nine attributed categories sum to 23,188,401 bytes. The remaining
469,096 bytes are the unattributed row above.

Already compressed, with no headroom found:

- Custom portraits are AT4PX and have no duplicates.
- Monster sprite tiles are already LZ and have essentially no duplicates.

## Further candidates

Investigated in this pass and **not done**. Estimates are approximate.

| # | Candidate | Estimate | Why not done |
| --- | --- | ---: | --- |
| 1 | Effect data duplicates | ~105 KiB (184 blobs in 67 groups) | Not safe as is. Each effect tilemap is reached as the bytes right after its 10-entry header, not through a pointer. Pointing a duplicate at another copy breaks the layout. The effect format and loader need to store tilemap pointers first. |
| 2 | Effect graphics LZ | ~0.4 MiB (earlier estimate) | Raw effect payloads LZ to about 67%. Needs a decompress-on-load path in the effect code. |
| 3 | Ground BPL/BPA LZ | ~0.4 MiB (earlier estimate) | Palettes and tile animations are read memory-mapped every frame. An earlier heap-decompress attempt hung boot. |
| 4 | AX position/pose table packing | ~0.8 MiB (earlier estimate) | Needs a runtime format change. |
| 5 | Linker garbage collection of unreferenced sections | ~18 KiB (trial link with `--gc-sections`) | Not worth the risk for the gain. |
| 6 | Remove or build-exclude hack assets | Custom portraits 590,572 bytes; intro/title backgrounds 1,892,031 bytes | Not compression. A feature decision for the owner. |
| 7 | Sound downsampling or culling | Not estimated | A quality trade-off. No byte-identical duplicates were found among the waves. |

## How to reproduce the numbers

```bash
cd /home/user/pmd-red

# Build the default modern ROM and compare sizes
make -j$(nproc)
ls -l pmd_red.gba baserom.gba
# expected: pmd_red.gba 23,657,497 bytes; baserom.gba 33,554,432 bytes

# Ground alias check (run by the Makefile stamp too)
python3 tools/check_ground_file_aliases.py
# expected: ground file aliases OK (117 aliases)

# Commits in this pass
git log --oneline c334a10fd..188fe7e3e
#   188fe7e3e Alias byte-identical ground map files (-220,612 bytes)
#   fda84078f RescueTemple: find friend-area intro art stored as AT4PX
#   ba432f97c Compress custom intro/title backgrounds as AT4PX (-843,692 bytes)

# Start-of-pass size: build c334a10fd in a separate worktree and run ls -l
# on its pmd_red.gba (expected 24,721,801 bytes).
```

The category table comes from the ROM addresses in `pmd_red.map` after a
`make`.
