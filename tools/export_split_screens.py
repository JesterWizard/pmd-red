#!/usr/bin/env python3
"""Explorers of Sky demake: every chapter-1 moment where EoS uses both DS
screens, as a linked pair of PNGs to paint the gap between them for the GBA.

    tools/export_split_screens.py EOS.nds [--out DIR] [--only NAME ...]
    tools/export_split_screens.py --join DIR/NAME      # preview a pair joined

For each pair, DIR/NAME/ holds:

  top.png     the DS top screen (256x192) with a transparent strip of GAP
              lines under it
  bottom.png  a transparent strip of GAP lines, then the DS bottom screen
  link.json   how the two join, where they come from, how the GBA uses them

Stacked, top.png over bottom.png is one 256 x (2 * (192 + GAP)) picture
whose two strips meet in the middle: paint the gap into either strip.
EoS's own two-screen gap (back2_SetMode(6), the opening's Lapras scene) is
64 lines, so GAP is 64; a pair can be given more by enlarging the canvases
and their numbers in link.json.

Story scenes are rendered from EoS's levels (MAP_BG, both layers, animated
tiles at frame 0, no sprites), framed where EoS's cameras put them (the
scripts' camera2_SetPositionMark for the top screen, the demake's measured
first view for the bottom). The opening and the title are EoS's screens as
shown, sprites included, captured in DeSmuME from power-on (no input).

Export only: the build does not read these files.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "graphics" / "custom" / "split_screens"
W, H = 256, 192
GAP = 64

# Story scenes: (name, what, EoS scripts, top level, top centre, bottom
# level, bottom centre, how the GBA shows it). Centres are level pixels.
T = 8
STORY = [
    ("storm_cliff", "The cliff in the storm (dark), over the stormy sea", "m01a0102",
     "v01p02a", (52 * T, 12.5 * T), "v01p01a", None,
     "the cliff full screen (src/sky_storm.c), then the stormy sea map; no pan between them"),
    ("storm_cliff_lit", "The cliff lit by lightning, over the stormy sea", "m01a0102",
     "v01p02a", (15 * T, 12.5 * T), "v01p01a", None,
     "the lit half of the cliff picture (lightning flashes)"),
    ("beach_day", "The sky over the beach by day, over the beach", "m01a0103",
     "v01p03a", (33 * T, 9.5 * T + 4), "d01p11a", (166 + 120, 88 + 80),
     "pans down from the sky CG into the map (SKY_DAY_SCROLL, tools/make_sky_cutaway_scrolls.py)"),
    ("guild", "Dusk clouds over Wigglytuff's Guild, over the guild", "m01a0104",
     "v02p01a", (132, 96), "g01p01b2", (118 + 120, 112 + 80),
     "pans down from the clouds CG into the map (GUILD_SKY_SCROLL)"),
    ("guild_relic_fragment", "The Relic Fragment close-up, over the partner at the grate", "m01a0104",
     "v01p06b", (21 * T, 15 * T), "g01p01b2", (30 * T, 25 * T),
     "the close-up full screen between fades (SKY_CUTAWAY RELIC_FRAGMENT)"),
    ("beach_dusk", "The sky at dusk, over the beach at sunset", "m01a0201, m01a0206, m01a0208, m01a0301, m01a0702",
     "v01p03b", (33 * T, 9.5 * T + 4), "d01p11b", (188 + 120, 100 + 80),
     "the map only (the top CG is not shown)"),
    ("beach_dusk_relic_fragment", "The Relic Fragment close-up, over the heroes on the beach", "m01a0702",
     "v01p06b", (21 * T, 15 * T), "d01p11b", (50 * T, 22 * T),
     "the close-up full screen between fades"),
    ("krabby_bubbles", "The sky at dusk, over Krabby's bubbles", "m01a0202",
     "v01p03b", (33 * T, 9.5 * T + 4), "v01p04b", None,
     "the bubbles scene only"),
    ("krabby_sunset", "The sky at dusk, over the bubbles at sunset", "m01a0203",
     "v01p03b", (33 * T, 9.5 * T + 4), "v01p05b", None,
     "the sunset scene only"),
] + [
    (f"sunset_sea_{i}", f"The sunset sky over the glittering sea, frame {i} of 8", "m01a0205, m01a0207",
     "v26p06a", (19 * T, 15.5 * T), "v26p05a", ((19.5 + 39 * (i % 3)) * T, (13.5 + 30 * (i // 3)) * T),
     "rows 92-171 of the sky over rows 0-79 of the sea, cut at y 80 (SKY_CUTAWAY SUNSET_SEA0 + i)")
    for i in range(8)
]

# The opening and the title, from DeSmuME (frames from power-on).
# (name, what, EoS script, first frame, last frame, picks): picks are the
# frames to export, or "bright" (the most detailed frame: fully faded in) or
# "start"/"end" (the most detailed of the first / last third: a moving camera).
OPENING = [
    ("op_shaymin_start", "Opening: the sky with the sun, the camera about to pan down", "S13P02A/t02a0201", 780, 780),
    ("op_shaymin_end", "Opening: the land, Shaymin gone", "S13P02A/t02a0201", 1070, 1070),
    ("op_lapras_start", "Opening: Lapras on the sea", "S13P03A/t02a0202", 1196, 1484, "start"),
    ("op_lapras_end", "Opening: the camera up at the Wingull", "S13P03A/t02a0202", 1196, 1484, "end"),
    ("op_treasure_start", "Opening: the treasure chest (top)", "S13P04B/t02a0203", 1583, 1973, "start"),
    ("op_treasure_end", "Opening: the treasure chest (camera down)", "S13P04B/t02a0203", 1583, 1973, "end"),
    ("op_timegear", "Opening: the Time Gear", "S13P05A/t02a0204", 2031, 2216, "bright"),
    ("op_logo", "Opening: the logo over the field", "S13P06A/t02a0205", 2300, 2668, "end"),
    ("op_bidoof", "Opening: Bidoof", "P15P01A/t02a0301", 2716, 2884, "bright"),
    ("op_charms", "Opening: the charms", "P26P01A/t02a0302", 2935, 3089, "bright"),
    ("op_sableye", "Opening: Sableye", "P08P01A/t02a0303", 3142, 3312, "bright"),
    ("op_island", "Opening: the island", "V24P05A/t02a0308", 3423, 3542, "bright"),
    ("op_crystal_start", "Opening: the crystal cave (top)", "V10P03C/t02a0309", 3629, 3823, "start"),
    ("op_crystal_end", "Opening: the crystal cave (camera down)", "V10P03C/t02a0309", 3629, 3823, "end"),
    ("op_dialga", "Opening: Dialga", "V26P07A/t02a0310", 3882, 4021, "bright"),
    ("op_forest", "Opening: the forest and the box's light", "S13P08A/t02a0311", 4112, 4401, "bright"),
    ("op_march", "Opening: the march", "S13P06A/t02a0401", 4510, 4867, "bright"),
    ("op_hills_start", "Opening: the hills (camera low)", "S13P09A/t02a0402", 4935, 5182, "start"),
    ("op_hills_end", "Opening: the hills (camera up)", "S13P09A/t02a0402", 4935, 5182, "end"),
    ("title", "The title screen: the logo, and the field with EXPLORERS OF SKY", "t02a0501", 5420, 5420),
]


def rom_files(rom) -> set:
    files = set()

    def walk(folder, prefix=""):
        for f in folder.files:
            files.add(prefix + f)
        for n, sub in folder.folders:
            walk(sub, prefix + n + "/")
    walk(rom.filenames)
    return files


def render(rom, files, name: str) -> Image.Image:
    """A level's two layers, animated tiles at frame 0 (as make_sky_cutaways'
    render, but a BPA is only passed to the layer slot that uses it)."""
    from skytemple_files.common.types.file_types import FileType

    def pick(ext):
        for cand in (f"MAP_BG/{name}.{ext}", f"MAP_BG/{name[:-1]}.{ext}"):
            if cand in files:
                return cand
        raise SystemExit(f"{name}: no .{ext}")
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{name}.bma"))
    bpc = FileType.BPC.deserialize(rom.getFileByName(pick("bpc")))
    bpl = FileType.BPL.deserialize(rom.getFileByName(pick("bpl")))
    bpas = []
    for slot in range(8):
        layer = slot // 4
        used = layer < len(bpc.layers) and bpc.layers[layer].bpas[slot % 4] != 0
        # a variant level (g01p01b2) uses its base level's BPAs (g01p01b1.bpa)
        n = next((c for c in (f"MAP_BG/{name}{slot + 1}.bpa", f"MAP_BG/{name[:-1]}{slot + 1}.bpa")
                  if c in files), None)
        bpas.append(FileType.BPA.deserialize(rom.getFileByName(n)) if used and n else None)
    # skytemple-files leaves an itertools.chain as the palette of the
    # animated chunk sheets (PIL cannot copy it): make it a list
    orig = type(bpc).chunks_animated_to_pil

    def chunks(self, *args, **kw):
        out = orig(self, *args, **kw)
        for im in out:
            if im.palette is not None and not isinstance(im.palette.palette, (bytes, bytearray, list)):
                im.putpalette(bytes(int(v) for v in im.palette.palette))
        return out
    type(bpc).chunks_animated_to_pil = chunks
    try:
        img = bma.to_pil(bpc, bpl, bpas, False, False)
    finally:
        type(bpc).chunks_animated_to_pil = orig
    if isinstance(img, list):
        img = img[0]
    return img.convert("RGB")


def view(img: Image.Image, centre) -> tuple[Image.Image, list]:
    """The 256x192 screen around `centre` (level pixels; None = the level's
    middle), kept inside the level. Returns the picture and its box."""
    w, h = img.size
    cx, cy = centre if centre else (w / 2, h / 2)
    x0 = int(min(max(round(cx - W / 2), 0), max(w - W, 0)))
    y0 = int(min(max(round(cy - H / 2), 0), max(h - H, 0)))
    pic = Image.new("RGB", (W, H))
    pic.paste(img.crop((x0, y0, min(x0 + W, w), min(y0 + H, h))), (0, 0))
    return pic, [x0, y0, W, H]


def write_pair(name: str, top: Image.Image, bottom: Image.Image, link: dict, out: Path) -> None:
    d = out / name
    d.mkdir(parents=True, exist_ok=True)
    t = Image.new("RGBA", (W, H + GAP), (0, 0, 0, 0))
    t.paste(top.convert("RGBA"), (0, 0))
    b = Image.new("RGBA", (W, GAP + H), (0, 0, 0, 0))
    b.paste(bottom.convert("RGBA"), (0, GAP))
    t.save(d / "top.png")
    b.save(d / "bottom.png")
    rest = {k: v for k, v in link.items() if k not in ("top", "bottom")}
    link = dict(
        name=name,
        **rest,
        top=dict(link["top"], file="top.png", size=[W, H + GAP],
                 screen=[0, 0, W, H], gap=[0, H, W, GAP]),
        bottom=dict(link["bottom"], file="bottom.png", size=[W, GAP + H],
                    gap=[0, 0, W, GAP], screen=[0, GAP, W, H]),
        joined=dict(size=[W, 2 * (H + GAP)],
                    how="top.png at y 0, bottom.png right under it at y %d: the two "
                        "transparent strips meet at y %d" % (H + GAP, H + GAP)),
    )
    text = json.dumps(link, indent=2)
    # number lists on one line ([x, y, w, h])
    text = re.sub(r"\[\s+([-\d,\s]+?)\s+\]", lambda m: "[" + re.sub(r"\s+", " ", m.group(1)) + "]", text)
    (d / "link.json").write_text(text + "\n")


def story(rom, out: Path, only) -> list:
    files = rom_files(rom)
    cache: dict = {}
    done = []
    for name, what, scripts, tl, tc, bl, bc, gba in STORY:
        if only and name not in only:
            continue
        for lv in (tl, bl):
            if lv not in cache:
                cache[lv] = render(rom, files, lv)
        top, tbox = view(cache[tl], tc)
        bottom, bbox = view(cache[bl], bc)
        write_pair(name, top, bottom, dict(
            what=what, source="EoS levels (MAP_BG), no sprites", eos_scripts=scripts, gba=gba,
            top=dict(eos_level=tl.upper(), level_box=tbox),
            bottom=dict(eos_level=bl.upper(), level_box=bbox)), out)
        done.append((name, what))
        print(f"{name}: top {tl} {tbox}, bottom {bl} {bbox}")
    return done


def opening(rom_path: str, out: Path, only) -> list:
    """One DeSmuME run from power-on; keeps, per pick, the best frame so far."""
    import os
    os.environ.setdefault("SDL_VIDEODRIVER", "dummy")
    os.environ.setdefault("SDL_AUDIODRIVER", "dummy")
    from desmume.emulator import DeSmuME

    jobs = []
    for entry in OPENING:
        name, what, script, first, last = entry[:5]
        if only and name not in only:
            continue
        mode = entry[5] if len(entry) > 5 else "frame"
        lo, hi = first, last
        third = (last - first) // 3
        if mode == "start":
            hi = first + third
        elif mode == "end":
            lo = last - third
        jobs.append(dict(name=name, what=what, script=script, lo=lo, hi=hi, mode=mode,
                         best=None, score=-1.0, frame=None))
    if not jobs:
        return []
    e = DeSmuME()
    e.open(rom_path)
    end = max(j["hi"] for j in jobs)
    for f in range(1, end + 1):
        e.cycle(with_joystick=False)
        active = [j for j in jobs if j["lo"] <= f <= j["hi"]]
        if not active:
            continue
        shot = e.screenshot().convert("RGB")
        # the most detailed frame (EoS fades its scenes to white and to
        # black: a faded frame has little contrast)
        # (both screens: the less detailed one decides)
        a = np.asarray(shot, dtype=np.float32)
        score = float(min(a[:H].std(), a[H:].std()))
        for j in active:
            if score > j["score"]:
                j.update(best=shot, score=score, frame=f)
    e.destroy()
    done = []
    for j in jobs:
        shot = j["best"]
        write_pair(j["name"], shot.crop((0, 0, W, H)), shot.crop((0, H, W, 2 * H)), dict(
            what=j["what"], source="EoS as shown (DeSmuME, power-on, no input), sprites included",
            eos_scripts=j["script"], eos_frame=j["frame"],
            gba="the opening (src/sky_opening.c, events/sky/opening.cfg)",
            top=dict(eos_screen="top"), bottom=dict(eos_screen="bottom")), out)
        done.append((j["name"], j["what"]))
        print(f"{j['name']}: frame {j['frame']}")
    return done


def join(d: Path) -> None:
    t = Image.open(d / "top.png").convert("RGBA")
    b = Image.open(d / "bottom.png").convert("RGBA")
    img = Image.new("RGBA", (max(t.width, b.width), t.height + b.height), (0, 0, 0, 0))
    img.paste(t, (0, 0))
    img.paste(b, (0, t.height))
    img.save(d / "joined_preview.png")
    print(d / "joined_preview.png")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("rom", nargs="?", help="Explorers of Sky (US) ROM")
    ap.add_argument("--out", type=Path, default=OUT)
    ap.add_argument("--only", nargs="*", default=None, help="pair names to export")
    ap.add_argument("--join", type=Path, help="write DIR/joined_preview.png from a pair")
    a = ap.parse_args()
    if a.join:
        join(a.join)
        return 0
    if not a.rom:
        ap.error("the EoS ROM is needed")
    import ndspy.rom
    a.out.mkdir(parents=True, exist_ok=True)
    rom = ndspy.rom.NintendoDSRom.fromFile(a.rom)
    done = story(rom, a.out, a.only) + opening(a.rom, a.out, a.only)
    if not a.only:
        lines = ["# Split screens", "",
                 "Every chapter-1 moment where Explorers of Sky uses both DS screens, as two",
                 "linked PNGs per folder: `top.png` (the top screen, a transparent strip of",
                 f"{GAP} lines under it) and `bottom.png` (a {GAP}-line strip, then the bottom",
                 "screen). Stack top over bottom and the strips meet: paint the gap there.",
                 "`link.json` says where each screen comes from and how the GBA shows it.",
                 "Made by `tools/export_split_screens.py EOS.nds`; the build does not read them.",
                 "`tools/export_split_screens.py --join graphics/custom/split_screens/NAME`",
                 "previews a pair joined (`joined_preview.png`).", "",
                 "| Folder | What |", "|---|---|"]
        lines += [f"| [`{n}`]({n}/) | {w} |" for n, w in done]
        (a.out / "README.md").write_text("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
