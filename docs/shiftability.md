# ROM shiftability

Default `make` builds **`pmd_red.gba`** (modern toolchain + packed linker).

## Boot verification (mGBA / libmgba)

Headless runs under libmgba (`skipBios`, button mash) are saved in
`docs/boot_proof/`:

- Compressed ground assets: pure black for 900+ frames (hang confirmed).
- Current ROM (uncompressed `data/map_bg/`): PASS — colorful in-game frames
  (intro cinematic / Pelipper Post Office), comparable to `baserom.gba`.

Ground LZ compression stays **disabled** in `ground_map_files_*.c` until a
decompress path is re-proven under that same harness.

## Verification

```bash
make -j$(nproc)
```
