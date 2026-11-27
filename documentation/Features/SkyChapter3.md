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
- **Objects**: g01p03a1, p03p02a1, v03p03a1/a2, v03p06a1/a2, v03p11a1,
  v01p07b1 (chapter 1's); the Treasure Town totem poles t01p01a2-a4 (see
  [Maps and CGs](#what-each-levels-entersse-places-for-the-sprites-piece);
  t01p01a2/a4/a6, t01p04a1 and v01p05b1 were skytemple's SSA reader's
  names for objects 191-200).
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

## Maps and CGs (piece 1: done)

Same pipeline as chapter 2's ([SkyChapter2.md](SkyChapter2.md#maps-and-cgs-piece-1-done)):
`tools/convert_eos_ground_map.py`, registered under `#ifdef SKY_STORY` as in
[SkyDemake.md, EoS maps](SkyDemake.md#eos-maps). Every map renders
pixel-identical to skytemple's render of the EoS level (`--compare`, BPA
frame 0; the two cropped ones against the same crop) and was looked at in
the emulator over a 3x3 grid of camera views: every view equal to the
render, except where BPA tiles or palette animations had moved on (the
animated maps below). The regression check `sky_map_files` covers them.

### Ground maps

| Map id | Files | EoS level | What | Tiles | Animation | Collision |
|---|---|---|---|---|---|---|
| `MAP_SKY_TREASURE_TOWN_SQUARE` | `ET0101A` | t01p01a | Treasure Town's main square, the east half (EoS: "TOWN_RIGHT"): Duskull Bank, Electivire Link Shop, Chansey Day Care, Marowak Dojo; the crossroads to the east | 1749 (streamed, view 517) | river BPA (155 tiles x 4): frame 0 baked | EoS's |
| `MAP_SKY_TREASURE_TOWN_WEST` | `ET0102A` | t01p02a | the west half, over the river: Kecleon Market, Kangaskhan Storage, Xatu's building | 902 + 75 (VRAM) | river BPA kept | EoS's |
| `MAP_SKY_CROSSROADS` | `EP0101A` | p01p01a | the crossroads (Spinda's Café under construction, Chimecho's Assembly post) | 785 + 64 (VRAM) | BPA kept | EoS's |
| `MAP_SKY_BEACH_PATH` | `EP0102A` | p01p02a | the path from the crossroads down to the beach (`MAP_SKY_BEACH_DAY`) | 232 + 6 (VRAM) | BPA kept | EoS's |
| `MAP_SKY_GUILD_ENTRANCE_DAY` | `EG0101A` | g01p01a | Wigglytuff's Guild by day | 877 + 23 (VRAM) | torches (BPA) kept | EoS's |
| `MAP_SKY_MT_BRISTLE_ENTRANCE` | `ED0311A` | d03p11a | Mt. Bristle's foot | 1007 (VRAM) | none in EoS | none (EoS has none) |
| `MAP_SKY_MT_BRISTLE_PEAK` | `ED0341A` | d03p41a | the peak (one layer) | 533 (VRAM) | none in EoS | none |
| `MAP_SKY_BIDOOF_HOME` | `EP1501A` | p15p01a, chunks (0, 0) 19x12 | Bibarel's lodge, Bidoof's family (m03a1002's "Special Episode unlocked" picture) | 833 + 117 (VRAM) | water BPA kept | none |
| `MAP_SKY_DUGTRIO_TUNNEL` | `EV0303A` | v03p03a | behind the boards: Dugtrio's tunnel (m03a0505) | 459 (VRAM) | none | none |
| `MAP_SKY_STORM_CLOUDS` | `EV0305C` | v03p05c | storm clouds (m03a1301, 1303, 1309; one layer) | 978 (streamed, view 744) | none | none |
| `MAP_SKY_TIME_GEAR_FOREST` | `EV0306A` | v03p06a | a Time Gear in a forest (m03a1305, 1313) | 2070 (streamed, view 987) | none | none |
| `MAP_SKY_TIME_GEAR_LAKE` | `EV0307A` | v03p07a | a Time Gear at an underground lake (m03a1306) | 834 (VRAM) | palette 9 (32 frames of 8) kept | none |
| `MAP_SKY_TIME_GEAR_VOLCANO` | `EV0308A` | v03p08a | a Time Gear in a volcano (m03a1307) | 1021 (VRAM) | palettes 12, 13 kept | none |
| `MAP_SKY_TIME_FLOW` | `EV0309A` | v03p09a, chunks (1, 2) 11x8 | time flowing around a Time Gear (m03a1308) | 889 (VRAM) | palettes 0-8 (19 frames of 4) kept | none |
| `MAP_SKY_GROVYLE_RUN` | `EV0311A` | v03p11a | the dream: Grovyle running through the rain (m03a1310, 1312) | 1039 (streamed, view 803) | none | none |
| `MAP_SKY_GROVYLE_CLOSEUP` | `EV0312A` | v03p12a | the dream: Grovyle close up and as a silhouette, side by side (m03a1314) | 1195 (streamed, view 582) | none | none |

- **Which levels.** The chapter's scripts (`back_SetGround`, the
  coroutines' `supervision_ExecuteActingSub` levels) and the free roam's
  exits. The chapter-2 maps (g01p03a, g01p04a, g01p06b, g01p07c, ...) are
  reused. In chapter 3 EoS's free roam reaches t01p01a, t01p02a, p01p01a,
  p01p02a (and from there the beach, chapter 1's `MAP_SKY_BEACH_DAY`),
  g01p01a and the guild: the crossroads' east exit says "We can't take any
  detours" before scenario (4, 5) (`P01P01A/enter04`); the Dojo's door
  (t01p01a (59, 41)) only reads its notice before (6, 0)
  (`T01P01A/enter03`), so t01p03a / t01p04a (the Dojo inside, separate
  levels) are not converted; the shops have no inside levels (their keepers
  stand at the counters on the town map). t01p02a's west exit ("← Sharpedo
  Bluff") goes to `LEVEL_H01P99A`; no chapter-3 script plays at Sharpedo
  Bluff, so it is not converted. g01p01a2 (g01p01a's second BMA) is not
  used by chapter 3.
- **s04p01a is not a map.** It is EoS's black level (26-byte BPC, three
  tiles) for voices in the dark (c00a0701, c00a1701, m03d0313, m03a0701);
  the translator already plays it as chapter 1's `MAP_SKY_STORM_SEA`, hidden
  (`tools/event_editor/eos_import.py`).
- **p15p01a** is the picture m03a1002 ends on: Bidoof, Bibarel and Bidoof's
  brother and sister in front of their lodge while "The Special Episode
  'Bidoof's Wish' has been unlocked!" shows (actors on the scene's layer 10,
  camera on performer 0 at (37, 22), `back_SetBackEffect(4)`). EoS's BMA is
  60x40 chunks with only the top-left 19x12 drawn; `--crop-chunks 0 0 19
  12` keeps that (456x288 px), which also keeps the collision scratch small.
  Whether the demake shows it (it has no special episodes) is the scenes
  piece's call.
- **v03p09a is cropped** to chunks x 1-11, y 2-9 (`--crop-chunks 1 2 11 8`,
  264x192 px): EoS's whole picture needs 1040 distinct tiles (VRAM has
  1023) and, streamed with flips baked, 1184 in one screen. The crop is the
  part m03a1308's camera shows (m0 (19.5, 17.5) becomes (16.5, 11.5) in the
  crop) and fits VRAM with 889 tiles, so its palette animation and flips
  stay. Its animated palettes (0-8) are the lower layer's, which the static
  upper layer (palette 9) covers: on the GBA the palette RAM animates but
  the picture does not move (seen in the emulator). EoS shows the level with
  `back_SetEffect(5, 0)` and `back_SetBackEffect(2)`, presumably blending
  the two layers; the scenes piece should check that in EoS and blend BG2
  over BG3 (BLDCNT) to match.
