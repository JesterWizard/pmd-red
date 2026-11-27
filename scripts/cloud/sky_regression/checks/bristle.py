"""Mt. Bristle and Mt. Bristle Peak (chapter 3, Red's Mt. Steel slots).

The `bristle` ROM boots into Mt. Bristle (SKY_MT_BRISTLE_DEBUG_EVENT), walks
1F to 9F's stairs; the cleared event (a placeholder for m03a0801) enters the
peak (SCRIPT_DUNGEON_3), where the cutscene plays Drowzee's closing lines and
the boss transition, and the team beats Drowzee. The `peak` ROM boots at the
peak (SKY_MT_BRISTLE_PEAK_DEBUG_EVENT) with a level-1 team, which faints.

The expected floors and boss are read from src/data/sky_mt_bristle_floors.h
and src/data/sky_mt_bristle_peak_floors.h (tools/make_sky_dungeon_floors.py,
EoS's mappa_s.bin, fixed.bin and overlay 10), so the checks compare the game
with EoS's data."""

import re

from game import ROOT, load_defines, load_enum_block
from harness import check, expect, fail
from checks.dungeon import MUS_BOSS

FLOORS_H = ROOT / "src/data/sky_mt_bristle_floors.h"
PEAK_H = ROOT / "src/data/sky_mt_bristle_peak_floors.h"
TILESET_H = ROOT / "src/data/sky_mt_bristle_tileset.h"
PEAK_TILESET_H = ROOT / "src/data/sky_mt_bristle_peak_tileset.h"
DUNGEON_ID = 2                 # DUNGEON_MT_STEEL plays Mt. Bristle and its peak
SCRIPT_MT_STEEL, SCRIPT_PEAK = 2, 3   # SCRIPT_DUNGEON_MT_STEEL, SCRIPT_DUNGEON_3
TILESET = 0x27                 # SKY_MT_BRISTLE_TILESET (include/sky_story.h)
PEAK_TILESET = 0x42            # SKY_MT_BRISTLE_PEAK_TILESET
PEAK_ROOM = 1                  # FIXED_ROOM_MT_STEEL_SKARMORY
MUS_MT_BRISTLE = 950           # MUS_SKY_MT_BRISTLE
MUS_PIT = 64                   # MUS_SKY_IN_THE_DEPTHS_OF_THE_PIT
END_WAIT = 900                 # frames from the last stairs / the last blow to the dungeon's end
INFO_SLEEP = 0xB0              # EntityInfo.sleepClassStatus.status in this build (apcs-gnu layout)
INFO_BOSS = 0xFF               # EntityInfo.bossFlag
SLEEP_STATUSES = (1, 3, 5)     # STATUS_SLEEP, STATUS_NIGHTMARE, STATUS_NAPPING

# EoS level-up moves (BALANCE/waza_p.bin) of Mt. Bristle's Pokémon up to
# their levels there (L9): (level, move id). Red's move ids are EoS's.
LEARNSETS = {
    "MONSTER_MACHOP": [(1, 92), (1, 224), (7, 74)],              # Low Kick, Leer, Focus Energy
    "MONSTER_GEODUDE": [(1, 154), (1, 302), (4, 212)],           # Tackle, Defense Curl, Mud Sport
    "MONSTER_DODUO": [(1, 174), (1, 217), (5, 190)],             # Peck, Growl, Quick Attack
    "MONSTER_SPINARAK": [(1, 23), (1, 200), (5, 106), (8, 71)],  # String Shot, Poison Sting, Scary Face, Constrict
    "MONSTER_STARLY": [(1, 154), (1, 217), (5, 190), (9, 178)],  # Tackle, Growl, Quick Attack, Wing Attack
    "MONSTER_NIDORINA": [(1, 217), (1, 260)],                    # Growl, Scratch
    "MONSTER_NIDORINO": [(1, 174), (1, 224)],                    # Peck, Leer
}
# Drowzee at L12 (EoS's learnset): Hypnosis, Pound, Disable, Confusion.
DROWZEE_MOVES = {111, 250, 59, 234}


