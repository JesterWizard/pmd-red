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

Gen IV / PMD2 backports use Explorers of Time/Darkness/Sky multipliers and descriptions. Species assignments follow the task list of Gen I–III Pokémon that received these abilities in this pack (second slot; keep Gen III primary). Toxic Boost is included for Zangoose even though it is Gen V in the main series.

---

## Default Abilities

Vanilla IDs `ABILITY_UNKNOWN` (`0`) through `ABILITY_SHIELD_DUST` (`0x4C`). Names and descriptions live in `gAbilityNames` / `gAbilityDescriptions` in [`src/strings.c`](../../src/strings.c). Species assignment is in [`data/monster/monster_data.json`](../../data/monster/monster_data.json).

Effects are scattered across dungeon code (`dungeon_damage.c`, `dungeon_move_util.c`, `move_orb_effects_1.c`, `dungeon_turn_effects.c`, `dungeon_misc.c`, weather, etc.). Prefer `AbilityIsActive` over raw `abilities[]` compares so the custom toggle is respected. Defender checks that should respect Mold Breaker use `AbilityIsActiveOnDefense(attacker, defender, ability)`.

---

## Custom Abilities

Customs start at `ABILITY_FIRST_CUSTOM_ABILITY` (`ABILITY_NORMALIZE`, `0x4D`). Append IDs in [`include/constants/ability.h`](../../include/constants/ability.h) and document them here.

| Ability | ID | What it does (PMD2) | Species (slot 1) |
|---------|----|---------------------|------------------|
| Normalize | `0x4D` | All moves treated as Normal-type | Skitty, Delcatty |
| Adaptability | `0x4E` | STAB 1.5× → 2× | Eevee, Corphish, Crawdaunt |
| Aftermath | `0x4F` | Small explosion on faint | Voltorb, Electrode |
| Anger Point | `0x50` | Max Atk + SpAtk stages on taking a crit | Primeape, Tauros |
| Anticipation | `0x51` | Message if foe has a SE move after regular attack | Barboach, Whiscash |
| Download | `0x52` | +1 Atk if foe Def &lt; SpDef, else +1 SpAtk on hit | Porygon2 |
| Dry Skin | `0x53` | Fire ×1.5; Water heals; sun drains; rain heals | Paras, Parasect |
| Filter | `0x54` | SE damage ×3/4 | Mr. Mime |
| Gluttony | `0x55` | Faster belly drain | Shuckle, Zigzagoon, Linoone |
| Ice Body | `0x56` | Hail: no chip + faster regen | Snorunt, Glalie, Spheal, Sealeo, Walrein |
| Iron Fist | `0x57` | Punching moves ×1.5 | Hitmonchan, Ledian |
| Leaf Guard | `0x58` | Status immunity in sun | Tangela, Hoppip, Skiploom, Jumpluff |
| Magic Guard | `0x59` | Immune to residual/recoil (not direct attacks) | Cleffa, Clefairy, Clefable |
| Mold Breaker | `0x5A` | Ignore foe abilities when attacking | Pinsir |
| No Guard | `0x5B` | Always hit / ignore acc/eva stages | Machop, Machoke, Machamp |
| Poison Heal | `0x5C` | Poison ticks heal instead of damage | Shroomish, Breloom |
| Quick Feet | `0x5D` | ×2 action rate when statused | Granbull, Teddiursa, Ursaring, Poochyena, Mightyena |
| Reckless | `0x5E` | Recoil moves ×3 damage; ×2 recoil HP loss | Hitmonlee |
| Rivalry | `0x5F` | +1/−1 Atk stage vs same/opposite Nidoran gender | Nidoran lines |
| Skill Link | `0x60` | Multihit always max (5) | Shellder, Cloyster |
| Sniper | `0x61` | Crit damage ×2 instead of ×1.5 | Horsea, Seadra, Kingdra, Remoraid, Octillery |
| Snow Cloak | `0x62` | +2 evasion in hail/snow | Swinub, Piloswine |
| Solar Power | `0x63` | +1 SpAtk stage in sun; HP loss on attack | Sunkern, Sunflora, Tropius |
| Solid Rock | `0x64` | SE damage ×3/4 | Camerupt |
| Stall | `0x65` | AI (non-leaders): adjacent targets only | Sableye |
| Super Luck | `0x66` | +crit odds | Murkrow, Absol |
| Tangled Feet | `0x67` | +2 evasion when confused/cross-eyed | Pidgey line, Spinda |
| Technician | `0x68` | Moves with power ≤4 (not regular/thrown) ×1.5 | Meowth, Persian, Scyther, Scizor, Smeargle, Hitmontop |
| Tinted Lens | `0x69` | NVE damage ×1.5 | Venonat, Venomoth |
| Toxic Boost | `0x6A` | ×2 Atk while poisoned | Zangoose |

---

## Behavior

### Normalize

