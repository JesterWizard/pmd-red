"""Explorers of Sky demake: the "Pokémon Mystery Dungeon" logo as OBJs.

EoS's logo scene (t02a0205) has the logo on the top screen (level S13P01A,
layer 1, with the s13p01b.bpl palette: its fully faded-in colours) while the
hero and partner walk on the bottom one. The GBA shows the bottom screen, so
the logo goes over it, scaled down, as OBJs: 16x16 pieces, each with one of
a few 15-colour palettes picked for it (tools/make_sky_opening.py puts them
into the scene's OBJ list and palettes).
"""
from __future__ import annotations

import numpy as np
from PIL import Image
from skytemple_files.common.types.file_types import FileType


def logo_rgba(rom) -> Image.Image:
    get = lambda n: rom.getFileByName("MAP_BG/" + n)
    bma = FileType.BMA.deserialize(get("s13p01a.bma"))
    bpc = FileType.BPC.deserialize(get("s13p01a.bpc"))
    pals = FileType.BPL.deserialize(get("s13p01b.bpl")).palettes
    idx = bma.to_pil_single_layer(bpc, pals, [None] * 8, 1).crop((0, 0, 256, 192))
    rgba = idx.convert("RGBA")
    rgba.putalpha(idx.point(lambda v: 0 if v % 16 == 0 else 255).convert("L"))
    return rgba.crop(rgba.getbbox())


def _kmeans(px: np.ndarray, k: int, iters: int = 12) -> np.ndarray:
    """k colours (15-bit channels, float) for the pixels px (n, 3)."""
    uniq, counts = np.unique(px, axis=0, return_counts=True)
    if len(uniq) <= k:
        return np.concatenate([uniq, np.zeros((k - len(uniq), 3))]).astype(np.float64)
    # start from the most spread colours (farthest point), then Lloyd
    cen = [uniq[counts.argmax()].astype(np.float64)]
    d = ((uniq - cen[0]) ** 2).sum(1).astype(np.float64)
    for _ in range(k - 1):
        j = int((d * np.sqrt(counts)).argmax())
        cen.append(uniq[j].astype(np.float64))
        d = np.minimum(d, ((uniq - cen[-1]) ** 2).sum(1))
    cen = np.array(cen)
    for _ in range(iters):
        a = ((uniq[:, None, :] - cen[None]) ** 2).sum(2).argmin(1)
        for c in range(k):
            m = a == c
            if m.any():
                cen[c] = (uniq[m] * counts[m, None]).sum(0) / counts[m].sum()
    return np.round(cen)


def logo_objs(rom, width: int, palettes: int = 4):
    """-> dict(w, h, tiles (4bpp, 4 per piece), pieces [(x, y, tile, palette)],
    pals [16 x 15-bit]) for the logo scaled to `width` pixels."""
    src = logo_rgba(rom)
    h = round(src.height * width / src.width)
    im = src.resize((width, h), Image.LANCZOS)
    a = np.asarray(im)
    opaque = a[..., 3] >= 128
    rgb = (a[..., :3] >> 3).astype(np.int32)
    W, H = (width + 15) // 16 * 16, (h + 15) // 16 * 16
    ox, oy = (W - width) // 2, (H - h) // 2
    full = np.zeros((H, W, 3), np.int32)
    mask = np.zeros((H, W), bool)
    full[oy:oy + h, ox:ox + width] = rgb
    mask[oy:oy + h, ox:ox + width] = opaque
    blocks = [(bx, by) for by in range(0, H, 16) for bx in range(0, W, 16) if mask[by:by + 16, bx:bx + 16].any()]
    pix = [full[by:by + 16, bx:bx + 16][mask[by:by + 16, bx:bx + 16]] for bx, by in blocks]
    # blocks -> palettes: start from the blocks' mean colours, then alternate
    means = np.array([p.mean(0) for p in pix])
    cen = _kmeans(np.round(means).astype(np.int32), palettes)
    assign = ((means[:, None, :] - cen[None]) ** 2).sum(2).argmin(1)
    pals = None
    for _ in range(8):
        pals = []
        for k in range(palettes):
            member = [pix[j] for j in range(len(blocks)) if assign[j] == k]
            pals.append(_kmeans(np.concatenate(member), 15) if member else np.zeros((15, 3)))
        new = np.array([min(range(palettes), key=lambda k: ((p[:, None, :] - pals[k][None]) ** 2).sum(2).min(1).sum())
                        for p in pix])
        if (new == assign).all():
            break
        assign = new
    tiles = bytearray()
    pieces = []
    for j, (bx, by) in enumerate(blocks):
        pal = pals[assign[j]]
        blk, m = full[by:by + 16, bx:bx + 16], mask[by:by + 16, bx:bx + 16]
        idx = ((blk[:, :, None, :] - pal[None, None]) ** 2).sum(3).argmin(2) + 1
        idx[~m] = 0
        for ty in (0, 8):
            for tx in (0, 8):
                t = idx[ty:ty + 8, tx:tx + 8]
                tiles += bytes(int(t[y, x]) | (int(t[y, x + 1]) << 4) for y in range(8) for x in range(0, 8, 2))
        pieces.append((bx - ox, by - oy, j * 4, int(assign[j])))
    out_pals = [[0] + [int(c[0]) | (int(c[1]) << 5) | (int(c[2]) << 10) for c in pal] for pal in pals]
    return dict(w=width, h=h, tiles=bytes(tiles), pieces=pieces, pals=out_pals)


def preview(lg) -> Image.Image:
    """The pieces drawn as the GBA would (RGBA)."""
    xs = [p[0] for p in lg["pieces"]]; ys = [p[1] for p in lg["pieces"]]
    x0, y0 = min(xs), min(ys)
    out = np.zeros((max(ys) - y0 + 16, max(xs) - x0 + 16, 4), np.uint8)
    for (x, y, tile, pal) in lg["pieces"]:
        cols = lg["pals"][pal]
        for k in range(4):
            d = lg["tiles"][(tile + k) * 32:(tile + k) * 32 + 32]
            for i, b in enumerate(d):
                for n, v in enumerate((b & 15, b >> 4)):
                    if v:
                        c = cols[v]
                        yy = y - y0 + (k // 2) * 8 + i // 4
                        xx = x - x0 + (k % 2) * 8 + (i % 4) * 2 + n
                        out[yy, xx] = ((c & 31) << 3, ((c >> 5) & 31) << 3, ((c >> 10) & 31) << 3, 255)
    return Image.fromarray(out)
