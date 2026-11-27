"""Ground scenes: cameras, the guild, the stormy sea, palettes, names."""


from harness import check, expect, fail
from probes import dialogue_ready, rgb8


def on_map(t, name):
    return lambda f: t.game.map_name(f) == name


@check("divide", "Beach meeting camera: the view is EoS's m3 (188, 100) at 'My name?'")
def beach_meeting_camera(t):
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and f.text.startswith("(My name?"),
                          "the hero's '(My name?' line")
    view = t.game.camera_view(f)
    expect(t.game.map_name(f) == "MAP_SKY_BEACH_DUSK", f"on {t.game.map_name(f)}")
    if view != (188, 100):
        t.snap(f, "view")
        fail(f"camera view {view}, expected (188, 100) (EoS stops the camera at m3 (38.5, 22))")
    return f"view {view} at 'My name?'"


# The portcullis bars (EG0101B from g01p01b2) at the guild's first view
# (118, 112): screen x 106-136, y 17-34.
GATE_BOX = (106, 17, 137, 35)
GATE_BAR_COLOURS = [(82, 66, 57), (115, 107, 90)]


@check("divide", "Guild at dusk: the portcullis is down and both totem poles stand")
def guild_gate_and_totems(t):
    cover = t.syms["gSkyCoverActive"]
    f = yield from t.wait(lambda f: on_map(t, "MAP_SKY_GUILD_DUSK")(f) and f.u8(cover),
                          "the guild pan's hand-off")
    f = yield from t.wait(lambda f: not f.u8(cover), "the guild map after the pan")
    for _ in range(5):
        f = yield from t.next()
    view = t.game.camera_view(f)
    expect(view == (118, 112), f"guild first view {view}, expected (118, 112)")
    reg = f.region(*GATE_BOX).reshape(-1, 3).tolist()
    bars = sum(1 for p in reg if tuple(p) in GATE_BAR_COLOURS)
    kinds = t.game.ground_object_kinds(f)
    totems = [o for o in f.oam() if o["pal"] in (13, 14) and o["w"] == 32 and o["h"] == 32]
    errs = []
    if bars < 100:
        errs.append(f"only {bars} portcullis bar pixels in the gate (the open gate?)")
    if not (70 in kinds and 71 in kinds):
        errs.append(f"ground objects {kinds}: the totem poles (70, 71) are missing")
    if len(totems) < 4:
        errs.append(f"{len(totems)} totem-pole OBJs on OBJ palettes 13/14 (expected 4 pieces)")
    if errs:
        t.snap(f, "guild")
    expect(not errs, "; ".join(errs))
    xs = sorted({o["x"] for o in totems})
    return f"{bars} bar pixels in the gate; totem objects 70/71, OBJ pieces at x={xs}"


@check("divide", "Stormy sea: rain blended (16/8), the lightning bolt plays, storm music")
def stormy_sea(t):
    f = yield from t.wait(on_map(t, "MAP_SKY_STORM_WAVES"), "the stormy sea")
    frames = rain = blended = bolt = storm = 0
    while t.game.map_name(f) == "MAP_SKY_STORM_WAVES":
        objs = f.oam()
        if f.dispcnt() & 0x1000:
            frames += 1
            if sum(1 for o in objs if o["w"] == 64 and o["h"] == 64 and o["mode"] == 1) >= 10:
                rain += 1
            if f.bldalpha() == (16, 8):
                blended += 1
            if sum(1 for o in objs if o["pal"] == 15 and o["mode"] == 0) >= 5:
                bolt += 1
            if t.game.playing(f, "bgm", 69):
                storm += 1
        f = yield from t.next("the end of the stormy sea")
    errs = []
    if rain < 0.9 * frames:
        errs.append(f"rain (>= 10 semi-transparent 64x64 OBJs) on {rain}/{frames} frames")
    if blended < 0.9 * frames:
        errs.append(f"BLDALPHA 16/8 on {blended}/{frames} frames")
    if bolt < 20:
        errs.append(f"lightning OBJs on {bolt} frames (EoS: 22-frame bolt plus lit frames)")
    if storm < 0.8 * frames:
        errs.append(f"storm BGM (69) on {storm}/{frames} frames")
    expect(not errs, "; ".join(errs))
    return f"{frames} frames: rain {rain}, blend 16/8 {blended}, lightning {bolt}, storm BGM {storm}"


