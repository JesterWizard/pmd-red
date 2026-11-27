"""Input drivers: what each test ROM's run presses, frame by frame.

A driver is a generator: it yields the keys to hold for the next frame and is
sent the frame that was just emulated. It can post named events
(run.events[name] = frame number) so checks know when a step happened, e.g.
"main_menu" when the dungeon menu has been opened. Everything is driven by
frame counts and game state, so runs are deterministic.
"""

from emu import keymask
from game import PRINT_WAITING


# The boot presses the other tools use: skip the logos, START at the title,
# then A every 60 frames from 2100 (the press holds 6 frames).
BOOT = {600: "START", 900: "A", 1200: "A", 1500: "A", 1800: "A"}
MASH_FROM, MASH_EVERY, HOLD = 2100, 60, 6


def story_keys(n):
    for s in range(HOLD):
        m = n - s
        if m in BOOT:
            return keymask(BOOT[m])
        if m >= MASH_FROM and (m - MASH_FROM) % MASH_EVERY == 0:
            return keymask("A")
    return 0


class D:
    """Helpers for writing drivers with `yield from`."""

    def __init__(self, run):
        self.run = run
        self.game = None
        self.f = None
        self.n = 0  # frames emulated so far

    def step(self, keys=0):
        f = yield keymask(keys)
        self.f, self.n = f, f.n
        self.game = self.run.game
        return f

    def hold(self, keys, frames):
        for _ in range(frames):
            yield from self.step(keys)

    def idle(self, frames):
        yield from self.hold(0, frames)

    def press(self, keys, hold=4, after=12):
        yield from self.hold(keys, hold)
        yield from self.idle(after)

    def mash_until(self, cond, limit=None):
        """The story presses (boot, then A every 60 frames) until cond(f)."""
        while True:
            f = yield from self.step(story_keys(self.n + 1))
            if cond(f):
                return f

    def mash(self):
        while True:
            yield from self.step(story_keys(self.n + 1))

    def wait_control(self, frames=20, limit=3000, nudge=None):
        """Idle until the dungeon has waited for the leader's input for
        `frames` frames in a row (sArrowsFrames advancing). With `nudge`,
        press A after that many frames without control (a floor's hint box
        waits for a press)."""
        prev, streak, start, still = None, 0, self.n, 0
        while streak < frames:
            f = yield from self.step(0)
            v = self.game.input_waits(f)
            streak = streak + 1 if prev is not None and v != prev else 0
            still = 0 if streak else still + 1
            prev = v
            if nudge and still >= nudge:
                yield from self.press("A", 4, 8)
                still = 0
                f = self.f
            if self.n - start > limit:
                self.post("control_timeout")
                return f
        return self.f

    def post(self, name, value=None):
        self.run.events[name] = self.n
        if value is not None:
            self.run.data[name] = value


def story(run):
    """Mash through the story (the after-Pit scenes)."""
    d = D(run)
    yield from d.mash()


def divide(run):
    """Chapter 1 from the storm to Beach Cave B1F; then the dungeon menu."""
    d = D(run)
    yield from d.mash_until(lambda f: d.game.in_dungeon(f) and d.game.input_waits(f) > 0)
    yield from d.wait_control()
    d.post("dungeon_control")
    yield from d.press("B", 4, 36)
    d.post("main_menu")
    yield from d.press("B", 4, 30)
    yield from d.wait_control()
    d.post("menu_closed")
    yield from d.idle(40)
    yield from d.mash()


def pit(run):
    """Beach Cave Pit: the cutscene, then (in the fight) rotate mode."""
    d = D(run)
    boss = run.game.song_headers[63]  # MUS_SKY_BOSS_BATTLE
    yield from d.mash_until(lambda f: f.songs.get("bgm") == boss)
    d.post("boss_music")
    yield from d.wait_control()
    d.post("rotate_before")
    yield from d.press("R", 3, 40)  # a short R press: rotate mode, grid shown
    d.post("rotate_shown")
    yield from d.press("B", 4, 30)
    yield from d.mash()


WALK = {(0, -1): "UP", (0, 1): "DOWN", (-1, 0): "LEFT", (1, 0): "RIGHT"}
PERF_TILES = 60       # tiles per tour (walking, then dashing)
PERF_STEP_LIMIT = 300  # frames to wait for one tile (a fight on the way)


def _routes(m, start):
    """Breadth-first over the floor from `start`: {tile: previous tile}, and
    the farthest tile. Stairs, items, traps and other Pokémon block."""
    prev = {start: None}
    order = [start]
    for c in order:
        for d in WALK:
            n = (c[0] + d[0], c[1] + d[1])
            if n not in prev and m[n[1]][n[0]] in ".,PL":
                prev[n] = c
                order.append(n)
    return prev, order[-1]


