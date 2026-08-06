#!/usr/bin/env python3
"""Convert a PNG into Rescue Team ground-map BPL / BPC / BMA assets.

RT BPC is raw 4bpp (not Sky AT4PX). BPL/BMA match skytemple-files layouts.
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
    # Optional 2-byte pad (retail files sometimes have it)
    if len(data) % 4:
        data += b"\x00" * (4 - (len(data) % 4))
    path.write_bytes(data)


def write_bma(
    path: Path,
    width_tiles: int,
    height_tiles: int,
    width_chunks: int,
    height_chunks: int,
    chunk_map: list[int],
    collision: list[bool],
) -> None:
    """Build BMA via skytemple model (NRL + collision RLE)."""
    template = FileType.BMA.deserialize(
        (ROOT / "data" / "map_bg" / "T01P06m.bma").read_bytes()
    )
    template.resize(width_chunks, height_chunks, width_tiles, height_tiles)
    template.number_of_layers = 1
    template.unk6 = 0
    template.number_of_collision_layers = 1
    template.layer1 = None
    template.unknown_data_block = None

    assert len(chunk_map) == width_chunks * height_chunks
    assert len(collision) == width_tiles * height_tiles
    for i, v in enumerate(chunk_map):
        template.layer0[i] = v
    for i, blocked in enumerate(collision):
        template.collision[i] = bool(blocked)
    path.write_bytes(FileType.BMA.serialize(template))


def luminance(rgb: tuple[int, int, int]) -> float:
    r, g, b = rgb
    return 0.2126 * r + 0.7152 * g + 0.0722 * b


# Spinda Café furniture on the downscaled 45×36 tile grid (max-width 360).
# Bars: counter tops players must not cross. Tables: round seating.
CAFE_BAR_RECTS = (
    # x0, y0, x1, y1 inclusive — left juice bar / right recycle bar
    (8, 8, 20, 11),
    (24, 8, 36, 11),
)
CAFE_TABLE_DISKS = (
    # cx, cy, radius in tiles
    (11, 18, 2),  # upper-left
    (15, 22, 2),  # lower-left
    (33, 18, 2),  # upper-right
    (29, 22, 2),  # lower-right
)
# Staff stand on/behind counters; keep their tiles walkable.
CAFE_NPC_WALKABLE = (
    (11, 11),  # Spinda
    (32, 11),  # Wynaut
    (35, 12),  # Wobbuffet
)


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
            # Near-black pad / void below the café — never walkable.
            if avg < 28:
                blocked.append(True)
                continue
            # Bright wood floor.
            if avg >= 95:
                blocked.append(False)
                continue
            # Mid-gray stairs in the south-center approach.
            cx0, cx1 = w_tiles // 2 - 5, w_tiles // 2 + 5
            if cx0 <= tx < cx1 and ty >= h_tiles - 10 and 40 <= avg < 95:
                blocked.append(False)
                continue
            # After vibrance boost, stair stone can read brighter — keep the
            # south-center stair column walkable whenever it isn't near-black.
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
    """Downscale (and lightly enrich) so tiles stay under the GBA 10-bit tile cap.

    Do not pre-posterize: Tilequant maps to the chosen palette count. Town maps
    only load up to 13 BG palettes (see gUnknown_8117324.unk2 in ground_map.c).
    """
    from PIL import ImageEnhance

    del target_colors  # reserved for callers / future budgets
    if img.width > max_width:
        h = int(round(img.height * (max_width / img.width)))
        img = img.resize((max_width, h), Image.Resampling.LANCZOS)
    # Mild vibrance — source art reads washed after GBA 4bpp + limited banks.
    img = ImageEnhance.Color(img).enhance(1.28)
    img = ImageEnhance.Contrast(img).enhance(1.12)
    return img


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
    # Pad to chunk-aligned tile grid.
    w_tiles = (img.width + TILE - 1) // TILE
    h_tiles = (img.height + TILE - 1) // TILE
    # Round up to multiple of 3
    w_tiles = (w_tiles + CHUNK - 1) // CHUNK * CHUNK
    h_tiles = (h_tiles + CHUNK - 1) // CHUNK * CHUNK
    canvas = Image.new("RGB", (w_tiles * TILE, h_tiles * TILE), (8, 8, 12))
    canvas.paste(img, (0, 0))
    rgb_for_collision = canvas.copy()

    print(f"quantizing {canvas.size} → {w_tiles}x{h_tiles} tiles, {num_palettes} palettes…")
    tq = Tilequant(canvas, transparent_color=(8, 8, 12))
    indexed = tq.convert(
        num_palettes=num_palettes,
        colors_per_palette=16,
        dithering_mode=DitheringMode.NONE,
        dithering_level=0.0,
    )
    assert indexed.mode == "P"
    full_pal = indexed.getpalette()
    assert full_pal is not None

    # Extract sub-palettes (16 RGB triples each). Color 0 of each bank = transparent.
    palettes: list[list[tuple[int, int, int]]] = []
    for p in range(num_palettes):
        bank: list[tuple[int, int, int]] = []
        for c in range(16):
            i = (p * 16 + c) * 3
            bank.append((full_pal[i], full_pal[i + 1], full_pal[i + 2]))
        palettes.append(bank)

    # Build unique tiles: key = (pal_index, 4bpp bytes)
    tile_list: list[bytes] = []  # index 0 in game = empty; our list is tiles 1..
    tile_keys: dict[tuple[int, bytes], int] = {}  # -> tile index (1-based)

    def get_tile(pal: int, indices15: list[int]) -> int:
        raw = gba_encode_4bpp(indices15)
        key = (pal, raw)
        if key in tile_keys:
            return tile_keys[key]
        idx = len(tile_list) + 1
        tile_list.append(raw)
        tile_keys[key] = idx
        return idx

    # Per-tile GBA tilemap entries across the map
    tilemap: list[list[int]] = [[0] * w_tiles for _ in range(h_tiles)]
    pix = indexed.load()

    for ty in range(h_tiles):
        for tx in range(w_tiles):
            raw_idx = []
            for row in range(TILE):
                for col in range(TILE):
                    raw_idx.append(pix[tx * TILE + col, ty * TILE + row])
            # Palette bank from mode of high nibbles (tilequant guarantees one bank/tile)
            banks = [i >> 4 for i in raw_idx]
            pal = max(set(banks), key=banks.count)
            local = [i & 0xF for i in raw_idx]
            # Force pixels from wrong banks to 0
            for i, b in enumerate(banks):
                if b != pal:
                    local[i] = 0
            tile_id = get_tile(pal, local)
            tilemap[ty][tx] = tile_id | (pal << 12)

    # Build unique chunks
    chunk_list: list[list[int]] = []
    chunk_keys: dict[tuple[int, ...], int] = {}
    w_chunks = w_tiles // CHUNK
    h_chunks = h_tiles // CHUNK
    chunk_map: list[int] = []

    for cy in range(h_chunks):
        for cx in range(w_chunks):
            entries = []
            for row in range(CHUNK):
                for col in range(CHUNK):
                    entries.append(tilemap[cy * CHUNK + row][cx * CHUNK + col])
            key = tuple(entries)
            if key in chunk_keys:
                cid = chunk_keys[key]
            else:
                cid = len(chunk_list) + 1
                chunk_list.append(list(entries))
                chunk_keys[key] = cid
            chunk_map.append(cid)

    collision = build_collision(rgb_for_collision, w_tiles, h_tiles)

    out_stem.parent.mkdir(parents=True, exist_ok=True)
    write_bpl(Path(str(out_stem) + ".bpl"), palettes)
    write_bpc(Path(str(out_stem) + "c.bpc"), tile_list, chunk_list)
    write_bma(
        Path(str(out_stem) + "m.bma"),
        w_tiles,
        h_tiles,
        w_chunks,
        h_chunks,
        chunk_map,
        collision,
    )

    walkable = sum(1 for b in collision if not b)
    print(
        f"wrote {out_stem.name}.bpl / {out_stem.name}c.bpc / {out_stem.name}m.bma — "
        f"{len(tile_list)} tiles, {len(chunk_list)} chunks, "
        f"{w_tiles}x{h_tiles} camera, {walkable} walkable tiles"
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
    ap.add_argument("--palettes", type=int, default=13,
                    help="Number of 16-color BG palettes (max 13 for normal town maps)")
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
