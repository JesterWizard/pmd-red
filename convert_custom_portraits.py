#!/usr/bin/env python3
"""Fetch SpriteCollab portraits and convert to AT4PX + pal.

Source PNGs live in graphics/portraits/<species>/{Emotion}.png
(from https://sprites.pmdcollab.org / PMDCollab SpriteCollab).

Coverage (when custom_portraits is enabled):
  - National dex 1–386 (unique base forms) + Munchlax: Normal only
  - Starter-evolution + Spinda packs keep full emotion sets (pre-existing)

Build outputs next to each PNG:
  Emotion.pal    — 16 RGBX colors (index 0 = transparent black, unk4=0x80)
  Emotion.at4px  — AT4PX-compressed 5×5 4bpp tiles (decomp 0x320), vanilla kao format

Also regenerates src/custom_portraits_data.c (INCBINs + SIRO archive).

Requires skytemple-files for AT4PX compression.
"""

from __future__ import annotations

import argparse
import json
import re
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
MONSTER_H = ROOT / "include" / "constants" / "monster.h"
MONSTER_JSON = ROOT / "data" / "monster" / "monster_data.json"
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
VANILLA_SLOT_LAYOUTS: dict[str, list[str | None]] = {
    "charizard": [
        "Normal",
        "Surprised",
        "Joyous",
        "Pained",
        "Sad",
        "Happy",
        "Crying",
        "Shouting",
        "TearyEye",
        "Determined",
        "Angry",
        "Worried",
        "Surprised",
    ],
    "blastoise": [
        "Normal",
        "Surprised",
        "Angry",
        "Pained",
        "Happy",
        "Worried",
        "Sad",
        "Crying",
        "Shouting",
        "TearyEye",
        "Determined",
        "Joyous",
        "Surprised",
    ],
}

# Full emotion packs (starter evolutions + café NPC). Everyone else is Normal-only.
FULL_EMOTION_FOLDERS: set[str] = {
    "ivysaur",
    "venusaur",
    "charmeleon",
    "charizard",
    "wartortle",
    "blastoise",
    "raichu",
    "persian",
    "golduck",
    "machoke",
    "machamp",
    "marowak",
    "vaporeon",
    "jolteon",
    "flareon",
    "bayleef",
    "meganium",
    "quilava",
    "typhlosion",
    "croconaw",
    "feraligatr",
    "espeon",
    "umbreon",
    "grovyle",
    "sceptile",
    "combusken",
    "blaziken",
    "marshtomp",
    "swampert",
    "delcatty",
    "spinda",
}

FOLDER_OVERRIDES: dict[str, str] = {
    "ho_oh": "hooh",
    "deoxys_normal": "deoxysnormal",
}

NATIONAL_DEX_OVERRIDES: dict[str, int] = {
    "munchlax": 446,
}

SKIP_FOLDERS: set[str] = {
    "none",
    "unown_b",
    "unown_c",
    "unown_d",
    "unown_e",
    "unown_f",
    "unown_g",
    "unown_h",
    "unown_i",
    "unown_j",
    "unown_k",
    "unown_l",
    "unown_m",
    "unown_n",
    "unown_o",
    "unown_p",
    "unown_q",
    "unown_r",
    "unown_s",
    "unown_t",
    "unown_u",
    "unown_v",
    "unown_w",
    "unown_x",
    "unown_y",
    "unown_z",
    "unown_emark",
    "unown_qmark",
    "castform_snowy",
    "castform_sunny",
    "castform_rainy",
    "deoxys_attack",
    "deoxys_defense",
    "deoxys_speed",
    "decoy",
    "statue",
    "rayquaza_cutscene",
}

# Requested Gen 4 extras with no monster ID in Red Rescue Team.
UNSUPPORTED_GEN4: list[tuple[str, int]] = [
    ("bonsly", 438),
    ("lucario", 448),
    ("weavile", 461),
]


def folder_from_suffix(suffix: str) -> str:
    key = suffix.lower()
    return FOLDER_OVERRIDES.get(key, key)


def build_species_table() -> list[tuple[int, str, int, bool]]:
    """Return (species_id, folder, national_dex, full_emotions) sorted by species_id."""
    text = MONSTER_H.read_text()
    mons = re.findall(r"#define MONSTER_(\w+)\s+(\d+)", text)
    data = json.loads(MONSTER_JSON.read_text())

    rows_by_sid: dict[int, tuple[int, str, int, bool]] = {}
    for suffix, sid_s in mons:
        sid = int(sid_s)
        folder = folder_from_suffix(suffix)
        if folder in SKIP_FOLDERS:
            continue
        if folder == "unown_a":
            folder = "unown"
        if sid in rows_by_sid:
            continue

        if folder in NATIONAL_DEX_OVERRIDES:
            dex = NATIONAL_DEX_OVERRIDES[folder]
        else:
            if sid >= len(data):
                continue
            dex = int(data[sid]["dexInternal"][0])
            if dex < 1 or dex > 386:
                continue

        full = folder in FULL_EMOTION_FOLDERS
        rows_by_sid[sid] = (sid, folder, dex, full)

    return [rows_by_sid[k] for k in sorted(rows_by_sid)]


SPECIES_TABLE: list[tuple[int, str, int, bool]] = build_species_table()


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


def fetch_species(folder: str, dex: int, full_emotions: bool, force: bool) -> int:
    dest = OUT_DIR / folder
    dest.mkdir(parents=True, exist_ok=True)
    count = 0
    credits = fetch_url(f"{RAW_BASE}/{dex:04d}/credits.txt")
    if credits is not None:
        (dest / "credits.txt").write_bytes(credits)
    emotion_list = EMOTIONS if full_emotions else EMOTIONS[:1]
    for game_name, collab_name in emotion_list:
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
                colors[key] = len(colors) + 1
            pixels[y][x] = colors[key]

    if len(colors) > 15:
        flat = Image.new("RGBA", (40, 40))
        flat.putdata([im.getpixel((x, y)) for y in range(40) for x in range(40)])
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
    return At4pxHandler.serialize(At4pxHandler.compress(payload))


