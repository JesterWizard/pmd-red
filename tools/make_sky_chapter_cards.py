#!/usr/bin/env python3
"""Render Explorers of Sky style chapter cards (EoS banner font over black, or\nover the level EoS shows behind the title: Sharpedo Bluff for chapter 1).

Reads the banner font (FONT/banner.bin + FONT/b_pal.bin) from an Explorers of
Sky ROM, draws "Chapter N" and the chapter title centred on black, and writes
graphics/custom/chapter_cards/chapterN.png plus the 8bpp AT4PX + palette used
by src/fullscreen_art.c, and src/chapter_cards_data.c.

    tools/make_sky_chapter_cards.py EOS.nds
"""
from __future__ import annotations

import sys
from pathlib import Path

import ndspy.rom
from PIL import Image
from skytemple_files.common.types.file_types import FileType
from skytemple_files.graphics.pal.handler import PalHandler

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
import convert_title_backgrounds as title  # noqa: E402

OUT = ROOT / "graphics" / "custom" / "chapter_cards"
GEN_C = ROOT / "src" / "chapter_cards_data.c"

# Must match sChapterTitles in src/chapter_titles.c (sky story).
CHAPTERS = [
    "A Storm at Sea",
    "The Rescue Team Begins",
    "Into Sinister Woods",
    "Thunder on the Mountain",
    "The Hill of the Ancients",
    "The Ninetales Legend",
    "On the Run",
    "The Frozen North",
    "Heart of the Volcano",
    "Toward the Sky",
]


class Banner:
    def __init__(self, rom):
        font = FileType.BANNER_FONT.deserialize(rom.getFileByName("FONT/banner.bin"))
        font.set_palette(PalHandler.deserialize(rom.getFileByName("FONT/b_pal.bin")))
        self.pal = font.get_palette_raw()
        self.glyphs = {e.char: e for e in font.entries if e.table == 0}

    def advance(self, c: str) -> int:
        e = self.glyphs.get(ord(c))
        return 8 if c == " " or e is None else e.width

    def render(self, text: str) -> Image.Image:
        w = sum(self.advance(c) for c in text) + 24
        img = Image.new("RGBA", (w, 24), (0, 0, 0, 0))
        x = 0
        for c in text:
            e = self.glyphs.get(ord(c))
            if c != " " and e is not None:
                g = Image.new("RGBA", (24, 24), (0, 0, 0, 0))
                px = g.load()
                for i, v in enumerate(e.data):
                    if v:
                        px[i % 24, i // 24] = (*self.pal[v * 3:v * 3 + 3], 255)
                img.alpha_composite(g, (x, 0))
            x += self.advance(c)
        return img.crop((0, 0, max(1, x), 24))


# Chapter -> (EoS level shown behind the title, brightness): EoS m01a0101
# back_SetBanner2(LEVEL_V01P02A, ...) shows Sharpedo Bluff behind chapter 1.
BACKGROUNDS = {1: ("v01p02a", 0.44)}


def top(img: Image.Image) -> int:
    """First row with a visible pixel."""
    a = img.getchannel("A")
    for y in range(img.height):
        if any(a.getpixel((x, y)) for x in range(img.width)):
            return y
    return 0


def render_level(rom, name: str) -> Image.Image:
    from PIL import Image as _I
    orig = _I.Image.putpalette
    def pp(self, data, rawmode="RGB"):
        if not isinstance(data, (bytes, bytearray, list)):
            data = list(data)
        return orig(self, data, rawmode)
    _I.Image.putpalette = pp
    bma = FileType.BMA.deserialize(rom.getFileByName(f"MAP_BG/{name}.bma"))
    bpc = FileType.BPC.deserialize(rom.getFileByName(f"MAP_BG/{name}.bpc"))
    bpl = FileType.BPL.deserialize(rom.getFileByName(f"MAP_BG/{name}.bpl"))
    img = bma.to_pil(bpc, bpl, [None] * 8, False, False)
    if isinstance(img, list):
        img = img[0]
    return img.convert("RGB")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    banner = Banner(rom)
    OUT.mkdir(parents=True, exist_ok=True)
    for n, name in enumerate(CHAPTERS, 1):
        card = Image.new("RGBA", (240, 160), (0, 0, 0, 255))
        a = banner.render(f"Chapter {n}")
        b = banner.render(name)
        if n in BACKGROUNDS:
            # EoS back_SetBanner2(level, 0, x, y, ...): the level's picture
            # from its top-left, darkened (measured: x0.44 on chapter 1's
            # Sharpedo Bluff); the GBA's 160 lines take DS lines 16-175.
            level, k = BACKGROUNDS[n]
            bg = render_level(rom, level).crop((0, 16, 240, 176))
            bg = bg.point(lambda v: int(v * k + 0.5))
            card.alpha_composite(bg.convert("RGBA"), (0, 0))
            # text tops as in EoS (DS lines 38 / 89), moved up with the crop
            card.alpha_composite(a, ((240 - a.width) // 2, 38 - 16 - top(a)))
            card.alpha_composite(b, ((240 - b.width) // 2, 89 - 16 - top(b)))
        else:
            card.alpha_composite(a, ((240 - a.width) // 2, 50))
            card.alpha_composite(b, ((240 - b.width) // 2, 82))
        png = OUT / f"chapter{n}.png"
        card.convert("RGB").save(png)
        raw, pal, ntiles, ncolors, _ = title.convert_image(title.flatten_rgb(card))
        png.with_suffix(".at4px").write_bytes(title.wrap_at4px(raw))
        png.with_suffix(".pal").write_bytes(pal)
        print(f"chapter{n}: {name!r} tiles={ntiles} colors={ncolors}")

    lines = [
        '#include "global.h"',
        '#include "chapter_titles.h"',
        "",
        "/* Generated by tools/make_sky_chapter_cards.py — do not edit. */",
        "#ifdef SKY_STORY",
    ]
    for n in range(1, len(CHAPTERS) + 1):
        base = f"graphics/custom/chapter_cards/chapter{n}"
        lines.append(f'static const u8 sCard{n}Gfx[] = INCBIN_U8("{base}.at4px");')
        lines.append(f'static const u8 sCard{n}Pal[] = INCBIN_U8("{base}.pal");')
    lines.append("")
    lines.append("const ChapterCardAssets gChapterCards[CHAPTER_TITLE_COUNT] = {")
    for n in range(1, len(CHAPTERS) + 1):
        lines.append(f"    {{ sCard{n}Gfx, sCard{n}Pal }},")
    lines.append("};")
    lines.append("#endif")
    GEN_C.write_text("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
