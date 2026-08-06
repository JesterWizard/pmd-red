#!/usr/bin/env python3
"""Convert a PNG into Rescue Team ground-map BPL / BPC / BMA assets.

RT BPC is raw 4bpp (not Sky AT4PX). BPL/BMA match skytemple-files layouts.

Spinda Café emits a dual-layer BMA: layer0 (BG2) = bar fronts in front of
Pokémon sprites; layer1 (BG3) = room behind sprites. Requires MAP unk0=6/7/9.
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

from PIL import Image
from tilequant import Tilequant
from tilequant.image_converter import DitheringMode
from skytemple_files.common.types.file_types import FileType

ROOT = Path(__file__).resolve().parents[1]
CHUNK = 3
TILE = 8
TRANSPARENT = (8, 8, 12)


def gba_encode_4bpp(indices: list[int]) -> bytes:
    """Encode 64 palette indices (0–15) as GBA 4bpp (32 bytes)."""
    out = bytearray(32)
    for i in range(32):
        lo = indices[i * 2] & 0xF
        hi = indices[i * 2 + 1] & 0xF
        out[i] = lo | (hi << 4)
    return bytes(out)


def write_bpl(path: Path, palettes: list[list[tuple[int, int, int]]]) -> None:
    """Write RT BPL: u16 count, u16 anim=0, then 15×RGBA8 per palette (skip color 0)."""
    data = bytearray()
    data += struct.pack("<HH", len(palettes), 0)
    for pal in palettes:
        assert len(pal) >= 16
        for r, g, b in pal[1:16]:
            data += bytes((r & 0xFF, g & 0xFF, b & 0xFF, 0))
    path.write_bytes(data)


def write_bpc(
    path: Path,
    tiles_4bpp: list[bytes],
    chunks: list[list[int]],
) -> None:
    """Write RT BPC header + raw tiles + raw chunk tilemaps.

    tiles_4bpp: tile 1..N (tile 0 implied empty)
    chunks: chunk 1..M, each a list of 9 GBA tilemap u16s (chunk 0 implied empty)
    """
    num_tiles = len(tiles_4bpp) + 1
    num_chunks = len(chunks) + 1
    data = bytearray()
    data += struct.pack(
        "<8h",
        CHUNK,
        CHUNK,
        num_tiles,
        0,
        0,
        0,
        0,
        num_chunks,
    )
    for t in tiles_4bpp:
        assert len(t) == 32
        data += t
    for ch in chunks:
        assert len(ch) == CHUNK * CHUNK
        for entry in ch:
            data += struct.pack("<H", entry & 0xFFFF)
    if len(data) % 4:
        data += b"\x00" * (4 - (len(data) % 4))
    path.write_bytes(data)


def write_bma(
    path: Path,
    width_tiles: int,
    height_tiles: int,
    width_chunks: int,
    height_chunks: int,
    layer0_chunks: list[int],
    layer1_chunks: list[int] | None,
    collision: list[bool],
) -> None:
    """Build BMA via skytemple model (NRL + collision RLE).

    layer0 = BG2 (in front of sprites when unk0=6).
    layer1 = BG3 (behind sprites). None → single-layer map.
    """
    if layer1_chunks is not None:
        template = FileType.BMA.deserialize(
            (ROOT / "data" / "map_bg" / "D05P01m.bma").read_bytes()
        )
    else:
        template = FileType.BMA.deserialize(
            (ROOT / "data" / "map_bg" / "T01P06m.bma").read_bytes()
        )
    template.resize(width_chunks, height_chunks, width_tiles, height_tiles)
    template.unk6 = 0
    template.number_of_collision_layers = 1
    template.unknown_data_block = None

    n = width_chunks * height_chunks
    assert len(layer0_chunks) == n
    assert len(collision) == width_tiles * height_tiles

    if layer1_chunks is not None:
        assert len(layer1_chunks) == n
        if template.number_of_layers < 2:
            template.add_upper_layer()
        template.number_of_layers = 2
        for i, v in enumerate(layer0_chunks):
            template.layer0[i] = v
        for i, v in enumerate(layer1_chunks):
            template.layer1[i] = v
    else:
        template.number_of_layers = 1
        template.layer1 = None
        for i, v in enumerate(layer0_chunks):
            template.layer0[i] = v

    for i, blocked in enumerate(collision):
        template.collision[i] = bool(blocked)
    path.write_bytes(FileType.BMA.serialize(template))


def luminance(rgb: tuple[int, int, int]) -> float:
    r, g, b = rgb
    return 0.2126 * r + 0.7152 * g + 0.0722 * b


# Spinda Café furniture on the downscaled 45×36 tile grid (max-width 360).
CAFE_BAR_RECTS = (
    # Full counter block through approach row y=15. Player stands on y=16;
    # talk proxies on solid y=15 handle A-range.
    (8, 9, 20, 15),
    (24, 9, 36, 15),
)
# South counter fascia → BMA layer0 (BG2), in front of Pokémon sprites.
# Left bar: drop Spinda's rightmost two fascia tiles (orange/green jars).
CAFE_BAR_FG_RECTS = (
    (8, 12, 16, 12),
    (24, 12, 36, 12),
)
# Bottom lip only — taller FG overlaps café staff sprites.
CAFE_BAR_FG_PIXELS = 4
CAFE_TABLE_DISKS = (
    (11, 18, 2),
    (15, 22, 2),
    (33, 18, 2),
    (29, 22, 2),
)
CAFE_NPC_WALKABLE = ()  # staff stand on solid counter tiles; do not punch bar holes



def build_collision(img_rgb: Image.Image, w_tiles: int, h_tiles: int) -> list[bool]:
    """Solid on cave walls / void / bars / tables; walkable on floor + stairs + staff tiles."""
    blocked: list[bool] = []
    px = img_rgb.load()
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            samples = []
            for oy, ox in ((4, 4), (2, 2), (6, 6), (2, 6), (6, 2)):
                x = min(img_rgb.width - 1, tx * TILE + ox)
                y = min(img_rgb.height - 1, ty * TILE + oy)
                samples.append(luminance(px[x, y]))
            avg = sum(samples) / len(samples)
            if avg < 28:
                blocked.append(True)
                continue
            if avg >= 95:
                blocked.append(False)
                continue
            cx0, cx1 = w_tiles // 2 - 5, w_tiles // 2 + 5
            if cx0 <= tx < cx1 and ty >= h_tiles - 10 and 40 <= avg < 95:
                blocked.append(False)
                continue
            if cx0 <= tx < cx1 and ty >= h_tiles - 8 and avg >= 28:
                blocked.append(False)
                continue
            blocked.append(True)

    def set_blocked(tx: int, ty: int, value: bool) -> None:
        if 0 <= tx < w_tiles and 0 <= ty < h_tiles:
            blocked[ty * w_tiles + tx] = value

    for x0, y0, x1, y1 in CAFE_BAR_RECTS:
        for ty in range(y0, y1 + 1):
            for tx in range(x0, x1 + 1):
                set_blocked(tx, ty, True)

    # BG2 fascia row must always be solid (no NPC walkable punches).
    for x0, y0, x1, y1 in CAFE_BAR_FG_RECTS:
        for ty in range(y0, y1 + 1):
            for tx in range(x0, x1 + 1):
                set_blocked(tx, ty, True)

    for cx, cy, rad in CAFE_TABLE_DISKS:
        r2 = rad * rad
        for ty in range(cy - rad, cy + rad + 1):
            for tx in range(cx - rad, cx + rad + 1):
                if (tx - cx) * (tx - cx) + (ty - cy) * (ty - cy) <= r2:
                    set_blocked(tx, ty, True)

    for tx, ty in CAFE_NPC_WALKABLE:
        set_blocked(tx, ty, False)

    return blocked


def preprocess_for_rt_limits(
    img: Image.Image, max_width: int, target_colors: int
) -> Image.Image:
    """Downscale so tiles stay under the GBA 10-bit tile cap."""
    del target_colors
    if img.width > max_width:
        h = int(round(img.height * (max_width / img.width)))
        img = img.resize((max_width, h), Image.Resampling.LANCZOS)
    return img


def pad_to_chunk_grid(img: Image.Image) -> tuple[Image.Image, int, int]:
    w_tiles = (img.width + TILE - 1) // TILE
    h_tiles = (img.height + TILE - 1) // TILE
    w_tiles = (w_tiles + CHUNK - 1) // CHUNK * CHUNK
    h_tiles = (h_tiles + CHUNK - 1) // CHUNK * CHUNK
    canvas = Image.new("RGB", (w_tiles * TILE, h_tiles * TILE), TRANSPARENT)
    canvas.paste(img, (0, 0))
    return canvas, w_tiles, h_tiles


def tile_in_bar_fg(tx: int, ty: int) -> bool:
    for x0, y0, x1, y1 in CAFE_BAR_FG_RECTS:
        if x0 <= tx <= x1 and y0 <= ty <= y1:
            return True
    return False


def split_bar_layers(canvas: Image.Image, w_tiles: int, h_tiles: int) -> tuple[Image.Image, Image.Image]:
    """Split café art into back (full room) + front (bottom N px of bar fascia).

    Back keeps the full counter art. Front only has the bottom CAFE_BAR_FG_PIXELS
    of each fascia tile so sprites sit over the upper fascia and under the lip.
    """
    src = canvas.load()
    back = canvas.copy()
    front = Image.new("RGB", canvas.size, TRANSPARENT)
    fp = front.load()
    y0_fg = TILE - CAFE_BAR_FG_PIXELS

    for ty in range(h_tiles):
        for tx in range(w_tiles):
            if not tile_in_bar_fg(tx, ty):
                continue
            for oy in range(y0_fg, TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    fp[x, y] = src[x, y]
    return back, front


def indexed_to_tilemap(
    indexed: Image.Image,
    w_tiles: int,
    h_tiles: int,
    get_tile,
    *,
    allow_empty: bool,
) -> list[list[int]]:
    """Build per-tile GBA tilemap entries from an indexed (mode P) image."""
    tilemap = [[0] * w_tiles for _ in range(h_tiles)]
    pix = indexed.load()
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            raw_idx = []
            for row in range(TILE):
                for col in range(TILE):
                    raw_idx.append(pix[tx * TILE + col, ty * TILE + row])
            banks = [i >> 4 for i in raw_idx]
            pal = max(set(banks), key=banks.count)
            local = [i & 0xF for i in raw_idx]
            for i, b in enumerate(banks):
                if b != pal:
                    local[i] = 0
            if allow_empty and all(c == 0 for c in local):
                tilemap[ty][tx] = 0
                continue
            tile_id = get_tile(pal, local)
            tilemap[ty][tx] = tile_id | (pal << 12)
    return tilemap


def tilemaps_to_chunks(
    tilemaps: list[list[list[int]]],
    w_tiles: int,
    h_tiles: int,
) -> tuple[list[list[int]], list[list[int]]]:
    """Deduplicate 3×3 chunks across all layers; return chunk list + per-layer maps."""
    chunk_list: list[list[int]] = []
    chunk_keys: dict[tuple[int, ...], int] = {}
    w_chunks = w_tiles // CHUNK
    h_chunks = h_tiles // CHUNK
    layer_maps: list[list[int]] = []

    for tilemap in tilemaps:
        chunk_map: list[int] = []
        for cy in range(h_chunks):
            for cx in range(w_chunks):
                entries = []
                for row in range(CHUNK):
                    for col in range(CHUNK):
                        entries.append(tilemap[cy * CHUNK + row][cx * CHUNK + col])
                key = tuple(entries)
                if all(e == 0 for e in entries):
                    cid = 0
                elif key in chunk_keys:
                    cid = chunk_keys[key]
                else:
                    cid = len(chunk_list) + 1
                    chunk_list.append(list(entries))
                    chunk_keys[key] = cid
                chunk_map.append(cid)
        layer_maps.append(chunk_map)
    return chunk_list, layer_maps


def convert(
    png: Path,
    out_stem: Path,
    num_palettes: int = 13,
    max_width: int = 360,
) -> None:
    target_colors = num_palettes * 16
    img = preprocess_for_rt_limits(
        Image.open(png).convert("RGB"), max_width, target_colors
    )
    canvas, w_tiles, h_tiles = pad_to_chunk_grid(img)
    rgb_for_collision = canvas.copy()
    back_img, front_img = split_bar_layers(canvas, w_tiles, h_tiles)

    # Shared palette: quantize back+front stacked so both layers share banks.
    stacked = Image.new("RGB", (canvas.width, canvas.height * 2), TRANSPARENT)
    stacked.paste(back_img, (0, 0))
    stacked.paste(front_img, (0, canvas.height))

    print(
        f"quantizing {canvas.size} → {w_tiles}x{h_tiles} tiles, "
        f"{num_palettes} palettes (dual-layer bars)…"
    )
    tq = Tilequant(stacked, transparent_color=TRANSPARENT)
    indexed_stack = tq.convert(
        num_palettes=num_palettes,
        colors_per_palette=16,
        dithering_mode=DitheringMode.NONE,
        dithering_level=0.0,
    )
    assert indexed_stack.mode == "P"
    full_pal = indexed_stack.getpalette()
    assert full_pal is not None

    indexed_back = indexed_stack.crop((0, 0, canvas.width, canvas.height))
    indexed_front = indexed_stack.crop(
        (0, canvas.height, canvas.width, canvas.height * 2)
    )

    palettes: list[list[tuple[int, int, int]]] = []
    for p in range(num_palettes):
        bank: list[tuple[int, int, int]] = []
        for c in range(16):
            i = (p * 16 + c) * 3
            bank.append((full_pal[i], full_pal[i + 1], full_pal[i + 2]))
        palettes.append(bank)

    tile_list: list[bytes] = []
    tile_keys: dict[tuple[int, bytes], int] = {}

    def get_tile(pal: int, indices15: list[int]) -> int:
        raw = gba_encode_4bpp(indices15)
        key = (pal, raw)
        if key in tile_keys:
            return tile_keys[key]
        idx = len(tile_list) + 1
        tile_list.append(raw)
        tile_keys[key] = idx
        return idx

    # layer0 = front (BG2), layer1 = back (BG3)
    front_tm = indexed_to_tilemap(
        indexed_front, w_tiles, h_tiles, get_tile, allow_empty=True
    )
    back_tm = indexed_to_tilemap(
        indexed_back, w_tiles, h_tiles, get_tile, allow_empty=False
    )
    chunk_list, layer_maps = tilemaps_to_chunks(
        [front_tm, back_tm], w_tiles, h_tiles
    )
    layer0_chunks, layer1_chunks = layer_maps

    collision = build_collision(rgb_for_collision, w_tiles, h_tiles)
    w_chunks = w_tiles // CHUNK
    h_chunks = h_tiles // CHUNK

    out_stem.parent.mkdir(parents=True, exist_ok=True)
    write_bpl(Path(str(out_stem) + ".bpl"), palettes)
    write_bpc(Path(str(out_stem) + "c.bpc"), tile_list, chunk_list)
    write_bma(
        Path(str(out_stem) + "m.bma"),
        w_tiles,
        h_tiles,
        w_chunks,
        h_chunks,
        layer0_chunks,
        layer1_chunks,
        collision,
    )

    fg_chunks = sum(1 for c in layer0_chunks if c != 0)
    walkable = sum(1 for b in collision if not b)
    print(
        f"wrote {out_stem.name}.bpl / {out_stem.name}c.bpc / {out_stem.name}m.bma — "
        f"{len(tile_list)} tiles, {len(chunk_list)} chunks, "
        f"{w_tiles}x{h_tiles} camera, {walkable} walkable, "
        f"{fg_chunks} FG chunks (layer0)"
    )


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("png", type=Path)
    ap.add_argument(
        "-o",
        "--out-stem",
        type=Path,
        help="Output stem under data/map_bg (default: data/map_bg/T01P08)",
    )
    ap.add_argument(
        "--palettes",
        type=int,
        default=13,
        help="Number of 16-color BG palettes (max 13 for normal town maps; "
        "dual-layer café init allows 14)",
    )
    ap.add_argument(
        "--max-width",
        type=int,
        default=360,
        help="Downscale PNG width before tiling (keeps tile count under GBA limits)",
    )
    args = ap.parse_args()
    out = args.out_stem or (ROOT / "data" / "map_bg" / "T01P08")
    convert(args.png, out, num_palettes=args.palettes, max_width=args.max_width)
    return 0


if __name__ == "__main__":
    sys.exit(main())
