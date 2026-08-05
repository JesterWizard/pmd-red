# Custom IQ Skills

---

## Index

- [Introduction](#introduction)
- [Default IQ Skills](#default-iq-skills)
- [Custom IQ Skills](#custom-iq-skills-1)
- [Behavior](#behavior)
- [Adding a Skill](#adding-a-skill)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Extends the vanilla IQ skill system past the original 24-bit flag limit and adds custom skills.

Toggle: `gRuntimeConfig.custom_iq_skills` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to hide and disable all custom skills (`IQ_FIRST_CUSTOM_SKILL` and above).

IQ unlock values and groups below match `gReqIQSkillPts` / `gIQSkillGroups` in this ROM. Skills that share a **Group** are mutually exclusive: enabling one in the IQ menu clears the others in that group.

---

## Default IQ Skills

| IQ | IQ Skill | Group | What it does |
|----|----------|-------|--------------|
| 1 | Item Catcher | 1 | Catches thrown items and holds them, provided it isn't already holding something. |
| 1 | Course Checker | 2 | Checks whether walls or Pokémon are blocking the path before using a move or thrown item. |
| 1 | Dedicated Traveler | 9 | Prioritises moving through the dungeon and uses moves/items less frequently. |
| 1 | Item Master | 17 | Uses or throws its held item. |
| 1 | Exclusive Move-User | 6 | Only uses moves; never uses the regular attack. |
| 2 | PP Checker | 6 | Stops using linked moves that are nearly out of PP and avoids moves with 0 PP. |
| 10 | Efficiency Expert | 9 | When multiple enemies are available, targets the one with the lowest HP. |
| 25 | Status Checker | 8 | Doesn't use a move that inflicts a status condition the target already has. |
| 40 | Nontraitor | 7 | Prevents attacks from accidentally hitting allies while Confused/Cowering. |
| 70 | Self-Curer | 14 | Recovers from status conditions more quickly. |
| 100 | Quick Dodger | 4 | Improves evasion against attacks and moves. |
| 105 | Type-Advantage Master | 4 | Improves critical-hit rate against foes with a type disadvantage. |
| 125 | Weak-Type Picker | 9 | Prioritises enemies against which it has a type advantage. |
| 140 | Trap Avoider | 11 | Makes the Pokémon more likely to avoid visible traps. |
| 160 | Nonsleeper | 14 | Resists sleep from traps and enemy moves. |
| 200 | Exp. Go-Getter | 9 | Prioritises enemies that give the most EXP. |
| 250 | Energy Saver | 14 | Makes the Belly decrease more slowly. |
| 300 | Lava Evader | 16 | Avoids walking onto lava. |
| 400 | All-Terrain Hiker | 10 | Allows walking across water, lava and clouds. |
| 500 | Sure-Hit Attacker | 4 | Regular attacks never miss. |
| 600 | Trap Seer | 16 | Reveals a trap underneath the Pokémon without triggering it. |
| 800 | House Avoider | 11 | Avoids entering Monster Houses. |
| 990 | Super Mobile | 10 | Walks through water, lava and clouds and can travel through walls. |

---

## Custom IQ Skills

| IQ | IQ Skill | Group | What it does |
|----|----------|-------|--------------|
| 80 | Efficient Eater | 21 | Doubles Belly restored from Seeds and Berries. |
| 90 | Coin Watcher | 24 | When money is picked up, 1.2× the usual amount is received. |
| 100 | Conserver | 6 | Avoids using moves when a regular attack is sufficient to defeat the target. |
| 120 | Quick Healer | 28 | Raises natural HP recovery. |
| 130 | Status Expert | 20 | Status moves have a 10% higher chance of succeeding. |
| 145 | Concentrator | 26 | Raises accuracy by 1 and reduces evasion by 1. |
| 150 | PP Saver | 18 | Moves have a 10% chance of not consuming PP. |
| 165 | Hit-and-Runner | 25 | Sometimes cancels foes' counterattacks (50%). |
| 175 | Type Expert | 19 | Super-effective moves deal 25% more damage. |
| 175 | Type Guard | 19 | Reduces damage from super-effective attacks by 25%. |
| 185 | Sharpshooter | 27 | Raises critical-hit rate (+15%). |
| 190 | Deep Breather | 23 | Restores 1 PP to a random move that has lost PP when entering a new floor. |
| 220 | Treasure Sense | 22 | Can see unclaimed items on the map. |

---

## Behavior

### Conserver

When enabled on a team member:

1. During AI move selection (`ChooseAIMove`), if a regular attack can target an adjacent foe
2. Estimates **minimum** regular-attack damage (same dry-run path as Damage Preview, including the 0.5× regular-attack modifier)
3. If that damage is **≥** the target’s current HP, forces `ACTION_REGULAR_ATTACK` instead of using a move

Mutually exclusive with PP Checker and Exclusive Move-User (group 6): enabling one in the IQ menu clears the others.

### Efficient Eater

When consuming an item in `CATEGORY_BERRIES_SEEDS_VITAMINS`, the automatic Belly restore (vanilla **5**) is doubled to **10** if the eater has Efficient Eater enabled. Does not affect Apples / Gummis / other food. Own group (21).

### Coin Watcher

Floor Poké pickups (leader or ally AI) go through `AddDungeonFloorMoney`. If the picker has Coin Watcher, amount is multiplied by **6/5** (1.2×) before Treasure Rich doubling. Own group (24).

### Quick Healer

In natural HP regen (`TickStatusAndHealthRegen`), adds `gQuickHealerRegenValue` (−50) to regen speed (lower = faster), same style as Heal Ribbon. Own group (28).

### Treasure Sense

While the camera target (usually the leader) has Treasure Sense enabled, sets `showAllFloorItems` each camera update — same flag as Scanner Orb / X-Ray Specs. Unclaimed floor items appear on the minimap (and off-FOV as sprites). Does not reveal enemies (Radar) or stairs. Own group (22).

### Deep Breather

On each new floor (after team spawn in `run_dungeon.c`, skipped on mid-dungeon save resume): for each team member with Deep Breather, pick one random move with `PP < base PP` and restore **1** PP. No effect if every move is at max. Own group (23).

### Status Expert

In `GetAccuracyPercent`, after accuracy / evasion stage modifiers: if the move’s base power is **0** (status move) and Status Expert is enabled, add **+10** to the hit chance (capped at 100). Also reflected in Damage Preview accuracy. Own group (20).

### Concentrator

In `GetAccuracyPercent`: attacker with Concentrator gets **+1** accuracy stage; defender with Concentrator gets **−1** evasion stage (Compound Eyes-style modifiers, not permanent stage changes). Own group (26).

### PP Saver

When enabled on a team member, each move use has a **10%** chance to skip PP consumption (including Pressure’s extra PP cost, and Snore / Sleep Talk’s direct PP drain). Own group (18): can be enabled alongside any other skill.

### Hit-and-Runner

In `HandleDealingDamage_Async`, after Counter / Mini Counter / Mirror Coat / Rough Skin build `returnDmg`: **50%** chance to zero it out if the attacker has Hit-and-Runner. Own group (25).

### Type Expert / Type Guard

Applied in `sub_806E100` when the final type matchup is super-effective:

- **Type Expert** (attacker): multiplies damage by **1.25**
- **Type Guard** (defender): multiplies damage by **0.75**

Mutually exclusive with each other (group 19). Damage Preview uses the same path, so estimates reflect these skills.

### Sharpshooter

In `CalcDamage` crit odds (after Scope Lens / Type-Advantage Master): adds `gCritOddsSharpShooter` (**+15**). Own group (27).

---

## Adding a Skill

Each skill needs:

| Field | Where |
|-------|--------|
| id | Append to `enum IQSkillID` in [`include/constants/iq_skill.h`](../../include/constants/iq_skill.h) (before `NUM_IQ_SKILLS`). Keep customs after `IQ_EXCLUSIVE_MOVE_USER` so `IQ_FIRST_CUSTOM_SKILL` stays correct. |
| IQ to unlock | `gReqIQSkillPts[]` in [`src/dungeon_data.c`](../../src/dungeon_data.c) |
| group | `gIQSkillGroups[]` in [`src/dungeon_data.c`](../../src/dungeon_data.c) — same group ⇒ mutually exclusive when toggled on |
| name / description | `gIQSkillNames` / `gIQSkillDescriptions` in [`src/strings.c`](../../src/strings.c) |
| effect | `IqSkillIsEnabled(entity, IQ_*)` hook in the relevant gameplay file |

Flag capacity is **64 bits** (`NUM_PICKED_IQ_SKILLS == 8`). Bit helpers use skill-index byte/bit addressing (supports indices past 31).

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Skill ids | [`include/constants/iq_skill.h`](../../include/constants/iq_skill.h) |
| Flags / save bits | [`include/structs/str_iq_skill_flags.h`](../../include/structs/str_iq_skill_flags.h), [`src/pokemon_3.c`](../../src/pokemon_3.c), [`src/code_8094F88.c`](../../src/code_8094F88.c) |
| Unlock + groups | [`src/dungeon_data.c`](../../src/dungeon_data.c), [`include/dungeon_data.h`](../../include/dungeon_data.h) |
| Availability gate | `HasIQForSkill` in [`src/pokemon_3.c`](../../src/pokemon_3.c) |
| Names / descs | [`src/strings.c`](../../src/strings.c) |
| Conserver AI | [`src/dungeon_ai_attack.c`](../../src/dungeon_ai_attack.c) |
| PP Saver | [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c) (`sub_8057588`), Snore/Sleep Talk in [`src/dungeon_action_execution.c`](../../src/dungeon_action_execution.c) |
| Status Expert / Concentrator | [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c) (`GetAccuracyPercent`) |
| Efficient Eater | [`src/dungeon_item_action.c`](../../src/dungeon_item_action.c) (berries/seeds belly restore) |
| Coin Watcher | [`src/dungeon_modifiers.c`](../../src/dungeon_modifiers.c) (`AddDungeonFloorMoney`) |
| Treasure Sense | [`src/dungeon_tilemap.c`](../../src/dungeon_tilemap.c) (`UpdateCamera` → `showAllFloorItems`) |
| Deep Breather | [`src/move_orb_effects_2.c`](../../src/move_orb_effects_2.c) (`ApplyDeepBreatherOnFloorEnter`), called from [`src/run_dungeon.c`](../../src/run_dungeon.c) |
| Hit-and-Runner | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`HandleDealingDamage_Async`) |
| Type Expert / Type Guard | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`sub_806E100`) |
| Sharpshooter | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`CalcDamage`) |
| Quick Healer | [`src/dungeon_turn_effects.c`](../../src/dungeon_turn_effects.c) (`TickStatusAndHealthRegen`) |
| Damage estimate | `EstimateRegularAttackMinDamage` / `EstimateMoveDamageRange` in [`src/dungeon_damage.c`](../../src/dungeon_damage.c) |

---

## Limitations

- Expanding flags from 24 → 64 bits changes save layout for `Pokemon.IQSkills` (not bit-compatible with vanilla saves).
- Effects remain hand-written hooks (no central effect callback table).
- Conserver uses minimum estimated damage (conservative); misses / Wonder Guard / special handlers can still fail to KO.
- Conserver is not auto-enabled for wild Pokémon (team / IQ menu only).
- Energy Saver is already a vanilla skill (IQ 250, group 14); it was not re-added as a custom.
