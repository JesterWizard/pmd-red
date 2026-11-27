#!/usr/bin/env python3
"""EoS's opening movie: events/sky/opening.cfg -> the build's opening headers.

    tools/event_editor/opening.py headers GEN_DIR   # what the build runs
    tools/event_editor/opening.py check             # read the file, print problems

Writes GEN_DIR/sky_opening_config.h (the Shaymin scene's timings) and
GEN_DIR/sky_opening_scenes.h (the table of the thirteen recorded scenes,
src/sky_opening.c).

The recorded scenes' pictures come from recordings of the EoS ROM
(tools/make_sky_opening.py), kept as one blob a scene in
graphics/custom/sky_opening/scenes/, with what they were made with in
baked.json. Without the ROM this can still:

  * play fewer frames of a scene (first / last inside the recorded ones), and
    leave a scene out (play = no);
  * move the view (view = keyframes, ease): the blob is rewritten into the
    build directory with the backgrounds and sprites moved. Sprites that were
    outside the recorded view are not in the blob, so a view that shows more
    than the recorded one shows them missing; with the ROM,
    tools/make_sky_opening.py makes the scene again with the new view.

Anything else (frames before or after the recorded ones, other layers or
sprites) needs the ROM.
"""
from __future__ import annotations

import json
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from cfgfile import Cfg, CfgError  # noqa: E402

ROOT = Path(__file__).resolve().parents[2]
CFG = ROOT / "events" / "sky" / "opening.cfg"
SCENE_DIR = ROOT / "graphics" / "custom" / "sky_opening" / "scenes"
BAKED = SCENE_DIR / "baked.json"

FRAME = struct.Struct("<4hHBBBBBbbBBB")   # struct SkyOpFrame (src/sky_opening.c)
OBJ = struct.Struct("<hhHH")              # struct SkyOpObj
OBJ_W = [[8, 16, 32, 64], [16, 32, 32, 64], [8, 8, 16, 32]]
OBJ_H = [[8, 16, 32, 64], [8, 8, 16, 32], [16, 32, 32, 64]]

# The Shaymin scene (the first one): (key, macro, default, what it is)
SHAYMIN = [
    ("fade_in", "FADE_IN", 16, "frames of the fade in from black"),
    ("white_start", "WHITE_START", 34, "the frame the top screen starts to white out"),
    ("white_frames", "WHITE_LEN", 16, "frames to white (and as many back)"),
    ("flare", "FLARE_SEQ", 74, "the frame the lens flare starts to move"),
    ("pan_start", "PAN", 80, "the frame the camera starts to move down"),
    ("pan_join", "JOIN", 200, "the frame the camera reaches the land (an eased move from pan_start)"),
    ("pan_end", "PAN_END", 376, "the frame the camera stops"),
    ("pan_speed", "PAN_DIV", 2, "after pan_join the camera moves 1/pan_speed pixels a frame"),
    ("land_view", "BOTTOM_VIEW_Y", 208, "the picture line at the top of the screen when the camera reaches the land"),
    ("shaymin", "SHAYMIN", 215, "the frame Shaymin appears"),
    ("petals", "PETALS", 290, "the frame the petals appear"),
    ("fade_out", "FADE_OUT", 387, "the frame the fade out starts"),
    ("fade_out_frames", "FADE_OUT_LEN", 60, "frames of the fade out"),
    ("skip_fade_frames", "SKIP_FADE_LEN", 30, "frames of the fade out when START skips the opening"),
]


def load_baked() -> dict:
    return json.loads(BAKED.read_text())


def write_baked(doc: dict, path: Path = BAKED) -> None:
    """baked.json, one scene a line (tools/make_sky_opening.py writes it too)."""
    head = {k: v for k, v in doc.items() if k != "scenes"}
    lines = ["{"] + [f" {json.dumps(k)}: {json.dumps(v)}," for k, v in head.items()] + [' "scenes": [']
    lines += [f"  {json.dumps(s)}," for s in doc["scenes"]]
    lines[-1] = lines[-1].rstrip(",")
    lines += [" ]", "}"]
    path.write_text("\n".join(lines) + "\n")


