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
        self.base = 0  # the frame of the last reset: the boot presses count from it

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
            f = yield from self.step(story_keys(self.n + 1 - self.base))
            if cond(f):
                return f

    def mash(self):
        while True:
            yield from self.step(story_keys(self.n + 1 - self.base))

    def reset_and_continue(self, name, cond=None):
        """Reset the console (the save data stays) and boot again with the
        boot presses: with a save, the top menu's first choice is Continue.
        Posts name when cond(f) (default: the game is back on a sky map;
        run.data: the map)."""
        game = self.run.game
        self.run.emu.reset()
        self.base = self.n
        self.post(f"{name}_reset")
        f = yield from self.mash_until(cond or (lambda f: (game.map_name(f) or "").startswith("MAP_SKY")))
        self.post(name, game.map_name(f) if game.map_id(f) is not None else None)
        return f

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


def after(run):
    """Chapter 1's last scenes (the story presses) to its save prompt (A:
    save), then reset and Continue from that save; the story presses on.
    Posts "ch1_saved", "ch1_continued_reset" and "ch1_continued"."""
    d = D(run)
    game = run.game
    yield from d.mash_until(lambda f: game.print_state(f) in PRINT_WAITING and "adventure has been saved" in f.text)
    d.post("ch1_saved")
    yield from d.idle(30)
    yield from d.reset_and_continue("ch1_continued")
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
    # chapter 3's start (the card, the morning, its save: Yes) to free roam
    # in the crew room, then Continue from that save
    yield from ch3_story(d, lambda f: False, free_frames=30, limit=20000)
    d.post("ch3_morning_free", game.map_name(d.f))
    yield from d.idle(30)
    yield from d.reset_and_continue("ch3_morning_continued", lambda f: game.ground_free(f))
    yield from d.idle(30)


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
    """Mt. Bristle (chapter 3) 1F-9F, then (the cleared event enters it)
    Mt. Bristle Peak: the cutscene, then walk to Drowzee and attack until
    the dungeon ends; then EVENT_M03_10_13 (the story presses) to the demo
    end, its save, reset and Continue. Events as `_walk_run` ("floor_<n>",
    "stairs_<n>"; "peak_floor_1", "peak_fight"), "left_bristle",
    "peak_start" (the peak run's first frame), "left_peak", "demo_end",
    "demo_end_continued"."""
    d = D(run)
    game = run.game
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.input_waits(f) > 0)
    yield from _walk_run(d, "")
    d.post("left_bristle")
    yield from _peak(d)
    yield from ch3_story(d, lambda f: game.print_state(f) in PRINT_WAITING and "demo ends here" in f.text,
                         limit=30000)
    d.post("demo_end")
    yield from d.idle(60)
    yield from d.reset_and_continue("demo_end_continued",
                                    lambda f: "save your adventure" in f.text or "demo ends here" in f.text)
    yield from d.mash()


def _peak(d):
    game = d.run.game
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.dungeon_location(f)[1] == 1)
    d.post("peak_start")
    yield from d.mash_until(lambda f: game.in_dungeon(f) and game.input_waits(f) > 0)
    yield from _walk_run(d, "peak_")
    d.post("left_peak")


def peak(run):
    """Mt. Bristle Peak from its debug boot (a level-1 team): the cutscene,
    then at Drowzee until the dungeon ends (the team faints); EVENT_M03_07A
    (m03a0701, the morning's save) to free roam in the crew room
    ("faint_free"), reset and Continue ("faint_continued"); out of the
    crew room: EVENT_M03_07B (the address, m03a0702) to free roam on B2F
    ("faint_b2f_free", run.data: the map)."""
    d = D(run)
    game = run.game
    yield from d.mash_until(lambda f: run.game.in_dungeon(f))
    yield from _peak(d)
    yield from ch3_story(d, lambda f: False, free_frames=30)
    d.post("faint_free", game.map_name(d.f))
    yield from d.idle(30)
    yield from d.reset_and_continue("faint_continued", lambda f: game.ground_free(f))
    yield from d.idle(20)
    yield from ch3_walk(d, "LEFT", 400, lambda f: not game.ground_free(f))
    yield from ch3_settle(d)
    d.post("faint_b2f_free", game.map_name(d.f))
    yield from d.idle(30)


CH2_BOX_DELAY = 20   # frames a waiting box stays up before the A press
CH2_IDLE_A = 300     # frames with no box (a menu, the save prompt) before A every 60
CH2_DUNGEON_LIMIT = 12000  # frames in Drenched Bluff before the driver gives up