In `GetMoveTypeForMonster`: if Normalize is active, return `TYPE_NORMAL` for every move — including `MOVE_REGULAR_ATTACK` (vanilla type `TYPE_NONE`). Overrides Hidden Power’s rolled type as well.

Effects that use `GetMoveTypeForMonster` (damage, STAB, matchups, Lightningrod, AI weights, Damage Preview) see Normal-type. Thrown items and Vacuum-Cut go through that path; fixed-damage items that do not use it are unaffected.

### Mold Breaker

`AbilityIsActiveOnDefense` returns `FALSE` when the attacker has Mold Breaker, so defender abilities that alter the attack (Levitate, Wonder Guard, absorbs, Thick Fat, Filter/Solid Rock, contact abilities, etc.) do not apply.

### Rivalry

RRT has no dungeon gender field. Only Nidoran-line species IDs map to female/male; other species are treated as genderless (no Rivalry modifier).

### Runtime gate

When `custom_abilities` is `FALSE`:

1. `GetPokemonAbility` returns `ABILITY_UNKNOWN` for any custom ID in `monspara` (dungeon spawn copies that result).
2. `AbilityIsActive(..., customId)` is always `FALSE`.
3. `GetAbilityDescription` / `CopyAbilityNametoBuffer` treat custom IDs as Unknown.

When `TRUE`, customs behave like vanilla once assigned and hooked.

### Assignment

- Species table: `"abilities": ["ABILITY_…", …]` in `monster_data.json` (second slot optional → `0` / Unknown).
- Gen IV backports keep the Gen III ability in slot 0 and put the Gen IV ability in slot 1 (replacing a second Gen III ability when present, e.g. Corphish drops Shell Armor for Adaptability).
- Dungeon entity: both slots copied at spawn into `EntityInfo.abilities[2]`.
- In-dungeon mutation: Trace / Role Play / Skill Swap still rewrite `abilities[]` (custom IDs are `u8`; serializer already stores one byte per slot).

---

## Adding an Ability

Each ability needs:

| Field | Where |
|-------|--------|
| id | Append after customs in [`include/constants/ability.h`](../../include/constants/ability.h). Keep `ABILITY_FIRST_CUSTOM_ABILITY` as the first custom id (`0x4D`). Bump `NUM_ABILITIES`. IDs must stay ≤ 255. |
| name / description | `gAbilityNames` / `gAbilityDescriptions` in [`src/strings.c`](../../src/strings.c) (designator `[ABILITY_…]`; match vanilla `{color CYAN}Name{reset}: …` description style) |
| species | `"abilities"` on the species in [`data/monster/monster_data.json`](../../data/monster/monster_data.json), then rebuild so `monster_data.inc` regenerates |
| effect | `AbilityIsActive(entity, ABILITY_*)` hook in the relevant gameplay file |
| docs | Add a row under [Custom Abilities](#custom-abilities-1) and a Behavior subsection if the effect is non-obvious |

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
| Active check gate | `AbilityIsActive` / `AbilityIsActiveOnDefense` in [`src/dungeon_logic.c`](../../src/dungeon_logic.c) |
| Spawn copy | [`src/dungeon_mon_spawn.c`](../../src/dungeon_mon_spawn.c) (uses `GetPokemonAbility`) |
| Summary UI | [`src/pokemon_summary_window.c`](../../src/pokemon_summary_window.c) |
| Mid-dungeon save | [`src/dungeon_serializer.c`](../../src/dungeon_serializer.c) (`WriteAbility` / `ReadAbility`, 1 byte each) |
| Damage / stats / crit | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) |
| Accuracy / multihit | [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c) |
| Turn / weather / belly | [`src/dungeon_turn_effects.c`](../../src/dungeon_turn_effects.c) |
| Status (Leaf Guard) | [`src/move_orb_effects_1.c`](../../src/move_orb_effects_1.c), [`src/move_orb_effects_2.c`](../../src/move_orb_effects_2.c) |
| Stall AI | [`src/dungeon_ai_attack.c`](../../src/dungeon_ai_attack.c) |
| Anticipation | [`src/dungeon_move.c`](../../src/dungeon_move.c) |
| Config constants | [`src/dungeon_config.c`](../../src/dungeon_config.c) (`gCritOddsSuperLuck`, `gSolarPowerDmgValue`, `gDrySkinSunDmgValue`) |

---

## Limitations

- Effects remain hand-written hooks (no central effect callback table).
- Ability IDs are `u8`; at most 255 distinct abilities (`ABILITY_UNKNOWN` through `255`).
- A few vanilla sites compare `abilities[]` directly (e.g. Pickup, Trace). New customs should use `AbilityIsActive` so the runtime toggle applies.
- Abilities are not stored on overworld `Pokemon` save structs — only species data (and in-dungeon entity / mid-dungeon save). Changing who has what is a species-table edit.
- Disabling `custom_abilities` does not rewrite mid-dungeon save bytes that already hold custom IDs; effects and UI still treat them as inactive / Unknown via the gates above.
- Rivalry only resolves gender for Nidoran-line species IDs.
