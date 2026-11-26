"""The Sky dialogue box: frame, word wrap, speaker colours, portraits.

Each box is looked at on its first fully printed frame (the print state
waits for a press), found from sPrintStringState and sDialogueTextBuffer.
"""


import numpy as np

from game import ROOT
from harness import check, expect, fail
from probes import (CYAN, FILL, FILL_X1, TEXT_Y0, TEXT_Y1, YELLOW, box_frame_errors,
                    count_color, dialogue_ready, speaker)


def next_box(t, state, ground_only=False):
    """The next dialogue box (frame) or None at the end of the run."""
    while True:
        f = yield
        if f is None:
            return None
        if not dialogue_ready(t.game, f):
            if t.game.print_state(f) == 0:
                state["last"] = None
            continue
        if f.text == state.get("last"):
            continue
        state["last"] = f.text
        if ground_only and t.game.map_id(f) is None:
            continue
        return f


def short(text):
    return text[:48].replace("\n", "|")


@check("divide", "Dialogue box: EoS's Sky frame and fill on every ground box")
def dialogue_box_frame(t):
    st, n, errs = {}, 0, []
    while True:
        f = yield from next_box(t, st, ground_only=True)
        if f is None:
            break
        n += 1
        e = box_frame_errors(f)
        if count_color(f.region(150, TEXT_Y1 - 1, 220, TEXT_Y1 + 1), FILL) < 100:
            e.append("fill under the text is not (33,33,33)")
        if e and len(errs) < 3:
            t.snap(f, "box")
            errs.append(f"frame {f.n} '{short(f.text)}': " + "; ".join(e))
    expect(n >= 50, f"only {n} dialogue boxes seen")
    expect(not errs, " / ".join(errs))
    return f"{n} boxes, all with the Sky frame and fill"


def wrap_check(t):
    st, n, worst, errs = {}, 0, 0, []
    while True:
        f = yield from next_box(t, st)
        if f is None:
            break
        n += 1
        if t.game.map_id(f) is not None and box_frame_errors(f):
            continue  # not the Sky box (no frame to measure against)
        # Glyph pixels: anything but the fill in the last 2 fill columns, and
        # the right frame must be intact.
        strip = f.region(FILL_X1 - 1, TEXT_Y0 + 1, FILL_X1 + 1, TEXT_Y1)
        box = f.region(15, TEXT_Y0 + 1, FILL_X1 + 1, TEXT_Y1).astype(int)
        cols = np.where((box != np.array(FILL)).any(axis=2).any(axis=0))[0]
        if t.game.map_id(f) is not None and len(cols):
            worst = max(worst, 15 + int(cols.max()))
        bad = strip.size // 3 - count_color(strip, FILL)
        if t.game.map_id(f) is not None and bad:
            t.snap(f, "overflow")
            errs.append(f"frame {f.n} '{short(f.text)}': {bad} glyph pixels in the box's last columns")
    expect(n >= 10, f"only {n} dialogue boxes seen")
    expect(not errs, " / ".join(errs[:4]))
    return f"{n} boxes, no text past x={worst} (fill ends at x={FILL_X1})"


@check("divide", "Dialogue text wraps inside the box (opening chapter)")
def dialogue_wrap_opening(t):
    return (yield from wrap_check(t))


@check("after", "Dialogue text wraps inside the box (after the Pit)")
def dialogue_wrap_aftermath(t):
    return (yield from wrap_check(t))


NAME_COLOURS = {"Squirtle": ("yellow", YELLOW), "Charmander": ("yellow", YELLOW),
                "Zubat": ("light blue", CYAN), "Koffing": ("light blue", CYAN)}


def name_colour_check(t):
    st, seen, errs = {}, {}, []
    while True:
        f = yield from next_box(t, st)
        if f is None:
            break
        who = speaker(f.text)
        if who not in NAME_COLOURS:
            continue
        want_name, want = NAME_COLOURS[who]
        other = CYAN if want == YELLOW else YELLOW
        reg = f.region(15, TEXT_Y0, 100, TEXT_Y0 + 13)
        got, wrong = count_color(reg, want), count_color(reg, other)
        seen[who] = seen.get(who, 0) + 1
        if got < 20 or wrong:
            t.snap(f, who)
            errs.append(f"frame {f.n} {who}: {got} {want_name} name pixels, {wrong} of the other colour")
    for who in ("Squirtle", "Zubat", "Koffing"):
        expect(who in seen, f"no box spoken by {who} seen")
    expect(not errs, " / ".join(errs[:4]))
    return "names: " + ", ".join(f"{k} {NAME_COLOURS[k][0]} ({v} boxes)" for k, v in seen.items())


@check("divide", "Speaker names: partner yellow, Zubat and Koffing light blue (ground)")
def speaker_name_colours(t):
    return (yield from name_colour_check(t))


@check("pit", "Speaker names: partner yellow, Zubat and Koffing light blue (dungeon cutscene)")
def speaker_name_colours_pit(t):
    return (yield from name_colour_check(t))


