#!/usr/bin/env python3
"""Convert an Explorers of Sky dungeon tileset (DUNGEON/dungeon.bin) into the
pieces Rescue Team loads for a dungeon tileset, as C data.

    tools/convert_eos_dungeon_tileset.py EOS.nds 1 sBeachCave > src/data/sky_beach_cave_tileset.h
    tools/convert_eos_dungeon_tileset.py EOS.nds bg0 sBeachCavePit > src/data/sky_beach_cave_pit_tileset.h

The second form converts a fixed-floor background (EoS tilesets >= 170,
dungeon_bgN) into Red's pre-drawn "emap" tileset format.

Red tileset files and their EoS counterparts (both engines share the layout):

  bNNfon  4bpp tiles (VRAM 0x06008000)          <- dungeonN.dpci
  bNNcel  250 chunks x 9 tilemap entries        <- dungeonN.dpc (chunks 0..249)
  bNNcex  0x930 chunk ids: (mask | 0x200 floor / | 0x100 secondary) * 3 + variation
                                                 <- dungeonN.dma (2352 entries, same order)
  bNNpal  160 RGB colours (palettes 0-9)        <- dungeonN.dpl palettes 0-9
  bNNcanm 32 animated colours (palettes 10-11)  <- dungeonN.dpla
"""
from __future__ import annotations

import sys

import ndspy.rom
from skytemple_files.common.types.file_types import FileType
from skytemple_files.common.util import get_ppmdu_config_for_rom

RED_CHUNKS = 250
RED_CEX = 0x930


def emit_common(w, name, tiles_list, chunks, palettes):
    tiles = b"".join(bytes(t) for t in tiles_list)
    w(f"static const u32 {name}Tiles[{len(tiles) // 4}] = {{")
    words = [int.from_bytes(tiles[i:i + 4], "little") for i in range(0, len(tiles), 4)]
    for i in range(0, len(words), 8):
        w("    " + ", ".join(f"0x{x:08X}" for x in words[i:i + 8]) + ",")
    w("};")
    w(f"static const u16 {name}Chunks[{RED_CHUNKS}][9] = {{")
    for c in range(RED_CHUNKS):
        ents = chunks[c] if c < len(chunks) else [None] * 9
        vals = [0 if e is None else
                (e.pal_idx << 12) | (int(e.flip_y) << 11) | (int(e.flip_x) << 10) | e.idx
                for e in ents]
        w("    { " + ", ".join(f"0x{v:04X}" for v in vals) + " },")
    w("};")
    w(f"static const RGB_Struct {name}Palette[160] = {{")
    for p in range(10):
        pal = palettes[p]
        w("    " + ", ".join(f"{{{pal[c * 3]}, {pal[c * 3 + 1]}, {pal[c * 3 + 2]}}}" for c in range(16)) + ",")
    w("};")


