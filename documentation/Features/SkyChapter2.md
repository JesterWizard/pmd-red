# Sky demake: chapter 2 plan

Explorers of Sky's chapter 2, "The New Guild Recruits", on the GBA, as close
to EoS as a 240x160 screen allows. Work in progress; this file is the plan
and the naming contract the pieces share. Chapter 1 is in
[SkyDemake.md](SkyDemake.md); scene files in [../EventEditor.md](../EventEditor.md).

## What EoS plays

From `SCRIPT/COMMON/unionall.ssb` (coroutines `EVENT_M02_*`) and the
`m02*` / `c00*` scripts (decompiled with skytemple-files):

| Step | Coroutine | Scripts (level) | What happens |
|---|---|---|---|
| 1 | EVENT_M02_01_02 | m02a0101 (g01p01b), m02a0104 (v02p03a), m02a0105 (g01p01b), m02a0106 (g01p02a), m02a0108 (g01p03a), m02a0109 (g01p04a), m02a0110 (g01p05a), m02a0111 (g01p07a) | Chapter card; the sentry check ("The footprint is...!"); into the guild; Chatot; down to B2F; Wigglytuff; team naming; the Exploration Team kit; the crew room |
| 2 | EVENT_M02_01_02 | m02a0113 (g01p07c), m02a0201 (g01p07a), m02a0202 (g01p04a) | Good night (save); Loudred's wake-up; the morning address |
| 3 | station G01P04A | free roam in the guild | |
| 4 | EVENT_M02_03_04 | m02a0301 (g01p04a), m02a0302 (g01p03a), m02a0401 (d02p11a) | "Don't wander"; the job bulletin board: Spoink's pearl; Drenched Bluff's entrance |
| 5 | dungeon | Drenched Bluff (EoS dungeon 3) | to the end floor |
| 6 | EVENT_M02_09_10 | m02a0801 (d02p31a), m02a1001 (g01p03a), c00a0501 (g01p04a), c00a0601 (g01p06b), m02a1003 (g01p07c) | The pearl; job clear; dinner; good night; EVENT_DIVIDE (chapter 3) |
| fail | EVENT_M02_05_07A / 07B | m02a0501, m02a0601-0603, c00a0101-0301, m02a0701 | Fainted in Drenched Bluff: scolded, next day, back to the bluff |
| stop | d02p31a | m02a0901 | "It's impossible to go any farther." |

`m02d0112` (g01p01b) is the sentry's re-check when you come back.

## Naming contract

New ids are added under `#ifdef SKY_STORY` like chapter 1's.

### Ground maps (`include/constants/ground_map.h`, stem `E` + level)

| EoS level | Map id | Notes |
|---|---|---|
| g01p01b | `MAP_SKY_GUILD_ENTRANCE` | gate open (chapter 1 has g01p01b2 as `MAP_SKY_GUILD_DUSK`) |
| g01p02a | `MAP_SKY_GUILD_1F` | |
| g01p03a | `MAP_SKY_GUILD_B1F` | bulletin boards |
| g01p04a | `MAP_SKY_GUILD_B2F` | |
| g01p04a2 | `MAP_SKY_GUILD_B2F_DOOR` | variant (BMA only) |
| g01p04c | `MAP_SKY_GUILD_B2F_NIGHT` | |
| g01p05a | `MAP_SKY_GUILD_WIGGLYTUFF` | Wigglytuff's room |
| g01p05c | `MAP_SKY_GUILD_WIGGLYTUFF_NIGHT` | |
| g01p06b | `MAP_SKY_GUILD_MESS_HALL` | |
| g01p07a | `MAP_SKY_GUILD_CREW_ROOM` | |
| g01p07c | `MAP_SKY_GUILD_CREW_ROOM_NIGHT` | |
| d02p11a | `MAP_SKY_DRENCHED_BLUFF_ENTRANCE` | |
| d02p31a | `MAP_SKY_DRENCHED_BLUFF_END` | |

