#!/usr/bin/env python3
"""Build the Sky demake's stormy-sea map (EoS level v01p07b) as an RT ground map.

EoS plays this scene between the storm voices and the Sharpedo Bluff cliff:
the bottom screen shows MAP_BG/v01p07b (lower layer: a cloudy sky that
repeats every 13 chunks; upper layer: the waves, repeating every 8 chunks,
with the 6-frame tile animation v01p07b1.bpa) panning slowly, with dark cloud
sprites drifting over the sky and rain on top.

The output is a dual-layer RT map like tools/convert_eos_ground_map.py writes
(EoS upper layer -> RT layer 0 = BG2, lower -> RT layer 1 = BG3), with two
changes so that it fits the 1024-tile VRAM budget and keeps the wave
animation:

  * The sky's top --sky-first-row chunk rows (above the GBA view; the scene
    never shows them) are left empty and only chunks the map uses are pooled.
  * The cloud sprites, captured from EoS in world coordinates
    (graphics/custom/sky_storm/clouds.png, 624x240, index 0 transparent), are
    baked into the front layer's empty chunks (above the waves) on their own
    palette (EoS palette 1, which no chunk uses).

The BPA is EoS's v01p07b1.bpa, which is byte-identical to v01p01a1.bpa, so
the map reuses data/map_bg_anim/EV0101A1.bpa (checked here).

    tools/make_sky_storm_waves_map.py EOS.nds [--render out.png]

Writes data/map_bg/EV0107B.bpl, EV0107Bc.bpc, EV0107Bm.bma.
"""

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from skytemple_files.common.types.file_types import FileType

sys.path.insert(0, str(Path(__file__).resolve().parent))
from convert_eos_ground_map import CHUNK, VRAM_TILE_SLOTS, layer_tiles, load_eos, render_rt  # noqa: E402

ROOT = Path(__file__).resolve().parents[1]
EOS_NAME = "v01p07b"
STEM = "EV0107B"
SHARED_BPA = ROOT / "data" / "map_bg_anim" / "EV0101A1.bpa"
CLOUDS = ROOT / "graphics" / "custom" / "sky_storm" / "clouds.png"
CLOUD_PAL = 1


def bpa_bytes(bpa) -> bytes:
    data = bytearray(struct.pack("<HH", bpa.number_of_tiles, bpa.number_of_frames))
    for fi in bpa.frame_info:
        data += struct.pack("<I", max(1, fi.duration_per_frame))
    for fr in range(bpa.number_of_frames):
        for t in bpa.tiles_for_frame(fr):
            data += bytes(t)
    return bytes(data)


