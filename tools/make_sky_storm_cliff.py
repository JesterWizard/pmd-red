#!/usr/bin/env python3
"""Build the Sky demake's storm cliff (EoS m01a0102, level v01p02a).

EoS shows v01p02a on the top screen: the picture is two 288x216 halves, the
cliff in the dark (left) and lit by lightning (right), and the script jumps
the camera between them (camera2_SetPositionMark). The DS screen shows the
picture from (0, 0) in the dark and from (287, 0) when lit, and object
V01P02A1_181 plays its bolt animation over the lit half.

On the GBA both halves are in VRAM at once as EoS's own 4bpp tiles and
16-colour palettes (BG3: dark, BG2: lit), so a flash is a tilemap change in
one vblank. The GBA view is the middle 240x160 of the DS screen (8, 16).

    tools/make_sky_storm_cliff.py EOS.nds

Writes graphics/custom/sky_storm_cliff/{cliff.tiles, dark.tilemap,
lit.tilemap, cliff.pal, bolt.tiles, dark.png, lit.png} and
src/data/sky_storm_cliff.h. The bolt's four frames are captures of DeSmuME's
OBJ layer on the top screen (bolt_1..4.png, DS screen coordinates).
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from skytemple_files.common.types.file_types import FileType

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "graphics" / "custom" / "sky_storm_cliff"
HEADER = ROOT / "src" / "data" / "sky_storm_cliff.h"

LEVEL = "v01p02a"
VIEW_X, VIEW_Y = 8, 16          # the GBA view inside the DS screen
DARK_X, LIT_X = 0, 287          # the DS screen's left edge in the picture
COLS, ROWS = 30, 20
LIT_COLS = 31                   # the lit view starts 7 px into a tile
# VRAM: the tiles sit at 0x6000 (tile i at 0x6000 + 32 i). BG3 (char base
# 0x4000) names tile i as 256 + i, BG2 (char base 0x8000) as i - 256.
BG3_BASE, BG2_BASE = 256, -256
MAX_TILES = (0xF800 - 0x6000) // 32
BOLT_FRAMES = 4
BOLT_CELL = 16


def tile_pixels(raw: bytes) -> list[int]:
    px = []
    for b in raw:
        px += [b & 15, b >> 4]
    return px


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{LEVEL}.bma"))
    bpc = FileType.BPC.deserialize(rom.getFileByName(f"MAP_BG/{LEVEL}.bpc"))
    bpl = FileType.BPL.deserialize(rom.getFileByName(f"MAP_BG/{LEVEL}.bpl"))
    layer = bpc.layers[0]
    cw, ch = bma.tiling_width, bma.tiling_height

    def cell(tx: int, ty: int):
        chunk = bma.layer0[(ty // ch) * bma.map_width_chunks + tx // cw]
        return layer.tilemap[chunk * cw * ch + (ty % ch) * cw + tx % cw]

    def view(x0: int, cols: int):
        assert (VIEW_Y % 8) == 0
        tx0, ty0 = (x0 + VIEW_X) // 8, VIEW_Y // 8
        return [[cell(tx0 + c, ty0 + r) for c in range(cols)] for r in range(ROWS)]

    dark = view(DARK_X, COLS)
    lit = view(LIT_X, LIT_COLS)
    lit_hofs = (LIT_X + VIEW_X) % 8
    assert (DARK_X + VIEW_X) % 8 == 0
    used_dark = {e.idx for row in dark for e in row}
    used_lit = {e.idx for row in lit for e in row}
    for e in [e for rows in (dark, lit) for row in rows for e in row]:
        assert e.pal_idx < 14, "palettes 14/15 are the GBA's text palettes"
        # colour 0 would be transparent: the layers are opaque pictures
        assert 0 not in tile_pixels(bytes(layer.tiles[e.idx])), e.idx
    order = sorted(used_dark - used_lit) + ["blank"] + sorted(used_dark & used_lit) + sorted(used_lit - used_dark)
    slot = {t: i for i, t in enumerate(order)}
    assert len(order) <= MAX_TILES
    assert all(slot[t] + BG3_BASE < 1024 for t in used_dark) and slot["blank"] + BG3_BASE < 1024
    assert all(slot[t] + BG2_BASE >= 0 for t in used_lit) and slot["blank"] + BG2_BASE >= 0

    OUT.mkdir(parents=True, exist_ok=True)
    (OUT / "cliff.tiles").write_bytes(b"".join(bytes(32) if t == "blank" else bytes(layer.tiles[t]) for t in order))

    def entries(rows, base):
        out = []
        for row in rows:
            for e in row:
                out.append((slot[e.idx] + base) | (bool(e.flip_x) << 10) | (bool(e.flip_y) << 11) | (e.pal_idx << 12))
        return struct.pack(f"<{len(out)}H", *out)

    (OUT / "dark.tilemap").write_bytes(entries(dark, BG3_BASE))
    (OUT / "lit.tilemap").write_bytes(entries(lit, BG2_BASE))
    pal = []
    for p in range(14):
        rgb = bpl.palettes[p]
        pal += [(rgb[i * 3] >> 3) | ((rgb[i * 3 + 1] >> 3) << 5) | ((rgb[i * 3 + 2] >> 3) << 10) for i in range(16)]
    (OUT / "cliff.pal").write_bytes(struct.pack(f"<{len(pal)}H", *pal))

    # previews: what the GBA shows
    for name, rows, hofs in (("dark", dark, 0), ("lit", lit, lit_hofs)):
        im = Image.new("RGB", (len(rows[0]) * 8, ROWS * 8))
        px = im.load()
        for r, row in enumerate(rows):
            for c, e in enumerate(row):
                t = tile_pixels(bytes(layer.tiles[e.idx]))
                rgb = bpl.palettes[e.pal_idx]
                for y in range(8):
                    for x in range(8):
                        v = t[(7 - y if e.flip_y else y) * 8 + (7 - x if e.flip_x else x)]
                        px[c * 8 + x, r * 8 + y] = tuple((rgb[v * 3 + k] >> 3) << 3 for k in range(3))
        im.crop((hofs, 0, hofs + 240, 160)).save(OUT / f"{name}.png")

    # the bolt: OBJ cells on a 16x16 grid over each frame, in GBA screen pixels
    frames = [Image.open(OUT / f"bolt_{k}.png") for k in range(1, BOLT_FRAMES + 1)]
    bolt_pal = frames[0].getpalette()[:48]
    tiles = bytearray()
    objs, index = [], []
    for im in frames:
        assert im.mode == "P" and im.size == (256, 192) and im.getpalette()[:48] == bolt_pal
        px = im.load()
        first = len(objs)
        x0, y0, x1, y1 = im.point(lambda v: 255 if v else 0).getbbox()
        for cy in range(y0, y1, BOLT_CELL):
            for cx in range(x0, x1, BOLT_CELL):
                def at(x, y):
                    return px[x, y] if x < 256 and y < 192 else 0
                if not any(at(cx + x, cy + y) for y in range(BOLT_CELL) for x in range(BOLT_CELL)):
                    continue
                objs.append((cx - VIEW_X, cy - VIEW_Y, len(tiles) // 32))
                for ty in range(0, BOLT_CELL, 8):
                    for tx in range(0, BOLT_CELL, 8):
                        for y in range(8):
                            row = [at(cx + tx + x, cy + ty + y) for x in range(8)]
                            assert max(row) < 16
                            tiles += bytes(row[i] | (row[i + 1] << 4) for i in range(0, 8, 2))
        index.append((first, len(objs) - first))
    (OUT / "bolt.tiles").write_bytes(bytes(tiles))
    gba_pal = [(bolt_pal[i * 3] >> 3) | ((bolt_pal[i * 3 + 1] >> 3) << 5) | ((bolt_pal[i * 3 + 2] >> 3) << 10) for i in range(16)]

    lines = [
        "/* Generated by tools/make_sky_storm_cliff.py — do not edit. */",
        "/* EoS v01p02a (m01a0102): the storm cliff, dark and lit, and its bolt. */",
        f"#define SKY_CLIFF_TILES {len(order)}",
        f"#define SKY_CLIFF_BLANK {slot['blank']}        /* tile within cliff.tiles */",
        f"#define SKY_CLIFF_BG3_BASE {BG3_BASE}",
        f"#define SKY_CLIFF_BG2_BASE ({BG2_BASE})",
        f"#define SKY_CLIFF_ROWS {ROWS}",
        f"#define SKY_CLIFF_DARK_COLS {COLS}",
        f"#define SKY_CLIFF_LIT_COLS {LIT_COLS}",
        f"#define SKY_CLIFF_LIT_HOFS {lit_hofs}",
        f"#define SKY_CLIFF_BOLT_TILES {len(tiles) // 32}",
        "",
        "static const u16 sCliffBoltPal[16] = {",
        "    " + ", ".join(f"0x{c:04X}" for c in gba_pal),
        "};",
        "",
        "/* 16x16 OBJs: GBA screen x, y, first tile */",
        "static const struct SkyCliffBoltObj sCliffBoltObjs[] = {",
    ]
    lines += [f"    {{ {x}, {y}, {t} }}," for x, y, t in objs]
    lines += ["};", "", "/* bolt frames 1..4: first OBJ, count */", "static const u8 sCliffBoltFrames[][2] = {"]
    lines += [f"    {{ {a}, {n} }}," for a, n in index]
    lines += ["};", ""]
    HEADER.write_text("\n".join(lines))
    print(f"{len(order)} tiles ({len(used_dark)} dark, {len(used_lit)} lit), bolt: {len(objs)} OBJs, {len(tiles) // 32} tiles")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
