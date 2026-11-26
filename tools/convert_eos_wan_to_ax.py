#!/usr/bin/env python3
"""Convert Explorers of Sky (NDS) monster / object WAN sprites into Red AX data.

Red's AX monster format is the GBA ancestor of the EoS WAN format:

    WAN meta-frame          -> ax_pose[]  (OAM pieces, x+256 / y+512 coords)
    WAN image (strip list)  -> ax_sprite[] (tiles DMA'd to VRAM in order)
    WAN anim sequence       -> ax_anim[]  (duration, flags, frame, offset, shadow)
    WAN body-part offsets   -> PositionSets (head, left hand, right hand, centre)
    WAN anim group x 8 dirs -> AnimTable (same direction order: S SE E NE N NW W SW)

so the conversion is mostly a re-encode. The differences handled here:

  * Tiles: NDS OBJ tile numbers count 128-byte blocks; GBA counts 32-byte
    tiles. Pieces are re-packed tightly (no 4-tile padding).
  * Palette: EoS sprites carry their own 16 colours. Red loads the 13 shared
    overworld palettes (graphics/ax/pal/0..12, OBJ slots 0..12) and picks one
    per species via the monster data field `overworldPalette`. Each EoS colour
    is mapped to its nearest colour in every Red palette; the palette with the
    lowest pixel-weighted error wins (override with --palette).
  * Animation groups: Red uses EoS's first 13 groups in the same order
    (0 Walk, 1 Attack, 2 Kick, 3 Shoot, 4 Strike, 5 Sleep, 6 Hurt, 7 Idle,
    8 Swing, 9 Double, 10 Hop, 11 Charge, 12 Rotate). Groups come from
    MONSTER/monster.bin (dungeon set: walk/sleep/hurt/idle) and
    MONSTER/m_attack.bin (attacks); missing groups fall back (see GROUP_FALLBACK).
  * VRAM: Red gives a monster 16 tiles per body-size unit. The tool reports
    the largest pose in tiles and the body size it needs.

Usage:
    tools/convert_eos_wan_to_ax.py convert EOS.nds <eos_md_id|dexN> <name> [--palette N]
    tools/convert_eos_wan_to_ax.py batch   EOS.nds [--gen4 | dexA-dexB ...]
    tools/convert_eos_wan_to_ax.py check   EOS.nds <eos_md_id|dexN> <name> OUTDIR
    tools/convert_eos_wan_to_ax.py render-ax <name> OUT.png [--palette N]
    tools/convert_eos_wan_to_ax.py list-ground EOS.nds OUTDIR [filter]
    tools/convert_eos_wan_to_ax.py ornament EOS.nds GROUND/<file>.wan <name> [--palette N | --own-palette] [--check OUTDIR]
    tools/convert_eos_wan_to_ax.py render-wan EOS.nds <eos_md_id|dexN> OUT.png

`ornament` writes src/data/ornament/<name>.h + graphics/ornament/<Name>/sprite_N.png
(plain .4bpp, like the other ornaments). The Relic Fragment is GROUND/d01p11a1.wan.

`convert` writes graphics/ax/mon/<name>/sprite_N.png and src/data/ax/<name>.h
(symbol gAx<Name>). The build turns the PNGs into .4bpp.lz (compress_ax_tiles.py)
and LZ-compresses the anim arrays (compress_ax_anims.py) like every other species.

The ROM is only read, never copied into the repository.
"""
from __future__ import annotations

import argparse
import math
import re
import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path

from PIL import Image, ImageDraw

# skytemple passes itertools.chain to putpalette, which newer PIL rejects.
_orig_putpalette = Image.Image.putpalette


def _putpalette(self, data, rawmode="RGB"):
    if not isinstance(data, (bytes, bytearray, list)):
        data = list(data)
    return _orig_putpalette(self, data, rawmode)


Image.Image.putpalette = _putpalette

ROOT = Path(__file__).resolve().parents[1]
AX_HDR_DIR = ROOT / "src" / "data" / "ax"
AX_MON_DIR = ROOT / "graphics" / "ax" / "mon"
PAL_DIR = ROOT / "graphics" / "ax" / "pal"

NUM_RED_PALETTES = 13  # slots 0..12 are loaded (ground_sprite.c sub_80A6460)
NUM_DIRS = 8
DIR_NAMES = ["S", "SE", "E", "NE", "N", "NW", "W", "SW"]
GROUP_NAMES = ["Walk", "Attack", "Kick", "Shoot", "Strike", "Sleep", "Hurt",
               "Idle", "Swing", "Double", "Hop", "Charge", "Rotate"]
NUM_RED_GROUPS = 13
TILES_PER_BODY_SIZE = 16

# Where each Red group is taken from: list of (bin, eos group) tried in order.
GROUP_SOURCES = {
    0: [("monster", 0), ("ground", 0)],
    1: [("attack", 1), ("ground", 1)],
    2: [("attack", 2), ("attack", 1)],
    3: [("attack", 3), ("attack", 1)],
    4: [("attack", 4), ("attack", 1)],
    5: [("monster", 5), ("ground", 5)],
    6: [("monster", 6), ("ground", 6)],
    7: [("monster", 7), ("ground", 7)],
    8: [("attack", 8), ("attack", 1)],
    9: [("attack", 9), ("attack", 1)],
    10: [("attack", 10), ("attack", 1)],
    11: [("attack", 11), ("monster", 11), ("ground", 11)],
    12: [("attack", 12), ("ground", 12), ("attack", 1)],
}
BIN_FILES = {"monster": "MONSTER/monster.bin", "ground": "MONSTER/m_ground.bin",
             "attack": "MONSTER/m_attack.bin"}

# (w, h) in tiles -> (shape, size)
SHAPE_NAMES = ["ST_OAM_SQUARE     ", "ST_OAM_H_RECTANGLE", "ST_OAM_V_RECTANGLE"]
DIMS = {
    (1, 1): (0, 0), (2, 2): (0, 1), (4, 4): (0, 2), (8, 8): (0, 3),
    (2, 1): (1, 0), (4, 1): (1, 1), (4, 2): (1, 2), (8, 4): (1, 3),
    (1, 2): (2, 0), (1, 4): (2, 1), (2, 4): (2, 2), (4, 8): (2, 3),
}
SHAPE_SIZE_TO_DIM = {v: k for k, v in DIMS.items()}


# --------------------------------------------------------------------------
# Generic model shared by the WAN reader, the AX writer and the AX reader.
# --------------------------------------------------------------------------

@dataclass
class Piece:
    sprite: int          # index into Model.sprites, -1 = reuse tiles already loaded
    x: int               # relative to the entity origin (OAM x - 256)
    y: int               # relative to the entity origin (OAM y - 512)
    w: int               # tiles
    h: int
    hflip: bool
    vflip: bool
    tile: int            # GBA tile offset inside the pose's VRAM block


@dataclass
class Frame:
    dur: int
    flag: int
    pose: int
    ox: int
    oy: int
    sx: int
    sy: int