def _tour(d, dash, tiles, out):
    """Walk towards the farthest reachable tile, one tile at a time, holding
    the direction (and B to dash). Appends a dict per tile to out["tiles"]
    and each frame's busy cycles to out["busy"]."""
    game = d.game
    target = None
    while len(out["tiles"]) < tiles:
        f = d.f
        m = game.dungeon_map(f)
        p = tuple(game.leader_pos(f))
        prev, far = _routes(m, p)
        if target is None or target not in prev or target == p:
            target = far
            if target == p:
                return
        c = target
        while prev[c] != p:
            c = prev[c]
        keys = WALK[(c[0] - p[0], c[1] - p[1])] + ("+B" if dash else "")
        near = sum(row[max(0, p[0] - 5):p[0] + 6].count("m") for row in m[max(0, p[1] - 4):p[1] + 5])
        corridor = "," in (m[p[1]][p[0]], m[c[1]][c[0]])
        loops0 = game.loops(f)
        n = freeze = longest = 0
        last = loops0
        while tuple(game.leader_pos(d.f)) == p and n < PERF_STEP_LIMIT:
            # a dash that stopped starts again when the direction is pressed anew
            f = yield from d.step("B" if dash and n % 16 == 15 else keys)
            n += 1
            out["busy"].append(f.busy)
            now = game.loops(f)
            freeze = freeze + 1 if now == last else 0
            longest = max(longest, freeze)
            last = now
        out["tiles"].append(dict(frames=n, dropped=n - (last - loops0), quiet=near == 0,
                                 corridor=corridor, freeze=longest, pos=p))


def perf(run):
    """Beach Cave B1F (the seeded floor): stand, walk PERF_TILES tiles, dash
    PERF_TILES tiles, with CPU load measured (run.profile). Posts
    "perf_done" with {"idle": [busy], "walk": tour, "dash": tour}
    (run.data["perf_done"]; a tour is _tour's out)."""
    d = D(run)
    yield from d.mash_until(lambda f: d.game.in_dungeon(f) and d.game.input_waits(f) > 0)
    yield from d.wait_control()
    run.profile = True
    yield from d.idle(1)
    d.post("perf_start")
    data = dict(idle=[], walk=dict(tiles=[], busy=[]), dash=dict(tiles=[], busy=[]))
    for _ in range(120):
        f = yield from d.step(0)
        data["idle"].append(f.busy)
    yield from _tour(d, False, PERF_TILES, data["walk"])
    yield from d.wait_control(8)
    yield from _tour(d, True, PERF_TILES, data["dash"])
    run.profile = False
    d.post("perf_done", data)
    yield from d.idle(2)


BLUFF_PASS = ".,PLoSm"  # tiles a path to the stairs may cross ('m': fight it)
BLUFF_STEP_LIMIT = 40    # frames holding a direction before the step counts as blocked
BLUFF_FLOOR_LIMIT = 9000  # frames for one floor before the driver gives up


def _path(m, start, goal="S"):
    """Breadth-first from `start` to the nearest tile in `goal`: the list of
    tiles after start, or None."""
    prev = {start: None}
    order = [start]
    for c in order:
        if m[c[1]][c[0]] in goal and c != start:
            path = []
            while c != start:
                path.append(c)
                c = prev[c]
            return path[::-1]
        for d in WALK:
            n = (c[0] + d[0], c[1] + d[1])
            if n not in prev and 0 <= n[1] < len(m) and 0 <= n[0] < len(m[0]) and m[n[1]][n[0]] in BLUFF_PASS:
                prev[n] = c
                order.append(n)
    return None


