"""After the Pit (EVENT_M01E01A_L003): m01a0701 in the Pit, m01a0702 on the beach."""

import struct

from harness import check, expect, fail
from probes import dialogue_ready

ZUBAT, KOFFING = 41, 109
ANIM_BEATEN = 0x100F  # GROUND_ANIM_BEATEN (24) -> group 15 | 0x1000
SKY_OBJ_RELIC_FRAGMENT = 69


def has_anim(live, value):
    return any(struct.unpack_from("<H", live, o)[0] == value for o in range(0, len(live) - 1, 2))


@check("after", "Zubat and Koffing lie in EoS's beaten pose when m01a0701 starts")
def thieves_beaten_pose(t):
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "Owowow" in f.text,
                          "Koffing's 'Owowow...'")
    lives = t.game.ground_lives(f)
    errs = []
    for sid, name in ((ZUBAT, "Zubat"), (KOFFING, "Koffing")):
        if sid not in lives:
            errs.append(f"{name} is not on the map")
        elif not has_anim(lives[sid], ANIM_BEATEN):
            errs.append(f"{name} is not in the beaten animation (0x{ANIM_BEATEN:04X})")
    if errs:
        t.snap(f, "pose")
    expect(not errs, "; ".join(errs))
    return "both in animation 0x100F (EoS SetAnimation(24)) at 'Owowow...'"


@check("after", "The Relic Fragment lies on the sand in m01a0702 from 'Here's what they stole.' on")
def relic_fragment_on_beach(t):
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_BEACH_DUSK" and dialogue_ready(t.game, f)
                          and "Here~27s what they stole" in f.text, "'Here's what they stole.'")
    start, frames, missing = f.n, 0, 0
    first_missing = None
    while t.game.map_name(f) == "MAP_SKY_BEACH_DUSK" and frames < 3000:
        frames += 1
        if SKY_OBJ_RELIC_FRAGMENT not in t.game.ground_object_kinds(f):
            missing += 1
            first_missing = first_missing or f
        f = yield
        if f is None:
            break
    if missing:
        t.snap(first_missing, "no_fragment")
        fail(f"no Relic Fragment object (kind {SKY_OBJ_RELIC_FRAGMENT}) on {missing}/{frames} "
             f"frames from frame {start}")
    return f"object kind {SKY_OBJ_RELIC_FRAGMENT} present on all {frames} frames from frame {start}"
