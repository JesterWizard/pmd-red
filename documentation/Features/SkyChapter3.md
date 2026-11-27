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

## Sprites

Done: every actor, object and face the chapter-3 scripts (the 49 above) and
its free roam (the `um03.sss` stations of T01P01A, T01P02A, G01P03A-06A,
P01P01A and H01P99A, and the town levels' `enter.sse`) show. Same pipeline as
[chapter 2's](SkyChapter2.md#sprites).

### Ground actors

Kinds continue chapter 2's (`include/sky_story.h`, `sSkyLivesTypeData` in
[`src/ground_lives.c`](../../src/ground_lives.c)). Each is EoS's sprite with
every EoS ground group (`convert_eos_wan_to_ax.py convert EOS.nds <md> <name>
--palette <Red's> --ground-groups all`), on the species' Red overworld
palette. The Red species get `<name>sky` headers that replace Red's sprite in
the sky build only; Bibarel and Magnezone (Gen 4) are regenerated in place.

| Kind | No. | EoS actor | EoS md | Sprite | Groups (ground-only) | Palette | Where |
|---|---|---|---|---|---|---|---|
| `SKY_LIVES_MARILL` | 166 | NPC_MARIRU | 183 | `gAxMarillsky` | 13 | 5 | the story; T01P01A um03 |
| `SKY_LIVES_AZURILL` | 167 | NPC_RURIRI | 326 | `gAxAzurillsky` | 17 (13-16) | 5 | the story |
| `SKY_LIVES_DROWZEE` | 168 | NPC_SURIIPU | 96 | `gAxDrowzeesky` | 15 (13-14) | 4 | the story |
| `SKY_LIVES_KECLEON` | 169 | NPC_KAKUREON1 (and m03d0312's NPC_TEST001) | 383 | `gAxKecleonsky` | 14 (13) | 3 | T01P02A: the shop |
| `SKY_LIVES_KECLEON_PURPLE` | 170 | NPC_KAKUREON2 | 384 | `gAxKecleonsky` | 14 (13) | 10 | T01P02A: the shop |
| `SKY_LIVES_BIBAREL` | 171 | NPC_BIIDARU | 1035 | `gAxBibarel` | 14 (13) | 6 | m03a1002 |
| `SKY_LIVES_MAGNEZONE` | 172 | NPC_JIBAKOIRU | 504 | `gAxMagnezone` | 17 (13-16) | 5 | m03a1002 |
| `SKY_LIVES_MAGNEMITE` | 173 | NPC_KOIRU, NPC_KOIRU2 | 81 | `gAxMagnemitesky` | 14 (13) | 5 | m03a1002 |
| `SKY_LIVES_GROVYLE` | 174 | NPC_JUPUTORU | 281 | `gAxGrovylesky` | 38 (13-37) | **8** | the visions (V03P06A, V03P11A) |
| `SKY_LIVES_DUSKULL` | 175 | NPC_YOMAWARU | 387 | `gAxDuskullsky` | 13 | 5 | T01P01A: the bank |
| `SKY_LIVES_KANGASKHAN` | 176 | NPC_GARUURA | 115 | `gAxKangaskhansky` | 13 | 6 | T01P02A: storage |
| `SKY_LIVES_MAROWAK` | 177 | NPC_GARAGARA | 105 | `gAxMarowaksky` | 13 | 6 | T01P03A: the dojo |
| `SKY_LIVES_URSARING` | 178 | NPC_RINGUMA | 244 | `gAxUrsaringsky` | 13 | 4 | T01P01A um03 |
| `SKY_LIVES_TEDDIURSA` | 179 | NPC_HIMEGUMA | 843 | `gAxTeddiursasky` | 13 | 4 | T01P01A um03 |
| `SKY_LIVES_VIGOROTH` | 180 | NPC_YARUKIMONO | 316 | `gAxVigorothsky` | 13 | 6 | T01P02A um03 |
| `SKY_LIVES_SHUPPET` | 181 | NPC_KAGEBOUZU | 985 | `gAxShuppetsky` | 13 | 9 | T01P02A um03 |
| `SKY_LIVES_MURKROW` | 182 | NPC_YAMIKARASU | 798 | `gAxMurkrowsky` | 13 | 2 | T01P02A um03 |
| `SKY_LIVES_TOGEPI` | 183 | NPC_TOGEPII | 175 | `gAxTogepisky` | 13 | 5 | T01P02A, G01P03A um03 |
| `SKY_LIVES_POLITOED` | 184 | NPC_NYOROTONO | 186 | `gAxPolitoedsky` | 13 | 3 | T01P02A, G01P03A um03 |
| `SKY_LIVES_POOCHYENA` | 185 | NPC_POCHIENA_A, _B, _C | 289 | `gAxPoochyenasky` | 13 | 6 | G01P03A um03 |
| `SKY_LIVES_SPINDA` | 186 | NPC_PATCHIIRU | 355 | `gAxSpindasky` | 19 (13-18) | 6 | P01P01A um03 |

(Female md entries 843, 985 and 798 share their male's sprite; the male md
243, 385 and 198 were converted.)

```bash
tools/convert_eos_wan_to_ax.py convert EOS.nds 326 azurillsky --palette 5 --ground-groups all
tools/convert_eos_wan_to_ax.py convert EOS.nds 383 kecleonsky --palette 3 --ground-groups all --max-tiles 0
# ... one line per row above (md, name, palette); --max-tiles 0 for Kecleon, Grovyle,
# Duskull, Kangaskhan, Marowak, Ursaring, Teddiursa, Vigoroth and Shuppet
```

- **The Kecleon brothers.** EoS has two sprites (md 383 green, 384 purple),
  but they are the same pixels on two palettes: EoS's green palette is Red's
  palette 3 exactly, and the purple sprite mapped onto Red's palette 10 gives
  the green one's indices. So both kinds use the one sprite, and
  `SKY_LIVES_KECLEON_PURPLE` gets Red's purple-Kecleon palette 10 the way
  Red's own kind 71 does (`sub_80A7428`,
  [`src/ground_sprite_monster.c`](../../src/ground_sprite_monster.c), sky build
  only). EoS's purple palette keeps the red of the mouth that Red's palette 10
  makes pink.
- **Bidoof's brother and sister** (NPC_BIPPA_BRO md 434, NPC_BIPPA_SIS md
  1034, m03a1002) are `SKY_LIVES_BIDOOF`: the female sprite's Red groups are
  Bidoof's (a few pixels differ) and the scene gives them no special
  animation. Bibarel is EoS's female entry (md 1035, the one m03a1002 places;
  the male has no ground group); it is also the dungeon sprite.
