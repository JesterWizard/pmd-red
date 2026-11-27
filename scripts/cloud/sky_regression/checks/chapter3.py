"""Chapter 3 (documentation/Features/SkyChapter3.md): the `ch3` ROM boots at
chapter 3's start (DEBUG_BOOT_EVENT=SKY_CH3_START) and plays the morning,
Continue, EVENT_M03_01B to Treasure Town and the free roam's story triggers
(the detour, the Kecleon brothers, the square's vision, Bidoof) into Mt.
Bristle; the `bristle` ROM wins the peak and plays EVENT_M03_10_13 (the
reward, dinner, the storm, the dream's visions) to the demo end; the `peak`
ROM faints at the peak and plays the faint path (EVENT_M03_07A / 07B)."""

import numpy as np
from PIL import Image

from game import ROOT
from harness import check, expect, fail
from probes import dialogue_ready

from .bristle import DUNGEON_ID
from .chapter2 import maps_in_order

CREW = "MAP_SKY_GUILD_CREW_ROOM_CH3"
# EoS EVENT_HA_CHO + EVENT_M03_01B: the address, then the scenes to Treasure Town
TOWN_MAPS = [
    ("c00a0101 / m03a0101", "MAP_SKY_GUILD_B2F_CH3"), ("m03a0102", "MAP_SKY_GUILD_B1F_CH3"),
    ("m03a0105", "MAP_SKY_GUILD_B2F_CH3"), ("m03a0106", "MAP_SKY_GUILD_ENTRANCE_DAY"),
    ("m00p1101", "MAP_SKY_CROSSROADS"), ("m03a0107", "MAP_SKY_TREASURE_TOWN_SQUARE"),
    ("m03a0108", "MAP_SKY_TREASURE_TOWN_WEST"), ("m03a0109", "MAP_SKY_TREASURE_TOWN_SQUARE"),
]
# EoS EVENT_M03_05_06 after Bidoof's "Yes"
OUTLAW_MAPS = [
    ("m03a0505", "MAP_SKY_DUGTRIO_TUNNEL"), ("m03a0506", "MAP_SKY_GUILD_B1F_CH3"),
    ("m03a0511", "MAP_SKY_CROSSROADS"), ("m03a0601", "MAP_SKY_MT_BRISTLE_ENTRANCE"),
]
# EoS EVENT_M03_10_13 after the peak (c00a0501 plays nothing at (4, 7), as in EoS)
AFTER_MAPS = [
    ("m03a1001", "MAP_SKY_MT_BRISTLE_PEAK"), ("m03a1002", "MAP_SKY_MT_BRISTLE_ENTRANCE"),
    ("m03a1201", "MAP_SKY_GUILD_B1F_CH3"), ("m03d0812", "MAP_SKY_MT_BRISTLE_PEAK"),
    ("m03a1203", "MAP_SKY_GUILD_B1F_CH3"), ("c00a0601", "MAP_SKY_GUILD_MESS_HALL"),
    ("m03a1301", "MAP_SKY_STORM_CLOUDS"), ("m03a1302", "MAP_SKY_GUILD_CREW_ROOM_NIGHT_CH3"),
    ("m03a1303", "MAP_SKY_STORM_CLOUDS"), ("m03a1304", "MAP_SKY_GUILD_CREW_ROOM_NIGHT_CH3"),
    ("m03a1305", "MAP_SKY_TIME_GEAR_FOREST"), ("m03a1306", "MAP_SKY_TIME_GEAR_LAKE"),
    ("m03a1307", "MAP_SKY_TIME_GEAR_VOLCANO"), ("m03a1308", "MAP_SKY_TIME_FLOW"),
    ("m03a1309", "MAP_SKY_STORM_CLOUDS"), ("m03a1310", "MAP_SKY_GROVYLE_RUN"),
    ("m03a1311", "MAP_SKY_GUILD_CREW_ROOM_NIGHT_CH3"), ("m03a1312", "MAP_SKY_GROVYLE_RUN"),
    ("m03a1313", "MAP_SKY_TIME_GEAR_FOREST"), ("m03a1314", "MAP_SKY_GROVYLE_CLOSEUP"),
]
SKY_LIVES_GROVYLE = 174
BLDCNT = 0x50