- **Dropped**: t01p01a's river and waterfall BPA (155 tiles x 4 frames):
  with it the square needs 1210 tiles, past VRAM, and streamed maps have no
  animated slots, so frame 0 is baked in (the river stands still on the
  square; on t01p02a, in VRAM, it flows). Nothing else.
- **Converter**: `--crop-chunks X Y W H` (new) keeps that rectangle of the
  EoS BMA (layers, collision) and pools only the tiles its chunks use.

### Station: gs181

`gMapScriptTable` points every chapter-3 map at **gs181** (Red's
Thunderwave Cave end, `src/data/ground/sky/ground_data_d02p02_station.h`,
which the sky build did not use; chapter 2 has gs180, the cave's entrance).
Its scenes are
[`events/sky/scenes/sky_d02p02_scenes.scene`](../../events/sky/scenes/sky_d02p02_scenes.scene):
for now one placeholder group (group 0, an `ENTER_CONTROL` station that
selects `MAP_SKY_TREASURE_TOWN_SQUARE`). The scenes piece replaces it.
`MAP_THUNDERWAVE_CAVE_END` itself keeps no script in the sky build.

### What each level's enter.sse places (for the sprites piece)

From `SCRIPT/<LEVEL>/enter.sse`; positions in tiles as the scene files write
them. Object names follow the ROM's object table (`OBJECT_<SPRITE>_<id>` in
the decompiled scripts); skytemple's SSA reader names some objects after
another table (`t01p01a4_193` for `v03p03a1_193`, `t01p04a1_196` for
`v03p06a1_196`, ...). `NULL_6` objects are invisible hitboxes (signs) with
the `enterNN.ssb` they run. Layer 99 holds the NPCs the station shows;
layers 1-5 are the player's entry points, 21+ and 41+ the special episodes'
(Bidoof's, Sunflora's).

