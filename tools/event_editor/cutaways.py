#!/usr/bin/env python3
"""Story CGs ("cutaways"): events/sky/cutaways.cfg -> the build's CG header.

    tools/event_editor/cutaways.py header OUT.h   # what the build runs
    tools/event_editor/cutaways.py check          # read the file, print problems
    tools/event_editor/cutaways.py pans           # rebuild the pan pictures (after a [pan] top= change)

The header has the picture table (gSkyCutaways) and the settings
src/sky_cutaways.c is built with. Pictures are PNGs: one that has its .at4px
and .pal next to it (the ones converted from Explorers of Sky) is used as it
is; any other is converted here (240x160, up to 240 colours) into the build
directory. No Explorers of Sky ROM is needed for any of it.
"""
from __future__ import annotations

import math
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from cfgfile import Cfg, CfgError  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]
CFG = ROOT / "events" / "sky" / "cutaways.cfg"

# The CGs include/sky_story.h names, with their ids. Ids never change: a CG
# that goes away leaves a hole (its entry is empty and SKY_CUTAWAY skips it),
# and an added CG takes an id no CG has had (from SKY_CUTAWAY_COUNT, 15, up).
BUILTIN = {"SKY_DAY": 0, "SKY_DUSK": 1, "GUILD_SKY": 4, "RELIC_FRAGMENT": 5, "SUNSET_SKY": 6,
           **{f"SUNSET_SEA{i}": 7 + i for i in range(8)}}
BUILTIN_COUNT = 15   # SKY_CUTAWAY_COUNT
# SUNSET_SEA_ANIM shows these in turn: they cannot go
REQUIRED = [f"SUNSET_SEA{i}" for i in range(8)]
# the connected pans and the pictures tools/make_sky_cutaway_scrolls.py builds for them
PANS = {"SKY_DAY_SCROLL": "beach", "GUILD_SKY_SCROLL": "guild"}
DIRECTIONS = ["down", "up", "none"]
EASINGS = ["smooth", "linear"]
MAX_ID = 99   # ids from 100 are the sequences (include/sky_story.h)

SHIPPED_PAN = dict(direction="down", speed="100", easing="smooth", fade_in="yes")


def load(path: Path = CFG) -> Cfg:
    return Cfg.load(path)


def _int(cfg, sec, key, default, lo, hi):
    v = cfg.get(sec, key, str(default))
    if not re.fullmatch(r"-?\d+", v or ""):
        raise CfgError(cfg.path, cfg.line_of(sec, key), f"{key} must be a whole number")
    v = int(v)
    if not lo <= v <= hi:
        raise CfgError(cfg.path, cfg.line_of(sec, key), f"{key} must be {lo}..{hi}")
    return v


def _yesno(cfg, sec, key, default):
    v = cfg.get(sec, key, default)
    if v not in ("yes", "no"):
        raise CfgError(cfg.path, cfg.line_of(sec, key), f"{key} is yes or no")
    return v == "yes"


def cgs(cfg: Cfg) -> list:
    """[(name, id, picture path)] in the file's order."""
    names = cfg.names("cg")
    for b in REQUIRED:
        if b not in names:
            raise CfgError(cfg.path, 0, f"[cg {b}] is missing (the sunset sea animation shows SUNSET_SEA0..7)")
    out, used = [], {}
    for n in names:
        sec = f"cg {n}"
        if not re.fullmatch(r"[A-Z][A-Z0-9_]*", n):
            raise CfgError(cfg.path, cfg.line_of(sec), "a CG name is CAPITALS, digits and _")
        if n in PANS or n in ("STORM", "SUNSET_SEA_ANIM", "BOOT_SCREENS", "TITLE_SCREEN", "OPENING", "COUNT"):
            raise CfgError(cfg.path, cfg.line_of(sec), f"{n} is taken")
        i = _int(cfg, sec, "id", -1, 0, MAX_ID)
        if cfg.get(sec, "id") is None:
            raise CfgError(cfg.path, cfg.line_of(sec), "id = is missing (a new CG takes the next free one from 15)")
        if n in BUILTIN and i != BUILTIN[n]:
            raise CfgError(cfg.path, cfg.line_of(sec, "id"), f"{n} is id {BUILTIN[n]} (include/sky_story.h): ids never change")
        if n not in BUILTIN and i < BUILTIN_COUNT:
            raise CfgError(cfg.path, cfg.line_of(sec, "id"), f"an added CG takes an id from {BUILTIN_COUNT} up "
                           "(0..14 belong to the built-in ones, also the ones that are gone)")
        if i in used:
            raise CfgError(cfg.path, cfg.line_of(sec, "id"), f"id {i} is {used[i]}'s too")
        used[i] = n
        pic = cfg.get(sec, "picture")
        if not pic:
            raise CfgError(cfg.path, cfg.line_of(sec), "picture = is missing")
        if not (ROOT / pic).exists():
            raise CfgError(cfg.path, cfg.line_of(sec, "picture"), f"{pic} does not exist")
        out.append((n, i, pic))
    return out


