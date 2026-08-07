# Custom Abilities

---

## Index

- [Introduction](#introduction)
- [Default Abilities](#default-abilities)
- [Custom Abilities](#custom-abilities-1)
- [Behavior](#behavior)
- [Adding an Ability](#adding-an-ability)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Extends the vanilla ability ID space past `ABILITY_SHIELD_DUST` (`0x4C`) so new abilities can be assigned to species and hooked into dungeon gameplay.

Toggle: `gRuntimeConfig.custom_abilities` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to disable all custom abilities (`ABILITY_FIRST_CUSTOM_ABILITY` and above): species lookup returns `ABILITY_UNKNOWN`, `AbilityIsActive` never matches them, and summary text falls back to the Unknown description.

Abilities remain species-fixed `u8` IDs (two slots per Pokémon). Effects are applied by hand-written `AbilityIsActive(entity, ABILITY_*)` hooks — there is no central ability effect callback table (same style as Custom IQ Skills).

---

## Default Abilities

Vanilla IDs `ABILITY_UNKNOWN` (`0`) through `ABILITY_SHIELD_DUST` (`0x4C`). Names and descriptions live in `gAbilityNames` / `gAbilityDescriptions` in [`src/strings.c`](../../src/strings.c). Species assignment is in [`data/monster/monster_data.json`](../../data/monster/monster_data.json).

Effects are scattered across dungeon code (`dungeon_damage.c`, `dungeon_move_util.c`, `move_orb_effects_1.c`, `dungeon_turn_effects.c`, `dungeon_misc.c`, weather, etc.). Prefer `AbilityIsActive` over raw `abilities[]` compares so the custom toggle is respected.

---

## Custom Abilities

Customs start at `ABILITY_FIRST_CUSTOM_ABILITY` (`ABILITY_NORMALIZE`, `0x4D`). Append IDs in [`include/constants/ability.h`](../../include/constants/ability.h) and document them here.

| Ability | What it does |
|---------|--------------|
| Normalize | All moves (including the typeless regular attack) are treated as **Normal-type** (PMD2). Assigned to Skitty and Delcatty (with Cute Charm). |

---

## Behavior

### Normalize

In `GetMoveTypeForMonster`: if Normalize is active, return `TYPE_NORMAL` for every move — including `MOVE_REGULAR_ATTACK` (vanilla type `TYPE_NONE`). Overrides Hidden Power’s rolled type as well.

Effects that use `GetMoveTypeForMonster` (damage, STAB, matchups, Lightningrod, AI weights, Damage Preview) see Normal-type. Species: Skitty and Delcatty (`ABILITY_CUTE_CHARM` + `ABILITY_NORMALIZE`).

### Runtime gate

When `custom_abilities` is `FALSE`:

1. `GetPokemonAbility` returns `ABILITY_UNKNOWN` for any custom ID in `monspara` (dungeon spawn copies that result).
2. `AbilityIsActive(..., customId)` is always `FALSE`.
3. `GetAbilityDescription` / `CopyAbilityNametoBuffer` treat custom IDs as Unknown.

When `TRUE`, customs behave like vanilla once assigned and hooked.

### Assignment

- Species table: `"abilities": ["ABILITY_…", …]` in `monster_data.json` (second slot optional → `0` / Unknown).
- Dungeon entity: both slots copied at spawn into `EntityInfo.abilities[2]`.
- In-dungeon mutation: Trace / Role Play / Skill Swap still rewrite `abilities[]` (custom IDs are `u8`; serializer already stores one byte per slot).

---

## Adding an Ability

Each ability needs:

| Field | Where |
|-------|--------|
| id | Append after `ABILITY_SHIELD_DUST` in [`include/constants/ability.h`](../../include/constants/ability.h). Keep `ABILITY_FIRST_CUSTOM_ABILITY` as the first custom id (`0x4D`). Bump `NUM_ABILITIES`. IDs must stay ≤ 255. |
| name / description | `gAbilityNames` / `gAbilityDescriptions` in [`src/strings.c`](../../src/strings.c) (designator `[ABILITY_…]`; match vanilla `{color RED}Name{reset}: …` description style) |
| species | `"abilities"` on the species in [`data/monster/monster_data.json`](../../data/monster/monster_data.json), then rebuild so `monster_data.inc` regenerates |
| effect | `AbilityIsActive(entity, ABILITY_*)` hook in the relevant gameplay file |
| docs | Add a row under [Custom Abilities](#custom-abilities-1) and a Behavior subsection if the effect is non-obvious |

Example (Normalize):

```c
#define ABILITY_NORMALIZE 0x4D
#define ABILITY_FIRST_CUSTOM_ABILITY ABILITY_NORMALIZE
#define NUM_ABILITIES 0x4E
```

Checklist after adding an ID:

1. Strings for name + description
2. Assign on at least one species (or leave unassigned until ready)
3. Implement the gameplay hook(s)
4. Confirm `custom_abilities = FALSE` hides/disables it
5. Update this doc

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Ability ids | [`include/constants/ability.h`](../../include/constants/ability.h) (`ABILITY_FIRST_CUSTOM_ABILITY`, `IS_CUSTOM_ABILITY`) |
| Names / descs | [`src/strings.c`](../../src/strings.c), accessors in [`src/pokemon_abilities.c`](../../src/pokemon_abilities.c) |
| Species table | [`data/monster/monster_data.json`](../../data/monster/monster_data.json) → `monster_data.inc` via `tools/dungeonjson` |
| Species lookup gate | `GetPokemonAbility` in [`src/pokemon.c`](../../src/pokemon.c) |
| Active check gate | `AbilityIsActive` in [`src/dungeon_logic.c`](../../src/dungeon_logic.c) |
| Spawn copy | [`src/dungeon_mon_spawn.c`](../../src/dungeon_mon_spawn.c) (uses `GetPokemonAbility`) |
| Summary UI | [`src/pokemon_summary_window.c`](../../src/pokemon_summary_window.c) |
| Mid-dungeon save | [`src/dungeon_serializer.c`](../../src/dungeon_serializer.c) (`WriteAbility` / `ReadAbility`, 1 byte each) |
| Normalize (move type) | `GetMoveTypeForMonster` in [`src/dungeon_logic.c`](../../src/dungeon_logic.c) |
| Typical effect sites | [`src/dungeon_damage.c`](../../src/dungeon_damage.c), [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c), [`src/move_orb_effects_1.c`](../../src/move_orb_effects_1.c), [`src/dungeon_turn_effects.c`](../../src/dungeon_turn_effects.c), [`src/dungeon_misc.c`](../../src/dungeon_misc.c), [`src/weather.c`](../../src/weather.c) |

---

## Limitations

- Effects remain hand-written hooks (no central effect callback table).
- Ability IDs are `u8`; at most 255 distinct abilities (`ABILITY_UNKNOWN` through `255`).
- A few vanilla sites compare `abilities[]` directly (e.g. Pickup, Trace). New customs should use `AbilityIsActive` so the runtime toggle applies.
- Abilities are not stored on overworld `Pokemon` save structs — only species data (and in-dungeon entity / mid-dungeon save). Changing who has what is a species-table edit.
- Disabling `custom_abilities` does not rewrite mid-dungeon save bytes that already hold custom IDs; effects and UI still treat them as inactive / Unknown via the gates above.
