#!/usr/bin/env python3
"""Repack a 128×64 linear 4bpp sheet into two contiguous 64×64 1D OBJ halves.

PMD uses DISPCNT_OBJ_1D_MAP, so each 64×64 sprite reads 64 tiles in row-major
order. Source gbagfx output is a 16×8 tile grid (full 128×64). This tool emits
left half tiles then right half tiles so sprites at base and base+64 line up.
"""

from __future__ import annotations

import pathlib
import sys

TILE_SIZE = 32
SRC_TILE_W = 16
SRC_TILE_H = 8
HALF_W = 8


def main() -> int:
    if len(sys.argv) != 3:
        print(f"usage: {sys.argv[0]} INPUT.4bpp OUTPUT.4bpp", file=sys.stderr)
        return 2

    src = pathlib.Path(sys.argv[1]).read_bytes()
    expected = SRC_TILE_W * SRC_TILE_H * TILE_SIZE
    if len(src) != expected:
        print(f"expected {expected} bytes, got {len(src)}", file=sys.stderr)
        return 1

    out = bytearray()
    for half in (0, 1):
        for y in range(SRC_TILE_H):
            for x in range(HALF_W):
                src_i = (y * SRC_TILE_W + half * HALF_W + x) * TILE_SIZE
                out.extend(src[src_i : src_i + TILE_SIZE])

    pathlib.Path(sys.argv[2]).write_bytes(out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
