# Sky demake: chapter 2

Explorers of Sky's chapter 2, "The New Guild Recruits", on the GBA, as close
to EoS as a 240x160 screen allows. It plays end to end: [What
plays](#what-plays) has the flow, the scenes and how they differ from EoS.
The rest of this file is how the pieces were made (the naming contract they
shared, the maps, the translator, the sprites, the dungeon). Chapter 1 is in
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

## What plays

Chapter 2 plays end to end in the sky build: from chapter 1's last save
prompt to Drenched Bluff, back to the guild, and "The demo ends here." after
chapter 2's good night. Every EoS script of the table above but two
(m02d0112, m02a0901: see the differences) is a group of **gs180**, the one
station file of every chapter-2 map
([`events/sky/scenes/sky_d02p01_scenes.scene`](../../events/sky/scenes/sky_d02p01_scenes.scene)),
and EoS's coroutines are event scripts that run them with
`EXECUTE_SUBSTATION(map, group, 0)`
([`src/data/ground/sky/sky_ch2_events.h`](../../src/data/ground/sky/sky_ch2_events.h),
included from `ground_event_data.h`'s sky-only block, so the vanilla build's
line numbers do not move). The events live in Red's chapter-2 slots
(`EVENT_M01E02A_*`), which the sky build never reached; their names are in
[`include/sky_story.h`](../../include/sky_story.h).

### Flow

| EoS | GBA event (slot) | gs180 groups | What happens |
|---|---|---|---|
| chapter 1's end, `CORO_HANYOU_SAVE_FUNC`, EVENT_DIVIDE | `EVENT_M01E01A_L003` (chapter 1's last event) | — | m01a0701 / m01a0702 as before; scn[3, 0]; the save prompt; `JUMP_SCRIPT(EVENT_DIVIDE)` |
| EVENT_DIVIDE, scn[3, 0] → scn[3, 1] | `EVENT_DIVIDE_FIRST` (Red's own) | — | (3, 0) becomes (3, 1), which queues the chapter card; (3, 1) → `SKY_CH2_EVENT`, (3, 3) → `SKY_CH2_FAINTED_PATH_EVENT` |
| EVENT_M02_01_02 | `SKY_CH2_EVENT` (`L001`) | 1-11 | the card, the sentry, the guild, the team, the kit, the crew room; good night (save); the morning address |
| station G01P04A (UM02) | B2F's `GROUND_ENTER` | 0 | free roam on B2F: Loudred and Diglett talk, Chatot waits by Wigglytuff's door, the two signs read; walking off the address's spot runs the next event |
| EVENT_M02_03_04 | `SKY_CH2_JOB_EVENT` (`L001B`) | 12-14 | "Don't wander"; the board, Spoink's pearl; Drenched Bluff's entrance; `NEXT_DUNGEON` (scn[3, 3]) |
| dungeon 3 | Thunderwave Cave's slot (`SCRIPT_DUNGEON_THUNDERWAVE_CAVE`) | — | Drenched Bluff B1F-B6F ([below](#drenched-bluff)) |
| GETOUT_SCENARIO_DUNGEON, conquest | `GETOUT_M01E02A` → `SKY_DRENCHED_BLUFF_CLEARED_EVENT` (`L006`) | 15-19 | the pearl, the reward, dinner, good night (scn[4, 0]) |
| EVENT_DIVIDE → chapter 3 | `SKY_DEMO_END_EVENT` (`L005`) | — | the save prompt, "The demo ends here. Look forward to updates!", the title |
| EVENT_M02_05_07A | `GETOUT_M01E02A` → `SKY_DRENCHED_BLUFF_FAINTED_EVENT` (`L004`) | 20, 17, 18, then 21-23 (the first night after a faint, scn[3, 4]) or 24; 25 | scolded, dinner, the night, the morning (save) |
| EVENT_M02_07B | the same event, from its label 3 | 26, 27 | the morning address; back to the bluff (`NEXT_DUNGEON`) |

`GETOUT_M01E02A` sends a clear (`STARTMODE_DUNGEON_WON`) to the cleared event
and every other result to the fainted one: EoS treats leaving early (an
Escape Orb, Red's `STARTMODE_10`) as a failure too.

**Continue** ([`src/ground_main.c`](../../src/ground_main.c)): a save from
chapter 1's end goes on with chapter 2 (EVENT_DIVIDE at (3, 0)); one from
chapter 2's first good night (`m02a0113` sets EoS's
`$SCENARIO_MAIN_BIT_FLAG[8]`) starts at the next morning (m02a0201); one from
the morning after a faint (`c00a0201` sets bit 7) goes on with EVENT_M02_07B;
a finished save (scn[4, 0] or later) shows the demo end again.
`$SCENARIO_MAIN_BIT_FLAG` is `SKY_SCENARIO_MAIN_BIT_FLAG`, Red's
`EVENT_T01P01` (Pokémon Square's flags, unused in the sky build): no change
to the save layout.

### The scenes

Group = gs180 group. Map = the GBA map the event script selects (each group
selects its own maps after that).

| Group | EoS script | GBA map | Differences from EoS, and why |
|---|---|---|---|
| 0 | G01P04A enter00, station UM02 | `MAP_SKY_GUILD_B2F` | made by hand: UM02's triggers, Loudred's and Diglett's lines (um0201, um0202), the signs (enter24, enter25). Chatot only stands (his EoS line is m02a0301's) |
| 1 | m02a0101 | `MAP_SKY_GUILD_DUSK2` | the chapter card shows where EoS's `back_SetBanner2` is, on the map load, as chapter 1's; the gate (V01P08B) is a still CG (`SKY_CUTAWAY GUILD_GATE`), not a level: EoS only shows it. `MAP_SKY_GUILD_DUSK2` is `MAP_SKY_GUILD_DUSK`'s files with gs180 as its script file (`SELECT_MAP` also picks the station file, and the dusk map's is chapter 1's) |
| 2 | m02a0104 | `MAP_SKY_SENTRY_POST` | V02P03A is a converted map (EoS plays it as a map, with Diglett and a camera move); the grate (V02P02A) is a still CG |
| 3 | m02a0105 | `MAP_SKY_GUILD_ENTRANCE` | the gate is a ground object (`SKY_OBJ_G01P01A3`) |
| 4 | m02a0106 | `MAP_SKY_GUILD_1F` | |
| 5 | m02a0108 | `MAP_SKY_GUILD_B1F` | |
| 6 | m02a0109 | `MAP_SKY_GUILD_B2F` (B2F_DOOR) | |
| 7 | m02a0110 | `MAP_SKY_GUILD_WIGGLYTUFF`, `MAP_SKY_KIT_OPEN` | the team's name: Red's keyboard (`RENAME_TEAM`), `{TEAM_NAME}` after it; the kit (V02P08A) is a converted map, the treasure box an object. The bow depends on the quiz's colour (`$CONFIG_COLOR_KIND`), which Red's quiz does not ask: case 0's, Red's **Friend Bow**. The Defense Scarf and the Explorer Badge's lines are EoS's |
| 8 | m02a0111 | `MAP_SKY_GUILD_CREW_ROOM` | |
| 9 | m02a0113 | `MAP_SKY_GUILD_CREW_ROOM_NIGHT` | the save prompt as chapter 1's; EoS's Quick Tip about saving on the bed is left out (no bed to save on) |
| 10 | m02a0201 | `MAP_SKY_GUILD_CREW_ROOM` | |
| 11 | m02a0202 | `MAP_SKY_GUILD_B2F` | |
| 12 | m02a0301 | `MAP_SKY_GUILD_B2F` | |
| 13 | m02a0302 | `MAP_SKY_GUILD_B1F` | the view on the board sits 24 px lower than EoS's (the GBA's 160 lines: the team stands above the text box) |
| 14 | m02a0401 | `MAP_SKY_DRENCHED_BLUFF_ENTRANCE` | |
| 15 | m02a0801 | `MAP_SKY_DRENCHED_BLUFF_END` | the pearl is a ground object (`SKY_OBJ_D02P31A1`) |
| 16 | m02a1001 | `MAP_SKY_GUILD_B1F` | Protein, Calcium, Iron (`SKY_GIVE_ITEM`) |
| 17 | c00a0501 | `MAP_SKY_GUILD_B2F` | |
| 18 | c00a0601 | `MAP_SKY_GUILD_MESS_HALL` | the eating effects (EoS `EFFECT_EATING`, the apple) have no GBA picture: none shown |
| 19 | m02a1003 | `MAP_SKY_GUILD_CREW_ROOM_NIGHT` | sets scn[4, 0]; then the demo end instead of EVENT_DIVIDE into chapter 3 |
| 20 | m02a0501 | `MAP_SKY_GUILD_B1F` | |
| 21-23 | m02a0601-0603 | `MAP_SKY_GUILD_CREW_ROOM_NIGHT`, `_B2F_NIGHT`, `_WIGGLYTUFF_NIGHT` | Wigglytuff's gift: Reviver Seed, Oran Berry, Max Elixir |
| 24 | c00a0301 | `MAP_SKY_GUILD_CREW_ROOM_NIGHT` | |
| 25 | c00a0201 | `MAP_SKY_GUILD_CREW_ROOM` | the save prompt; EoS's per-chapter cards (3-6) stay `TODO eos` (no chapter 3 yet) |
| 26 | c00a0101 | `MAP_SKY_GUILD_B2F` | EoS runs it with `sector()` 1; the translator takes the switch's first case, which shares case 1's body |
| 27 | m02a0701 | `MAP_SKY_DRENCHED_BLUFF_ENTRANCE` | |