@dataclass
class Model:
    poses: list = field(default_factory=list)       # list[list[Piece]]
    sprites: list = field(default_factory=list)     # list[bytes] (4bpp GBA tiles, Red colour indices)
    anims: list = field(default_factory=list)       # list[group] ; group = list[8] of list[Frame]
    positions: list = field(default_factory=list)   # per pose: 4 (x, y)
    palette: list = field(default_factory=list)     # 16 RGB


def pose_tiles(pose) -> int:
    t = 0
    for p in pose:
        t = max(t, p.tile + p.w * p.h)
    return t


# --------------------------------------------------------------------------
# LZ77 (GBA BIOS) helpers
# --------------------------------------------------------------------------

def lz77_decompress(data: bytes) -> bytes:
    if data[:4] == b"GMLZ":
        data = data[4:]
    if data[0] != 0x10:
        raise ValueError("not LZ77")
    size = data[1] | (data[2] << 8) | (data[3] << 16)
    out = bytearray()
    pos = 4
    while len(out) < size:
        flags = data[pos]
        pos += 1
        for bit in range(7, -1, -1):
            if len(out) >= size:
                break
            if flags & (1 << bit):
                a, b = data[pos], data[pos + 1]
                pos += 2
                ln = (a >> 4) + 3
                dist = ((a & 0xF) << 8) | b
                st = len(out) - dist - 1
                for i in range(ln):
                    out.append(out[st + i])
            else:
                out.append(data[pos])
                pos += 1
    return bytes(out)


# --------------------------------------------------------------------------
# Palettes
# --------------------------------------------------------------------------

def load_red_palette(idx: int) -> list:
    lines = (PAL_DIR / f"{idx}.pal").read_text().split("\n")
    return [tuple(int(v) for v in l.split()) for l in lines[3:19]]


def to_gba(c):
    # Red palettes are stored as 8-bit values of 5-bit colours; snap EoS ones too.
    return tuple((v >> 3) * 8 + (v >> 5) * 0 for v in c[:3])


def _lin(v):
    v = v / 255.0
    return v / 12.92 if v <= 0.04045 else ((v + 0.055) / 1.055) ** 2.4


def rgb_to_lab(c):
    r, g, b = (_lin(v) for v in c[:3])
    x = (0.4124 * r + 0.3576 * g + 0.1805 * b) / 0.95047
    y = 0.2126 * r + 0.7152 * g + 0.0722 * b
    z = (0.0193 * r + 0.1192 * g + 0.9505 * b) / 1.08883

    def f(t):
        return t ** (1 / 3) if t > 0.008856 else 7.787 * t + 16 / 116
    return (116 * f(y) - 16, 500 * (f(x) - f(y)), 200 * (f(y) - f(z)))


LIGHTNESS_WEIGHT = 3.0  # outlines and shading ramps matter more than hue


def colour_dist(a, b):
    la, lb = rgb_to_lab(a), rgb_to_lab(b)
    # weight lightness a bit more: keeps shading ramps readable
    return math.sqrt(LIGHTNESS_WEIGHT * (la[0] - lb[0]) ** 2 + (la[1] - lb[1]) ** 2 + (la[2] - lb[2]) ** 2)


def best_mapping(src_pal, counts, red_pal):
    """Map EoS colour indices 1..15 to Red indices 1..15. Returns (err, map)."""
    mp = [0] * 16
    err = 0.0
    for i in range(1, 16):
        best = None
        for j in range(1, 16):
            d = colour_dist(src_pal[i], red_pal[j])
            if best is None or d < best[0]:
                best = (d, j)
        mp[i] = best[1]
        err += best[0] * counts[i]
    return err, mp


def choose_palette(src_pal, counts, forced=None):
    results = []
    for p in range(NUM_RED_PALETTES):
        err, mp = best_mapping(src_pal, counts, load_red_palette(p))
        total = sum(counts[1:]) or 1
        results.append((err / total, p, mp))
    results.sort()
    if forced is not None:
        for r in results:
            if r[1] == forced:
                return r, results
    return results[0], results


# --------------------------------------------------------------------------
# EoS ROM access
# --------------------------------------------------------------------------

class EosRom:
    def __init__(self, path):
        import ndspy.rom
        from skytemple_files.common.types.file_types import FileType
        self.FileType = FileType
        self.rom = ndspy.rom.NintendoDSRom.fromFile(str(path))
        self.md = FileType.MD.deserialize(self.rom.getFileByName("BALANCE/monster.md"))
        self._packs = {}

    def resolve_id(self, ident: str) -> int:
        if ident.lower().startswith("dex"):
            dex = int(ident[3:])
            for i, e in enumerate(self.md.entries[:600]):
                if e.national_pokedex_number == dex:
                    return i
            raise SystemExit(f"no EoS entry for dex {dex}")
        return int(ident)

    def _pack(self, kind):
        if kind not in self._packs:
            self._packs[kind] = self.FileType.BIN_PACK.deserialize(
                self.rom.getFileByName(BIN_FILES[kind]))
        return self._packs[kind]

    def _decode_wan(self, raw: bytes):
        data = raw
        if raw[:5] in (b"PKDPX", b"AT4PX") or raw[:4] in (b"AT4P", b"AT3P"):
            data = bytes(self.FileType.COMMON_AT.deserialize(raw).decompress())
        return self.FileType.WAN.CHARA.deserialize(bytes(data))

    def monster_wans(self, md_id: int) -> dict:
        idx = self.md.entries[md_id].sprite_index
        out = {}
        for kind in BIN_FILES:
            pack = self._pack(kind)
            if 0 <= idx < len(pack):
                try:
                    out[kind] = self._decode_wan(pack[idx])
                except Exception as ex:  # pragma: no cover - diagnostic
                    print(f"warning: {kind}[{idx}] unreadable: {ex}", file=sys.stderr)
        return out

    def ground_names(self):
        return [f for f in self.rom.filenames["GROUND"].files if f.lower().endswith(".wan")]

    def raw_wan(self, path: str) -> bytes:
        return bytes(self.rom.getFileByName(path))


# --------------------------------------------------------------------------
# WAN -> Model
# --------------------------------------------------------------------------

def wan_image_bytes(wan, img_index: int) -> bytes:
    """4bpp tile data of one WAN image (zero strips expanded)."""
    out = bytearray()
    for strip in wan.imgData[img_index].imgPx:
        out += bytes(strip)
    return bytes(out)


def remap_4bpp(data: bytes, mp) -> bytes:
    out = bytearray(len(data))
    for i, b in enumerate(data):
        out[i] = mp[b & 0xF] | (mp[b >> 4] << 4)
    return bytes(out)