| Level | Kind | Name | Position | Hitbox / dir | What |
|---|---|---|---|---|---|
| t01p01a | object | `t01p01a3_176` | (73, 36) | 2x1 | totem pole (chapter 1's `SKY_OBJ_TOTEM_POLE_2` sprite) |
| t01p01a | object | `t01p01a4_177` | (77, 36) | 2x1 | totem pole |
| t01p01a | object | `t01p01a2_175` | (81, 36) | 2x1 | totem pole |
| t01p01a | sign | `NULL_6` | (15, 23) | 3x1 | "All Your Item Needs Fulfilled! ← Kangaskhan Storage, Kecleon Market" (enter19) |
| t01p01a | sign | `NULL_6` | (75, 23) | 3x1 | "Crossroads →" (enter20) |
| t01p01a | NPC | `NPC_YOMAWARU` (Duskull) | (65, 21) | down, script 5 | Duskull Bank |
| t01p01a | NPC | `NPC_EREKIBURU` (Electivire) | (23, 21) | down, script 6 | Electivire Link Shop ("isn't around today" in m03a0107) |
| t01p01a | NPC | `NPC_RAKKII` (Chansey) | (34, 45) | down, script 7 | Chansey Day Care |
| t01p02a | object | `t01p01a3_176`, `t01p01a4_177`, `t01p01a2_175` | (3, 36), (7, 36), (11, 36) | 2x1 | the same three totem poles, at the bridge |
| t01p02a | sign | `NULL_6` | (14, 23) | 3x1 | "← Sharpedo Bluff" (enter16) |
| t01p02a | sign | `NULL_6` | (52, 23) | 3x1 | "Move Linking and Banking Services This Way → Electivire Link Shop, Duskull Bank" (enter17) |
| t01p02a | NPC | `NPC_KAKUREON1`, `NPC_KAKUREON2` (the Kecleon brothers) | (41, 21), (44, 21) | down, scripts 12, 11 | Kecleon Market |
| t01p02a | NPC | `NPC_GARUURA` (Kangaskhan) | (23, 21) | down, script 10 | Kangaskhan Storage |
| t01p02a | NPC | `NPC_NEITYIO` (Xatu) | (30, 44) | down, script 9 | Xatu's building |
| p01p01a | sign | `NULL_6` | (18, 19) | 5x1 | "↑ Wigglytuff's Guild, ← Treasure Town, Exploration →, ↓ Beach" (enter24) |
| p01p01a | object | `p01p01a1_122` | (39, 20) | 2x1 | Chimecho's Assembly sign (layers 7, 8, 13: later chapters); a `NULL_6` there runs enter27, "Assembly Post, ring bell" |
| p01p01a | sign | `NULL_6` | (22, 29) | 3x1 | Spinda's Café "Opening Soon!" (layer 10, enter41) |
| p01p01a | NPC | `UNIT_NPC1`-`4` | (48, 21), (44, 22), (45, 28), (34, 20) | scripts 20-23 | passers-by (layer 6, later chapters) |
| g01p01a | object | `t01p01a1_174`, `t01p01a3_176` | (18, 23), (42, 23) | 2x1 | the guild's totem poles (`SKY_OBJ_TOTEM_POLE_1` / `_2`) |

Exits (event triggers, layer 0): t01p01a (82, 21) 2x13 → p01p01a, (0, 21)
2x10 → t01p02a, (59, 41) 6x2 the Dojo's door; t01p02a (67, 21) 2x10 →
t01p01a, (0, 21) 2x13 → H01P99A (Sharpedo Bluff); p01p01a (22, 2) 10x2 →
g01p01a, (5, 54) 45x3 → p01p02a, (0, 18) 3x10 → t01p01a, (51, 17) 3x14
exploration (closed); p01p02a (0, 21) 3x20 → d01p11a (the beach), (17, 0)
20x4 → p01p01a; g01p01a (27, 17) 6x2 into the guild, (26, 49) 8x2 →
p01p01a. p01p02a, d03p11a and d03p41a place no objects or NPCs (d03p11a's
and d03p41a's enter.sse has only the `ENTER_CONTROL` trigger).

Objects the chapter's scenes place (their `.ssa`): `v03p03a1_193` (the
board's revolving panel, animations 9, 17, 18) and `v03p03a2_195`
(Dugtrio's hole) on v03p03a (m03a0505); `v01p07b1_191` (chapter 1's storm
cloud and lightning, animation 18) on v03p05c; `v03p06a1_196` (the Time
Gear) and `v03p06a2_200` (its glow), animation 3, on v03p06a (26, 15),
v03p07a (20, 13) and v03p08a (20, 15); `v03p11a1_204` on v03p11a
(m03a1312); `g01p03a1_100` on g01p03a (m03a0502, m03a0506: animation 11);
`p03p02a1_128` on t01p02a (m03a0301, m03d0312). Actors there: Dugtrio,
Swellow, Wurmple (v03p03a); Grovyle (`NPC_JUPUTORU`, v03p06a, v03p11a);
Bidoof, Bibarel and Bidoof's brother and sister (p15p01a, m03a1002 layer 10).

### Story CGs and the v03 levels

| EoS level | How EoS shows it | Demake | Why |
|---|---|---|---|
| v03p01a | top screen (`back2_SetGround`), m03a0102 / m03a0502 / m03a0506 | CG `OUTLAW_BOARD` (20) | a still picture |
| v03p02a | top screen, m03a0502 / m03a0506 | CG `OUTLAW_BOARD_FLIPPED` (21) | a still picture |
| v03p04a | top screen, m03a0506 | CG `DROWZEE_POSTER` (22) | a still picture |
| v03p03a | main screen, m03a0505 | map `MAP_SKY_DUGTRIO_TUNNEL` | Dugtrio walks in and out, Swellow and Wurmple react, the panel object turns |
| v03p05c | main screen, m03a1301 / 1303 / 1309 | map `MAP_SKY_STORM_CLOUDS` | the lightning object and EoS's heavy rain over it |
| v03p06a | main screen, m03a1305 / 1313 | map `MAP_SKY_TIME_GEAR_FOREST` | the Time Gear objects; Grovyle walks up and takes it (1313) |
| v03p07a | main screen, m03a1306 | map `MAP_SKY_TIME_GEAR_LAKE` | the Time Gear objects; palette animation |
| v03p08a | main screen, m03a1307 | map `MAP_SKY_TIME_GEAR_VOLCANO` | the Time Gear objects; palette animation |
| v03p09a | main screen, m03a1308 | map `MAP_SKY_TIME_FLOW` (cropped) | palette animation (with EoS's layer effect, above) |
| v03p11a | main screen, m03a1310 / 1312 | map `MAP_SKY_GROVYLE_RUN` | Grovyle runs; `back_SetBackScrollSpeed(-12, 0)` scrolls the background; rain |
| v03p12a | main screen, m03a1314 | map `MAP_SKY_GROVYLE_CLOSEUP` | the camera cuts between the two halves (marks m0-m6 at x 21 and 60) with white flashes |

v03p06b and v03p13a are not used by chapter 3. The CGs are cropped at
EoS's camera2 marks (all (19.5, 16.5): 240x160 around (156, 132)) by
[`tools/make_sky_cutaways.py`](../../tools/make_sky_cutaways.py) and were
looked at in the emulator (`SKY_CUTAWAY`): each pixel-identical to its PNG.

**Heap.** A CG is decompressed into one heap buffer (0x1000 + 64 bytes a
tile) while the ground map stays loaded. EoS shows these three over g01p03a
(`MAP_SKY_GUILD_B1F`: 107.5 KB of the 144 KB heap in use, no actors
counted); Treasure Town's square uses 108.6 KB. A 600-tile picture (42 KB)
does not fit there and the game resets (seen in the emulator over the
square; `EXPLORATION_KIT`, 528 tiles, just fits). So these three keep to
480 tiles (34 KB): `make_sky_cutaways.py` reduces them (`reduce_tiles`:
the closest tiles in RGB, flips allowed, merge first) and writes the
reduced picture as the PNG, so the PNG is what the GBA shows. Over the
square they come up and the map comes back. Heap in use per map, measured
on the test ROM: guild B1F 107.5 KB, B2F 106.4 KB, the square 108.6 KB, Mt.
Bristle's peak 113 KB (its 87x81-tile collision scratch), the other
chapter-3 maps 93-105 KB. A CG over a busy streamed map needs that room
(actors' memory comes on top).