def demo_end(t, f):
    return dialogue_ready(t.game, f) and "demo ends here" in f.text


def on_map(t, f, name):
    return t.game.map_id(f) is not None and t.game.map_name(f) == name


def card_shown(t, stop):
    """The closest frame to chapter 3's card before stop(f): (mean difference, frame).
    SKY_CHAPTER_CARD queues the card right before a SELECT_MAP, which shows it."""
    card = np.asarray(Image.open(ROOT / "graphics/custom/chapter_cards/chapter3.png").convert("RGB")).astype(int)
    best = (1e9, 0)
    while True:
        f = yield from t.next("chapter 3's card")
        if stop(f):
            return best, f
        if f.n % 4 == 0:
            best = min(best, (float(np.abs(f.fb.astype(int) - card).mean()), f.n))


@check("ch3", "Chapter 3's card ('The Scream') shows at its start, before the first scene")
def ch3_chapter_card(t):
    best, f = yield from card_shown(t, lambda f: "save your adventure" in f.text)
    expect(best[0] < 14, f"no frame like graphics/custom/chapter_cards/chapter3.png before the save prompt "
                         f"(closest: mean difference {best[0]:.1f} at frame {best[1]})")
    return f"on screen at {best[1]} (mean difference {best[0]:.1f})"


@check("ch3", "c00a0201: the morning (scenario (4, 0)) asks to save, then free roam in the crew room; "
              "Continue from that save comes back to the crew room's free roam")
def ch3_morning_continue(t):
    f = yield from t.wait(lambda f: "save your adventure" in f.text, "the morning's save prompt")
    expect(t.game.scenario(f) == (4, 0), f"scenario {t.game.scenario(f)} at the save, expected (4, 0)")
    f = yield from t.wait_event("morning_free")
    expect(on_map(t, f, CREW), f"free roam on {t.game.map_name(f)}, expected the crew room")
    f = yield from t.wait_event("morning_continued")
    where = t.run.data.get("morning_continued")
    expect(where == CREW, f"Continue went to {where}, expected the crew room")
    return f"saved; Continue: free roam on {where} at frame {f.n}"


@check("ch3", "Out of the crew room: the address, then EVENT_M03_01B's scenes in order to Treasure Town's free roam")
def ch3_town_scenes(t):
    yield from t.wait_event("morning_continued")
    msg = yield from maps_in_order(t, TOWN_MAPS, lambda f: "square_free" in t.events)
    f = yield from t.next("free roam in the square")
    expect(t.game.scenario(f) == (4, 1), f"scenario {t.game.scenario(f)}, expected (4, 1)")
    expect(on_map(t, f, "MAP_SKY_TREASURE_TOWN_SQUARE"), f"free roam on {t.game.map_name(f)}")
    return msg


@check("ch3", "Free roam: the square's east edge turns the team back (m03a0201: the Kecleon Market first)")
def ch3_detour(t):
    yield from t.wait_event("square_free")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "over\nthis way" in f.text
                          or "detour_done" in t.events, "m03a0201's line")
    expect("over\nthis way" in f.text, "no 'The Kecleon Market isn't over this way.' before free roam again")
    f = yield from t.wait_event("detour_done")
    expect(t.game.scenario(f) == (4, 1), f"scenario {t.game.scenario(f)}, expected (4, 1)")
    return f"m03a0201, then free roam at frame {f.n}"


@check("ch3", "The Kecleon brothers: their shop (Red's shop menu), then EVENT_M03_03: Marill and Azurill, "
              "the dizzy spell (white pulses), 'HELP!', scenario (4, 2)")
def ch3_kecleon(t):
    f = yield from t.wait_event("kecleon_shop")
    f = yield from t.wait(lambda f: t.game.print_state(f) in (4, 7, 8, 9) and "Kecleon" in f.text
                          or "kecleon_done" in t.events, "the shop's greeting")
    expect("Kecleon" in f.text, "no shop text with 'Kecleon' after talking to the green brother")
    shop = f.text.replace("\n", " ")[:40]
    pulses, prev, helped = 0, False, False
    while "kecleon_done" not in t.events:
        f = yield from t.next("EVENT_M03_03")
        if on_map(t, f, "MAP_SKY_MT_BRISTLE_PEAK"):
            bright = float(f.fb.astype(int).mean()) > 120
            pulses += bright and not prev
            prev = bright
        if dialogue_ready(t.game, f) and "HELP" in f.text:
            helped = True
    expect(pulses >= 3, f"{pulses} white pulses over the black screen (expected the dizzy spell's)")
    expect(helped, "no 'H-h-h...HELP!'")
    expect(t.game.scenario(f) == (4, 2), f"scenario {t.game.scenario(f)}, expected (4, 2)")
    return f"shop {shop!r}; {pulses} white pulses; HELP!; scenario (4, 2)"