# OBJ palette 15 is the UI palette (fontsppa: the text arrow, emotes, the
# dungeon map's player dot). The stormy sea's bolt borrows it.
VANILLA_OBJ_PAL15 = [0x0220, 0x0442, 0x2d6b, 0x56b5, 0x7fff, 0x00ce, 0x1217, 0x26fb]


def pal15_ok(f):
    return f.obj_palette(15)[:8] == VANILLA_OBJ_PAL15


@check("divide", "OBJ palette 15 is restored after the storm bolt (guild scene and Beach Cave)")
def obj_palette15_restored(t):
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_GUILD_DUSK"
                          and dialogue_ready(t.game, f), "the first guild dialogue")
    got = ["%04x" % c for c in f.obj_palette(15)[:8]]
    expect(pal15_ok(f), f"guild: OBJ palette 15 starts {got} (bolt colours?), expected vanilla's")
    f = yield from t.wait_event("dungeon_control")
    got2 = ["%04x" % c for c in f.obj_palette(15)[:8]]
    expect(pal15_ok(f), f"Beach Cave: OBJ palette 15 starts {got2}, expected vanilla's")
    return "guild and dungeon: " + " ".join(got)


def arrow_obj(f):
    return [o for o in f.oam() if o["tile"] == 0x3F0 and o["x"] == 112 and o["w"] == 16]


def arrow_check(t, map_name):
    """The text-advance arrow (tile 0x3F0, src/string_format.c) is drawn with
    the UI palette: its colours are vanilla's and its body is white."""
    f = yield from t.wait(lambda f: t.game.map_name(f) == map_name and arrow_obj(f),
                          f"the text arrow on {map_name}")
    o = arrow_obj(f)[0]
    tiles = f.read(0x06010000 + 0x3F0 * 32, 64)
    used = sorted({b & 15 for b in tiles} | {b >> 4 for b in tiles} - {0})
    used = [i for i in used if i]
    pal = f.obj_palette(o["pal"])
    cols = {i: rgb8(pal[i]) for i in used}
    brightest = max(cols.values(), key=sum)
    errs = []
    if pal[:8] != VANILLA_OBJ_PAL15:
        errs.append(f"OBJ palette {o['pal']} is {['%04x' % c for c in pal[:8]]}, not the UI palette")
    if brightest != (255, 255, 255):
        errs.append(f"brightest arrow colour {brightest}, not white")
    expect(not errs, "; ".join(errs))
    return f"{map_name}: arrow colours {list(cols.values())}"


@check("divide", "The text-advance arrow is white (UI palette), at the guild")
def text_arrow_white(t):
    return (yield from arrow_check(t, "MAP_SKY_GUILD_DUSK"))


@check("divide", "The hero is named (species name) in a debug-boot run: 'So you're named ...?'")
def hero_named_ground(t):
    f = yield from t.wait(lambda f: dialogue_ready(t.game, f) and "So you~27re named" in f.text,
                          "the partner's 'So you're named ...?' line")
    tail = f.text.split("named", 1)[1]
    name = tail.split("?")[0].strip()
    expect(name, f"empty name: '{f.text[:60]}'")
    return f"'So you're named {name}?'"


@check("divide", "Ground emote tiles survive the storm bolt (OBJ tiles 0x100.. restored, anger mark clean)")
def emote_tiles_restored(t):
    """The stormy sea's bolt streams its frames into OBJ tiles 0x100..0x292,
    where the ground emotes (anger mark, ...) live; src/sky_storm.c keeps
    them in a heap buffer and puts them back when the bolt ends."""
    base, size = 0x06010000 + 0x100 * 32, 2 * 201 * 32
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_STORM_WAVES", "the stormy sea")
    before = f.read(base, size)
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_GUILD_DUSK"
                          and dialogue_ready(t.game, f), "the first guild dialogue")
    after = f.read(base, size)
    diff = sum(1 for a, b in zip(before, after) if a != b)
    expect(diff == 0, f"{diff} bytes of OBJ tiles 0x100..0x292 differ after the storm (bolt frames left behind)")
    return "OBJ tiles 0x100..0x292 identical before and after the storm"
