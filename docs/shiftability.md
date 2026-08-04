# ROM shiftability

Default `make` builds **`pmd_red.gba`** (modern toolchain + packed linker,
unpadded).

## Size

| Image | Size |
| --- | ---: |
| `baserom.gba` | 32.00 MiB |
| `pmd_red.gba` | ~24.76 MiB (varies with current strips) |

Savings: no 32 MiB pad, ground **BPC/BMA** LZ77, unused opaque blobs stripped,
and monster **AX `.4bpp` tile** LZ77 (`LZ77UnCompVram` on blit). See
`SESSION_HISTORY.md`.

## Ground compression

- Editable source: `data/map_bg/`
- Shipped compressed: `data/map_bg_lz/*.bpc.lz` and `*.bma.lz` (`GMLZ` + BIOS LZ77)
- **BPL/BPA stay uncompressed** (stay memory-mapped for animations; heap copies hung boot)

`make ground-compress` refreshes BPC/BMA by default (`--only bpc-bma`).

Runtime (`src/ground_assets.c`):

- Large BPC LZ payloads decompress into existing `GroundBg.unk544` scratch (no
  main-heap spike), then are discarded before BPL/BMA open.
- Small BMA LZ payloads use the normal heap-backed open path.
- `GMLZ` magic avoids false-positive LZ detection on raw BPA headers that start
  with `0x10`.

## Boot proof

Headless libmgba (`docs/boot_proof/comp_*.png`): compressed `pmd_red.gba` reaches
colorful in-game frames (64 colors) within the same window as `baserom.gba`.

```bash
make -j$(nproc)
```
