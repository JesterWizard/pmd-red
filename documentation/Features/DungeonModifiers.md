# Dungeon Floor Modifiers

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

Vanilla Rescue Team already varies floors with weather and visibility. This feature adds **random floor modifiers** that can appear on top of those systems, giving non-boss floors occasional extra challenge or reward.

Toggle: `gRuntimeConfig.dungeon_modifiers` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to disable rolling entirely.

When enabled, each new floor:

1. Has a **20%** chance to get a modifier.
2. If it does, picks **one** of the four modifiers at random.
3. Announces it with a battle-log popup (same style as weather).
4. Applies the effect for the rest of that floor.

| Modifier | Effect |
|----------|--------|
| Poisonous Air | Natural HP regeneration is disabled (same gate as poison status) |
| Darkness | Forces heavy darkness (`visibilityRange = 1`: 1-tile hallways) |
| Electric Terrain | Electric-type moves deal **1.5×** damage |
| Treasure Rich | Poké picked up on the floor grants **double** money |

Boss fixed rooms and mid-floor resume do not re-roll. Resume restores the saved modifier from dungeon suspend data.

---

## Plan

### Roll & store

`TryRollAndApplyFloorModifier` runs once per new floor (after floor properties load, before visibility init):

- Clears / sets `gDungeon->unk644.floorModifier`.
- Skips if the runtime toggle is off or the floor is a boss fixed room (`IsCurrentFixedRoomBossFight`).
- On Darkness, mutates `floorProperties.visibilityRange` to `1` so the vanilla dark-floor path applies.

The modifier byte lives in `unkDungeon644`, which is already blob-serialized on suspend, so mid-dungeon saves keep the active effect.

### Announce

`AnnounceFloorModifier` runs near weather announce after the leader/camera are ready. Each modifier has its own string in `dungeon_strings.c`.

### Gameplay hooks

| Modifier | Hook |
|----------|------|
| Poisonous Air | `TickStatusAndHealthRegen` skips the HP regen block |
| Darkness | Vanilla `visibilityRange` / corridor dimming |
| Electric Terrain | Type damage multipliers in `sub_806E100` (`×1.5` via existing `0x18000` fixed-point) |
| Treasure Rich | `AddDungeonFloorMoney` wraps floor Poké pickups (leader + ally AI) |

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Runtime toggle | `RuntimeConfig.dungeon_modifiers` in `include/runtime.h`, `configs/runtime.c` | Master enable / disable |
| Constants | `include/constants/dungeon_modifiers.h` | Modifier IDs + 20% chance |
| Core API | `src/dungeon_modifiers.c`, `include/dungeon_modifiers.h` | Roll, apply, announce, money helper |
| Storage | `unkDungeon644.floorModifier` in `include/structs/str_dungeon.h` | Per-floor state (suspend-safe) |
| Floor start | `RunDungeon_Async` in `src/run_dungeon.c` | Roll before `sub_803F27C`; announce after weather |
| Regen | `TickStatusAndHealthRegen` in `src/dungeon_turn_effects.c` | Poisonous Air |
| Damage | `sub_806E100` in `src/dungeon_damage.c` | Electric Terrain |
| Money | `src/dungeon_items.c`, `src/dungeon_ai_items.c` | Treasure Rich pickups |
| Strings | `src/dungeon_strings.c`, `include/dungeon_strings.h` | Announce messages |

---

## TODO

- Optional floor-status HUD / Others-menu listing of the active modifier.
- Configurable chance or weighted modifier table in runtime config.
- More modifiers (e.g. Fire Terrain, Item Scarcity).

---

## Limitations & Bugs

- **Boss floors** never roll modifiers.
- **Luminous Orb / X-Ray Specs / Blinker** still interact with visibility as in vanilla; Darkness only forces the floor’s base light level.
- Electric Terrain **stacks** with STAB, Charge, and weather multipliers.
- Treasure Rich only doubles **ground Poké pickups** on the floor (leader and ally AI), not mission rewards, bank interest, or inventory cleanup conversion.
- Announcement is skipped on dungeon resume; the effect still applies from saved state.
