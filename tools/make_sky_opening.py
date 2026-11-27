#!/usr/bin/env python3
"""Explorers of Sky demake: the opening's Shaymin scene (before the title).

    tools/make_sky_opening.py EOS.nds [--check OUTDIR]

EoS boots into an opening (unionall.ssb coroutine DEMO_02) whose first scene
is SCRIPT/S13P02A/t02a0201.ssb: the sky with the sun and a lens flare on the
top screen, a flash, then the camera pans down the level S13P02A (sky over a
landscape, 256x576, on the two screens) while Shaymin (Sky Forme) flies in
from the distance towards the camera and away, trailing Gracidea petals.

From the ROM this writes, in graphics/custom/sky_opening/:

  * sky.tiles / sky.pal: the level's two layers (MAP_BG/s13p02a.bma/.bpc/
    .bpl: layer 1 the sky, layer 0 the landscape) as one picture, the
    middle 240 of its 256 columns, top 528 lines, as raw 8bpp tiles (30 per
    row) for the pan, with up to 240 colours picked in GBA colours.
  * flare / shaymin / petals .png (built into .4bpp / .gbapal): the scene's three objects
    (GROUND/s13p02a1.wan the lens flare, s13p02a2.wan Shaymin, s13p02a3.wan
    the petals): their WAN fragments as 8x8 tiles stacked in OBJ 1D order
    (one piece = one OBJ: the DS and the GBA share OBJ shapes) with their
    16 colours.

and src/data/sky_opening.h: every frame's pieces (offset, shape, size, tile)
and the frames the scene shows, from the WAN sequences the script plays
(the timing is in src/sky_opening.c, measured in EoS frame by frame).

The ROM is only read, never copied into the repository.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

import ndspy.rom
import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "tools"))
import convert_title_backgrounds as title  # noqa: E402
import make_sky_cutaways  # noqa: E402,F401  (PIL putpalette patch)
from skytemple_files.common.types.file_types import FileType  # noqa: E402
from skytemple_files.graphics.wan_wat.model import Wan  # noqa: E402

OUT = ROOT / "graphics" / "custom" / "sky_opening"
GEN_H = ROOT / "src" / "data" / "sky_opening.h"

LEVEL = "s13p02a"
CROP_X = 56          # map columns 56..295: the middle 240 of the DS's 256 (48..303)
ROWS = 66            # 528 lines: the GBA camera ends at y 356 (+160)
SKY_LAYER_END = 264  # layer 1 (sky) covers lines 0..263, layer 0 the rest

# (name, WAN, the sequence the script plays: SetAnimation 18 / 17 / 17)
OBJECTS = [
    ("flare", "GROUND/s13p02a1.wan", 1),
    ("shaymin", "GROUND/s13p02a2.wan", 0),
    ("petals", "GROUND/s13p02a3.wan", 0),
]
# The flare's frames alternate with the empty frame 14 (EoS's flicker for
# half transparency); the GBA blends it instead, so those are dropped and
# each frame lasts two.
FLARE_BLANK = 14

# The rest of EoS's opening (unionall.ssb DEMO_02, after t02a0201): the
# scenes as DeSmuME frames from power-on (a cold boot, no input), first and
# last frame on screen. EoS starts bgm0001 at about frame 700; scenes marked
# `signal` start on the song's signal (WaitBgmSignal: SMDL event 0xF6 at that
# tick), the others right after the previous scene.
SCENES = [
    dict(name="lapras", script="S13P03A/t02a0202", start=1196, end=1484),
    dict(name="treasure", script="S13P04B/t02a0203", start=1583, end=1973),
    dict(name="timegear", script="S13P05A/t02a0204", start=2031, end=2216),
    dict(name="logo", script="S13P06A/t02a0205", start=2300, end=2668),
    dict(name="bidoof", script="P15P01A/t02a0301", start=2716, end=2884),
    dict(name="charms", script="P26P01A/t02a0302", start=2935, end=3089),
    dict(name="sableye", script="P08P01A/t02a0303", start=3142, end=3312),
    dict(name="island", script="V24P05A/t02a0308", start=3405, end=3542),
    dict(name="crystal", script="V10P03C/t02a0309", start=3629, end=3823),
    dict(name="dialga", script="V26P07A/t02a0310", start=3882, end=4021),
    dict(name="forest", script="S13P08A/t02a0311", start=4112, end=4401),
    dict(name="march", script="S13P06A/t02a0401", start=4510, end=4867),
    dict(name="hills", script="S13P09A/t02a0402", start=4935, end=5179),
]

# The GBA scenes: which recording, its frame range (indices into the
# recording), the two GBA BG layers (BG2 in front, BG3 behind), each one or
# two DS map layers of the top screen, the bottom one or both (EoS's
# continuous two-screen maps), with options: versions (the layer's content
# changes: animated tiles, a growing glow; "frames": a still layer, a version
# per different picture), lock (the axis that does not
# move; "rows": only vertical, from the rows' mean colours, for a sky and sea
# whose bands slide sideways at their own speeds), wrap (the axes along which
# a layer that repeats is cut to one period: "x" for a sea that scrolls
# sideways but has a top edge), top (nothing of the layer above the top edge
# of its first picture), cuts
# (the camera jumps: each jump starts a new world), and
# the GBA view: keyframes (index, x, y) in "canvas" pixels, the DS's top
# screen (y 0-191) over its bottom one (y 192-383).
GBA_SCENES = [
    dict(name="lapras", rec="lapras",
         bg=[("both", [2], dict(wrap="x", top=True)), ("both", [3], dict(lock="rows"))],
         view=[(0, 8, 70), (100, 8, 95), (200, 8, 165), (288, 8, 170)]),
    dict(name="treasure", rec="treasure",
         bg=[("both", [2]), ("both", [3])],
         view=[(0, 8, 16), (60, 8, 16), (330, 8, 208), (390, 8, 208)]),
    dict(name="timegear", rec="timegear",
         bg=[("both", [2], dict(versions=4)), ("both", [3], dict(versions=10))],
         view=[(0, 8, 100), (185, 8, 140)]),
    dict(name="logo_top", rec="logo", frames=(0, 110),
         bg=[("top", [2]), ("top", [3])],
         view=[(0, 8, 16)]),
    # The logo (EoS: on the top screen all through the scene) goes over the
    # field as OBJs, 152 px wide, and "EXPLORERS OF SKY" (OBJs at bottom
    # screen lines 64-90) moves down 42 lines to sit under it, as on the title.
    dict(name="logo_field", rec="logo", frames=(111, 368),
         bg=[("bottom", [2]), ("bottom", [3])],
         view=[(111, 8, 224)],
         logo=dict(width=152, y=2), obj_shift=[(0, 192 + 40, 256, 192 + 110, 0, 42)]),
    dict(name="bidoof", rec="bidoof", bg=[("bottom", [2]), ("bottom", [3])], view=[(0, 8, 208)]),
    dict(name="charms", rec="charms", bg=[("bottom", [2]), ("bottom", [3])], view=[(0, 8, 208)]),
    dict(name="sableye", rec="sableye", bg=[("bottom", [2]), ("bottom", [3])], view=[(0, 8, 208)]),
    # (EoS flashes the view through eight spots of the map in its first 16
    # frames, during the fade-in; the GBA starts on the last one)
    dict(name="island", rec="island", frames=(18, 137),
         bg=[("bottom", [2], dict(cuts=True)), ("bottom", [3], dict(cuts=True))], view=[(18, 8, 208)]),
    dict(name="crystal", rec="crystal",
         bg=[("both", [2], dict(versions=6)), ("both", [3])],
         view=[(0, 8, 60), (194, 8, 200)]),
    dict(name="dialga", rec="dialga", bg=[None, ("both", [3], dict(lock="x"))], view=[(0, 8, 176)]),
    # (BG2: the light from the box, rays that grow, blended over the scene)
    dict(name="forest", rec="forest", bg=[("bottom", [2], dict(versions="frames")), ("bottom", [3])], view=[(0, 8, 208)]),
    dict(name="march", rec="march", bg=[("both", [2]), ("both", [3])], view=[(0, 8, 208)]),
    dict(name="hills", rec="hills", bg=[("both", [2]), ("both", [3])],
         view=[(0, 8, 212), (120, 8, 212), (200, 8, 20), (244, 8, 20)]),
]

SHAPES = {
    (8, 8): (0, 0), (16, 16): (0, 1), (32, 32): (0, 2), (64, 64): (0, 3),
    (16, 8): (1, 0), (32, 8): (1, 1), (32, 16): (1, 2), (64, 32): (1, 3),
    (8, 16): (2, 0), (8, 32): (2, 1), (16, 32): (2, 2), (32, 64): (2, 3),
}


def gba15(c) -> int:
    return (c[0] >> 3) | ((c[1] >> 3) << 5) | ((c[2] >> 3) << 10)


def render_level(rom) -> Image.Image:
    get = lambda n: rom.getFileByName("MAP_BG/" + n)
    bma = FileType.BMA.deserialize(get(LEVEL + ".bma"))
    bpc = FileType.BPC.deserialize(get(LEVEL + ".bpc"))
    pals = FileType.BPL.deserialize(get(LEVEL + ".bpl")).palettes
    sky = np.asarray(bma.to_pil_single_layer(bpc, pals, [None] * 8, 1).convert("RGB"))
    land = np.asarray(bma.to_pil_single_layer(bpc, pals, [None] * 8, 0).convert("RGB"))
    full = land.copy()
    full[:SKY_LAYER_END] = sky[:SKY_LAYER_END]
    return Image.fromarray(full[:ROWS * 8, CROP_X:CROP_X + 240])


def write_sky(rom, check: Path | None) -> None:
    im = render_level(rom)
    q = title.quantize_gba(im, colors=240)
    pal = q.getpalette()
    ncol = len(set(q.get_flattened_data()))
    px = np.array(q)
    tiles = bytearray()
    for ty in range(ROWS):
        for tx in range(30):
            tiles += px[ty * 8:(ty + 1) * 8, tx * 8:(tx + 1) * 8].astype(np.uint8).tobytes()
    (OUT / "sky.tiles").write_bytes(tiles)
    # 240 RGBX, as graphics/custom/sky_scrolls/*.pal
    (OUT / "sky.pal").write_bytes(bytes(b for i in range(240) for b in (*(pal + [0] * 720)[i * 3:i * 3 + 3], 0x80)))
    q.convert("RGB").save(OUT / "sky_check.png")
    print(f"sky: {ROWS} rows, {ncol} colours, {len(tiles)} bytes")
    if check:
        im.save(check / "sky_eos.png")


def save_tiles_png(path: Path, data: bytes, pal) -> None:
    """GBA 4bpp tiles -> an 8-px-wide indexed PNG, the tiles stacked in order
    (the build's gbagfx turns it back into the same .4bpp and a .gbapal)."""
    n = len(data) // 32
    img = Image.new("P", (8, max(8, n * 8)))
    img.putpalette([v for c in pal for v in c[:3]] + [0] * (48 - 3 * len(pal)))
    px = img.load()
    for t in range(n):
        for i in range(32):
            b = data[t * 32 + i]
            y, x = t * 8 + i // 4, (i % 4) * 2
            px[x, y] = b & 0xF
            px[x + 1, y] = b >> 4
    img.save(path, optimize=True)


def frag_tiles(pix, w, h) -> bytes:
    out = bytearray()
    for ty in range(0, h, 8):
        for tx in range(0, w, 8):
            for yy in range(8):
                row = (ty + yy) * w + tx
                for xx in range(0, 8, 2):
                    out.append((pix[row + xx] & 0xF) | ((pix[row + xx + 1] & 0xF) << 4))
    return bytes(out)


def convert_object(rom, name: str, path: str):
    wan = Wan(rom.getFileByName(path))
    m = wan.model
    blobs: dict = {}
    data = bytearray()
    frames = []
    for fid, fr in enumerate(wan.frames):
        pieces = []
        for frag in fr.fragments:
            w, h = frag.resolution.x, frag.resolution.y
            key = (frag.fragment_bytes_index, w, h)
            if key not in blobs:
                pix = m.fragment_bytes_store.fragment_bytes[frag.fragment_bytes_index].decode_fragment(frag.resolution)
                blobs[key] = len(data) // 32
                data += frag_tiles(pix, w, h)
            shape, size = SHAPES[(w, h)]
            flip = int(bool(frag.flip.flip_h)) | (int(bool(frag.flip.flip_v)) << 1)
            pieces.append((frag.offset_x, frag.offset_y, shape, size, flip, blobs[key], w * h // 64))
        frames.append(pieces)
    pal = [tuple(c[:3]) for c in m.palette.palette][:16]
    save_tiles_png(OUT / f"{name}.png", bytes(data), pal)
    seqs = [[(f.frame_id, f.duration) for f in anim.frames] for grp in wan.anim_groups for anim in grp]
    print(f"{name}: {len(frames)} frames, {len(data) // 32} tiles, "
          f"max {max(sum(p[6] for p in f) for f in frames)} tiles a frame")
    return frames, seqs, pal


# EoS starts the song at about DeSmuME frame 700 (measured: every signal
# scene fades in 1-2 frames after its signal tick, at 104 ticks a second:
# 130 bpm x 48 a quarter). The GBA's m4a song counts 24 a quarter.
SONG_START_FRAME = 700
DS_FPS = 59.8261
SCENES_H = ROOT / "src" / "data" / "sky_opening_scenes.h"
SCENES_OUT = OUT / "scenes"
TITLE_FRAME = 5283   # t02a0501 fades the title in from white (signal 7)


def song_tick(ds_frame: int) -> int:
    """The m4a clock (24 a quarter) at an EoS frame."""
    return max(0, round((ds_frame - SONG_START_FRAME) * 104 / DS_FPS / 2))


def write_scenes(rom_path: str, cache: Path, check) -> None:
    import struct as st
    import sky_opening_record as recmod
    import sky_opening_scenes as so

    recmod.record(rom_path, cache, SCENES)
    SCENES_OUT.mkdir(parents=True, exist_ok=True)
    rec_start = {s["name"]: s["start"] for s in SCENES}
    lines = ["/* Generated by tools/make_sky_opening.py — do not edit. */",
             "/* EoS's opening after the Shaymin scene, recorded from EoS (tools/sky_opening_record.py)",
             " * and converted by tools/sky_opening_scenes.py. Blob: frames, OBJs, BG palette sets,",
             " * OBJ palette sets, OBJ tiles, then per layer its tiles and each version's map. */", ""]
    table = []
    total = 0
    synced = set()
    for cfg in GBA_SCENES:
        if "logo" in cfg:
            import sky_opening_logo
            lg = sky_opening_logo.logo_objs(ndspy.rom.NintendoDSRom.fromFile(rom_path), cfg["logo"]["width"])
            # centred on the 16-px grid's picture, not the padded pieces
            cfg = dict(cfg, overlay=dict(lg, x=(240 - lg["w"]) // 2, y=cfg["logo"]["y"]))
        cv = so.convert_scene(cache, cfg)
        name = cfg["name"]
        blob = bytearray()

        def align():
            while len(blob) % 4:
                blob.append(0)
        off = {"frames": len(blob)}
        for fr in cv["frames"]:
            blob += st.pack("<4hHBBBBBbbBBB", fr["x"][0], fr["y"][0], fr["x"][1], fr["y"][1], fr["first"],
                            fr["count"], fr["ver"][0], fr["ver"][1], fr["bgpal"], fr["objpal"],
                            fr["fadeA"], fr["fadeB"], fr["eva"], fr["evb"], fr["flags"])
        align()
        off["objs"] = len(blob)
        for (x, y, tile, attr) in cv["objs"]:
            blob += st.pack("<hhHH", x, y, tile, attr)
        off["bgsets"] = len(blob)
        for cols, mask in cv["bg_sets"]:
            blob += st.pack("<256HHH", *cols, mask, 0)
        off["objsets"] = len(blob)
        for cols, mask in cv["obj_sets"]:
            blob += st.pack("<256HHH", *cols, mask, 0)
        off["objtiles"] = len(blob)
        blob += cv["obj_tiles"]
        align()
        vers, nver = [], []
        for g in cv["layers"]:
            if g is None:
                nver.append(0)
                continue
            nver.append(len(g["versions"]))
            to = len(blob)   # the layer's tiles, shared by its versions
            blob += g["tiles"]
            align()
            for v in g["versions"]:
                mo = len(blob)
                blob += st.pack(f"<{len(v['map'])}I", *v["map"])
                vers.append((v["w"], v["h"], int(v["wrapx"]) | (int(v["wrapy"]) << 1), mo, to))
        (SCENES_OUT / f"{name}.bin").write_bytes(bytes(blob))
        total += len(blob)
        first = cv["start"] + rec_start[cfg["rec"]]
        tick = -1 if cfg["rec"] in synced else song_tick(first)
        synced.add(cfg["rec"])
        lines.append(f'static const u32 sOpBlob_{name}[] = INCBIN_U32("graphics/custom/sky_opening/scenes/{name}.bin");')
        lines.append(f"static const struct SkyOpVersion sOpVer_{name}[] = {{")
        for (w, h, fl, mo, to) in vers or [(0, 0, 0, 0, 0)]:
            lines.append(f"    {{ {w}, {h}, {fl}, 0, {mo}, {to} }},")
        lines.append("};")
        table.append(f"    {{ sOpBlob_{name}, sOpVer_{name}, {len(cv['frames'])}, {tick}, {{ {nver[0]}, {nver[1]} }}, 0, "
                     f"{off['frames']}, {off['objs']}, {off['bgsets']}, {off['objsets']}, {off['objtiles']} }}, "
                     f"/* {name}: EoS frames {first}-{first + len(cv['frames']) - 1} */")
        print(f"{name}: {len(cv['frames'])} frames, {len(cv['objs'])} OBJs, {len(cv['obj_tiles'])} B OBJ tiles, "
              f"{len(cv['bg_sets'])}+{len(cv['obj_sets'])} palette sets, {len(blob)} B, start tick {tick}, "
              f"most OBJ tiles in a frame {cv['max_tiles']}", flush=True)
        if check:
            write_check(cv, check / f"opening_{name}.png", so)
    lines.append("")
    lines.append(f"#define SKY_OP_SCENE_COUNT {len(GBA_SCENES)}")
    lines.append(f"#define SKY_OP_TITLE_TICK {song_tick(TITLE_FRAME)}")
    lines.append("static const struct SkyOpScene sOpScenes[SKY_OP_SCENE_COUNT] = {")
    lines += table
    lines.append("};")
    SCENES_H.write_text("\n".join(lines) + "\n")
    print(f"scenes: {total} bytes")


def write_check(cv, path: Path, so, step=24) -> None:
    """EoS (the GBA view's 240x160 of the DS screens) beside the converted
    data drawn the way src/sky_opening.c draws it."""
    rows = []
    for fi in range(0, len(cv["frames"]), step):
        i = cv["start"] + fi
        wx, wy = cv["views"][fi]
        ds = so.rgb8(cv["rec"].layers["full"][i][wy:wy + 160, wx:wx + 240])
        gba = so.rgb8(so.render_gba(cv, fi))
        rows.append(np.concatenate([ds, np.full((160, 4, 3), 255, np.uint8), gba], 1))
    cols = 3
    while len(rows) % cols:
        rows.append(np.zeros_like(rows[0]))
    grid = np.concatenate([np.concatenate(rows[r:r + cols], 1) for r in range(0, len(rows), cols)], 0)
    Image.fromarray(grid).save(path)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("rom")
    ap.add_argument("--check", type=Path, help="also write EoS vs GBA comparison sheets here")
    ap.add_argument("--cache", type=Path, default=ROOT / "build" / "sky_opening_rec",
                    help="where the DeSmuME recordings go (tools/sky_opening_record.py)")
    ap.add_argument("--no-scenes", action="store_true", help="only the Shaymin scene")
    a = ap.parse_args()
    rom = ndspy.rom.NintendoDSRom.fromFile(a.rom)
    OUT.mkdir(parents=True, exist_ok=True)
    if a.check:
        a.check.mkdir(parents=True, exist_ok=True)
    write_sky(rom, a.check)

    lines = ["/* Generated by tools/make_sky_opening.py — do not edit. */",
             f"#define SKY_OPENING_SKY_ROWS {ROWS}", ""]
    for name, path, seq in OBJECTS:
        frames, seqs, _ = convert_object(rom, name, path)
        N = name.upper()
        pieces = [p for f in frames for p in f]
        lines.append(f"static const struct SkyOpeningPiece s{name.capitalize()}Pieces[] = {{")
        for x, y, shape, size, flip, tile, _n in pieces:
            lines.append(f"    {{ {x}, {y}, {shape}, {size}, {flip}, {tile} }},")
        lines.append("};")
        lines.append(f"static const struct SkyOpeningFrame s{name.capitalize()}Frames[] = {{")
        first = 0
        for f in frames:
            lines.append(f"    {{ {first}, {len(f)} }},")
            first += len(f)
        lines.append("};")
        if name == "flare":
            ids = [fid for fid, _ in seqs[seq] if fid != FLARE_BLANK]
        else:
            # one entry a frame; the trailing return to frame 0 is dropped
            ids = [fid for fid, d in seqs[seq][:-1] for _ in range(d)]
        lines.append(f"/* EoS sequence {seq}: one frame id per {'two frames' if name == 'flare' else 'frame'} */")
        lines.append(f"static const u8 s{name.capitalize()}Seq[] = {{ {', '.join(map(str, ids))} }};")
        lines.append(f"#define SKY_OPENING_{N}_FRAMES {len(frames)}")
        lines.append("")
    GEN_H.write_text("\n".join(lines) + "\n")
    if not a.no_scenes:
        write_scenes(a.rom, a.cache, a.check)
    return 0


if __name__ == "__main__":
    sys.exit(main())