def ch2_story(d, stop):
    """Chapter 2's story presses until stop(f): A 20 frames into each waiting
    box (CH2_BOX_DELAY); the team's name (after "good name for us": START, A
    on END, Up to Yes, A); A now and then when no box is up (the save
    prompts); free roam on B2F (after "HOORAY!"): walk up off the address's
    spot. Posts "team_named", "free_roam" and "free_roam_left"."""
    game = d.game
    waiting, idle, seen = None, 0, set()
    while True:
        f = yield from d.step(0)
        if stop(f):
            return f
        if game.print_state(f) in PRINT_WAITING:
            idle = 0
            text = f.text
            if waiting is None:
                waiting = d.n
                for key in ("good name for us", "HOORAY!"):
                    if key in text:
                        seen.add(key)
            if d.n - waiting >= CH2_BOX_DELAY:
                yield from d.press("A", 4, 4)
                waiting = None
            continue
        waiting = None
        idle += 1
        if "good name for us" in seen and "team_named" not in d.run.events and idle > 150:
            # Red's team name keyboard (RENAME_TEAM): END, then Yes (the cursor starts on No)
            yield from d.press("START", 4, 40)
            yield from d.press("A", 4, 60)
            yield from d.press("UP", 4, 30)
            yield from d.press("A", 4, 20)
            d.post("team_named")
            idle = 0
            continue
        if "HOORAY!" in seen and "free_roam_left" not in d.run.events and idle > 300:
            d.post("free_roam")
            yield from d.hold("UP", 40)   # onto UM02's trigger above the address's spot
            d.post("free_roam_left")
            idle = 0
            continue
        if idle > CH2_IDLE_A and idle % 60 == 0:
            yield from d.press("A", 4, 4)


def ch2(run):
    """Chapter 2 from its start (DEBUG_BOOT_EVENT=SKY_CH2_START, the level-1
    debug team): the boot presses, then the story (ch2_story); after the
    good night's save, reset and Continue (the morning); on to Drenched
    Bluff, where the leader stands and attacks forward (A every 40 frames)
    until the team faints; the faint path's scenes to the morning's save,
    reset and Continue, back to the bluff. Posts "dungeon_1" / "dungeon_2" on
    entering the dungeon, "fainted" when the first run is over,
    "goodnight_continued" / "faint_continued" (run.data: the map) after the
    resets."""
    d = D(run)
    game = run.game
    saved = lambda f: game.print_state(f) in PRINT_WAITING and "adventure has been saved" in f.text  # noqa: E731
    yield from d.mash_until(lambda f: (game.map_name(f) or "").startswith("MAP_SKY_GUILD"))
    d.post("ch2_first_map")
    yield from ch2_story(d, saved)
    d.post("goodnight_saved")
    yield from d.idle(30)
    yield from d.reset_and_continue("goodnight_continued")
    yield from ch2_story(d, lambda f: game.in_dungeon(f))
    d.post("dungeon_1")
    start = d.n
    while game.in_dungeon(d.f) and d.n - start < CH2_DUNGEON_LIMIT:
        if game.print_state(d.f) in PRINT_WAITING:
            yield from d.press("A", 4, 8)
        else:
            yield from d.press("A", 4, 36)
    d.post("fainted")
    yield from ch2_story(d, saved)
    d.post("faint_saved")
    yield from d.idle(30)
    yield from d.reset_and_continue("faint_continued")
    yield from ch2_story(d, lambda f: game.in_dungeon(f))
    d.post("dungeon_2")
    yield from d.idle(60)


CH3_BOX_DELAY = 20    # frames a waiting box or menu stays up before the A press
CH3_IDLE_A = 200      # frames with no box (out of free roam) before A every 60
CH3_LIMIT = 20000     # frames one stretch of story may take before the driver gives up


def ch3_story(d, stop, free_frames=None, limit=CH3_LIMIT):
    """Chapter 3's story presses until stop(f), or (free_frames) until the
    game has been in free roam that many frames: A 20 frames into each
    waiting box and menu (the save prompts: Yes), A every 60 frames when
    nothing is up out of free roam. Returns the frame, or None on the limit
    (posts "ch3_stuck")."""
    game = d.game or d.run.game
    waiting, idle, free, start = None, 0, 0, d.n
    while d.n - start < limit:
        f = yield from d.step(0)
        if stop(f):
            return f
        free = free + 1 if game.ground_free(f) else 0
        if free_frames is not None and free >= free_frames:
            return f
        if game.print_state(f) in PRINT_WAITING or game.print_state(f) == 4:
            idle = 0
            if waiting is None:
                waiting = d.n
            if d.n - waiting >= CH3_BOX_DELAY:
                yield from d.press("A", 4, 4)
                waiting = None
            continue
        waiting = None
        idle += 1
        if idle > CH3_IDLE_A and idle % 60 == 0 and not free:
            yield from d.press("A", 4, 4)
    d.post("ch3_stuck", game.map_name(d.f))
    return None


def ch3_settle(d):
    """On after a map change or a scene, until free roam (20 frames)."""
    return (yield from ch3_story(d, lambda f: False, free_frames=45))