def next_id(cfg: Cfg) -> int:
    """The id for a new CG: one no CG has had (above every built-in and every id in the file)."""
    ids = [BUILTIN_COUNT - 1] + [int(v) for n in cfg.names("cg") for v in [cfg.get(f"cg {n}", "id", "0")] if v.isdigit()]
    return max(ids) + 1


def extra_ids(cfg: Cfg | None = None) -> dict:
    """{name: id} of the CGs include/sky_story.h has no name for (the added
    ones, and SUNSET_SEA1..7)."""
    cfg = cfg or load()
    return {n: i for n, i, _ in cgs(cfg) if n not in BUILTIN or n in REQUIRED[1:]}


def number_extra_cgs(text: str) -> str:
    """A compiled scene header, with the ids of the CGs it uses that
    include/sky_story.h does not name defined at its top."""
    extra = {n: i for n, i in extra_ids().items() if re.search(rf"\bSKY_CUTAWAY_{n}\b", text)}
    if not extra:
        return text
    head, rest = text.split("\n", 1)
    defs = "".join(f"#define SKY_CUTAWAY_{n} {i} /* events/sky/cutaways.cfg */\n" for n, i in extra.items())
    return head + "\n" + defs + rest


def pan_settings(cfg: Cfg, name: str) -> dict:
    sec = f"pan {name}"
    if cfg.section(sec) is None:
        raise CfgError(cfg.path, 0, f"[{sec}] is missing")
    d = cfg.get(sec, "direction", "down")
    if d not in DIRECTIONS:
        raise CfgError(cfg.path, cfg.line_of(sec, "direction"), f"direction is {' / '.join(DIRECTIONS)}")
    e = cfg.get(sec, "easing", "smooth")
    if e not in EASINGS:
        raise CfgError(cfg.path, cfg.line_of(sec, "easing"), f"easing is {' / '.join(EASINGS)}")
    speed = _int(cfg, sec, "speed", 100, 1, 6000)
    return dict(direction=d, speed=speed, easing=e, fade_in=_yesno(cfg, sec, "fade_in", "yes"))


def picture_data(pic: str, gen: Path) -> tuple:
    """(at4px path, pal path) for a PNG, as the INCBIN paths (converted into gen/ when needed)."""
    png = ROOT / pic
    at, pal = png.with_suffix(".at4px"), png.with_suffix(".pal")
    if at.exists() and pal.exists():
        return at.relative_to(ROOT).as_posix(), pal.relative_to(ROOT).as_posix()
    out = gen / "cutaways"
    out.mkdir(parents=True, exist_ok=True)
    gat, gpal = out / (png.stem + ".at4px"), out / (png.stem + ".pal")
    if not (gat.exists() and gpal.exists() and gat.stat().st_mtime >= png.stat().st_mtime):
        convert_png(png, gat, gpal)
    rel = lambda p: p.resolve().relative_to(ROOT).as_posix() if p.resolve().is_relative_to(ROOT) else str(p)
    return rel(gat), rel(gpal)


def fit_240x160(png: Path):
    from PIL import Image
    im = Image.open(png).convert("RGB")
    if im.size == (240, 160):
        return im, None
    size = im.size
    # fill the screen: scale to cover it, then crop the middle
    k = max(240 / im.width, 160 / im.height)
    w, h = max(240, math.ceil(im.width * k)), max(160, math.ceil(im.height * k))
    im = im.resize((w, h), Image.LANCZOS)
    x, y = (w - 240) // 2, (h - 160) // 2
    return im.crop((x, y, x + 240, y + 160)), f"{png.name} is {size[0]}x{size[1]}: scaled to {w}x{h}, the middle 240x160 is used"


def convert_png(png: Path, at: Path, pal: Path) -> None:
    sys.path.insert(0, str(ROOT))
    import convert_title_backgrounds as title
    im, note = fit_240x160(png)
    if note:
        print(f"cutaways: {note}", file=sys.stderr)
    raw, p, ntiles, ncolors, merged = title.convert_image(im, quantized=title.quantize_gba(im), max_tiles=608)
    at.write_bytes(title.wrap_at4px(raw))
    pal.write_bytes(p)
    print(f"cutaways: converted {png.relative_to(ROOT) if png.is_relative_to(ROOT) else png} "
          f"({ntiles} tiles, {ncolors} colours{', tiles merged to fit' if merged else ''})")


