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

Chapter 2 (29 scripts, 13 files): 2492 commands translated, 88 `TODO eos`
(96.6%). What is left, by kind: animations past Red's table (EoS ids
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
include/data_script.h) could not, and what is done about each:

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

1. Maps and CGs.
2. Sprites (ground actors and objects).
3. Drenched Bluff (dungeon, tileset, enemies, items, the pearl).
4. Scenes: an ExplorerScript to `.scene` translator, then the chapter's scenes.
5. Flow: the chapter-1 demo end becomes chapter 2's start; events, flags,
   team naming, the chapter card, free roam, the faint path; chapter 2 ends
   with "The demo ends here."
6. Tests in the regression suite.
