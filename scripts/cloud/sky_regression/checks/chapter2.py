"""Chapter 2 (documentation/Features/SkyChapter2.md): the `ch2` ROM boots at
chapter 2's start (DEBUG_BOOT_EVENT=SKY_CH2_START) and plays EVENT_M02_01_02,
free roam, EVENT_M02_03_04, Drenched Bluff (where the level-1 debug team
faints) and the faint path back to the bluff; the `bluff` ROM clears the
dungeon and plays EVENT_M02_09_10 to the demo end; the `after` ROM goes from
chapter 1's end into chapter 2."""

import numpy as np
from PIL import Image

from game import ROOT, decode_text
from harness import check, expect, fail
from probes import CYAN, TEXT_Y0, YELLOW, count_color, dialogue_ready, speaker

# EoS's acting scripts in play order (gs180 groups 1-14) and the maps they select
CH2_MAPS = [
    ("m02a0101", "MAP_SKY_GUILD_DUSK2"), ("m02a0104", "MAP_SKY_SENTRY_POST"),
    ("m02a0105", "MAP_SKY_GUILD_ENTRANCE"), ("m02a0106", "MAP_SKY_GUILD_1F"),
    ("m02a0108", "MAP_SKY_GUILD_B1F"), ("m02a0109", "MAP_SKY_GUILD_B2F_DOOR"),
    ("m02a0110", "MAP_SKY_GUILD_WIGGLYTUFF"), ("m02a0110 (the kit)", "MAP_SKY_KIT_OPEN"),
    ("m02a0110", "MAP_SKY_GUILD_WIGGLYTUFF"), ("m02a0111", "MAP_SKY_GUILD_CREW_ROOM"),
    ("m02a0113", "MAP_SKY_GUILD_CREW_ROOM_NIGHT"), ("m02a0201", "MAP_SKY_GUILD_CREW_ROOM"),
    ("m02a0202", "MAP_SKY_GUILD_B2F_DOOR"), ("m02a0202 (the door)", "MAP_SKY_GUILD_B2F"),
    ("m02a0302", "MAP_SKY_GUILD_B1F"), ("m02a0401", "MAP_SKY_DRENCHED_BLUFF_ENTRANCE"),
]
# EoS EVENT_M02_05_07A / 07B after the first faint (scenario (3, 3)): c00a0301's night
FAINT_MAPS = [
    ("m02a0501", "MAP_SKY_GUILD_B1F"), ("c00a0501", "MAP_SKY_GUILD_B2F"),
    ("c00a0601", "MAP_SKY_GUILD_MESS_HALL"), ("c00a0301", "MAP_SKY_GUILD_CREW_ROOM_NIGHT"),
    ("c00a0201", "MAP_SKY_GUILD_CREW_ROOM"), ("c00a0101", "MAP_SKY_GUILD_B2F"),
    ("m02a0701", "MAP_SKY_DRENCHED_BLUFF_ENTRANCE"),
]
# EoS EVENT_M02_09_10 (the bluff cleared)
CLEARED_MAPS = [
    ("m02a0801", "MAP_SKY_DRENCHED_BLUFF_END"), ("m02a1001", "MAP_SKY_GUILD_B1F"),
    ("c00a0501", "MAP_SKY_GUILD_B2F"), ("c00a0601", "MAP_SKY_GUILD_MESS_HALL"),
    ("m02a1003", "MAP_SKY_GUILD_CREW_ROOM_NIGHT"),
]

MUS = dict(fire=71, guild=940, wigglytuff=941, goodnight=942, remix=943, bluff=944, job_clear=945,
           eating=72, pit=64)

# (text in the box, speaker, colour): the speakers' names in EoS's colours
# (the hero and partner yellow, the others light blue)
CH2_LINES = [
    ("This is Wigglytuff~27s Guild.", "Squirtle", YELLOW),
    ("Maybe #c{05}Charmander#r~27s!", "Diglett", CYAN),
    ("I~27m Chatot!", "Chatot", CYAN),
    ("Hiya!", "Wigglytuff", CYAN),
    ("UP AND AT ~27EM!", "Loudred", CYAN),
    ("Hey~2c you shouldn~27t just be", "Chatot", CYAN),
    ("This must be the", "Squirtle", YELLOW),
]