def build(rom_path: Path, sky_first_row: int, render: Path | None) -> None:
    rom = ndspy.rom.NintendoDSRom.fromFile(str(rom_path))
    bpc, bma, bpl, bpas = load_eos(rom, EOS_NAME)
    assert bpc.number_of_layers == 2
    W = bma.map_width_chunks

    upper_bpas = bpc.get_bpas_for_layer(0, bpas)
    assert len(upper_bpas) == 1 and not bpc.get_bpas_for_layer(1, bpas)
    anim = upper_bpas[0]
    if not SHARED_BPA.exists() or SHARED_BPA.read_bytes() != bpa_bytes(anim):
        raise SystemExit(f"{EOS_NAME}1.bpa differs from {SHARED_BPA.name}")
    anim_first = len(bpc.layers[0].tiles)

    pool: list[bytes] = [bytes(32)]
    pool_index: dict[bytes, int] = {bytes(32): 0}

    def pool_add(t: bytes) -> int:
        idx = pool_index.get(t)
        if idx is None:
            idx = len(pool)
            pool.append(t)
            pool_index[t] = idx
        return idx

    chunks: list[list] = [[0] * 9]
    chunk_index: dict[tuple, int] = {tuple([0] * 9): 0}

    def chunk_add(entries: list) -> int:
        key = tuple(entries)
        if key not in chunk_index:
            chunk_index[key] = len(chunks)
            chunks.append(list(entries))
        return chunk_index[key]

    def eos_chunk(layer: int, c: int, cache: dict) -> int:
        if c == 0:
            return 0
        if c in cache:
            return cache[c]
        tiles = layer_tiles(bpc, layer, bpas)
        out = []
        for e in bpc.layers[layer].tilemap[c * 9:(c + 1) * 9]:
            flags = (e.pal_idx << 12) | (e.flip_y << 11) | (e.flip_x << 10)
            if layer == 0 and e.idx >= anim_first:
                out.append(("anim", flags, e.idx - anim_first))
                continue
            out.append(flags | pool_add(bytes(tiles[e.idx])))
        cache[c] = chunk_add(out)
        return cache[c]

    # Back layer: the sky, without the rows above the view.
    lower_cache: dict = {}
    rt_lower = [eos_chunk(1, c, lower_cache) if i // W >= sky_first_row else 0
                for i, c in enumerate(bma.layer0)]
    # Front layer: the waves.
    upper_cache: dict = {}
    rt_upper = [eos_chunk(0, c, upper_cache) for c in bma.layer1]

    # Clouds into the front layer's empty chunks (rows the sky shows).
    clouds = Image.open(CLOUDS)
    assert clouds.mode == "P" and clouds.size == (bma.map_width_camera * 8, bma.map_height_camera * 8)
    cpal = clouds.getpalette()
    cloud_colours = [tuple(cpal[i * 3:i * 3 + 3]) for i in range(1, 16)]
    cpx = clouds.load()
    dropped = 0
    for i, c in enumerate(rt_upper):
        cx, cy = i % W, i // W
        px0, py0 = cx * 24, cy * 24
        has = any(cpx[px0 + x, py0 + y] for y in range(24) for x in range(24))
        if not has:
            continue
        if c != 0 or cy < sky_first_row:
            dropped += sum(1 for y in range(24) for x in range(24) if cpx[px0 + x, py0 + y])
            continue
        out = []
        for k in range(9):
            tx, ty = px0 + (k % 3) * 8, py0 + (k // 3) * 8
            vals = [cpx[tx + x, ty + y] for y in range(8) for x in range(8)]
            if not any(vals):
                out.append(0)
                continue
            t = bytes(vals[j * 2] | (vals[j * 2 + 1] << 4) for j in range(32))
            out.append((CLOUD_PAL << 12) | pool_add(t))
        rt_upper[i] = chunk_add(out)

    n_tiles = len(pool)
    chunks = [[(e[1] | (n_tiles + e[2])) if isinstance(e, tuple) else e for e in ch] for ch in chunks]
    if n_tiles + anim.number_of_tiles > VRAM_TILE_SLOTS:
        raise SystemExit(f"{n_tiles} + {anim.number_of_tiles} animated tiles > {VRAM_TILE_SLOTS}")

    out_dir = ROOT / "data" / "map_bg"
    # BPL as convert_eos_ground_map: palettes 0 (sky, animated), 1 (clouds),
    # 2 (waves); palette 0's animation is kept.
    n_pals = 3
    bpl_data = bytearray(struct.pack("<HH", n_pals, 1))
    for p in range(n_pals):
        for ci in range(1, 16):
            if p == CLOUD_PAL:
                r, g, b = cloud_colours[ci - 1]
            else:
                r, g, b = bpl.palettes[p][ci * 3:ci * 3 + 3]
            bpl_data += bytes((r, g, b, 0))
    frames = list(bpl.animation_palette)
    specs = bpl.animation_specs
    pos = 0
    anims = []
    for p, spec in enumerate(specs):
        n = spec.number_of_frames
        if p < n_pals:
            anims.append((spec.duration_per_frame, n, frames[pos:pos + n]))
        pos += n
    assert anims[0][1] and not anims[CLOUD_PAL][1]
    for dur, n, _ in anims:
        bpl_data += struct.pack("<hh", dur if n else 0, n)
    for _, n, fr in anims:
        for f in fr:
            for ci in range(15):
                r, g, b = f[ci * 3:ci * 3 + 3]
                bpl_data += bytes((r, g, b, 0))
    (out_dir / f"{STEM}.bpl").write_bytes(bpl_data)

    bpc_data = bytearray(struct.pack("<8h", CHUNK, CHUNK, n_tiles, anim.number_of_tiles, 0, 0, 0, len(chunks)))
    for t in pool[1:]:
        bpc_data += t
    for ch in chunks[1:]:
        for entry in ch:
            bpc_data += struct.pack("<H", entry)
    if len(bpc_data) % 4:
        bpc_data += bytes(4 - len(bpc_data) % 4)
    (out_dir / f"{STEM}c.bpc").write_bytes(bpc_data)

    rt = bma
    rt.unknown_data_block = None
    rt.unk6 = 0
    rt.number_of_layers = 2
    rt.layer0 = rt_upper
    rt.layer1 = rt_lower
    rt.collision = [False] * (rt.map_width_camera * rt.map_height_camera)
    rt.number_of_collision_layers = 1
    rt.collision2 = None
    (out_dir / f"{STEM}m.bma").write_bytes(FileType.BMA.serialize(rt))

    print(f"{EOS_NAME} -> {STEM}: {n_tiles} tiles + {anim.number_of_tiles} animated, {len(chunks)} chunks, "
          f"{n_pals} palettes, sky from chunk row {sky_first_row}, {dropped} cloud pixels outside free chunks")
    if render:
        render_rt(STEM, render)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom", type=Path, help="Explorers of Sky (US) .nds")
    ap.add_argument("--sky-first-row", type=int, default=2, help="first sky chunk row kept (default 2)")
    ap.add_argument("--render", type=Path, help="also render the result to this PNG")
    args = ap.parse_args()
    build(args.rom, args.sky_first_row, args.render)
    return 0


if __name__ == "__main__":
    sys.exit(main())
