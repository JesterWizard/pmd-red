"""EoS's opening (src/sky_opening.c): the Shaymin scene and the thirteen
scenes after it (fourteen on the GBA), to "Pokémon Exploration Team Theme",
then the title.

drivers.opening plays it with no input after the health warning and stores
the scene sequence (gSkyOpeningScene) and the music every 30 frames;
drivers.opening_skip presses START in the middle of it.
"""

from drivers import OPENING_SCENES, SCENE_BIDOOF, SCENE_TITLE
from harness import check, expect

THEME = 67          # MUS_SKY_EXPLORATION_TEAM_THEME (EoS bgm0001)
MIN_SCENE = 60      # frames each scene is on screen at least
MIN_RMS = 200       # 16-bit; the song never goes this quiet while it plays
PLAYING = 0xFFFF    # MUSICPLAYER_STATUS_TRACK
PAUSED = 0x80000000  # MUSICPLAYER_STATUS_PAUSE (stopped, faded out)


def playing(status):
    return bool(status & PLAYING) and not status & PAUSED


@check("opening", "Every opening scene plays in order without START: Shaymin (1), the 14 GBA scenes after it, the title")
def opening_scenes_in_order(t):
    yield from t.wait_event("title")
    expect("no_title" not in t.events, "the title never came (frame 9500)")
    seq = [(s, n) for s, n in t.run.data["opening_scenes"] if s in OPENING_SCENES or s == SCENE_TITLE]
    order = [s for s, _ in seq]
    want = list(OPENING_SCENES) + [SCENE_TITLE]
    expect(order == want, f"scenes in the order {order}, expected {want}")
    short = [f"{s} ({b - a} frames)" for (s, a), (_, b) in zip(seq, seq[1:]) if b - a < MIN_SCENE]
    expect(not short, "scenes too short: " + ", ".join(short))
    return "scenes start at frames " + ", ".join(f"{s}:{n}" for s, n in seq[:-1]) + f"; title at {seq[-1][1]}"


@check("opening", "The theme plays unbroken from the Shaymin scene to the title (one song, clock always moving, audible)")
def opening_song_unbroken(t):
    yield from t.wait_event("title_start")
    hdr = t.game.song_headers[THEME]
    log = [r for r in t.run.data["opening_audio"] if r[1] in OPENING_SCENES]
    expect(log, "no samples during the opening")
    errs = []
    prev_clock = -1
    for n, scene, bgm, status, clock, rms, peak in log:
        if bgm != hdr or not playing(status):
            errs.append(f"frame {n} (scene {scene}): BGM {t.game.header_name(bgm)} status {status:#x}")
        elif clock <= prev_clock:
            errs.append(f"frame {n} (scene {scene}): the song's clock stopped at {clock}")
        elif rms < MIN_RMS and n > log[0][0] + 60:
            errs.append(f"frame {n} (scene {scene}): silent (rms {rms:.0f})")
        prev_clock = clock
    expect(not errs, "; ".join(errs[:6]))
    title = [r for r in t.run.data["opening_audio"] if r[1] == SCENE_TITLE]
    expect(title and title[0][2] == hdr and playing(title[0][3]),
           "the song had stopped before the title (EoS ends it under the title)")
    return (f"{len(log)} samples from frame {log[0][0]} to {log[-1][0]}: the theme throughout, "
            f"clock {log[0][4]} -> {log[-1][4]}, rms {min(r[5] for r in log[2:]):.0f}-{max(r[5] for r in log):.0f}")


@check("opening", "After the opening, START at the title opens the top menu")
def opening_title_start(t):
    f = yield from t.wait_event("after_title")
    scene = f.var("gSkyOpeningScene", "u8")
    colours = len(f.colors_in(0, 0, 240, 160))
    expect(scene == 0, f"still on the title (gSkyOpeningScene {scene:#x}) 400 frames after START")
    expect(colours >= 64, f"the screen after the title has {colours} colours (the top menu CG has hundreds)")
    return f"title left; the top menu shows {colours} colours"


@check("skip", "START in the middle of the opening (Bidoof's scene): the title within 90 frames, the song fades out")
def opening_start_skips(t):
    f = yield from t.wait_event("skip")
    start = f.n
    hdr = t.game.song_headers[THEME]
    expect(f.var("gSkyOpeningScene", "u8") == SCENE_BIDOOF, "not in Bidoof's scene")
    title = stopped = None
    while f.n < start + 400 and (title is None or stopped is None):
        f = yield from t.next("the title after START")
        if title is None and f.var("gSkyOpeningScene", "u8") == SCENE_TITLE:
            title = f.n
        bgm, status = f.var("gMPlayInfo_BGM"), f.var("gMPlayInfo_BGM", offset=4)
        if stopped is None and (bgm != hdr or not playing(status)):
            stopped = f.n
    expect(title is not None and title - start <= 90, f"title at {title}, START at {start}")
    expect(stopped is not None and stopped - start <= 90, f"the theme still plays {f.n - start} frames after START")
    return f"START at {start}: theme stopped at +{stopped - start}, title at +{title - start}"
