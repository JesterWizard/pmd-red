"""Dungeon: translucent windows, the message log, the minimap dot, the Pit."""

import struct
from collections import Counter

import numpy as np

from harness import check, expect, fail
from probes import FILL_X1, TEXT_Y0, TEXT_Y1, WHITE, count_color, dialogue_ready
from checks.scenes import VANILLA_OBJ_PAL15

MUS_BOSS = 63  # Boss Battle! (checks/audio.py)

WINDOW_BLEND = (10, 16 - 10)  # EoS: 60% window fill over 40% dungeon (BLDALPHA 10/6)


def blend_desc(f):
    return f"BLDCNT {f.io(0x50):#06x} BLDALPHA {f.bldalpha()}"


def window_blended(f):
    """BG1 (the window layer) is the first alpha target at 10/6."""
    cnt = f.io(0x50)
    return (cnt >> 6) & 3 == 1 and cnt & 0x2 and f.bldalpha() == WINDOW_BLEND


@check("divide", "Dungeon main menu is translucent (BLDALPHA 10/6, the dungeon shows through)")
def dungeon_menu_translucent(t):
    f = yield from t.wait_event("main_menu")
    expect(window_blended(f), f"main menu open: {blend_desc(f)}")
    # The empty right part of the info window, (150..220, 140..150), shows
    # the floor through the 60% fill: many colours, not one.
    n = len(f.colors_in(150, 140, 220, 150))
    if n < 6:
        t.snap(f, "menu")
        fail(f"{n} colours behind the info window's fill (opaque?)")
    return f"{blend_desc(f)}, {n} colours under the window fill"


def log_lines(f):
    """Top rows of text lines in the dungeon message box (white glyph rows)."""
    box = f.region(15, TEXT_Y0, FILL_X1 + 1, TEXT_Y1 + 1)
    white = np.all(box == np.array(WHITE), axis=2)
    return white


@check("divide", "Dungeon message log: translucent, text 5 px in, 13 px lines, one-row divider with a gap")
def dungeon_message_log(t):
    # The first message on entering B1F is the floor hint (no speaker).
    f = yield from t.wait(lambda f: t.game.in_dungeon(f) and dialogue_ready(t.game, f),
                          "the first message in Beach Cave")
    expect(window_blended(f), f"message box: {blend_desc(f)}")
    white = log_lines(f)
    ys, xs = np.where(white)
    expect(len(xs), "no text in the message box")
    left = 15 + int(xs.min())
    rows = sorted(set((ys + TEXT_Y0).tolist()))
    tops = [r for r in rows if r - 1 not in rows]
    errs = []
    if not 20 <= left <= 22:
        errs.append(f"text starts at x={left} (frame inner edge 15, EoS pads 5 px)")
    gaps = {b - a for a, b in zip(tops, tops[1:])}
    if len(tops) >= 2 and gaps != {13}:
        errs.append(f"line tops {tops}: spacing {sorted(gaps)}, expected 13")
    expect(not errs, "; ".join(errs))
    msg = f"hint box: text from x={left}, lines at {tops}"
    # The divider between turns: a full-width white row in the log.
    while True:
        f = yield from t.next("a turn divider in the message log")
        if not t.game.in_dungeon(f):
            continue
        box = f.region(15, TEXT_Y0 - 1, FILL_X1 + 1, TEXT_Y1 + 1)
        white = np.all(box == np.array(WHITE), axis=2).sum(axis=1)
        div = [i for i, c in enumerate(white) if c >= 150]
        if div:
            break
    y = TEXT_Y0 - 1 + div[0]
    if len(div) != 1:
        t.snap(f, "divider")
        fail(f"divider is {len(div)} rows (y={[TEXT_Y0 - 1 + d for d in div]}), expected one")
    below = f.region(15, y + 1, FILL_X1 + 1, y + 2).reshape(-1, 3).tolist()
    text_below = sum(1 for p in below if tuple(p) in (WHITE, (0, 255, 255), (255, 255, 0)))
    if text_below:
        t.snap(f, "divider")
        fail(f"divider at y={y}: {text_below} text pixels right under it (no 1 px gap)")
    return msg + f"; divider one row at y={y} with a clear row under it"


