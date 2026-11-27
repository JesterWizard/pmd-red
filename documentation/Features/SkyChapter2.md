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

Ground objects (`SKY_OBJ_*`, `include/sky_story.h`): `g01p01a3` the guild's
gate `SKY_OBJ_GUILD_GATE`, `g01p05a1` the Exploration Team Kit
`SKY_OBJ_EXPLORATION_KIT`, `g01p06b1` the mess hall's dinner
`SKY_OBJ_DINNER`, `d02p31a1` Spoink's pearl `SKY_OBJ_PEARL`. The kinds, the
sprites, the animation ids and the portraits are in [Sprites](#sprites).

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
2. Sprites (ground actors and objects): done, see [Sprites](#sprites).
3. Drenched Bluff (dungeon, tileset, enemies, items, the pearl).
4. Scenes: an ExplorerScript to `.scene` translator, then the chapter's scenes.
5. Flow: the chapter-1 demo end becomes chapter 2's start; events, flags,
   team naming, the chapter card, free roam, the faint path; chapter 2 ends
   with "The demo ends here."
6. Tests in the regression suite.

## Sprites

### Ground actors

Kinds continue chapter 1's (`SKY_LIVES_KIND_FIRST` 147, table
`sSkyLivesTypeData` in [`src/ground_lives.c`](../../src/ground_lives.c)). Every
species is EoS's sprite, converted by
[`tools/convert_eos_wan_to_ax.py`](../../tools/convert_eos_wan_to_ax.py) with
`--ground-groups all`: Red's 13 groups first (EoS's dungeon set; where EoS's
ground set has the same group, its frames are the same) and then every EoS
ground-only group at its EoS index, so EoS's `SetAnimation` ids pick EoS's
poses. Red species get new `<name>sky` headers that replace Red's sprite in
the sky build only ([`src/monster_files_table.c`](../../src/monster_files_table.c);
Red's copy is left out of the sky link, as Zubat's and Koffing's are). The
three Gen 4 species' headers are regenerated in place. Each sprite is on the
species' Red overworld palette (`--palette`; the converter's own pick
agrees for all of them).

| Kind | No. | EoS actor | Sprite | Groups (ground-only) | Palette |
|---|---|---|---|---|---|
| `SKY_LIVES_WIGGLYTUFF` | 149 | NPC_PUKURIN | `gAxWigglytuffsky` (was Red's) | 18 (13-17) | 1 |
| `SKY_LIVES_DIGLETT` | 151 | NPC_DIGUDA | `gAxDiglettsky` (was Red's) | 17 (13-16) | 4 |
| `SKY_LIVES_CHATOT` | 152 | NPC_PERAPPU | `gAxChatot` | 26 (13-25) | 5 |
| `SKY_LIVES_LOUDRED` | 153 | NPC_DOGOOMU | `gAxLoudredsky` | 16 (13-15) | 3 |
| `SKY_LIVES_DUGTRIO` | 154 | NPC_DAGUTORIO | `gAxDugtriosky` | 17 (13-16) | 4 |
| `SKY_LIVES_SUNFLORA` | 155 | NPC_KIMAWARI | `gAxSunflorasky` | 22 (13-21) | 3 |
| `SKY_LIVES_BIDOOF` | 156 | NPC_BIPPA | `gAxBidoof` | 23 (13-22) | 6 |
| `SKY_LIVES_CHIMECHO` | 157 | NPC_CHIRIIN | `gAxChimechosky` | 16 (13-15) | 5 |
| `SKY_LIVES_CORPHISH` | 158 | NPC_HEIGANI | `gAxCorphishsky` | 17 (13-16) | 0 |
| `SKY_LIVES_CROAGUNK` | 159 | NPC_GUREGGURU | `gAxCroagunk` | 15 (13-14) | 5 |
| `SKY_LIVES_SPOINK` | 160 | NPC_BANEBUU | `gAxSpoinksky` | 13 | 10 |
| `SKY_LIVES_WURMPLE` | 161 | NPC_KEMUSSO | `gAxWurmplesky` | 13 | 5 |
| `SKY_LIVES_SWELLOW` | 162 | NPC_OOSUBAME | `gAxSwellowsky` | 13 | 2 |
| `SKY_LIVES_PIDGEY` | 163 | NPC_POPPO | `gAxPidgeysky` | 13 | 4 |
| `SKY_LIVES_LEDYBA` | 164 | NPC_REDIBA | `gAxLedybasky` | 13 | 2 |
| `SKY_LIVES_SEEDOT` | 165 | NPC_TANEBOO | `gAxSeedotsky` | 13 | 6 |

```bash
tools/convert_eos_wan_to_ax.py convert EOS.nds dex441 chatot --palette 5 --ground-groups all
tools/convert_eos_wan_to_ax.py convert EOS.nds dex51 dugtriosky --palette 4 --ground-groups all --max-tiles 0
# ... one line per species: dex, name, palette as in the table
```

Dugtrio, Diglett, Sunflora and Ledyba are converted with `--max-tiles 0`
(no cropping): Red's own sprites of them have frames of 23 to 32 tiles, as
Koffing's do. Croagunk keeps the Gen 4 batch's cropping (10 attack frames).
No piece of these sprites or of the objects below is hit by the AX y-bit bug:
every piece's 10-bit OAM y decodes to -37..18 (Dugtrio's and Diglett's dirt
is drawn below the origin, with bit 9 set).

EoS walks Diglett and Dugtrio underground (a dirt mound), as Red does; their
standing pose (`SetAnimation(2)`) is the head out of the ground. Chatot's
yellow wings come out pale: Red's palette 5 (the converter's choice, as
before) has no yellow.