def song_tick(doc, ds_frame: int) -> int:
    """The m4a clock (24 a quarter) at an EoS frame (tools/make_sky_opening.py)."""
    return max(0, round((ds_frame - doc["song_start_frame"]) * 104 / doc["ds_fps"] / 2))


def view_track(keys, first, last, ease=True) -> dict:
    """{recording frame: (x, y)}: the GBA view, smoothstep (or straight)
    between keyframes (tools/sky_opening_scenes.py, view_track)."""
    out = {}
    keys = sorted(keys)
    for i in range(first, last + 1):
        if i <= keys[0][0]:
            out[i] = tuple(keys[0][1:])
            continue
        if i >= keys[-1][0]:
            out[i] = tuple(keys[-1][1:])
            continue
        for (a, ax, ay), (b, bx, by) in zip(keys, keys[1:]):
            if a <= i <= b:
                t = (i - a) / (b - a)
                if ease:
                    t = t * t * (3 - 2 * t)
                out[i] = (round(ax + (bx - ax) * t), round(ay + (by - ay) * t))
                break
    return out


def fmt_view(keys) -> str:
    return "  ".join(f"{k}:{x},{y}" for k, x, y in keys)


def parse_view(text: str, cfg, sec):
    keys = []
    for part in text.split():
        m = re.fullmatch(r"(\d+):(-?\d+),(-?\d+)", part)
        if not m:
            raise CfgError(cfg.path, cfg.line_of(sec, "view"), f"view is frame:x,y keyframes (like 0:8,16  60:8,208), not {part!r}")
        keys.append(tuple(int(g) for g in m.groups()))
    if not keys:
        raise CfgError(cfg.path, cfg.line_of(sec, "view"), "view needs a keyframe")
    if len({k[0] for k in keys}) != len(keys):
        raise CfgError(cfg.path, cfg.line_of(sec, "view"), "two keyframes on one frame")
    return sorted(keys)


def _int(cfg, sec, key, default):
    v = cfg.get(sec, key, None)
    if v is None:
        return default
    if not re.fullmatch(r"-?\d+", v):
        raise CfgError(cfg.path, cfg.line_of(sec, key), f"{key} must be a whole number")
    return int(v)


def scene_settings(cfg: Cfg, b: dict) -> dict:
    """The settings of one recorded scene, checked against what the blob has."""
    sec = f"scene {b['name']}"
    a0, b0 = b["frames"]
    first = _int(cfg, sec, "first", a0)
    last = _int(cfg, sec, "last", b0)
    if not a0 <= first <= last <= b0:
        raise CfgError(cfg.path, cfg.line_of(sec, "first" if first < a0 else "last"),
                       f"{b['name']}: first..last must be inside the recorded frames {a0}..{b0} "
                       f"(more frames need the EoS ROM: tools/make_sky_opening.py)")
    view = parse_view(cfg.get(sec, "view"), cfg, sec) if cfg.get(sec, "view") else [tuple(k) for k in b["view"]]
    ease = cfg.get(sec, "ease", "smooth" if b["ease"] else "linear")
    if ease not in ("smooth", "linear"):
        raise CfgError(cfg.path, cfg.line_of(sec, "ease"), "ease is smooth or linear")
    play = cfg.get(sec, "play", "yes")
    if play not in ("yes", "no"):
        raise CfgError(cfg.path, cfg.line_of(sec, "play"), "play is yes or no")
    return dict(first=first, last=last, view=view, ease=ease == "smooth", play=play == "yes")