@check("ch3", "The square at (4, 2): EVENT_M03_04 (Drowzee bumps the hero, the vision at Mt. Bristle), scenario (4, 3)")
def ch3_vision(t):
    yield from t.wait_event("kecleon_done")
    seen = set()
    while "vision_done" not in t.events:
        f = yield from t.next("EVENT_M03_04")
        if t.game.map_id(f) is not None:
            seen.add(t.game.map_name(f))
        if dialogue_ready(t.game, f) and "Drowzee" in (f.text or ""):
            seen.add("Drowzee")
    expect("MAP_SKY_MT_BRISTLE_PEAK" in seen, "the vision's map (Mt. Bristle's peak) never selected")
    expect("Drowzee" in seen, "Drowzee never named")
    expect(t.game.scenario(f) == (4, 3), f"scenario {t.game.scenario(f)}, expected (4, 3)")
    return "Drowzee, the vision; scenario (4, 3)"


@check("ch3", "To the guild by the crossroads; Bidoof on B1F: EVENT_M03_05_06's scenes in order, into Mt. Bristle 1F (4, 5)")
def ch3_outlaw(t):
    f = yield from t.wait_event("guild_b1f")
    where = t.run.data.get("guild_b1f")
    expect(where == "MAP_SKY_GUILD_B1F_CH3", f"walked to {where}, expected the guild's B1F")
    yield from t.wait_event("bidoof_talk")
    msg = yield from maps_in_order(t, OUTLAW_MAPS, lambda f: t.game.in_dungeon(f))
    f = yield from t.wait(lambda f: t.game.in_dungeon(f) and t.game.dungeon_location(f) == (DUNGEON_ID, 1),
                          "Mt. Bristle 1F")
    expect(t.game.dungeon_location(f) == (DUNGEON_ID, 1), f"in {t.game.dungeon_location(f)}, expected Mt. Bristle 1F")
    expect(t.game.scenario(f) == (4, 5), f"scenario {t.game.scenario(f)}, expected (4, 5)")
    return msg + f"; Mt. Bristle 1F at frame {f.n}"


@check("bristle", "The peak won: EVENT_M03_10_13's scenes in order (Azurill saved, Magnezone, the reward, "
                  "dinner, the storm, the Time Gears, the dream) to the demo end")
def ch3_after_scenes(t):
    yield from t.wait_event("left_peak")
    return (yield from maps_in_order(t, AFTER_MAPS, lambda f: demo_end(t, f)))


@check("bristle", "The storm (m03a1302, SKY_BACK_EFFECT 3 / 1): the crew room's palettes flash, then are restored")
def ch3_lightning(t):
    yield from t.wait_event("left_peak")
    f = yield from t.wait(lambda f: on_map(t, f, "MAP_SKY_GUILD_CREW_ROOM_NIGHT_CH3"), "the crew room at night")
    arrived = f.n
    seen, first, last = set(), None, None
    while on_map(t, f, "MAP_SKY_GUILD_CREW_ROOM_NIGHT_CH3"):
        pal = tuple(f.bg_palette(p)[1] for p in range(12))
        if f.n == arrived + 45:   # faded in, before the thunder (WAIT 30)
            first = pal
        if dialogue_ready(t.game, f):
            last = pal
            break
        seen.add(pal)
        f = yield from t.next("the storm")
    expect(len(seen) >= 4, f"{len(seen)} palette states on the crew room (expected the lightning's frames)")
    expect(last == first, "the palettes at the first box are not the map's own (SKY_BACK_EFFECT 1)")
    return f"{len(seen)} palette states before the first box, then the map's own palettes"


