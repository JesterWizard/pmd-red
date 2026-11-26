#!/usr/bin/env python3
"""Explorers of Sky demake: the opening's Shaymin scene (before the title).

    tools/make_sky_opening.py EOS.nds [--check OUTDIR]

EoS boots into an opening (unionall.ssb coroutine DEMO_02) whose first scene
is SCRIPT/S13P02A/t02a0201.ssb: the sky with the sun and a lens flare on the
top screen, a flash, then the camera pans down the level S13P02A (sky over a
landscape, 256x576, on the two screens) while Shaymin (Sky Forme) flies in
from the distance towards the camera and away, trailing Gracidea petals.

From the ROM this writes, in graphics/custom/sky_opening/:

  * sky.tiles / sky.pal: the level's two layers (MAP_BG/s13p02a.bma/.bpc/
    .bpl: layer 1 the sky, layer 0 the landscape) as one picture, the
    middle 240 of its 256 columns, top 528 lines, as raw 8bpp tiles (30 per
    row) for the pan, with up to 240 colours picked in GBA colours.
  * flare / shaymin / petals .png (built into .4bpp / .gbapal): the scene's three objects
    (GROUND/s13p02a1.wan the lens flare, s13p02a2.wan Shaymin, s13p02a3.wan
    the petals): their WAN fragments as 8x8 tiles stacked in OBJ 1D order
    (one piece = one OBJ: the DS and the GBA share OBJ shapes) with their
    16 colours.

and src/data/sky_opening.h: every frame's pieces (offset, shape, size, tile)
and the frames the scene shows, from the WAN sequences the script plays
(the timing is in src/sky_opening.c, measured in EoS frame by frame).

The ROM is only read, never copied into the repository.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

import ndspy.rom
import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "tools"))
import convert_title_backgrounds as title  # noqa: E402
import make_sky_cutaways  # noqa: E402,F401  (PIL putpalette patch)
from skytemple_files.common.types.file_types import FileType  # noqa: E402
from skytemple_files.graphics.wan_wat.model import Wan  # noqa: E402

OUT = ROOT / "graphics" / "custom" / "sky_opening"
GEN_H = ROOT / "src" / "data" / "sky_opening.h"

LEVEL = "s13p02a"
CROP_X = 56          # map columns 56..295: the middle 240 of the DS's 256 (48..303)
ROWS = 66            # 528 lines: the GBA camera ends at y 356 (+160)
SKY_LAYER_END = 264  # layer 1 (sky) covers lines 0..263, layer 0 the rest

# (name, WAN, the sequence the script plays: SetAnimation 18 / 17 / 17)
OBJECTS = [
    ("flare", "GROUND/s13p02a1.wan", 1),
    ("shaymin", "GROUND/s13p02a2.wan", 0),
    ("petals", "GROUND/s13p02a3.wan", 0),
]
# The flare's frames alternate with the empty frame 14 (EoS's flicker for
# half transparency); the GBA blends it instead, so those are dropped and
# each frame lasts two.
FLARE_BLANK = 14

SHAPES = {
    (8, 8): (0, 0), (16, 16): (0, 1), (32, 32): (0, 2), (64, 64): (0, 3),
    (16, 8): (1, 0), (32, 8): (1, 1), (32, 16): (1, 2), (64, 32): (1, 3),
    (8, 16): (2, 0), (8, 32): (2, 1), (16, 32): (2, 2), (32, 64): (2, 3),
}


def gba15(c) -> int:
    return (c[0] >> 3) | ((c[1] >> 3) << 5) | ((c[2] >> 3) << 10)


def render_level(rom) -> Image.Image:
    get = lambda n: rom.getFileByName("MAP_BG/" + n)
    bma = FileType.BMA.deserialize(get(LEVEL + ".bma"))
    bpc = FileType.BPC.deserialize(get(LEVEL + ".bpc"))
    pals = FileType.BPL.deserialize(get(LEVEL + ".bpl")).palettes
    sky = np.asarray(bma.to_pil_single_layer(bpc, pals, [None] * 8, 1).convert("RGB"))
    land = np.asarray(bma.to_pil_single_layer(bpc, pals, [None] * 8, 0).convert("RGB"))
    full = land.copy()
    full[:SKY_LAYER_END] = sky[:SKY_LAYER_END]
    return Image.fromarray(full[:ROWS * 8, CROP_X:CROP_X + 240])


def write_sky(rom, check: Path | None) -> None:
    im = render_level(rom)
    q = title.quantize_gba(im, colors=240)
    pal = q.getpalette()
    ncol = len(set(q.get_flattened_data()))
    px = np.array(q)
    tiles = bytearray()
    for ty in range(ROWS):
        for tx in range(30):
            tiles += px[ty * 8:(ty + 1) * 8, tx * 8:(tx + 1) * 8].astype(np.uint8).tobytes()
    (OUT / "sky.tiles").write_bytes(tiles)
    # 240 RGBX, as graphics/custom/sky_scrolls/*.pal
    (OUT / "sky.pal").write_bytes(bytes(b for i in range(240) for b in (*(pal + [0] * 720)[i * 3:i * 3 + 3], 0x80)))
    q.convert("RGB").save(OUT / "sky_check.png")
    print(f"sky: {ROWS} rows, {ncol} colours, {len(tiles)} bytes")
    if check:
        im.save(check / "sky_eos.png")


def save_tiles_png(path: Path, data: bytes, pal) -> None:
    """GBA 4bpp tiles -> an 8-px-wide indexed PNG, the tiles stacked in order
    (the build's gbagfx turns it back into the same .4bpp and a .gbapal)."""
    n = len(data) // 32
    img = Image.new("P", (8, max(8, n * 8)))
    img.putpalette([v for c in pal for v in c[:3]] + [0] * (48 - 3 * len(pal)))
    px = img.load()
    for t in range(n):
        for i in range(32):
            b = data[t * 32 + i]
            y, x = t * 8 + i // 4, (i % 4) * 2
            px[x, y] = b & 0xF
            px[x + 1, y] = b >> 4
    img.save(path, optimize=True)


def frag_tiles(pix, w, h) -> bytes:
    out = bytearray()
    for ty in range(0, h, 8):
        for tx in range(0, w, 8):
            for yy in range(8):
                row = (ty + yy) * w + tx
                for xx in range(0, 8, 2):
                    out.append((pix[row + xx] & 0xF) | ((pix[row + xx + 1] & 0xF) << 4))
    return bytes(out)


def convert_object(rom, name: str, path: str):
    wan = Wan(rom.getFileByName(path))
    m = wan.model
    blobs: dict = {}
    data = bytearray()
    frames = []
    for fid, fr in enumerate(wan.frames):
        pieces = []
        for frag in fr.fragments:
            w, h = frag.resolution.x, frag.resolution.y
            key = (frag.fragment_bytes_index, w, h)
            if key not in blobs:
                pix = m.fragment_bytes_store.fragment_bytes[frag.fragment_bytes_index].decode_fragment(frag.resolution)
                blobs[key] = len(data) // 32
                data += frag_tiles(pix, w, h)
            shape, size = SHAPES[(w, h)]
            flip = int(bool(frag.flip.flip_h)) | (int(bool(frag.flip.flip_v)) << 1)
            pieces.append((frag.offset_x, frag.offset_y, shape, size, flip, blobs[key], w * h // 64))
        frames.append(pieces)
    pal = [tuple(c[:3]) for c in m.palette.palette][:16]
    save_tiles_png(OUT / f"{name}.png", bytes(data), pal)
    seqs = [[(f.frame_id, f.duration) for f in anim.frames] for grp in wan.anim_groups for anim in grp]
    print(f"{name}: {len(frames)} frames, {len(data) // 32} tiles, "
          f"max {max(sum(p[6] for p in f) for f in frames)} tiles a frame")
    return frames, seqs, pal


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom")
    ap.add_argument("--check", type=Path)
    a = ap.parse_args()
    rom = ndspy.rom.NintendoDSRom.fromFile(a.rom)
    OUT.mkdir(parents=True, exist_ok=True)
    if a.check:
        a.check.mkdir(parents=True, exist_ok=True)
    write_sky(rom, a.check)

    lines = ["/* Generated by tools/make_sky_opening.py — do not edit. */",
             f"#define SKY_OPENING_SKY_ROWS {ROWS}", ""]
    for name, path, seq in OBJECTS:
        frames, seqs, _ = convert_object(rom, name, path)
        N = name.upper()
        pieces = [p for f in frames for p in f]
        lines.append(f"static const struct SkyOpeningPiece s{name.capitalize()}Pieces[] = {{")
        for x, y, shape, size, flip, tile, _n in pieces:
            lines.append(f"    {{ {x}, {y}, {shape}, {size}, {flip}, {tile} }},")
        lines.append("};")
        lines.append(f"static const struct SkyOpeningFrame s{name.capitalize()}Frames[] = {{")
        first = 0
        for f in frames:
            lines.append(f"    {{ {first}, {len(f)} }},")
            first += len(f)
        lines.append("};")
        if name == "flare":
            ids = [fid for fid, _ in seqs[seq] if fid != FLARE_BLANK]
        else:
            # one entry a frame; the trailing return to frame 0 is dropped
            ids = [fid for fid, d in seqs[seq][:-1] for _ in range(d)]
        lines.append(f"/* EoS sequence {seq}: one frame id per {'two frames' if name == 'flare' else 'frame'} */")
        lines.append(f"static const u8 s{name.capitalize()}Seq[] = {{ {', '.join(map(str, ids))} }};")
        lines.append(f"#define SKY_OPENING_{N}_FRAMES {len(frames)}")
        lines.append("")
    GEN_H.write_text("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