def reaim(b: dict, s: dict) -> bytes:
    """The scene's blob with the view moved from the recorded one to s['view']."""
    blob = bytearray((SCENE_DIR / f"{b['name']}.bin").read_bytes())
    a0, b0 = b["frames"]
    old = view_track([tuple(k) for k in b["view"]], a0, b0, b["ease"])
    new = view_track(s["view"], s["first"], s["last"], s["ease"])
    offs = b["offs"]
    objs = [OBJ.unpack_from(blob, offs["objs"] + 8 * k) for k in range((offs["bgsets"] - offs["objs"]) // 8)]
    vers, nv = b["versions"], b["num_ver"]
    out_objs, prev = [], None
    for i in range(s["first"], s["last"] + 1):
        at = offs["frames"] + FRAME.size * (i - a0)
        f = list(FRAME.unpack_from(blob, at))
        dx, dy = new[i][0] - old[i][0], new[i][1] - old[i][1]
        for layer in range(2):
            if nv[layer] == 0:
                continue
            v = vers[(nv[0] if layer == 1 else 0) + (0 if vers[nv[0] if layer == 1 else 0][2] & 4 else f[6 + layer])]
            w, h, flags = v[0], v[1], v[2]
            x, y = f[layer * 2] + dx, f[layer * 2 + 1] + dy
            if flags & 1:
                x %= w * 8
            if flags & 2:
                y %= h * 8
            if not (-32768 <= x < 32768 and -32768 <= y < 32768):
                raise CfgError(str(CFG), 0, f"{b['name']}: the view is too far from the recorded one")
            f[layer * 2], f[layer * 2 + 1] = x, y
        lst = []
        for k, (ox, oy, tile, attr) in enumerate(objs[f[4]:f[4] + f[5]]):
            if k >= b.get("screen_objs", 0):
                ox, oy = ox - dx, oy - dy
                ow, oh = OBJ_W[attr & 3][(attr >> 2) & 3], OBJ_H[attr & 3][(attr >> 2) & 3]
                if ox >= 240 or ox + ow <= 0 or oy >= 160 or oy + oh <= 0:
                    continue
            lst.append((ox, oy, tile, attr))
        if lst != prev:
            first_obj = len(out_objs)
            out_objs += lst
            prev = lst
        if first_obj > 0xFFFF or len(lst) > 255:
            raise CfgError(str(CFG), 0, f"{b['name']}: too many sprites")
        f[4], f[5] = first_obj, len(lst)
        FRAME.pack_into(blob, at, *f)
    while len(blob) % 4:
        blob.append(0)
    objs_off = len(blob)
    for o in out_objs:
        blob += OBJ.pack(*o)
    return bytes(blob), objs_off


def headers(cfg: Cfg, doc: dict, gen: Path) -> tuple:
    """(config header, scenes header) text; re-aimed blobs are written into gen/opening/."""
    cfg_lines = ["/* Generated from events/sky/opening.cfg by tools/event_editor/opening.py: edit that file. */",
                 "#ifndef GUARD_SKY_OPENING_CONFIG_H", "#define GUARD_SKY_OPENING_CONFIG_H"]
    for key, macro, default, _ in SHAYMIN:
        v = _int(cfg, "shaymin", key, default)
        if v < (1 if key in ("pan_speed", "fade_out_frames", "skip_fade_frames", "fade_in", "white_frames") else 0) or v > 2000:
            raise CfgError(cfg.path, cfg.line_of("shaymin", key), f"{key} is out of range")
        cfg_lines.append(f"#define SKY_OP_SHAYMIN_{macro} {v}")
    sh = {k: _int(cfg, "shaymin", k, d) for k, _, d, _ in SHAYMIN}
    if not sh["pan_start"] < sh["pan_join"] <= sh["pan_end"]:
        raise CfgError(cfg.path, cfg.line_of("shaymin", "pan_join"), "pan_start < pan_join <= pan_end")
    if sh["land_view"] + (sh["pan_end"] - sh["pan_start"]) // sh["pan_speed"] > 66 * 8 - 160:
        raise CfgError(cfg.path, cfg.line_of("shaymin", "pan_end"), "the camera would go past the bottom of the picture (368)")
    cfg_lines.append("#endif")

    L = ["/* Generated from events/sky/opening.cfg and graphics/custom/sky_opening/scenes/baked.json",
         " * by tools/event_editor/opening.py: edit events/sky/opening.cfg. */",
         "/* EoS's opening after the Shaymin scene, recorded from EoS (tools/sky_opening_record.py)",
         " * and converted by tools/sky_opening_scenes.py. Blob: frames, OBJs, BG palette sets,",
         " * OBJ palette sets, OBJ tiles, then per layer its tiles and each version's map. */", ""]
    table, count = [], 0
    for b in doc["scenes"]:
        s = scene_settings(cfg, b)
        if not s["play"]:
            continue
        count += 1
        name = b["name"]
        offs = dict(b["offs"])
        path = f"graphics/custom/sky_opening/scenes/{name}.bin"
        moved = s["view"] != [tuple(k) for k in b["view"]] or s["ease"] != b["ease"]
        if moved:
            blob, offs["objs"] = reaim(b, s)
            out = gen / "opening" / f"{name}.bin"
            out.parent.mkdir(parents=True, exist_ok=True)
            out.write_bytes(blob)
            path = out.resolve().relative_to(ROOT).as_posix() if out.resolve().is_relative_to(ROOT) else str(out)
        skip = s["first"] - b["frames"][0]
        n = s["last"] - s["first"] + 1
        offs["frames"] += FRAME.size * skip
        first = b["eos_first"] + skip
        tick = b["tick"] if b["tick"] < 0 or skip == 0 else song_tick(doc, first)
        L.append(f'static const u32 sOpBlob_{name}[] = INCBIN_U32("{path}");')
        L.append(f"static const struct SkyOpVersion sOpVer_{name}[] = {{")
        for v in b["versions"]:
            L.append(f"    {{ {', '.join(map(str, v))} }},")
        L.append("};")
        table.append(f"    {{ sOpBlob_{name}, sOpVer_{name}, {n}, {tick}, {{ {b['num_ver'][0]}, {b['num_ver'][1]} }}, 0, "
                     f"{offs['frames']}, {offs['objs']}, {offs['bgsets']}, {offs['objsets']}, {offs['objtiles']} }}, "
                     f"/* {name}: EoS frames {first}-{first + n - 1} */")
    if not count:
        raise CfgError(cfg.path, 0, "play at least one scene")
    L.append("")
    L.append(f"#define SKY_OP_SCENE_COUNT {count}")
    L.append(f"#define SKY_OP_TITLE_TICK {doc['title_tick']}")
    L.append("static const struct SkyOpScene sOpScenes[SKY_OP_SCENE_COUNT] = {")
    L += table
    L.append("};")
    return "\n".join(cfg_lines) + "\n", "\n".join(L) + "\n"


def needs_rom(cfg: Cfg, doc: dict) -> list:
    """What in the file differs from the blobs in a way only the ROM can do exactly."""
    notes = []
    for b in doc["scenes"]:
        try:
            s = scene_settings(cfg, b)
        except CfgError as e:
            notes.append(e.msg)
            continue
        if s["view"] != [tuple(k) for k in b["view"]] or s["ease"] != b["ease"]:
            notes.append(f"{b['name']}: the view is moved without the ROM (sprites outside the recorded view are missing); "
                         "tools/make_sky_opening.py EOS.nds makes it exactly")
    return notes


def main(argv) -> int:
    try:
        if len(argv) == 2 and argv[0] == "headers":
            gen = Path(argv[1])
            a, b = headers(Cfg.load(CFG), load_baked(), gen)
            gen.mkdir(parents=True, exist_ok=True)
            (gen / "sky_opening_config.h").write_text(a)
            (gen / "sky_opening_scenes.h").write_text(b)
            return 0
        if argv == ["check"]:
            cfg, doc = Cfg.load(CFG), load_baked()
            headers(cfg, doc, ROOT / "build" / "pmd_red" / "gen" / "sky")
            for n in needs_rom(cfg, doc):
                print("note:", n)
            print(f"{CFG.relative_to(ROOT)}: OK")
            return 0
    except CfgError as e:
        print(f"error: {e}", file=sys.stderr)
        return 1
    print(__doc__)
    return 2


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