def maps_in_order(t, table, stop):
    """The maps of `table` reached in this order (each a new map id), until stop(f)."""
    got, last, frames = [], None, []
    while True:
        f = yield
        if f is None or stop(f):
            break
        name = t.game.map_name(f) if t.game.map_id(f) is not None else None
        if name and name != last and name.startswith("MAP_SKY"):
            got.append(name)
            frames.append(f.n)
        last = name if name else last
    want = [m for _, m in table]
    i = 0
    for g in got:
        if i < len(want) and g == want[i]:
            i += 1
    if i < len(want):
        fail(f"maps {got}; expected in order {want} (stuck after {want[i - 1] if i else 'the start'}, "
             f"missing {table[i][0]} on {want[i]})")
    return f"{len(want)} scenes' maps in order ({frames[0]}..{frames[-1]})"


def scene_songs(t, table, stop):
    """(scene, map, song): each heard on the BGM player for 120 frames in a row on its map."""
    best, cur = {}, {}
    while True:
        f = yield
        if f is None or stop(f):
            break
        name = t.game.map_name(f) if t.game.map_id(f) is not None else None
        for i, (_, m, song) in enumerate(table):
            if name == m and t.game.playing(f, "bgm", song):
                cur[i] = cur.get(i, 0) + 1
                best[i] = max(best.get(i, 0), cur[i])
            else:
                cur[i] = 0
    bad = [f"{s} ({t.game.song_name(g)}, {best.get(i, 0)} frames)" for i, (s, _, g) in enumerate(table)
           if best.get(i, 0) < 120]
    expect(not bad, "not heard for 120 frames in a row: " + "; ".join(bad))
    return "; ".join(f"{s}: {t.game.song_name(g)}" for s, _, g in table)


@check("ch2", "Chapter 2's card ('The New Guild Recruits') shows at its start, before the first scene")
def ch2_chapter_card(t):
    pend = t.game.syms["sPendingChapter"]
    f = yield from t.wait(lambda f: f.u8(pend) == 2, "chapter 2's card queued (sPendingChapter 2)")
    queued = f.n
    card = np.asarray(Image.open(ROOT / "graphics/custom/chapter_cards/chapter2.png").convert("RGB")).astype(int)
    best = (1e9, 0)
    while True:
        f = yield from t.next("the card")
        if dialogue_ready(t.game, f):
            break
        if f.n % 4 == 0:
            d = float(np.abs(f.fb.astype(int) - card).mean())
            best = min(best, (d, f.n))
    expect(best[0] < 14, f"no frame like graphics/custom/chapter_cards/chapter2.png before the first box "
                         f"(closest: mean difference {best[0]:.1f} at frame {best[1]})")
    expect(f.u8(pend) == 0, "the card is still queued at the first box")
    return f"queued at frame {queued}, on screen at {best[1]} (mean difference {best[0]:.1f})"


@check("ch2", "EVENT_M02_01_02 and EVENT_M02_03_04: every scene's map in play order, to Drenched Bluff")
def ch2_scenes_in_order(t):
    return (yield from maps_in_order(t, CH2_MAPS, lambda f: t.game.in_dungeon(f)))


@check("ch2", "Chapter 2's speakers: hero and partner yellow, the guild crew light blue")
def ch2_speakers(t):
    todo, seen = list(CH2_LINES), []
    while todo:
        f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and any(s in f.text for s, _, _ in todo),
                              "the lines " + ", ".join(repr(s) for s, _, _ in todo))
        line = next(x for x in todo if x[0] in f.text)
        text, who, col = line
        got = speaker(f.text)
        reg = f.region(15, TEXT_Y0, 100, TEXT_Y0 + 13)
        other = CYAN if col == YELLOW else YELLOW
        if got != who or count_color(reg, col) < 20 or count_color(reg, other):
            t.snap(f, who)
            fail(f"frame {f.n} {text!r}: speaker {got!r} ({count_color(reg, col)} name pixels in the "
                 f"expected colour), expected {who}")
        todo.remove(line)
        seen.append(f"{who} f{f.n}")
    return "; ".join(seen)


