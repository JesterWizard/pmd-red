#!/usr/bin/env python3
"""Build the Sky demake's stormy-sea effects: EoS's lightning and EoS's rain.

Lightning: EoS level v01p07b (m01d0112) plays animation 1 of the cloud object
GROUND/v01p07b1.wan once: the clouds light up yellow from below, twice, then
a bolt strikes from a lit cloud (frames 5 and 6 alternate). The six lit frames
were captured from DeSmuME's OBJ layer and placed in map coordinates
(graphics/custom/sky_storm/lit_1..6.png, like clouds.png for the dark frame).
On the GBA the dark clouds are baked into the map (palette 1, two colours):
a lit frame swaps those two colours for the lit body colours (EoS: (16,24,24)
-> (0,8,8), (40,40,48) -> (0,48,24)) and draws the rest (the yellow light,
the puff, the bolts) as OBJs. Each frame's pixels that the palette swap does
not give are covered by 32x32, 16x16 and 8x8 OBJs on a world-aligned grid,
only where the GBA view can see them while that frame shows.

Rain: EoS's EFFECT_VERY_HEAVY_RAIN (the same over the sea and the cliff) is a
3D layer of ~146 streaks on the 256x192 screen, 26.5 deg from vertical
(dx/dy 0.5), 18-72 px long, falling 7 px down and 3.5 px right a frame, drawn
at half alpha over the picture. graphics/custom/sky_rain/eos_rain_layer.png
is one frame of that layer alone (DeSmuME, BG0 only: colours as blended over
black). The streaks are cut out of it and scattered (wrapping) over three
64x64 sheets at EoS's coverage; the GBA tiles the screen with them.

    tools/make_sky_storm_fx.py

Writes graphics/custom/sky_storm/bolts.png (OBJ tiles, one 8x8 tile per row,
in OBJ 1D order), src/data/sky_storm_bolts.h and
graphics/custom/sky_rain/rain_sheets.png (three 64x64 sheets stacked).
"""
from __future__ import annotations

import random
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
STORM = ROOT / "graphics" / "custom" / "sky_storm"
RAIN = ROOT / "graphics" / "custom" / "sky_rain"
HEADER = ROOT / "src" / "data" / "sky_storm_bolts.h"

# Lit body colours: the palette swap covers these where a dark cloud is baked.
LIT_BODY = {(0, 8, 8), (0, 48, 24), (16, 24, 24), (40, 40, 48)}
# GBA view (map pixels) while each frame shows: x range of the view's left
# edge (EoS camera + 8, see SkyDemake.md), widened by MARGIN; y 64..224.
VIEW_X = {1: (284, 289), 2: (286, 286), 3: (285, 285), 4: (257, 303), 5: (258, 266), 6: (259, 265)}
MARGIN = 24
VIEW_Y = (64, 224)
# 32x32 block -> one OBJ when it has this many 8x8 cells; 16x16 -> one OBJ from 2.
FULL32, FULL16 = 10, 2

RAIN_SHEETS = 3
RAIN_SEED = 107


def load_indexed(path: Path):
    im = Image.open(path)
    assert im.mode == "P", path
    pal = im.getpalette()
    return im.size, im.load(), [tuple(pal[i * 3:i * 3 + 3]) for i in range(16)]