@check("bristle", "The Time Gears (m03a1308, SKY_BACK_EFFECT 2): the upper layer blends over the lower one")
def ch3_time_flow_blend(t):
    yield from t.wait_event("left_peak")
    f = yield from t.wait(lambda f: on_map(t, f, "MAP_SKY_TIME_FLOW"), "v03p09a")
    blended = 0
    while on_map(t, f, "MAP_SKY_TIME_FLOW"):
        cnt = f.io(BLDCNT)
        if cnt & 0x4 and cnt & 0x800 and (cnt >> 6) & 3 == 1 and f.bldalpha() == (8, 8):
            blended += 1
        f = yield from t.next("the time flow")
    expect(blended >= 120, f"BG2 over BG3 at 8/8 on {blended} frames")
    return f"BG2 over BG3 at 8/8 on {blended} frames"


@check("bristle", "The dream (m03a1310, SKY_BACK_SCROLL): the forest scrolls; Grovyle runs across the screen")
def ch3_grovyle_run(t):
    yield from t.wait_event("left_peak")
    f = yield from t.wait(lambda f: on_map(t, f, "MAP_SKY_GROVYLE_RUN"), "v03p11a")
    offs, xs, shown = set(), [], 0
    while on_map(t, f, "MAP_SKY_GROVYLE_RUN"):
        offs.add(t.game.map_scroll(f))
        cam = t.game.camera_view(f)
        for kind, _, (x, y) in t.game.lives_positions(f):
            if kind == SKY_LIVES_GROVYLE:
                xs.append(x)
                shown += 0 <= x * 8 - cam[0] < 240
        f = yield from t.next("the dream")
    expect(len(offs) >= 30, f"{len(offs)} scroll offsets of the lower layer (expected the scrolling forest)")
    expect(xs and max(xs) - min(xs) >= 20, f"Grovyle moved {max(xs) - min(xs) if xs else 0:.0f} tiles")
    expect(shown >= 10, f"Grovyle on screen on {shown} frames")
    return f"{len(offs)} scroll offsets; Grovyle ran {max(xs) - min(xs):.0f} tiles, on screen {shown} frames"


@check("bristle", "The demo ends after m03a1314: the save prompt, 'The demo ends here.'; Continue: the demo end again")
def ch3_demo_end(t):
    yield from t.wait_event("left_peak")
    f = yield from t.wait(lambda f: on_map(t, f, "MAP_SKY_GROVYLE_CLOSEUP"), "m03a1314")
    f = yield from t.wait(lambda f: "save your adventure" in f.text, "the demo end's save prompt")
    f = yield from t.wait(lambda f: demo_end(t, f), "'The demo ends here.'")
    expect(t.game.scenario(f)[0] == 4, f"scenario {t.game.scenario(f)}")
    yield from t.wait_event("demo_end_continued_reset")
    f = yield from t.wait(lambda f: demo_end(t, f), "'The demo ends here.' after Continue")
    return f"the demo end; Continue: the demo end again at frame {f.n}"


@check("peak", "Fainting at the peak: EVENT_M03_07A (m03a0701, the morning's save) to the crew room; "
               "Continue there; out of it: the address and m03a0702, free roam on B2F")
def ch3_faint_path(t):
    yield from t.wait_event("left_peak")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "end well" in f.text, "m03a0701")
    f = yield from t.wait(lambda f: "save your adventure" in f.text, "the morning's save prompt (c00a0201)")
    f = yield from t.wait_event("faint_free")
    expect(t.run.data.get("faint_free") == CREW, f"free roam on {t.run.data.get('faint_free')}")
    f = yield from t.wait_event("faint_continued")
    expect(t.run.data.get("faint_continued") == CREW, f"Continue went to {t.run.data.get('faint_continued')}")
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "rescue\nAzurill" in f.text
                          or "faint_b2f_free" in t.events, "m03a0702")
    if "rescue\nAzurill" not in f.text:
        fail("no m03a0702 ('Hurry! We have to rescue Azurill!') after the crew room")
    f = yield from t.wait_event("faint_b2f_free")
    expect(t.run.data.get("faint_b2f_free") == "MAP_SKY_GUILD_B2F_CH3", f"free roam on {t.run.data.get('faint_b2f_free')}")
    return f"m03a0701, save, Continue to the crew room, m03a0702, free roam on B2F at frame {f.n}"
