"""The scroll-down pans from a CG into a map (src/sky_cutaways.c, ShowCover).

The pan ends on a "cover" (gSkyCoverActive) while the map is rebuilt, then
the map shows. Before the fix the actors blinked out for ~14 frames at the
hand-off and the beach view jumped 8 px.
"""

from collections import deque
from statistics import median

from harness import check, expect
from probes import best_shift, obj_pixels

PRE, POST = 20, 20  # frames looked at before the cover and after the map shows


def pan_handoff(t, map_name):
    cover = t.syms["gSkyCoverActive"]
    ring = deque(maxlen=PRE)

    def cover_on(f):
        if t.game.map_name(f) != map_name:
            return False
        ring.append(f)
        f.fb  # keep the picture
        return f.u8(cover) != 0
    f = yield from t.wait(cover_on, f"the {map_name} pan's cover")
    frames = list(ring)
    on = f.n
    while f.u8(cover):
        f = yield from t.next("the map after the cover")
        f.fb
        frames.append(f)
    off = f.n
    for _ in range(POST):
        f = yield from t.next("the map after the cover")
        f.fb
        frames.append(f)

    errs = []
    counts = [obj_pixels(fr) for fr in frames]
    base = median(counts[:5])
    expect(base >= 50, f"no actor sprites before the hand-off (sprite pixels {counts[:5]})")
    for fr, c in zip(frames, counts):
        if not fr.dispcnt() & 0x1000:
            errs.append(f"frame {fr.n}: OBJ layer off")
        elif c < 0.5 * base:
            errs.append(f"frame {fr.n}: actors {c} sprite pixels (baseline {base:.0f})")
    worst = (0, 0, 0)
    for a, b in zip(frames, frames[1:]):
        dy, dx, err = best_shift(a.fb, b.fb)
        if abs(dy) > abs(worst[0]) or abs(dx) > abs(worst[1]):
            worst = (dy, dx, b.n)
        if abs(dy) > 2 or abs(dx) > 1:
            errs.append(f"frame {b.n}: the picture moved ({dx:+d}, {dy:+d}) px from the previous frame")
    if errs:
        t.snap(frames[0], "start")
        t.snap(frames[-1], "end")
    expect(not errs, "; ".join(errs[:6]) + (f" (+{len(errs) - 6} more)" if len(errs) > 6 else ""))
    return (f"cover frames {on}-{off - 1}: actors on screen in all {len(frames)} frames "
            f"(min {min(counts) / base:.0%} of baseline), largest frame-to-frame move "
            f"({worst[1]:+d}, {worst[0]:+d}) px")


@check("divide", "Beach pan hand-off: the hero stays visible and the view does not jump")
def pan_beach_handoff(t):
    return (yield from pan_handoff(t, "MAP_SKY_BEACH_DAY"))


@check("divide", "Guild pan hand-off: the partner stays visible and the view does not jump")
def pan_guild_handoff(t):
    return (yield from pan_handoff(t, "MAP_SKY_GUILD_DUSK"))