### Animation ids

EoS's `SetAnimation(n)` reads `SETANIMATION_TABLE` (overlay 11, 84 entries).
Red's `SELECT_ANIMATION(n)` reads `gUnknown_8117F64` in ground_lives.c (53
entries). The values mean the same in both (low byte the group, 0x800 loop,
0x1000 once, 0x300 held on the first frame), but they are not always at the
same index. To translate an EoS id, use the Red id that holds the same value:

- Same id: 0-13 and 17-29 (every id chapter 1 used).
- Different id: 15→2, 16→2, 30→46, 31→47, 32→48, 34→50, **42→30, 43→31,
  44→32**, 45→33, 46→34, 47→35, 48→36, 49→37, 53→49, 55→51, 56→52, 62→30,
  63→23, 64→32, 65→33, 66→26, 67→27, 68→28, 69→37, 70→46, 71→47, 72→48,
  74→50, 75→51, 76→52.
- No Red id: 14 (0x806), 33 and 73 (0x1018), 35-41 (0x101A-0x1020), 50-52
  (0x815-0x817), 54 (0x819), 57-61 (0x81C-0x820), 77 (0x101C), 78 (0x81D),
  79 (0x101F), 80 (0x820), 81-82 (0x1021-0x1022), 83 (0x1000). Chapter 2
  uses none of them. Using one would need a new entry in the table.

The ids chapter 2's actors use (EoS id → Red id, group). Each was checked
against the converted sprite: the group exists, and in all 8 directions its
sequences have EoS's frame counts and timings:

| Actor | EoS id → Red id (group) |
|---|---|
| Chatot | 2 (0, still), 5 (0 loop: walking in place), 9 (11 loop), 18 (3 once), 25 (16 once), 26 (17 once), 42→30 (13 loop), 43→31 (14 loop), 44→32 (15 loop) |
| Loudred | 2, 9 (11 loop), 18 (3 once), 19 (4 once), 23 (14 once), 42→30 (13 loop) |
| Dugtrio | 2, 23 (14 once), 25 (16 once), 42→30 (13 loop) |
| Diglett | 2, 4 (7 loop), 24 (15 once), 25 (16 once), 42→30 (13 loop) |
| Bidoof | 2, 4 (7 loop), 24 (15 once), 42→30 (13 loop) |
| Chimecho, Corphish, Sunflora | 2, 23 (14 once), 42→30 (13 loop) |
| Croagunk | 2, 17 (10 once), 23 (14 once), 42→30 (13 loop) |
| Wigglytuff | 2, 5 (0 loop), 17 (10 once) |
| Pidgey | 4 (7 loop) |
| Swellow, Seedot | 2 |
| Spoink, Wurmple, Ledyba | none (they stand) |

The hero and partner (ACTOR_PLAYER and ATTENDANT1) use 62→30, 63→23, 64→32,
66→26, 68→28, 71→47 and 76→52 (groups 13, 14, 15, 17, 19, 22 and 27). The
starters' sprites have no ground groups yet, so these fall back to Idle.

### Objects

Converted with `convert_eos_wan_to_ax.py ornament`. Their kinds come after the
totem poles (`sSkyGroundObjectTypes` in
[`src/ground_object.c`](../../src/ground_object.c), `gGroundObjectKinds` in
[`src/ground_sprite_data.c`](../../src/ground_sprite_data.c)). The sky build
has its own sorted `gOrnamentFiles` list
([`src/ornament_files_table.c`](../../src/ornament_files_table.c)).

| Kind | No. | EoS | Ornament | Size | Palette | Placed (EoS) |
|---|---|---|---|---|---|---|
| `SKY_OBJ_GUILD_GATE` | 72 | `g01p01a3` | `guildgatep` (`--rest-first`) | 2 (24 tiles) | 0x126, totem pole 2's | g01p01b (30, 18): m02a0105 (and m21a0101) |
| `SKY_OBJ_EXPLORATION_KIT` | 73 | `g01p05a1` | `teamkitp` | 1 | 4 (shared) | g01p05a (25.5, 27.5): m02a0110 |
| `SKY_OBJ_DINNER` | 74 | `g01p06b1` | `dinnerp`, palette `dinnerc` | 1 | 0x127, its own | g01p06b (32, 26.5): c00a0601 (and later dinners) |
| `SKY_OBJ_PEARL` | 75 | `d02p31a1` | `pearlp`, palette `pearlc` | 1 | 0x128, its own | d02p31a (30, 23): m02a0801 |

