# Sky demake: chapter 3 plan

Explorers of Sky's chapter 3 on the GBA. Planned while chapter 2 is being
integrated ([SkyChapter2.md](SkyChapter2.md)); work starts once chapter 2
plays end to end. Same pipeline as chapter 2: maps
(`tools/convert_eos_ground_map.py`), sprites (`tools/convert_eos_wan_to_ax.py
--ground-groups all`), the dungeon (`tools/make_sky_dungeon_floors.py`), the
scenes (`tools/event_editor/eos_import.py`), then the flow.

## What EoS plays

From `unionall.ssb` (coroutines `EVENT_M03_*`); 45 `m03*` scripts plus
`c00a0701`, `c00a1701`, `m00p1101`, about 8,900 lines decompiled.

| Step | Coroutine | Scripts (level) | What happens |
|---|---|---|---|
| 1 | EVENT_M03_01B | m03a0101 (g01p04a), m03a0102 (g01p03a), m03a0105 (g01p04a), m03a0106 (g01p01a), m00p1101 (p01p01a), m03a0107 (t01p01a), m03a0108 (t01p02a), m03a0109 (t01p01a) | Morning; the Outlaw Notice Board; out of the guild by day; the crossroads; the partner shows Treasure Town (the square, the Kecleon shop, the other shops) |
| 2 | station T01P01A | free roam in Treasure Town | |
| 3 | EVENT_M03_02 | m03a0201 (t01p01a) | |
| 4 | EVENT_M03_03 | m03a0301, m03d0312-0314 (t01p02a), c00a0701, c00a1701 (s04p01a) | Marill and Azurill at the Kecleon shop; the partner's dizzy spell |
| 5 | EVENT_M03_04 | m03a0401, m03a0403, m03d0412 (t01p01a), m03d0812 (d03p41a) | The hero's first vision (Azurill and Drowzee at Mt. Bristle) |
| 6 | EVENT_M03_05_06 | m03a0501-0506 (g01p03a, v03p01a-04a), m03a0511 (p01p01a), m03a0601 (d03p11a) | Chatot and the outlaw board, Drowzee's poster; after Drowzee to Mt. Bristle |
| 7 | dungeon | Mt. Bristle (EoS dungeon 4), then its peak (5, boss) | |
| 8 | EVENT_M03_08 | m03a0801, m03d0812, m03d0813 (d03p41a) | Drowzee and Azurill at the peak: the boss fight |
| 9 | EVENT_M03_10_13 | m03a1001 (d03p41a), m03a1002 (d03p11a, Magnezone), m03a1201/1203 (g01p03a), c00a0501, c00a0601, m03a1301-1314 (g01p07c, v03p05c-12a) | Azurill saved; Officer Magnezone; the reward; dinner; the night: the dream visions (Time Gear, Grovyle, the storm) |
| fail | EVENT_M03_07A / 07B | m03a0701 (g01p03a), m03a0702 (g01p04a) | Fainted on Mt. Bristle |
| stop | d03p41a | m03a0901, m03a1101 | "It's impossible to go any farther." |

Sentry-duty music (`BGM_*_SENTRY_DUTY`) appears in these scripts: check
whether the footprint mini-game belongs to chapter 3 or only its results.

## New pieces

- **Maps**: t01p01a, t01p02a (Treasure Town), p01p01a (the crossroads),
  g01p01a (the guild entrance by day), d03p11a (Mt. Bristle's entrance),
  d03p41a (the peak), p15p01a, s04p01a; the v03p01a-12a pictures (Chatot's
  board, the posters, the visions: some are played as maps with actors, as
  chapter 2's v02p03a; decide per script).
- **Actors**: Marill, Azurill, Drowzee, the Kecleon brothers, Bibarel,
  Bidoof's siblings, Magnezone, two Magnemite, Grovyle (visions); the
  Treasure Town shopkeepers the free roam needs.
- **Objects**: g01p03a1, p03p02a1, t01p01a2/a4/a6, t01p04a1, v01p05b1.
- **Dungeons**: Mt. Bristle (`main_EnterDungeon(4, 0)`), the peak / Drowzee
  boss (`main_EnterDungeon(5, 30)`).
- **Music**: Treasure Town, Heartwarming, Growing Anxiety, Oh No!,
  Earthquake, Mt. Bristle, Time Gear (remix), Storm (inside), the four
  sentry-duty results; all in the Sky Jukebox range.
- **Free roam**: Treasure Town with the shops (Red's Kecleon shop, storage
  and bank as EoS's Kecleon brothers, Kangaskhan, Duskull), the crossroads,
  the guild floors.
