#!/usr/bin/env python3
"""Explorers of Sky demake: tall pictures for the scroll between connected CGs.

EoS shows a scene's top-screen CG directly above its bottom-screen view (the
cliff over the stormy sea, the sky over the beach, the dusk clouds over the
guild, the sunset sky over the sea). The GBA has one screen, so the demake
pans down from the CG to the scene. Each pair is one 240x320 picture:

    top:    graphics/custom/sky_cutaways/<cutaway>.png (tools/make_sky_cutaways.py)
    bottom: the first view of the scene. For ground maps this is the GBA
            screen captured when the scene starts (graphics/custom/sky_scrolls/
            <pair>_bottom.png), with the player's hero/partner replaced by the
            map rendered from the converted EoS map files, so the pan ends on
            exactly what the live map shows.

    tools/make_sky_cutaway_scrolls.py

Writes graphics/custom/sky_scrolls/<pair>.{tiles,pal}: 1200 raw 8bpp tiles
(30x40, row-major) and 240 RGBX colours, for src/sky_cutaways.c.
"""
from __future__ import annotations

from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
CUT = ROOT / "graphics" / "custom" / "sky_cutaways"
OUT = ROOT / "graphics" / "custom" / "sky_scrolls"

# (pair, top cutaway, bottom picture)
PAIRS = [
    ("storm", CUT / "storm_cliff.png", OUT / "storm_bottom.png"),
    ("beach", CUT / "sky_day.png", OUT / "beach_bottom.png"),
    ("guild", CUT / "guild_sky.png", OUT / "guild_bottom.png"),
]


def build(pair: str, top: Path, bottom: Path) -> None:
    tall = Image.new("RGB", (240, 320))
    tall.paste(Image.open(top).convert("RGB").crop((0, 0, 240, 160)), (0, 0))
    tall.paste(Image.open(bottom).convert("RGB").crop((0, 0, 240, 160)), (0, 160))
    q = tall.quantize(colors=240, method=Image.Quantize.MEDIANCUT, dither=Image.Dither.NONE)
    pal = q.getpalette()[:240 * 3]
    pal += [0] * (240 * 3 - len(pal))
    px = q.load()
    tiles = bytearray()
    for ty in range(40):
        for tx in range(30):
            for y in range(8):
                for x in range(8):
                    tiles.append(px[tx * 8 + x, ty * 8 + y])
    (OUT / f"{pair}.tiles").write_bytes(tiles)
    (OUT / f"{pair}.pal").write_bytes(bytes(
        b for i in range(240) for b in (pal[i * 3], pal[i * 3 + 1], pal[i * 3 + 2], 0x80)))
    q.convert("RGB").save(OUT / f"{pair}_check.png")
    print(f"{pair}: {len(tiles)} bytes of tiles")


def main() -> None:
    for pair, top, bottom in PAIRS:
        build(pair, top, bottom)


if __name__ == "__main__":
    main()
