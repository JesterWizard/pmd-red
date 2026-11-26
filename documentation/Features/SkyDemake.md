# Explorers of Sky Demake (Chapter 1)

---

## Index

- [Introduction](#introduction)
- [What plays](#what-plays)
- [Building](#building)
- [EoS maps](#eos-maps)
- [Beach Cave and the boss](#beach-cave-and-the-boss)
- [Testing](#testing)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

A demake of the opening chapter of *Pokémon Mystery Dungeon: Explorers of Sky*
("A Storm at Sea"), from the storm to the end of the Zubat & Koffing fight in
Beach Cave Pit. The ground scenes use the real EoS background maps, converted
from the EoS ROM into Rescue Team's ground-map format. The choreography and text
follow the EoS scene scripts (`SCRIPT/<level>/m01a0xxx.ssb`).

![Chapter 1 in the GBA engine](images/sky_demake.png)

It is the default story of the modern build on this branch (`STORY=sky`).
After the chapter the game hands over to Red's story at the team base
(team naming), so the rest of the game stays playable.

---

## What plays

The personality quiz and starter / partner choice are unchanged. Then:

| # | EoS script | Map (converted EoS level) | Scene |
|---|---|---|---|
| 1 | — | — | Chapter card: **Chapter 1 — A Storm at Sea** |
| 2 | m01a0101/0102 | `v01p01a` storm at sea | Voices in the dark, then the waves |
| 3 | m01a0103 | `d01p11a` beach (day) | The hero washed up on the sand |
| 4 | m01a0104 | `g01p01b` Wigglytuff's Guild (dusk) | The partner loses their nerve on the sentry grate; Zubat & Koffing watch and follow |
| 5 | m01a0202/0203 | `v01p04b`, `v01p05b` | Krabby blowing bubbles at sunset |
| 6 | m01a0204–0208 | `d01p11b` beach (sunset) | The partner finds the hero; "you're a human?"; naming; Zubat & Koffing steal the Relic Fragment; Yes/No "can you please help me?" |
| 7 | — | Beach Cave B1F–B2F | Dungeon (Tiny Woods renamed) |
| 8 | m01a0401 | Beach Cave Pit (B3F) | Pre-fight dialogue, then the Zubat & Koffing fight |
| 9 | m01a0701 | `d01p41a` Beach Cave Pit | The thieves give the fragment back and flee |
| 10 | m01a0702 | `d01p11b` beach (sunset) | The Relic Fragment; "Form a team / Say no" |

Losing in Beach Cave plays m01a0301 on the beach ("Ouch! We didn't do too
well...") and goes straight back in.

---

## Building

```bash
make -j$(nproc)                 # sky story (default for the modern build)
make -j$(nproc) STORY=vanilla   # Red's story, no EoS content
```

- `STORY=sky` selects the ground-script pack `src/data/ground/sky/` and
  defines `SKY_STORY`. Everything EoS-specific is inside `#ifdef SKY_STORY`.
- `MODERN=0` (retail-matching) always uses the vanilla pack.
- `custom_story = TRUE` in `configs/runtime.c` still wins over `STORY`.
- Flipping `STORY` rebuilds every C object (the pack stamp is a dependency of
  all C objects, because headers test `SKY_STORY`).

---

## EoS maps

The EoS ROM is never committed. Only the converted map files are:
`data/map_bg/E*.bpl`, `E*c.bpc`, `E*m.bma` (+ GMLZ copies in `data/map_bg_lz/`).

| Map id | File stem | EoS level | Tiles |
|---|---|---|---|
| `MAP_SKY_STORM_SEA` | `EV0101A` | `v01p01a` | 613 (VRAM) |
| `MAP_SKY_BEACH_DAY` | `ED0111A` | `d01p11a` | 1651 (streamed) |
| `MAP_SKY_GUILD_DUSK` | `EG0101B` | `g01p01b` | 952 (VRAM) |
| `MAP_SKY_KRABBY_BUBBLES` | `EV0104B` | `v01p04b` | 1067 (streamed) |
| `MAP_SKY_KRABBY_SUNSET` | `EV0105B` | `v01p05b` | 1080 (streamed) |
| `MAP_SKY_BEACH_DUSK` | `ED0111B` | `d01p11b` | 1767 (streamed) |
| `MAP_SKY_BEACH_CAVE_PIT` | `ED0141A` | `d01p41a` | 1503 (streamed) |

Converter: [`tools/convert_eos_ground_map.py`](../../tools/convert_eos_ground_map.py)

```bash
tools/convert_eos_ground_map.py EOS.nds d01p11b ED0111B --render check.png
```

- Lossless: EoS and RT share 4bpp tiles, 3×3-tile chunks and 16-colour
  palettes, so tiles, palettes and chunk layouts are copied, not re-quantized.
  `--render` draws the written RT files back to a PNG; for all seven maps it is
  pixel-identical to skytemple's render of the EoS original.
- Both EoS layers become the RT dual-layer map (EoS upper layer → RT layer 0,
  in front of sprites). Frame 0 of BPA tile animations is baked in; palette
  and tile animations are dropped.
- Maps over the VRAM tile budget (1024 dual-layer, 896 single-layer) are
  streamed by `src/ground_bg_tile_stream.c`, which has no tile-flip bits, so
  the converter bakes flipped tiles for those.
- Collision comes from the EoS BMA.
- New BPCs stay uncompressed in ROM (streamed like the café's);
  `compress_ground_assets.py` skips `E*.bpc`.

Map registration: `include/constants/ground_map.h`, `include/map_files_table.h`,
`src/map_files_table.c`, `src/ground_map_conversion_table.c`,
`src/map_script_table.c`, `src/ground_files_table.c` (sorted by name; the
block is inserted under `#ifdef SKY_STORY` and later indices shift by
`SKY_GROUND_FILES`), `src/ground_map_files_sky.c`.

`SELECT_MAP` also selects the script file of the map in `gMapScriptTable`, so
each EoS map points at the station file whose groups use it (gs178 for the
beach, guild and storm scenes, gs179 for Beach Cave Pit).

---

## Beach Cave and the boss

Tiny Woods plays Beach Cave ([`src/sky_story.c`](../../src/sky_story.c)):

- Name "Beach Cave", floors shown as B1F/B2F/B3F (`IsStairDirectionUp`).
- Tileset borrowed from Lapis Cave (blue rock).
- Wild Pokémon: Krabby, Shellder, Kabuto, Corsola (EoS has Shellos instead of
  Krabby; Shellos is not in Rescue Team).
- On the story run (`SCENARIO_MAIN` major 2) B3F is **Beach Cave Pit**: the
  Team Meanies boss room, with Gengar → Zubat (Lv 5), Ekans → Koffing (Lv 5)
  and Medicham removed. Its cutscene is `CUTSCENE_BEACH_CAVE_PIT`
  ([`src/dungeon_cutscene_beach_cave.c`](../../src/dungeon_cutscene_beach_cave.c)):
  m01a0401 dialogue, boss music, and the dungeon ends once both are down. No
  cutscene flags are touched, so Sinister Woods is unaffected.
- Later visits to Beach Cave have a normal B3F.

---

## Testing

Two test-only Makefile hooks (normal builds are unaffected):

```bash
make DEBUG_BOOT_EVENT=EVENT_DIVIDE DEBUG_BOOT_FLOOR=3
```

- `DEBUG_BOOT_EVENT=<script>`: New Game skips the quiz, creates the default
  team (Charmander / Squirtle) at story scenario (2,0) and runs that event
  script; `EVENT_DIVIDE` starts chapter 1 the normal way. Naming screens are
  skipped (`RENAME_ALLY` keeps the default name).
- `DEBUG_BOOT_FLOOR=<n>`: every dungeon run starts on floor n (3 = Beach Cave
  Pit).

Then drive it with `mgba_shot` (A every 60 frames reaches the dungeon at about
frame 15000):

```bash
P="--press 600:START --press 900:A --press 1200:A --press 1500:A --press 1800:A"
for f in $(seq 2100 60 30000); do P="$P --press $f:A"; done
build/tools/mgba_shot pmd_red.gba build/shots/sky --frames 30000 --every 250 $P
make -j$(nproc)   # plain build again afterwards
```

Winning the boss fight by mashing A needs a strong team; for that test set
`max_level_stats = TRUE` in `configs/runtime.c` temporarily.

---

## Code Locations

| Piece | Path |
|-------|------|
| Story pack select, test hooks | [`Makefile`](../../Makefile) (`STORY`, `DEBUG_BOOT_EVENT`, `DEBUG_BOOT_FLOOR`) |
| Opening scenes (gs178 groups 1–8) | [`src/data/ground/sky/sky_d01p01_scenes.h`](../../src/data/ground/sky/sky_d01p01_scenes.h) |
| Beach Cave Pit aftermath (gs179 group 1) | [`src/data/ground/sky/ground_data_d01p02_station.h`](../../src/data/ground/sky/ground_data_d01p02_station.h) |
| Scene order (`EVENT_M01E01A_L001`) | [`src/data/ground/ground_event_data.h`](../../src/data/ground/ground_event_data.h) |
| Zubat / Koffing / Wigglytuff / Krabby / Diglett ground actors | [`src/ground_lives.c`](../../src/ground_lives.c), [`include/sky_story.h`](../../include/sky_story.h) |
| Beach Cave overrides | [`src/sky_story.c`](../../src/sky_story.c), [`src/dungeon_floor_spawns.c`](../../src/dungeon_floor_spawns.c), [`src/dungeon_generation_fixed.c`](../../src/dungeon_generation_fixed.c), [`src/dungeon_info.c`](../../src/dungeon_info.c), [`src/strings.c`](../../src/strings.c), [`src/ground_place.c`](../../src/ground_place.c) |
| Boss cutscene | [`src/dungeon_cutscene_beach_cave.c`](../../src/dungeon_cutscene_beach_cave.c), [`src/dungeon_cutscene.c`](../../src/dungeon_cutscene.c), [`include/constants/cutscenes.h`](../../include/constants/cutscenes.h) |
| Chapter title | [`src/chapter_titles.c`](../../src/chapter_titles.c) |
| EoS map converter | [`tools/convert_eos_ground_map.py`](../../tools/convert_eos_ground_map.py) |

---

## Limitations

- The DS second background screen (sky panoramas, the Relic Fragment
  close-up, lightning flashes) has no GBA equivalent and is left out; scenes
  use the main background only.
- The Relic Fragment is not drawn as an object; the dialogue carries it.
- EoS music is not ported; scenes use Red tracks (Stormy Sea, Oceanic friend
  area, There's Trouble, In the Depths of the Pit, Boss Battle).
- The dungeon floors use a Rescue Team tileset (Lapis Cave), not EoS's Beach
  Cave tileset.
- The re-fight text (m01a0501) is not used; a retry replays m01a0401.
- After the chapter, Red's team-base scene runs unchanged, so its dialogue
  refers to Red's story ("rescue team", the fissure).
