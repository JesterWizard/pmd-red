#!/usr/bin/env python3
"""Convert an Explorers of Sky ground map (MAP_BG/<name>.bpc/.bma/.bpl/.bpa)
into Rescue Team ground-map files (data/map_bg/<STEM>.bpl, <STEM>c.bpc,
<STEM>m.bma).

The conversion is lossless: EoS and RT both use 4bpp 8x8 tiles, 3x3-tile
chunks and 16-colour palettes, so tiles, palettes and chunk layouts are copied
rather than re-quantized.

  * Both EoS BPC layers (and frame 0 of their BPA tile animations) are merged
    into the single RT tile pool; both chunk sets into one RT chunk list.
  * EoS BMA layer1 (upper) -> RT BMA layer0, EoS layer0 (lower) -> RT layer1,
    matching the RT dual-layer convention used by Spinda's Cafe (layer0 = BG2,
    drawn in front of sprites; layer1 = BG3, behind them).
  * Maps with more than 1024 tiles are streamed by src/ground_bg_tile_stream.c,
    which treats tilemap bits 0-11 as a source tile id and has no flip bits;
    for those, flipped tiles are baked into the pool.
  * Palette animations are kept (RT's BPL has EoS's layout). On maps that fit
    VRAM, up to two animated BPAs keep their animation (RT BPA slots 0/1,
    written as <STEM>1.bpa / <STEM>2.bpa); streamed maps and further BPAs use
    frame 0.
  * Collision comes from the EoS BMA's first collision layer.

The EoS ROM is never copied into the repository; only the converted map files
are written. Usage:

    tools/convert_eos_ground_map.py EOS.nds d01p11b SKYBEACH [--render out.png]
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from skytemple_files.common.types.file_types import FileType

ROOT = Path(__file__).resolve().parents[1]
CHUNK = 3
MAX_PALETTES = 14          # SubStruct_52C.unk2 for dual-layer ground maps
VRAM_TILE_SLOTS = 1024     # SubStruct_52C.unk6
STREAM_MAX_TILES = 2048    # STREAM_MAX_SOURCE_TILES


def flip_tile(tile: bytes, fx: bool, fy: bool) -> bytes:
    px = []
    for b in tile:
        px.append(b & 0xF)
        px.append(b >> 4)
    rows = [px[r * 8:(r + 1) * 8] for r in range(8)]
    if fx:
        rows = [row[::-1] for row in rows]
    if fy:
        rows = rows[::-1]
    flat = [p for row in rows for p in row]
    return bytes(flat[i * 2] | (flat[i * 2 + 1] << 4) for i in range(32))


def load_eos(rom: ndspy.rom.NintendoDSRom, name: str):
    files = set()

    def walk(folder, prefix=""):
        for f in folder.files:
            files.add(prefix + f)
        for n, sub in folder.folders:
            walk(sub, prefix + n + "/")

    walk(rom.filenames)

    def pick(ext: str) -> str:
        for cand in (f"MAP_BG/{name}.{ext}", f"MAP_BG/{name[:-1]}.{ext}"):
            if cand in files:
                return cand
        raise SystemExit(f"no {ext} for {name}")

    bpc = FileType.BPC.deserialize(rom.getFileByName(pick("bpc")))
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{name}.bma"))
    bpl = FileType.BPL.deserialize(rom.getFileByName(pick("bpl")))
    bpas = []
    for slot in range(8):
        n = f"MAP_BG/{name}{slot + 1}.bpa"
        if n not in files:
            n = f"MAP_BG/{name[:-1]}{slot + 1}.bpa"
        bpas.append(FileType.BPA.deserialize(rom.getFileByName(n)) if n in files else None)
    return bpc, bma, bpl, bpas


def layer_tiles(bpc, layer: int, bpas) -> list[bytes]:
    """Tiles of one BPC layer (index 0 = null) followed by BPA frame-0 tiles."""
    tiles = list(bpc.layers[layer].tiles)
    for bpa in bpc.get_bpas_for_layer(layer, bpas):
        tiles += list(bpa.tiles_for_frame(0))
    return tiles


def convert(rom_path: Path, name: str, stem: str, render: Path | None) -> None:
    rom = ndspy.rom.NintendoDSRom.fromFile(str(rom_path))
    bpc, bma, bpl, bpas = load_eos(rom, name)

    # BMA layer -> BPC layer (skytemple: BMA layer0 is the LOWER layer, which
    # is BPC layer 1 when there are two BPC layers).
    if bpc.number_of_layers == 1:
        sources = [("lower", 0, bma.layer0)]
    else:
        sources = [("upper", 0, bma.layer1), ("lower", 1, bma.layer0)]

    # Pass 1: collect (tile bytes, flip) usages to decide on flip baking.
    raw_entries = 0
    for _, layer, _ in sources:
        raw_entries += len(layer_tiles(bpc, layer, bpas)) - 1
    # Dual-layer maps (conversion-table unk0 6) get 1024 VRAM tile slots;
    # single-layer maps use the default config with 0x380 slots.
    vram_slots = VRAM_TILE_SLOTS if len(sources) == 2 else 0x380
    bake_flips = raw_entries + 1 > vram_slots

    used_pals = set()
    pool: list[bytes] = [bytes(32)]
    pool_index: dict[bytes, int] = {bytes(32): 0}

    def pool_add(t: bytes) -> int:
        idx = pool_index.get(t)
        if idx is None:
            idx = len(pool)
            pool.append(t)
            pool_index[t] = idx
        return idx

    chunks: list[list[int]] = [[0] * 9]
    chunk_index: dict[tuple[int, ...], int] = {tuple([0] * 9): 0}
    rt_layers: dict[str, list[int]] = {}

    # Animated BPAs (non-streamed maps only): RT has two animated slots whose
    # tiles sit right after the static pool in VRAM (ground_bg.c), so their
    # tiles are not pooled; chunk entries point at slot positions, resolved
    # once the static pool size is known.
    anim_slots: list = []          # (bpa, n_tiles)
    layer_bpa_ranges: dict = {}    # layer -> [(first idx, bpa, slot or None)]
    for _, layer, _ in sources:
        first = len(bpc.layers[layer].tiles)
        ranges = []
        for bpa in bpc.get_bpas_for_layer(layer, bpas):
            slot = None
            if not bake_flips and bpa.number_of_frames > 1 and len(anim_slots) < 2:
                slot = len(anim_slots)
                anim_slots.append((bpa, bpa.number_of_tiles))
            ranges.append((first, bpa, slot))
            first += bpa.number_of_tiles
        layer_bpa_ranges[layer] = ranges

    def anim_ref(layer: int, idx: int):
        for first, bpa, slot in layer_bpa_ranges[layer]:
            if slot is not None and first <= idx < first + bpa.number_of_tiles:
                return slot, idx - first
        return None

    for label, layer, bma_layer in sources:
        tiles = layer_tiles(bpc, layer, bpas)
        tilemap = bpc.layers[layer].tilemap
        n_chunks = len(tilemap) // 9
        remap = [0] * n_chunks
        for c in range(1, n_chunks):
            out = []
            for e in tilemap[c * 9:(c + 1) * 9]:
                used_pals.add(e.pal_idx)
                t = bytes(tiles[e.idx]) if e.idx < len(tiles) else bytes(32)
                ref = anim_ref(layer, e.idx)
                if ref is not None:
                    out.append(("anim", ref[0], ref[1], (e.pal_idx << 12) | (e.flip_y << 11) | (e.flip_x << 10)))
                    continue
                if bake_flips:
                    t = flip_tile(t, e.flip_x, e.flip_y)
                    tid = pool_add(t)
                    entry = (e.pal_idx << 12) | tid
                else:
                    tid = pool_add(t)
                    entry = (e.pal_idx << 12) | (e.flip_y << 11) | (e.flip_x << 10) | tid
                out.append(entry)
            key = tuple(out)
            if key not in chunk_index:
                chunk_index[key] = len(chunks)
                chunks.append(out)
            remap[c] = chunk_index[key]
        rt_layers[label] = [remap[i] if i < n_chunks else 0 for i in bma_layer]

    n_tiles = len(pool)
    slot_base = [n_tiles, n_tiles + (anim_slots[0][1] if anim_slots else 0)]

    def resolve(entry):
        if isinstance(entry, tuple):
            _, slot, k, flags = entry
            return flags | (slot_base[slot] + k)
        return entry
    chunks = [[resolve(e) for e in ch] for ch in chunks]
    anim_tiles = sum(n for _, n in anim_slots)
    limit = STREAM_MAX_TILES if bake_flips else vram_slots - anim_tiles
    if n_tiles > limit:
        raise SystemExit(f"{name}: {n_tiles} tiles > {limit}")
    if (not bake_flips) and n_tiles > 1023:
        raise SystemExit(f"{name}: tile ids exceed 10 bits")
    n_pals = max(used_pals) + 1
    if n_pals > MAX_PALETTES:
        raise SystemExit(f"{name}: uses {n_pals} palettes > {MAX_PALETTES}")

    out_dir = ROOT / "data" / "map_bg"
    # BPL: u16 count, u16 anim flag, colours 1..15 of each palette, then (if
    # animated) one {s16 duration, s16 frames} per palette and the animation
    # frames (15 colours each) in palette order: the same layout as EoS.
    anims = []
    if bpl.has_palette_animation:
        frames = list(bpl.animation_palette)
        pos = 0
        for p, spec in enumerate(bpl.animation_specs):
            n = spec.number_of_frames
            if p < n_pals:
                anims.append((spec.duration_per_frame, n, frames[pos:pos + n]))
            pos += n
        if not any(n for _, n, _ in anims):
            anims = []
    bpl_data = bytearray(struct.pack("<HH", n_pals, 1 if anims else 0))
    for p in range(n_pals):
        pal = bpl.palettes[p]
        for ci in range(1, 16):
            r, g, b = pal[ci * 3:ci * 3 + 3]
            bpl_data += bytes((r, g, b, 0))
    if anims:
        for dur, n, _ in anims:
            bpl_data += struct.pack("<hh", dur if n else 0, n)
        for _, n, fr in anims:
            for f in fr:
                for ci in range(15):
                    r, g, b = f[ci * 3:ci * 3 + 3]
                    bpl_data += bytes((r, g, b, 0))
        print(f"{name}: palette animations " + ", ".join(f"pal {p}: {n}x{d}f" for p, (d, n, _) in enumerate(anims) if n))
    (out_dir / f"{stem}.bpl").write_bytes(bpl_data)

    # BPC: header, tiles 1..N-1, chunks 1..M-1.
    slot_tiles = [n for _, n in anim_slots] + [0] * (4 - len(anim_slots))
    bpc_data = bytearray(struct.pack("<8h", CHUNK, CHUNK, n_tiles, *slot_tiles, len(chunks)))
    for t in pool[1:]:
        bpc_data += t
    for ch in chunks[1:]:
        for entry in ch:
            bpc_data += struct.pack("<H", entry)
    if len(bpc_data) % 4:
        bpc_data += bytes(4 - len(bpc_data) % 4)
    (out_dir / f"{stem}c.bpc").write_bytes(bpc_data)

    # BPA (RT layout, as EoS): u16 tiles, u16 frames, u32 duration per frame,
    # then every frame's tiles, frame-major. Written as <STEM>1.bpa, <STEM>2.bpa.
    for i in range(2):
        f = out_dir / f"{stem}{i + 1}.bpa"
        if i < len(anim_slots):
            bpa, n = anim_slots[i]
            data = bytearray(struct.pack("<HH", n, bpa.number_of_frames))
            for fi in bpa.frame_info:
                data += struct.pack("<I", max(1, fi.duration_per_frame))
            for fr in range(bpa.number_of_frames):
                for t in bpa.tiles_for_frame(fr):
                    data += bytes(t)
            f.write_bytes(data)
            print(f"{name}: animated BPA slot {i}: {n} tiles x {bpa.number_of_frames} frames -> {f.name}")
        elif f.exists():
            f.unlink()

    # BMA: reuse the EoS model; RT layer0 = front (EoS upper), layer1 = back.
    rt = bma
    rt.unknown_data_block = None
    rt.unk6 = 0
    if "upper" in rt_layers:
        rt.number_of_layers = 2
        rt.layer0 = rt_layers["upper"]
        rt.layer1 = rt_layers["lower"]
    else:
        rt.number_of_layers = 1
        rt.layer0 = rt_layers["lower"]
        rt.layer1 = None
    if rt.number_of_collision_layers == 0 or rt.collision is None:
        rt.collision = [False] * (rt.map_width_camera * rt.map_height_camera)
    rt.number_of_collision_layers = 1
    rt.collision2 = None
    (out_dir / f"{stem}m.bma").write_bytes(FileType.BMA.serialize(rt))

    print(f"{name} -> {stem}: {n_tiles} tiles ({'streamed, flips baked' if bake_flips else 'VRAM'}), "
          f"{len(chunks)} chunks, {n_pals} palettes, "
          f"{rt.map_width_camera}x{rt.map_height_camera} tiles, {rt.number_of_layers} layer(s)")

    if render:
        render_rt(stem, render, vram_slots)


def render_rt(stem: str, out: Path, vram_slots: int = VRAM_TILE_SLOTS) -> None:
    """Render the written RT files back to a PNG (for checking against EoS)."""
    d = ROOT / "data" / "map_bg"
    bpl = d.joinpath(f"{stem}.bpl").read_bytes()
    n_pals = struct.unpack_from("<H", bpl, 0)[0]
    pals = []
    for p in range(n_pals):
        cols = [(0, 0, 0)]
        for ci in range(15):
            o = 4 + (p * 15 + ci) * 4
            cols.append(tuple(bpl[o:o + 3]))
        pals.append(cols)
    bpc = d.joinpath(f"{stem}c.bpc").read_bytes()
    hdr = struct.unpack_from("<8h", bpc, 0)
    n_tiles, n_chunks = hdr[2], hdr[7]
    tiles = [bytes(32)] + [bpc[16 + i * 32:16 + (i + 1) * 32] for i in range(n_tiles - 1)]
    off = 16 + (n_tiles - 1) * 32
    chunks = [[0] * 9] + [list(struct.unpack_from("<9H", bpc, off + i * 18)) for i in range(n_chunks - 1)]
    bma = FileType.BMA.deserialize(d.joinpath(f"{stem}m.bma").read_bytes())
    W, H = bma.map_width_camera * 8, bma.map_height_camera * 8
    img = Image.new("RGB", (W, H), (0, 0, 0))
    px = img.load()
    layers = [bma.layer1, bma.layer0] if bma.number_of_layers == 2 else [bma.layer0]
    for layer in layers:
        for ci, c in enumerate(layer):
            cx, cy = ci % bma.map_width_chunks, ci // bma.map_width_chunks
            for k, e in enumerate(chunks[c]):
                streamed = n_tiles > vram_slots
                tid = e & (0xFFF if streamed else 0x3FF)
                fx, fy, pal = (e >> 10) & 1, (e >> 11) & 1, e >> 12
                if streamed:
                    fx = fy = 0
                if tid == 0 or tid >= len(tiles):
                    continue  # null tile, or an animated BPA slot tile
                t = tiles[tid]
                tx, ty = cx * 3 + k % 3, cy * 3 + k // 3
                for i in range(64):
                    b = t[i // 2]
                    v = (b >> 4) if i & 1 else (b & 0xF)
                    if v == 0:
                        continue
                    x, y = i % 8, i // 8
                    if fx:
                        x = 7 - x
                    if fy:
                        y = 7 - y
                    X, Y = tx * 8 + x, ty * 8 + y
                    if X < W and Y < H:
                        px[X, Y] = pals[pal][v]
    img.save(out)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom", type=Path, help="Explorers of Sky (US) .nds")
    ap.add_argument("name", help="EoS MAP_BG name, e.g. d01p11b")
    ap.add_argument("stem", help="RT output stem under data/map_bg, e.g. SKYD0111B")
    ap.add_argument("--render", type=Path, help="also render the result to this PNG")
    args = ap.parse_args()
    convert(args.rom, args.name, args.stem, args.render)
    return 0


if __name__ == "__main__":
    sys.exit(main())
