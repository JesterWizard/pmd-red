#!/usr/bin/env python3
"""Fetch SpriteCollab portraits for starter evolutions and convert to AT4PX + pal.

Source PNGs live in graphics/portraits/<species>/{Emotion}.png
(from https://sprites.pmdcollab.org / PMDCollab SpriteCollab).

Build outputs next to each PNG:
  Emotion.pal    — 16 RGBX colors (index 0 = transparent black, unk4=0x80)
  Emotion.at4px  — AT4PX-compressed 5×5 4bpp tiles (decomp 0x320), vanilla kao format

Also regenerates src/custom_portraits_data.c (INCBINs + SIRO archive).

Requires skytemple-files for AT4PX compression.
"""

from __future__ import annotations

import argparse
import sys
import urllib.error
import urllib.request
from pathlib import Path

from PIL import Image

try:
    from skytemple_files.compression_container.at4px.handler import At4pxHandler
except ImportError as e:
    raise SystemExit(
        "convert_custom_portraits.py needs skytemple-files for AT4PX compression.\n"
        "  pip install skytemple-files\n"
        f"({e})"
    ) from e

ROOT = Path(__file__).resolve().parent
OUT_DIR = ROOT / "graphics" / "portraits"
GEN_C = ROOT / "src" / "custom_portraits_data.c"
RAW_BASE = "https://raw.githubusercontent.com/PMDCollab/SpriteCollab/master/portrait"

# Game emotion slot → SpriteCollab filename (standard 13-emotion kao layout)
EMOTIONS: list[tuple[str, str]] = [
    ("Normal", "Normal.png"),
    ("Happy", "Happy.png"),
    ("Pained", "Pain.png"),
    ("Angry", "Angry.png"),
    ("Worried", "Worried.png"),
    ("Sad", "Sad.png"),
    ("Crying", "Crying.png"),
    ("Shouting", "Shouting.png"),
    ("TearyEye", "Teary-Eyed.png"),
    ("Determined", "Determined.png"),
    ("Joyous", "Joyous.png"),
    ("Inspired", "Inspired.png"),
    ("Surprised", "Surprised.png"),
]

# Vanilla NPC kao for Charizard / Blastoise does NOT use the standard layout.
# Scripts index emotions against that packing (e.g. Charizard slot 1 = Surprised,
# so PORTRAIT(..., 0x41) shows shock — not Happy). Custom portraits must match.
# Remaining SpriteCollab faces fill unused high slots; Surprised is also at 12 for
# any caller using the standard Surprised index.
VANILLA_SLOT_LAYOUTS: dict[str, list[str | None]] = {
    "charizard": [
        "Normal",  # 0
        "Surprised",  # 1 (vanilla; scripts use 0x41 for shock)
        "Joyous",  # 2 (vanilla Laughing)
        "Pained",  # 3
        "Sad",  # 4
        "Happy",  # 5+ extras
        "Crying",
        "Shouting",
        "TearyEye",
        "Determined",
        "Angry",
        "Worried",
        "Surprised",  # 12 duplicate for standard Surprised
    ],
    "blastoise": [
        "Normal",  # 0
        "Surprised",  # 1 (vanilla)
        "Angry",  # 2
        "Pained",  # 3
        "Happy",  # 4+ extras
        "Worried",
        "Sad",
        "Crying",
        "Shouting",
        "TearyEye",
        "Determined",
        "Joyous",
        "Surprised",  # 12 duplicate for standard Surprised
    ],
}

# (species_id, folder, national_dex) — evolved forms of personality-test starters
EVOLVED_FORMS: list[tuple[int, str, int]] = [
    (2, "ivysaur", 2),
    (3, "venusaur", 3),
    (5, "charmeleon", 5),
    (6, "charizard", 6),
    (8, "wartortle", 8),
    (9, "blastoise", 9),
    (26, "raichu", 26),
    (53, "persian", 53),
    (55, "golduck", 55),
    (67, "machoke", 67),
    (68, "machamp", 68),
    (105, "marowak", 105),
    (134, "vaporeon", 134),
    (135, "jolteon", 135),
    (136, "flareon", 136),
    (153, "bayleef", 153),
    (154, "meganium", 154),
    (156, "quilava", 156),
    (157, "typhlosion", 157),
    (159, "croconaw", 159),
    (160, "feraligatr", 160),
    (196, "espeon", 196),
    (197, "umbreon", 197),
    (278, "grovyle", 253),
    (279, "sceptile", 254),
    (281, "combusken", 256),
    (282, "blaziken", 257),
    (284, "marshtomp", 259),
    (285, "swampert", 260),
    (326, "delcatty", 301),
    # Café NPC — full emotion set for Juice Bar reactions
    (352, "spinda", 327),
]


def fetch_url(url: str) -> bytes | None:
    try:
        with urllib.request.urlopen(url, timeout=60) as resp:
            return resp.read()
    except urllib.error.HTTPError as e:
        if e.code == 404:
            return None
        raise
    except Exception as e:
        print(f"  warn: fetch failed {url}: {e}", file=sys.stderr)
        return None


