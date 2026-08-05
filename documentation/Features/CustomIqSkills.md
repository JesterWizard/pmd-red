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

IQ unlock values and groups below match `gReqIQSkillPts` / `gIQSkillGroups` in this ROM. Skills that share a **Group** are mutually exclusive: enabling one in the IQ menu clears the others in that group. Custom skills reuse vanilla group ids only.

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

Customs reuse vanilla mutual-exclusion groups (no new group IDs). Same-group skills cannot be enabled together.

| IQ | IQ Skill | Group | What it does |
|----|----------|-------|--------------|
| 30 | Cheerleader | 7 | Raises Attack and Special Attack of friends by 1. |
| 50 | Acute Sniffer | 16 | Learns the number of items on the floor when entering a new floor. Does not count items buried in walls. |
| 65 | Bodyguard | 7 | Takes damage in place of friends who are low on HP. |
| 80 | Efficient Eater | 14 | Doubles Belly restored from Seeds and Berries. |
| 90 | Coin Watcher | 17 | When money is picked up, 1.2× the usual amount is received. |
| 100 | Brick Tough | 1 | Permanently adds 10 to max HP (can't be turned off). |
| 100 | Conserver | 6 | Avoids using moves when a regular attack is sufficient to defeat the target. |
| 120 | Quick Healer | 14 | Raises natural HP recovery. |
| 130 | Status Expert | 8 | Status moves have a 10% higher chance of succeeding. |
| 135 | Power Pitcher | 17 | Doubles the damage of thrown items such as Gravelerocks. |
| 145 | Concentrator | 4 | Raises accuracy by 1 and reduces evasion by 1. |
| 150 | PP Saver | 6 | Moves have a 10% chance of not consuming PP. |
| 155 | Multitalent | 6 | Adds 5 to the Pokémon's maximum PP while active. |
| 165 | Hit-and-Runner | 7 | Sometimes cancels foes' counterattacks (50%). |
| 170 | Gap Prober | 2 | Ranged moves and thrown items pass allies without causing damage. |
| 175 | Type Expert | 4 | Super-effective moves deal 25% more damage. |
| 175 | Type Guard | 4 | Reduces damage from super-effective attacks by 25%. |
| 175 | Wise Healer | 14 | Raises effectiveness of HP-recovery moves/items (+15%). |
| 185 | Sharpshooter | 4 | Raises critical-hit rate (+15%). |
| 190 | Deep Breather | 6 | Restores 1 PP to a random move that has lost PP when entering a new floor. |
| 195 | Practice Swinger | 1 | Raises Attack and Sp. Atk by 1 for the next turn after a move misses. |
| 210 | Stair Sensor | 16 | Learns the location of the stairs when changing floors. |
| 220 | Treasure Sense | 16 | Can see unclaimed items on the map. |
| 220 | Aggressor | 2 | Raises Attack and Sp. Atk by 1; lowers Defense and Sp. Def by 1. |
| 230 | Defender | 2 | Raises Defense and Sp. Def by 1; lowers Attack and Sp. Atk by 1. |
| 230 | Exp. Elite | 9 | Earns 1.2× experience when defeating foes. |
| 350 | Time Tripper | 10 | Raises Movement Speed by 1 while active. |
| 500 | Natural Gifter | 17 | Extends the effects of consumed berries and seeds to the whole party (leader only). |
| 520 | Extra Striker | 4 | Sometimes (33%) strikes again following a regular attack. |
| 550 | Quick Striker | 4 | Can do two regular attacks in one turn. |
| 550 | Fast Friend | 9 | Raises the chance of recruiting foes (leader only). |
| 560 | Intimidator | 7 | Sometimes makes a foe cringe when they attack. |
| 580 | Map Surveyor | 16 | Knows the floor layout (does not reveal stairs). |
| 600 | Pierce Hurler | 17 | Thrown items pierce Pokémon and walls and keep flying. |

---

## Behavior

### Brick Tough

Once unlocked (IQ ≥ 100), always enabled: `LoadIQSkills` force-sets the menu and active flags. `ToggleIQSkill` refuses to turn it off; `SetIQSkill` will not clear it when enabling another group-**1** skill. While enabled, adds **+10** to dungeon `maxHPStat` / `HP` (capped at 999) via `SyncBrickToughMaxHP`. Floor sync (`sub_806C264`) strips the +10 before writing `unk10`/`unk12` so the next floor does not double-apply. Group **1** with Item Catcher and Practice Swinger (Brick Tough stays on regardless).

### Conserver

When enabled on a team member:

1. During AI move selection (`ChooseAIMove`), if a regular attack can target an adjacent foe
2. Estimates **minimum** regular-attack damage (same dry-run path as Damage Preview, including the 0.5× regular-attack modifier)
3. If that damage is **≥** the target’s current HP, forces `ACTION_REGULAR_ATTACK` instead of using a move

Group **6** with PP Checker, Exclusive Move-User, PP Saver, Multitalent, and Deep Breather.

### Efficient Eater

When consuming an item in `CATEGORY_BERRIES_SEEDS_VITAMINS`, the automatic Belly restore (vanilla **5**) is doubled to **10** if the eater has Efficient Eater enabled. Does not affect Apples / Gummis / other food. Group **14** with Energy Saver, Nonsleeper, Self-Curer, Quick Healer, and Wise Healer.

### Coin Watcher

Floor Poké pickups (leader or ally AI) go through `AddDungeonFloorMoney`. If the picker has Coin Watcher, amount is multiplied by **6/5** (1.2×) before Treasure Rich doubling. Group **17** with Item Master and Power Pitcher.

### Quick Healer

In natural HP regen (`TickStatusAndHealthRegen`), adds `gQuickHealerRegenValue` (−50) to regen speed (lower = faster), same style as Heal Ribbon. Group **14** with Energy Saver, Nonsleeper, Self-Curer, Efficient Eater, and Wise Healer.

### Wise Healer

In `HealTargetHP`, if the Pokémon receiving HP has Wise Healer and the heal amount is nonzero, multiplies restored HP by **115/100** (+15%, rounded down). Applies to Oran/Sitrus berries, healing moves, and other `HealTargetHP` paths. Does not change max-HP boosts (e.g. Life Seed). Group **14** with Energy Saver, Nonsleeper, Self-Curer, Efficient Eater, and Quick Healer.

### Treasure Sense

While the camera target (usually the leader) has Treasure Sense enabled, sets `showAllFloorItems` each camera update — same flag as Scanner Orb / X-Ray Specs. Unclaimed floor items appear on the minimap (and off-FOV as sprites). Does not reveal enemies (Radar) or stairs. Group **16** with Trap Seer, Lava Evader, Stair Sensor, Map Surveyor, and Acute Sniffer.

### Stair Sensor

While the camera target has Stair Sensor enabled, sets `unk18211` each camera update — same flag as Stairs Orb (`stairSpotter`). Stairs appear on the minimap for every floor. Group **16** with Trap Seer, Lava Evader, Treasure Sense, Map Surveyor, and Acute Sniffer.

### Map Surveyor

While the camera target has Map Surveyor enabled, the minimap draws the full floor **layout** (open tiles / walls) even for unexplored tiles. Does **not** reveal stairs, items, traps, or enemies by itself (use Stair Sensor / Treasure Sense / Radar-style effects for those). Group **16** with Trap Seer, Lava Evader, Stair Sensor, Treasure Sense, and Acute Sniffer.

### Acute Sniffer

On each new floor (after `CreateFloorItems` in `run_dungeon.c`, skipped on mid-dungeon save resume): if any team member has Acute Sniffer enabled, counts valid floor items and shows a log message with the total. Items on wall terrain (buried) are excluded; shop and Monster House items are included. Group **16** with Trap Seer, Lava Evader, Stair Sensor, Treasure Sense, and Map Surveyor.

### Cheerleader

In `CalcDamage`: if the attacker is adjacent to at least one same-team Pokémon with Cheerleader enabled, gains **+1** offensive stage (Atk and Sp. Atk). Does not boost the Cheerleader themselves; multiple adjacent Cheerleaders do not stack. Reflected in Damage Preview. Group **7** with Nontraitor, Hit-and-Runner, Intimidator, and Bodyguard (mutex with Bodyguard).

### Bodyguard

In `UseMoveAgainstTargets`: if a single-target enemy attack is aimed at a Pokémon with **HP ≤ 25%** max, and an adjacent same-team Pokémon has Bodyguard enabled (and can act), the attack is redirected to that Bodyguard. Area moves (around / room / floor / frontal cone) are not redirected. Statuses that prevent attacking (sleep, paralysis, cringe, frozen, etc.) disable interception. Group **7** with Nontraitor, Hit-and-Runner, Intimidator, and Cheerleader (mutex with Cheerleader).

### Aggressor

In `CalcDamage`: attacker with Aggressor gets **+1** offensive stage (Atk / Sp. Atk); defender with Aggressor gets **−1** defensive stage (Def / Sp. Def). Applied before stage clamp (0–20). Reflected in Damage Preview. Group **2** with Course Checker, Defender, and Gap Prober (mutex with Defender / Gap Prober / Course Checker).

### Defender

In `CalcDamage`: attacker with Defender gets **−1** offensive stage; defender with Defender gets **+1** defensive stage. Applied before stage clamp (0–20). Reflected in Damage Preview. Group **2** with Course Checker, Aggressor, and Gap Prober (mutex with Aggressor / Gap Prober / Course Checker).

### Gap Prober

Line-of-sight moves (`sub_80566F8`) and straight thrown items skip allies (treatment = ally) without applying effects and keep traveling. Also lets Course Checker’s line check ignore allies when Gap Prober is on. Mutually exclusive with Course Checker (group **2**) so partners can fire through the team. Group **2** with Course Checker, Aggressor, and Defender.

### Practice Swinger

On an accuracy miss in `UseMoveAgainstTargets`, sets `practiceSwingerBoost = 2` if Practice Swinger is enabled. While the counter is nonzero, `CalcDamage` applies **+1** offensive stage (Atk and Sp. Atk). Counter decrements each end of turn and clears immediately when the Pokémon deals damage. Group **1** with Item Catcher and Brick Tough.

### Deep Breather

On each new floor (after team spawn in `run_dungeon.c`, skipped on mid-dungeon save resume): for each team member with Deep Breather, pick one random move with `PP < base PP` and restore **1** PP. No effect if every move is at max. Group **6** with PP Checker, Exclusive Move-User, Conserver, PP Saver, and Multitalent.

### Status Expert

In `GetAccuracyPercent`, after accuracy / evasion stage modifiers: if the move’s base power is **0** (status move) and Status Expert is enabled, add **+10** to the hit chance (capped at 100). Also reflected in Damage Preview accuracy. Group **8** with Status Checker.

### Power Pitcher

Doubles thrown-item damage for the thrower:

- Rocks (Geo Pebble / Gravelerock): fixed damage ×2 in `sub_8048340`
- Stick / spike projectiles: `HandleDamagingMove` modifier **2.0×**
- Thrown Blast Seed: thrown damage ×2

Group **17** with Item Master and Coin Watcher.

### Multitalent

While enabled, each move’s maximum PP is **base + 5** (`GetEntityMoveMaxPP`). Used for Max Elixir / PP restore caps, Deep Breather eligibility, AI elixir weight, and dungeon move-list display. Disabling clamps current PP down to the new max via `LoadIQSkills`. Group **6** with PP Checker, Exclusive Move-User, Conserver, PP Saver, and Deep Breather.

### Concentrator

In `GetAccuracyPercent`: attacker with Concentrator gets **+1** accuracy stage; defender with Concentrator gets **−1** evasion stage (Compound Eyes-style modifiers, not permanent stage changes). Group **4** with Type-Advantage Master, Sure-Hit Attacker, Quick Dodger, Type Expert, Type Guard, and Sharpshooter.

### PP Saver

When enabled on a team member, each move use has a **10%** chance to skip PP consumption (including Pressure’s extra PP cost, and Snore / Sleep Talk’s direct PP drain). Group **6** with PP Checker, Exclusive Move-User, Conserver, Multitalent, and Deep Breather.

### Hit-and-Runner

In `HandleDealingDamage_Async`, after Counter / Mini Counter / Mirror Coat / Rough Skin build `returnDmg`: **50%** chance to zero it out if the attacker has Hit-and-Runner. Group **7** with Nontraitor, Intimidator, Cheerleader, and Bodyguard.

### Intimidator

In `UseMoveAgainstTargets`, if the defender has Intimidator: **33%** chance to inflict Cringe on the attacker and cancel the hit. Applies to close-range moves (not line-of-sight, room, floor, self, or thrown items/`MOVE_PROJECTILE`). Attackers with Inner Focus are unaffected. PP is still spent. Group **7** with Nontraitor, Hit-and-Runner, Cheerleader, and Bodyguard.

### Type Expert / Type Guard

Applied in `sub_806E100` when the final type matchup is super-effective:

- **Type Expert** (attacker): multiplies damage by **1.25**
- **Type Guard** (defender): multiplies damage by **0.75**

Group **4** with Type-Advantage Master, Sure-Hit Attacker, Quick Dodger, Concentrator, and Sharpshooter (so Type Expert and Type Guard are mutually exclusive with each other and those). Damage Preview uses the same path, so estimates reflect these skills.

### Sharpshooter

In `CalcDamage` crit odds (after Scope Lens / Type-Advantage Master): adds `gCritOddsSharpShooter` (**+15**). Group **4** with Type-Advantage Master, Sure-Hit Attacker, Quick Dodger, Concentrator, Type Expert, and Type Guard.

### Exp. Elite

In `AddExpPoints`, if the recipient has Exp. Elite enabled, multiplies the granted amount by **6/5** (1.2×) after the global `exp_multiplier` runtime option. Applies to that Pokémon’s share of KO EXP (and any other EXP routed through `AddExpPoints`). Group **9** with Exp. Go-Getter, Efficiency Expert, Weak-Type Picker, Dedicated Traveler, and Fast Friend.

### Fast Friend

In `TryRecruitMonster`, if the **leader** has Fast Friend enabled, adds **+50** to the recruit rate on the 1000-scale roll (**+5%**). Same scale as Friend Bow (+100 / +10%). Only the leader’s skill counts. Group **9** with Exp. Go-Getter, Efficiency Expert, Weak-Type Picker, Dedicated Traveler, and Exp. Elite.

### Time Tripper

In `CalcSpeedStage`, adds **+1** movement speed while enabled (before clamp to `MAX_SPEED_STAGE`). Group **10** with All-Terrain Hiker and Super Mobile.

### Natural Gifter

When the **leader** eats a berry or seed from the bag (`sub_80479B8` with thrown=`FALSE`) and has Natural Gifter enabled, the same effect (and the usual berry/seed Belly restore) is applied to every other valid team member. Does not trigger on thrown items, Blast Seeds, vitamins, Gummis, or food. Group **17** with Item Master, Coin Watcher, and Power Pitcher.

### Quick Striker

In `sub_8067904`, after the normal regular-attack hit(s) from `sub_8070828` (Swift Swim / Chlorophyll), performs **one extra** `TryUseChosenMove` with `MOVE_REGULAR_ATTACK` if Quick Striker is enabled. Struggle is unaffected. Group **4** with Type-Advantage Master, Sure-Hit Attacker, Quick Dodger, Concentrator, Sharpshooter, Type Expert, Type Guard, and Extra Striker (mutex with Extra Striker).

### Extra Striker

Same hook as Quick Striker: **33%** chance of one extra regular attack. Does not stack with Quick Striker (same group **4**). Struggle is unaffected.

### Pierce Hurler

In `sub_80671A0` (item throw), sets the same pierce flags as Pierce Band / Pierce status (`unk0=1`, range `99`): thrown items pass through walls and Pokémon, applying their effect to each mon hit along the path. Group **17** with Item Master, Coin Watcher, Power Pitcher, and Natural Gifter.

---

## Adding a Skill

Each skill needs:

| Field | Where |
|-------|--------|
| id | Append to `enum IQSkillID` in [`include/constants/iq_skill.h`](../../include/constants/iq_skill.h) (before `NUM_IQ_SKILLS`). Keep customs after `IQ_EXCLUSIVE_MOVE_USER` so `IQ_FIRST_CUSTOM_SKILL` stays correct. |
| IQ to unlock | `gReqIQSkillPts[]` in [`src/dungeon_data.c`](../../src/dungeon_data.c) |
| group | `gIQSkillGroups[]` in [`src/dungeon_data.c`](../../src/dungeon_data.c) — reuse a **vanilla** group id (same group ⇒ mutually exclusive when toggled on); do not invent new group numbers |
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
| Power Pitcher | [`src/dungeon_item_action.c`](../../src/dungeon_item_action.c) (thrown rock / projectile / Blast Seed) |
| Multitalent | [`src/dungeon_logic.c`](../../src/dungeon_logic.c) (`GetEntityMoveMaxPP` / `LoadIQSkills` clamp) |
| Brick Tough | [`src/dungeon_logic.c`](../../src/dungeon_logic.c) (`SyncBrickToughMaxHP` / `LoadIQSkills`), [`src/pokemon_3.c`](../../src/pokemon_3.c) (`ToggleIQSkill` / `SetIQSkill`), [`src/dungeon_mon_spawn.c`](../../src/dungeon_mon_spawn.c) (`sub_806C264`) |
| Efficient Eater | [`src/dungeon_item_action.c`](../../src/dungeon_item_action.c) (berries/seeds belly restore) |
| Coin Watcher | [`src/dungeon_modifiers.c`](../../src/dungeon_modifiers.c) (`AddDungeonFloorMoney`) |
| Treasure Sense | [`src/dungeon_tilemap.c`](../../src/dungeon_tilemap.c) (`UpdateCamera` → `showAllFloorItems`) |
| Stair Sensor | [`src/dungeon_tilemap.c`](../../src/dungeon_tilemap.c) (`UpdateCamera` → `unk18211`) |
| Map Surveyor | [`src/dungeon_map.c`](../../src/dungeon_map.c) (minimap layout via `layoutKnown`) |
| Acute Sniffer | [`src/move_orb_effects_2.c`](../../src/move_orb_effects_2.c) (`ApplyAcuteSnifferOnFloorEnter`), called from [`src/run_dungeon.c`](../../src/run_dungeon.c) after `CreateFloorItems` |
| Cheerleader | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`CalcDamage` / `HasAdjacentCheerleaderAlly`) |
| Bodyguard | [`src/dungeon_move.c`](../../src/dungeon_move.c) (`UseMoveAgainstTargets` / `FindAdjacentBodyguard`) |
| Aggressor | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`CalcDamage`) |
| Defender | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`CalcDamage`) |
| Gap Prober | [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c) (`sub_80566F8`), [`src/dungeon_projectile_throw.c`](../../src/dungeon_projectile_throw.c), [`src/dungeon_ai_attack.c`](../../src/dungeon_ai_attack.c) (`IsTargetInRange`) |
| Practice Swinger | [`src/dungeon_move.c`](../../src/dungeon_move.c) / [`src/dungeon_damage.c`](../../src/dungeon_damage.c) / [`src/dungeon_turn_effects.c`](../../src/dungeon_turn_effects.c) |
| Deep Breather | [`src/move_orb_effects_2.c`](../../src/move_orb_effects_2.c) (`ApplyDeepBreatherOnFloorEnter`), called from [`src/run_dungeon.c`](../../src/run_dungeon.c) |
| Hit-and-Runner | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`HandleDealingDamage_Async`) |
| Intimidator | [`src/dungeon_move.c`](../../src/dungeon_move.c) (`UseMoveAgainstTargets`) |
| Type Expert / Type Guard | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`sub_806E100`) |
| Sharpshooter | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`CalcDamage`) |
| Exp. Elite | [`src/dungeon_leveling.c`](../../src/dungeon_leveling.c) (`AddExpPoints`) |
| Fast Friend | [`src/dungeon_mon_recruit.c`](../../src/dungeon_mon_recruit.c) (`TryRecruitMonster`) |
| Time Tripper | [`src/dungeon_logic.c`](../../src/dungeon_logic.c) (`CalcSpeedStage`) |
| Natural Gifter | [`src/dungeon_item_action.c`](../../src/dungeon_item_action.c) (`SpreadNaturalGifterEffects`) |
| Quick Striker | [`src/dungeon_action_handler.c`](../../src/dungeon_action_handler.c) (`sub_8067904`) |
| Extra Striker | [`src/dungeon_action_handler.c`](../../src/dungeon_action_handler.c) (`sub_8067904`) |
| Pierce Hurler | [`src/dungeon_action_handler.c`](../../src/dungeon_action_handler.c) (`sub_80671A0`) |
| Quick Healer | [`src/dungeon_turn_effects.c`](../../src/dungeon_turn_effects.c) (`TickStatusAndHealthRegen`) |
| Wise Healer | [`src/move_orb_effects_2.c`](../../src/move_orb_effects_2.c) (`HealTargetHP`) |
| Damage estimate | `EstimateRegularAttackMinDamage` / `EstimateMoveDamageRange` in [`src/dungeon_damage.c`](../../src/dungeon_damage.c) |

---

## Limitations

- Expanding flags from 24 → 64 bits changes save layout for `Pokemon.IQSkills` (not bit-compatible with vanilla saves).
- Effects remain hand-written hooks (no central effect callback table).
- Conserver uses minimum estimated damage (conservative); misses / Wonder Guard / special handlers can still fail to KO.
- Conserver is not auto-enabled for wild Pokémon (team / IQ menu only).
- Energy Saver is already a vanilla skill (IQ 250, group 14); it was not re-added as a custom.
