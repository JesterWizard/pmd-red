#!/usr/bin/env python3
"""Render Explorers of Sky second-screen backgrounds as GBA full-screen art.

EoS shows these on the DS top screen (back2_SetGround) or as close-ups. The
GBA has one screen, so the demake shows them as full-screen cutaways
(SPECIAL_PROCESS 0x60, see src/sky_cutaways.c). Each picture is the 240x160
window around the camera mark the EoS script uses.

    tools/make_sky_cutaways.py EOS.nds

Writes graphics/custom/sky_cutaways/<name>.{png,at4px,pal}. Which CG uses
which picture is events/sky/cutaways.cfg (the build makes the C table from it,
tools/event_editor/cutaways.py); a new CG needs no EoS ROM: point its
picture at any PNG.
"""
from __future__ import annotations

import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from PIL import Image as _I
from skytemple_files.common.types.file_types import FileType

_orig = _I.Image.putpalette
def _pp(self, data, rawmode="RGB"):
    if not isinstance(data, (bytes, bytearray, list)):
        data = list(data)
    return _orig(self, data, rawmode)
_I.Image.putpalette = _pp

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import convert_title_backgrounds as title  # noqa: E402

OUT = ROOT / "graphics" / "custom" / "sky_cutaways"
# 8bpp tile slots in the sky build (TITLE_BG_8BPP_MAX_TILES, include/bg_control.h)
MAX_TILES = 608
# A CG is decompressed into one heap buffer (0x1000 + 64 bytes a tile,
# src/sky_cutaways.c SwapArt) while the ground map stays loaded. Over the
# guild's B1F (streamed, about 107 KB of the 144 KB heap in use) and Treasure
# Town's square a 600-tile picture does not fit, so the chapter-3 bulletin
# board pictures, which EoS shows over g01p03a, keep to this many tiles
# (34 KB). documentation/Features/SkyChapter3.md, "Story CGs".
BOARD_TILES = 480
TILE_BUDGET = {"outlaw_board": BOARD_TILES, "outlaw_board_flipped": BOARD_TILES,
               "drowzee_poster": BOARD_TILES}