def fetch_species(folder: str, dex: int, force: bool) -> int:
    dest = OUT_DIR / folder
    dest.mkdir(parents=True, exist_ok=True)
    count = 0
    credits = fetch_url(f"{RAW_BASE}/{dex:04d}/credits.txt")
    if credits is not None:
        (dest / "credits.txt").write_bytes(credits)
    for game_name, collab_name in EMOTIONS:
        out = dest / f"{game_name}.png"
        if out.exists() and not force:
            count += 1
            continue
        data = fetch_url(f"{RAW_BASE}/{dex:04d}/{collab_name}")
        if data is None:
            print(f"  missing {folder}/{collab_name}")
            continue
        out.write_bytes(data)
        count += 1
    return count


def quantize_portrait(im: Image.Image) -> tuple[list[tuple[int, int, int]], list[list[int]]]:
    """Return (palette[16] as RGB, 40x40 indices). Index 0 = transparent black."""
    im = im.convert("RGBA")
    if im.size != (40, 40):
        im = im.resize((40, 40), Image.Resampling.NEAREST)

    # Collect opaque colors; treat near-transparent as index 0
    colors: dict[tuple[int, int, int], int] = {}
    pixels: list[list[int]] = [[0] * 40 for _ in range(40)]
    for y in range(40):
        for x in range(40):
            r, g, b, a = im.getpixel((x, y))
            if a < 128:
                pixels[y][x] = 0
                continue
            key = (r, g, b)
            if key not in colors:
                colors[key] = len(colors) + 1  # reserve 0
            pixels[y][x] = colors[key]

    if len(colors) > 15:
        # Median-cut via Pillow if over budget
        flat = Image.new("RGBA", (40, 40))
        flat.putdata([im.getpixel((x, y)) for y in range(40) for x in range(40)])
        # Composite transparent onto a unique key color then quantize
        bg = Image.new("RGB", (40, 40), (0, 0, 0))
        bg.paste(flat, mask=flat.split()[3])
        q = bg.quantize(colors=15, method=Image.Quantize.MEDIANCUT)
        pal = q.getpalette()[: 15 * 3]
        colors = {}
        for i in range(15):
            colors[(pal[i * 3], pal[i * 3 + 1], pal[i * 3 + 2])] = i + 1
        for y in range(40):
            for x in range(40):
                r, g, b, a = im.getpixel((x, y))
                if a < 128:
                    pixels[y][x] = 0
                else:
                    idx = q.getpixel((x, y))
                    pixels[y][x] = idx + 1

    palette = [(0, 0, 0)] * 16
    for rgb, idx in colors.items():
        if 1 <= idx <= 15:
            palette[idx] = rgb
    return palette, pixels


def encode_4bpp_tiles(pixels: list[list[int]]) -> bytes:
    out = bytearray()
    for ty in range(5):
        for tx in range(5):
            tile = bytearray(32)
            for row in range(8):
                for col_pair in range(4):
                    x = tx * 8 + col_pair * 2
                    y = ty * 8 + row
                    lo = pixels[y][x] & 0xF
                    hi = pixels[y][x + 1] & 0xF
                    tile[row * 4 + col_pair] = lo | (hi << 4)
            out.extend(tile)
    assert len(out) == 0x320
    return bytes(out)


def compress_at4px(payload: bytes) -> bytes:
    """Vanilla-style AT4PX (same container DecompressAT expects)."""
    return At4pxHandler.serialize(At4pxHandler.compress(payload))


def write_palette(path: Path, palette: list[tuple[int, int, int]]) -> None:
    data = bytearray()
    for r, g, b in palette:
        data.extend((r, g, b, 0x80))
    path.write_bytes(data)


def convert_png(png: Path) -> bool:
    im = Image.open(png)
    palette, pixels = quantize_portrait(im)
    tiles = encode_4bpp_tiles(pixels)
    write_palette(png.with_suffix(".pal"), palette)
    png.with_suffix(".at4px").write_bytes(compress_at4px(tiles))
    # Drop legacy uncompressed outputs if present
    legacy = png.with_suffix(".at4pn")
    if legacy.exists():
        legacy.unlink()
    return True


def camel(name: str) -> str:
    return "".join(p.capitalize() for p in name.replace("-", "_").split("_"))


def slot_layout_for(folder: str, available: list[str]) -> list[str | None]:
    """Return 13 kao slot names; None = empty. Charizard/Blastoise match vanilla NPC packing."""
    avail = set(available)
    if folder in VANILLA_SLOT_LAYOUTS:
        return [e if e is None or e in avail else None for e in VANILLA_SLOT_LAYOUTS[folder]]
    return [name if name in avail else None for name, _ in EMOTIONS]


