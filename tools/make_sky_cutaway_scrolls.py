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


def build_cover(pair: str, stem: str, cx: int, cy: int) -> tuple[int, int, int]:
    """The map's first view, exactly, for the hand-off: the two map layers as
    the text layers' tilemaps (BG0 = front layer, BG1 = back), using the map's
    own tiles, flips and palettes, scrolled by the camera's sub-tile offset.
    (see below: merged into one layer). The pan shows it over the last frame and keeps it up while the ground map
    is rebuilt, so the pan ends without black or garbage frames.
    Writes <pair>_cover.{tiles,tilemap}; returns (x offset, y offset, tiles)."""
    d = ROOT / "data" / "map_bg"
    bpc = (d / f"{stem}c.bpc").read_bytes()
    hdr = struct.unpack_from("<8h", bpc, 0)
    n_tiles, bpa_n, n_chunks = hdr[2], hdr[3:7], hdr[7]
    tiles = [bytes(32)] + [bpc[16 + i * 32:16 + (i + 1) * 32] for i in range(n_tiles - 1)]
    for slot in range(2):
        if bpa_n[slot]:
            bpa = (ROOT / "data" / "map_bg_anim" / f"{stem}{slot + 1}.bpa").read_bytes()
            nt, nf = struct.unpack_from("<HH", bpa, 0)
            off = 4 + 4 * nf
            tiles += [bpa[off + i * 32:off + (i + 1) * 32] for i in range(nt)]
    off = 16 + (n_tiles - 1) * 32
    chunks = [[0] * 9] + [list(struct.unpack_from("<9H", bpc, off + i * 18)) for i in range(n_chunks - 1)]
    bma = FileType.BMA.deserialize((d / f"{stem}m.bma").read_bytes())
    streamed = n_tiles > 1024
    layers = [bma.layer0, bma.layer1] if bma.number_of_layers == 2 else [bma.layer0]
    bpl_raw = (d / f"{stem}.bpl").read_bytes()
    pals = [[(0, 0, 0)] + [tuple(bpl_raw[4 + (p * 15 + c) * 4:7 + (p * 15 + c) * 4]) for c in range(15)]
            for p in range(struct.unpack_from("<H", bpl_raw, 0)[0])]

    def pixels(e):
        """64 (palette, index) pairs of a map tile entry; index 0 = empty."""
        tid = e & (0xFFF if streamed else 0x3FF)
        if tid == 0 or tid >= len(tiles):
            return None
        t = tiles[tid]
        px = [(t[i // 2] >> 4) if i & 1 else (t[i // 2] & 0xF) for i in range(64)]
        if not streamed and e & 0x400:
            px = [px[r * 8 + 7 - c] for r in range(8) for c in range(8)]
        if not streamed and e & 0x800:
            px = [px[(7 - r) * 8 + c] for r in range(8) for c in range(8)]
        return e >> 12, px

    # Two layers, exactly as the map: BG0 = front (RT layer 0), BG1 = back.
    pool = [bytes(32)]
    index = {bytes(32): 0}
    maps = []
    for L in layers:
        m = [0] * (32 * 32)
        for j in range(21):
            for i in range(31):
                mx, my = cx // 8 + i, cy // 8 + j
                if mx >= bma.map_width_chunks * 3 or my >= bma.map_height_chunks * 3:
                    continue
                got = pixels(chunks[L[(my // 3) * bma.map_width_chunks + mx // 3]][(my % 3) * 3 + mx % 3])
                if got is None:
                    continue
                pal, out = got
                entry = None
                for flip, fx, fy in ((0, False, False), (0x400, True, False), (0x800, False, True), (0xC00, True, True)):
                    v = [out[(7 - r if fy else r) * 8 + (7 - c if fx else c)] for r in range(8) for c in range(8)]
                    t = bytes(v[q] | (v[q + 1] << 4) for q in range(0, 64, 2))
                    if t in index:
                        entry = index[t] | flip
                        break
                if entry is None:
                    t = bytes(out[q] | (out[q + 1] << 4) for q in range(0, 64, 2))
                    index[t] = len(pool)
                    pool.append(t)
                    entry = index[t]
                m[j * 32 + i] = entry | (pal << 12)
        maps.append(m)
    while len(maps) < 2:
        maps.append([0] * (32 * 32))
    mixed = 0
    if len(pool) > 512:
        raise SystemExit(f"{pair}: cover needs {len(pool)} tiles > 512")
    print(f"  cover: {len(pool)} tiles")
    (OUT / f"{pair}_cover.tiles").write_bytes(b"".join(pool))
    (OUT / f"{pair}_cover.tilemap").write_bytes(struct.pack("<2048H", *(maps[0] + maps[1])))
    return cx % 8, cy % 8, len(pool)


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
    ox, oy, nt = build_cover(pair, stem, cx, cy)
    COVERS[pair] = (ox, oy, nt)
    region = full[0:cy + 160, cx:cx + 240].copy()
    # (the render, not the capture: the cover shown at the hand-off is the
    # same render, and captures catch palette animations mid-cycle)
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


COVERS: dict = {}


def main() -> None:
    lines = ["/* Generated by tools/make_sky_cutaway_scrolls.py — do not edit. */"]
    for pair, cut, stem in PAIRS:
        rows = build(pair, cut, stem)
        ox, oy, nt = COVERS[pair]
        lines.append(f"#define SKY_SCROLL_{pair.upper()}_ROWS {rows}")
        lines.append(f"#define SKY_SCROLL_{pair.upper()}_COVER_X {ox}")
        lines.append(f"#define SKY_SCROLL_{pair.upper()}_COVER_Y {oy}")
        lines.append(f"#define SKY_SCROLL_{pair.upper()}_COVER_TILES {nt}")
    GEN_H.write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