The other objects in the scripts of the chapter-2 levels belong to later
chapters (`g01p03a1`, `p03p02a1`, `p22p01a1`, `g01p07a1`, and `g01p01a1`, the
Relic Fragment, in G01P04A and G01P07C), or have no picture: `NULL_6` is the
trigger box in the `enter.sse` of G01P02A, G01P03A, G01P04A and G01P07A.
G01P01B's `enter.sse` places the totem poles, which already exist.

An object's WAN keeps its states as the sequences of a single group. Red
picks an object's animation by group × 8 + direction (the low byte of
`gUnknown_81183A0` in ground_object.c), so each state is a direction:

| Object | Directions | Red `SELECT_ANIMATION` | EoS |
|---|---|---|---|
| Gate | 0 closed (EoS's first frame, held), 1 opening, then held open | 1 (0x800, the default an object spawns with); 4 (0x1001, once) | `SetAnimation(9)` closed; `SetAnimation(17)` + `WaitAnimation` opens it |
| Exploration Team Kit | 0 closed, 1 opening, then held open | 1; 4 | `SetAnimation(18)` (0x1003: direction 3, so sequence 3 % 2 = 1) + `WaitAnimation` |
| Dinner | 0-4: EoS's five table settings | 7-11 (0x800-0x804) | placed facing down (setting 0) in c00a0601 |
| Pearl | 0: sparkles (16 + 6 × 3 frames, looping) | default | — |

The gate appears next to both totem poles, and they use both ground
extend-palette slots. So the gate uses totem pole 2's palette
(`--share-palette totempole2`, palette field 0x126), and the two share that
slot. Objects are drawn at OBJ priority 3. In the guild's map the gate
needs `SET_OBJ_FLAGS 0x80000` (priority 2, as for Zubat and Koffing) to
show over the map's top layer.

### Portraits

EoS's faces (FONT/kaomado.kao) for Red's 13 emotions, exported by
[`tools/make_sky_gen4_portraits.py`](../../tools/make_sky_gen4_portraits.py).
The Red species' faces go into `graphics/portraits_sky/<species>/` and replace
Red's faces in the sky build. Chatot's, Bidoof's and Croagunk's faces were
already in `graphics/portraits/`, exported with the Gen 4 species.

| Species | EoS faces exported | Chapter 2 uses (`message_SetFace`) |
|---|---|---|
| Chatot | Normal, Happy, Pained, Angry, Worried, Joyous, Surprised | Normal, Happy, Angry, Joyous, Pain, Surprised, Worried: all there |
| Wigglytuff | Normal, Happy, Worried, Sad, Crying, Shouting, Teary-Eyed, Surprised | Normal; **Sigh** (see below) |
| Loudred | Normal, Happy, Pained, Angry, Joyous, Surprised | Normal, Angry: all there |
| Diglett | Normal, Pained, Teary-Eyed | Normal, Pain: all there |
| Chimecho | Normal, Happy, Surprised | Normal |
| Spoink | Normal | Normal |
| Sunflora | Normal, Happy, Pained, Angry, Worried, Teary-Eyed, Determined, Joyous, Surprised | — |
| Bidoof | Normal, Happy, Pained, Sad, Teary-Eyed, Determined, Surprised | — |
| Corphish | Normal, Worried, Sad | — |
| Dugtrio, Croagunk, Wurmple, Swellow, Pidgey, Ledyba, Seedot | Normal | — |

Missing: Wigglytuff's **Sigh** (EoS emotion 16, in c00a0601). EoS has it
(kaomado slot 32), but the portrait archive holds only Red's 13 emotions
(`PortraitGfx.sprites[13]`, with the emotion masked to 4 bits). So
`FACE_SIGH` shows Normal, as the partner's Sigh does in chapter 1. The hero's
and partner's **Dizzy** (EoS 13, used 5 times) has the same problem. EoS also
has Sigh, Stunned and Dizzy faces for Chatot, Loudred, Bidoof and Sunflora,
which chapter 2 does not use.

### How it was checked

- In mGBA: the new actors and objects were added to chapter 1's guild scene
  (g6 sector 0) in a throwaway build (`DEBUG_BOOT_EVENT=EVENT_DIVIDE`, five
  actors at a time). Each actor walked a square (east, south, west, north),
  stood, and played each of its special animations above. The gate and the
  kit rested closed, opened once and stayed open. The dinner cycled through
  its five settings, and the pearl sparkled.
- Against EoS: EoS's WAN frames (`render-wan ... --ground-groups all`) and
  the converted sprites (`render-ax`) were compared group by group, with the
  same poses, frame counts and timings.