@check("ch2", "Chapter 2's songs per scene (fire at the gate, the guild's themes, Goodnight, Drenched Bluff)")
def ch2_music(t):
    table = [
        ("m02a0101 at the gate", "MAP_SKY_GUILD_DUSK2", MUS["fire"]),
        ("m02a0108 on B1F", "MAP_SKY_GUILD_B1F", MUS["guild"]),
        ("m02a0110 Wigglytuff", "MAP_SKY_GUILD_WIGGLYTUFF", MUS["wigglytuff"]),
        ("m02a0113 good night", "MAP_SKY_GUILD_CREW_ROOM_NIGHT", MUS["goodnight"]),
        ("m02a0202 the morning address", "MAP_SKY_GUILD_B2F", MUS["guild"]),
        ("m02a0401 the bluff", "MAP_SKY_DRENCHED_BLUFF_ENTRANCE", MUS["bluff"]),
    ]
    return (yield from scene_songs(t, table, lambda f: t.game.in_dungeon(f)))


@check("ch2", "Team naming (RENAME_TEAM): the name typed is the team's, and {TEAM_NAME} prints it")
def ch2_team_name(t):
    f = yield from t.wait_event("team_named")
    base = f.u32(t.game.syms["gRescueTeamInfoRef"])
    name = decode_text(f.read(base, 10).split(b"\0", 1)[0])
    expect(name, "no team name")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "Team " in f.text,
                          "the partner's '...Team <name>!'")
    expect(f"Team {name}" in f.text, f"the box says {f.text!r}, the team is {name!r}")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "register" in f.text and "your team as" in f.text,
                          "Wigglytuff's 'I'll register your team as <name>.'")
    expect(name in f.text, f"Wigglytuff says {f.text!r}, the team is {name!r}")
    return f"team {name!r}; the partner and Wigglytuff say it"


@check("ch2", "Free roam on B2F after the address; walking off the spot runs EVENT_M02_03_04 (Chatot calls)")
def ch2_free_roam(t):
    f = yield from t.wait_event("free_roam")
    expect(t.game.map_name(f) == "MAP_SKY_GUILD_B2F", f"free roam on {t.game.map_name(f)}")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "wandering around" in f.text,
                          "Chatot's 'you shouldn't just be wandering around there' (m02a0301)")
    main = t.game.script_var(f, "SCENARIO_MAIN")
    expect(main == 3, f"SCENARIO_MAIN {main}")
    return f"free roam at frame {t.events['free_roam']}; m02a0301 at {f.n}"


@check("ch2", "Drenched Bluff is entered from the story (m02a0401): Thunderwave Cave's slot, scenario (3, 3)")
def ch2_bluff_entered(t):
    f = yield from t.wait_event("dungeon_1")
    f = yield from t.wait(lambda f: t.game.input_waits(f) > 0, "control in the dungeon")
    loc = t.game.dungeon_location(f)
    expect(loc[0] == 1, f"dungeon {loc}, expected Drenched Bluff (1: Thunderwave Cave's slot)")
    expect(t.game.playing(f, "bgm", MUS["bluff"]), f"{t.game.songs_desc(f)}")
    expect(t.game.script_var(f, "DUNGEON_ENTER") == 1, "DUNGEON_ENTER is not 1")
    return f"Drenched Bluff B{loc[1]}F at frame {f.n}"


@check("ch2", "Fainted in Drenched Bluff: EVENT_M02_05_07A (scolded, dinner, night, morning), 07B: back to the bluff")
def ch2_faint_path(t):
    f = yield from t.wait_event("fainted")
    r = yield from maps_in_order(t, FAINT_MAPS, lambda f: "dungeon_2" in t.events)
    expect("dungeon_2" in t.events, "not back in the dungeon")
    return r + f"; back in Drenched Bluff at frame {t.events['dungeon_2']}"


def first_box(t, after):
    """The text of the first dialogue box that waits after event `after`."""
    yield from t.wait_event(after)
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f), f"a dialogue box after '{after}'")
    return f


@check("ch2", "Continue from the good night's save (m02a0113): the next morning, Loudred's wake-up (m02a0201)")
def ch2_continue_morning(t):
    yield from t.wait_event("goodnight_saved")
    f = yield from first_box(t, "goodnight_continued")
    where = t.run.data.get("goodnight_continued")
    expect(where == "MAP_SKY_GUILD_CREW_ROOM", f"Continue went to {where}, expected the crew room")
    expect(any(s in f.text for s in ("HEY!", "RISE AND SHINE", "still ASLEEP")),
           f"the first box after Continue is {f.text!r}, expected Loudred's wake-up")
    main = t.game.script_var(f, "SCENARIO_MAIN")
    expect(main == 3, f"SCENARIO_MAIN {main}")
    return f"saved at frame {t.events['goodnight_saved']}; Continue: {where}, {f.text[:40]!r} at {f.n}"