def generate_c(species_emotions: dict[str, list[str]]) -> None:
    lines: list[str] = [
        "/* Auto-generated by convert_custom_portraits.py — do not edit. */",
        '#include "global.h"',
        '#include "custom_portraits.h"',
        '#include "decompress_sir.h"',
        '#include "structs/rgb.h"',
        '#include "structs/str_mon_portrait.h"',
        "",
    ]

    # Per-species INCBINs + PortraitGfx + SiroArchive
    for sid, folder, _dex in EVOLVED_FORMS:
        emotions = species_emotions.get(folder, [])
        if not emotions:
            continue
        camel_name = camel(folder)
        slots = slot_layout_for(folder, emotions)
        # Unique emotion assets referenced by the slot layout
        used = sorted({e for e in slots if e is not None}, key=lambda e: emotions.index(e) if e in emotions else 99)
        for emo in used:
            label = f"s{camel_name}{emo}"
            base = f"graphics/portraits/{folder}/{emo}"
            lines.append(f"static const u8 {label}Pal[] = INCBIN_U8(\"{base}.pal\");")
            lines.append(f"static const u8 {label}Gfx[] = INCBIN_U8(\"{base}.at4px\");")
        lines.append("")
        lines.append(f"static const PortraitGfx s{camel_name}Portraits = {{")
        lines.append("    .sprites = {")
        for game_name in slots:
            if game_name is not None:
                lab = f"s{camel_name}{game_name}"
                lines.append(
                    f"        {{ (const RGB_Struct *){lab}Pal, {lab}Gfx }},"
                )
            else:
                lines.append("        { NULL, NULL },")
        lines.append("    },")
        lines.append("};")
        lines.append("")
        lines.append(
            f"const SiroArchive gCustomKao{camel_name} = {{ \"SIRO\", &s{camel_name}Portraits }};"
        )
        lines.append("")

    # Species ID table (sorted) + emotion masks
    present = [(sid, folder) for sid, folder, _ in EVOLVED_FORMS if species_emotions.get(folder)]
    lines.append(f"#define CUSTOM_PORTRAIT_COUNT {len(present)}")
    lines.append("const s16 gCustomPortraitSpecies[CUSTOM_PORTRAIT_COUNT] = {")
    for sid, folder in present:
        lines.append(f"    {sid}, /* {folder} */")
    lines.append("};")
    lines.append("")
    lines.append("const u16 gCustomPortraitMasks[CUSTOM_PORTRAIT_COUNT] = {")
    for sid, folder in present:
        slots = slot_layout_for(folder, species_emotions[folder])
        mask = 0
        for i, game_name in enumerate(slots):
            if game_name is not None:
                mask |= 1 << i
        lines.append(f"    0x{mask:04X}, /* {folder} */")
    lines.append("};")
    lines.append("")
    lines.append("const u8 gCustomPortraitCount = CUSTOM_PORTRAIT_COUNT;")
    lines.append("")

    # File archive — names must be sorted for OpenFile binary search
    lines.append("static const File sCustomPortraitFiles[CUSTOM_PORTRAIT_COUNT] = {")
    for sid, folder in present:
        camel_name = camel(folder)
        lines.append(f'    {{ "ckao{sid:03d}", &gCustomKao{camel_name} }},')
    lines.append("};")
    lines.append("")
    lines.append("const FileArchive gCustomPortraitArchive = {")
    lines.append('    .magic = "pksdir0",')
    lines.append("    .count = CUSTOM_PORTRAIT_COUNT,")
    lines.append("    .entries = sCustomPortraitFiles,")
    lines.append("};")
    lines.append("")

    GEN_C.write_text("\n".join(lines))
    print(f"wrote {GEN_C.relative_to(ROOT)}")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fetch", action="store_true", help="Download PNGs from SpriteCollab")
    ap.add_argument("--force-fetch", action="store_true", help="Re-download even if PNG exists")
    ap.add_argument("--convert", action="store_true", help="Convert PNGs to .pal/.at4px")
    ap.add_argument("--generate", action="store_true", help="Regenerate custom_portraits_data.c")
    ap.add_argument("--stamp", type=Path, help="Touch stamp file when done")
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args()

    # Default: full pipeline
    if not (args.fetch or args.convert or args.generate or args.stamp):
        args.fetch = args.convert = args.generate = True

    if args.stamp and not (args.fetch or args.convert or args.generate):
        # Makefile rebuild path: convert + generate only
        args.convert = args.generate = True

    if args.fetch or args.force_fetch:
        for sid, folder, dex in EVOLVED_FORMS:
            n = fetch_species(folder, dex, force=args.force_fetch)
            if not args.quiet:
                print(f"fetched {folder} (#{dex}): {n} emotions")

    species_emotions: dict[str, list[str]] = {}
    for sid, folder, _dex in EVOLVED_FORMS:
        dest = OUT_DIR / folder
        emos: list[str] = []
        for game_name, _ in EMOTIONS:
            png = dest / f"{game_name}.png"
            if not png.exists():
                continue
            if args.convert:
                convert_png(png)
            elif not (png.with_suffix(".pal").exists() and png.with_suffix(".at4px").exists()):
                convert_png(png)
            emos.append(game_name)
        if emos:
            species_emotions[folder] = emos
            if not args.quiet and args.convert:
                print(f"converted {folder}: {len(emos)} emotions")

    if args.generate or args.convert or args.fetch:
        generate_c(species_emotions)

    if args.stamp:
        args.stamp.parent.mkdir(parents=True, exist_ok=True)
        args.stamp.write_text("ok\n")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
