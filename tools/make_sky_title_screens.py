#!/usr/bin/env python3
"""Explorers of Sky demake: boot screens, title screen and main-menu art.

    tools/make_sky_title_screens.py EOS.nds

From an Explorers of Sky ROM:

  * nintendo / esrb: EoS's boot screens (BACK/n_logo.bgp, BACK/w_esrb.bgp),
    the 240x160 middle of the 256x192 DS pictures.
  * title_press / title_blank: the title screen. EoS's English logo is not a
    file in the ROM (TOP/logo_*.bgp are the Japanese Time/Darkness logos and
    TOP/title_*.bgp are Rescue Team leftovers), so the logo is set in EoS's
    own banner font (FONT/banner.bin) over the EoS sky panorama (v01p03a);
    "Press START" is in the second picture only, for the blink.
  * menu0..5: main-menu backgrounds, EoS sky / sea panoramas without text
    (the menu windows cover the top-left and the bottom).

Writes graphics/custom/sky_title/<name>.{png,at4px,pal} and src/sky_title_data.c.
The panoramas come from graphics/custom/sky_cutaways (tools/make_sky_cutaways.py).
"""
from __future__ import annotations

import sys
from pathlib import Path

import ndspy.rom
from PIL import Image, ImageFilter
from skytemple_files.common.types.file_types import FileType

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "tools"))
import convert_title_backgrounds as title  # noqa: E402
from make_sky_chapter_cards import Banner  # noqa: E402
import make_sky_cutaways  # noqa: E402,F401  (PIL putpalette patch)

OUT = ROOT / "graphics" / "custom" / "sky_title"
CUT = ROOT / "graphics" / "custom" / "sky_cutaways"
GEN_C = ROOT / "src" / "sky_title_data.c"

# Order must match enum SkyTitleArt in include/sky_story.h.
MENU = ["sky_day", "sky_dusk", "sunset_sea0", "guild_sky", "sunset_sky", "sunset_sea4"]


def bgp(rom, name: str) -> Image.Image:
    img = FileType.BGP.deserialize(rom.getFileByName(name)).to_pil()
    img = img.convert("RGB")
    return img.crop((8, 16, 248, 176))


def render(banner: Banner, text: str, track: int) -> Image.Image:
    """Banner.render with extra (negative = tighter) letter spacing."""
    parts = [banner.render(c) if c != " " else None for c in text]
    w = sum((p.width if p else 8) + track for p in parts) - track
    img = Image.new("RGBA", (max(1, w), 24), (0, 0, 0, 0))
    x = 0
    for p in parts:
        if p:
            img.alpha_composite(p, (x, 0))
        x += (p.width if p else 8) + track
    return img


def tinted(banner: Banner, text: str, top, bottom, scale: int = 1, track: int = 0) -> Image.Image:
    """Banner-font text with a vertical colour ramp and a dark outline."""
    glyphs = render(banner, text, track)
    if scale != 1:
        glyphs = glyphs.resize((glyphs.width * scale, glyphs.height * scale), Image.NEAREST)
    w, h = glyphs.size
    out = Image.new("RGBA", (w + 4, h + 4), (0, 0, 0, 0))
    alpha = glyphs.getchannel("A")
    shape = Image.new("L", out.size, 0)
    shape.paste(alpha, (2, 2))
    outline = shape.filter(ImageFilter.MaxFilter(5))
    out.paste((16, 32, 88, 255), (0, 0), outline)
    src = glyphs.load()
    px = out.load()
    for y in range(h):
        t = y / max(1, h - 1)
        base = tuple(int(top[i] + (bottom[i] - top[i]) * t) for i in range(3))
        for x in range(w):
            r, g, b, a = src[x, y]
            if a:
                k = 0.55 + 0.45 * (r / 255)  # keep the font's own shading
                px[x + 2, y + 2] = (*(min(255, int(c * k)) for c in base), 255)
    return out


def logo(banner: Banner) -> Image.Image:
    l1 = tinted(banner, "Pokémon Mystery Dungeon", (255, 255, 255), (200, 224, 255), track=-1)
    l2 = tinted(banner, "Explorers of Sky", (255, 236, 120), (255, 150, 40))
    w = max(l1.width, l2.width)
    img = Image.new("RGBA", (w, l1.height + l2.height - 6), (0, 0, 0, 0))
    img.alpha_composite(l1, ((w - l1.width) // 2, 0))
    img.alpha_composite(l2, ((w - l2.width) // 2, l1.height - 6))
    return img


def write(name: str, im: Image.Image) -> None:
    png = OUT / f"{name}.png"
    im = im.convert("RGB")
    im.save(png)
    raw, pal, ntiles, ncolors, merged = title.convert_image(im)
    png.with_suffix(".at4px").write_bytes(title.wrap_at4px(raw))
    png.with_suffix(".pal").write_bytes(pal)
    print(f"{name}: tiles={ntiles} colors={ncolors}{' merged' if merged else ''}")


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    banner = Banner(rom)
    OUT.mkdir(parents=True, exist_ok=True)

    write("nintendo", bgp(rom, "BACK/n_logo.bgp"))
    write("esrb", bgp(rom, "BACK/w_esrb.bgp"))

    sky = Image.open(CUT / "sky_day.png").convert("RGBA")
    lg = logo(banner)
    blank = sky.copy()
    blank.alpha_composite(lg, ((240 - lg.width) // 2, 14))
    press = blank.copy()
    ps = tinted(banner, "Press START", (255, 255, 255), (255, 255, 255))
    press.alpha_composite(ps, ((240 - ps.width) // 2, 112))
    write("title_press", press)
    write("title_blank", blank)

    for i, src in enumerate(MENU):
        write(f"menu{i}", Image.open(CUT / f"{src}.png"))

    names = ["nintendo", "esrb", "title_press", "title_blank"]
    lines = [
        '#include "global.h"',
        '#include "sky_story.h"',
        "",
        "/* Generated by tools/make_sky_title_screens.py — do not edit. */",
        "#ifdef SKY_STORY",
    ]
    for n in names:
        ident = "".join(p.capitalize() for p in n.split("_"))
        lines.append(f'static const u8 s{ident}Gfx[] = INCBIN_U8("graphics/custom/sky_title/{n}.at4px");')
        lines.append(f'static const u8 s{ident}Pal[] = INCBIN_U8("graphics/custom/sky_title/{n}.pal");')
    lines.append("")
    lines.append("const SkyCutawayArt gSkyTitleArt[SKY_TITLE_ART_COUNT] = {")
    for n in names:
        ident = "".join(p.capitalize() for p in n.split("_"))
        lines.append(f"    {{ s{ident}Gfx, s{ident}Pal }},")
    lines.append("};")
    lines.append("#endif")
    GEN_C.write_text("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