# (name, EoS level, centre x, centre y in pixels) — centres follow the EoS
# camera marks (camera2_SetPositionMark) or the picture's middle.
CUTAWAYS = [
    ("sky_day",       "v01p03a", 33 * 8, 9.5 * 8 + 4),
    ("sky_dusk",      "v01p03b", 33 * 8, 9.5 * 8 + 4),
    ("guild_sky",     "v02p01a", 132, 96),
    ("relic_fragment","v01p06b", 21 * 8, 15 * 8),
    ("sunset_sky",    "v26p06a", 19 * 8, 15.5 * 8),
    # chapter 2. back2_SetGround pictures at their camera2 mark; the
    # back_SetGround close-ups from their camera (performer 0 of the scene's
    # layer, where it ends up). v01p08b and v02p03a are tall pictures EoS
    # shows on both screens (back2_SetMode(5): the top screen shows the 192
    # pixels above the camera's), so their crop is moved up from the bottom
    # screen's centre: the gate to the seam between the screens (Wigglytuff's
    # face over the bars), the sentry post by 48 px (the wall over the floor
    # Diglett stands on, y 548).
    ("guild_gate",    "v01p08b", 16 * 8, 41.5 * 8 - 32 - 96),  # m02a0101: performer up 32 px
    ("sentry_grate",  "v02p02a", 19.5 * 8, 17.5 * 8),           # m02a0101 camera2 m2
    ("sentry_post",   "v02p03a", 16 * 8, 69.5 * 8 - 48),        # m02a0104: the pan's end, m0
    ("night_sky",     "v02p06a", 19.5 * 8, 15.5 * 8),       # m02a0113 / m02a1003 camera2 m0
    ("exploration_kit", "v02p08a", 16 * 8, 13.5 * 8),       # m02a0110 layer 2 performer
    # chapter 3: the top-screen pictures at the guild's bulletin boards, at
    # their camera2 marks (all at (19.5, 16.5))
    ("outlaw_board",  "v03p01a", 19.5 * 8, 16.5 * 8),   # m03a0102, m03a0502, m03a0506
    ("outlaw_board_flipped", "v03p02a", 19.5 * 8, 16.5 * 8),  # m03a0502, m03a0506
    ("drowzee_poster", "v03p04a", 19.5 * 8, 16.5 * 8),  # m03a0506
] + [
    (f"sunset_sea{i}", "v26p05a", (19.5 + 39 * (i % 3)) * 8, (13.5 + 30 * (i // 3)) * 8)
    for i in range(8)
]


def reduce_tiles(q: Image.Image, budget: int) -> Image.Image:
    """Cut the palette image `q` down to `budget` tiles (blank tile 0 counted):
    repeatedly replace the tile whose nearest other tile (in RGB, flips
    allowed) is closest by that tile, so the pictures lose detail evenly
    rather than where convert_image's index-order merge would. Returns the
    picture as the GBA shows it."""
    import numpy as np
    idx = np.asarray(q, dtype=np.int32)
    pal = np.array(q.getpalette()[:768], dtype=np.int32).reshape(-1, 3)
    H, W = idx.shape
    cells = [(ty, tx) for ty in range(H // 8) for tx in range(W // 8)]
    key_of = {}
    uniq = []                      # index tiles (8x8)
    for ty, tx in cells:
        t = idx[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8]
        if t.tobytes() not in key_of:
            known = None
            for f in (t[:, ::-1], t[::-1, :], t[::-1, ::-1]):
                if f.tobytes() in key_of:
                    known = key_of[f.tobytes()]
                    break
            key_of[t.tobytes()] = known if known is not None else len(uniq)
            if known is None:
                uniq.append(t.copy())
    n = len(uniq)
    if n + 1 <= budget:
        return q
    rgb = np.stack([pal[u].reshape(-1) for u in uniq]).astype(np.float64)
    flips = [np.stack([pal[f(u)].reshape(-1) for u in uniq]).astype(np.float64)
             for f in (lambda u: u, lambda u: u[:, ::-1], lambda u: u[::-1, :], lambda u: u[::-1, ::-1])]
    sq = (rgb ** 2).sum(1)
    dist = np.full((n, n), np.inf)
    for fl in flips:
        d = sq[:, None] + (fl ** 2).sum(1)[None, :] - 2 * rgb @ fl.T
        dist = np.minimum(dist, d)
    np.fill_diagonal(dist, np.inf)
    rep = list(range(n))
    alive = np.ones(n, bool)
    for _ in range(n + 1 - budget):
        i, j = np.unravel_index(np.argmin(dist), dist.shape)
        # j replaces i: i's cells show j (flipped as fits best)
        rep[i] = j
        for k in range(n):
            if rep[k] == i:
                rep[k] = j
        alive[i] = False
        dist[i, :] = np.inf
        dist[:, i] = np.inf
    out = idx.copy()
    for ty, tx in cells:
        t = idx[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8]
        k = key_of[t.tobytes()]
        if rep[k] == k:
            continue
        r = uniq[rep[k]]
        cand = [r, r[:, ::-1], r[::-1, :], r[::-1, ::-1]]
        best = min(cand, key=lambda c: ((pal[c] - pal[t]) ** 2).sum())
        out[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8] = best
    res = Image.fromarray(out.astype(np.uint8), "P")
    res.putpalette(q.getpalette())
    return res


def render(rom, files, name):
    def pick(ext):
        for cand in (f"MAP_BG/{name}.{ext}", f"MAP_BG/{name[:-1]}.{ext}"):
            if cand in files:
                return cand
        raise SystemExit(name)
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{name}.bma"))
    bpc = FileType.BPC.deserialize(rom.getFileByName(pick("bpc")))
    bpl = FileType.BPL.deserialize(rom.getFileByName(pick("bpl")))
    bpas = []
    for slot in range(8):
        n = f"MAP_BG/{name}{slot + 1}.bpa"
        bpas.append(FileType.BPA.deserialize(rom.getFileByName(n)) if n in files else None)
    img = bma.to_pil(bpc, bpl, bpas, False, False)
    if isinstance(img, list):
        img = img[0]
    return img.convert("RGB")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    files = set()

    def walk(folder, prefix=""):
        for f in folder.files:
            files.add(prefix + f)
        for n, sub in folder.folders:
            walk(sub, prefix + n + "/")

    walk(rom.filenames)
    OUT.mkdir(parents=True, exist_ok=True)
    cache = {}
    for slug, level, cx, cy in CUTAWAYS:
        if level not in cache:
            cache[level] = render(rom, files, level)
        src = cache[level]
        x0 = int(min(max(cx - 120, 0), src.width - 240))
        y0 = int(min(max(cy - 80, 0), src.height - 160))
        im = src.crop((x0, y0, x0 + 240, y0 + 160))
        if slug.startswith("sunset_sea"):
            # EoS stacks the sunset sky (top screen) over the sea (bottom
            # screen): keep the horizon from the sky and the waves below it.
            if "v26p06a" not in cache:
                cache["v26p06a"] = render(rom, files, "v26p06a")
            sky = cache["v26p06a"]
            sx = (sky.width - 240) // 2
            stack = Image.new("RGB", (240, 160))
            stack.paste(sky.crop((sx, 92, sx + 240, 172)), (0, 0))
            stack.paste(im.crop((0, 0, 240, 80)), (0, 80))
            im = stack
        png = OUT / f"{slug}.png"
        q = title.quantize_gba(im)
        if slug in TILE_BUDGET:
            # the PNG is then the reduced picture, as the GBA shows it
            q = reduce_tiles(q, TILE_BUDGET[slug])
            im = q.convert("RGB")
        im.save(png)
        raw, pal, ntiles, ncolors, merged = title.convert_image(
            im, quantized=q, max_tiles=TILE_BUDGET.get(slug, MAX_TILES))
        png.with_suffix(".at4px").write_bytes(title.wrap_at4px(raw))
        png.with_suffix(".pal").write_bytes(pal)
        print(f"{slug}: {level} tiles={ntiles} colors={ncolors}{' merged' if merged else ''}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