def eos_floors(path):
    """[{spawns: {species id: (name, level, weight)}, props: [28 bytes],
    guaranteed: [item names], bosses: [(species id, name, level, hp, atk,
    spatk, def, spdef)]}] per floor, from a generated header."""
    text = path.read_text()
    mons = load_defines("include/constants/monster.h", "MONSTER_")
    mons.update(load_defines("include/constants/sky_gen4.h", "MONSTER_"))
    count = int(re.search(r"#define \w+FloorCount (\d+)", text).group(1))
    out = []
    for n in range(1, count + 1):
        body = re.search(r"Spawns%d\[\] = \{(.*?)\};" % n, text, re.S).group(1)
        spawns = {mons[s]: (s, int(lv), int(w)) for s, lv, w in
                  re.findall(r"\{ (MONSTER_\w+), (\d+), (\d+) \}", body)}
        bosses = []
        m = re.search(r"Bosses%d\[\] = \{(.*?)\};" % n, text, re.S)
        if m:
            for row in re.findall(r"\{ (MONSTER_\w+), ([\d, ]+) \}", m.group(1)):
                v = [int(x) for x in row[1].split(",")]
                bosses.append((mons[row[0]], row[0], *v[1:]))
        out.append(dict(spawns=spawns, bosses=bosses))
    for i, m in enumerate(re.finditer(r"\.props = \{ ([\d, ]+) \},.*?\.guaranteed = \{ ([\w, ]+) \}",
                                      text, re.S)):
        out[i]["props"] = [int(v) for v in m.group(1).split(",")]
        out[i]["guaranteed"] = [g.strip() for g in m.group(2).split(",") if g.strip() != "0"]
    return out


def tiles_match(t, f, sym, header):
    words = int(re.search(sym + r"\[(\d+)\]", header.read_text()).group(1))
    want = t.run.emu.read(t.syms[sym], 4 * words)
    got = f.read(0x06008000, len(want))
    return sum(a != b for a, b in zip(got, want)), len(want)


def props_in_dungeon(f, t, props):
    raw = f.read(f.u32(t.syms["gDungeon"]), 0x20000)
    pat = re.compile(re.escape(bytes(props[:3])) + b"." + re.escape(bytes(props[4:])), re.S)
    return pat.search(raw) is not None


def result_after(t, f, what):
    """The dungeon's result once ground_main has set it: (START_MODE,
    DUNGEON_ENTER, SCENARIO_MAIN, frame). SCENARIO_MAIN is the one the run
    ended with, which GETOUT_M01E02B reads (the placeholder events jump to
    the demo end, which sets (3, 0) in the same frame)."""
    modes = load_enum_block("include/constants/event_flag.h", "StartModeVal")
    results = {modes[k] for k in ("STARTMODE_DUNGEON_WON", "STARTMODE_10", "STARTMODE_11",
                                  "STARTMODE_DUNGEON_LOST")}
    main = t.game.script_var(f, "SCENARIO_MAIN")
    while not (not t.game.in_dungeon(f) and t.game.script_var(f, "START_MODE") in results):
        if t.game.in_dungeon(f):
            main = t.game.script_var(f, "SCENARIO_MAIN")
        f = yield from t.next(what)
    return (t.game.script_var(f, "START_MODE"), t.game.script_var(f, "DUNGEON_ENTER"), main, f, modes)


@check("bristle", "Debug boot (SKY_MT_BRISTLE_DEBUG_EVENT) enters Mt. Bristle 1F; nine floors, stairs up")
def bristle_boots(t):
    f = yield from t.wait_event("floor_1")
    loc = t.game.dungeon_location(f)
    expect(loc == (DUNGEON_ID, 1), f"dungeon/floor {loc}, expected ({DUNGEON_ID}, 1)")
    expect(t.game.script_var(f, "DUNGEON_ENTER") == SCRIPT_MT_STEEL,
           f"DUNGEON_ENTER {t.game.script_var(f, 'DUNGEON_ENTER')}, expected SCRIPT_DUNGEON_MT_STEEL")
    team = t.game.pokemon(f, wild=False)
    expect(len(team) >= 2, f"{len(team)} team members")
    return f"Mt. Bristle 1F at frame {f.n}; team {[(m['species'], m['level']) for m in team]}"


@check("bristle", "Every floor's tiles in VRAM are EoS's Mt. Bristle tileset (dungeon.bin #3); EoS floor layout")
def bristle_tileset(t):
    eos = eos_floors(FLOORS_H)
    done = []
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        bad, size = tiles_match(t, f, "sMtBristleTiles", TILESET_H)
        if bad:
            t.snap(f, f"{n}f")
            fail(f"{n}F: {bad} of {size} bytes of the BG tiles at 0x06008000 differ from sMtBristleTiles")
        props = list(eos[n - 1]["props"])
        props[2] = TILESET
        props[0x17] = (props[0x17] * 5 + 39) // 40
        expect(props_in_dungeon(f, t, props), f"{n}F: EoS's floor properties {props} not in gDungeon")
        done.append(n)
    return f"{done[0]}F-{done[-1]}F: {size} bytes of tiles match; floor properties are EoS's"