def bluff(run):
    """Drenched Bluff from its first floor to the end: on each floor walk to
    the stairs (a Pokémon in the way is faced and attacked; a waiting
    dialogue box gets A) and take them (A on the stairs menu). Posts
    "floor_<n>" when the leader first waits for input on floor n
    (run.data: the frame's (dungeon, floor)), "stairs_<n>" on reaching the
    stairs, "left_dungeon" when the dungeon is over, then the story presses."""
    d = D(run)
    game = run.game
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.input_waits(f) > 0)
    floor_start = d.n
    floor = None
    while game.in_dungeon(d.f):
        f = d.f
        if game.print_state(f) in PRINT_WAITING:
            yield from d.press("A", 4, 8)
            continue
        loc = game.dungeon_location(f)
        if loc[1] != floor:
            # a new floor: wait for control (the floor title, the log; A
            # for a hint box)
            yield from d.wait_control(10, nudge=90)
            if not game.in_dungeon(d.f):
                break
            floor, floor_start = game.dungeon_location(d.f)[1], d.n
            d.post(f"floor_{floor}", game.dungeon_location(d.f))
            continue
        if d.n - floor_start > BLUFF_FLOOR_LIMIT:
            d.post("bluff_stuck")
            break
        m = game.dungeon_map(f)
        p = tuple(game.leader_pos(f))
        path = _path(m, p)
        if path is None:
            # on the stairs (the map shows the leader over them): A on
            # the stairs menu's "Proceed"
            yield from d.press("A", 4, 30)
            continue
        c = path[0]
        keys = WALK[(c[0] - p[0], c[1] - p[1])]
        if len(path) == 1:
            d.post(f"stairs_{floor}")
        n = 0
        while tuple(game.leader_pos(d.f)) == p and n < BLUFF_STEP_LIMIT and game.in_dungeon(d.f):
            if game.print_state(d.f) in PRINT_WAITING:
                break
            yield from d.step(keys)
            n += 1
        if tuple(game.leader_pos(d.f)) == p and game.in_dungeon(d.f):
            # blocked: facing a Pokémon (or the stairs menu is up): A
            yield from d.press("A", 4, 30)
    d.post("left_dungeon")
    yield from d.mash()


def _walk_run(d, prefix, limit=BLUFF_FLOOR_LIMIT):
    """One dungeon run, as `bluff`: each floor to its stairs; on a floor with
    no stairs (a boss room) to the nearest wild Pokémon, which is attacked.
    Posts "<prefix>floor_<n>" when the leader first waits for input on floor
    n, "<prefix>stairs_<n>" on reaching the stairs, "<prefix>fight" when the
    leader first heads for a Pokémon on a floor without stairs. Returns when
    the dungeon is over."""
    game = d.run.game
    floor = None
    floor_start = d.n
    while game.in_dungeon(d.f):
        f = d.f
        if game.print_state(f) in PRINT_WAITING:
            yield from d.press("A", 4, 8)
            continue
        loc = game.dungeon_location(f)
        if loc[1] != floor:
            yield from d.wait_control(10, nudge=90)
            if not game.in_dungeon(d.f):
                break
            floor, floor_start = game.dungeon_location(d.f)[1], d.n
            d.post(f"{prefix}floor_{floor}", game.dungeon_location(d.f))
            continue
        if d.n - floor_start > limit:
            d.post(f"{prefix}stuck")
            break
        m = game.dungeon_map(f)
        p = tuple(game.leader_pos(f))
        boss = not any("S" in row for row in m)
        path = _path(m, p, "m" if boss else "S")
        if boss and f"{prefix}fight" not in d.run.events:
            d.post(f"{prefix}fight")
        if path is None:
            # on the stairs: A on the stairs menu's "Proceed" (a boss floor:
            # nobody to reach, wait a turn)
            yield from d.press("A", 4, 30)
            continue
        c = path[0]
        keys = WALK[(c[0] - p[0], c[1] - p[1])]
        if len(path) == 1 and not boss:
            d.post(f"{prefix}stairs_{floor}")
        n = 0
        while tuple(game.leader_pos(d.f)) == p and n < BLUFF_STEP_LIMIT and game.in_dungeon(d.f):
            if game.print_state(d.f) in PRINT_WAITING:
                break
            yield from d.step(keys)
            n += 1
        if tuple(game.leader_pos(d.f)) == p and game.in_dungeon(d.f):
            # blocked: facing a Pokémon (or the stairs menu is up): A
            yield from d.press("A", 4, 30)


def bristle(run):
    """Mt. Bristle (chapter 3) 1F-9F, then (the placeholder cleared event
    enters it) Mt. Bristle Peak: the cutscene, then walk to Drowzee and
    attack until the dungeon ends. Events as `_walk_run` ("floor_<n>",
    "stairs_<n>"; "peak_floor_1", "peak_fight"), "left_bristle",
    "peak_start" (the peak run's first frame), "left_peak"."""
    d = D(run)
    game = run.game
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.input_waits(f) > 0)
    yield from _walk_run(d, "")
    d.post("left_bristle")
    yield from _peak(d)


def _peak(d):
    game = d.run.game
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.dungeon_location(f)[1] == 1)
    d.post("peak_start")
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.input_waits(f) > 0)
    yield from _walk_run(d, "peak_")
    d.post("left_peak")
    yield from d.mash()


def peak(run):
    """Mt. Bristle Peak from its debug boot (a level-1 team): the cutscene,
    then at Drowzee until the dungeon ends (the team faints)."""
    d = D(run)
    yield from d.mash_until(lambda f: run.game.in_dungeon(f))
    yield from _peak(d)