@check("divide", "Hero's dot on the dungeon minimap uses the UI palette (OBJ palette 15 = vanilla)")
def minimap_dot_palette(t):
    yield from t.wait_event("menu_closed")
    f = yield from t.wait(lambda f: any(o["tile"] == 0x215 for o in f.oam()),
                          "the hero's dot on the minimap (tile 0x215)")
    o = [o for o in f.oam() if o["tile"] == 0x215][0]
    pal = f.obj_palette(o["pal"])
    expect(pal[:8] == VANILLA_OBJ_PAL15,
           f"dot on OBJ palette {o['pal']} = {['%04x' % c for c in pal[:8]]} (the storm bolt's colours?)")
    return f"dot at ({o['x']}, {o['y']}) on OBJ palette {o['pal']} = UI palette"


@check("divide", "The hero has a name in the dungeon log (debug boot: the species name)")
def hero_named_in_log(t):
    f = yield from t.wait_event("menu_closed")
    names = set()
    for _ in range(1200):
        f = yield from t.next("dungeon log messages")
        if f.n % 30 == 0 and t.game.in_dungeon(f):
            names |= set(t.game.dungeon_log_names(f))
        if "Charmander" in names:
            break
    expect(names, "no team member named in the log")
    expect("" not in names, f"an empty team member name in the log: {sorted(names)}")
    expect("Charmander" in names, f"the hero (Charmander) never named in the log: {sorted(names)}")
    return f"team names in the log: {sorted(names)}"


@check("pit", "Dungeon talk keeps the dialogue box opaque (Pit cutscene)")
def dungeon_talk_opaque(t):
    f = yield from t.wait(lambda f: t.game.in_dungeon(f) and dialogue_ready(t.game, f)
                          and "Squirtle" in f.text, "the partner speaking in the Pit")
    n = len(f.colors_in(150, 130, 220, 143))
    if f.bldalpha() == WINDOW_BLEND and f.io(0x50) & 2 or n > 3:
        t.snap(f, "talk")
        fail(f"speaker box translucent: {blend_desc(f)}, {n} colours in its empty fill")
    return f"{blend_desc(f)}, fill uniform ({n} colours)"


def all_black_8x8(fb, skip_rows=16):
    """Top-left corners of 8x8 squares that are entirely black."""
    black = (fb.sum(axis=2) == 0).astype(np.int32)
    black[:skip_rows] = 0
    ii = np.pad(black.cumsum(0).cumsum(1), ((1, 0), (1, 0)))
    s = ii[8:, 8:] - ii[:-8, 8:] - ii[8:, :-8] + ii[:-8, :-8]
    ys, xs = np.where(s == 64)
    return list(zip(xs.tolist(), ys.tolist()))


@check("pit", "Beach Cave Pit background: no black tiles (ceiling, light, water)")
def pit_no_black_tiles(t):
    f = yield from t.wait_event("rotate_before")
    hits = all_black_8x8(f.fb)
    if hits:
        t.snap(f, "black")
        fail(f"{len(hits)} all-black 8x8 squares, first at {hits[:3]}")
    return "no all-black 8x8 square on screen during the fight"


@check("pit", "Rotate mode (tap R) in the Pit draws the grid, no garbage tiles")
def pit_rotate_grid(t):
    """Rotate mode redraws BG2's map (screen block 14) with the grid chunks.
    In the Pit those must use the grid tiles SkyStory_RelocateGridTiles copied
    after the Pit's 925 tiles, not tile slots the Pit art has taken over
    (which drew garbage). Pixels are not compared: the water's palette
    animation changes them too."""
    a = yield from t.wait_event("rotate_before")
    ma = np.frombuffer(a.read(0x06007000, 2048), "<u2")
    b = yield from t.wait_event("rotate_shown")
    mb = np.frombuffer(b.read(0x06007000, 2048), "<u2")
    changed = mb[ma != mb]
    tiles = sorted({int(e) & 0x3FF for e in changed})
    errs = []
    if len(changed) < 40:
        errs.append(f"only {len(changed)} BG2 map entries changed: no grid")
    bad = [x for x in tiles if x < 925 and x != 0]
    if bad:
        errs.append(f"grid entries use tiles {bad[:12]} inside the Pit art (garbage)")
    if errs:
        t.snap(a, "before")
        t.snap(b, "rotate")
    expect(not errs, "; ".join(errs))
    return f"{len(changed)} BG2 entries changed, grid tiles {tiles[:6]}{'...' if len(tiles) > 6 else ''}"


