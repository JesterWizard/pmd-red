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
  boss (`main_EnterDungeon(5, 30)`): done, see [Mt. Bristle](#mt-bristle).
- **Music**: Treasure Town, Heartwarming, Growing Anxiety, Oh No!,
  Earthquake, Mt. Bristle, Time Gear (remix), Storm (inside), the four
  sentry-duty results; all in the Sky Jukebox range.
- **Free roam**: Treasure Town with the shops (Red's Kecleon shop, storage
  and bank as EoS's Kecleon brothers, Kangaskhan, Duskull), the crossroads,
  the guild floors.

## Mt. Bristle

EoS dungeons 4 (Mt. Bristle, nine floors) and 5 (Mt. Bristle Peak, one
fixed floor with Drowzee), both played by Red's **Mt. Steel** slot
(`DUNGEON_MT_STEEL` = 2, Red's own chapter-3 dungeon, `RESCUE_DUNGEON_MT_STEEL`):

| EoS | Red script dungeon | `DUNGEON_ENTER` | Run |
|---|---|---|---|
| Mt. Bristle (4), `main_EnterDungeon(4, 0)` | `SCRIPT_DUNGEON_MT_STEEL` | 2 | floors 1F-9F, stairs up |
| Mt. Bristle Peak (5), `main_EnterDungeon(5, 30)` | `SCRIPT_DUNGEON_3` | 3 | floor 1: the boss room |

Red's chapter 3 uses the same pair: Mt. Steel's run, then `SCRIPT_DUNGEON_3`
(Red's second Mt. Steel entry, also handled by `GETOUT_M01E02B`). In Red that
entry has `unk11` FALSE: it runs no dungeon and only "wins", to chain the
after-boss script; the sky build sets it TRUE so it is a real run
([`src/code_80A26CC.c`](../../src/code_80A26CC.c)). Red's `SCENARIO_MAIN` for
Mt. Steel is 4, as EoS's chapter 3 (`scn[4, x]`). The dungeon tells the two
runs apart by `DUNGEON_ENTER` (ground_main sets it to the script dungeon
before the dungeon starts): `SkyStory_IsMtBristlePeakRun` in
[`src/sky_story.c`](../../src/sky_story.c).

### What EoS has

Read from the EoS ROM (`BALANCE/mappa_s.bin` through the arm9 dungeon list:
dungeon 4 is mappa list 3, floors 0-8, dungeon 5 its floor 9;
`BALANCE/fixed.bin` floor 2; overlay 29's fixed-room entity tables, overlay
10's monster spawn stats and fixed-floor properties; `BALANCE/item_p.bin`,
`BALANCE/waza_p.bin`; overlay 10's tileset properties and music list; arm9's
dungeon restrictions):

| Floor | Layout (Red's `LAYOUT_*`) | Rooms | Enemies | Items | Wild Pokémon (level, weight) |
|---|---|---|---|---|---|
| 1F | 1 SMALL | 7 | 5 | 3 | Machop L6, Geodude L6, Doduo L7, Spinarak L7 (18% each), Starly L8 27% |
| 2F | 11 MEDIUM | 6 | 5 | 3 | as 1F |
| 3F | 11 MEDIUM | 7 | 5 | 4 | as 1F |
| 4F | 11 MEDIUM | 7 | 5 | 4 | Nidorina L5, Nidorino L5, Machop L6, Geodude L6, Doduo L7, Spinarak L7 (13% each), Starly L8 20% |
| 5F | 11 MEDIUM, dead ends | 8 | 6 | 4 | as 4F; guaranteed **Big Apple** |
| 6F | 0 LARGE, dead ends | 9 | 6 | 4 | each a level up: Nidorina L6, Nidorino L6, Machop L7, Geodude L7, Doduo L8, Spinarak L8, Starly L9 |
| 7F | 11 MEDIUM, dead ends | 10 | 6 | 4 | as 6F |
| 8F | 1 SMALL, dead ends | 11 | 6 | 4 | as 6F |
| 9F | 11 MEDIUM, dead ends | 12 | 6 | 4 | as 6F |

Every floor: connectivity 20 (25 on 5F and 8F), extra hallways 6-15, no
water, trap density 3 (only Wonder Tiles), no darkness, clear weather, no
Kecleon shop or Monster House (Kecleon L48/L49 listed with weight 0), coins
up to 75, EoS tileset 3 (Rock camouflage, Nature Power: Rock Slide), music 3
(`BGM_MT_BRISTLE`). Restrictions: stairs **up**, recruiting allowed, 4 party
members, 48 items, 1000-turn limit. Floor items (per category): Stick 7%;
Geo Pebble 14%; Heal Seed, Oran Berry, Reviver Seed, X-Eye Seed, Pecha and
Cheri Berries (Rawst Berry from 5F), Sleep, Warp, Blast and Stun Seeds, Max
Elixir, Gen 4 seeds and EoS's look-alike items 34%; Apple and four Gummis
14%; Poké 21%; Orbs 10% (Switcher, Blowback, Warp, Transfer, Luminous,
Decoy, Slumber, Totter, Escape, Drought, Rollcall, Hurl, Spurn, All-Hit,
Foe-Seal; fewer kinds from 5F). The wild Pokémon's moves at those levels
(EoS learnsets) are all Red moves.

**The peak** (dungeon 5): EoS fixed floor 2, 24×22, Drowzee alone (fixed-room
entity 73, facing down, two tiles above the gap between the hero and the
partner). **No Azurill in the dungeon**: Azurill is only on the ground map
D03P41A (m03a0801, m03a1001). Drowzee's spawn stats (overlay 10's table,
entry 3): **L12, 100 HP, Attack / Sp. Atk 30 / 30, Defense / Sp. Def 20 / 20,
0 EXP**; moves from its EoS learnset at L12: **Hypnosis, Pound, Disable (L7),
Confusion (L9)**. The floor's own spawn list has Drowzee L50 (EoS spawns the
room's bosses with their spawn stats instead). Floor background: EoS tileset
171 (`dungeon_bg1`, palette 10 static). Music: the fixed floor's track 127
(`BGM_BOSS_BATTLE`); m03a0801 plays In the Depths of the Pit before the fight.
Fixed-floor properties: moves on, orbs off, the floor ends when its enemies
are defeated. Restrictions: stairs up, no recruiting.

### On the GBA

- [`tools/make_sky_dungeon_floors.py`](../../tools/make_sky_dungeon_floors.py)
  `EOS.nds 4 sMtBristle` writes
  [`src/data/sky_mt_bristle_floors.h`](../../src/data/sky_mt_bristle_floors.h),
  `EOS.nds 5 sMtBristlePeak --boss-codes 16` writes
  [`src/data/sky_mt_bristle_peak_floors.h`](../../src/data/sky_mt_bristle_peak_floors.h).
  The tool now also strips EoS's text markup from item names (the orbs'
  `[M:I1]`), labels floors 1F or B1F by EoS's stairs direction, and writes a
  **fixed floor**: the room in Red's `fixedmap` encoding (EoS floor → 60, wall
  → 2, leader spawn → 22, partner spawn → 23, the EoS entities → the Red room
  codes `--boss-codes` gives; Red's other team slots 24-27 and the player
  spawn 4 go below the leader as in Red's rooms), the bosses' spawn stats
  (`SkyBoss`) and a spawn list at the bosses' levels. `EOS.nds 2
  sBeachCavePit --boss-codes 18,19` gives chapter 1's hand-written Pit room
  byte for byte, and `EOS.nds 3 sDrenchedBluff` still gives the bluff's header
  unchanged. EoS item category 9 is Red's `CATEGORY_ORBS` (same id).
- `SkyStory_ApplyFloorOverrides` / `SkyStory_ApplyFloorItemOverrides` are now
  generic over the EoS dungeons (`struct SkyDungeon` in `sky_story.c`:
  Drenched Bluff, Mt. Bristle, the peak): floor properties (tileset, Red's
  music byte kept, money cap byte × 5 / 40), traps, spawns, floor items,
  guaranteed items (5F's Big Apple). `GetDungeonFloorCount(DUNGEON_MT_STEEL)`
  is 10 on Mt. Bristle's run (9F's stairs clear it) and 2 on the peak's. Red
  data floor under them: Mt. Bristle 1F-8F read Mt. Steel's, 9F reads 8F's;
  the peak reads Mt. Steel 9F's (Skarmory's floor).
- Name "Mt. Bristle" (`gDungeonNames` in `strings.c`, `ground_place.c`). The
  peak run has the same name in menus and "1F" on the HUD, and no floor
  banner (`ShouldShowDungeonBanner`: EoS shows the peak's banner at the start
  of m03a0801 on the ground; the fight comes in from the white).
- Music: `MUS_SKY_MT_BRISTLE` (950, the Sky Jukebox's converted
  `BGM_MT_BRISTLE`) on every floor; the peak starts In the Depths of the Pit
  (64); the cutscene switches to Boss Battle! (63) behind the white.
- Tilesets: EoS `dungeon.bin` #3 by `tools/convert_eos_dungeon_tileset.py
  EOS.nds 3 sMtBristle`
  ([`src/data/sky_mt_bristle_tileset.h`](../../src/data/sky_mt_bristle_tileset.h),
  381 tiles) on Red tileset id **0x27** (`SKY_MT_BRISTLE_TILESET`: Red's own
  Mt. Steel id; no water or lava, Rock camouflage, Nature Power: Rock Slide,
  as EoS's 3); the peak's `dungeon_bg1` by `... EOS.nds bg1 sMtBristlePeak`
  ([`src/data/sky_mt_bristle_peak_tileset.h`](../../src/data/sky_mt_bristle_peak_tileset.h),
  533 tiles, so Red's grid tiles move after them as for the Pit) on the
  pre-drawn background id **0x42** (`SKY_MT_BRISTLE_PEAK_TILESET`: Rock, Rock
  Slide, as EoS's 171); both loaded by `SkyStory_LoadDungeonTileset`
  ([`src/sky_dungeon_tileset.c`](../../src/sky_dungeon_tileset.c)). The
  converter now gives an unanimated slot of palettes 10-11 its static `dpl`
  colour when the chunks use that palette (Red reads palettes 10-11 only from
  the animation data, and the peak's floor is drawn in a static palette 10);
  the other tilesets convert unchanged. Red's pre-drawn backgrounds are 24×24
  tiles and the peak's room (24×22 at (5, 5)) reaches x 28 and y 26:
  `SkyStory_BackgroundChunk` repeats EoS's edge there (every 3 columns, every
  2 rows), as EoS's 32×32 background does.
- The boss room: the peak plays in Red's Skarmory room
  (`FIXED_ROOM_MT_STEEL_SKARMORY`), patched with EoS's floor by
  `SkyStory_PatchFixedMap` as the Pit patches the Team Meanies room. Drowzee
  spawns from Skarmory's slot (room code 16, `BEHAVIOR_SKARMORY`;
  `SkyStory_RemapFixedRoomSpecies`) at L12, and
  `SkyStory_ApplyFixedRoomBossStats` gives it the spawn stats above (Attack /
  Sp. Atk and Defense / Sp. Def apart) and `bossFlag` (no EXP while
  `gSkyBossExp` is off; not recruitable). Enemy density, shop and Monster
  House are 0, so Drowzee is alone, as in EoS. Its moves are EoS's (the sky
  build's EoS learnsets): Hypnosis, Pound, Disable, Confusion, all Red moves
  with Red's effects.
- The cutscene `CUTSCENE_MT_BRISTLE_PEAK`
  ([`src/dungeon_cutscene_mt_bristle.c`](../../src/dungeon_cutscene_mt_bristle.c),
  chosen before Red's Skarmory cutscene): the team on its room slots facing
  Drowzee, Drowzee facing them, the camera between; In the Depths of the Pit;
  **Drowzee's closing speech** (m03a0801's last two boxes, "This should be a
  laugh. Let's see if you can take me down." / "Show me what you've got!";
  on the re-fight m03a0901's last three, "You foolish pests..." / "You seem
  to hunger for punishment..." / "C'mon! Whenever you want!"); then EoS's
  **boss battle transition** (chapter 1's
  [`src/sky_boss_wipe.c`](../../src/sky_boss_wipe.c): bgm stop, two flashes,
  the streaks, the white-out, Boss Battle! and the fade-in, as Beach Cave
  Pit's `PitBossWipe`). The re-fight is told by Red's Mt. Steel cutscene
  flags: `CUTSCENE_FLAG_MT_STEEL_REACHED` is set on the first arrival,
  `CUTSCENE_FLAG_MT_STEEL_COMPLETE` when Drowzee falls.
- Drowzee down (`SkyStory_HandleMtBristlePeakBossFaint`) ends the dungeon as
  won (EoS: the floor ends when its enemies are defeated). As in Red's story
  dungeons, the partner fainting loses it.

**Approximated:** X-Eye Seed spawns as a Totter Seed (no hallucination in
Red); EoS items Red does not have are left out and their category's other
items scaled back to 100%: Dropeye Seed (no map-blind status), Reviser, Slip
and Via Seeds, Mix Elixir, Oren Berry, Dough Seed, Spurn, All-Hit and
Foe-Seal Orbs; shop, Monster House and buried item lists stay Red's (EoS's
chances and density are 0); a guaranteed item replaces a random one; the
coin cap is 80, not 75; party size stays Red's 3 (EoS 4); Red has no enemy
IQ per floor. At the peak: orbs stay usable (EoS's fixed floor disables
them); "1F" on the HUD and "Mt. Bristle" in menus (not "Mt. Bristle Peak");
Red's first-floor hint box ("Head for the destination while attacking
foes...") shows before the cutscene; Red's enemy AI picks Drowzee's moves by
their weights (Pound 25, Hypnosis 15, Disable 15, Confusion 10, plus the
regular attack), not EoS's AI, so the seeded test fight shows Pound and
regular attacks. The scene split (the ground scene stops before Drowzee's
closing speech, which plays in the dungeon) adds a load between the two.
EoS's data was read from the ROM; the fight was not compared in DeSmuME.

### The end of Mt. Bristle: hook for the scenes

EoS: after 9F, `GETOUT_SCENARIO_DUNGEON` → EVENT_M03_08: **m03a0801** at
D03P41A when `$SCENARIO_MAIN` is scn[4, 5] (Azurill and Drowzee; it sets
scn[4, 6] and shows `back_SetDungeonBanner(5, 0)`), or **m03a0901** (the
re-fight) at scn[4, 6]; each ends with Drowzee's closing speech, `bgm_Stop`,
two white flashes, `CallCommon(CORO_BOSS_WIPE_FUNC)` and
`main_EnterDungeon(5, 30)`.

GBA: clearing Mt. Bristle returns `STARTMODE_DUNGEON_WON`; ground_main marks
`DUNGEON_CLEAR_LIST[2]`, loads `mapID2` of
`sScriptDungeonData[SCRIPT_DUNGEON_MT_STEEL]` (Red's `MAP_TEAM_BASE_INSIDE`)
and runs `GETOUT_M01E02B`, which the sky build replaces
([`ground_event_data.h`](../../src/data/ground/ground_event_data.h); Red's
also set `SCENARIO_MAIN` (4,7) / (4,8) by itself): `DUNGEON_ENTER` 2,
`SCENARIO_MAIN` 4, won → **`EVENT_M01E02B_L005` = `SKY_MT_BRISTLE_CLEARED_EVENT`**
(`s_script_SKY_MT_BRISTLE_CLEARED`; placeholder: `SCENARIO_CALC(SCENARIO_MAIN,
4, 6)`, `NEXT_DUNGEON(-1, SCRIPT_DUNGEON_3)`). The scenes agent replaces its
body with m03a0801 / m03a0901 on the D03P41A map (by `SCENARIO_MAIN`: (4, 5)
the first fight, (4, 6) the re-fight), **stopping before Drowzee's closing
speech** (the peak's cutscene plays it, then the transition), setting
scn[4, 6], then `NEXT_DUNGEON(..., SCRIPT_DUNGEON_3)`. The return maps
(`mapID2` cleared, `mapID3` fainted) can be set under `SKY_STORY`.

### The peak won: hook for the scenes

EoS: Drowzee defeated → EVENT_M03_10_13: **m03a1001** (D03P41A: Azurill
saved; scn[4, 7]), m03a1002 (D03P11A, Officer Magnezone), m03a1201/1203,
c00a0501/0601, m03a1301-1314.

GBA: the peak run ends won; `GETOUT_M01E02B` with `DUNGEON_ENTER` 3,
`SCENARIO_MAIN` 4, won → **`EVENT_M01E02B_L008` = `SKY_MT_BRISTLE_PEAK_CLEARED_EVENT`**
(`s_script_SKY_MT_BRISTLE_PEAK_CLEARED`; placeholder:
`SET_RESCUE_CONQUERED(RESCUE_DUNGEON_MT_STEEL)`, scn[4, 7], then the demo end).

### Fainting: hook for the flow

EoS: fainting (or leaving) in Mt. Bristle or at the peak → EVENT_M03_07A
(m03a0701 at g01p03a, "That didn't end well...", m03a0702 at g01p04a), then
EVENT_M03_07B (back to Mt. Bristle; the peak is then the re-fight).

GBA: a lost run returns `STARTMODE_DUNGEON_LOST` (Red removes the money, each
bag item with a 50% chance and the held items) and loads `mapID3`;
`GETOUT_M01E02B` sends **any result but won**, in either run (fainted, or
`STARTMODE_10`, left early, which EoS also counts as a failure), to
**`EVENT_M01E02B_L006` = `SKY_MT_BRISTLE_FAINTED_EVENT`**
(`s_script_SKY_MT_BRISTLE_FAINTED`; placeholder: the demo end); another
`SCENARIO_MAIN` goes to `EVENT_DIVIDE`. Seen working: a level-1 team falls
to Drowzee and the fainted event runs (the `peak` test ROM).

### Debug boot

```bash
make DEBUG_BOOT_EVENT=SKY_MT_BRISTLE_DEBUG_EVENT DEBUG_BOOT_LEVEL=15 [DEBUG_BOOT_SEED=7]
make DEBUG_BOOT_EVENT=SKY_MT_BRISTLE_PEAK_DEBUG_EVENT [DEBUG_BOOT_LEVEL=15]
```

`SKY_MT_BRISTLE_DEBUG_EVENT` (`EVENT_M01E02B_L001`'s slot) sets scn[4, 5]
(m03a0601) and enters Mt. Bristle; its cleared placeholder then enters the
peak. `SKY_MT_BRISTLE_PEAK_DEBUG_EVENT` (`EVENT_M01E02B_L002`) sets scn[4, 6]
and enters the peak fight. A level-12 team walks the nine floors but loses to
Drowzee when the partner falls; the `bristle` test ROM uses level 15.
`DEBUG_BOOT_FLOOR=n` applies to every run, the peak's too, so it only suits
a boot that stops in Mt. Bristle.

### Tests

`scripts/cloud/sky_regression.sh --rom bristle --rom peak` (checks in
[`scripts/cloud/sky_regression/checks/bristle.py`](../../scripts/cloud/sky_regression/checks/bristle.py),
expectations read from the generated headers): the `bristle` ROM (seed 7,
level 15) walks 1F-9F, the placeholder enters the peak and the team beats
Drowzee (about 21,400 frames, 30 s); the `peak` ROM (level 1) loses the fight
(3,700 frames, 4 s). See [SkyDemake.md, "Testing"](SkyDemake.md#testing).