class WanConverter:
    """Accumulates frames from one or more WAN files into a single Model."""

    def __init__(self, max_tiles=None):
        self.model = Model()
        self._pose_cache = {}     # (wan id, frame index) -> pose id
        self._pose_dedupe = {}    # pose key -> pose id
        self._img_cache = {}      # (wan id, img index) -> sprite id
        self._img_dedupe = {}     # bytes -> sprite id
        self.max_tiles = max_tiles
        self.cropped = 0
        self.src_pixels = [0] * 16
        self.pal_src = None

    def sprite_for(self, wan, img_index):
        key = (id(wan), img_index)
        if key not in self._img_cache:
            data = wan_image_bytes(wan, img_index)
            if data in self._img_dedupe:
                sid = self._img_dedupe[data]
            else:
                sid = len(self.model.sprites)
                self.model.sprites.append(data)
                self._img_dedupe[data] = sid
            self._img_cache[key] = sid
        return self._img_cache[key]

    def pose_for(self, wan, frame_index):
        from skytemple_files.graphics.chara_wan.model import DIM_TABLE
        key = (id(wan), frame_index)
        if key in self._pose_cache:
            return self._pose_cache[key]
        pieces = []
        # EoS tileNum (128-byte blocks) -> GBA tile, filled as pieces load
        block_map = {}
        cursor = 0
        for mp in wan.frameData[frame_index]:
            w, h = DIM_TABLE[mp.getResolutionType()]
            eos_tile = mp.getTileNum()
            if mp.imgIndex >= 0:
                sid = self.sprite_for(wan, mp.imgIndex)
                ntiles = len(self.model.sprites[sid]) // 32
                tile = cursor
                block_map[eos_tile] = tile
                cursor += ntiles
            else:
                sid = -1
                if eos_tile in block_map:
                    tile = block_map[eos_tile]
                else:
                    base = max((k for k in block_map if k <= eos_tile), default=None)
                    tile = 0 if base is None else block_map[base] + (eos_tile - base) * 4
            pieces.append(Piece(sid, mp.getXOffset(), mp.getYOffset(), w, h,
                                mp.isHFlip(), mp.isVFlip(), tile))
        off = wan.offsetData[frame_index] if frame_index < len(wan.offsetData) else None
        posset = ((off.head, off.lhand, off.rhand, off.center) if off
                  else ((0, 0),) * 4)
        if self.max_tiles and cursor > self.max_tiles:
            pieces = self._crop(pieces, posset[3])
        pkey = (tuple((p.sprite, p.x, p.y, p.w, p.h, p.hflip, p.vflip, p.tile) for p in pieces),
                tuple(posset))
        if pkey in self._pose_dedupe:
            pid = self._pose_dedupe[pkey]
        else:
            pid = len(self.model.poses)
            self.model.poses.append(pieces)
            self.model.positions.append(posset)
            self._pose_dedupe[pkey] = pid
        self._pose_cache[key] = pid
        return pid

    def _drop_score(self, p, cx, cy):
        """Higher = drop first: sparse pieces (swooshes, trails) far from the body."""
        data = self.model.sprites[p.sprite]
        opaque = sum((b & 0xF) != 0 for b in data) + sum((b >> 4) != 0 for b in data)
        density = opaque / max(1, len(data) * 2)
        dist = math.hypot(p.x + p.w * 4 - cx, p.y + p.h * 4 - cy)
        return (1.0 - density) * 100 + dist

    def _crop(self, pieces, centre=(0, -8)):
        """Drop loaded pieces until the pose fits the VRAM budget.

        Oversized EoS frames are nearly always a body plus an effect (swoosh,
        trail) drawn off to one side. Effects are sparse, so pieces with the
        fewest opaque pixels go first, ties broken by distance from the WAN
        "centre" body point.
        """
        self.cropped += 1
        keep = list(pieces)
        cx, cy = centre
        while True:
            loaded = [p for p in keep if p.sprite >= 0]
            total = sum(len(self.model.sprites[p.sprite]) // 32 for p in loaded)
            if total <= self.max_tiles or len(loaded) <= 1:
                break
            far = max(loaded, key=lambda p: self._drop_score(p, cx, cy))
            ntiles = len(self.model.sprites[far.sprite]) // 32
            # drop it and every reuse piece that points into its tiles
            keep = [p for p in keep if p is not far and
                    not (p.sprite < 0 and far.tile <= p.tile < far.tile + ntiles)]
        # re-pack tiles
        cursor = 0
        remap = {}
        out = []
        for p in keep:
            if p.sprite >= 0:
                remap[p.tile] = cursor
                q = Piece(**{**p.__dict__, "tile": cursor})
                cursor += len(self.model.sprites[p.sprite]) // 32
            else:
                q = Piece(**{**p.__dict__, "tile": remap.get(p.tile, 0)})
            out.append(q)
        return out

    def add_sequence(self, wan, seq):
        frames = []
        for f in seq:
            pid = self.pose_for(wan, f.frameIndex)
            frames.append(Frame(f.duration, f.flag, pid, f.offset[0], f.offset[1],
                                f.shadow[0], f.shadow[1]))
        return frames


def count_pixels(wan, counts):
    for img in wan.imgData:
        for strip in img.imgPx:
            for b in strip:
                counts[b & 0xF] += 1
                counts[b >> 4] += 1


def wan_palette(wan):
    pal = wan.customPalette[0]
    return [tuple(c[:3]) for c in pal] + [(0, 0, 0)] * (16 - len(pal))


def group_seqs(wan, g):
    """8 direction sequences for group g (WAN groups with 1 seq repeat it)."""
    if g >= len(wan.animGroupData):
        return None
    grp = wan.animGroupData[g]
    if not grp:
        return None
    if len(grp) >= NUM_DIRS:
        return grp[:NUM_DIRS]
    return [grp[0]] * NUM_DIRS


def build_monster_model(wans: dict, max_tiles=None, groups=NUM_RED_GROUPS):
    conv = WanConverter(max_tiles)
    used_wans = {}
    mapping = []
    for g in range(groups):
        src = None
        for kind, eg in GROUP_SOURCES.get(g, [("ground", g)]):
            if kind in wans and group_seqs(wans[kind], eg):
                src = (kind, eg)
                break
        if src is None:
            src = ("monster", 7) if group_seqs(wans.get("monster"), 7) else ("ground", 7)
        kind, eg = src
        mapping.append((g, kind, eg))
        wan = wans[kind]
        used_wans[kind] = wan
        seqs = group_seqs(wan, eg)
        conv.model.anims.append([conv.add_sequence(wan, s) for s in seqs])
    return conv, mapping, used_wans


def finalize_palette(conv, wans_used, forced_palette=None, src_pal=None):
    counts = [0] * 16
    for w in wans_used.values():
        count_pixels(w, counts)
    if src_pal is None:
        src_pal = wan_palette(next(iter(wans_used.values())))
    (err, pidx, mp), ranking = choose_palette(src_pal, counts, forced_palette)
    conv.model.sprites = [remap_4bpp(s, mp) for s in conv.model.sprites]
    conv.model.palette = load_red_palette(pidx)
    return pidx, err, mp, ranking


# --------------------------------------------------------------------------
# Model -> files
# --------------------------------------------------------------------------

def tiles_to_png(data: bytes, w_tiles: int, palette) -> Image.Image:
    ntiles = len(data) // 32
    h_tiles = max(1, (ntiles + w_tiles - 1) // w_tiles)
    im = Image.new("P", (w_tiles * 8, h_tiles * 8), 0)
    px = im.load()
    for t in range(ntiles):
        tx, ty = (t % w_tiles) * 8, (t // w_tiles) * 8
        for i in range(32):
            b = data[t * 32 + i]
            yy, xx = divmod(i * 2, 8)
            px[tx + xx, ty + yy] = b & 0xF
            px[tx + xx + 1, ty + yy] = b >> 4
    flat = []
    for c in palette:
        flat += list(c[:3])
    im.putpalette(flat + [0] * (768 - len(flat)))
    return im


def png_to_tiles(path: Path) -> bytes:
    im = Image.open(path)
    if im.mode != "P":
        raise ValueError(f"{path} is not indexed")
    w, h = im.size
    px = im.load()
    out = bytearray()
    for ty in range(0, h, 8):
        for tx in range(0, w, 8):
            for yy in range(8):
                for xx in range(0, 8, 2):
                    lo = px[tx + xx, ty + yy] & 0xF
                    hi = px[tx + xx + 1, ty + yy] & 0xF
                    out.append(lo | (hi << 4))
    return bytes(out)


def sprite_png_width(model, sid):
    """PNG width (tiles) for a sprite: the width of the first piece that loads it."""
    for pose in model.poses:
        for p in pose:
            if p.sprite == sid:
                return p.w
    return 1


def c_name(name: str) -> str:
    return "".join(part.capitalize() for part in re.split(r"[_\W]+", name) if part)


def write_ax_header(model: Model, name: str, gfx_dir: Path, hdr_path: Path,
                    pal_num: int, symbol: str, header_note: str, ornament: bool = False):
    """Write a species/ornament AX header and its sprite PNGs.

    Monsters: tiles INCBIN'd as .4bpp.lz (built by compress_ax_tiles.py).
    Ornaments: plain .4bpp like the other src/data/ornament headers.
    """
    N = c_name(name)
    gfx_rel = gfx_dir.relative_to(ROOT).as_posix()
    gfx_dir.mkdir(parents=True, exist_ok=True)
    for old in gfx_dir.glob("sprite_*"):
        old.unlink()
    # compress_ax_anims.py reuses an existing .lz by name without checking it,
    # so stale blobs from an earlier conversion must go.
    anim_lz = ROOT / "graphics" / "ax" / "anim_lz" / name
    if not ornament and anim_lz.is_dir():
        for old in anim_lz.glob("*.lz"):
            old.unlink()
    L = []
    L.append(f"/* {header_note} */")
    L.append(f"/* Generated by tools/convert_eos_wan_to_ax.py — regenerate rather than edit. */")
    if not ornament:
        L.append('#include "ax_shared_anims.h"')
    L.append(f"static const axmain sAxMain{N};")
    L.append(f'const SiroArchive {symbol} = {{"SIRO", &sAxMain{N}}};')
    L.append("")

    # Poses (deduped by content already)
    for i, pose in enumerate(model.poses):
        L.append(f"static const ax_pose s{N}Pose{i}[] = {{")
        for p in pose:
            shape, size = DIMS[(p.w, p.h)]
            yraw = (p.y + 512) & 0x3FF
            xraw = (p.x + 256) & 0x1FF
            ybit = (yraw >> 8) & 1
            L.append(f"\tAX_POSE({p.sprite}, OAM1({yraw & 0xFF}, {SHAPE_NAMES[shape]}, {ybit}), "
                     f"OAM2({xraw}, ST_OAM_SIZE_{size}, FLIP({int(p.hflip)}, {int(p.vflip)}), 0, 0), "
                     f"OAM3({p.tile}, 3, {pal_num})),")
        L.append("\tAX_POSE_TERMINATOR")
        L.append("};")
    L.append("")

    # Anim sequences (deduped)
    anim_names = {}
    anim_defs = []
    tables = []
    for g, group in enumerate(model.anims):
        row = []
        for d, seq in enumerate(group):
            key = tuple((f.dur, f.flag, f.pose, f.ox, f.oy, f.sx, f.sy) for f in seq)
            if key not in anim_names:
                nm = f"s{N}Anims_{g + 1}_{d + 1}"
                anim_names[key] = nm
                anim_defs.append((nm, seq))
            row.append(anim_names[key])
        tables.append(row)
    for nm, seq in anim_defs:
        L.append(f"static const ax_anim {nm}[] = {{")
        for f in seq:
            L.append(f"\t{{ .frames = {f.dur}, .unkFlags = {f.flag}, .poseId = {f.pose}, "
                     f".offset = {{{f.ox}, {f.oy}}}, .shadow = {{{f.sx}, {f.sy}}} }},")
        L.append("\tAX_ANIM_TERMINATOR")
        L.append("};")
    L.append("")

    # Sprites: one PNG per WAN image, no NULL strips (LZ eats the zeros).
    for sid, data in enumerate(model.sprites):
        n = sid + 1
        w = sprite_png_width(model, sid)
        tiles_to_png(data, w, model.palette).save(gfx_dir / f"sprite_{n}.png")
        ext = "4bpp" if ornament else "4bpp.lz"
        L.append(f'static const u8 s{N}Gfx{n}[] ALIGNED(4) = INCBIN_U8("{gfx_rel}/sprite_{n}.{ext}");')
        L.append(f"static const ax_sprite s{N}Sprites{n}[] = {{")
        L.append(f"\t{{s{N}Gfx{n}, {len(data)}}}, ")
        L.append("\t{NULL, 0}")
        L.append("};")
    L.append("")

    L.append(f"static const ax_pose *const sAxPoses{N}[] = {{")
    for i in range(len(model.poses)):
        L.append(f"\ts{N}Pose{i},")
    L.append("};")
    L.append("")
    L.append(f"static const struct PositionSets sAxPositions{N}[] = {{")
    for i, ps in enumerate(model.positions):
        sets = ", ".join(f"{{{x}, {y}}}" for x, y in ps)
        L.append(f"\t[{i}] = {{ .set = {{ {sets} }} }},")
    L.append("};")
    L.append("")
    for g, row in enumerate(tables):
        L.append(f"static const ax_anim *const s{N}AnimTable{g + 1}[] = {{")
        for nm in row:
            L.append(f"\tAX_ANIM_PTR({nm}),")
        L.append("};")
        L.append("")
    L.append(f"static const ax_anim *const *const sAxAnimations{N}[] = {{")
    for g in range(len(tables)):
        L.append(f"\ts{N}AnimTable{g + 1},")
    L.append("};")
    L.append("")
    L.append(f"static const ax_sprite *const sAxSprites{N}[] = {{")
    for sid in range(len(model.sprites)):
        L.append(f"\ts{N}Sprites{sid + 1},")
    L.append("};")
    L.append("")
    L.append(f"static const axmain sAxMain{N} = {{")
    L.append(f"\t.poses = sAxPoses{N},")
    L.append(f"\t.animations = sAxAnimations{N},")
    L.append(f"\t.animCount = ARRAY_COUNT(sAxAnimations{N}),")
    L.append(f"\t.spriteData = sAxSprites{N},")
    L.append(f"\t.positions = sAxPositions{N},")
    L.append("};")
    hdr_path.write_text("\n".join(L) + "\n")


def estimate_size(model: Model) -> dict:
    """Rough ROM bytes: LZ'd tiles + pose/anim/table data."""
    import zlib
    tiles_raw = sum(len(s) for s in model.sprites)
    # zlib level 9 is a decent stand-in for GBA LZ77 ratio (LZ77 is ~1.3x worse)
    tiles_lz = sum(int(len(zlib.compress(s, 9)) * 1.3) + 8 for s in model.sprites)
    poses = sum(10 * (len(p) + 1) + 4 for p in model.poses)
    uniq = {tuple((f.dur, f.flag, f.pose, f.ox, f.oy, f.sx, f.sy) for f in s)
            for g in model.anims for s in g}
    anims = 0
    for s in uniq:
        raw = b"".join(struct.pack("<BBhhhhh", *f) for f in s) + bytes(12)
        lz = int(len(zlib.compress(raw, 9)) * 1.3) + 4
        # compress_ax_anims.py only LZs sequences <= 256 bytes that shrink
        anims += lz if len(raw) <= 256 and lz < len(raw) else len(raw)
    other = 16 * len(model.positions) + 12 * len(model.sprites) + 36 * len(model.anims) + 20
    return {"tiles_raw": tiles_raw, "tiles_lz": tiles_lz,
            "tables": poses + anims + other, "total": tiles_lz + poses + anims + other}


# --------------------------------------------------------------------------
# AX header -> Model (for verification; handles generated and retail headers)
# --------------------------------------------------------------------------

POSE_ARR_RE = re.compile(r"static const ax_pose (\w+)\[\] = \{(.*?)\n\};", re.S)
PIECE_RE = re.compile(
    r"AX_POSE(?:_FULL)?\((-?\d+),(?:\s*-?\d+,\s*-?\d+,)?\s*OAM1\((\d+),\s*ST_OAM_(\w+)\s*,\s*(\d)\),\s*"
    r"OAM2\((\d+),\s*ST_OAM_SIZE_(\d),\s*FLIP\((\d),\s*(\d)\),\s*(\d),\s*(\d)\),\s*OAM3\((\d+),")
ANIM_ARR_RE = re.compile(r"(?:static\s+)?const ax_anim (\w+)\[\] = \{(.*?)\n\};", re.S)
FRAME_RE = re.compile(
    r"\.frames\s*=\s*(-?\d+)\s*,\s*\.unkFlags\s*=\s*(-?\d+)\s*,\s*\.poseId\s*=\s*(-?\d+)\s*,\s*"
    r"\.offset\s*=\s*\{\s*(-?\d+)\s*,\s*(-?\d+)\s*\}\s*,\s*\.shadow\s*=\s*\{\s*(-?\d+)\s*,\s*(-?\d+)\s*\}")
INCBIN_RE = re.compile(r'(?:static\s+)?const u8 (\w+)\[\]\s*(?:ALIGNED\(4\))?\s*=\s*INCBIN_U8\("([^"]+)"\);')
SHAPE_IDX = {"SQUARE": 0, "H_RECTANGLE": 1, "V_RECTANGLE": 2}


def _parse_anim_bytes(raw: bytes):
    out = []
    for i in range(0, len(raw) - 11, 12):
        dur, flag, pose, ox, oy, sx, sy = struct.unpack_from("<BBhhhhh", raw, i)
        if dur == 0:
            break
        out.append(Frame(dur, flag, pose, ox, oy, sx, sy))
    return out


_shared_cache = None


def _shared_anims():
    global _shared_cache
    if _shared_cache is None:
        _shared_cache = {}
        src = (ROOT / "src" / "data" / "ax_shared_anims.c")
        if src.exists():
            text = src.read_text()
            for m in INCBIN_RE.finditer(text):
                _shared_cache[m.group(1)] = _parse_anim_bytes(lz77_decompress((ROOT / m.group(2)).read_bytes()))
            for m in ANIM_ARR_RE.finditer(text):
                _shared_cache[m.group(1)] = [Frame(*map(int, f.groups())) for f in FRAME_RE.finditer(m.group(2))]
    return _shared_cache


def read_ax_header(hdr_path: Path, palette_idx=None) -> Model:
    text = hdr_path.read_text()
    model = Model()
    pose_by_name = {}
    for m in POSE_ARR_RE.finditer(text):
        pieces = []
        for p in PIECE_RE.finditer(m.group(2)):
            sp, y, shape, ybit, x, size, hf, vf, u1, u2, tile = p.groups()
            w, h = SHAPE_SIZE_TO_DIM[(SHAPE_IDX[shape], int(size))]
            yraw = int(y) | (int(ybit) << 8)
            xraw = int(x) | (int(u2) << 8)
            pieces.append(Piece(int(sp), xraw - 256, yraw - 512, w, h, hf == "1", vf == "1", int(tile)))
        pose_by_name[m.group(1)] = pieces
    pm = re.search(r"const ax_pose \*const \w+\[\] = \{(.*?)\};", text, re.S)
    model.poses = [pose_by_name[n] for n in re.findall(r"\w+", pm.group(1))]

    model.positions = [((0, 0),) * 4] * len(model.poses)
    posm = re.search(r"struct PositionSets \w+\[\] = \{(.*?)\n\};", text, re.S)
    if posm:
        for e in re.finditer(r"\[(\d+)\]\s*=\s*\{\s*\.set\s*=\s*\{([^\n]*)", posm.group(1)):
            pts = [tuple(map(int, q)) for q in re.findall(r"\{\s*(-?\d+),\s*(-?\d+)\s*\}", e.group(2))]
            i = int(e.group(1))
            if i < len(model.positions):
                model.positions[i] = tuple(pts)

    anims = dict(_shared_anims()) if "gAxSharedAnim_" in text else {}
    incbins = {m.group(1): m.group(2) for m in INCBIN_RE.finditer(text)}
    for nm, path in incbins.items():
        if "/anim_lz/" in path:
            anims[nm] = _parse_anim_bytes(lz77_decompress((ROOT / path).read_bytes()))
    for m in ANIM_ARR_RE.finditer(text):
        anims[m.group(1)] = [Frame(*map(int, f.groups())) for f in FRAME_RE.finditer(m.group(2))]
    tables = {m.group(1): re.findall(r"(?:AX_ANIM_PTR\()?(\w+)\)?,", m.group(2))
              for m in re.finditer(r"static const ax_anim \*const (\w+)\[\] = \{(.*?)\};", text, re.S)}
    am = re.search(r"const ax_anim \*const \*const \w+\[\] = \{(.*?)\};", text, re.S)
    for tn in re.findall(r"\w+", am.group(1)):
        model.anims.append([anims.get(a, []) for a in tables[tn]])

    # sprites
    sprite_arrays = {}
    for m in re.finditer(r"static const ax_sprite (\w+)\[\] = \{(.*?)\};", text, re.S):
        strips = []
        for e in re.finditer(r"\{\s*(\w+)\s*,\s*([^}]+?)\s*\}", m.group(2)):
            g, cnt = e.group(1), e.group(2)
            if g == "NULL":
                n = int(cnt)
                if n == 0:
                    break
                strips.append(bytes(n))
            else:
                png = ROOT / re.sub(r"\.4bpp(\.lz)?$", ".png", incbins[g])
                strips.append(png_to_tiles(png))
        sprite_arrays[m.group(1)] = b"".join(strips)
    sm = re.search(r"const ax_sprite \*const \w+\[\] = \{(.*?)\};", text, re.S)
    model.sprites = [sprite_arrays[n] for n in re.findall(r"\w+", sm.group(1))]

    if palette_idx is None:
        pm3 = re.search(r"OAM3\(\d+, \d+, (\d+)\)", text)
        palette_idx = int(pm3.group(1)) if pm3 else 0
    model.palette = load_red_palette(min(palette_idx, NUM_RED_PALETTES))
    return model


# --------------------------------------------------------------------------
# Rendering
# --------------------------------------------------------------------------

def render_pose(model: Model, pose_id: int, canvas: Image.Image, ox: int, oy: int):
    """Draw pose like sub_800533C/AddAxSprite: sprites DMA'd in order, then OAM."""
    if pose_id < 0 or pose_id >= len(model.poses):
        return
    vram = bytearray(64 * 1024)
    cursor = 0
    pieces = model.poses[pose_id]
    for p in pieces:
        if p.sprite >= 0:
            data = model.sprites[p.sprite]
            vram[cursor:cursor + len(data)] = data
            cursor += len(data)
    pal = model.palette
    px = canvas.load()
    W, H = canvas.size
    # GBA: earlier OAM entries are drawn on top -> paint in reverse
    for p in reversed(pieces):
        for ty in range(p.h):
            for tx in range(p.w):
                t = p.tile + ty * p.w + tx
                base = t * 32
                for yy in range(8):
                    for xx in range(8):
                        b = vram[base + yy * 4 + xx // 2]
                        ci = (b >> 4) if xx & 1 else (b & 0xF)
                        if ci == 0:
                            continue
                        lx, ly = tx * 8 + xx, ty * 8 + yy
                        if p.hflip:
                            lx = p.w * 8 - 1 - lx
                        if p.vflip:
                            ly = p.h * 8 - 1 - ly
                        X, Y = ox + p.x + lx, oy + p.y + ly
                        if 0 <= X < W and 0 <= Y < H:
                            c = pal[ci]
                            px[X, Y] = (c[0], c[1], c[2], 255)


def render_sheet(model: Model, groups, out: Path, cell=64, title=""):
    rows = []
    for g in groups:
        if g >= len(model.anims):
            continue
        for d in range(NUM_DIRS):
            seq = model.anims[g][d] if d < len(model.anims[g]) else []
            rows.append((g, d, seq))
    maxf = max((len(s) for _, _, s in rows), default=1)
    lw = 70
    img = Image.new("RGBA", (lw + cell * max(1, maxf), 14 + cell * len(rows)), (60, 60, 70, 255))
    dr = ImageDraw.Draw(img)
    dr.text((2, 1), title, fill=(255, 255, 255, 255))
    for r, (g, d, seq) in enumerate(rows):
        y0 = 14 + r * cell
        name = GROUP_NAMES[g] if g < len(GROUP_NAMES) else f"g{g}"
        dr.text((2, y0 + cell // 2 - 5), f"{g}:{name} {DIR_NAMES[d]}", fill=(255, 255, 255, 255))
        for c, f in enumerate(seq):
            x0 = lw + c * cell
            dr.rectangle([x0, y0, x0 + cell - 1, y0 + cell - 1], outline=(90, 90, 100, 255),
                         fill=(0, 127, 151, 255) if (r + c) % 2 else (16, 140, 160, 255))
            cx, cy = x0 + cell // 2, y0 + cell * 3 // 4
            # shadow position (green) and entity origin (red)
            sx, sy = cx + f.sx, cy + f.sy
            dr.ellipse([sx - 5, sy - 2, sx + 5, sy + 2], fill=(20, 40, 40, 255))
            render_pose(model, f.pose, img, cx + f.ox, cy + f.oy)
            dr.line([cx - 2, cy, cx + 2, cy], fill=(255, 0, 0, 255))
            dr.line([cx, cy - 2, cx, cy + 2], fill=(255, 0, 0, 255))
            dr.text((x0 + 1, y0 + cell - 10), str(f.dur), fill=(255, 255, 0, 255))
    out.parent.mkdir(parents=True, exist_ok=True)
    img.save(out)
    return out


def wan_model_unquantised(wans: dict):
    """EoS-native reference model (original palette) for side-by-side checks."""
    conv, mapping, used = build_monster_model(wans, max_tiles=None)
    conv.model.palette = wan_palette(next(iter(used.values())))
    return conv.model, mapping


# --------------------------------------------------------------------------
# Commands
# --------------------------------------------------------------------------

GEN4_RANGE = range(387, 494)


def species_slug(rom: EosRom, md_id: int) -> str:
    return f"eos{md_id:03d}"


def convert_monster(rom: EosRom, md_id: int, name: str, forced_palette=None,
                    max_tiles=None, quiet=False, dry_run=False):
    wans = rom.monster_wans(md_id)
    if not wans:
        raise SystemExit(f"EoS id {md_id}: no sprite")
    entry = rom.md.entries[md_id]
    if max_tiles is None:
        # Red reserves 16 OBJ tiles per body-size unit (dungeon_util.c, ground_sprite.c)
        max_tiles = TILES_PER_BODY_SIZE * max(1, entry.body_size)
    conv, mapping, used = build_monster_model(wans, max_tiles=max_tiles or None)
    pidx, err, mp, ranking = finalize_palette(conv, used, forced_palette)
    model = conv.model
    N = c_name(name)
    note = (f"EoS md {md_id} (dex {entry.national_pokedex_number}, sprite {entry.sprite_index}) -> "
            f"Red overworld palette {pidx}")
    if not dry_run:
        write_ax_header(model, name, AX_MON_DIR / name, AX_HDR_DIR / f"{name}.h", pidx,
                        f"gAx{N}", note)
    max_t = max(pose_tiles(p) for p in model.poses)
    size = estimate_size(model)
    info = {
        "name": name, "md": md_id, "dex": entry.national_pokedex_number, "palette": pidx,
        "pal_err": err, "runner_up": ranking[1][1], "poses": len(model.poses),
        "sprites": len(model.sprites), "max_tiles": max_t,
        "body_size": max(1, math.ceil(max_t / TILES_PER_BODY_SIZE)),
        "eos_body_size": entry.body_size, "cropped": conv.cropped,
        "mapping": mapping, **size,
    }
    if not quiet:
        print(f"{name}: palette {pidx} (err {err:.1f}, next best {ranking[1][1]} {ranking[1][0]:.1f}); "
              f"{len(model.poses)} poses, {len(model.sprites)} sprites, max {max_t} tiles "
              f"(body size {info['body_size']}, EoS {entry.body_size}; {conv.cropped} frames cropped), "
              f"~{size['total'] / 1024:.1f} KB")
    return info, model, wans


def cmd_convert(a):
    rom = EosRom(a.rom)
    md = rom.resolve_id(a.id)
    convert_monster(rom, md, a.name, a.palette, a.max_tiles)


def cmd_check(a):
    rom = EosRom(a.rom)
    md = rom.resolve_id(a.id)
    info, model, wans = convert_monster(rom, md, a.name, a.palette, a.max_tiles)
    out = Path(a.outdir)
    groups = [int(g) for g in a.groups.split(",")]
    ref, _ = wan_model_unquantised(wans)
    p1 = render_sheet(ref, groups, out / f"{a.name}_eos.png", title=f"EoS md {md} (original palette)")
    red = read_ax_header(AX_HDR_DIR / f"{a.name}.h")
    p2 = render_sheet(red, groups, out / f"{a.name}_ax.png",
                      title=f"{a.name}.h re-read (Red palette {info['palette']})")
    # side by side
    i1, i2 = Image.open(p1), Image.open(p2)
    both = Image.new("RGBA", (i1.width + i2.width + 4, max(i1.height, i2.height)), (0, 0, 0, 255))
    both.paste(i1, (0, 0))
    both.paste(i2, (i1.width + 4, 0))
    both.save(out / f"{a.name}_compare.png")
    print(f"wrote {out / (a.name + '_compare.png')}")


def cmd_render_wan(a):
    rom = EosRom(a.rom)
    md = rom.resolve_id(a.id)
    ref, mapping = wan_model_unquantised(rom.monster_wans(md))
    groups = [int(g) for g in a.groups.split(",")]
    render_sheet(ref, groups, Path(a.out), title=f"EoS md {md}")
    print(f"wrote {a.out}; group sources {mapping}")


def cmd_render_ax(a):
    model = read_ax_header(AX_HDR_DIR / f"{a.name}.h", a.palette)
    groups = [int(g) for g in a.groups.split(",")]
    render_sheet(model, groups, Path(a.out), title=a.name)
    print(f"wrote {a.out}")


def cmd_batch(a):
    rom = EosRom(a.rom)
    dexes = []
    if a.gen4:
        dexes = list(GEN4_RANGE)
    for r in a.ranges:
        lo, _, hi = r.partition("-")
        dexes += list(range(int(lo), int(hi or lo) + 1))
    names = {}
    if a.names:
        for line in Path(a.names).read_text().splitlines():
            if line.strip() and not line.startswith("#"):
                k, v = line.split()[:2]
                names[int(k)] = v
    total = 0
    print("dex  md   name           pal  poses spr  tiles body  KB  palerr")
    for dex in dexes:
        try:
            md = rom.resolve_id(f"dex{dex}")
        except SystemExit as ex:
            print(f"{dex:3d}  skipped: {ex}")
            continue
        name = names.get(dex, f"eos{dex:03d}")
        info, _, _ = convert_monster(rom, md, name, None, a.max_tiles, quiet=True, dry_run=a.dry_run)
        total += info["total"]
        print(f"{dex:3d}  {md:3d}  {name:14s} {info['palette']:3d}  {info['poses']:5d} {info['sprites']:4d} "
              f"{info['max_tiles']:5d} {info['body_size']:4d} {info['total'] / 1024:5.1f}  {info['pal_err']:5.1f}")
    print(f"total ~{total / 1024:.0f} KB for {len(dexes)} species")


# --------------------------------------------------------------------------
# Ground objects (ornaments)
# --------------------------------------------------------------------------

def pixels_to_tiles(pix, w, h) -> bytes:
    """Row-major 1-byte-per-pixel image -> GBA 4bpp tiles in 1D order."""
    out = bytearray()
    for ty in range(0, h, 8):
        for tx in range(0, w, 8):
            for yy in range(8):
                row = (ty + yy) * w + tx
                for xx in range(0, 8, 2):
                    out.append((pix[row + xx] & 0xF) | ((pix[row + xx + 1] & 0xF) << 4))
    return bytes(out)


def object_wan_model(raw: bytes):
    """Object/prop WAN (GROUND/*.wan, not a character sprite) -> Model.

    Uses skytemple's rust reader, which understands every WAN type. Returns the
    model in EoS colour indices with the EoS palette, the anim groups and the
    pixel count per colour index.
    """
    from skytemple_files.graphics.wan_wat.model import Wan
    wan = Wan(raw)
    m = wan.model
    model = Model()
    counts = [0] * 16
    frag_sprite = {}
    pose_of_frame = {}

    def sprite_for(frag):
        key = (frag.fragment_bytes_index, frag.resolution.x, frag.resolution.y)
        if key not in frag_sprite:
            fb = m.fragment_bytes_store.fragment_bytes[frag.fragment_bytes_index]
            pix = fb.decode_fragment(frag.resolution)
            for v in pix:
                counts[v & 0xF] += 1
            frag_sprite[key] = len(model.sprites)
            model.sprites.append(pixels_to_tiles(pix, frag.resolution.x, frag.resolution.y))
        return frag_sprite[key]

    def pose_for(fid):
        if fid in pose_of_frame:
            return pose_of_frame[fid]
        pieces = []
        loaded = {}
        cursor = 0
        for frag in wan.frames[fid].fragments:
            if frag.pal_idx != 0:
                print(f"warning: frame {fid} uses palette row {frag.pal_idx}", file=sys.stderr)
            sid = sprite_for(frag)
            w, h = frag.resolution.x // 8, frag.resolution.y // 8
            if sid in loaded:
                spr, tile = -1, loaded[sid]
            else:
                spr, tile = sid, cursor
                loaded[sid] = cursor
                cursor += w * h
            pieces.append(Piece(spr, frag.offset_x, frag.offset_y, w, h,
                                bool(frag.flip.flip_h), bool(frag.flip.flip_v), tile))
        pose_of_frame[fid] = len(model.poses)
        model.poses.append(pieces)
        fo = wan.frames[fid].frame_offset
        try:
            model.positions.append(tuple((q[0], q[1]) for q in
                                         (fo.head, fo.hand_left, fo.hand_right, fo.center)))
        except Exception:
            model.positions.append(((0, 0),) * 4)
        return pose_of_frame[fid]

    groups = []
    for g, grp in enumerate(wan.anim_groups):
        seqs = []
        for anim in grp:
            seqs.append([Frame(f.duration, f.flag, pose_for(f.frame_id), f.offset_x, f.offset_y,
                               f.shadow_offset_x, f.shadow_offset_y) for f in anim.frames])
        groups.append((g, seqs))
    pal = [bytes(c) for c in m.palette.palette]
    model.palette = [tuple(c[:3]) for c in pal[:16]] + [(0, 0, 0)] * max(0, 16 - len(pal))
    return model, groups, counts


def _eight(seqs):
    """Red picks anims by (group, direction): give every group 8 slots."""
    return seqs[:NUM_DIRS] if len(seqs) >= NUM_DIRS else [seqs[d % len(seqs)] for d in range(NUM_DIRS)]


def cmd_list_ground(a):
    rom = EosRom(a.rom)
    out = Path(a.outdir)
    out.mkdir(parents=True, exist_ok=True)
    for fn in rom.ground_names():
        if a.filter and a.filter.lower() not in fn.lower():
            continue
        try:
            model, groups, _ = object_wan_model(rom.raw_wan("GROUND/" + fn))
        except Exception as ex:
            print(f"{fn}: unreadable ({ex})")
            continue
        model.anims = [seqs[:NUM_DIRS] for _, seqs in groups if seqs]
        if not model.anims:
            continue
        render_sheet(model, list(range(min(4, len(model.anims)))), out / (fn + ".png"),
                     cell=96, title=fn)
        print(fn, len(model.poses), "poses", [len(s) for _, s in groups], "seqs/group")


def cmd_ornament(a):
    rom = EosRom(a.rom)
    model, groups, counts = object_wan_model(rom.raw_wan(a.wan))
    kept = [g for g, seqs in groups if seqs]
    model.anims = [_eight(seqs) for _, seqs in groups if seqs]
    src_pal = model.palette
    N = c_name(a.name)
    gfx_dir = ROOT / "graphics" / "ornament" / N
    hdr = ROOT / "src" / "data" / "ornament" / f"{a.name}.h"
    if a.own_palette:
        pidx = None
        pal_path = ROOT / "graphics" / "ornament" / "pal" / f"{a.name}.pal"
        pal_path.parent.mkdir(parents=True, exist_ok=True)
        snapped = [tuple((v >> 3) << 3 for v in c) for c in src_pal]
        pal_path.write_text("JASC-PAL\r\n0100\r\n16\r\n" +
                            "".join(f"{r} {g} {b}\r\n" for r, g, b in snapped))
        model.palette = snapped
        note = f"EoS {a.wan} -> ornament with its own palette graphics/ornament/pal/{a.name}.pal"
        pal_num = 0
    else:
        (err, pidx, mp), _ = choose_palette(src_pal, counts, a.palette)
        model.sprites = [remap_4bpp(s_, mp) for s_ in model.sprites]
        model.palette = load_red_palette(pidx)
        note = f"EoS {a.wan} -> ornament, Red overworld palette {pidx} (err {err:.1f})"
        pal_num = pidx
    write_ax_header(model, a.name, gfx_dir, hdr, pal_num, f"gAx{N}", note, ornament=True)
    if a.own_palette:
        with hdr.open("a") as f:
            f.write(f'\nconst RGB_Struct g{N}Pal[] = {{ INCBIN_RGB("graphics/ornament/pal/{a.name}.pmdpal") }};\n')
    max_t = max(pose_tiles(p_) for p_ in model.poses)
    size = estimate_size(model)
    print(f"{a.name}: EoS groups {kept}, palette {'own' if pidx is None else pidx}, "
          f"{len(model.poses)} poses, {len(model.sprites)} sprites, max {max_t} tiles, "
          f"tiles {size['tiles_raw']} B uncompressed, ~{(size['tiles_raw'] + size['tables']) / 1024:.1f} KB")
    if a.check:
        out = Path(a.check)
        ref, groups2, _ = object_wan_model(rom.raw_wan(a.wan))
        ref.anims = [_eight(seqs) for _, seqs in groups2 if seqs]
        render_sheet(ref, [0], out / f"{a.name}_eos.png", cell=64, title=a.wan)
        red = read_ax_header(hdr, pal_num)
        red.palette = model.palette
        render_sheet(red, [0], out / f"{a.name}_ax.png", cell=64, title=f"{a.name}.h re-read")
        print(f"wrote {out}/{a.name}_eos.png and {a.name}_ax.png")



def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    def common(p):
        p.add_argument("--palette", type=int, default=None, help="force Red overworld palette 0..12")
        p.add_argument("--max-tiles", type=int, default=None,
                       help="crop poses to this many VRAM tiles (default 16 x EoS body size; 0 = never crop)")

    p = sub.add_parser("convert")
    p.add_argument("rom")
    p.add_argument("id", help="EoS monster.md index, or dexN")
    p.add_argument("name")
    common(p)
    p.set_defaults(fn=cmd_convert)

    p = sub.add_parser("check")
    p.add_argument("rom")
    p.add_argument("id")
    p.add_argument("name")
    p.add_argument("outdir")
    p.add_argument("--groups", default="7,0")
    common(p)
    p.set_defaults(fn=cmd_check)

    p = sub.add_parser("render-ax")
    p.add_argument("name")
    p.add_argument("out")
    p.add_argument("--groups", default="7,0")
    p.add_argument("--palette", type=int, default=None)
    p.set_defaults(fn=cmd_render_ax)

    p = sub.add_parser("render-wan")
    p.add_argument("rom")
    p.add_argument("id")
    p.add_argument("out")
    p.add_argument("--groups", default="7,0")
    p.set_defaults(fn=cmd_render_wan)

    p = sub.add_parser("batch")
    p.add_argument("rom")
    p.add_argument("ranges", nargs="*", help="dex ranges, e.g. 387-395")
    p.add_argument("--gen4", action="store_true")
    p.add_argument("--dry-run", action="store_true", help="report only, write nothing")
    p.add_argument("--names", help="file with 'dex name' lines (default eosNNN)")
    p.add_argument("--max-tiles", type=int, default=None)
    p.set_defaults(fn=cmd_batch)

    p = sub.add_parser("list-ground")
    p.add_argument("rom")
    p.add_argument("outdir")
    p.add_argument("filter", nargs="?")
    p.set_defaults(fn=cmd_list_ground)

    p = sub.add_parser("ornament")
    p.add_argument("rom")
    p.add_argument("wan", help="path inside the ROM, e.g. GROUND/xxx.wan")
    p.add_argument("name")
    p.add_argument("--own-palette", action="store_true",
                   help="keep the EoS colours in graphics/ornament/pal/<name>.pal (needs an extend palette slot)")
    p.add_argument("--check", metavar="OUTDIR", help="also write EoS/AX comparison sheets here")
    common(p)
    p.set_defaults(fn=cmd_ornament)

    a = ap.parse_args(argv)
    a.fn(a)


if __name__ == "__main__":
    main()
