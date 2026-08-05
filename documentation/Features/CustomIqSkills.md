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

IQ unlock values below match `gReqIQSkillPts` in this ROM.

---

## Default IQ Skills

| IQ | IQ Skill | What it does |
|----|----------|--------------|
| 1 | Item Catcher | Catches thrown items and holds them, provided it isn't already holding something. |
| 1 | Course Checker | Checks whether walls or Pokémon are blocking the path before using a move or thrown item. |
| 1 | Dedicated Traveler | Prioritises moving through the dungeon and uses moves/items less frequently. |
| 1 | Item Master | Uses or throws its held item. |
| 1 | Exclusive Move-User | Only uses moves; never uses the regular attack. |
| 2 | PP Checker | Stops using linked moves that are nearly out of PP and avoids moves with 0 PP. |
| 10 | Efficiency Expert | When multiple enemies are available, targets the one with the lowest HP. |
| 25 | Status Checker | Doesn't use a move that inflicts a status condition the target already has. |
| 40 | Nontraitor | Prevents attacks from accidentally hitting allies while Confused/Cowering. |
| 70 | Self-Curer | Recovers from status conditions more quickly. |
| 100 | Quick Dodger | Improves evasion against attacks and moves. |
| 105 | Type-Advantage Master | Improves critical-hit rate against foes with a type disadvantage. |
| 125 | Weak-Type Picker | Prioritises enemies against which it has a type advantage. |
| 140 | Trap Avoider | Makes the Pokémon more likely to avoid visible traps. |
| 160 | Nonsleeper | Resists sleep from traps and enemy moves. |
| 200 | Exp. Go-Getter | Prioritises enemies that give the most EXP. |
| 250 | Energy Saver | Makes the Belly decrease more slowly. |
| 300 | Lava Evader | Avoids walking onto lava. |
| 400 | All-Terrain Hiker | Allows walking across water, lava and clouds. |
| 500 | Sure-Hit Attacker | Regular attacks never miss. |
| 600 | Trap Seer | Reveals a trap underneath the Pokémon without triggering it. |
| 800 | House Avoider | Avoids entering Monster Houses. |
| 990 | Super Mobile | Walks through water, lava and clouds and can travel through walls. |

---

## Custom IQ Skills

| IQ | IQ Skill | What it does |
|----|----------|--------------|
| 100 | Conserver | Avoids using moves when a regular attack is sufficient to defeat the target. |

---

## Behavior

### Conserver

When enabled on a team member:

1. During AI move selection (`ChooseAIMove`), if a regular attack can target an adjacent foe
2. Estimates **minimum** regular-attack damage (same dry-run path as Damage Preview, including the 0.5× regular-attack modifier)
3. If that damage is **≥** the target’s current HP, forces `ACTION_REGULAR_ATTACK` instead of using a move

Mutually exclusive with PP Checker and Exclusive Move-User (group 6): enabling one in the IQ menu clears the others.

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

Flag capacity is **32 bits** (`NUM_PICKED_IQ_SKILLS == 4`). Do not exceed skill index 31 without rewriting the bit helpers.

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
| Damage estimate | `EstimateRegularAttackMinDamage` / `EstimateMoveDamageRange` in [`src/dungeon_damage.c`](../../src/dungeon_damage.c) |

---

## Limitations

- Expanding flags from 24 → 32 bits changes save layout for `Pokemon.IQSkills` (not bit-compatible with vanilla 24-bit saves).
- Effects remain hand-written hooks (no central effect callback table).
- Conserver uses minimum estimated damage (conservative); misses / Wonder Guard / special handlers can still fail to KO.
- Conserver is not auto-enabled for wild Pokémon (team / IQ menu only).
- At most 8 custom skills with the current 4-byte flag array (indices 24–31).