Not played: **m02d0112** (the sentry's re-check when the team comes back to
the gate: the demake never goes back up to the gate) and **m02a0901** ("It's
impossible to go any farther", a later visit to the bluff's end: the demo
ends before one).

All over the chapter:

- **Dialogue**: the partner's lines are the default `PARTNER_TALK_KIND`
  variant of EoS's `message_SwitchTalk`, as chapter 1's. Speakers' name
  colours come from the name slots each group binds (`UPDATE_NAME` at the
  station's start; at most 10 a group).
- **Portraits**: EoS's `message_FacePositionOffset` is left out: EoS's
  offsets are in tiles of a 256x192 screen and pushed Red's faces off the
  GBA's. `FACE_DIZZY` and `FACE_SIGH` show EoS's faces
  ([Portraits](#portraits)); `FACE_STUNNED` (not used by chapter 2) would
  show Normal.
- **Poses**: EoS's `SetAnimation` ids are Red's ids that hold the same value
  ([Animation ids](#animation-ids)); the hero and partner have EoS's
  ground poses ([Hero and partner](#hero-and-partner)).
- **Emotes** without a GBA picture: the two arrows (`EFFECT_TWO_ARROWS_*`)
  show the "!" (`NOTICE`), eating and the apple none (marked
  `# TODO emotion` in the scene file).
- **Music**: EoS's songs as `MUS_SKY_*` (Wigglytuff's Guild, Guildmaster
  Wigglytuff, Goodnight, the Guild remix, Drenched Bluff, Job Clear!, the
  eating jingle), the scene SEs as `SE_SKY_*` (wing flaps, the dinner bell,
  the gate, the kit, the cheer, the door, the reward...).
- **Text**: EoS's lines word for word; `SkyWrapDialogueText` re-wraps them
  for the GBA's box.
- **Camera**: `SkyCamera_MoveBy` adds a move given while one is under way to
  it (EoS's diagonal camera moves are a vertical and a horizontal one in a
  row); before, the second cancelled the first.
- `back_ChangeGround` (a new picture under the same actors) is
  `SKY_CHANGE_GROUND` (SPECIAL_PROCESS 0x75): `SELECT_MAP` deletes the
  actors.

### Regenerating

The station file is generated from the EoS ROM (never commit it):

```bash
python3 tools/event_editor/eos_import.py EOS.nds --chapter2 events/sky/draft/ch2
python3 tools/event_editor/eos_import.py EOS.nds --chapter2-station events/sky/draft/ch2/sky_d02p01_scenes.scene
python3 tools/event_editor/ch2/station.py   # group 0, the hand edits -> events/sky/scenes/sky_d02p01_scenes.scene
```

Tuning made in the emulator goes into the translator or `station.py`'s
`HAND` list, not the generated file ([../EventEditor.md](../EventEditor.md#import-from-eos)).

### Debug boot

```bash
make DEBUG_BOOT_EVENT=SKY_CH2_START            # chapter 2 from its card (New Game)
make DEBUG_BOOT_EVENT=SKY_DRENCHED_BLUFF_DEBUG_EVENT DEBUG_BOOT_LEVEL=8   # straight into the bluff
```

`SKY_CH2_START` sets scn[3, 0] and jumps to EVENT_DIVIDE, as chapter 1's
end does: the card, then chapter 2 with the debug team (Red's starters at
level 1). New Game runs it; Continue is the normal one. More: [Debug
boot](#debug-boot-1) under Drenched Bluff.

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
group 0 is free roam on B2F (an `ENTER_CONTROL` station), groups 1-27 the
scenes ([What plays](#what-plays)). `MAP_THUNDERWAVE_CAVE_ENTRY` itself keeps
no script in the sky build.

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

## Scenes: the translator

`tools/event_editor/eos_import.py` (documentation/EventEditor.md, "Import
from EoS") translates an EoS acting script and its SSA into a `.scene` group.
`eos_import.py EOS.nds --chapter2 events/sky/draft/ch2` writes chapter 2's
drafts: a file a map (the script's SCRIPT/ folder), the scripts of the table
above as its groups, and `needs.txt`, the names they use that no header
defines yet. The drafts are not built: integrating one means adding the
names it needs (`scenes.py names FILE`), moving it to `events/sky/scenes/`
and including it from the map's station header, as chapter 1's.

### Coverage

Checked against chapter 1's hand-made scenes (`--compare`, what each group
does by category, cue plumbing and actor setup left out; "same" = the same
command with the same values, wherever it is):

| EoS script | Chapter 1 group | Text lines | All commands | Text order |
|---|---|---|---|---|
| m01a0101, m01a0102, m01d0112 | gs178 g4 | 6 / 6 | 59 / 81 (72%) | 100% |
| m01a0103 | g5 | 7 / 7 | 21 / 26 (80%) | 100% |
| m01a0104 | g6 | 21 / 21 | 98 / 111 (88%) | 100% |
| m01a0202 / m01a0203 | g7 / g8 | — | 6 / 10, 7 / 10 | — |
| m01a0204–0208 | g1 | 66 / 66 | 181 / 227 (79%) | 83% |
| m01a0301 | g2 | 7 / 7 | 33 / 41 (80%) | 100% |
| m01a0702 | g3 | 68 / 68 | 121 / 127 (95%) | 83% |
| m01a0701 | gs179 g1 | 10 / 10 | 51 / 65 (78%) | 100% |

Every chapter-1 line comes out word for word (line breaks are EoS's;
`SkyWrapDialogueText` re-wraps them as it does chapter 1's). The text order
is below 100% where chapter 1 left out EoS's other answers to a question
(they are in the translation). The rest of the difference is chapter 1's hand
tuning: the storm's and the beach's timings measured in DeSmuME, its own
approximations of `Turn2DirectionTurn` (the translator uses EoS's turn codes,
which are Red's: EoS's `LOOK_AROUND_FUNC` is `Turn2DirectionTurn(4, 2, 4)`,
Red's `ROTATE_RELATIVE(4, 2, DIR_TRANS_SPINLEFT2)`), camera choices (a
followed actor where EoS moves a performer), scenes joined into one group,
and the EoS starting positions where chapter 1 moved an actor. The mappings
chapter 1 shows were taken over: FACE_POS → PLACEMENT, a portrait left out
when the face is unchanged, `Turn2DirectionLives` 10 → `DIR_TRANS_11`, the
SE ids, the top screen's still pictures left out at a scene's start,
`SELECT_ENTITIES` for sector 0, walks worked out from the SSA tile without
its half-tile offset.

Chapter 2 (29 scripts, 14 files): 2566 commands translated. The station
file has 10 `TODO eos` marks left: the per-chapter cards of chapters 3-6 in
c00a0201, two `sector()` switches whose first case is right, m02a0401's
entry into dungeon 123 (EoS's demo version only), Croagunk's initial
position and pose (set another way), and one command sent to an actor that
its own coroutine never reaches. The first drafts had 88; what was left
then, by kind: animations past Red's table (EoS ids
62–76: lying, waking, eating; 23), emotes the GBA has no picture for (eating,
the two arrows; 19), switches on what the GBA can't ask (`sector()`, the
sub-scenario; 11, the first case is taken), portrait offsets (7), dungeon
entry and the flow between scenes (`main_EnterDungeon(-1)`,
`supervision_ExecuteStationCommon`, `LoadStation`, `main_SetGround`,
`CORO_EVENT_END_MAPIN`, `back_SetDungeonBanner`; 13), the chapter cards (6,
in c00a0201's per-chapter branches), `screen_FadeChange`, three text tags.

Names the drafts use beyond the naming contract: the maps
`MAP_SKY_V01P08B`, `MAP_SKY_V02P03A` (the sentry's pit under the grate: EoS
plays m02a0104 on it as a map, with Diglett and a camera move, not as a
picture) and `MAP_SKY_V02P08A`; objects `SKY_OBJ_G01P01A3`, `_G01P05A1`,
`_G01P06B1`, `_D02P31A1` (named after their EoS file until they are drawn);
CGs `SKY_CUTAWAY_V01P08B`, `_V02P02A`, `_V02P03A`, `_V02P06A`, `_V02P08A`;
nine scene SEs not converted yet (`SE_SKY_EVENT_*`); the kit's bows
(`ITEM_*_BOW`); `SCRIPT_DUNGEON_SKY_DRENCHED_BLUFF`; m02a0901's generic team
actors (`SKY_LIVES_ADVENTURE_NPC1`...: they stand for the team's members).
`needs.txt` has the full list.

### Engine gaps

What chapter 2's scripts do that the GBA script engine (src/ground_script.c,
include/data_script.h) could not, and what is done about each (the plan as
written before the integration; what was done is in [What plays](#what-plays):
the save prompts and Continue, the faint path, the flags in Red's
`EVENT_T01P01`, the dungeon entry, the chapter card, the poses, the portrait
offsets left out, the event scripts in place of the stations):

| EoS | Status | GBA |
|---|---|---|
| Team naming, `message_Menu(MENU_TEAM_NAME)`, `[team:]` | exists | Red names its rescue team with `RENAME_TEAM` (CMD 0x3E: the team name input, `SetRescueTeamName`; vanilla b01p01a); `{TEAM_NAME}` prints it |
| Hero naming, `MENU_PLAYER_NAME` | exists | `CLEAR_HERO_NAME` + `RENAME_ALLY 1` (chapter 1) |
| Giving items, `item_Set` + `message_Menu(MENU_GIVE_ITEM)` (the Exploration Team kit, rewards) | **implemented** | `SKY_GIVE_ITEM(item)`, SPECIAL_PROCESS 0x74 under `SKY_STORY`: into the bag, or the storage when the bag is full (as `GIVE_WISH_STONE`). `[s_item:0]` becomes the item's name. The kit's bows are EoS items: the items piece adds them |
| Money, `$CARRY_GOLD += 200` | exists | `UPDATE_VARINT CALC_ADD GOLD 200` (Red's `GOLD` is the team's money) |
| Scenario, `$SCENARIO_MAIN = scn[3, 1]`, `scn(...) == [a, b]` | exists | `SCENARIO_CALC` / `JUMPIF_SCENE_EQ`; the sky build already numbers chapters as EoS does (`SKY_DEMO_END` sets (3, 0)) |
| The save prompt, `CORO_HANYOU_SAVE_FUNC` | partly | the translator writes chapter 1's prompt (`ASK2` + `SKY_SAVE_GAME`). Proposed: `SKY_SAVE_GAME` takes a resume point and Continue resumes there (today it always shows the demo end) |
| Bulletin board | not needed by the story | m02a0302 is scripted (Chatot picks Spoink's job); the board in free roam is piece 5. Proposed: Red's Pelipper board UI with a sky job list |
| Faint path (EVENT_M02_05_07A/B) | proposed | as chapter 1's Beach Cave loss: the dungeon result (`DUNGEON_RESULT`) picks m02a0501 in the event flow (sky_story.c / ground_event_data.h) |
| Flags `$SCENARIO_MAIN_BIT_FLAG[n]`, `$PERFORMANCE_PROGRESS_LIST[n]`, `$COMPULSORY_SAVE_POINT`, `$CONFIG_COLOR_KIND` | proposed | not in Red's variable table: new sky script variables (a save-layout change, `.cursor/skills/save-sram-layout`), or Red's spare ones. `PERFORMANCE_PROGRESS_LIST` only unlocks EoS menus and can go; `CONFIG_COLOR_KIND` (the quiz's colour, which picks the kit's bow) needs the quiz to ask it |
| `dungeon_mode(3) = DMODE_OPEN`, `main_EnterDungeon` | proposed | `NEXT_DUNGEON` with Drenched Bluff's script dungeon (piece 3); opening it: Red's dungeon-open list |
| `ProcessSpecial(GET_HERO_KIND)` | translated | 0, the story's hero: the special episodes' cases are kept but not taken |
| `ProcessSpecial(53)` | not needed | only in EoS's `variation` runs (the demo version), which the translator treats as never taken |
| Chapter cards, `back_SetBanner2` | proposed | chapter 1's card runs on a map load (`sky_chapter_card`, `chapter_titles.h`): a `SKY_CHAPTER_CARD(n)` special, or the same hook keyed on `SCENARIO_MAIN` |
| `screen_FadeChange(w, frames, from, to)` (half dark) | proposed | CMD 0x24 (fade between two brightness levels) is not decompiled yet; a special on `palette_util` |
| Emotes without a GBA picture (eating, two arrows, apple, rain on a performer) | proposed | EoS's effect sprites converted as new ground emotes (`EMOTION_EFFECT_*`) |
| Animations 62–76 | proposed | the sprites piece: EoS ground groups past Red's 52 (`gUnknown_8117F64`), as Zubat's 22 / 24 |
| `message_FacePositionOffset` | proposed | `PORTRAIT_POS` (a delta, in pixels): EoS's offset is in tiles |
| `supervision_ExecuteStationCommon`, `LoadStation`, `ExecuteActing`, `CORO_EVENT_END_MAPIN` | proposed | the flow (piece 5): `EXECUTE_STATION` / `EXECUTE_SUBSTATION`, free roam on the guild's maps |
| An actor with its own coroutine that the main routine also moves (1) | by hand | the translator sends its commands without waiting and marks it |

## Pieces

All done.

1. Maps and CGs.
2. Sprites (ground actors and objects): see [Sprites](#sprites).
3. Drenched Bluff (dungeon, tileset, enemies, items, the pearl).
4. Scenes: an ExplorerScript to `.scene` translator, then the chapter's scenes.
5. Flow: the chapter-1 demo end becomes chapter 2's start; events, flags,
   team naming, the chapter card, free roam, the faint path; chapter 2 ends
   with "The demo ends here." ([What plays](#what-plays)).
6. Tests in the regression suite: the `ch2` run and the chapter-2 checks of
   the `bluff` and `after` runs (SkyDemake.md, "Testing").

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
66→26, 68→28, 71→47 and 76→52 (groups 13, 14, 15, 17, 19, 22 and 27). Every
hero / partner choice has them (next section).

### Hero and partner

Every species the sky build lets the player be or pick as partner (Red's 16
starters, `gPmd2CastingStarters`: Vulpix, Meowth, Phanpy, Turtwig, Chimchar,
Piplup, Munchlax, Riolu) carries EoS's ground groups at their EoS index, so
EoS's `SetAnimation` ids show EoS's cutscene poses (table above):

| Species | Sprite | Groups | Groups 0-12 |
|---|---|---|---|
| Bulbasaur, Charmander, Squirtle, Pikachu, Meowth, Eevee, Chikorita, Cyndaquil, Totodile, Treecko, Torchic, Mudkip, Skitty | `gAx<Name>sky` (new) | 35: EoS's 13-34 replace Red's own 13-27 | Red's own, unchanged |
| Vulpix, Phanpy | `gAxVulpixsky`, `gAxPhanpysky` (new) | 35 (was 13) | Red's own, unchanged |
| Turtwig, Chimchar, Piplup, Riolu | `gAxTurtwig` ... (regenerated in place) | 35 (was 13) | as before (EoS's, cropped as the Gen 4 batch) |
| Munchlax | `gAxMunchlaxsky` (regenerated in place) | 35 (was 13) | as before |
| Psyduck, Machop, Cubone | Red's, unchanged | 28 | — |

EoS's ground set has 22 groups past the dungeon 13 (13-34) for its starters.
Psyduck, Machop and Cubone are not EoS starters: their EoS ground set is Red's
28 groups, frame for frame (checked: every group's masks and timing are
Red's), so Red's sprites already have them.

Red species are converted with

```bash
tools/convert_eos_wan_to_ax.py convert EOS.nds dex4 charmandersky --colours-from charmander \
    --keep-red --ground-groups all --max-tiles 0 --ground-max-tiles 16
# Gen 4 / Munchlax: in place, colours and cropping as before
tools/convert_eos_wan_to_ax.py convert EOS.nds dex387 turtwig --palette 8 --ground-groups all
```

- `--keep-red` keeps the Red sprite's own 13 dungeon groups (poses, tiles,
  timing, body points) and appends EoS's groups from 13 on. EoS's dungeon
  frames of the Red starters are mostly Red's, but Pikachu's are redrawn and
  several others have other shading (Chikorita, Meowth, Totodile, Treecko,
  Skitty, Phanpy), so taking EoS's dungeon groups would have changed the
  dungeon. Checked: every frame of groups 0-12 of all 15 new headers renders
  pixel for pixel as Red's, with the same timing and body points.
- `--colours-from` maps each EoS colour to the Red index EoS's copied frames
  show it as (a vote over the frames whose shape is Red's), so the cutscene
  poses use Red's colours: nearest-colour matching made Cyndaquil's back white
  instead of Red's yellow.
- `--ground-max-tiles 16`: a ground actor has 16 OBJ tiles per body-size unit
  (`sub_80A62F0`, 22 slots). One frame of group 18 (a shake with "!" lines)
  is 24-32 tiles in EoS for all but Turtwig, Torchic, Chikorita and
  Cyndaquil; its effect lines are cropped. No group chapter 2 uses is cropped.
  Red's 13 groups are not cropped (`--max-tiles 0`): Red's own attack frames
  are up to 40 tiles.

Chapter 1 shows two of these groups: `INIT_SLEEP_FUNC` and `WAKEUP_FUNC`
(Red ids 38 and 39, groups 13 and 14) on the beach. Red's 16 starters showed
Red's own versions of these poses, which EoS redrew with the same frames and
timing; Vulpix, Phanpy and the Gen 4 choices fell back to Sleep / Idle and now
lie down and get up as in EoS.

ROM: about 250 KB more (35 groups for 20 species; the 15 Red species' own
sprites are left out of the sky build, as Zubat's are). EWRAM is unchanged.

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

EoS's faces (FONT/kaomado.kao), exported by
[`tools/make_sky_gen4_portraits.py`](../../tools/make_sky_gen4_portraits.py):
Red's 13 emotions and the two past them that the chapter 1 and 2 scripts use,
**Dizzy** (EoS emotion 13) and **Sigh** (16). The Red species' faces go into
`graphics/portraits_sky/<species>/` and replace Red's faces in the sky build.
Chatot's, Bidoof's and Croagunk's faces were already in `graphics/portraits/`,
exported with the Gen 4 species.

| Species | EoS faces exported | Chapter 2 uses (`message_SetFace`) |
|---|---|---|
| Chatot | Normal, Happy, Pained, Angry, Worried, Joyous, Surprised, Dizzy, Sigh | Normal, Happy, Angry, Joyous, Pain, Surprised, Worried: all there |
| Wigglytuff | Normal, Happy, Worried, Sad, Crying, Shouting, Teary-Eyed, Surprised, Sigh | Normal, Sigh: all there |
| Loudred | Normal, Happy, Pained, Angry, Joyous, Surprised, Sigh | Normal, Angry: all there |
| Diglett | Normal, Pained, Teary-Eyed | Normal, Pain: all there |
| Chimecho | Normal, Happy, Surprised | Normal |
| Spoink | Normal | Normal |
| Sunflora | Normal, Happy, Pained, Angry, Worried, Teary-Eyed, Determined, Joyous, Surprised, Sigh | — |
| Bidoof | Normal, Happy, Pained, Sad, Teary-Eyed, Determined, Surprised, Dizzy, Sigh | — |
| Corphish | Normal, Worried, Sad | — |
| Dugtrio, Croagunk, Wurmple, Swellow, Pidgey, Ledyba, Seedot | Normal | — |
| Every hero / partner choice but Psyduck, Machop and Cubone | all 13, Dizzy, Sigh | the hero's and partner's Dizzy (5 times) |

**Emotions past Red's 13.** Red's portrait archive holds 13 emotions
(`PortraitGfx.sprites[13]`) and masks a portrait's emotion to 4 bits. In the
sky build (`SKY_STORY`):

- `PORTRAIT_EMOTION()` (`include/structs/str_mon_portrait.h`) keeps 5 bits, so
  `EMOTION_DIZZY` (13) and `EMOTION_SIGH` (16) reach the portrait code with
  EoS's numbers ([`src/textbox.c`](../../src/textbox.c),
  [`src/pokemon.c`](../../src/pokemon.c)).
- A custom portrait with such a face is a `PortraitGfxSky` (20 slots, the same
  layout; `convert_custom_portraits.py` writes it only for species that have
  one), and its bit in `gCustomPortraitMasks`, now a `u32`
  (`CustomPortraitMask`), says so.
- A species without the face (Psyduck, Machop, Cubone, most townsfolk) shows
  Normal (`ScriptSetPortraitInfo`): Red's kao files stop at 13.

The vanilla build is unchanged (4 bits, `u16` masks, 13 slots). Scenes name
the faces `emotion=DIZZY` and `emotion=SIGH` ([EventEditor.md](../EventEditor.md#emotions)).
Chapter 1's partner says "Whew..." at the guild with its Sigh face (m01a0104;
check `guild_whew_sigh`). EoS also has Stunned (17) faces, which no chapter 1
or 2 script uses; adding one is a word in `EXTRA_EMOTIONS`
(make_sky_gen4_portraits.py) and `SKY_EXTRA_EMOTIONS` (convert_custom_portraits.py).

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
- The hero / partner sprites: in a throwaway build of chapter 1's sunset
  beach (`DEBUG_BOOT_EVENT=EVENT_DIVIDE`, after "Where...where am I...?"),
  the hero played Red ids 30, 23, 32, 26, 28, 47 and 52 for 100 frames each,
  as Charmander, Vulpix, Riolu, Pikachu and Chimchar
  (`DEBUG_BOOT_STARTER`). Every second frame's sprite was matched against
  every pose of the converted header: 933 of 953 sampled frames show a pose
  of the requested group pixel for pixel, all 7 groups in all 5 runs (the
  20 others are the first frames of the next animation). The converted
  groups 13-34 have EoS's frame counts, timings and shapes in all 8
  directions (group 18 but for its cropped frame), and groups 0-12 of the 15
  new Red-species headers render exactly as Red's own sprites.
- The faces: the same build showed the hero's and partner's Dizzy, the
  partner's Sigh and Wigglytuff's Sigh (`UPDATE_NAME kind=SPECIES_TYPE`) for
  Charmander / Squirtle, Vulpix / Turtwig, Riolu / Munchlax, Pikachu / Piplup
  and Chimchar / Chikorita; each face on screen is EoS's PNG pixel for pixel.


## Drenched Bluff

EoS dungeon 3, played by Red's **Thunderwave Cave** slot
(`DUNGEON_THUNDERWAVE_CAVE` = 1, `SCRIPT_DUNGEON_THUNDERWAVE_CAVE`,
`RESCUE_DUNGEON_THUNDERWAVE_CAVE`), the way Tiny Woods plays Beach Cave.
Red's own Thunderwave Cave is chapter 2's dungeon too (`SCENARIO_MAIN` 3),
so its after-dungeon script (`GETOUT_M01E02A`) already checks the right
scenario. Code: `SkyStory_IsDrenchedBluff` and friends in
[`src/sky_story.c`](../../src/sky_story.c).

### What EoS has

Read from the EoS ROM (`BALANCE/mappa_s.bin` through the arm9 dungeon list:
dungeon 3 is mappa list 2, floors 0-5; `BALANCE/item_p.bin`;
`BALANCE/waza_p.bin`; overlay 10's tileset properties and music list):

| Floor | Layout (Red's `LAYOUT_*`) | Rooms | Enemies | Items | Wild Pokémon (level, weight) |
|---|---|---|---|---|---|
| B1F | 1 SMALL | 9 | 5 | 3 | Lileep L3 33%, Anorith L3 33%, Shellos L4 33% |
| B2F | 1 SMALL, dead ends | 9 | 5 | 3 | as B1F |
| B3F | 11 MEDIUM | 8 | 6 | 4 | Lileep L3, Anorith L3, Shellos L4 (29% each), Chingling L4 14% |
| B4F | 11 MEDIUM, dead ends | 8 | 6 | 4 | as B3F |
| B5F | 11 MEDIUM | 7 | 6 | 4 | as B3F |
| B6F | 8 LARGE_0x8, dead ends | 7 | 7 | 4 | Lileep L4, Anorith L4, Shellos L5, Chingling L5 |

Every floor: connectivity 12, water density 8 (secondary terrain on), trap
density 3 (only Wonder Tiles), no darkness, clear weather, no Kecleon shop
or Monster House (Kecleon L48/L49 and the decoy are listed with weight 0),
maze-room chance 1% on B1F-B3F, coins up to 75, EoS tileset 2, music 2
(`BGM_DRENCHED_BLUFF`), enemy IQ 1. Restrictions: stairs down, recruiting
allowed, no rescues, 4 party members, 48 items, 1000-turn limit.
Floor items (cumulative weights per category, the same on every floor with
small changes): Geo Pebble 14%; Heal Seed, Oran Berry, X-Eye Seed, Pecha
Berry, Sleep, Warp, Blast and Stun Seeds, Max Elixir 42%; Apple and six
Gummis 11%; Poké 33%. EoS's **guaranteed** items (weight 0xFFFF): a Big
Apple on B3F, a Max Elixir on B4F, an Oren Berry on B5F.
The enemies' moves at those levels are all Red moves (Astonish, Constrict;
Harden, Scratch; Mud-Slap, Mud Sport, Harden; Wrap), so no Gen 4 proxy is
involved.

### On the GBA

- [`tools/make_sky_dungeon_floors.py`](../../tools/make_sky_dungeon_floors.py)
  `EOS.nds 3 sDrenchedBluff` writes
  [`src/data/sky_drenched_bluff_floors.h`](../../src/data/sky_drenched_bluff_floors.h):
  per floor the 28 floor-property bytes (EoS's floor layout is Red's
  `FloorProperties` byte for byte), the spawns (species by name, Gen 4 ids
  from `sky_gen4.h`), the traps and the floor items in Red's ids. The tool
  works for any EoS dungeon (`... 1 sBeachCave` gives Beach Cave's
  table, identical to the hand-written one in `sky_story.c`).
- `SetFloorItemMonsterSpawns` loads Red's Thunderwave Cave data (B6F reads
  B5F's, `SkyStory_RemapDataFloor`), then `SkyStory_ApplyFloorOverrides`
  replaces the floor properties (tileset `SKY_DRENCHED_BLUFF_TILESET` 0x2A,
  Red's music byte kept, money cap EoS byte × 5 / 40), the trap weights and
  the spawns, and `SkyStory_ApplyFloorItemOverrides` the normal floor item
  list. `GetDungeonFloorCount` gives 7 (6 floors + 1): B6F's stairs clear
  the dungeon. The name is "Drenched Bluff" (`strings.c`, `ground_place.c`),
  the floor title "Drenched Bluff B1F".
- Guaranteed items: `SkyStory_TakeGuaranteedItem` (called from the floor
  item placement in `dungeon_items.c`) turns the floor's first normal item
  spot into it.
- Music: `SkyStory_GetDungeonBgm` returns `MUS_SKY_DRENCHED_BLUFF` (944, the
  Sky Jukebox's converted `BGM_DRENCHED_BLUFF`) on every floor.
- Tileset: EoS `dungeon.bin` #2 converted by
  `tools/convert_eos_dungeon_tileset.py EOS.nds 2 sDrenchedBluff`
  ([`src/data/sky_drenched_bluff_tileset.h`](../../src/data/sky_drenched_bluff_tileset.h):
  478 tiles, 250 chunks, the autotile table, palettes 0-9 and the animated
  water colours of palettes 10-11), loaded by `SkyStory_LoadDungeonTileset`
  ([`src/sky_dungeon_tileset.c`](../../src/sky_dungeon_tileset.c)) for
  tileset id 0x2A. Red's tileset 0x2A was picked for game logic: not lava,
  not a "water tileset", Rock camouflage, Nature Power → Rock Slide, as EoS's
  tileset 2. It is C data, so the sky dungeon archive needs no change (it
  already has no Red tilesets).

**Approximated:** X-Eye Seed (hallucination, a status Red does not have)
spawns as a Totter Seed; EoS's look-alike items Mix Elixir, Oren Berry and
Dough Seed do not exist in Red and are left out (their category's other
items scaled back to 100%; B5F's guaranteed Oren Berry is gone); shop,
Monster House and buried item lists stay Red's (EoS's chances and density
for them are 0 on every floor); Red has no enemy IQ per floor; the coin cap
is 80 (Red's steps of 40), not 75; party size stays Red's 3. A guaranteed
item replaces a random one instead of being added. EoS's 0xFFFF weight is
SkyTemple's "guaranteed"; it was not checked in DeSmuME (no EoS save reaches
chapter 2).

### The pearl

Spoink's pearl is **not a dungeon item** in EoS: no floor of mappa_s.bin
lists it. It is ground object `d02p31a1` (object 17, at (30, 23)) in
m02a0801's layer of the end map D02P31A, which the partner spots ("This has
to be Spoink's pearl!"). m02a1001's rewards are `item_Set` Protein / Calcium
/ Iron. So nothing was added to the item table; the pearl is a
`SKY_OBJ_*` ground object for the sprites agent (naming contract above).

### The end: hook for the scenes

(Done: [What plays](#what-plays). `mapID2` / `mapID3` are now
`MAP_SKY_DRENCHED_BLUFF_END` / `MAP_SKY_GUILD_B1F` and the cleared event
plays EVENT_M02_09_10.)

EoS: after B6F, `GETOUT_SCENARIO_DUNGEON` (GROUND_START_MODE 8, conquest)
jumps to `EVENT_M02_09_10`: m02a0801 at D02P31A (its banner is EoS's
"Drenched Bluff / B7F", `back_SetDungeonBanner(3, 0)`; it sets
`$SCENARIO_MAIN` scn[3, 6], or scn[3, 7] on a second clear), then m02a1001,
c00a0501, c00a0601, m02a1003 and EVENT_DIVIDE.

GBA: clearing Drenched Bluff returns `STARTMODE_DUNGEON_WON`; ground_main
sets `START_MODE` / `DUNGEON_RESULT`, marks `DUNGEON_CLEAR_LIST[1]`, loads
the return map (`sScriptDungeonData[SCRIPT_DUNGEON_THUNDERWAVE_CAVE].mapID2`
in [`src/code_80A26CC.c`](../../src/code_80A26CC.c), Red's
`MAP_TEAM_BASE_INSIDE`) and runs `GETOUT_M01E02A`
([`ground_event_data.h`](../../src/data/ground/ground_event_data.h)):
`DUNGEON_ENTER` 1 and `SCENARIO_MAIN` 3 → `START_MODE` won →
**`EVENT_M01E02A_L006` = `SKY_DRENCHED_BLUFF_CLEARED_EVENT`**. In the sky
build that event slot points at `s_script_SKY_DRENCHED_BLUFF_CLEARED` (a
placeholder: `SET_RESCUE_CONQUERED`, scn[3, 6], then the demo end). The
scenes agent replaces that script's body with EVENT_M02_09_10's scenes
(`EXECUTE_SUBSTATION(MAP_SKY_DRENCHED_BLUFF_END, ...)` for m02a0801, ...)
and sets the return maps (`mapID2` cleared, `mapID3` fainted) under
`SKY_STORY`.

Entering the dungeon from a scene (m02a0401 / m02a0701's
`main_EnterDungeon(3, 0)`): `NEXT_DUNGEON frames=0 dungeon=THUNDERWAVE_CAVE`
in a `.scene` file (as chapter 1's `dungeon=TINY_WOODS`), after
`$SCENARIO_MAIN = scn[3, 3]` (`SCENARIO_CALC(SCENARIO_MAIN, 3, 3)`).

### Fainting: hook for the flow

(Done: [What plays](#what-plays); `STARTMODE_10` goes to the fainted event.)

EoS: EVENT_DIVIDE with scn[3, 3/4/5] → `EVENT_M02_05_07A` (m02a0501 at
g01p03a, c00a0501, c00a0601, the night: m02a0601-0603 or c00a0301, then
c00a0201), then `EVENT_M02_07B` (c00a0101, m02a0701: back to the bluff).

GBA: fainting returns `STARTMODE_DUNGEON_LOST` (12); Red's engine removes all
money, each bag item with a 50% chance and the held items
(`RemoveMoneyAndRandomItems`, `src/main_loops.c`), loads `mapID3` (Red's
`MAP_TEAM_BASE_INSIDE`) and runs `GETOUT_M01E02A`: any result but won and
`STARTMODE_10` → **`EVENT_M01E02A_L004` = `SKY_DRENCHED_BLUFF_FAINTED_EVENT`**
(`s_script_SKY_DRENCHED_BLUFF_FAINTED`, placeholder: the demo end).
`STARTMODE_10` (left early, e.g. an Escape Orb) goes to `EVENT_DIVIDE`; EoS
treats that as a failure too, so the flow should send it to the fainted
event (edit `GETOUT_M01E02A`'s `STARTMODE_10` line under `SKY_STORY`).
Seen working: a level-1 debug team falls on B1F and the fainted event runs.

### Debug boot

```bash
make DEBUG_BOOT_EVENT=SKY_DRENCHED_BLUFF_DEBUG_EVENT DEBUG_BOOT_LEVEL=8 [DEBUG_BOOT_FLOOR=6] [DEBUG_BOOT_SEED=7]
```

`SKY_DRENCHED_BLUFF_DEBUG_EVENT` (`EVENT_M01E02A_L002`'s slot,
`s_script_SKY_DRENCHED_BLUFF_DEBUG`) sets scn[3, 3] and enters the dungeon
(`NEXT_DUNGEON`). `DEBUG_BOOT_LEVEL=n` levels the debug team to n with
EoS's stat gains and moves (Red's starters start at level 1, and a level-1
team does not survive the bluff). The `bluff` test ROM of the regression
suite is this build with seed 7 and level 8.
