#!/usr/bin/env python3
"""Explorers of Sky demake: tall pictures for the pan between connected CGs.

EoS shows a scene's top-screen CG right above its bottom screen, whose camera
sits at the top of the map (the cliff over the stormy sea, the sky over the
beach, the dusk clouds over the guild tent). The GBA has one screen, so the
demake shows the CG and pans down into the scene. Each picture is:

    the CG (graphics/custom/sky_cutaways/<cutaway>.png, 160 lines)
    the converted map from its top edge down to the GBA camera's first view,
    rendered from data/map_bg (+ BPA frame 0 from data/map_bg_anim),
    ending with graphics/custom/sky_scrolls/<pair>_bottom.png: that first view
    captured in the emulator (the player's Pokémon replaced by the map).

so the pan ends exactly on what the map shows when the scene starts.

    tools/make_sky_cutaway_scrolls.py

Writes graphics/custom/sky_scrolls/<pair>.{tiles,pal} (raw 8bpp tiles, 30
per row, and 240 RGBX colours) and src/data/sky_scrolls.h (row counts).
"""
from __future__ import annotations

import struct
import sys
from pathlib import Path

import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from skytemple_files.common.types.file_types import FileType  # noqa: E402

CUT = ROOT / "graphics" / "custom" / "sky_cutaways"
OUT = ROOT / "graphics" / "custom" / "sky_scrolls"
GEN_H = ROOT / "src" / "data" / "sky_scrolls.h"

# (pair, top cutaway, map stem, captured first view)
PAIRS = [
    ("storm", "storm_cliff", "EV0101A"),
    ("beach", "sky_day", "ED0111A"),
    ("guild", "guild_sky", "EG0101B"),
]


def render_map(stem: str) -> np.ndarray:
    d = ROOT / "data" / "map_bg"
    bpl = (d / f"{stem}.bpl").read_bytes()
    n_pals = struct.unpack_from("<H", bpl, 0)[0]
    pals = [[(0, 0, 0)] + [tuple(bpl[4 + (p * 15 + c) * 4:7 + (p * 15 + c) * 4]) for c in range(15)]
            for p in range(n_pals)]
    bpc = (d / f"{stem}c.bpc").read_bytes()
    hdr = struct.unpack_from("<8h", bpc, 0)
    n_tiles, bpa_n, n_chunks = hdr[2], hdr[3:7], hdr[7]
    tiles = [bytes(32)] + [bpc[16 + i * 32:16 + (i + 1) * 32] for i in range(n_tiles - 1)]
    for slot in range(2):          # animated slots: frame 0, right after the pool
        if bpa_n[slot]:
            bpa = (ROOT / "data" / "map_bg_anim" / f"{stem}{slot + 1}.bpa").read_bytes()
            nt, nf = struct.unpack_from("<HH", bpa, 0)
            off = 4 + 4 * nf
            tiles += [bpa[off + i * 32:off + (i + 1) * 32] for i in range(nt)]
    off = 16 + (n_tiles - 1) * 32
    chunks = [[0] * 9] + [list(struct.unpack_from("<9H", bpc, off + i * 18)) for i in range(n_chunks - 1)]
    bma = FileType.BMA.deserialize((d / f"{stem}m.bma").read_bytes())
    W, H = bma.map_width_camera * 8, bma.map_height_camera * 8
    img = np.zeros((H, W, 3), np.uint8)
    streamed = n_tiles > 1024
    layers = [bma.layer1, bma.layer0] if bma.number_of_layers == 2 else [bma.layer0]
    for layer in layers:
        for ci, c in enumerate(layer):
            cx, cy = ci % bma.map_width_chunks, ci // bma.map_width_chunks
            for k, e in enumerate(chunks[c]):
                tid = e & (0xFFF if streamed else 0x3FF)
                fx, fy, pal = (e >> 10) & 1, (e >> 11) & 1, e >> 12
                if streamed:
                    fx = fy = 0
                if tid == 0 or tid >= len(tiles):
                    continue
                t = tiles[tid]
                px = np.array([(t[i // 2] >> 4) if i & 1 else (t[i // 2] & 0xF) for i in range(64)]).reshape(8, 8)
                if fx:
                    px = px[:, ::-1]
                if fy:
                    px = px[::-1, :]
                tx, ty = cx * 3 + k % 3, cy * 3 + k // 3
                for y in range(8):
                    for x in range(8):
                        v = px[y, x]
                        if v and ty * 8 + y < H and tx * 8 + x < W:
                            img[ty * 8 + y, tx * 8 + x] = pals[pal][v]
    return img


def find_view(full: np.ndarray, shot: np.ndarray) -> tuple[int, int]:
    """Camera (x, y) of the captured first view, by matching against the render."""
    fq, sq = full.astype(int) >> 3, shot.astype(int) >> 3
    ys, xs = np.arange(0, 160, 4), np.arange(0, 240, 4)
    samp = sq[np.ix_(ys, xs)]
    best = None
    for oy in range(0, full.shape[0] - 160 + 1):
        for ox in range(0, full.shape[1] - 240 + 1):
            m = (fq[np.ix_(ys + oy, xs + ox)] == samp).all(axis=2).mean()
            if best is None or m > best[0]:
                best = (m, ox, oy)
    print(f"  camera match {best[0]:.2f} at {best[1:]}")
    return best[1], best[2]


def build(pair: str, cut: str, stem: str) -> int:
    full = render_map(stem)
    shot = np.array(Image.open(OUT / f"{pair}_bottom.png").convert("RGB"))
    cx, cy = find_view(full, shot)
    region = full[0:cy + 160, cx:cx + 240].copy()
    region[cy:cy + 160] = shot              # the live first view, exactly
    cg = np.array(Image.open(CUT / f"{cut}.png").convert("RGB"))[0:160]
    crop = (160 + region.shape[0]) % 8      # whole tile rows: trim the CG's top
    tall = np.concatenate([cg[crop:], region])
    rows = tall.shape[0] // 8
    im = Image.fromarray(tall)
    q = im.quantize(colors=240, method=Image.Quantize.MEDIANCUT, dither=Image.Dither.NONE)
    pal = (q.getpalette()[:240 * 3] + [0] * 720)[:720]
    px = np.array(q)
    tiles = bytearray()
    for ty in range(rows):
        for tx in range(30):
            tiles += px[ty * 8:(ty + 1) * 8, tx * 8:(tx + 1) * 8].astype(np.uint8).tobytes()
    (OUT / f"{pair}.tiles").write_bytes(tiles)
    (OUT / f"{pair}.pal").write_bytes(bytes(b for i in range(240) for b in (*pal[i * 3:i * 3 + 3], 0x80)))
    q.convert("RGB").save(OUT / f"{pair}_check.png")
    print(f"{pair}: {rows} rows ({tall.shape[0]} px), CG on top, map {stem} rows 0..{cy + 160}")
    return rows


def main() -> None:
    lines = ["/* Generated by tools/make_sky_cutaway_scrolls.py — do not edit. */"]
    for pair, cut, stem in PAIRS:
        rows = build(pair, cut, stem)
        lines.append(f"#define SKY_SCROLL_{pair.upper()}_ROWS {rows}")
    GEN_H.write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