@check("bristle", "Wild Pokémon on each floor are EoS's (mappa_s.bin species and levels) with EoS's moves")
def bristle_enemies(t):
    eos = eos_floors(FLOORS_H)
    seen = []
    total = 0
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        wild = t.game.pokemon(f)
        spawns = eos[n - 1]["spawns"]
        for m in wild:
            sp = spawns.get(m["species"])
            if sp is None:
                fail(f"{n}F: species {m['species']} is not in EoS's list {sorted(spawns)}")
            name, level, weight = sp
            expect(weight > 0 or name == "MONSTER_KECLEON", f"{n}F: {name} has spawn weight 0")
            expect(m["level"] == level, f"{n}F: {name} at level {m['level']}, EoS {level}")
            learn = {mv for lv, mv in LEARNSETS.get(name, []) if lv <= level}
            for mv, pp in m["moves"]:
                expect(mv in learn, f"{n}F: {name} L{level} knows move {mv}, EoS's learnset {sorted(learn)}")
                expect(pp > 0, f"{n}F: {name}'s move {mv} has no PP")
        total += len(wild)
        seen.append(f"{n}F " + "/".join(f"{spawns[m['species']][0][8:].title()} L{m['level']}" for m in wild))
    expect(total >= len(eos), f"only {total} wild Pokémon on {len(eos)} floors")
    return "; ".join(seen)


@check("bristle", "Mt. Bristle's music (EoS BGM_MT_BRISTLE, song 950) on every floor")
def bristle_music(t):
    eos = eos_floors(FLOORS_H)
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        expect(t.game.playing(f, "bgm", MUS_MT_BRISTLE), f"{n}F: {t.game.songs_desc(f)}")
    return f"song {MUS_MT_BRISTLE} on 1F-{len(eos)}F"


@check("bristle", "EoS's guaranteed floor items are on their floors (5F Big Apple)")
def bristle_guaranteed_items(t):
    eos = eos_floors(FLOORS_H)
    items = load_defines("include/constants/item.h", "ITEM_")
    found = []
    for n in range(1, len(eos) + 1):
        f = yield from t.wait_event(f"floor_{n}")
        for g in eos[n - 1]["guaranteed"]:
            have = t.game.floor_items(f)
            expect(items[g] in have, f"{n}F: no {g} among the floor's items {have}")
            found.append(f"{n}F {g[5:].replace('_', ' ').title()}")
    expect(found, "no floor has a guaranteed item")
    return ", ".join(found)


@check("bristle", "9F's stairs end Mt. Bristle (cleared, DUNGEON_ENTER 2); the cleared event enters the peak (SCRIPT_DUNGEON_3)")
def bristle_end(t):
    last = len(eos_floors(FLOORS_H))
    f = yield from t.wait_event(f"stairs_{last}")
    expect(f"floor_{last + 1}" not in t.events, f"a floor {last + 1}F was reached")
    start = f.n
    mode, enter, main, f, modes = yield from result_after(t, f, "Mt. Bristle's result in START_MODE")
    expect(f.n - start < END_WAIT, f"Mt. Bristle ended {f.n - start} frames after 9F's stairs")
    expect(mode == modes["STARTMODE_DUNGEON_WON"], f"START_MODE {mode}, expected STARTMODE_DUNGEON_WON")
    expect(enter == SCRIPT_MT_STEEL, f"DUNGEON_ENTER {enter}, expected {SCRIPT_MT_STEEL}")
    expect(main == 4, f"SCENARIO_MAIN {main}, expected 4 (chapter 3)")
    f = yield from t.wait_event("peak_start")
    enter = t.game.script_var(f, "DUNGEON_ENTER")
    expect(enter == SCRIPT_PEAK, f"the next run's DUNGEON_ENTER is {enter}, expected {SCRIPT_PEAK} (SCRIPT_DUNGEON_3)")
    expect(t.game.dungeon_location(f) == (DUNGEON_ID, 1), f"the peak run is at {t.game.dungeon_location(f)}")
    return f"cleared {f.n - start} frames after 9F's stairs, then the peak run (DUNGEON_ENTER {enter})"


