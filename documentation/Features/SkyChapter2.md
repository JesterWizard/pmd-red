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

## Pieces

1. Maps and CGs.
2. Sprites (ground actors and objects).
3. Drenched Bluff (dungeon, tileset, enemies, items, the pearl).
4. Scenes: an ExplorerScript to `.scene` translator, then the chapter's scenes.
5. Flow: the chapter-1 demo end becomes chapter 2's start; events, flags,
   team naming, the chapter card, free roam, the faint path; chapter 2 ends
   with "The demo ends here."
6. Tests in the regression suite.

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