JUKEBOX_PER_PAGE = 6


def jukebox(run):
    """Top menu > Other > Sky Jukebox, then play every track for a moment.

    Stores [(track index, BGM song header, rms, peak)] in run.data["jukebox"]."""
    d = D(run)
    nav = dict(BOOT)  # A at 1800 skips the Shaymin opening, START at 2100 the title
    nav.update({2100: "START", 2550: "DOWN", 2600: "A", 2700: "DOWN", 2750: "A"})

    def keys(n):
        for s in range(HOLD):
            if n - s in nav:
                return keymask(nav[n - s])
        return 0
    jb = run.syms["sJukebox"]
    while True:
        f = yield from d.step(keys(d.n + 1))
        if 0x02000000 <= f.u32(jb) < 0x02040000:
            break
        if d.n > 4000:
            d.post("jukebox_missing")
            yield from d.idle(1)
            return
    yield from d.idle(60)
    d.post("jukebox_open")
    tracks = run.game.jukebox_tracks
    bgm = run.syms["gMPlayInfo_BGM"]
    out = []
    for page in range((len(tracks) + JUKEBOX_PER_PAGE - 1) // JUKEBOX_PER_PAGE):
        rows = min(JUKEBOX_PER_PAGE, len(tracks) - page * JUKEBOX_PER_PAGE)
        for row in range(rows):
            yield from d.press("A", 4, 16)
            run.emu.audio()
            yield from d.idle(50)
            _, rms, peak = run.emu.audio()
            hdr = d.f.u32(bgm)
            status = d.f.u32(bgm + 4)
            out.append((page * JUKEBOX_PER_PAGE + row, hdr, status, rms, peak))
            yield from d.press("DOWN", 4, 8)
        yield from d.press("RIGHT", 4, 10)
    d.post("jukebox_done", out)
    yield from d.idle(1)


# gSkyOpeningScene: the Shaymin scene (1), then the 14 GBA scenes (EoS's 13,
# the logo scene in two parts: tools/make_sky_opening.py GBA_SCENES)
OPENING_SCENES = range(1, 16)
SCENE_BIDOOF = 7
SCENE_TITLE = 0xFE           # SKY_OPENING_SCENE_TITLE (include/sky_story.h)


def _opening_sample(run, d, log):
    """Every 30 frames: (frame, scene, BGM header, status, clock, rms, peak)."""
    if d.n % 30 == 0:
        _, rms, peak = run.emu.audio()
        bgm = run.syms["gMPlayInfo_BGM"]
        log.append((d.n, d.f.u8(run.syms["gSkyOpeningScene"]), d.f.u32(bgm), d.f.u32(bgm + 4),
                    d.f.u32(bgm + 12), rms, peak))


def opening(run):
    """EoS's whole opening with no input after the health warning (START at
    600), then START at the title. Posts "title" and "title_start"; stores
    the scenes in order (run.data["opening_scenes"]: (scene, first frame))
    and the music every 30 frames (run.data["opening_audio"])."""
    d = D(run)
    scene = run.syms["gSkyOpeningScene"]
    log, seq = [], []
    run.data["opening_audio"] = log
    run.data["opening_scenes"] = seq
    while True:
        f = yield from d.step("START" if 600 <= d.n + 1 < 606 else 0)
        _opening_sample(run, d, log)
        s = f.u8(scene)
        if not seq or seq[-1][0] != s:
            seq.append((s, d.n))
        if s == SCENE_TITLE:
            break
        if d.n > 9500:
            d.post("no_title")
            break
    d.post("title")
    for _ in range(150):
        yield from d.step(0)
        _opening_sample(run, d, log)
    d.post("title_start")
    yield from d.press("START", 6, 0)
    yield from d.idle(400)
    d.post("after_title")
    yield from d.idle(1)


def opening_skip(run):
    """START in the middle of the opening (Bidoof's scene), then START at the
    title. Posts "skip", "after_skip" and "skip_menu" (the top menu is up)."""
    d = D(run)
    scene = run.syms["gSkyOpeningScene"]
    frame = run.syms["gSkyOpeningFrame"]
    while True:
        f = yield from d.step("START" if 600 <= d.n + 1 < 606 else 0)
        if f.u8(scene) == SCENE_BIDOOF and f.u16(frame) >= 60:
            break
        if d.n > 6000:
            d.post("no_scene")
            yield from d.idle(1)
            return
    d.post("skip")
    yield from d.press("START", 6, 0)
    yield from d.idle(400)
    d.post("after_skip")
    # START at the title: the top menu
    yield from d.press("START", 6, 0)
    yield from d.idle(400)
    d.post("skip_menu")
    yield from d.idle(1)
