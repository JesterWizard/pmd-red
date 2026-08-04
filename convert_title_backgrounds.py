#!/usr/bin/env python3
"""Convert graphics/title_screen_backgrounds/*.png to 8bpp AT4PN + RGB palette.

Output (next to each PNG):
  title_XX.at4pn  — AT4PN: 2×32×32 tilemaps + 8bpp tiles (64 B each)
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


def convert_image(im: Image.Image) -> tuple[bytes, bytes, int, int, bool]:
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
    if len(tiles) > MAX_TILES:
        tiles, index_map = merge_tiles(tiles, usages, MAX_TILES)
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
        raise RuntimeError(f"payload too large for AT4PN: {len(raw):#x}")

    pad = colors[0] if colors else (0, 0, 0)
    pal_list = [pad] + colors
    while len(pal_list) < PAL_ENTRIES:
        pal_list.append((0, 0, 0))
    pal = bytearray()
    for r, g, b in pal_list[:PAL_ENTRIES]:
        pal += bytes((r, g, b, 0x80))

    return raw, bytes(pal), len(tiles), len(colors), merged


def wrap_at4pn(payload: bytes) -> bytes:
    return b"AT4PN" + struct.pack("<H", len(payload)) + payload


def convert_one(png: Path, force: bool = False) -> bool:
    out_at = png.with_suffix(".at4pn")
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
    out_at.write_bytes(wrap_at4pn(raw))
    out_pal.write_bytes(pal)
    extra = ", merged" if merged else ""
    print(
        f"  {png.name}: 8bpp, colors={ncolors}, tiles={ntiles}{extra}, "
        f"at4pn={out_at.stat().st_size}, uncomp={len(raw):#x}"
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
