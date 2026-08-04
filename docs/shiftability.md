# ROM shiftability

Default `make` builds **`pmd_red.gba`** (modern toolchain + packed linker,
unpadded).

## Size

| Image | Size |
| --- | ---: |
| `baserom.gba` | 32.00 MiB |
| `pmd_red.gba` | ~29.85 MiB |

Savings come from dropped 32 MiB padding plus LZ77 on ground **BPC/BMA**
(~1.43 MiB raw→compressed).

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