# EoS's fixed-floor boss stats (overlay 10 spawn stats 1 and 2), as set by
# SkyStory_ApplyFixedRoomBossStats: species -> (level, HP, Atk, Def).
BOSS_STATS = {41: ("Zubat", 3, 15, 15, 11), 109: ("Koffing", 6, 27, 20, 8)}


def find_boss_infos(f, dungeon):
    """EntityInfo of the wild Zubat / Koffing in gDungeon, found by shape:
    species at +2, isNotTeamMember at +6, level at +9, HP / max HP at +0xE,
    Atk / Sp. Atk at +0x14, Def / Sp. Def at +0x16 (include/structs/dungeon_entity.h)."""
    raw = f.read(dungeon, 0x40000)
    out = {}
    for o in range(0, len(raw) - 0x20, 2):
        sid = struct.unpack_from("<h", raw, o + 2)[0]
        if sid in BOSS_STATS and raw[o + 6] == 1 and 1 <= raw[o + 9] <= 100:
            hp, mhp = struct.unpack_from("<hh", raw, o + 0xE)
            if 0 < mhp < 1000 and 0 <= hp <= mhp:
                out.setdefault(sid, (raw[o + 9], mhp, raw[o + 0x14], raw[o + 0x15],
                                     raw[o + 0x16], raw[o + 0x17]))
    return out


@check("pit", "Zubat and Koffing have EoS's boss stats; bosses give no EXP by default")
def boss_stats(t):
    f = yield from t.wait_event("rotate_before")
    expect(f.u8(t.syms["gSkyBossExp"]) == 0, "gSkyBossExp (Boss EXP toggle) is on by default")
    found = find_boss_infos(f, f.u32(t.syms["gDungeon"]))
    errs, ok = [], []
    for sid, (name, lvl, hp, atk, df) in BOSS_STATS.items():
        got = found.get(sid)
        want = (lvl, hp, atk, atk, df, df)
        if got != want:
            errs.append(f"{name}: L/HP/Atk/SpA/Def/SpD {got}, expected {want}")
        else:
            ok.append(f"{name} L{lvl} {hp} HP {atk}/{df}")
    expect(not errs, "; ".join(errs))
    return ", ".join(ok) + "; Boss EXP off"


@check("pit", "Boss battle transition (EoS CORO_BOSS_WIPE_FUNC): two white flashes, streaks, white-out before the fight")
def boss_transition(t):
    """src/sky_boss_wipe.c: flashes and the white-out use BLDY brightness
    (BLDCNT effect 'brighten'); the streaks are BG1/BG2 blended with BLDALPHA."""
    yield from t.wait(lambda f: t.game.in_dungeon(f) and "Um...#W Hey!" in f.text,
                      "the partner's 'Um... Hey!' in the Pit")
    flashes, white, streaks, prev = 0, 0, 0, False
    while True:
        f = yield from t.next()
        if t.game.playing(f, "bgm", MUS_BOSS):
            break
        cnt = f.io(0x50)
        bright = (cnt >> 6) & 3 == 2 and (f.io(0x54) & 0x1F) >= 8
        if bright and not prev:
            flashes += 1
        prev = bright
        if (cnt >> 6) & 3 == 2 and (f.io(0x54) & 0x1F) >= 16:
            white += 1
        # the streaks: alpha blend with BG1/BG2 on top, between the second
        # flash and the white-out (dungeon windows use the same blend mode)
        if flashes == 2 and not bright and (cnt >> 6) & 3 == 1 and cnt & 0x6:
            streaks += 1
    expect(flashes >= 3, f"{flashes} brighten events before 'Boss Battle!' (expected 2 flashes + the white-out)")
    expect(white >= 30, f"white held for {white} frames")
    expect(streaks >= 30, f"streak blend on {streaks} frames")
    return f"{flashes} brighten events, white {white} frames, streak blend {streaks} frames"
