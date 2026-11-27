"""Drenched Bluff (chapter 2, Red's Thunderwave Cave slot): the `bluff` ROM
boots into it (SKY_DRENCHED_BLUFF_DEBUG_EVENT) and walks B1F to B6F's stairs.

The expected floors are read from src/data/sky_drenched_bluff_floors.h
(tools/make_sky_dungeon_floors.py, EoS's mappa_s.bin), so the checks compare
the game with EoS's data, not with numbers written here twice."""

import re

from game import ROOT, load_defines, load_enum_block
from harness import check, expect, fail

FLOORS_H = ROOT / "src/data/sky_drenched_bluff_floors.h"
TILESET_H = ROOT / "src/data/sky_drenched_bluff_tileset.h"
DUNGEON_ID = 1                 # DUNGEON_THUNDERWAVE_CAVE plays Drenched Bluff
TILESET = 0x2A                 # SKY_DRENCHED_BLUFF_TILESET (include/sky_story.h)
MUS_DRENCHED_BLUFF = 944       # MUS_SKY_DRENCHED_BLUFF
END_WAIT = 600                 # frames from B6F's stairs to the dungeon's end

# EoS level-up moves (BALANCE/waza_p.bin) of Drenched Bluff's Pokémon up to
# level 6: (level, move id). Red's move ids are EoS's for these.
LEARNSETS = {
    "MONSTER_LILEEP": [(1, 46), (1, 71)],             # Astonish, Constrict
    "MONSTER_ANORITH": [(1, 58), (1, 260)],           # Harden, Scratch
    "MONSTER_SHELLOS": [(1, 213), (2, 212), (4, 58)],  # Mud-Slap, Mud Sport, Harden
    "MONSTER_CHINGLING": [(1, 294), (6, 217)],        # Wrap, Growl
}


def eos_floors():
    """[{spawns: {species id: (name, level, weight)}, props: [28 bytes],
    guaranteed: [item names]}] per floor, from the generated header."""
    text = FLOORS_H.read_text()
    mons = load_defines("include/constants/monster.h", "MONSTER_")
    mons.update(load_defines("include/constants/sky_gen4.h", "MONSTER_"))
    count = int(re.search(r"#define \w+FloorCount (\d+)", text).group(1))
    out = []
    for n in range(1, count + 1):
        body = re.search(r"Spawns%d\[\] = \{(.*?)\};" % n, text, re.S).group(1)
        spawns = {mons[s]: (s, int(lv), int(w)) for s, lv, w in
                  re.findall(r"\{ (MONSTER_\w+), (\d+), (\d+) \}", body)}
        out.append(dict(spawns=spawns))
    for i, m in enumerate(re.finditer(r"\.props = \{ ([\d, ]+) \},.*?\.guaranteed = \{ ([\w, ]+) \}",
                                      text, re.S)):
        out[i]["props"] = [int(v) for v in m.group(1).split(",")]
        out[i]["guaranteed"] = [g.strip() for g in m.group(2).split(",") if g.strip() != "0"]
    return out


@check("bluff", "Debug boot (SKY_DRENCHED_BLUFF_DEBUG_EVENT) enters Drenched Bluff B1F; six floors, stairs down")
def bluff_boots(t):
    f = yield from t.wait_event("floor_1")
    loc = t.game.dungeon_location(f)
    expect(loc == (DUNGEON_ID, 1), f"dungeon/floor {loc}, expected ({DUNGEON_ID}, 1)")
    team = t.game.pokemon(f, wild=False)
    expect(len(team) >= 2, f"{len(team)} team members")
    return f"Drenched Bluff B1F at frame {f.n}; team {[(m['species'], m['level']) for m in team]}"


@check("bluff", "Every floor's tiles in VRAM are EoS's Drenched Bluff tileset (dungeon.bin #2); EoS floor layout")
def bluff_tileset(t):
    tiles = t.syms["sDrenchedBluffTiles"]
    words = int(re.search(r"sDrenchedBluffTiles\[(\d+)\]", TILESET_H.read_text()).group(1))
    want = None
    eos = eos_floors()
    done = []
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        if want is None:
            want = t.run.emu.read(tiles, 4 * words)
        got = f.read(0x06008000, len(want))
        bad = sum(a != b for a, b in zip(got, want))
        if bad:
            t.snap(f, f"b{n}f")
            fail(f"B{n}F: {bad} of {len(want)} bytes of the BG tiles at 0x06008000 differ from sDrenchedBluffTiles")
        # the floor's properties in gDungeon are EoS's (tileset id and money
        # cap set by SkyStory_ApplyFloorOverrides, music byte Red's)
        props = list(eos[n - 1]["props"])
        props[2] = TILESET
        props[0x17] = (props[0x17] * 5 + 39) // 40
        raw = f.read(f.u32(t.syms["gDungeon"]), 0x20000)
        pat = re.compile(re.escape(bytes(props[:3])) + b"." + re.escape(bytes(props[4:])), re.S)
        expect(pat.search(raw), f"B{n}F: EoS's floor properties {props} not in gDungeon")
        done.append(n)
    return f"B{done[0]}F-B{done[-1]}F: {len(want)} bytes of tiles match; floor properties are EoS's"