Second-screen pictures (`back2_SetGround`) become story CGs
(`events/sky/cutaways.cfg`): v01p08b, v02p01a (exists: GUILD_SKY), v02p02a,
v02p03a (the sentry's footprint screen), v02p06a, v02p08a.

### Ground actors (`include/sky_story.h`, `SKY_LIVES_*`, EoS sprites)

| EoS actor | Species | Kind |
|---|---|---|
| NPC_PERAPPU | Chatot | `SKY_LIVES_CHATOT` |
| NPC_PUKURIN | Wigglytuff | `SKY_LIVES_WIGGLYTUFF` (exists) |
| NPC_DOGOOMU | Loudred | `SKY_LIVES_LOUDRED` |
| NPC_DIGUDA | Diglett | `SKY_LIVES_DIGLETT` (exists) |
| NPC_DAGUTORIO | Dugtrio | `SKY_LIVES_DUGTRIO` |
| NPC_KIMAWARI | Sunflora | `SKY_LIVES_SUNFLORA` |
| NPC_BIPPA | Bidoof | `SKY_LIVES_BIDOOF` |
| NPC_CHIRIIN | Chimecho | `SKY_LIVES_CHIMECHO` |
| NPC_HEIGANI | Corphish | `SKY_LIVES_CORPHISH` |
| NPC_GUREGGURU | Croagunk | `SKY_LIVES_CROAGUNK` |
| NPC_BANEBUU | Spoink | `SKY_LIVES_SPOINK` |
| NPC_KEMUSSO, NPC_OOSUBAME, NPC_POPPO, NPC_REDIBA, NPC_TANEBOO | Wurmple, Swellow, Pidgey, Ledyba, Seedot | `SKY_LIVES_WURMPLE`, `_SWELLOW`, `_PIDGEY`, `_LEDYBA`, `_SEEDOT` |

Ground objects: `g01p05a1`, `g01p06b1`, `d02p31a1` (the pearl?) as
`SKY_OBJ_*` named after what they are.

### Music

`BGM_WIGGLYTUFFS_GUILD`, `BGM_WIGGLYTUFFS_GUILD_REMIX`,
`BGM_GUILDMASTER_WIGGLYTUFF`, `BGM_GOODNIGHT`, `BGM_EATING`,
`BGM_DRENCHED_BLUFF`, `BGM_JOB_CLEAR` (and chapter 1's
`BGM_FIRE_CRACKLING_LOUDER`, `BGM_IN_THE_DEPTHS_OF_THE_PIT`) are already
converted in the Sky Jukebox range; the story uses them as `MUS_SKY_*` ids.

## Maps and CGs (piece 1: done)

### Ground maps

Converted with `tools/convert_eos_ground_map.py EOS.nds LEVEL STEM` and
registered like chapter 1's (SkyDemake.md, [EoS maps](SkyDemake.md#eos-maps)).
Every one renders pixel-identical to skytemple's render of the EoS level
(`--compare`, BPA frame 0) and was looked at in the emulator over a 3x3 grid
of camera views (each view equal to the render, animated tiles aside).
"Tiles" is the map's tile pool (+ animated BPA tiles in their VRAM slots);
"view" is the most distinct tiles one screen of a streamed map needs (the
VRAM pool is 1023).

| Map id | Files | EoS level | Tiles | Animation | Collision |
|---|---|---|---|---|---|
| `MAP_SKY_GUILD_ENTRANCE` | `EG0101B` | g01p01b | 878 + 78 (VRAM) | torches (BPA) | EoS's |
| `MAP_SKY_GUILD_1F` | `EG0102A` | g01p02a | 752 (VRAM) | none in EoS | EoS's |
| `MAP_SKY_GUILD_B1F` | `EG0103A` | g01p03a | 1984 (streamed, view 854) | none in EoS | EoS's |
| `MAP_SKY_GUILD_B2F` | `EG0104A` | g01p04a | 1982 (streamed, view 680) | none in EoS | EoS's |
| `MAP_SKY_GUILD_B2F_DOOR` | `EG0104A`, `EG0104Ac`, `EG0104A2m` | g01p04a2 | 1982 (streamed, view 686) | none in EoS | EoS's |
| `MAP_SKY_GUILD_B2F_NIGHT` | `EG0104C` | g01p04c | 1982 (streamed, view 680) | none in EoS | EoS's |
| `MAP_SKY_GUILD_WIGGLYTUFF` | `EG0105A` | g01p05a | 734 + 24 (VRAM) | BPA kept | EoS's |
| `MAP_SKY_GUILD_WIGGLYTUFF_NIGHT` | `EG0105C` | g01p05c | 734 + 24 (VRAM) | braziers (BPA) kept | EoS's |
| `MAP_SKY_GUILD_MESS_HALL` | `EG0106B` | g01p06b | 1336 (streamed, view 752) | BPA: frame 0 baked | EoS's |
| `MAP_SKY_GUILD_CREW_ROOM` | `EG0107A` | g01p07a | 763 (VRAM, one layer) | none in EoS | EoS's |
| `MAP_SKY_GUILD_CREW_ROOM_NIGHT` | `EG0107C`, `EG0107Ac`, `EG0107Am` | g01p07c | 763 (VRAM, one layer) | palette animation left out | EoS's |
| `MAP_SKY_DRENCHED_BLUFF_ENTRANCE` | `ED0211A` | d02p11a | 1268 (streamed, view 646) | none in EoS | none (EoS has none) |
| `MAP_SKY_DRENCHED_BLUFF_END` | `ED0231A` | d02p31a | 2313 (streamed, view 971) | BPA: frame 0 baked | none (EoS has none) |

- **Shared files, as EoS shares them.** g01p01b and chapter 1's g01p01b2
  are two BMAs over one BPC, BPL and BPA: `EG0101B` (bpl, c.bpc, 1.bpa,
  m.bma) is g01p01b, and `MAP_SKY_GUILD_DUSK` now takes its BMA from
  `EG0101B2m` (chapter 1's gate-closed BMA, renamed; same bytes). g01p04a2
  is g01p04a's BPC and BPL with its own BMA (`EG0104A2m`: the door, 6
  chunks, 14 collision tiles). g01p07c is g01p07a's BPC and BMA with its own
  BPL (`EG0107C.bpl`). g01p04c and g01p05c have their own BPCs in EoS (26 and
  2 tiles differ from the day maps) and BMAs whose collision differs, so they
  are separate files.
- **Dropped.** The mess hall's and the bluff end's BPA animations (streamed
  maps have no animated slots; frame 0 is baked in). g01p07c's BPL has a
  32-step palette animation at 1 frame a step (dark, then brighter than the
  base, then back): played as a loop, as the engine plays map palette
  animations, it strobes the room every half second (seen in the emulator),
  and no chapter-2 script starts or stops it, so the room is converted with
  `--no-palette-animation` (the base palettes; colours otherwise identical).
- **The bluff end** needs 2313 tiles with flips baked (EoS: 1339), past the
  streamer's old 2048. The sky build now allocates the streamer's
  source-to-slot table from the heap (2 bytes a tile, while a map streams)
  instead of a static 2048-entry table in EWRAM (4 KB of EWRAM freed), and
  takes up to 4096 tiles. One screen of it needs up to 971 of the 1023 VRAM
  slots; after a camera jump the slot allocator used to scan the whole pool
  for every tile (a second of lag per `SKY_CAMERA_SET`); now, once a remap
  has found no aged slot, it takes the next unstamped one
  (`sNoAgedSlotClock`, sky build only). A jump costs 1-2 frames.
- **No collision** in EoS's d02p11a / d02p31a (cutscene maps), so none here.

### Station: gs180

`gMapScriptTable` points every chapter-2 map at **gs180** (Red's Thunderwave
Cave entrance, `src/data/ground/sky/ground_data_d02p01_station.h`, which the
sky build did not use). Its scenes are
[`events/sky/scenes/sky_d02p01_scenes.scene`](../../events/sky/scenes/sky_d02p01_scenes.scene):
for now one placeholder group (group 0, an `ENTER_CONTROL` station that
selects `MAP_SKY_GUILD_B2F`), so `SELECT_MAP` of any chapter-2 map works.
The scenes piece replaces it. `MAP_THUNDERWAVE_CAVE_ENTRY` itself keeps no
script in the sky build.

### Objects EoS places (for the sprites piece)

From each level's `SCRIPT/<LEVEL>/enter.sse`, layer 0 (always on the map);
positions in tiles, as the scene files write them. `NULL_6` objects are
invisible: a hitbox the player talks to (a sign or a board), with the
`enterNN.ssb` script it runs. No sprites to convert for those.

| Level | Object | Position | Hitbox | What |
|---|---|---|---|---|
| g01p01b | `t01p01a1_174` | (18, 22.5) | 2x1 | totem pole (chapter 1's `SKY_OBJ_TOTEM_POLE_1`) |
| g01p01b | `t01p01a3_176` | (42, 22.5) | 2x1 | totem pole (`SKY_OBJ_TOTEM_POLE_2`) |
| g01p02a | `NULL_6` | (19.5, 24.5) | 5x1 | sign: "Ten Rules for Exploration Teams" (enter07) |
| g01p02a | `NULL_6` | (33.5, 24.5) | 5x1 | sign: "Welcome! Wigglytuff's Guild!" (enter08) |
| g01p03a | `NULL_6` | (31.5, 22.5) | 5x5 | bulletin board (enter11) |
| g01p03a | `NULL_6` | (55.5, 22.5) | 5x5 | bulletin board (enter12) |
| g01p03a | `NULL_6` | (22.5, 31.5) | 5x1 | the guild's notice board, `MENU_GUILD_F_A_Q_BOARD` (enter13) |
| g01p04a | `NULL_6` | (4.5, 32.5) | 5x1 | sign: "← Mess Hall" (enter24) |
| g01p04a | `NULL_6` | (76.5, 32.5) | 5x1 | sign: "Crew Rooms →" (enter25) |
| g01p07a | `NULL_6` | (7.5, 21.5) | 5x1 | sign: "GET UP ALREADY! -Loudred" (enter07) |

g01p04c, g01p05a, g01p05c, g01p06b, g01p07c, d02p11a and d02p31a place no
objects (g01p04a2 has no enter.sse). enter.sse also has the exits (event
triggers: g01p02a (21, 31) 9x2 and (24, 20) 3x2; g01p03a (40, 14) 3x2 and
(44, 21) 4x1; g01p04a (39, 11) 3x2, (0, 31) 2x7, (50, 21) 5x2, (79, 31) 2x7;
g01p05a (18, 43) 15x2; g01p07a (0, 19) 2x7, and (24, 21) 3x3 on layer 5: the
beds) and, on g01p04a, Croagunk (`NPC_GUREGGURU`, layer 99, (28.5, 27.5),
script 5) and Chatot / Loudred (layer 10, (21, 11.5)).

Objects the chapter's scenes place (their `.ssa`, not enter.sse):
`g01p01a3_95` (g01p01b (30, 18), m02a0105: animations 9 and 17, the gate),
`g01p05a1_106` (g01p05a (25.5, 27.5), m02a0110: the Exploration Team Kit's
box, animation 18), `g01p06b1_107` (g01p06b (32, 26.5), c00a0601),
`d02p31a1_17` (d02p31a (30, 23), m02a0801).

### Story CGs

Rendered with skytemple and cropped to 240x160 by
[`tools/make_sky_cutaways.py`](../../tools/make_sky_cutaways.py) (`EOS.nds`),
in [`events/sky/cutaways.cfg`](../../events/sky/cutaways.cfg); each was
looked at in the emulator (`SKY_CUTAWAY`).

| CG | Id | EoS level | Script | Crop centre (px) |
|---|---|---|---|---|
| `GUILD_SKY` (chapter 1's) | 4 | v02p01a | m02a0101, m02a0105, m02d0112 | |
| `GUILD_GATE` | 15 | v01p08b | m02a0101 | (128, 204) |
| `SENTRY_GRATE` | 16 | v02p02a | m02a0101 | (156, 140): camera2 m2 (19.5, 17.5) |
| `SENTRY_POST` | 17 | v02p03a | m02a0104 | (128, 508) |
| `NIGHT_SKY` | 18 | v02p06a | m02a0113, m02a1003 | (156, 124): camera2 m0 (19.5, 15.5) |
| `EXPLORATION_KIT` | 19 | v02p08a | m02a0110 | (128, 108): performer 0 of layer 2 |

v02p02a and v02p06a are top-screen pictures (`back2_SetGround`). v01p08b,
v02p03a and v02p08a are main-screen levels (`back_SetGround`, the camera on
performer 0). v01p08b and v02p03a are tall pictures EoS shows over both
screens (`back2_SetMode(5)`, used only by these two scripts), so their crop
sits above the bottom screen's centre: the gate at the seam (Wigglytuff's
face over the bars; the camera ends at (128, 300) after rising 32 px); the
sentry post 48 px up, so the floor Diglett stands on (y 548) shows under the
shaft. EoS plays m02a0104 *on* v02p03a: the camera pans 256 px down the shaft
(from (128, 300) to m0 (16, 69.5)) and Diglett is an actor there. As a CG
the GBA shows the pan's end without him; if the scene needs him, v02p03a can
be converted as a ground map instead (33x87 tiles).

## Pieces

1. Maps and CGs.
2. Sprites (ground actors and objects).
3. Drenched Bluff (dungeon, tileset, enemies, items, the pearl).
4. Scenes: an ExplorerScript to `.scene` translator, then the chapter's scenes.
5. Flow: the chapter-1 demo end becomes chapter 2's start; events, flags,
   team naming, the chapter card, free roam, the faint path; chapter 2 ends
   with "The demo ends here."
6. Tests in the regression suite.
