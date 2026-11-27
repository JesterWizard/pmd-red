#!/usr/bin/env python3
"""Render Explorers of Sky second-screen backgrounds as GBA full-screen art.

EoS shows these on the DS top screen (back2_SetGround) or as close-ups. The
GBA has one screen, so the demake shows them as full-screen cutaways
(SPECIAL_PROCESS 0x60, see src/sky_cutaways.c). Each picture is the 240x160
window around the camera mark the EoS script uses.

    tools/make_sky_cutaways.py EOS.nds

Writes graphics/custom/sky_cutaways/<name>.{png,at4px,pal}. Which CG uses
which picture is events/sky/cutaways.cfg (the build makes the C table from it,
tools/event_editor/cutaways.py); a new CG needs no EoS ROM: point its
picture at any PNG.
"""
from __future__ import annotations

import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from PIL import Image as _I
from skytemple_files.common.types.file_types import FileType

_orig = _I.Image.putpalette
def _pp(self, data, rawmode="RGB"):
    if not isinstance(data, (bytes, bytearray, list)):
        data = list(data)
    return _orig(self, data, rawmode)
_I.Image.putpalette = _pp

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import convert_title_backgrounds as title  # noqa: E402

OUT = ROOT / "graphics" / "custom" / "sky_cutaways"
# 8bpp tile slots in the sky build (TITLE_BG_8BPP_MAX_TILES, include/bg_control.h)
MAX_TILES = 608

# (name, EoS level, centre x, centre y in pixels) — centres follow the EoS
# camera marks (camera2_SetPositionMark) or the picture's middle.
CUTAWAYS = [
    ("sky_day",       "v01p03a", 33 * 8, 9.5 * 8 + 4),
    ("sky_dusk",      "v01p03b", 33 * 8, 9.5 * 8 + 4),
    ("guild_sky",     "v02p01a", 132, 96),
    ("relic_fragment","v01p06b", 21 * 8, 15 * 8),
    ("sunset_sky",    "v26p06a", 19 * 8, 15.5 * 8),
] + [
    (f"sunset_sea{i}", "v26p05a", (19.5 + 39 * (i % 3)) * 8, (13.5 + 30 * (i // 3)) * 8)
    for i in range(8)
]


def render(rom, files, name):
    def pick(ext):
        for cand in (f"MAP_BG/{name}.{ext}", f"MAP_BG/{name[:-1]}.{ext}"):
            if cand in files:
                return cand
        raise SystemExit(name)
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{name}.bma"))
    bpc = FileType.BPC.deserialize(rom.getFileByName(pick("bpc")))
    bpl = FileType.BPL.deserialize(rom.getFileByName(pick("bpl")))
    bpas = []
    for slot in range(8):
        n = f"MAP_BG/{name}{slot + 1}.bpa"
        bpas.append(FileType.BPA.deserialize(rom.getFileByName(n)) if n in files else None)
    img = bma.to_pil(bpc, bpl, bpas, False, False)
    if isinstance(img, list):
        img = img[0]
    return img.convert("RGB")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    files = set()

    def walk(folder, prefix=""):
        for f in folder.files:
            files.add(prefix + f)
        for n, sub in folder.folders:
            walk(sub, prefix + n + "/")

    walk(rom.filenames)
    OUT.mkdir(parents=True, exist_ok=True)
    cache = {}
    for slug, level, cx, cy in CUTAWAYS:
        if level not in cache:
            cache[level] = render(rom, files, level)
        src = cache[level]
        x0 = int(min(max(cx - 120, 0), src.width - 240))
        y0 = int(min(max(cy - 80, 0), src.height - 160))
        im = src.crop((x0, y0, x0 + 240, y0 + 160))
        if slug.startswith("sunset_sea"):
            # EoS stacks the sunset sky (top screen) over the sea (bottom
            # screen): keep the horizon from the sky and the waves below it.
            if "v26p06a" not in cache:
                cache["v26p06a"] = render(rom, files, "v26p06a")
            sky = cache["v26p06a"]
            sx = (sky.width - 240) // 2
            stack = Image.new("RGB", (240, 160))
            stack.paste(sky.crop((sx, 92, sx + 240, 172)), (0, 0))
            stack.paste(im.crop((0, 0, 240, 80)), (0, 80))
            im = stack
        png = OUT / f"{slug}.png"
        im.save(png)
        raw, pal, ntiles, ncolors, merged = title.convert_image(
            im, quantized=title.quantize_gba(im), max_tiles=MAX_TILES)
        png.with_suffix(".at4px").write_bytes(title.wrap_at4px(raw))
        png.with_suffix(".pal").write_bytes(pal)
        print(f"{slug}: {level} tiles={ntiles} colors={ncolors}{' merged' if merged else ''}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