# Portrait windows (tile x, y) per scene and speaker, as EoS's FACE_POS:
# (map or None in a dungeon, speaker, text that must appear or None, (x, y)).
# The first matching row applies.
YOWCH_LINES = ("Yowch!", "Why~27d you do that", "Wh-what?!", "Oh! That~27s...!", "Aaaah!")
PORTRAITS = {
    "divide": [
        ("MAP_SKY_GUILD_DUSK", "Squirtle", None, (2, 5)),       # partner left (STANDARD)
        ("MAP_SKY_GUILD_DUSK", "Koffing", None, (7, 1)),        # top left
        ("MAP_SKY_GUILD_DUSK", "Zubat", None, (18, 1)),
        *[("MAP_SKY_BEACH_DUSK", "Squirtle", s, (7, 1)) for s in YOWCH_LINES],  # TOP_LC_FACEOUTW
        ("MAP_SKY_BEACH_DUSK", "Squirtle", None, (23, 5)),      # m01a0208: partner bottom right
        ("MAP_SKY_BEACH_DUSK", "{87}E", None, (23, 5)),         # the partner as "???"
        ("MAP_SKY_BEACH_DUSK", "(hero)", None, (2, 5)),         # hero bottom left
        ("MAP_SKY_BEACH_DUSK", "Koffing", None, (7, 1)),
        ("MAP_SKY_BEACH_DUSK", "Zubat", None, (18, 1)),
    ],
    "after": [
        ("MAP_SKY_BEACH_CAVE_PIT", "Squirtle", None, (2, 5)),
        ("MAP_SKY_BEACH_CAVE_PIT", "Koffing", None, (7, 1)),
        ("MAP_SKY_BEACH_CAVE_PIT", "Zubat", None, (18, 1)),
        ("MAP_SKY_BEACH_DUSK", "Squirtle", None, (2, 5)),       # m01a0702: partner left
        ("MAP_SKY_BEACH_DUSK", "(hero)", None, (23, 5)),        # hero right
    ],
    "pit": [
        (None, "Squirtle", None, (2, 5)),
        (None, "Koffing", None, (2, 2)),
        (None, "Zubat", None, (23, 2)),
    ],
}


def portrait_check(t, rom):
    rules = PORTRAITS[rom]
    used, errs, n = set(), [], 0
    st = {}
    while True:
        f = yield from next_box(t, st)
        if f is None:
            break
        mp = t.game.map_name(f) if t.game.map_id(f) is not None else None
        who = speaker(f.text)
        for i, (m, s, txt, pos) in enumerate(rules):
            if m == mp and s == who and (txt is None or txt in f.text):
                n += 1
                used.add(i)
                x, y, w = t.game.portrait_window(f)
                if w == 0 or (x, y) != pos:
                    t.snap(f, "portrait")
                    errs.append(f"frame {f.n} {mp} {who} '{short(f.text)}': portrait "
                                f"{'missing' if w == 0 else (x, y)}, expected {pos}")
                break
    missing = [f"{m} {s}" + (f" '{x}'" if x else "") for i, (m, s, x, _) in enumerate(rules) if i not in used]
    expect(not errs, " / ".join(errs[:4]))
    expect(not missing, "never saw: " + ", ".join(missing))
    return f"{n} boxes in {len(rules)} scene/speaker cases on EoS's sides"


@check("divide", "Portrait sides per scene: guild, sunset beach (m01a0208), Yowch! face-out")
def portrait_sides_opening(t):
    return (yield from portrait_check(t, "divide"))


@check("pit", "Portrait sides in the Beach Cave Pit cutscene")
def portrait_sides_pit(t):
    return (yield from portrait_check(t, "pit"))


@check("after", "Portrait sides after the Pit (m01a0701) and on the beach (m01a0702)")
def portrait_sides_aftermath(t):
    return (yield from portrait_check(t, "after"))


def portrait_pal(species, emotion):
    raw = (ROOT / "graphics/portraits_sky" / species / f"{emotion}.pal").read_bytes()
    return [tuple(v >> 3 for v in raw[4 * i:4 * i + 3]) for i in range(16)]


@check("divide", "Guild 'No.' line: the partner's Determined face (pink), not Happy (yellow)")
def guild_no_determined(t):
    from emu import rgb555
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and " No.#W I refuse" in f.text,
                          "the partner's 'No. I refuse to be paralyzed' line")
    want = portrait_pal("squirtle", "Determined")[1]
    happy = portrait_pal("squirtle", "Happy")[1]
    got = rgb555(f.bg_color(14, 1))  # portraits load into BG palette 14
    x, y, w = t.game.portrait_window(f)
    bg = f.pixel(x * 8 + 5, y * 8 + 5)
    if got != want:
        t.snap(f, "face")
        what = "Happy (yellow)" if got == happy else str(got)
        fail(f"portrait background colour {what}, expected Determined {want}")
    expect(w == 5, "no portrait shown")
    expect(bg == tuple((v << 3) | (v >> 2) for v in want),
           f"portrait corner pixel {bg} is not the Determined background")
    return f"BG palette 14 colour 1 = {got} (Squirtle Determined), shown at {(x, y)}"