def build_bolts() -> None:
    (W, H), base, base_pal = load_indexed(STORM / "clouds.png")
    lit = {}
    palette = None
    for k in range(1, 7):
        size, px, pal = load_indexed(STORM / f"lit_{k}.png")
        assert size == (W, H)
        palette = palette or pal
        assert pal == palette, "lit_N.png must share one palette"
        lit[k] = px

    tiles: list[bytes] = []
    objs = []      # (x, y, size_cells, tile)
    frames = []    # (first obj, count)
    for k in range(1, 7):
        px = lit[k]
        x0 = VIEW_X[k][0] - MARGIN
        x1 = VIEW_X[k][1] + 240 + MARGIN
        need = {}
        for y in range(VIEW_Y[0], min(H, VIEW_Y[1])):
            for x in range(max(0, x0), min(W, x1)):
                v = px[x, y]
                if not v:
                    continue
                if base[x, y] and palette[v] in LIT_BODY:
                    continue
                need[(x, y)] = v
        cells = {(x // 8, y // 8) for (x, y) in need}
        frame_objs = []
        for by in range(0, H // 8, 4):
            for bx in range(0, W // 8, 4):
                blk = [(bx + i, by + j) for j in range(4) for i in range(4) if (bx + i, by + j) in cells]
                if not blk:
                    continue
                if len(blk) >= FULL32:
                    frame_objs.append((bx, by, 4))
                    continue
                for sy in (0, 2):
                    for sx in (0, 2):
                        sub = [(bx + sx + i, by + sy + j) for j in range(2) for i in range(2)
                               if (bx + sx + i, by + sy + j) in cells]
                        if len(sub) >= FULL16:
                            frame_objs.append((bx + sx, by + sy, 2))
                        else:
                            frame_objs.extend((cx, cy, 1) for cx, cy in sub)
        frames.append((len(objs), len(frame_objs), len(tiles)))
        for cx, cy, s in frame_objs:
            objs.append((cx * 8, cy * 8, s, len(tiles)))
            for ty in range(s):
                for tx in range(s):
                    rows = []
                    for y in range(8):
                        for x in range(8):
                            rows.append(need.get(((cx + tx) * 8 + x, (cy + ty) * 8 + y), 0))
                    tiles.append(bytes(rows))
    # bolts.png: 8 px wide, one tile per row (OBJ 1D order)
    img = Image.new("P", (8, 8 * len(tiles)))
    img.putpalette([c for rgb in palette for c in rgb])
    pxo = img.load()
    for t, data in enumerate(tiles):
        for i, v in enumerate(data):
            pxo[i % 8, t * 8 + i // 8] = v
    img.save(STORM / "bolts.png", optimize=True)

    shape = {1: (0, 0), 2: (0, 1), 4: (0, 2)}
    lines = [
        "/* Generated by tools/make_sky_storm_fx.py from graphics/custom/sky_storm/lit_N.png — do not edit. */",
        "/* EoS v01p07b1.wan animation 1, frames 1..6: OBJs in map pixels (x, y), OBJ size",
        " * (0: 8x8, 1: 16x16, 2: 32x32), first tile within the frame's tiles. */",
        f"#define SKY_BOLT_TILES {len(tiles)}",
        "",
        "static const struct SkyBoltObj sSkyBoltObjs[] = {",
    ]
    for x, y, s, t in objs:
        first = max(f[2] for f in frames if f[2] <= t)
        lines.append(f"    {{ {x}, {y}, {shape[s][1]}, {t - first} }},")
    ends = [f[2] for f in frames[1:]] + [len(tiles)]
    counts = [e - f[2] for f, e in zip(frames, ends)]
    lines += ["};", "",
              "/* WAN frames 1..6: first OBJ, OBJ count, first tile, tile count (frame 0, the dark",
              " * clouds, has none). A frame's tiles are uploaded when it shows. */",
              f"#define SKY_BOLT_FRAME_TILES_MAX {max(counts)}",
              "static const struct SkyBoltFrame sSkyBoltFrames[7] = {", "    { 0, 0, 0, 0 },"]
    for (first, n, t0), tc in zip(frames, counts):
        lines.append(f"    {{ {first}, {n}, {t0}, {tc} }},")
    lines += ["};", ""]
    HEADER.write_text("\n".join(lines))
    print(f"bolts: {len(objs)} OBJs, {len(tiles)} tiles; per frame {[f[1] for f in frames]} OBJs, {counts} tiles")


def build_rain() -> None:
    (W, H), px, pal = load_indexed(RAIN / "eos_rain_layer.png")
    seen = set()
    streaks = []
    lit_px = 0
    for y in range(H):
        for x in range(W):
            if not px[x, y]:
                continue
            lit_px += 1
            if (x, y) in seen:
                continue
            stack, comp = [(x, y)], []
            seen.add((x, y))
            while stack:
                cx, cy = stack.pop()
                comp.append((cx, cy, px[cx, cy]))
                for dy in (-1, 0, 1):
                    for dx in (-1, 0, 1):
                        n = (cx + dx, cy + dy)
                        if 0 <= n[0] < W and 0 <= n[1] < H and n not in seen and px[n]:
                            seen.add(n)
                            stack.append(n)
            xs = [c[0] for c in comp]
            ys = [c[1] for c in comp]
            if min(xs) == 0 or min(ys) == 0 or max(xs) == W - 1 or max(ys) == H - 1 or len(comp) < 3:
                continue
            streaks.append([(cx - min(xs), cy - min(ys), v) for cx, cy, v in comp])
    coverage = lit_px / (W * H)
    # One 64 x (64 * RAIN_SHEETS) texture that wraps seamlessly when the screen
    # is tiled with it as the game does: screen cell (column c, row r) shows
    # sheet (c + r) % RAIN_SHEETS, so leaving a sheet to the right continues
    # one sheet further down.
    rng = random.Random(RAIN_SEED)
    S = 64
    TH = S * RAIN_SHEETS
    img = Image.new("P", (S, TH))
    img.putpalette([c for rgb in pal for c in rgb])
    out = img.load()
    filled = set()
    while len(filled) < coverage * S * TH:
        st = rng.choice(streaks)
        ox, oy = rng.randrange(S), rng.randrange(TH)
        for sx, sy, v in st:
            u, w = ox + sx, oy + sy
            w += S * (u // S)
            p = (u % S, w % TH)
            out[p] = v
            filled.add(p)
    img.save(RAIN / "rain_sheets.png", optimize=True)
    print(f"rain: {len(streaks)} whole streaks from the capture, coverage {coverage:.3f}, {RAIN_SHEETS} sheets")


def main() -> None:
    build_bolts()
    build_rain()


if __name__ == "__main__":
    main()
