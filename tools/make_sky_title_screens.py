#!/usr/bin/env python3
"""Explorers of Sky demake: boot screens, title screen and main-menu art.

    tools/make_sky_title_screens.py EOS.nds

From an Explorers of Sky ROM:

  * nintendo / esrb: EoS's boot screens (BACK/n_logo.bgp, BACK/w_esrb.bgp),
    the 240x160 middle of the 256x192 DS pictures.
  * title: the title card. EoS's English logo is the
    ground level S13P01B (MAP_BG/s13p01a.bma/.bpc with the s13p01b.bpl
    palette: the end state of the logo fade-in that opens EoS): the orange
    glow (layer 0) and the "Pokemon Mystery Dungeon" logo (layer 1). The
    logo is 245 px wide, so it is scaled to 7/8 to fit the GBA screen.
    Under it goes EoS's "EXPLORERS OF SKY" emblem, which EoS draws as OBJ
    sprites on the bottom title screen; graphics/custom/sky_title/emblem_src.png
    is that sprite layer captured from the running game (DeSmuME, main-engine
    OBJ layer only, title loop; black pixels are kept where the full picture
    is black too, so the emblem's black outlines are not taken for backdrop).
  * press_start: "Press START" as OBJ tiles (4bpp, its own 16 colours) over
    the title card, so its blink never touches the picture's palette or
    tiles (two separately quantized pictures, one with the text, made the
    background's colours shift with every blink).
  * menu0..9: main-menu backgrounds, the CGs EoS shows on the DS top screen
    during its top menu (BACK/s09p01a..s09p10a.bgp), scaled to 240x180 and
    cropped to the middle 160 lines.

All are full-colour 8bpp (up to 239 colours, picked in the GBA's 15-bit
colours by convert_title_backgrounds.quantize_gba) with up to MAX_TILES tiles.

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

LOGO_SCALE = 7 / 8
# 8bpp tile slots in the sky build (TITLE_BG_8BPP_MAX_TILES, include/bg_control.h):
# the blank tile and up to 600 picture tiles, so nothing is merged.
MAX_TILES = 608


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


def eos_logo(rom) -> tuple[Image.Image, Image.Image]:
    """(background 240x160, logo RGBA) from level S13P01B."""
    get = lambda n: rom.getFileByName("MAP_BG/" + n)
    bma = FileType.BMA.deserialize(get("s13p01a.bma"))
    bpc = FileType.BPC.deserialize(get("s13p01a.bpc"))
    pals = FileType.BPL.deserialize(get("s13p01b.bpl")).palettes
    bg = bma.to_pil_single_layer(bpc, pals, [None] * 8, 0).convert("RGB").crop((0, 0, 256, 192))
    bg = bg.resize((240, 180), Image.LANCZOS).crop((0, 10, 240, 170))
    idx = bma.to_pil_single_layer(bpc, pals, [None] * 8, 1).crop((0, 0, 256, 192))
    rgba = idx.convert("RGBA")
    mask = idx.point(lambda v: 0 if v % 16 == 0 else 255).convert("L")
    rgba.putalpha(mask)
    rgba = rgba.crop(rgba.getbbox())
    w, h = round(rgba.width * LOGO_SCALE), round(rgba.height * LOGO_SCALE)
    return bg, rgba.resize((w, h), Image.LANCZOS)


def split_quantize(im: Image.Image, mask: Image.Image, fg_colors: int = 96,
                   total: int = title.MAX_COLORS) -> Image.Image:
    """Quantize the overlay (mask > 0: logo, emblem, "Press START") and the
    background with separate shares of the 8bpp palette. One palette fitted
    to the whole picture spends nearly every colour on the glow's gradients
    and leaves the emblem's whites and greens speckled. Both shares are
    picked in the GBA's 15-bit colours (title.quantize_gba)."""
    rgb = im.convert("RGB")
    fg_only = {(r >> 3, g >> 3, b >> 3) for (r, g, b), m in
               zip(rgb.get_flattened_data(), mask.get_flattened_data()) if m}
    fg_n = min(fg_colors, len(fg_only))
    bg_mask = mask.point(lambda v: 0 if v else 255)
    out = title.quantize_gba(rgb, total - fg_n, train_mask=bg_mask).convert("RGB")
    fg_mapped = title.quantize_gba(rgb, fg_n, train_mask=mask).convert("RGB")
    out.paste(fg_mapped, (0, 0), mask)
    return out


def overlay_mask(size, parts) -> Image.Image:
    """Opaque pixels of the RGBA overlays at their positions."""
    m = Image.new("L", size, 0)
    for img, pos in parts:
        m.paste(img.getchannel("A").point(lambda a: 255 if a >= 128 else 0), pos,
                img.getchannel("A").point(lambda a: 255 if a >= 128 else 0))
    return m