def ident(name: str) -> str:
    return "".join(p.capitalize() for p in name.lower().split("_"))


def header(cfg: Cfg, gen: Path) -> str:
    table = cgs(cfg)
    fade = _int(cfg, "stills", "fade_frames", 32, 32, 32 * 16)
    if fade % 32:
        raise CfgError(cfg.path, cfg.line_of("stills", "fade_frames"), "fade_frames is 32, 64, 96, ... (the fade has 32 steps)")
    skip = _int(cfg, "stills", "skip_after", 30, 0, 100000)
    sea = _int(cfg, "sequence SUNSET_SEA_ANIM", "frames_per_picture", 8, 1, 255)
    pans = {n: pan_settings(cfg, n) for n in PANS}
    shipped = all(dict(direction=p["direction"], speed=str(p["speed"]), easing=p["easing"],
                       fade_in="yes" if p["fade_in"] else "no") == SHIPPED_PAN for p in pans.values())
    count = max([BUILTIN_COUNT] + [i + 1 for _, i, _ in table])
    L = ["/* Generated from events/sky/cutaways.cfg by tools/event_editor/cutaways.py: edit that file. */",
         "#ifndef GUARD_SKY_CG_CONFIG_H", "#define GUARD_SKY_CG_CONFIG_H", "",
         f"#define SKY_CG_COUNT {count}  /* ids 0..{count - 1}; an id with no CG is an empty entry */",
         f"#define SKY_CG_FADE_FRAMES_PER_STEP {fade // 32}",
         f"#define SKY_CG_SKIP_AFTER {skip}",
         f"#define SKY_CG_SEA_FRAMES {sea}",
         "#define SKY_CG_PAN_DOWN 0", "#define SKY_CG_PAN_UP 1", "#define SKY_CG_PAN_NONE 2",
         f"#define SKY_CG_PANS_AS_SHIPPED {int(shipped)}"]
    for n, pair in PANS.items():
        p = pans[n]
        g = math.gcd(60, p["speed"])
        P = f"SKY_CG_PAN_{pair.upper()}"
        L += [f"#define {P}_DIR SKY_CG_PAN_{p['direction'].upper()}",
              f"#define {P}_NUM {60 // g}  /* pan frames = distance * NUM / DEN: {p['speed']} px a second */",
              f"#define {P}_DEN {p['speed'] // g}",
              f"#define {P}_EASE {int(p['easing'] == 'smooth')}",
              f"#define {P}_FADE_IN {'TRUE' if p['fade_in'] else 'FALSE'}"]
    L += ["#endif", "", "/* the picture table, for src/sky_cutaways_data.c */", "#ifdef SKY_CG_TABLE"]
    for n, _, pic in table:
        at, pal = picture_data(pic, gen)
        L.append(f'static const u8 s{ident(n)}Gfx[] = INCBIN_U8("{at}");')
        L.append(f'static const u8 s{ident(n)}Pal[] = INCBIN_U8("{pal}");')
    L.append("")
    L.append("const SkyCutawayArt gSkyCutaways[SKY_CG_COUNT] = {")
    for n, i, _ in table:
        idx = (f"SKY_CUTAWAY_SUNSET_SEA0 + {i - BUILTIN['SUNSET_SEA0']}" if n in REQUIRED
               else f"SKY_CUTAWAY_{n}" if n in BUILTIN else str(i))
        L.append(f"    [{idx}] = {{ s{ident(n)}Gfx, s{ident(n)}Pal }},")
    L.append("};")
    L.append("#endif")
    return "\n".join(L) + "\n"


def rebuild_pans() -> int:
    """Rebuild the pan pictures (graphics/custom/sky_scrolls/) from the [pan] top= CGs."""
    import subprocess
    return subprocess.call([sys.executable, str(ROOT / "tools" / "make_sky_cutaway_scrolls.py")], cwd=ROOT)


def main(argv) -> int:
    try:
        if len(argv) == 2 and argv[0] == "header":
            out = Path(argv[1])
            text = header(load(), out.parent)
            out.parent.mkdir(parents=True, exist_ok=True)
            out.write_text(text)
            return 0
        if argv == ["check"]:
            cfg = load()
            header(cfg, ROOT / "build" / "pmd_red" / "gen" / "sky")
            print(f"{CFG.relative_to(ROOT)}: OK ({len(cgs(cfg))} CGs)")
            return 0
        if argv == ["pans"]:
            return rebuild_pans()
    except CfgError as e:
        print(f"error: {e}", file=sys.stderr)
        return 1
    print(__doc__)
    return 2


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
