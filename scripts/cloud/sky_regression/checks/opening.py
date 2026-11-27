"""EoS's opening (src/sky_opening.c): the Shaymin scene and the thirteen
scenes after it (fourteen on the GBA), to "Pokémon Exploration Team Theme",
then the title.

drivers.opening plays it with no input after the health warning and stores
the scene sequence (gSkyOpeningScene) and the music every 30 frames;
drivers.opening_skip presses START in the middle of it.
"""

from drivers import OPENING_SCENES, SCENE_BIDOOF, SCENE_TITLE
from emu import PAL, VRAM
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


# The font and window-frame sheet: tiles 0x278-0x2FF of char base 0 (every
# window's corners and edges are tiles 0x2DC-0x2FF). Tile 0x27A is the fade
# tile (UpdateFadeInTile), which the screens set for themselves.
SHEET = (VRAM + 0x4F00, 0x1100)
FADE_TILE = slice(0x40, 0x60)
OBJ_FONT = (VRAM + 0x17E00, 0x200)      # the cursor and arrows (OBJ tiles 0x3F0-)
OBJ_PAL15 = (PAL + 0x200 + 15 * 32, 32)
# The top menu's description window (EoS's green frame), as a clean boot
# draws it: rows 114-118 across the top edge, columns 8-14 down the left one.
MENU_TOP = [(74, 189, 74), (247, 255, 247), (247, 255, 247), (33, 165, 33), (24, 123, 24)]
MENU_LEFT = [(74, 189, 74)] + [(247, 255, 247)] * 4 + [(33, 165, 33), (24, 123, 24)]
MENU_FILL = (33, 33, 33)


def _ui_state(f):
    sheet = bytearray(f.read(*SHEET))
    sheet[FADE_TILE] = bytes(32)
    return bytes(sheet), f.read(*OBJ_FONT), f.read(*OBJ_PAL15)


def _menu_frame_errors(f, before):
    """The top menu after the opening: the UI's tiles and palette are what
    they were before it, and the description window's frame is drawn right."""
    errs = []
    sheet, objfont, objpal = _ui_state(f)
    bad = sorted({0x278 + i // 32 for i in range(len(sheet)) if sheet[i] != before[0][i]})
    if bad:
        errs.append(f"{len(bad)} font / window-frame tiles changed (tiles {bad[0]:#x}-{bad[-1]:#x})")
    if objfont != before[1]:
        errs.append("the cursor's OBJ tiles (0x3F0-0x3FF) changed")
    if objpal != before[2]:
        errs.append("OBJ palette 15 changed")
    for k, want in enumerate(MENU_TOP):
        cols = f.colors_in(24, 114 + k, 216, 115 + k)
        if cols != {want}:
            errs.append(f"top frame row {114 + k}: {len(cols)} colours, e.g. {sorted(cols)[:3]} (expected {want})")
    left = [f.pixel(x, 130) for x in range(8, 15)]
    if left != MENU_LEFT:
        errs.append(f"left frame at y=130 is {left}")
    if f.colors_in(24, 119, 216, 121) != {MENU_FILL}:
        errs.append("the window's fill is not one colour")
    return errs


def _window_frames_check(t, event):
    f = yield from t.wait(lambda f: f.var("gSkyOpeningScene", "u8") == 1, "the opening")
    before = _ui_state(f)
    f = yield from t.wait_event(event)
    errs = _menu_frame_errors(f, before)
    if errs:
        t.snap(f, event)
    expect(not errs, "; ".join(errs[:5]))
    return "the font / frame sheet, the cursor tiles and OBJ palette 15 are as before the opening; the top menu's frame is EoS's green"


@check("opening", "After the whole opening the windows are intact: the font / frame tiles and the top menu's frame")
def opening_window_frames(t):
    return (yield from _window_frames_check(t, "after_title"))


@check("skip", "After START in the middle of the opening the windows are intact (as opening_window_frames)")
def opening_skip_window_frames(t):
    return (yield from _window_frames_check(t, "skip_menu"))


SCENE_LOGO_FIELD = 6    # the field part of EoS's logo scene (GBA_SCENES "logo_field")


@check("opening", "The logo scene's field: the Pokémon Mystery Dungeon logo over the field, EXPLORERS OF SKY right under it")
def opening_logo_over_field(t):
    f = yield from t.wait(lambda f: f.var("gSkyOpeningScene", "u8") == SCENE_LOGO_FIELD
                          and f.var("gSkyOpeningFrame", "u16") >= 4, "the logo scene's field")
    frames = 0
    errs = []
    while f is not None and f.var("gSkyOpeningScene", "u8") == SCENE_LOGO_FIELD:
        objs = f.oam()
        logo = [o for o in objs if (o["w"], o["h"]) == (16, 16) and -4 <= o["y"] and o["y"] + 16 <= 82 and o["prio"] == 0]
        rest = [o for o in objs if o not in logo]
        text = [o for o in rest if 70 <= o["y"] < 100]
        if len(logo) != 44 or len(text) < 3 or any(o["y"] < 70 for o in rest):
            errs.append(f"frame {f.n}: {len(logo)} logo OBJs, {len(text)} emblem OBJs, "
                        f"{sum(o['y'] < 70 for o in rest)} other OBJs above y 70")
        frames += 1
        f = yield
    expect(frames >= 100, f"the field part lasted {frames} frames")
    expect(not errs, "; ".join(errs[:4]))
    return f"{frames} frames: 44 logo OBJs at the top, the emblem's OBJs under them"