@check("bluff", "Wild Pokémon on each floor are EoS's (mappa_s.bin species and levels) with EoS's moves")
def bluff_enemies(t):
    eos = eos_floors()
    names = {}
    seen = []
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        wild = t.game.pokemon(f)
        if n == 1:
            expect(wild, "no wild Pokémon on B1F")
        spawns = eos[n - 1]["spawns"]
        for m in wild:
            sp = spawns.get(m["species"])
            if sp is None:
                fail(f"B{n}F: species {m['species']} is not in EoS's list {sorted(spawns)}")
            name, level, weight = sp
            expect(weight > 0 or name == "MONSTER_KECLEON",
                   f"B{n}F: {name} has spawn weight 0")
            expect(m["level"] == level, f"B{n}F: {name} at level {m['level']}, EoS {level}")
            learn = {mv for lv, mv in LEARNSETS.get(name, []) if lv <= level}
            for mv, pp in m["moves"]:
                expect(mv in learn, f"B{n}F: {name} L{level} knows move {mv}, EoS's learnset {sorted(learn)}")
                expect(pp > 0, f"B{n}F: {name}'s move {mv} has no PP")
            names[name] = level
        seen.append(f"B{n}F " + "/".join(f"{spawns[m['species']][0][8:].title()} L{m['level']}" for m in wild))
    return "; ".join(seen)


@check("bluff", "Drenched Bluff's music (EoS BGM_DRENCHED_BLUFF, song 944) on every floor")
def bluff_music(t):
    eos = eos_floors()
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        expect(t.game.playing(f, "bgm", MUS_DRENCHED_BLUFF), f"B{n}F: {t.game.songs_desc(f)}")
    return f"song {MUS_DRENCHED_BLUFF} on B1F-B{len(eos)}F"


@check("bluff", "EoS's guaranteed floor items are on their floors (B3F Big Apple, B4F Max Elixir)")
def bluff_guaranteed_items(t):
    eos = eos_floors()
    items = load_defines("include/constants/item.h", "ITEM_")
    found = []
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        want = eos[n - 1]["guaranteed"]
        if not want:
            continue
        have = t.game.floor_items(f)
        for g in want:
            expect(items[g] in have, f"B{n}F: no {g} among the floor's items {have}")
            found.append(f"B{n}F {g[5:].replace('_', ' ').title()}")
    expect(found, "no floor has a guaranteed item")
    return ", ".join(found)


@check("bluff", "B6F's stairs end the dungeon: cleared (STARTMODE_DUNGEON_WON), GETOUT_M01E02A's cleared event runs")
def bluff_end(t):
    eos = eos_floors()
    last = len(eos)
    f = yield from t.wait_event(f"stairs_{last}")
    expect(f"floor_{last + 1}" not in t.events, f"a floor B{last + 1}F was reached")
    start = f.n
    f = yield from t.wait(lambda f: not t.game.in_dungeon(f) or f.n - start > END_WAIT,
                          "the dungeon's end after B6F's stairs")
    expect(not t.game.in_dungeon(f), f"still in the dungeon {END_WAIT} frames after B6F's stairs")
    modes = load_enum_block("include/constants/event_flag.h", "StartModeVal")
    # ground_main sets START_MODE from the dungeon's result (in the dungeon it
    # is the mode the run started with); GETOUT_M01E02A reads it and DUNGEON_ENTER
    results = {modes[k] for k in ("STARTMODE_DUNGEON_WON", "STARTMODE_10", "STARTMODE_11",
                                  "STARTMODE_DUNGEON_LOST")}
    f = yield from t.wait(lambda f: t.game.script_var(f, "START_MODE") in results,
                          "the dungeon's result in START_MODE")
    mode = t.game.script_var(f, "START_MODE")
    enter = t.game.script_var(f, "DUNGEON_ENTER")
    expect(mode == modes["STARTMODE_DUNGEON_WON"], f"START_MODE {mode}, expected STARTMODE_DUNGEON_WON")
    expect(enter == DUNGEON_ID, f"DUNGEON_ENTER {enter}, expected {DUNGEON_ID} (SCRIPT_DUNGEON_THUNDERWAVE_CAVE)")
    main = t.game.script_var(f, "SCENARIO_MAIN")
    expect(main == 3, f"SCENARIO_MAIN {main}, expected 3 (chapter 2)")
    f = yield from t.wait(lambda f: t.game.map_id(f) is not None and t.game.textbox_text(f),
                          "a message on the ground after the dungeon (the cleared event)")
    return (f"left B{last}F {f.n - start} frames after its stairs: STARTMODE_DUNGEON_WON, "
            f"then {t.game.textbox_text(f)[:40]!r}")