- **Grovyle** on Red's palette 12 (grey-green) came out yellow. The sky build
  gives Grovyle palette 8 (the converter's pick: EoS's greens) in
  `gSkyMonsterData`: [`tools/make_sky_gen4_data.py`](../../tools/make_sky_gen4_data.py)
  now gives every Red species with a `<name>sky` sprite that sprite's palette,
  and Grovyle is the only one that changes. Its group 13 (`SetAnimation(22)` /
  `42`) is EoS's black silhouette of the visions.
- Red's own sprites of the species marked `--max-tiles 0` have frames of 20 to
  32 tiles, so the EoS frames are not cropped (as chapter 2's Dugtrio).
  Magnezone keeps the Gen 4 batch's cropping (20 frames).
- **Not converted**: the town's Electivire, Chansey and Xatu (T01P01A and
  T01P02A `enter.sse`, layer 99) destroy themselves before scenario 8 / 12
  (chapter 3 is scenario 4). Chapter 2's kinds cover the rest of the free roam
  (Chatot, Loudred, Diglett, Dugtrio, Wigglytuff, Chimecho, Sunflora, Bidoof,
  Corphish, Spoink, Pidgey, Seedot, Swellow, Wurmple, Ledyba). `UNIT_NPC*`,
  `ADVENTURE_NPC*` and `PLAYER_APPOINT` are the team.

### Animation ids

