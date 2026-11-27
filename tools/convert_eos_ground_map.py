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
    which treats tilemap bits 0-11 as a source tile id (up to 4096 tiles in the
    sky build) and has no flip bits; for those, flipped tiles are baked into
    the pool.
  * Palette animations are kept (RT's BPL has EoS's layout) unless
    --no-palette-animation. On maps that fit
    VRAM, up to two animated BPAs keep their animation (RT BPA slots 0/1,
    written as data/map_bg_anim/<STEM>1.bpa / <STEM>2.bpa); streamed maps and further BPAs use
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
STREAM_MAX_TILES = 4096    # GROUND_STREAM_MAX_SOURCE_TILES (sky build; 12-bit ids)


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


def convert(rom_path: Path, name: str, stem: str, render: Path | None,
            palette_animation: bool = True) -> None:
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
    if bpl.has_palette_animation and palette_animation:
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
        f = ROOT / "data" / "map_bg_anim" / f"{stem}{i + 1}.bpa"  # raw, not LZ
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
    render_rt_image(stem).save(out)


def render_rt_image(bpl: str, bpc: str | None = None, bma: str | None = None,
                    bpas: tuple = (), frame: int = 0) -> Image.Image:
    """Render RT ground-map files the way the game draws them: the BPL
    `bpl`.bpl, the BPC `bpc`c.bpc, the BMA `bma`m.bma (each defaults to
    `bpl`) and the animated BPA files `bpas` (names under data/map_bg_anim,
    without .bpa; default <bpl>1, <bpl>2 where the BPC has those slots) at
    animation `frame`. Back layer first, then the front layer; colour 0 is
    transparent, the backdrop black."""
    import numpy as np
    d = ROOT / "data" / "map_bg"
    raw = d.joinpath(f"{bpl}.bpl").read_bytes()
    n_pals = struct.unpack_from("<H", raw, 0)[0]
    pals = np.zeros((16, 16, 3), np.uint8)
    for p in range(n_pals):
        for ci in range(15):
            o = 4 + (p * 15 + ci) * 4
            pals[p, ci + 1] = tuple(raw[o:o + 3])
    data = d.joinpath(f"{bpc or bpl}c.bpc").read_bytes()
    hdr = struct.unpack_from("<8h", data, 0)
    n_tiles, slot_tiles, n_chunks = hdr[2], hdr[3:7], hdr[7]
    tiles = [bytes(32)] + [data[16 + i * 32:16 + (i + 1) * 32] for i in range(n_tiles - 1)]
    off = 16 + (n_tiles - 1) * 32
    chunks = [[0] * 9] + [list(struct.unpack_from("<9H", data, off + i * 18)) for i in range(n_chunks - 1)]
    anim_dir = ROOT / "data" / "map_bg_anim"
    names = list(bpas) or [f"{bpl}{k + 1}" for k in range(4) if slot_tiles[k]]
    for k, n in enumerate(names):
        if not slot_tiles[k]:
            break
        a = anim_dir.joinpath(f"{n}.bpa").read_bytes()
        nt, nf = struct.unpack_from("<HH", a, 0)
        o = 4 + 4 * nf + (frame % nf) * nt * 32
        tiles += [a[o + t * 32:o + (t + 1) * 32] for t in range(nt)]
    m = FileType.BMA.deserialize(d.joinpath(f"{bma or bpl}m.bma").read_bytes())
    # dual-layer maps get 1024 VRAM tile slots, single-layer 0x380; past
    # that the map is streamed: 12-bit tile ids, no flip bits
    streamed = n_tiles > (VRAM_TILE_SLOTS if m.number_of_layers == 2 else 0x380)
    tile_px = np.zeros((len(tiles), 8, 8), np.uint8)
    for t, b in enumerate(tiles):
        v = np.frombuffer(b, np.uint8)
        tile_px[t] = np.stack([v & 0xF, v >> 4], axis=1).reshape(8, 8)
    W, H = m.map_width_chunks * 24, m.map_height_chunks * 24
    img = np.zeros((H, W, 3), np.uint8)
    layers = [m.layer1, m.layer0] if m.number_of_layers == 2 else [m.layer0]
    for layer in layers:
        for ci, c in enumerate(layer):
            cx, cy = ci % m.map_width_chunks, ci // m.map_width_chunks
            for k, e in enumerate(chunks[c]):
                tid = e & (0xFFF if streamed else 0x3FF)
                if tid == 0 or tid >= len(tiles):
                    continue
                t = tile_px[tid]
                if not streamed:
                    if e & 0x400:
                        t = t[:, ::-1]
                    if e & 0x800:
                        t = t[::-1, :]
                X, Y = (cx * 3 + k % 3) * 8, (cy * 3 + k // 3) * 8
                region = img[Y:Y + 8, X:X + 8]
                mask = t != 0
                region[mask] = pals[e >> 12][t[mask]]
    return Image.fromarray(img[:m.map_height_camera * 8, :m.map_width_camera * 8])


def render_eos_image(rom_path: Path, name: str) -> Image.Image:
    """skytemple's render of the EoS level `name` (BPA frame 0)."""
    # skytemple hands Pillow an iterator as the palette; newer Pillow wants a
    # sequence (as tools/make_sky_cutaways.py)
    orig = Image.Image.putpalette
    if not getattr(orig, "_sky_patched", False):
        def putpalette(self, data, rawmode="RGB"):
            if not isinstance(data, (bytes, bytearray, list)):
                data = list(data)
            return orig(self, data, rawmode)
        putpalette._sky_patched = True
        Image.Image.putpalette = putpalette
    rom = ndspy.rom.NintendoDSRom.fromFile(str(rom_path))
    bpc, bma, bpl, bpas = load_eos(rom, name)
    img = bma.to_pil(bpc, bpl, bpas, False, False)
    if isinstance(img, list):
        img = img[0]
    return img.convert("RGB")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom", type=Path, help="Explorers of Sky (US) .nds")
    ap.add_argument("name", help="EoS MAP_BG name, e.g. d01p11b")
    ap.add_argument("stem", help="RT output stem under data/map_bg, e.g. SKYD0111B")
    ap.add_argument("--render", type=Path, help="also render the result to this PNG")
    ap.add_argument("--no-palette-animation", action="store_true",
                    help="leave the BPL's palette animation out (the base palettes only)")
    ap.add_argument("--compare", action="store_true",
                    help="only compare the files already written for STEM (--bpl/--bpc/--bma for "
                         "files shared with another map) with skytemple's render of NAME")
    ap.add_argument("--bpl", help="with --compare: the BPL stem (default STEM)")
    ap.add_argument("--bpc", help="with --compare: the BPC stem (default STEM)")
    ap.add_argument("--bma", help="with --compare: the BMA stem (default STEM)")
    args = ap.parse_args()
    if args.compare:
        import numpy as np
        ours = render_rt_image(args.bpl or args.stem, args.bpc or args.stem, args.bma or args.stem)
        eos = render_eos_image(args.rom, args.name)
        a, b = np.asarray(ours), np.asarray(eos)
        if a.shape != b.shape:
            print(f"{args.name}: size {a.shape[1]}x{a.shape[0]} != EoS {b.shape[1]}x{b.shape[0]}")
            return 1
        diff = int((a != b).any(axis=2).sum())
        print(f"{args.name} vs {args.stem}: " + ("identical" if not diff else f"{diff} pixels differ"))
        if args.render:
            ours.save(args.render)
        return 1 if diff else 0
    convert(args.rom, args.name, args.stem, args.render, not args.no_palette_animation)
    return 0


if __name__ == "__main__":
    sys.exit(main())
