#!/usr/bin/env python3
"""Convert graphics/title_screen_backgrounds/*.png to 8bpp AT4PX + RGB palette.

Output (next to each PNG):
  title_XX.at4px  — AT4PX (PX-compressed AT4PN payload): 2×32×32 tilemaps +
                    8bpp tiles (64 B each)
  title_XX.pal    — 240 RGBX colors (index 0 reserved transparent), unk4=0x80

Custom title uses BG3 in 256-color text mode at CHARBASE 1 (VRAM+0x4000).
Tiles load at VRAM+0x6000 (tile index base 128) through 0xF5FF (600 tiles).
UI maps use screenbases 6–8; BG3 map at screenbase 31 (0xF800) so Continue
window tiles (~0x2D00) never smash maps. Extras merge to nearest tiles.
BG2 tilemap stays empty.
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

from PIL import Image

ROOT = Path(__file__).resolve().parent
SRC_DIR = ROOT / "graphics" / "title_screen_backgrounds"

# Index 0 = transparent; 1–239 = art. Continue icons use OBJ palette (256+)
# when custom title 8bpp is active, so they no longer reserve BG colors.
MAX_COLORS = 239
MAX_TILES = 600  # CHARBASE1 tile 128 @ 0x6000 → 0xF600; BG3 map at 0xF800
PAL_ENTRIES = 240
SCREEN_W, SCREEN_H = 240, 160
TILES_X, TILES_Y = SCREEN_W // 8, SCREEN_H // 8


def flatten_rgb(im: Image.Image) -> Image.Image:
    im = im.convert("RGBA")
    if im.size != (SCREEN_W, SCREEN_H):
        im = im.resize((SCREEN_W, SCREEN_H), Image.Resampling.NEAREST)
    bg = Image.new("RGBA", im.size, (0, 0, 0, 255))
    return Image.alpha_composite(bg, im).convert("RGB")


def flip_tile(idxs: tuple[int, ...], h: bool, v: bool) -> tuple[int, ...]:
    grid = [list(idxs[r * 8 : (r + 1) * 8]) for r in range(8)]
    if h:
        grid = [list(reversed(r)) for r in grid]
    if v:
        grid = list(reversed(grid))
    return tuple(c for r in grid for c in r)


def encode_8bpp(idxs: tuple[int, ...]) -> bytes:
    return bytes(i & 0xFF for i in idxs)


def tile_mse(a: tuple[int, ...], b: tuple[int, ...]) -> int:
    return sum((x - y) * (x - y) for x, y in zip(a, b))


def merge_tiles(
    tiles: list[tuple[int, ...]], usages: list[int], limit: int
) -> tuple[list[tuple[int, ...]], list[int]]:
    """Reduce tile set to `limit` entries. Returns (new_tiles, old_index → new_index)."""
    n = len(tiles)
    parent = list(range(n))

    def find(x: int) -> int:
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x

    alive = set(range(n))
    use = list(usages)
    while len(alive) > limit:
        victim = min((i for i in alive if i != 0), key=lambda i: (use[i], i))
        best = min(
            (o for o in alive if o != victim),
            key=lambda o: tile_mse(tiles[victim], tiles[o]),
        )
        use[best] += use[victim]
        parent[victim] = best
        alive.remove(victim)

    survivors = sorted(alive)
    assert survivors[0] == 0
    compact = {old: new for new, old in enumerate(survivors)}
    new_tiles = [tiles[i] for i in survivors]
    index_map = [compact[find(i)] for i in range(n)]
    return new_tiles, index_map


def best_flags(target: tuple[int, ...], surv: tuple[int, ...]) -> int:
    best_fl, best_e = 0, 10**18
    for h, v, fl in (
        (False, False, 0),
        (True, False, 0x400),
        (False, True, 0x800),
        (True, True, 0xC00),
    ):
        e = tile_mse(target, flip_tile(surv, h, v))
        if e < best_e:
            best_e, best_fl = e, fl
    return best_fl


def _gba8(c5):
    """5-bit GBA channel -> the 8-bit value that converts back to it."""
    return (c5 << 3) | (c5 >> 2)


def quantize_gba(
    im: Image.Image,
    colors: int = MAX_COLORS,
    train_mask: Image.Image | None = None,
    iters: int = 12,
) -> Image.Image:
    """Palette image whose colours are all distinct on the GBA (15-bit).

    Median cut over 24-bit colours spends many of its entries on shades that
    the GBA's 5-bit channels show as one colour, and leaves the rest of the
    picture banded. This picks the palette in 15-bit space: exact when the
    picture has `colors` or fewer GBA colours, else median cut refined by
    k-means. `train_mask` (L, > 0 = use) limits the pixels the palette is
    fitted to; every pixel is mapped. Deterministic.
    """
    import numpy as np

    rgb = np.asarray(im.convert("RGB"), dtype=np.int32)
    h, w, _ = rgb.shape
    px = (rgb >> 3).reshape(-1, 3)
    train = px
    if train_mask is not None:
        sel = np.asarray(train_mask.convert("L")).reshape(-1) > 0
        if sel.any():
            train = px[sel]

    uniq = np.unique(train, axis=0)
    if len(uniq) <= colors:
        pal = uniq
    else:
        seed_img = Image.fromarray(_gba8(train).reshape(1, -1, 3).astype(np.uint8))
        seed = seed_img.quantize(
            colors=colors, method=Image.Quantize.MEDIANCUT, dither=Image.Dither.NONE
        )
        seed_pal = np.asarray(seed.getpalette(), dtype=np.int32).reshape(-1, 3)
        seed_used = sorted(set(seed.get_flattened_data()))
        pal = np.unique(seed_pal[seed_used] >> 3, axis=0).astype(np.float64)
        for _ in range(iters):
            idx = _nearest(train, pal)
            sums = np.zeros_like(pal)
            np.add.at(sums, idx, train)
            counts = np.bincount(idx, minlength=len(pal))
            used = counts > 0
            pal[used] = sums[used] / counts[used, None]
        pal = np.unique(np.clip(np.rint(pal), 0, 31).astype(np.int32), axis=0)

    idx = _nearest(px, pal)
    used = np.unique(idx)
    pal = pal[used]
    idx = np.searchsorted(used, idx)
    out = Image.fromarray(idx.reshape(h, w).astype(np.uint8), "P")
    flat = _gba8(pal).astype(np.uint8).reshape(-1).tolist()
    out.putpalette(flat + [0] * (768 - len(flat)))
    return out


def _nearest(px, pal):
    import numpy as np

    best = np.zeros(len(px), dtype=np.int32)
    dist = np.full(len(px), np.iinfo(np.int64).max, dtype=np.int64)
    p = np.asarray(pal, dtype=np.float64)
    for k in range(len(p)):
        d = ((px - p[k]) ** 2).sum(1)
        closer = d < dist
        dist[closer] = d[closer]
        best[closer] = k
    return best


def convert_image(
    im: Image.Image,
    quantized: Image.Image | None = None,
    max_tiles: int = MAX_TILES,
) -> tuple[bytes, bytes, int, int, bool]:
    """`quantized`: a ready palette image (e.g. quantize_gba) in place of the
    median cut; `max_tiles`: tile budget including the blank tile 0."""
    if quantized is not None:
        q = quantized
    else:
        ncolors = min(MAX_COLORS, max(1, len(set(im.getdata()))))
        q = im.quantize(
            colors=ncolors, method=Image.Quantize.MEDIANCUT, dither=Image.Dither.NONE
        )
    raw_pal = q.getpalette()
    used = sorted(set(q.getdata()))
    colors = [(raw_pal[i * 3], raw_pal[i * 3 + 1], raw_pal[i * 3 + 2]) for i in used]
    remap = {old: new + 1 for new, old in enumerate(used)}
    w, _ = im.size
    flat = [remap[i] for i in q.getdata()]

    tiles: list[tuple[int, ...]] = [tuple([0] * 64)]
    tile_keys: dict[tuple[int, ...], int] = {tiles[0]: 0}
    usages = [1]
    screen: list[tuple[int, ...]] = []  # raw 8x8 index tuples, row-major

    def intern(idxs: tuple[int, ...]) -> int:
        for h, v in ((False, False), (True, False), (False, True), (True, True)):
            key = flip_tile(idxs, h, v)
            if key in tile_keys:
                ti = tile_keys[key]
                usages[ti] += 1
                return ti
        ti = len(tiles)
        tiles.append(idxs)
        tile_keys[idxs] = ti
        usages.append(1)
        return ti

    for ty in range(TILES_Y):
        for tx in range(TILES_X):
            idxs = tuple(
                flat[(ty * 8 + y) * w + (tx * 8 + x)]
                for y in range(8)
                for x in range(8)
            )
            screen.append(idxs)
            intern(idxs)

    merged = False
    index_map = list(range(len(tiles)))
    if len(tiles) > max_tiles:
        tiles, index_map = merge_tiles(tiles, usages, max_tiles)
        merged = True

    # Rebuild key table for flip lookup after possible merge
    tile_keys = {t: i for i, t in enumerate(tiles)}

    bg2 = [0] * (32 * 32)
    bg3 = [0] * (32 * 32)
    for ty in range(TILES_Y):
        for tx in range(TILES_X):
            idxs = screen[ty * TILES_X + tx]
            # Find best matching survivor (exact flip of interned, or nearest after merge)
            best_ti, best_fl, best_e = 0, 0, 10**18
            for h, v, fl in (
                (False, False, 0),
                (True, False, 0x400),
                (False, True, 0x800),
                (True, True, 0xC00),
            ):
                key = flip_tile(idxs, h, v)
                if key in tile_keys:
                    best_ti, best_fl, best_e = tile_keys[key], fl, 0
                    break
            if best_e != 0:
                # Merged away — pick nearest survivor + flags
                for ti, surv in enumerate(tiles):
                    for h, v, fl in (
                        (False, False, 0),
                        (True, False, 0x400),
                        (False, True, 0x800),
                        (True, True, 0xC00),
                    ):
                        e = tile_mse(idxs, flip_tile(surv, h, v))
                        if e < best_e:
                            best_e, best_ti, best_fl = e, ti, fl
            bg3[ty * 32 + tx] = (best_ti & 0x3FF) | best_fl

    raw = struct.pack(f"<{2 * 32 * 32}H", *(bg2 + bg3)) + b"".join(
        encode_8bpp(t) for t in tiles
    )
    if len(raw) > 0xFFFF:
        raise RuntimeError(f"payload too large: {len(raw):#x}")

    pad = colors[0] if colors else (0, 0, 0)
    pal_list = [pad] + colors
    while len(pal_list) < PAL_ENTRIES:
        pal_list.append((0, 0, 0))
    pal = bytearray()
    for r, g, b in pal_list[:PAL_ENTRIES]:
        pal += bytes((r, g, b, 0x80))

    return raw, bytes(pal), len(tiles), len(colors), merged


def wrap_at4px(payload: bytes) -> bytes:
    """Compress payload into an AT4PX container for DecompressAT.

    Header: "AT4PX", u16 container length at bytes 5..6, 9 PX flag bytes at
    7..15, u16 decompressed length at 0x10..0x11, PX data from 0x12.
    """
    from skytemple_files.compression_container.at4px.handler import At4pxHandler

    blob = At4pxHandler.serialize(At4pxHandler.compress(payload))
    assert blob[:5] == b"AT4PX", blob[:5]
    assert len(blob) < 0x10000, len(blob)
    assert struct.unpack_from("<H", blob, 5)[0] == len(blob)
    assert struct.unpack_from("<H", blob, 0x10)[0] == len(payload)
    return blob


def convert_one(png: Path, force: bool = False) -> bool:
    out_at = png.with_suffix(".at4px")
    out_pal = png.with_suffix(".pal")
    if (
        not force
        and out_at.exists()
        and out_pal.exists()
        and out_at.stat().st_mtime >= png.stat().st_mtime
        and out_pal.stat().st_mtime >= png.stat().st_mtime
    ):
        return False

    im = flatten_rgb(Image.open(png))
    raw, pal, ntiles, ncolors, merged = convert_image(im)
    out_at.write_bytes(wrap_at4px(raw))
    out_pal.write_bytes(pal)
    extra = ", merged" if merged else ""
    print(
        f"  {png.name}: 8bpp, colors={ncolors}, tiles={ntiles}{extra}, "
        f"at4px={out_at.stat().st_size}, uncomp={len(raw):#x}"
    )
    return True


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--force", action="store_true")
    ap.add_argument("--stamp", type=Path, default=None)
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args()

    pngs = sorted(SRC_DIR.glob("title_*.png"))
    if not pngs:
        print(f"no PNGs in {SRC_DIR}", file=sys.stderr)
        return 1

    if not args.quiet:
        print(f"Converting {len(pngs)} title backgrounds (8bpp, max {MAX_TILES} tiles)...")
    changed = False
    for png in pngs:
        if convert_one(png, force=args.force):
            changed = True
        elif not args.quiet:
            print(f"  {png.name}: up to date")

    if args.stamp is not None:
        args.stamp.parent.mkdir(parents=True, exist_ok=True)
        if changed or not args.stamp.exists():
            args.stamp.write_text("ok\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
