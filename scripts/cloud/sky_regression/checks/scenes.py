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


# The storm cliff (EoS m01a0102, v01p02a on the top screen), as recorded from
# EoS frame by frame (SkyDemake.md, "The storm cliff"). Frame 0 is the first
# frame the cliff shows. Each frame has a state: the DS master-brightness
# darkening in sixteenths, dark or lit picture, and the bolt's frame (0: none).
CLIFF_FADE_IN = [15, 14, 14, 13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1]
CLIFF_FADE_OUT, CLIFF_FRAMES = 370, 431
# (thunder se_Play(6401), lit for 2 frames, dark again, lit with the bolt for 34)
CLIFF_FLASHES = [(149, 152, 154, 159), (242, 243, 245, 247)]
CLIFF_BOLT = [(4, 0), (2, 1), (1, 0), (6, 2), (1, 0), (2, 3), (2, 4), (1, 0),
              (2, 3), (2, 4), (1, 0), (2, 3), (2, 4), (6, 0)]
CLIFF_THUNDER = 461


def cliff_expected(k):
    """(darkening, lit, bolt frame) of frame k in EoS."""
    if k < len(CLIFF_FADE_IN):
        dark = CLIFF_FADE_IN[k]
    else:
        dark = min(16, max(0, (k - CLIFF_FADE_OUT) * 16 // 60))
    bolt_anim = [b for n, b in CLIFF_BOLT for _ in range(n)]
    for _, lit, back, bolt in CLIFF_FLASHES:
        if lit <= k < back:
            return dark, True, 0
        if bolt <= k < bolt + len(bolt_anim):
            return dark, True, bolt_anim[k - bolt]
    return dark, False, 0


def cliff_data():
    import re
    import struct
    from game import ROOT
    d = ROOT / "graphics" / "custom" / "sky_storm_cliff"
    pal = struct.unpack("<224H", (d / "cliff.pal").read_bytes())
    lit0 = struct.unpack_from("<H", (d / "lit.tilemap").read_bytes())[0]
    text = (ROOT / "src" / "data" / "sky_storm_cliff.h").read_text()
    objs = [(int(x), int(y)) for x, y in re.findall(r"^    \{ (-?\d+), (-?\d+), \d+ \},$", text, re.M)]
    frames = [(int(a), int(n)) for a, n in re.findall(r"^    \{ (\d+), (\d+) \},$", text, re.M)]
    return pal, lit0, [frozenset(objs[a:a + n]) for a, n in frames]


def cliff_state(f, pal, lit0, bolts):
    """(darkening or None, lit, bolt frame or None) of what the GBA shows."""
    def darken(c, d):
        return sum((v - (v * d >> 4)) << (5 * i) for i, v in enumerate(((c & 31), (c >> 5) & 31, (c >> 10) & 31)))
    shown = [f.bg_color(i // 16, i % 16) for i in range(224)]
    dark = next((d for d in range(17) if all(darken(c, d) == s for c, s in zip(pal, shown))), None)
    lit = f.u16(0x06004000) == lit0  # BG2's map (screen base 8), first entry
    objs = frozenset((o["x"], o["y"]) for o in f.oam()
                     if o["pal"] == 15 and o["mode"] == 0 and (o["w"], o["h"]) == (16, 16))
    bolt = 0 if not objs else next((i + 1 for i, b in enumerate(bolts) if b == objs), None)
    return dark, lit, bolt


@check("divide", "Storm cliff: EoS's lightning frame for frame (2 flashes, bolt frames, fades, thunder)")
def storm_cliff_lightning(t):
    pal, lit0, bolts = cliff_data()

    def showing(f):
        # the cutaway's 4bpp layers: BG3 at char base 1 / screen base 31, shown
        return (t.game.map_name(f) == "MAP_SKY_STORM_SEA" and f.bgcnt(3) & 0x1F8C == 0x1F04
                and f.dispcnt() & 0x0800 and cliff_state(f, pal, lit0, bolts)[0] not in (None, 16))
    f = yield from t.wait(showing, "the storm cliff")
    start = f.n
    wrong, thunder, rain = [], [], 0
    clocks = {}
    hdr = t.game.song_headers[CLIFF_THUNDER]
    for k in range(CLIFF_FRAMES):
        got, want = cliff_state(f, pal, lit0, bolts), cliff_expected(k)
        if got != want and len(wrong) < 5:
            wrong.append(f"frame {k}: {got}, EoS {want}")
            t.snap(f, f"k{k}")
        if sum(1 for o in f.oam() if o["w"] == 64 and o["h"] == 64 and o["mode"] == 1) >= 10:
            rain += 1
        for label, addr in t.game.players:
            if label.startswith("se"):
                on = f.songs.get(label) == hdr
                clock = f.u32(addr + 12)
                was = clocks.get(label)
                if on and (was is None or clock < was):
                    thunder.append(k)
                clocks[label] = clock if on else None
        f = yield from t.next("the end of the storm cliff")
    expect(not wrong, "; ".join(wrong))
    want = [se for se, _, _, _ in CLIFF_FLASHES]
    expect(thunder == want, f"thunder (SE {CLIFF_THUNDER}) starts at frames {thunder}, expected {want}")
    expect(rain >= 0.95 * CLIFF_FRAMES, f"rain on {rain}/{CLIFF_FRAMES} frames")
    return (f"{CLIFF_FRAMES} frames from f{start} match EoS: flashes at "
            f"{[x[1] for x in CLIFF_FLASHES]}, thunder at {thunder}, rain on {rain} frames")