def write_palette(path: Path, palette: list[tuple[int, int, int]]) -> None:
    data = bytearray()
    for r, g, b in palette:
        data.extend((r, g, b, 0x80))
    path.write_bytes(data)


def convert_png(png: Path) -> bool:
    pal = png.with_suffix(".pal")
    at4 = png.with_suffix(".at4px")
    if pal.exists() and at4.exists():
        src_mtime = png.stat().st_mtime
        if pal.stat().st_mtime >= src_mtime and at4.stat().st_mtime >= src_mtime:
            return False
    im = Image.open(png)
    palette, pixels = quantize_portrait(im)
    tiles = encode_4bpp_tiles(pixels)
    write_palette(pal, palette)
    at4.write_bytes(compress_at4px(tiles))
    legacy = png.with_suffix(".at4pn")
    if legacy.exists():
        legacy.unlink()
    return True


def camel(name: str) -> str:
    return "".join(p.capitalize() for p in name.replace("-", "_").split("_"))


def slot_layout_for(folder: str, available: list[str]) -> list[str | None]:
    avail = set(available)
    if folder in VANILLA_SLOT_LAYOUTS:
        return [e if e is None or e in avail else None for e in VANILLA_SLOT_LAYOUTS[folder]]
    return [name if name in avail else None for name, _ in EMOTIONS]


def emotions_for_species(folder: str, full_emotions: bool) -> list[str]:
    dest = OUT_DIR / folder
    wanted = [name for name, _ in (EMOTIONS if full_emotions else EMOTIONS[:1])]
    return [name for name in wanted if (dest / f"{name}.png").exists()]


def generate_c(species_emotions: dict[str, list[str]]) -> bool:
    lines: list[str] = [
        "/* Auto-generated by convert_custom_portraits.py — do not edit. */",
        '#include "global.h"',
        '#include "custom_portraits.h"',
        '#include "decompress_sir.h"',
        '#include "structs/rgb.h"',
        '#include "structs/str_mon_portrait.h"',
        "",
    ]

    present = [
        (sid, folder)
        for sid, folder, _dex, _full in SPECIES_TABLE
        if species_emotions.get(folder)
    ]

    for sid, folder in present:
        emotions = species_emotions[folder]
        camel_name = camel(folder)
        slots = slot_layout_for(folder, emotions)
        used = sorted(
            {e for e in slots if e is not None},
            key=lambda e: emotions.index(e) if e in emotions else 99,
        )
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
    lines.append("const u16 gCustomPortraitCount = CUSTOM_PORTRAIT_COUNT;")
    lines.append("")

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

    text = "\n".join(lines)
    if GEN_C.exists() and GEN_C.read_text() == text:
        return False
    GEN_C.write_text(text)
    print(f"wrote {GEN_C.relative_to(ROOT)}")
    return True


def stamp_inputs_fresh(stamp: Path) -> bool:
    if not stamp.exists() or not GEN_C.exists():
        return False
    stamp_mtime = stamp.stat().st_mtime
    if Path(__file__).stat().st_mtime > stamp_mtime:
        return False
    if not OUT_DIR.exists():
        return False
    for png in OUT_DIR.rglob("*.png"):
        if png.stat().st_mtime > stamp_mtime:
            return False
    return True


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--fetch", action="store_true", help="Download PNGs from SpriteCollab")
    ap.add_argument("--force-fetch", action="store_true", help="Re-download even if PNG exists")
    ap.add_argument("--convert", action="store_true", help="Convert PNGs to .pal/.at4px")
    ap.add_argument("--generate", action="store_true", help="Regenerate custom_portraits_data.c")
    ap.add_argument("--stamp", type=Path, help="Touch stamp file when done")
    ap.add_argument("--quiet", action="store_true")
    args = ap.parse_args()

    if not (args.fetch or args.convert or args.generate or args.stamp):
        args.fetch = args.convert = args.generate = True

    if args.stamp and not (args.fetch or args.convert or args.generate):
        if stamp_inputs_fresh(args.stamp):
            return 0
        args.convert = args.generate = True

    if not args.quiet:
        full_n = sum(1 for _sid, _f, _d, full in SPECIES_TABLE if full)
        print(
            f"species table: {len(SPECIES_TABLE)} "
            f"({full_n} full-emotion, {len(SPECIES_TABLE) - full_n} Normal-only)"
        )
        for folder, dex in UNSUPPORTED_GEN4:
            print(
                f"note: {folder} (#{dex}) has no monster ID in Red Rescue Team — skipped",
                file=sys.stderr,
            )

    if args.fetch or args.force_fetch:
        for sid, folder, dex, full in SPECIES_TABLE:
            n = fetch_species(folder, dex, full, force=args.force_fetch)
            if not args.quiet:
                mode = "full" if full else "Normal"
                print(f"fetched {folder} (#{dex}, {mode}): {n} emotions")

    species_emotions: dict[str, list[str]] = {}
    for sid, folder, _dex, full in SPECIES_TABLE:
        emos = emotions_for_species(folder, full)
        for game_name in emos:
            png = OUT_DIR / folder / f"{game_name}.png"
            if args.convert:
                convert_png(png)
            elif not (png.with_suffix(".pal").exists() and png.with_suffix(".at4px").exists()):
                convert_png(png)
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