@check("bristle", "Mt. Bristle Peak: EoS's fixed floor 2 in Red's Skarmory room, EoS's background (dungeon_bg1), Drowzee alone")
def peak_room(t):
    eos = eos_floors(PEAK_H)[0]
    f = yield from t.wait_event("peak_floor_1")
    bad, size = tiles_match(t, f, "sMtBristlePeakTiles", PEAK_TILESET_H)
    if bad:
        t.snap(f, "peak")
        fail(f"{bad} of {size} bytes of the BG tiles at 0x06008000 differ from sMtBristlePeakTiles")
    props = list(eos["props"])
    props[2] = PEAK_TILESET
    props[0x17] = (props[0x17] * 5 + 39) // 40
    props[0x12] = PEAK_ROOM
    props[6] = props[7] = props[8] = 0  # no random enemies, shop or Monster House in a boss room
    expect(props_in_dungeon(f, t, props), f"EoS's floor properties {props} not in gDungeon")
    wild = t.game.pokemon(f)
    species = sorted(m["species"] for m in wild)
    expect(species == sorted(b[0] for b in eos["bosses"]), f"wild Pokémon {species}, expected EoS's bosses")
    m = t.game.dungeon_map(f)
    room = [r[5:29] for r in m[5:27]]
    text = PEAK_H.read_text()
    want = re.findall(r"^ \*   ([#.LPBS3-6]+)$", text, re.M)
    walls = [[c == "#" for c in r] for r in want]
    got = [[c == "#" for c in r] for r in room]
    diff = sum(a != b for ra, rb in zip(walls, got) for a, b in zip(ra, rb))
    expect(diff == 0, f"{diff} tiles of the room's walls differ from EoS's fixed floor 2")
    return f"{size} bytes of tiles match; room {len(want[0])}x{len(want)} as EoS's; wild {species}"


@check("bristle", "Drowzee has EoS's boss stats (L12, 100 HP, 30/30, 20/20), EoS's moves (Hypnosis, Pound, Disable, Confusion), no EXP")
def peak_boss(t):
    eos = eos_floors(PEAK_H)[0]
    f = yield from t.wait_event("peak_fight")
    expect(f.u8(t.syms["gSkyBossExp"]) == 0, "gSkyBossExp (Boss EXP toggle) is on by default")
    from checks.dungeon import find_boss_infos, BOSS_STATS
    sid, name, lvl, hp, atk, spatk, df, spdf = eos["bosses"][0]
    BOSS_STATS.setdefault(sid, (name, lvl, hp, atk, df))
    got = find_boss_infos(f, f.u32(t.syms["gDungeon"])).get(sid)
    expect(got == (lvl, hp, atk, spatk, df, spdf),
           f"{name}: L/HP/Atk/SpA/Def/SpD {got}, expected {(lvl, hp, atk, spatk, df, spdf)}")
    wild = [m for m in t.game.pokemon(f) if m["species"] == sid]
    expect(wild, "no Drowzee on the floor")
    moves = {mv for mv, pp in wild[0]["moves"]}
    expect(moves == DROWZEE_MOVES, f"Drowzee's moves {sorted(moves)}, expected {sorted(DROWZEE_MOVES)}")
    expect(all(pp > 0 for mv, pp in wild[0]["moves"]), f"a move without PP: {wild[0]['moves']}")
    return f"{name[8:].title()} L{lvl} {hp} HP {atk}/{spatk} {df}/{spdf}, moves {sorted(moves)}; Boss EXP off"


@check("bristle", "Drowzee's moves work in the fight: Red moves (Red's effects), and it uses them (PP drop)")
def peak_moves_used(t):
    """Red's enemy AI picks a move at random by weight (Pound 25, Hypnosis
    15, Disable 15, Confusion 10, and the regular attack), so which one the
    seeded fight shows is chance; the check asks that it uses its moves and
    that all four are Red's own moves (ids below the Gen 4 range, 0x1AE),
    which Red's move effects handle. A team member asleep is reported."""
    f = yield from t.wait_event("peak_fight")
    sid = eos_floors(PEAK_H)[0]["bosses"][0][0]
    start = {mv: pp for m in t.game.pokemon(f) if m["species"] == sid for mv, pp in m["moves"]}
    expect(start and all(mv < 0x1AE for mv in start), f"Drowzee's moves {sorted(start)}")
    used, slept = set(), None
    while "left_peak" not in t.events:
        f = yield from t.next("the peak's end")
        if f.n % 4:
            continue
        for m in t.game.pokemon(f):
            if m["species"] == sid:
                used |= {mv for mv, pp in m["moves"] if pp < start.get(mv, pp)}
        if slept is None:
            base = f.u32(t.syms["gDungeon"])
            team = t.game._dungeon_offsets(f)[0]
            for k in range(4):
                ent = f.u32(base + team + 4 * k)
                if 0x02000000 <= ent < 0x02040000 and f.u32(ent) == 1:
                    info = f.u32(ent + 0x70)
                    if 0x02000000 <= info < 0x02040000 and f.u8(info + INFO_SLEEP) in SLEEP_STATUSES:
                        slept = f.n
    expect(used, "Drowzee used no move in the fight")
    return (f"Drowzee used {sorted(used)} of {sorted(start)}"
            + (f"; a team member asleep at frame {slept}" if slept else "; nobody fell asleep this run"))


