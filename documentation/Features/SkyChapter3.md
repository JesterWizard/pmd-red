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
