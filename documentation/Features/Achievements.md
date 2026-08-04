# Achievements: Parallel Progress Rewards

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

Vanilla Rescue Team already tracks career milestones in the **Adventure Log** (story beats, legendary joins, floor/rescue counters). That system is bit-packed into a nearly full 256-byte adventure save slot and only exposes 32 fixed `AA_*` flags.

This feature adds a **parallel Achievements** system that:

- Tracks extra stats Adventure Log never owned (enemy KOs, crits, item collection, visited dungeons).
- Reuses Adventure Log counters where they already exist (rescues, floors, recruits).
- Grants **useful one-shot rewards** (Poké, storage items, rank points) on unlock.
- Lives in a compact EWRAM blob (~0x70) plus a new 0x80 save chunk, without touching Adventure Log layout or UI.

Players open **Achievements** from the title main menu (next to Adventure Log when enabled). Unlocks play a fanfare and queue a ground-side textbox popup.

Toggle: `gRuntimeConfig.achievements` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`).

---

## Plan

### Memory & save model

| Piece | Size | Notes |
|-------|------|--------|
| `struct AchievementsData` / `gAchievementsData` | `0x70` | Allocated via `_kernel_malloc_ewram` at top of free EWRAM (`asm/ram_map_ewram.s`) |
| Save chunk | `0x80` | Appended after mail info in `UnkStruct_sub_8011DAC`; bit-packed via `DataSerializer` |
| Adventure Log (`unkStruct_203B494`) | unchanged | Still the vanilla career log |

Persistent fields: unlock bits, rewarded bits, enemies defeated, critical hits, dungeon visited bitfield, items-ever-got bitfield. Runtime-only: boss run flags and popup queue (not written to flash).

### Achievement catalog (v1)

| ID | Condition | Reward (once) |
|----|-----------|----------------|
| `ACH_FIRST_RESCUE` | ≥1 friend rescue | 500 Poké |
| `ACH_RESCUES_100` | ≥100 friend rescues | 5000 Poké + 3× Reviver Seed (storage) |
| `ACH_RESCUES_500` | ≥500 friend rescues | 20000 Poké |
| `ACH_RESCUES_1000` | ≥1000 friend rescues | 50000 Poké + 5× Reviver Seed |
| `ACH_ENEMIES_1000` | ≥1000 team KOs of enemies | 500 rank points |
| `ACH_CRITS_100` | ≥100 team critical hits | Scope Lens (storage) |
| `ACH_BOSS_NO_DAMAGE` | Clear boss fight with no team HP loss | 10000 Poké |
| `ACH_STATUS_KO` | Enemy faints from residual status DoT | Pecha Scarf (storage) |
| `ACH_FLOORS_100` | ≥100 floors explored | 2000 Poké |
| `ACH_FLOORS_1000` | ≥1000 floors explored | 15000 Poké |
| `ACH_ALL_DUNGEONS` | All trackable story dungeons visited | 30000 Poké |
| `ACH_RECRUIT_50` | ≥50 Pokémon joined | 5000 Poké |
| `ACH_RECRUIT_ALL` | Every recruitable species joined | 50000 Poké |
| `ACH_ALL_TMS` | Every TM id ever obtained | 20000 Poké |
| `ACH_ALL_ITEMS` | Every non-Poké item id ever obtained | 50000 Poké + Reviver Orb |

Unlock flow: `EvaluateAchievements` / one-shot notes → set unlock bit → `GrantAchievementReward` if rewarded bit clear → queue popup → fanfare.

### Tracking sources

| Stat | Source |
|------|--------|
| Friend rescues / floors / joins | Adventure Log getters (`GetFriendRescueSuccesses`, etc.) |
| Enemy KOs / crits / team damage / boss clear | Hooks in `dungeon_damage.c` |
| Status KO | Residual damage path in `DealDamageToEntity_Async` |
| Boss no-damage window | `NoteAchievementBossFightStart` when `IsCurrentFixedRoomBossFight()` |
| Dungeon visited | `SetDungeonLocationInfo` |
| Items ever got | `AddItemToInventory` / `MoveToStorage` |

Trackable dungeons for “all dungeons”: ids `0`…`DUNGEON_PURITY_FOREST`, excluding mazes and placeholder/invalid ids (`AUTOPILOT`, `D50`, `D51`, `D54`, `D61`, etc.).

### Player UI

1. Title menu inserts **Achievements** after **Adventure Log** when `achievements` is enabled (`MaybeAppendExtraItems` in `main_menu2.c`).
2. List screen mirrors Adventure Log pagination; locked entries show placeholders.
3. On return to ground, `ProcessAchievementUnlockQueue` shows one queued unlock textbox when no other textbox is busy.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Data / API | `include/achievements.h`, `src/achievements.c` | Blob layout, evaluate/unlock/reward, save bits, note hooks |
| EWRAM alloc | `_kernel_malloc_ewram gAchievementsData` in `asm/ram_map_ewram.s` | Fixed 0x70 free-band allocation |
| Runtime toggle | `RuntimeConfig.achievements` in `include/runtime.h`, `configs/runtime.c` | Gates hooks, eval, menu entry |
| Save R/W | `SaveAchievementsData` / `RestoreAchievementsData`; wired in `src/save.c` | New chunk + `savedAchievements` checksum field |
| Boot / new game | `InitAchievements` in `src/main_loops.c`; `ResetAchievementsData` in `InitializePlayerData` / new-game path | Clear blob |
| Title menu | `MENU_ACHIEVEMENTS` in `include/constants/main_menu.h`; `src/main_menu1.c`, `src/main_menu2.c` | Screen setup / update / cleanup |
| List UI | `src/achievements_log.c`, `src/achievements_menu.c`, `src/data/achievements_log.h` | Paginated achievements screen |
| Combat hooks | `src/dungeon_damage.c` | Crits, team damage, enemy KO, status KO, boss defeated |
| Boss start | `src/run_dungeon.c` | Starts no-damage boss run when fixed-room boss fight begins |
| Adventure counters | `src/adventure_info.c` | Dungeon visit note; evaluate after rescue/floor/join updates |
| Item collection | `src/items.c` (`AddItemToInventory`, `MoveToStorage`) | Sets `itemsEverGot` bits |
| Ground popup | `ProcessAchievementUnlockQueue` from `src/ground_main.c` | Textbox when idle |

---

## TODO

- [ ] In-dungeon unlock toast (currently queues until ground).
- [ ] Show reward text on the achievements list for unlocked entries.
- [ ] Cosmetic rewards (window frames / name colors) if hooks are added later.
- [ ] Soft migration / version byte for older expanded saves if chunk layout changes again.
- [ ] Optional mid-game access (e.g. from team base) in addition to title menu.

---

## Limitations & Bugs

- **Save compatibility:** Growing `UnkStruct_sub_8011DAC` breaks vanilla-sized save loads. Expect a new game or wiped pak after enabling this chunk.
- **Adventure Log is separate:** Completing an Adventure Log milestone does not auto-list it under Achievements; only the parallel `ACH_*` set is shown.
- **“Every item / TM” is lifetime ever-obtained**, not current storage. Selling or using an item does not clear the bit; never picking it up blocks the achievement.
- **Boss no-damage** uses `IsCurrentFixedRoomBossFight()` (tileset heuristic) plus team HP loss during that window; edge cases around multi-boss or non-fixed-room bosses may not count as intended.
- **Status KO** only counts residual DoT exit reasons (burn, poison, wrap, etc.), not “last hit was a status move.”
- **Popup queue** holds 4 entries; additional unlocks in the same stretch can be dropped if the queue is full.
- **Rewards go to money / rank pts / Kangaskhan storage**, not the bag—by design, to avoid full-bag failures.

If you hit incorrect unlocks, missing rewards, or save restore failures, open an issue with the achievement id and whether you loaded an older save.