def ch3_goto(d, tx=None, ty=None, stop=None, limit=400, tol=0.3):
    """Walk the hero to (tx, ty) (tiles): x first, then y. False when
    stop(f) or when stuck."""
    game = d.run.game
    for axis, goal in ((0, tx), (1, ty)):
        if goal is None:
            continue
        for _ in range(limit):
            v = game.hero_tile(d.f)[axis]
            if abs(v - goal) <= tol:
                break
            if axis == 0:
                keys = "RIGHT" if goal > v else "LEFT"
            else:
                keys = "DOWN" if goal > v else "UP"
            f = yield from d.step(keys)
            if stop and stop(f):
                return False
        else:
            return False
    yield from d.idle(2)
    return True


def ch3_through(d, x=None, y=None):
    """Walk to (x, y) (x first) until the map changes, then settle."""
    game = d.run.game
    m0 = game.map_name(d.f)
    moved = lambda f: game.map_name(f) != m0  # noqa: E731
    if (yield from ch3_goto(d, x, None, stop=moved)):
        yield from ch3_goto(d, None, y, stop=moved)
    yield from ch3_settle(d)


def ch3_walk(d, keys, frames, stop):
    for _ in range(frames):
        f = yield from d.step(keys)
        if stop(f):
            return f
    return None


def ch3(run):
    """Chapter 3 from its start (DEBUG_BOOT_EVENT=SKY_CH3_START): the card,
    the morning and its save; reset and Continue (the crew room); the
    address, EVENT_M03_01B to Treasure Town; free roam: the detour (the
    square's east edge), the Kecleon brothers (their shop, then
    EVENT_M03_03), the square (EVENT_M03_04), the guild by the crossroads,
    Bidoof on B1F (EVENT_M03_05_06) into Mt. Bristle. Posts "ch3_first_map",
    "morning_free", "morning_continued" (run.data: the map), "b2f_free",
    "square_free", "detour_done", "west_free", "kecleon_shop" (the shop's
    first box), "kecleon_done", "vision_done", "guild_b1f", "bidoof_talk",
    "bristle_entered"; "ch3_stuck" when a stretch runs out of frames."""
    d = D(run)
    game = run.game
    not_free = lambda f: not game.ground_free(f)  # noqa: E731
    yield from d.mash_until(lambda f: (game.map_name(f) or "").startswith("MAP_SKY"))
    d.post("ch3_first_map")
    yield from ch3_story(d, lambda f: False, free_frames=30)
    d.post("morning_free")
    yield from d.idle(30)
    yield from d.reset_and_continue("morning_continued", lambda f: game.ground_free(f))
    yield from d.idle(20)
    # the crew room's exit: the address (c00a0101), B2F's triggers: EVENT_M03_01B
    yield from ch3_walk(d, "LEFT", 400, not_free)
    yield from ch3_settle(d)
    d.post("b2f_free")
    yield from ch3_walk(d, "UP", 200, not_free)
    yield from ch3_settle(d)
    d.post("square_free")
    # the square's east edge: "The Kecleon Market isn't over this way."
    yield from ch3_walk(d, "RIGHT", 400, not_free)
    yield from ch3_settle(d)
    d.post("detour_done")
    # west to Kecleon Market: talk to the green brother (his shop), then B out
    yield from ch3_goto(d, None, 26.5)
    yield from ch3_through(d, -2, None)
    yield from ch3_goto(d, 41.5, None)
    yield from ch3_goto(d, None, 21.5)
    yield from d.hold("UP", 3)
    yield from d.press("A", 4, 30)
    for _ in range(60):
        if game.print_state(d.f) in (4, 7, 8, 9) or not game.ground_free(d.f):
            break
        yield from d.idle(10)
    d.post("kecleon_shop")
    for _ in range(6):
        yield from d.idle(60)
        yield from d.press("B", 4, 30)
    yield from ch3_settle(d)
    d.post("kecleon_done")
    # back to the square: EVENT_M03_04 (Drowzee, the vision)
    yield from ch3_goto(d, None, 26.5)
    yield from ch3_through(d, 70, None)
    yield from ch3_goto(d, None, 26.5)
    yield from ch3_goto(d, 40, None, stop=not_free)
    yield from ch3_settle(d)
    d.post("vision_done")
    # the crossroads, the guild's entrance, 1F, B1F
    yield from ch3_goto(d, None, 26.5)
    yield from ch3_through(d, 85, None)
    yield from ch3_through(d, 27, 0)
    yield from ch3_through(d, 30, 15)
    yield from ch3_through(d, 25.5, 18)
    d.post("guild_b1f", game.map_name(d.f))
    # Bidoof (m03a0501): "Yes" -> EVENT_M03_05_06 -> Mt. Bristle
    yield from ch3_goto(d, None, 25.5)
    yield from ch3_goto(d, 56.5, None)
    yield from d.hold("RIGHT", 3)
    yield from d.press("A", 4, 30)
    d.post("bidoof_talk")
    for _ in range(40):
        yield from d.press("A", 4, 26)
        if not game.ground_free(d.f) and game.print_state(d.f) not in (4, 7, 8, 9):
            break
    yield from ch3_story(d, lambda f: game.in_dungeon(f), limit=20000)
    d.post("bristle_entered")
    yield from d.idle(600)


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
