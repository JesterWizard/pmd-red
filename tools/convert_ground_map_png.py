#!/usr/bin/env python3
"""Convert a PNG into Rescue Team ground-map BPL / BPC / BMA assets.

RT BPC is raw 4bpp (not Sky AT4PX). BPL/BMA match skytemple-files layouts.

Spinda Café emits a dual-layer BMA: layer0 (BG2) = bar fronts in front of
Pokémon sprites; layer1 (BG3) = room behind sprites. Requires MAP unk0=6/7/9.
Native 520×400 exceeds the 1024 VRAM tile cap; ground_bg_tile_stream remaps
the visible window at runtime so the map need not be downscaled.
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


# BPL hasPalAnimations high marker: 8bpp exact 256-color café palette.
BPL_FLAG_8BPP = 0x8B


def gba_encode_4bpp(indices: list[int]) -> bytes:
    """Encode 64 palette indices (0–15) as GBA 4bpp (32 bytes)."""
    out = bytearray(32)
    for i in range(32):
        lo = indices[i * 2] & 0xF
        hi = indices[i * 2 + 1] & 0xF
        out[i] = lo | (hi << 4)
    return bytes(out)


def gba_encode_8bpp(indices: list[int]) -> bytes:
    """Encode 64 palette indices (0–255) as GBA 8bpp (64 bytes)."""
    assert len(indices) == 64
    return bytes(i & 0xFF for i in indices)


def write_bpl(path: Path, palettes: list[list[tuple[int, int, int]]]) -> None:
    """Write RT BPL: u16 count, u16 anim=0, then 15×RGBA8 per palette (skip color 0)."""
    data = bytearray()
    data += struct.pack("<HH", len(palettes), 0)
    for pal in palettes:
        assert len(pal) >= 16
        for r, g, b in pal[1:16]:
            data += bytes((r & 0xFF, g & 0xFF, b & 0xFF, 0))
    path.write_bytes(data)


def write_bpl_8bpp(path: Path, colors: list[tuple[int, int, int]]) -> None:
    """Write 8bpp exact palette: u16 numColors, u16 flags=0x008B, then RGBA8×N (incl. index 0)."""
    assert 1 <= len(colors) <= 256
    data = bytearray()
    data += struct.pack("<HH", len(colors), BPL_FLAG_8BPP)
    for r, g, b in colors:
        data += bytes((r & 0xFF, g & 0xFF, b & 0xFF, 0))
    path.write_bytes(data)


def write_bpc(
    path: Path,
    tiles: list[bytes],
    chunks: list[list[int]],
    *,
    tile_bytes: int = 32,
) -> None:
    """Write RT BPC header + raw tiles + raw chunk tilemaps.

    tiles: tile 1..N (tile 0 implied empty), each tile_bytes long (32=4bpp, 64=8bpp)
    chunks: chunk 1..M, each a list of 9 GBA tilemap u16s (chunk 0 implied empty)
    """
    num_tiles = len(tiles) + 1
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
    for t in tiles:
        assert len(t) == tile_bytes
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


# Spinda Café furniture — authored for native 520×400 → 65×50 tiles
# (padded camera 66×51). Runtime streams VRAM tiles for the visible region.
CAFE_BAR_RECTS = (
    # Full counter through approach row. Player stands on y=24;
    # talk proxies on solid y=22 handle A-range.
    (12, 12, 28, 22),
    (34, 12, 52, 22),
)
# South counter fascia → BMA layer0 (BG2), in front of Pokémon sprites.
# Left bar: drop Spinda's rightmost two fascia tiles (orange/green jars).
CAFE_BAR_FG_RECTS = (
    (12, 16, 24, 16),
    (34, 16, 52, 16),
)
# Bottom lip only — taller FG overlaps café staff sprites.
CAFE_BAR_FG_PIXELS = 4
CAFE_TABLE_DISKS = (
    (16, 26, 3),
    (22, 30, 3),
    (48, 26, 3),
    (42, 30, 3),
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
    """Optionally downscale. Café art stays native (520) and streams VRAM tiles."""
    del target_colors
    if img.width > max_width:
        # Integer-friendly NEAREST keeps palette-like edges; avoid LANCZOS blur.
        h = int(round(img.height * (max_width / img.width)))
        img = img.resize((max_width, h), Image.Resampling.NEAREST)
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


def color_dist2(a: tuple[int, int, int], b: tuple[int, int, int]) -> int:
    return (a[0] - b[0]) ** 2 + (a[1] - b[1]) ** 2 + (a[2] - b[2]) ** 2


def nearest_color_index(
    rgb: tuple[int, int, int], bank: list[tuple[int, int, int]], *, skip0: bool = True
) -> int:
    """Index of nearest color in bank (optionally skipping transparent slot 0)."""
    best_i = 1 if skip0 else 0
    best_d = 1 << 30
    start = 1 if skip0 else 0
    for i in range(start, len(bank)):
        d = color_dist2(rgb, bank[i])
        if d < best_d:
            best_d = d
            best_i = i
    return best_i


def soft_merge_non_cooccurring(
    img: Image.Image,
    *,
    transparent: tuple[int, int, int] = TRANSPARENT,
    max_dist2: int = 100,
) -> Image.Image:
    """Merge near colors that never share an 8×8 tile.

    Frees palette slots for duplication without destroying grain (co-occurring
    near-yellows are left alone). Returns a new RGB image.
    """
    if img.mode != "RGB":
        img = img.convert("RGB")
    w, h = img.size
    w_tiles = (w + TILE - 1) // TILE
    h_tiles = (h + TILE - 1) // TILE
    px = img.load()

    colors: list[tuple[int, int, int]] = []
    color_id: dict[tuple[int, int, int], int] = {transparent: -1}
    freq: list[int] = []
    for y in range(h):
        for x in range(w):
            rgb = px[x, y]
            if rgb == transparent:
                continue
            if rgb in color_id:
                freq[color_id[rgb]] += 1
                continue
            color_id[rgb] = len(colors)
            colors.append(rgb)
            freq.append(1)

    co: list[set[int]] = [set() for _ in range(len(colors))]
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            s: list[int] = []
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    rgb = px[x, y]
                    if rgb == transparent:
                        continue
                    s.append(color_id[rgb])
            # unique ids in tile
            uniq = list(set(s))
            for i in range(len(uniq)):
                for j in range(i + 1, len(uniq)):
                    a, b = uniq[i], uniq[j]
                    co[a].add(b)
                    co[b].add(a)

    parent = list(range(len(colors)))

    def find(a: int) -> int:
        while parent[a] != a:
            parent[a] = parent[parent[a]]
            a = parent[a]
        return a

    merges = 0
    for i in range(len(colors)):
        for j in range(i + 1, len(colors)):
            if j in co[i]:
                continue
            if color_dist2(colors[i], colors[j]) > max_dist2:
                continue
            ri, rj = find(i), find(j)
            if ri != rj:
                parent[rj] = ri
                merges += 1

    comps: dict[int, list[int]] = {}
    for i in range(len(colors)):
        comps.setdefault(find(i), []).append(i)
    rep = {
        r: colors[max(members, key=lambda i: freq[i])]
        for r, members in comps.items()
    }
    if merges:
        print(
            f"  soft-merge: {len(colors)} → {len(comps)} colors "
            f"(dist²≤{max_dist2}, {merges} merges)"
        )

    out = Image.new("RGB", (w, h))
    out_px = out.load()
    for y in range(h):
        for x in range(w):
            rgb = px[x, y]
            if rgb == transparent:
                out_px[x, y] = transparent
            else:
                out_px[x, y] = rep[find(color_id[rgb])]
    return out


def reduce_colors_to_limit(
    counts: dict[tuple[int, int, int], int],
    limit: int,
) -> list[tuple[int, int, int]]:
    """Merge closest colors until ≤ limit, preferring the more frequent survivor."""
    items = dict(counts)
    if len(items) <= limit:
        return sorted(items.keys(), key=lambda c: -items[c])
    while len(items) > limit:
        cols = list(items)
        best_d = 1 << 30
        best_a = cols[0]
        best_b = cols[1]
        for i, a in enumerate(cols):
            for b in cols[i + 1 :]:
                d = color_dist2(a, b)
                if d < best_d:
                    best_d = d
                    best_a, best_b = a, b
        if items[best_a] >= items[best_b]:
            keep, drop = best_a, best_b
        else:
            keep, drop = best_b, best_a
        items[keep] += items.pop(drop)
    return sorted(items.keys(), key=lambda c: -items[c])


def pack_tilequant_exact_colors(
    img: Image.Image,
    num_palettes: int,
    *,
    transparent: tuple[int, int, int] = TRANSPARENT,
) -> tuple[Image.Image, list[list[tuple[int, int, int]]]]:
    """Tilequant assigns each 8×8 tile to a bank; rebuild banks from exact source RGB.

    Tilequant's own clustered colors smear near-neighbors (flat tabletops). Its
    *bank assignment* is still valuable: every tile is guaranteed to fit one
    bank. We discard Tilequant's palette and refill each bank with the exact
    source colors that appear in its tiles (merging only within a bank when
    that bank sees more than 15 unique colors).
    """
    if img.mode != "RGB":
        img = img.convert("RGB")
    w, h = img.size
    w_tiles = (w + TILE - 1) // TILE
    h_tiles = (h + TILE - 1) // TILE

    tq = Tilequant(img, transparent_color=transparent)
    indexed_tq = tq.convert(
        num_palettes=num_palettes,
        colors_per_palette=16,
        dithering_mode=DitheringMode.NONE,
        dithering_level=0.0,
    )
    assert indexed_tq.mode == "P"
    tq_px = indexed_tq.load()
    px = img.load()

    tile_bank = [0] * (w_tiles * h_tiles)
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            votes: list[int] = []
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    idx = tq_px[x, y]
                    if (idx & 0xF) != 0:
                        votes.append(idx >> 4)
            if votes:
                tile_bank[ty * w_tiles + tx] = max(set(votes), key=votes.count)

    bank_counts: list[dict[tuple[int, int, int], int]] = [
        {} for _ in range(num_palettes)
    ]
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            b = tile_bank[ty * w_tiles + tx]
            counts = bank_counts[b]
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    rgb = px[x, y]
                    if rgb == transparent:
                        continue
                    counts[rgb] = counts.get(rgb, 0) + 1

    palettes: list[list[tuple[int, int, int]]] = []
    overflow = 0
    for b in range(num_palettes):
        chosen = reduce_colors_to_limit(bank_counts[b], 15)
        if len(bank_counts[b]) > 15:
            overflow += 1
        bank = [transparent] + list(chosen)
        while len(bank) < 16:
            bank.append(transparent)
        palettes.append(bank[:16])
    if overflow:
        print(
            f"  tilequant-exact: {overflow}/{num_palettes} banks needed "
            f"in-bank merges (>15 source colors)"
        )
    else:
        print(
            f"  tilequant-exact: all {num_palettes} banks fit exact source colors"
        )

    color_indices: dict[tuple[int, int, int], list[int]] = {transparent: [0]}
    for b in range(num_palettes):
        for local in range(1, 16):
            rgb = palettes[b][local]
            if rgb == transparent:
                continue
            color_indices.setdefault(rgb, []).append(b * 16 + local)

    out = Image.new("P", (w, h))
    flat_pal: list[int] = []
    for b in range(num_palettes):
        for c in range(16):
            r, g, bl = palettes[b][c]
            flat_pal.extend((r, g, bl))
    while len(flat_pal) < 256 * 3:
        flat_pal.extend(transparent)
    out.putpalette(flat_pal)

    out_px = out.load()
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            b = tile_bank[ty * w_tiles + tx]
            bank = palettes[b]
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    rgb = px[x, y]
                    if rgb == transparent:
                        out_px[x, y] = 0
                        continue
                    chosen = None
                    for gi in color_indices.get(rgb, ()):
                        if gi >> 4 == b:
                            chosen = gi
                            break
                    if chosen is None:
                        chosen = b * 16 + nearest_color_index(rgb, bank)
                    out_px[x, y] = chosen

    return out, palettes


def pack_exact_colors_to_indexed(
    img: Image.Image,
    num_palettes: int,
    *,
    transparent: tuple[int, int, int] = TRANSPARENT,
) -> tuple[Image.Image, list[list[tuple[int, int, int]]]]:
    """Pack an RGB image into GBA multi-bank indexed form without inventing colors.

    When the source already has ≤ num_palettes×15 unique colors (common for
    authored pixel art), Tilequant's clustering can merge near-neighbors (e.g.
    tabletop wood grain → flat fill). This packer keeps exact RGB values.

    Strategy:
      1. Give every color exactly one primary bank (tile-aware greedy).
      2. Spend leftover slots on *cheapest* duplications first so as many
         8×8 tiles as possible become expressible in a single bank.
      3. Rasterize each tile with a bank that holds all of its colors.
    """
    if img.mode != "RGB":
        img = img.convert("RGB")
    w, h = img.size
    w_tiles = (w + TILE - 1) // TILE
    h_tiles = (h + TILE - 1) // TILE
    px = img.load()

    colors: list[tuple[int, int, int]] = []
    color_id: dict[tuple[int, int, int], int] = {transparent: -1}
    for y in range(h):
        for x in range(w):
            rgb = px[x, y]
            if rgb in color_id:
                continue
            color_id[rgb] = len(colors)
            colors.append(rgb)

    slots = num_palettes * 15
    if len(colors) > slots:
        raise ValueError(
            f"too many exact colors ({len(colors)} > {slots}); use Tilequant"
        )

    tile_sets: list[frozenset[int]] = []
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            counts: dict[int, int] = {}
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    rgb = px[x, y]
                    if rgb == transparent:
                        continue
                    cid = color_id[rgb]
                    counts[cid] = counts.get(cid, 0) + 1
            if len(counts) > 15:
                kept = sorted(counts, key=lambda c: counts[c], reverse=True)[:15]
                tile_sets.append(frozenset(kept))
            else:
                tile_sets.append(frozenset(counts))

    banks: list[list[int]] = [[] for _ in range(num_palettes)]
    in_bank: list[set[int]] = [set() for _ in range(num_palettes)]
    color_bank: dict[int, int] = {}

    def add_primary(b: int, cid: int) -> bool:
        if cid in color_bank:
            return color_bank[cid] == b
        if len(banks[b]) >= 15:
            return False
        banks[b].append(cid)
        in_bank[b].add(cid)
        color_bank[cid] = b
        return True

    def add_dup(b: int, cid: int) -> bool:
        if cid in in_bank[b]:
            return True
        if len(banks[b]) >= 15:
            return False
        banks[b].append(cid)
        in_bank[b].add(cid)
        return True

    def missing(b: int, s: frozenset[int] | set[int]) -> list[int]:
        return [c for c in s if c not in in_bank[b]]

    # Phase 1: primary homes only.
    order = sorted(range(len(tile_sets)), key=lambda i: len(tile_sets[i]), reverse=True)
    for ti in order:
        s = tile_sets[ti]
        if not s:
            continue
        assigned = [c for c in s if c in color_bank]
        unassigned = [c for c in s if c not in color_bank]
        if not unassigned:
            continue
        homes = {color_bank[c] for c in assigned}
        if len(homes) == 1:
            b = next(iter(homes))
            if len(banks[b]) + len(unassigned) <= 15:
                for c in unassigned:
                    add_primary(b, c)
        elif len(homes) == 0:
            for b in sorted(range(num_palettes), key=lambda i: len(banks[i])):
                if len(banks[b]) + len(unassigned) <= 15:
                    for c in unassigned:
                        add_primary(b, c)
                    break

    for cid in range(len(colors)):
        if cid in color_bank:
            continue
        for b in sorted(range(num_palettes), key=lambda i: len(banks[i])):
            if add_primary(b, cid):
                break
        else:
            raise RuntimeError(f"no room for color {cid}; slots exhausted")

    def remap_error(b: int, s: frozenset[int]) -> int:
        err = 0
        for c in s:
            if c in in_bank[b]:
                continue
            best_d = 1 << 30
            for o in in_bank[b]:
                d = color_dist2(colors[c], colors[o])
                if d < best_d:
                    best_d = d
            err += best_d if in_bank[b] else 1 << 20
        return err

    # Phase 2: cheapest duplication first; among equal cost, fix highest-error
    # tiles (plates/whites) before low-error near-neighbor remaps.
    while True:
        best: tuple[int, int, int, list[int]] | None = None
        for s in tile_sets:
            if not s:
                continue
            if any(not missing(b, s) for b in range(num_palettes)):
                continue
            for b in range(num_palettes):
                miss = missing(b, s)
                room = 15 - len(banks[b])
                if not miss or len(miss) > room:
                    continue
                err = remap_error(b, s)
                cand = (len(miss), -err, b, miss)
                if best is None or cand[:2] < best[:2]:
                    best = cand
        if best is None:
            break
        _, _, b, miss = best
        for c in miss:
            add_dup(b, c)

    unresolved = sum(
        1
        for s in tile_sets
        if s and all(missing(b, s) for b in range(num_palettes))
    )
    if unresolved:
        print(
            f"  warning: {unresolved} tiles still span banks "
            f"(will nearest-remap within chosen bank)"
        )

    used = sum(len(b) for b in banks)
    uniq = len({c for b in banks for c in b})
    print(
        f"  palette fill {used}/{slots} slots, {uniq} unique colors, "
        f"{used - uniq} duplicates"
    )

    palettes: list[list[tuple[int, int, int]]] = []
    color_indices: dict[tuple[int, int, int], list[int]] = {transparent: [0]}
    for b in range(num_palettes):
        bank_rgb = [transparent] + [(0, 0, 0)] * 15
        for local, cid in enumerate(banks[b]):
            rgb = colors[cid]
            bank_rgb[local + 1] = rgb
            color_indices.setdefault(rgb, []).append(b * 16 + (local + 1))
        for local in range(len(banks[b]) + 1, 16):
            bank_rgb[local] = transparent
        palettes.append(bank_rgb)

    tile_bank = [0] * len(tile_sets)
    for ti, s in enumerate(tile_sets):
        best_b, best_miss = 0, 1 << 30
        for b in range(num_palettes):
            m = len(missing(b, s))
            if m < best_miss:
                best_miss = m
                best_b = b
                if m == 0:
                    break
        tile_bank[ti] = best_b

    out = Image.new("P", (w, h))
    flat_pal: list[int] = []
    for b in range(num_palettes):
        for c in range(16):
            r, g, bl = palettes[b][c]
            flat_pal.extend((r, g, bl))
    while len(flat_pal) < 256 * 3:
        flat_pal.extend(transparent)
    out.putpalette(flat_pal)

    out_px = out.load()
    for ty in range(h_tiles):
        for tx in range(w_tiles):
            b = tile_bank[ty * w_tiles + tx]
            bank = palettes[b]
            for oy in range(TILE):
                for ox in range(TILE):
                    x = tx * TILE + ox
                    y = ty * TILE + oy
                    if x >= w or y >= h:
                        continue
                    rgb = px[x, y]
                    if rgb == transparent:
                        out_px[x, y] = 0
                        continue
                    chosen = None
                    for gi in color_indices.get(rgb, ()):
                        if gi >> 4 == b:
                            chosen = gi
                            break
                    if chosen is None:
                        chosen = b * 16 + nearest_color_index(rgb, bank)
                    out_px[x, y] = chosen

    return out, palettes


def indexed_to_tilemap(
    indexed: Image.Image,
    w_tiles: int,
    h_tiles: int,
    get_tile,
    *,
    allow_empty: bool,
    palettes: list[list[tuple[int, int, int]]] | None = None,
) -> list[list[int]]:
    """Build per-tile GBA tilemap entries from an indexed (mode P) image.

    Cross-bank pixels are remapped to the nearest color in the chosen bank
    (not zeroed — zeroing punched holes / flat blocks into furniture).
    """
    tilemap = [[0] * w_tiles for _ in range(h_tiles)]
    pix = indexed.load()
    full_pal = indexed.getpalette() or []

    def idx_rgb(idx: int) -> tuple[int, int, int]:
        i = idx * 3
        return (full_pal[i], full_pal[i + 1], full_pal[i + 2])

    for ty in range(h_tiles):
        for tx in range(w_tiles):
            raw_idx = []
            for row in range(TILE):
                for col in range(TILE):
                    raw_idx.append(pix[tx * TILE + col, ty * TILE + row])
            # Ignore transparent (index 0) when voting — a tile with many
            # clear pixels would otherwise pick bank 0 and nearest-remap the
            # furniture colors into a flat wrong fill.
            opaque = [i for i in raw_idx if (i & 0xF) != 0]
            banks = [i >> 4 for i in opaque] if opaque else [0]
            pal = max(set(banks), key=banks.count)
            local = [i & 0xF for i in raw_idx]
            if palettes is not None:
                bank = palettes[pal]
                for i, idx in enumerate(raw_idx):
                    if (idx & 0xF) == 0:
                        local[i] = 0
                    elif (idx >> 4) != pal:
                        local[i] = nearest_color_index(idx_rgb(idx), bank)
            else:
                for i, idx in enumerate(raw_idx):
                    if (idx >> 4) != pal and (idx & 0xF) != 0:
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
    num_palettes: int = 14,
    max_width: int = 520,
    bpp: int = 4,
) -> None:
    if bpp == 8:
        convert_8bpp(png, out_stem, max_width=max_width)
        return

    target_colors = num_palettes * 16
    img = preprocess_for_rt_limits(
        Image.open(png).convert("RGB"), max_width, target_colors
    )
    canvas, w_tiles, h_tiles = pad_to_chunk_grid(img)
    rgb_for_collision = canvas.copy()
    back_img, front_img = split_bar_layers(canvas, w_tiles, h_tiles)

    # Shared palette across both layers (stacked vertically).
    stacked = Image.new("RGB", (canvas.width, canvas.height * 2), TRANSPARENT)
    stacked.paste(back_img, (0, 0))
    stacked.paste(front_img, (0, canvas.height))

    print(
        f"quantizing {canvas.size} → {w_tiles}x{h_tiles} tiles, "
        f"{num_palettes} palettes (dual-layer bars)…"
    )

    # Soft-merge near colors that never share a tile (frees dup slots), then
    # exact-pack so co-occurring grain/plate colors stay distinct. Pure
    # Tilequant flattens tabletops; exact-pack alone remaps plates/shelves
    # when banks fill up.
    merged = soft_merge_non_cooccurring(
        stacked, transparent=TRANSPARENT, max_dist2=100
    )
    try:
        indexed_stack, palettes = pack_exact_colors_to_indexed(
            merged, num_palettes, transparent=TRANSPARENT
        )
        print(f"  exact-color pack OK ({num_palettes} banks)")
    except ValueError as exc:
        print(f"  exact pack skipped ({exc}); falling back to tilequant-exact")
        indexed_stack, palettes = pack_tilequant_exact_colors(
            stacked, num_palettes, transparent=TRANSPARENT
        )

    assert indexed_stack.mode == "P"
    indexed_back = indexed_stack.crop((0, 0, canvas.width, canvas.height))
    indexed_front = indexed_stack.crop(
        (0, canvas.height, canvas.width, canvas.height * 2)
    )

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
        indexed_front,
        w_tiles,
        h_tiles,
        get_tile,
        allow_empty=True,
        palettes=palettes,
    )
    back_tm = indexed_to_tilemap(
        indexed_back,
        w_tiles,
        h_tiles,
        get_tile,
        allow_empty=False,
        palettes=palettes,
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
    write_bpc(Path(str(out_stem) + "c.bpc"), tile_list, chunk_list, tile_bytes=32)
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


def convert_8bpp(png: Path, out_stem: Path, max_width: int = 520) -> None:
    """Exact 8bpp / 256-color convert — 100% pixel match to the source PNG."""
    img = Image.open(png).convert("RGB")
    if img.width > max_width:
        raise SystemExit(
            f"8bpp café convert refuses downscale ({img.width} > {max_width})"
        )
    canvas, w_tiles, h_tiles = pad_to_chunk_grid(img)
    rgb_for_collision = canvas.copy()
    back_img, front_img = split_bar_layers(canvas, w_tiles, h_tiles)

    # Exact palette from both layers (transparent = index 0).
    color_to_idx: dict[tuple[int, int, int], int] = {TRANSPARENT: 0}
    colors: list[tuple[int, int, int]] = [TRANSPARENT]

    def add_color(rgb: tuple[int, int, int]) -> int:
        if rgb in color_to_idx:
            return color_to_idx[rgb]
        if len(colors) >= 256:
            raise SystemExit(f"too many colors for 8bpp ({len(colors)}+)")
        idx = len(colors)
        color_to_idx[rgb] = idx
        colors.append(rgb)
        return idx

    for layer in (back_img, front_img):
        px = layer.load()
        for y in range(layer.height):
            for x in range(layer.width):
                add_color(px[x, y])

    print(
        f"8bpp exact {canvas.size} → {w_tiles}x{h_tiles} tiles, "
        f"{len(colors)} colors (dual-layer bars)…"
    )

    tile_list: list[bytes] = []
    tile_keys: dict[bytes, int] = {}

    def get_tile_8bpp(indices: list[int]) -> int:
        raw = gba_encode_8bpp(indices)
        if raw in tile_keys:
            return tile_keys[raw]
        idx = len(tile_list) + 1
        tile_list.append(raw)
        tile_keys[raw] = idx
        return idx

    def layer_to_tilemap(layer: Image.Image, *, allow_empty: bool) -> list[list[int]]:
        px = layer.load()
        tilemap = [[0] * w_tiles for _ in range(h_tiles)]
        for ty in range(h_tiles):
            for tx in range(w_tiles):
                idxs: list[int] = []
                for row in range(TILE):
                    for col in range(TILE):
                        idxs.append(color_to_idx[px[tx * TILE + col, ty * TILE + row]])
                if allow_empty and all(i == 0 for i in idxs):
                    tilemap[ty][tx] = 0
                    continue
                tilemap[ty][tx] = get_tile_8bpp(idxs)  # palette nibble 0
        return tilemap

    front_tm = layer_to_tilemap(front_img, allow_empty=True)
    back_tm = layer_to_tilemap(back_img, allow_empty=False)
    chunk_list, layer_maps = tilemaps_to_chunks(
        [front_tm, back_tm], w_tiles, h_tiles
    )
    layer0_chunks, layer1_chunks = layer_maps

    # Verify composite(back, front) matches the source PNG exactly.
    src = Image.open(png).convert("RGB")
    sw, sh = src.size
    spx = src.load()
    bpx = back_img.load()
    fpx = front_img.load()
    mismatches = 0
    for y in range(sh):
        for x in range(sw):
            got = fpx[x, y] if fpx[x, y] != TRANSPARENT else bpx[x, y]
            if got != spx[x, y]:
                mismatches += 1
    if mismatches:
        raise SystemExit(
            f"8bpp convert not 1:1: {mismatches} pixels differ from PNG "
            f"(layer split / pad bug)"
        )
    print("  exact PNG match OK (100%)")

    collision = build_collision(rgb_for_collision, w_tiles, h_tiles)
    w_chunks = w_tiles // CHUNK
    h_chunks = h_tiles // CHUNK

    out_stem.parent.mkdir(parents=True, exist_ok=True)
    write_bpl_8bpp(Path(str(out_stem) + ".bpl"), colors)
    write_bpc(
        Path(str(out_stem) + "c.bpc"), tile_list, chunk_list, tile_bytes=64
    )
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
        f"{len(tile_list)} 8bpp tiles, {len(chunk_list)} chunks, "
        f"{w_tiles}x{h_tiles} camera, {walkable} walkable, "
        f"{fg_chunks} FG chunks (layer0), {len(colors)} colors"
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
        default=14,
        help="Number of 16-color BG palettes (4bpp only)",
    )
    ap.add_argument(
        "--max-width",
        type=int,
        default=520,
        help="Max PNG width before tiling",
    )
    ap.add_argument(
        "--bpp",
        type=int,
        choices=(4, 8),
        default=8,
        help="4 = multi-bank 4bpp (lossy); 8 = exact 256-color (café default)",
    )
    args = ap.parse_args()
    out = args.out_stem or (ROOT / "data" / "map_bg" / "T01P08")
    convert(
        args.png,
        out,
        num_palettes=args.palettes,
        max_width=args.max_width,
        bpp=args.bpp,
    )
    return 0


if __name__ == "__main__":
    sys.exit(main())