Every `SetAnimation` the chapter-3 scripts and the um03 talk scripts give an
actor, in [chapter 2's EoS → Red table](SkyChapter2.md#animation-ids). Each
group was checked against the converted sprite (the group exists; in all 8
directions its sequences have EoS's frame counts and durations):

| Actor | EoS id → Red id (group) |
|---|---|
| Azurill | 2, 5 (0 loop), 9 (11 loop), 22 (13 once), 23 (14 once) |
| Drowzee | **14 → 53** (6, Hurt, loop: beaten at the peak, m03a1001), 23 (14 once) |
| Grovyle | 22 (13 once), 42 → 30 (13 loop) |
| Magnezone | 2, 22 (13 once) |
| Kecleons, Bidoof's family | 2 |
| Dugtrio | 2, 4 (7 loop), 9 (11 loop), 12 (2 once), 25 (16 once) |
| Chatot | 2, 11 (6 once), 18 (3 once) |
| Loudred | 2, 5 (0 loop), 9 (11 loop), 18 (3 once), 19 (4 once) |
| Bidoof | 2, 4 (7 loop), 5 (0 loop), 23 (14 once) |
| Diglett | 2, 24 (15 once) |
| Swellow, Wurmple | 2, 4 (7 loop) |
| the town and guild folk | 2 |

- **New**: EoS's id 14 (0x806) had no Red id. Red's table
  (`gUnknown_8117F64`) gets it as index 53, sky build only: a scene writes
  `SELECT_ANIMATION 53` for EoS's `SetAnimation(14)`.
- 256, 768 and 1024 (Azurill, Grovyle) are 0x100 / 0x300 / 0x400: the mode
  byte alone, which keeps the group and changes how it plays (Red's
  `sub_80A9750` reads them the same way). They need no table entry.
- The hero and partner use 5, 9, 66 → 26, 68 → 28, 71 → 47 and 76 → 52, which
  their ground groups (ch2-heroanims) cover.
- The scene translator ([`tools/event_editor/eos_import.py`](../../tools/event_editor/eos_import.py))
  now knows chapter 3's actor and object names (`ACTORS`, `OBJECTS`). It
  still writes EoS's id as the Red id: the ones that differ (42 → 30,
  14 → 53, ...) are for the scenes piece.

### Objects

`convert_eos_wan_to_ax.py ornament`, kinds after chapter 2's pearl
(`sSkyGroundObjectTypes`, `gGroundObjectKinds`, the sorted sky
`gOrnamentFiles`). An object's states are the sequences of its WAN group,
picked as directions (Red's object `SELECT_ANIMATION`: 1 = 0x800 loops
sequence 0, 4 / 5 / 6 = 0x1001 / 0x1002 / 0x1003 play sequence 1 / 2 / 3 once
and hold, 7-14 loop sequence 0-7).

| Kind | No. | EoS | Ornament | Size (tiles) | Palette | Placed (EoS) |
|---|---|---|---|---|---|---|
| `SKY_OBJ_OUTLAW_BOARD_PANEL` | 76 | `g01p03a1` | `outlawpanelp` | 2 (20) | 6 (shared) | g01p03a (55, 22): m03a0502, m03a0506 |
| `SKY_OBJ_APPLE` | 77 | `p03p02a1` | `applep` | 1 (8) | 8 (shared) | t01p02a (51, 24): m03a0301, m03d0312 |
| `SKY_OBJ_TOTEM_POLE_3` | 78 | `t01p01a2` | `totempole3p` | 2 (32) | 0x129 `totempole3c` | t01p01a (81, 35), t01p02a (11, 35): enter.sse |
| `SKY_OBJ_TOTEM_POLE_4` | 79 | `t01p01a4` | `totempole4p` | 3 (40) | 0x129 (pole 3's) | t01p01a (77, 35), t01p02a (7, 35): enter.sse |
| `SKY_OBJ_DOJO_WARP` | 80 | `t01p04a1` | `dojowarpp` | 5 (72) | 0x12A `dojowarpc` | t01p04a (25, 20): enter.sse |
| `SKY_OBJ_BOARD_PANEL_BACK` | 81 | `v03p03a1` | `boardbackp` (`--rest-first`) | 3 (36) | 4 (shared) | v03p03a (18, 15): m03a0505 |
| `SKY_OBJ_DUGTRIO_HOLE` | 82 | `v03p03a2` | `dugtrioholep` | 2 (32) | 1 (shared) | v03p03a (19, 20): m03a0505 |
| `SKY_OBJ_TIME_GEAR` | 83 | `v03p06a1` | `timegearp` | 1 (16) | 0x12B `timegearc` | v03p06a (25, 14), v03p07a / v03p08a (19, 13-14): m03a1305-1307, m03a1313 |
| `SKY_OBJ_TIME_GEAR_GLOW` | 84 | `v03p06a2` | `timegearglowp` | 8 (120) | 10 (shared) | with the Time Gear |
| `SKY_OBJ_CRUMBLING_ROCK` | 85 | `v03p11a1` | `crumblingrockp` | 2 (32) | 0x12C `crumblingrockc` | v03p11a (18, 29): m03a1312 |

States and the scripts' calls:

| Object | States (Red `SELECT_ANIMATION`) | EoS |
|---|---|---|
| Outlaw board panel | 0 the job side (1), 1 flips to the outlaw side (4), 2 the outlaw side held (5), 3 flips back (6) | m03a0502: `SetAnimation(18)` + `WaitAnimation` flips it, `11` holds the outlaw side; m03a0506: `11`, then `20` + `WaitAnimation` flips it back, `9` rests |
| Apple | 0-3: EoS's four bounces (1 loops 0; 6 plays 3 once) | m03a0301 / m03d0312: slides to (42, 24.5), `SetAnimation(18)` + `WaitAnimation`, then `Destroy` |
| Board panel from behind | 0 at rest (EoS's first frame), 1 and 2 its two spins (4, 5) | m03a0505: `9` rests, `17` and `18` + `WaitAnimation` spin it (EoS sequences 0 and 1) |
| Time Gear, its glow | 0 (default) | `SetAnimation(3)` (0x300: the first frame held) |
| Totem poles, dojo warp, hole, crumbling rock | 0 (default, looping) | no `SetAnimation` |

The EoS column is read from the scenes (what the panel shows when the partner
says it flipped), not from a rule: by EoS's table values (18 and 20 are
0x1003 and 0x803, 11 is 0x1006) the panel's four sequences are not picked by
`low byte % 4`, so the scenes piece maps these calls by hand.

- **Palettes.** Treasure Town shows totem pole 2 (`t01p01a3`, chapter 1's
  `SKY_OBJ_TOTEM_POLE_2`, extend slot 0x126) beside poles 3 and 4, and a map
  has only two extend slots. So poles 3 and 4 share one extend palette made
  for both: `ornament EOS.nds GROUND/t01p01a2.wan totempole3 --merge-palette
  GROUND/t01p01a4.wan` (new option: 15 colours chosen from both WANs'
  colours, weighted by pixels; mean error 2.9 and 7.5, against 18 to 21 on
  either pole's own palette), then `GROUND/t01p01a4.wan totempole4
  --share-palette totempole3`. The dojo warp, the Time Gear and the crumbling
  rock keep their EoS colours (Red's shared palettes turned the warp's
  purple and the gear's blue wrong); no map shows more than two of the
  own-palette objects. **More than two at once fails**: in the test below,
  a batch that loaded a third and fourth extend palette while two were in
  use reset the game.
- `v03p06a1` / `v03p06a2` animate their palette (frames on WAN palette rows
  1-3); the converter takes row 0. The scenes only hold their first frame
  (`SetAnimation(3)`).
- **Not converted.** `v01p07b1` (the storm clouds, `SetAnimation(18)` in
  m03a1301 / 1303 / 1309 at V03P05C) is chapter 1's lightning, already
  played by `SKY_STORM_BOLT` ([`src/sky_storm.c`](../../src/sky_storm.c)).
  `t01p01a6` is placed only by D41P41A's s22p1401 (a special episode) and
  `v01p05b1` by no script (skytemple cannot read its WAN either): neither is
  in chapter 3. `p01p01a1` (the crossroads, P01P01A layer 7) shows from
  scenario [6, 3]; `g01p09a1` is on G01P09A, which chapter 3 does not visit.
  The `NULL` objects are trigger boxes (the town's signs: T01P01A (14, 22)
  "← Kangaskhan Storage / Kecleon Market" (enter19), (74, 22) "Crossroads →"
  (enter20); T01P02A (13, 22) and (51, 22)).

### Portraits

EoS's faces for the new Red species (`SKY_RED_SPECIES` in
[`tools/make_sky_gen4_portraits.py`](../../tools/make_sky_gen4_portraits.py),
`graphics/portraits_sky/<species>/`): Red's 13 emotions and the extra ones
(Dizzy 13, Sigh 16 and now **Stunned** 17, a word in `EXTRA_EMOTIONS` and in
`SKY_EXTRA_EMOTIONS` of `convert_custom_portraits.py`, for Chatot).

| Species | EoS faces exported | Chapter 3 uses |
|---|---|---|
| Marill | Normal, Teary-Eyed, Joyous, Sigh | Normal, Joyous, Teary-Eyed, Sigh: all there |
| Azurill | Normal, Pained, Teary-Eyed, Joyous, Sigh | Normal, Joyous, Teary-Eyed, Sigh: all there |
| Drowzee | Normal, Happy, Sigh | Normal, Sigh: all there |
| Kecleon | Normal, Angry, Sad | Normal (both brothers): see below |
| Spinda | Normal, Worried, Shouting, Joyous, Surprised, Sigh | Normal, Joyous, Shouting, Sigh: all there |
| Kangaskhan | Normal, Happy | Normal, Happy: all there |
| Magnemite | Normal, Joyous, Surprised | — |
| Grovyle | Normal, Pained, Surprised, Sigh, Stunned | — |
| Magnezone, Bibarel (Gen 4, `graphics/portraits/`) | Normal, Surprised; Normal | Magnezone: Normal |
| Duskull, Marowak, Ursaring, Teddiursa, Vigoroth, Shuppet, Murkrow, Togepi, Politoed, Poochyena | Normal | Normal |
| Chatot | (chapter 2's) and Stunned | Normal, Happy, Pain, Angry, Joyous, Surprised, Sigh, Dizzy, Stunned: all there |
| Bidoof, Loudred, Wigglytuff and the rest of chapter 2's | (chapter 2's) | Bidoof Normal, Sad, Teary-Eyed, Sigh; Loudred Normal, Happy, Angry, Sigh; Wigglytuff Normal, Happy, **Special2** |

Gaps:

- **The purple Kecleon's face.** EoS gives the purple brother his own faces
  (kaomado entry 383, purple scales). Portraits go by species, so KAKUREON2
  (13 Normal faces: m03a0301, m03d0314, the shop) shows the green brother's.
  It needs a per-kind portrait (or the face's palette swapped, as the
  sprite's is).
- **Wigglytuff's Special2** (EoS emotion 18, 3 times in G01P05A's um03 talk):
  no emotion number or scene name for it yet (`emotions.h` stops at
  Stunned), so it shows Normal.

### How it was checked

- Against EoS: for every actor, EoS's model (all ground groups) and the
  converted header, re-read, were compared group by group: the same number
  of groups, and in each group and direction the same frame count and
  durations (0 mismatches over 27 sprites, chapter 2's included). Sheets of
  groups 0, 7 and the ones the scripts use were compared side by side;
  objects with `ornament --check`.
- In mGBA: a throwaway build (`DEBUG_BOOT_EVENT=EVENT_DIVIDE`) showed the new
  actors on chapter 1's guild map instead of the storm, five at a time
  (Marill to the purple Kecleon, Bibarel to Duskull, Kangaskhan to Vigoroth,
  Shuppet to Poochyena, then Spinda with chapter 2's Bidoof, Dugtrio, Chatot
  and Loudred), then the objects in two batches. Each actor walked a square
  (east, south, west, north), stood and played the ids above (Drowzee's
  `SELECT_ANIMATION 53` slumps in the Hurt pose, Grovyle's 22 is the
  silhouette, the purple Kecleon is purple). The panel rested, flipped, held
  the outlaw side and flipped back; the apple bounced; the panel from behind
  rested and spun both ways; the poles showed EoS's colours on their shared
  palette; the warp, the gear (blue), its glow and the rock played.
