"""Music and sound per scene, read from the m4a players (songHeader of
gMPlayInfo_BGM / _SE1..6 and the sky ambience player sSkyAmbienceInfo)."""

from harness import check, expect

MUS = dict(storm=69, ocean=70, fire=71, beach_dusk=61, beach_cave=62, boss=63, pit=64)
SE_TACKLE = 519  # SE_SKY_TACKLE (EoS 0x1401)

RUN = 120  # a song counts when it plays this many frames in a row in its scene


def on_map(name):
    return lambda t, f, seen: t.game.map_name(f) == name


def after_line(name, text):
    """On map `name` once a box containing `text` has been shown."""
    def cond(t, f, seen):
        if text in f.text:
            seen.add(text)
        return t.game.map_name(f) == name and text in seen
    return cond


# (scene, condition, player, song): EoS's chapter 1 scripts (see SkyDemake.md,
# "Chapter 1 audio audit").
OPENING = [
    ("storm voices", on_map("MAP_SKY_STORM_SEA"), "bgm", MUS["storm"]),
    ("stormy sea", on_map("MAP_SKY_STORM_WAVES"), "bgm", MUS["storm"]),
    ("beach by day", on_map("MAP_SKY_BEACH_DAY"), "bgm", MUS["ocean"]),  # Ocean1 on the main player
    ("guild at dusk", on_map("MAP_SKY_GUILD_DUSK"), "bgm", MUS["fire"]),  # Fire Crackling (louder)
    ("Krabby at sunset: waves", on_map("MAP_SKY_KRABBY_SUNSET"), "ambience", MUS["ocean"]),
    ("Krabby at sunset: music", on_map("MAP_SKY_KRABBY_SUNSET"), "bgm", MUS["beach_dusk"]),
    ("sunset beach: music", on_map("MAP_SKY_BEACH_DUSK"), "bgm", MUS["beach_dusk"]),
    ("sunset beach: waves under it", on_map("MAP_SKY_BEACH_DUSK"), "ambience", MUS["ocean"]),
    ("sunset beach after 'chicken'", after_line("MAP_SKY_BEACH_DUSK", "chicken"), "bgm", MUS["ocean"]),
    ("Beach Cave B1F", lambda t, f, seen: t.game.in_dungeon(f), "bgm", MUS["beach_cave"]),
]


def scene_songs(t, table, stop_event=None):
    best, cur, seen = {}, {}, set()
    while True:
        f = yield
        if f is None or (stop_event and stop_event in t.events):
            break
        for i, (_, cond, player, song) in enumerate(table):
            if cond(t, f, seen) and t.game.playing(f, player, song):
                cur[i] = cur.get(i, 0) + 1
                best[i] = max(best.get(i, 0), cur[i])
            else:
                cur[i] = 0
    errs, ok = [], []
    for i, (scene, _, player, song) in enumerate(table):
        n = best.get(i, 0)
        (ok if n >= RUN else errs).append(f"{scene}: {player}={t.game.song_name(song)} ({n} frames)")
    expect(not errs, f"not heard for {RUN} frames in a row: " + "; ".join(errs))
    return "; ".join(ok)


@check("divide", "Music per scene: storm, ocean waves, guild fire, beach at dusk + waves, Beach Cave")
def music_per_scene(t):
    return (yield from scene_songs(t, OPENING))


@check("divide", "Zubat's tackle SE plays as the waves stop, before 'Yowch!'")
def zubat_tackle_se(t):
    f = yield from t.wait(lambda f: t.game.map_name(f) == "MAP_SKY_BEACH_DUSK"
                          and t.game.any_se_playing(f, SE_TACKLE), "SE_SKY_TACKLE (519) on the sunset beach")
    hit = f.n
    amb = t.game.playing(f, "ambience", MUS["ocean"])
    f = yield from t.wait(lambda f: "Yowch!" in f.text, "the partner's 'Yowch!'")
    expect(not amb, f"the waves still play at the tackle (frame {hit})")
    return f"tackle SE at frame {hit}, 'Yowch!' at {f.n}, waves stopped"


@check("pit", "Beach Cave Pit: 'In the Depths of the Pit' in the cutscene, then 'Boss Battle!'")
def music_pit(t):
    f = yield from t.wait(lambda f: t.game.in_dungeon(f) and "Um...#W Hey!" in f.text,
                          "the partner's 'Um... Hey!' in the Pit")
    expect(t.game.playing(f, "bgm", MUS["pit"]),
           f"the Pit cutscene plays {t.game.songs_desc(f)}, expected In the Depths of the Pit")
    f = yield from t.wait_event("boss_music")
    f = yield from t.wait_event("rotate_before")
    expect(t.game.playing(f, "bgm", MUS["boss"]), f"the fight plays {t.game.songs_desc(f)}")
    return "cutscene: In the Depths of the Pit; fight: Boss Battle!"


@check("after", "After the Pit: Pit music in m01a0701, waves then 'On the Beach at Dusk' in m01a0702")
def music_aftermath(t):
    table = [
        ("Pit (m01a0701)", on_map("MAP_SKY_BEACH_CAVE_PIT"), "bgm", MUS["pit"]),
        ("beach (m01a0702): waves", on_map("MAP_SKY_BEACH_DUSK"), "ambience", MUS["ocean"]),
        ("beach (m01a0702): music", on_map("MAP_SKY_BEACH_DUSK"), "bgm", MUS["beach_dusk"]),
    ]
    return (yield from scene_songs(t, table))