@check("ch2", "Continue from the morning's save after fainting (c00a0201): the address (c00a0101), then the bluff")
def ch2_continue_faint(t):
    yield from t.wait_event("faint_saved")
    f = yield from first_box(t, "faint_continued")
    where = t.run.data.get("faint_continued")
    expect(where == "MAP_SKY_GUILD_B2F", f"Continue went to {where}, expected B2F (the morning address)")
    expect("THREE" in f.text or "Pok" in f.text,
           f"the first box after Continue is {f.text!r}, expected the morning address")
    yield from t.wait_event("dungeon_2")
    return f"saved at frame {t.events['faint_saved']}; Continue: {where}, {f.text[:40]!r}; the bluff at " \
           f"{t.events['dungeon_2']}"


@check("bluff", "Continue from the demo end's save: the demo end again (scenario (4, 0))")
def bluff_continue_demo_end(t):
    yield from t.wait_event("demo_end_continued_reset")
    f = yield from t.wait(lambda f: "save your adventure" in f.text or
                          (dialogue_ready(t.game, f) and t.game.map_id(f) is not None),
                          "the save prompt after Continue")
    expect("save your adventure" in f.text, f"the first box after Continue is {f.text!r}")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "demo ends here" in f.text,
                          "'The demo ends here.' after Continue")
    main = t.game.script_var(f, "SCENARIO_MAIN")
    expect(main == 4, f"SCENARIO_MAIN {main}")
    return f"Continue: the save prompt, 'The demo ends here.' at frame {f.n}"


@check("bluff", "Drenched Bluff cleared: EVENT_M02_09_10's scenes in order (the pearl, the reward, dinner, good night)")
def bluff_cleared_scenes(t):
    yield from t.wait_event("left_dungeon")
    return (yield from maps_in_order(t, CLEARED_MAPS,
                                     lambda f: dialogue_ready(t.game, f) and "demo ends here" in f.text))


@check("bluff", "Drenched Bluff cleared: Job Clear on B1F, Eating in the mess hall, Goodnight in the crew room")
def bluff_cleared_music(t):
    yield from t.wait_event("left_dungeon")
    table = [
        ("m02a0801 the pearl", "MAP_SKY_DRENCHED_BLUFF_END", MUS["pit"]),
        ("m02a1001 the reward", "MAP_SKY_GUILD_B1F", MUS["job_clear"]),
        ("c00a0601 dinner", "MAP_SKY_GUILD_MESS_HALL", MUS["eating"]),
        ("m02a1003 good night", "MAP_SKY_GUILD_CREW_ROOM_NIGHT", MUS["goodnight"]),
    ]
    return (yield from scene_songs(t, table, lambda f: dialogue_ready(t.game, f) and "demo ends here" in f.text))


@check("bluff", "The demo ends after chapter 2's good night: save prompt, 'The demo ends here', scenario (4, 0)")
def bluff_demo_end(t):
    yield from t.wait_event("left_dungeon")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "Sleep tight" in f.text,
                          "the partner's good night (m02a1003)")
    f = yield from t.wait(lambda f: "save your adventure" in f.text, "the save prompt")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "demo ends here" in f.text,
                          "'The demo ends here.'")
    main = t.game.script_var(f, "SCENARIO_MAIN")
    expect(main == 4, f"SCENARIO_MAIN {main}, expected 4 (chapter 2 done)")
    return f"'The demo ends here.' at frame {f.n}, scenario main {main}"


@check("after", "Chapter 1's end asks to save; Continue from that save starts chapter 2 (its card, the guild at dusk)")
def after_into_chapter2(t):
    f = yield from t.wait(lambda f: "save your adventure" in f.text, "the save prompt after m01a0702")
    expect(t.game.script_var(f, "SCENARIO_MAIN") == 3, "SCENARIO_MAIN is not 3 at the save prompt")
    yield from t.wait_event("ch1_saved")
    yield from t.wait_event("ch1_continued_reset")
    pend = t.game.syms["sPendingChapter"]
    f = yield from t.wait(lambda f: f.u8(pend) == 2, "chapter 2's card queued after Continue")
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_GUILD_DUSK2", "m02a0101's map")
    return f"saved at frame {t.events['ch1_saved']}; Continue: the card and MAP_SKY_GUILD_DUSK2 at frame {f.n}"
