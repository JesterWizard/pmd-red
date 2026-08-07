#!/usr/bin/env python3
"""Convert graphics/custom/poke_coin.png → poke_coin.4bpp.

Source PNGs often ship with a packed palette (indices 0..N). Town / dungeon
coin code expects fixed bank-12 indices from include/palette_owners.h:

  0 transparent, 7 white, 9 pale, 10 yellow, 11 mid, 12 dark

Map each pixel by RGB to those slots, then **left-align** the opaque content
in the 16×16 (vertically centered) so horizontal placement can use blitX
without needing a large ox that clips the art.
"""

from __future__ import annotations

import struct
import sys
from pathlib import Path

from PIL import Image

# Must match POKE_COIN_SLOT_* / sPokeCoinTownPal in custom_graphics.c
SLOT_RGB = {
    0: (0, 0, 0),
    7: (255, 255, 255),
    9: (255, 255, 115),
    10: (247, 206, 0),
    11: (222, 173, 0),
    12: (165, 115, 0),
}

NEAR_BLACK_MAX = 8


def rgb_to_slot(r: int, g: int, b: int) -> int:
    if r <= NEAR_BLACK_MAX and g <= NEAR_BLACK_MAX and b <= NEAR_BLACK_MAX:
        return 0
    for slot, (sr, sg, sb) in SLOT_RGB.items():
        if (r, g, b) == (sr, sg, sb):
            return slot
    best_slot = 0
    best_dist = 1 << 30
    for slot, (sr, sg, sb) in SLOT_RGB.items():
        dist = (r - sr) ** 2 + (g - sg) ** 2 + (b - sb) ** 2
        if dist < best_dist:
            best_dist = dist
            best_slot = slot
    return best_slot


def write_4bpp(path: Path, pixels: list[list[int]]) -> None:
    """Write 16×16 nibble grid as four 8×8 GBA 4bpp tiles (TL, TR, BL, BR)."""
    out = bytearray()
    for ty in (0, 1):
        for tx in (0, 1):
            for row in range(8):
                word = 0
                for col in range(8):
                    p = pixels[ty * 8 + row][tx * 8 + col] & 0xF
                    word |= p << (col * 4)
                out += struct.pack("<I", word)
    path.write_bytes(out)


def convert(png: Path, out_4bpp: Path) -> None:
    im = Image.open(png).convert("RGBA")
    if im.size != (16, 16):
        raise SystemExit(f"{png}: expected 16×16, got {im.size[0]}×{im.size[1]}")

    raw: list[list[int]] = []
    for y in range(16):
        row: list[int] = []
        for x in range(16):
            r, g, b, a = im.getpixel((x, y))
            if a < 128:
                row.append(0)
            else:
                row.append(rgb_to_slot(r, g, b))
        raw.append(row)

    xs = [x for y in range(16) for x in range(16) if raw[y][x] != 0]
    ys = [y for y in range(16) for x in range(16) if raw[y][x] != 0]
    if not xs:
        raise SystemExit(f"{png}: no opaque pixels")

    x0, x1 = min(xs), max(xs)
    y0, y1 = min(ys), max(ys)
    cw, ch = x1 - x0 + 1, y1 - y0 + 1
    # Left-align; vertically center (room for oy tweaks without clipping).
    dst_x, dst_y = 0, max(0, (16 - ch) // 2)

    pixels = [[0] * 16 for _ in range(16)]
    for y in range(ch):
        for x in range(cw):
            pixels[dst_y + y][dst_x + x] = raw[y0 + y][x0 + x]

    out_4bpp.parent.mkdir(parents=True, exist_ok=True)
    write_4bpp(out_4bpp, pixels)


def main(argv: list[str]) -> int:
    if len(argv) != 3:
        print(f"usage: {argv[0]} poke_coin.png poke_coin.4bpp", file=sys.stderr)
        return 2
    convert(Path(argv[1]), Path(argv[2]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
