"""Dungeon speed: frames per tile, dropped frames, freezes and CPU load in
Beach Cave B1F (the perf ROM's fixed floor, drivers.perf).

A dropped frame is a video frame in which the main loop did not finish
(gUnknown_203B0B8 did not move). Red's dungeon engine drops one on every
turn: a tile takes 24 frames of walking and one more for the turn, and a
dashed tile takes two or three. The limits below sit between what the sky
build measured before the dungeon speed fixes (b6fbafcba, first number in
the brackets) and what it measures with them, so the lag coming back fails
them.
"""

from emu import FRAME_CYCLES
from harness import check, expect

WALK_FRAMES = 25             # a quiet tile: 24 frames + the turn's dropped frame
WALK_MEAN_MAX = 25.6         # quiet tiles, mean frames per tile [25.97 -> 25.14]
WALK_DROPPED_MAX = 0.062     # quiet tiles, dropped frames / frames [7.6% -> 4.5%]
# quiet corridor tiles, dashing [2.96 -> 2.63]. EoS's own pace is 3 frames a
# tile. The mean moves with the route the run takes (the enemies it meets):
# a build with the same CPU load per frame (Ocean1's sweeps) measured 2.87.
DASH_MEAN_MAX = 3.0
FREEZE_MAX = 5               # dropped frames in a row [13 -> 3]
IDLE_LOAD_MAX = 0.62         # CPU load standing still [63.4% -> 60.7%]
WALK_LOAD_MAX = 0.65         # CPU load over the walking tour [67.5% -> 62.4%]


def perf_data(t):
    yield from t.wait_event("perf_done")
    return t.run.data["perf_done"]


def quiet(tour, corridor=None):
    """Tiles walked with no other Pokémon on screen (the first tile starts
    from a standstill and is left out)."""
    return [x for x in tour["tiles"][1:]
            if x["quiet"] and (corridor is None or x["corridor"] == corridor)]


def mean(v):
    return sum(v) / len(v)


@check("perf", "Walking in Beach Cave: 25 frames a tile, no second dropped frame on most turns")
def dungeon_walk_pace(t):
    data = yield from perf_data(t)
    tiles = quiet(data["walk"])
    expect(len(tiles) >= 30, f"only {len(tiles)} quiet tiles walked (of {len(data['walk']['tiles'])})")
    frames = sorted(x["frames"] for x in tiles)
    med = frames[len(frames) // 2]
    avg = mean(frames)
    dropped = sum(x["dropped"] for x in tiles) / sum(frames)
    msg = (f"{len(tiles)} quiet tiles: median {med} frames, mean {avg:.2f}, "
           f"{frames.count(WALK_FRAMES)} at {WALK_FRAMES} and {sum(1 for v in frames if v > WALK_FRAMES)} longer; "
           f"dropped {100 * dropped:.1f}% of frames")
    expect(med == WALK_FRAMES, msg + f" (median must be {WALK_FRAMES})")
    expect(avg <= WALK_MEAN_MAX, msg + f" (mean over {WALK_MEAN_MAX})")
    expect(dropped <= WALK_DROPPED_MAX, msg + f" (over {100 * WALK_DROPPED_MAX:.1f}%)")
    return msg


@check("perf", "Dashing in Beach Cave (B held): 2 or 3 frames a tile")
def dungeon_dash_pace(t):
    data = yield from perf_data(t)
    tiles = quiet(data["dash"], corridor=True)
    expect(len(tiles) >= 15, f"only {len(tiles)} quiet corridor tiles dashed (of {len(data['dash']['tiles'])})")
    frames = [x["frames"] for x in tiles if x["frames"] <= 8]  # a longer one waited for a turn's animation
    avg = mean(frames)
    msg = (f"{len(frames)} quiet corridor tiles: mean {avg:.2f} frames "
           f"({', '.join(f'{frames.count(v)} x {v}' for v in sorted(set(frames)))})")
    expect(avg <= DASH_MEAN_MAX, msg + f" (over {DASH_MEAN_MAX})")
    return msg


@check("perf", "No freeze while walking or dashing (the log closing, a menu, a level-up, a spawn)")
def dungeon_no_freeze(t):
    data = yield from perf_data(t)
    worst = {}
    for name in ("walk", "dash"):
        tiles = data[name]["tiles"]
        expect(tiles, f"no tiles in the {name} tour")
        x = max(tiles, key=lambda x: x["freeze"])
        worst[name] = x
    msg = ", ".join(f"{n}: longest run of dropped frames {x['freeze']} (at {x['pos']})" for n, x in worst.items())
    expect(all(x["freeze"] <= FREEZE_MAX for x in worst.values()), msg + f" (over {FREEZE_MAX})")
    return msg


@check("perf", "CPU load in Beach Cave: standing still and walking")
def dungeon_cpu_load(t):
    data = yield from perf_data(t)
    idle = mean(data["idle"]) / FRAME_CYCLES
    walk = mean(data["walk"]["busy"]) / FRAME_CYCLES
    msg = f"standing {100 * idle:.1f}% of a frame, walking tour {100 * walk:.1f}%"
    expect(idle <= IDLE_LOAD_MAX, msg + f" (standing over {100 * IDLE_LOAD_MAX:.0f}%)")
    expect(walk <= WALK_LOAD_MAX, msg + f" (walking over {100 * WALK_LOAD_MAX:.0f}%)")
    return msg