def background(dbin, bg: int, name: str) -> list[str]:
    """EoS fixed-floor background (dungeon_bgN.dbg: 32x32 chunk map) ->
    Red "emap" tileset (>= 0x40): a 24x24 chunk map over at most 250 chunks.
    Chunks are deduplicated by content; if more than 249 remain, the rarest
    chunks outside the middle of the map are folded into a neighbour."""
    dbg = dbin.get(f"dungeon_bg{bg}.dbg")
    dpc = dbin.get(f"dungeon_bg{bg}.dpc")
    dpci = dbin.get(f"dungeon_bg{bg}.dpci")
    dpl = dbin.get(f"dungeon_bg{bg}.dpl")
    key = lambda c: tuple((e.idx, e.flip_x, e.flip_y, e.pal_idx) for e in dpc.chunks[c])
    grid = [[dbg.mappings[y * 32 + x] for x in range(24)] for y in range(24)]
    canon = {}
    for y in range(24):
        for x in range(24):
            k = key(grid[y][x])
            canon.setdefault(k, grid[y][x])
            grid[y][x] = canon[k]
    # Fold down to Red's chunk budget by merging the most alike chunks
    # (pixel distance x how often the rarer one is used), so the dark cave
    # ceiling and sand variants merge with their look-alikes instead of a
    # neighbour's picture.
    from collections import Counter
    import numpy as np
    cnt = Counter(c for row in grid for c in row)
    ids = sorted(cnt)
    if len(ids) > RED_CHUNKS - 1:
        def render(c):
            img = np.zeros((24, 24, 3), dtype=np.float32)
            for k, e in enumerate(dpc.chunks[c]):
                tile = bytes(dpci.tiles[e.idx]) if e.idx < len(dpci.tiles) else bytes(32)
                pal = dpl.palettes[e.pal_idx] if e.pal_idx < len(dpl.palettes) else [0] * 48
                px = np.array([[(tile[y * 4 + x // 2] >> (4 * (x & 1))) & 15 for x in range(8)]
                               for y in range(8)])
                if e.flip_x:
                    px = px[:, ::-1]
                if e.flip_y:
                    px = px[::-1, :]
                rgb = np.array([pal[i * 3:i * 3 + 3] for i in range(16)], dtype=np.float32)
                ty, tx = divmod(k, 3)
                img[ty * 8:ty * 8 + 8, tx * 8:tx * 8 + 8] = rgb[px]
            return img.reshape(-1)
        vec = np.stack([render(c) for c in ids])
        sq = (vec ** 2).sum(axis=1)
        dist = sq[:, None] + sq[None, :] - 2 * vec @ vec.T
        alive = {c: i for i, c in enumerate(ids)}
        repl = {}
        while len(alive) > RED_CHUNKS - 1:
            best = None
            keys = list(alive)
            for a_i, a in enumerate(keys):
                for b in keys[a_i + 1:]:
                    d = dist[alive[a], alive[b]] * min(cnt[a], cnt[b])
                    if best is None or d < best[0]:
                        best = (d, a, b)
            _, a, b = best
            keep, drop = (a, b) if cnt[a] >= cnt[b] else (b, a)
            repl[drop] = keep
            cnt[keep] += cnt.pop(drop)
            del alive[drop]
        def final(c):
            while c in repl:
                c = repl[c]
            return c
        grid = [[final(c) for c in row] for row in grid]
    used = sorted({c for row in grid for c in row})
    remap = {c: i + 1 for i, c in enumerate(used)}
    chunks = [[None] * 9] + [dpc.chunks[c] for c in used]
    out = []
    w = out.append
    w(f"/* Generated by tools/convert_eos_dungeon_tileset.py from EoS dungeon_bg{bg} — do not edit. */")
    emit_common(w, name, dpci.tiles, chunks, dpl.palettes)
    w(f"static const u8 {name}Emap[24 * 24] = {{")
    for y in range(24):
        w("    " + ", ".join(str(remap[c]) for c in grid[y]) + ",")
    w("};")
    # palettes 10-11 are animated colours (the Pit's water), as in a tileset
    emit_anim(w, name, dbin.get(f"dungeon_bg{bg}.dpla"))
    return out


def emit_anim(w, name, dpla):
    """Animated colours (palettes 10-11): per slot, frames of RGB and a
    per-frame duration (Red's canm)."""
    for i in range(32):
        cols = list(dpla.colors[i])
        n = len(cols) // 3
        if n == 0:
            continue
        frames = ", ".join(f"{{{cols[k * 3]}, {cols[k * 3 + 1]}, {cols[k * 3 + 2]}}}" for k in range(n))
        w(f"static const struct {{ s16 count; s16 duration; RGB_Struct colors[{n}]; }} {name}Anim{i} = "
          f"{{ {n}, {max(1, dpla.durations_per_frame_for_colors[i])}, {{ {frames} }} }};")
    w(f"static const struct {{ s16 count; s16 duration; }} {name}AnimNone = {{ 0, 0 }};")
    w(f"static const void *const {name}Anim[32] = {{")
    for i in range(32):
        w(f"    &{name}Anim{i}," if len(dpla.colors[i]) else f"    &{name}AnimNone,")
    w("};")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    cfg = get_ppmdu_config_for_rom(rom)
    dbin = FileType.DUNGEON_BIN.deserialize(rom.getFileByName("DUNGEON/dungeon.bin"), cfg)
    if sys.argv[2].startswith("bg"):
        print("\n".join(background(dbin, int(sys.argv[2][2:]), sys.argv[3])))
        return 0
    ts = int(sys.argv[2])
    name = sys.argv[3]
    dma = dbin.get(f"dungeon{ts}.dma")
    dpc = dbin.get(f"dungeon{ts}.dpc")
    dpci = dbin.get(f"dungeon{ts}.dpci")
    dpl = dbin.get(f"dungeon{ts}.dpl")
    dpla = dbin.get(f"dungeon{ts}.dpla")

    cex = list(dma.chunk_mappings)
    assert len(cex) == RED_CEX, len(cex)
    assert max(cex) < RED_CHUNKS, max(cex)

    out = []
    w = out.append
    w(f"/* Generated by tools/convert_eos_dungeon_tileset.py from EoS dungeon{ts} — do not edit. */")
    tiles = b"".join(bytes(t) for t in dpci.tiles)
    w(f"static const u32 {name}Tiles[{len(tiles) // 4}] = {{")
    words = [int.from_bytes(tiles[i:i + 4], "little") for i in range(0, len(tiles), 4)]
    for i in range(0, len(words), 8):
        w("    " + ", ".join(f"0x{x:08X}" for x in words[i:i + 8]) + ",")
    w("};")

    w(f"static const u16 {name}Chunks[{RED_CHUNKS}][9] = {{")
    for c in range(RED_CHUNKS):
        ents = dpc.chunks[c] if c < len(dpc.chunks) else [None] * 9
        vals = []
        for e in ents:
            if e is None:
                vals.append(0)
            else:
                vals.append((e.pal_idx << 12) | (int(e.flip_y) << 11) | (int(e.flip_x) << 10) | e.idx)
        w("    { " + ", ".join(f"0x{v:04X}" for v in vals) + " },")
    w("};")

    w(f"static const u8 {name}Cex[{RED_CEX}] = {{")
    for i in range(0, RED_CEX, 24):
        w("    " + ", ".join(str(v) for v in cex[i:i + 24]) + ",")
    w("};")

    w(f"static const RGB_Struct {name}Palette[160] = {{")
    for p in range(10):
        pal = dpl.palettes[p]
        row = []
        for c in range(16):
            r, g, b = pal[c * 3:c * 3 + 3]
            row.append(f"{{{r}, {g}, {b}}}")
        w("    " + ", ".join(row) + ",")
    w("};")

    emit_anim(w, name, dpla)
    print("\n".join(out))
    return 0


if __name__ == "__main__":
    sys.exit(main())