@check("bristle", "Peak cutscene: In the Depths of the Pit, Drowzee's closing lines, the boss transition (flashes, streaks, white-out), Boss Battle!")
def peak_transition(t):
    f = yield from t.wait_event("peak_start")
    f = yield from t.wait(lambda f: t.game.in_dungeon(f) and t.game.playing(f, "bgm", MUS_PIT),
                          "In the Depths of the Pit on the peak")
    f = yield from t.wait(lambda f: "Show me what you" in t.game.textbox_text(f)
                          or "Whenever you want!" in t.game.textbox_text(f), "Drowzee's last line")
    line = t.game.textbox_text(f).replace("~27", "'")
    flashes, white, streaks, prev = 0, 0, 0, False
    while True:
        f = yield from t.next("Boss Battle!")
        if t.game.playing(f, "bgm", MUS_BOSS):
            break
        cnt = f.io(0x50)
        bright = (cnt >> 6) & 3 == 2 and (f.io(0x54) & 0x1F) >= 8
        if bright and not prev:
            flashes += 1
        prev = bright
        if (cnt >> 6) & 3 == 2 and (f.io(0x54) & 0x1F) >= 16:
            white += 1
        if flashes == 2 and not bright and (cnt >> 6) & 3 == 1 and cnt & 0x6:
            streaks += 1
    expect(flashes >= 3, f"{flashes} brighten events before 'Boss Battle!' (expected 2 flashes + the white-out)")
    expect(white >= 30, f"white held for {white} frames")
    expect(streaks >= 30, f"streak blend on {streaks} frames")
    return f"{line[:30]!r}; {flashes} brighten events, white {white} frames, streak blend {streaks} frames; Boss Battle!"


@check("bristle", "Drowzee down ends the peak: won (DUNGEON_ENTER 3, SCENARIO_MAIN 4), GETOUT_M01E02B's peak-cleared event runs")
def peak_won(t):
    f = yield from t.wait_event("peak_fight")
    mode, enter, main, f, modes = yield from result_after(t, f, "the peak's result in START_MODE")
    expect(mode == modes["STARTMODE_DUNGEON_WON"], f"START_MODE {mode}, expected STARTMODE_DUNGEON_WON")
    expect(enter == SCRIPT_PEAK, f"DUNGEON_ENTER {enter}, expected {SCRIPT_PEAK}")
    expect(main == 4, f"SCENARIO_MAIN {main} at the end of the run, expected 4 (GETOUT_M01E02B's peak branch)")
    f = yield from t.wait(lambda f: t.game.map_id(f) is not None and t.game.textbox_text(f),
                          "a message on the ground after the peak (the cleared event)")
    return f"won with SCENARIO_MAIN 4, DUNGEON_ENTER 3; then {t.game.textbox_text(f)[:40]!r}"


@check("peak", "Peak debug boot (SKY_MT_BRISTLE_PEAK_DEBUG_EVENT): the fight starts; a level-1 team faints -> the fainted event (EVENT_M03_07A's hook)")
def peak_fainted(t):
    f = yield from t.wait_event("peak_fight")
    expect(t.game.dungeon_location(f) == (DUNGEON_ID, 1), f"at {t.game.dungeon_location(f)}")
    expect(t.game.script_var(f, "DUNGEON_ENTER") == SCRIPT_PEAK, "DUNGEON_ENTER is not SCRIPT_DUNGEON_3")
    mode, enter, main, f, modes = yield from result_after(t, f, "the peak's result in START_MODE")
    expect(mode == modes["STARTMODE_DUNGEON_LOST"], f"START_MODE {mode}, expected STARTMODE_DUNGEON_LOST")
    expect(enter == SCRIPT_PEAK, f"DUNGEON_ENTER {enter}, expected {SCRIPT_PEAK}")
    expect(main == 4, f"SCENARIO_MAIN {main} at the end of the run, expected 4 (GETOUT_M01E02B's peak branch)")
    f = yield from t.wait(lambda f: t.game.map_id(f) is not None and t.game.textbox_text(f),
                          "a message on the ground after fainting (the fainted event)")
    return f"fainted at the peak: STARTMODE_DUNGEON_LOST; then {t.game.textbox_text(f)[:40]!r}"