def write(name: str, im: Image.Image) -> None:
    png = OUT / f"{name}.png"
    im = im.convert("RGB")
    im.save(png)
    raw, pal, ntiles, ncolors, merged = title.convert_image(
        im, quantized=title.quantize_gba(im), max_tiles=MAX_TILES)
    png.with_suffix(".at4px").write_bytes(title.wrap_at4px(raw))
    png.with_suffix(".pal").write_bytes(pal)
    print(f"{name}: tiles={ntiles} colors={ncolors}{' merged' if merged else ''}")


def write_press_start(ps: Image.Image) -> int:
    """The "Press START" text as OBJ tiles: 64x32 pieces side by side (1D
    mapping, 32 tiles each), index 0 transparent, 15 colours picked in GBA
    colours. Returns the padded width."""
    w = (ps.width + 63) // 64 * 64
    canvas = Image.new("RGBA", (w, 32), (0, 0, 0, 0))
    canvas.alpha_composite(ps, ((w - ps.width) // 2, (32 - ps.height) // 2))
    mask = canvas.getchannel("A").point(lambda a: 255 if a >= 128 else 0)
    q = title.quantize_gba(canvas.convert("RGB"), 15, train_mask=mask)
    pal = q.getpalette()
    idx = [v + 1 if m else 0 for v, m in zip(q.get_flattened_data(), mask.get_flattened_data())]
    ncol = max(idx)
    data = bytearray()
    for piece in range(w // 64):
        for ty in range(4):
            for tx in range(8):
                for yy in range(8):
                    row = (ty * 8 + yy) * w + piece * 64 + tx * 8
                    for xx in range(0, 8, 2):
                        data.append(idx[row + xx] | (idx[row + xx + 1] << 4))
    cols = [(0, 0, 0)] + [tuple(pal[i * 3:i * 3 + 3]) for i in range(ncol)]
    cols += [(0, 0, 0)] * (16 - len(cols))
    # tiles stacked in an 8-px-wide PNG; the build makes .4bpp / .gbapal
    sys.path.insert(0, str(ROOT / "tools"))
    from make_sky_opening import save_tiles_png
    save_tiles_png(OUT / "press_start.png", bytes(data), cols)
    print(f"press_start: {w}x32, {ncol} colours")
    return w


def main() -> int:
    rom = ndspy.rom.NintendoDSRom.fromFile(sys.argv[1])
    banner = Banner(rom)
    OUT.mkdir(parents=True, exist_ok=True)

    write("nintendo", bgp(rom, "BACK/n_logo.bgp"))
    write("esrb", bgp(rom, "BACK/w_esrb.bgp"))

    bg, lg = eos_logo(rom)
    blank = bg.convert("RGBA")
    emblem = Image.open(OUT / "emblem_src.png").convert("RGBA")
    lg_pos = ((240 - lg.width) // 2, 4)
    em_pos = ((240 - emblem.width) // 2, 4 + lg.height)
    blank.alpha_composite(lg, lg_pos)
    blank.alpha_composite(emblem, em_pos)
    write("title", split_quantize(blank, overlay_mask((240, 160), [(lg, lg_pos), (emblem, em_pos)])))
    ps = tinted(banner, "Press START", (255, 255, 255), (255, 255, 255))
    ps_pos = ((240 - ps.width) // 2, 160 - ps.height - 2)
    press_w = write_press_start(ps)
    # the sprites' top left: the text is centred in the 64x32 pieces
    ps_pos = (ps_pos[0] - (press_w - ps.width) // 2, ps_pos[1] - (32 - ps.height) // 2)

    for i in range(10):
        cg = FileType.BGP.deserialize(rom.getFileByName(f"BACK/s09p{i + 1:02d}a.bgp")).to_pil().convert("RGB")
        write(f"menu{i}", cg.resize((240, 180), Image.LANCZOS).crop((0, 10, 240, 170)))

    names = ["nintendo", "esrb", "title"]
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
    lines.append('const u8 gSkyPressStartGfx[] = INCBIN_U8("graphics/custom/sky_title/press_start.4bpp");')
    lines.append('const u16 gSkyPressStartPal[] = INCBIN_U16("graphics/custom/sky_title/press_start.gbapal");')
    lines.append(f"const u8 gSkyPressStartPos[3] = {{ {ps_pos[0]}, {ps_pos[1]}, {press_w // 64} }}; /* x, y, 64x32 pieces */")
    lines.append("#endif")
    GEN_C.write_text("\n".join(lines) + "\n")
    return 0


if __name__ == "__main__":
    sys.exit(main())
