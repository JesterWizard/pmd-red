# Overkill EXP Bonus

---

## Index

- [Introduction](#introduction)
- [Plan](#plan)
- [Code Locations](#code-locations)
- [TODO](#todo)
- [Limitations & Bugs](#limitations--bugs)

---

## Introduction

When enabled, defeating an enemy that was at **full HP** with a single hit grants bonus experience based on how much damage spilled past 0 HP.

Toggle: `gRuntimeConfig.overkill_exp_bonus` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to restore vanilla EXP yields for KOs.

**Rule:** for every **100%** of the foe’s max HP dealt **after** HP hits 0, gain an additional **25%** of the normal EXP for that defeat.

| Example | Math |
|---------|------|
| Foe at 40/40 HP, attack deals 120 | Overkill = 120 − 40 = 80 → 80 / 40 = **2×** max HP → **+50%** EXP |

So if the normal yield is 100 Exp. Points, this KO awards 150 instead.

---

## Plan

### Eligibility

All of the following must hold when EXP is granted in `HandleDealingDamageInternal_Async`:

1. Runtime toggle is on.
2. The target was at full HP before this hit (`hpBefore == maxHPStat`).
3. Damage is not the special OHKO sentinel (`dmg != 9999`).
4. Overkill damage (`dmg − hpBefore`) is at least one full max-HP chunk.

Partial HP foes never get the bonus, even if the finishing blow overkills.

### Formula

```
overkill      = damage − hpBefore
bonusPercent  = (overkill / maxHPStat) * 25   // integer division
exp          += (exp * bonusPercent) / 100
```

The bonus is applied **after** the target’s `expMultiplier` (boosted / halved) and **before** `AddExpPoints` (so `exp_multiplier` still scales the final amount). The boosted total is shared with the whole team the same way vanilla EXP is.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Runtime toggle | `RuntimeConfig.overkill_exp_bonus` in `include/runtime.h`, `configs/runtime.c` | Master enable / disable |
| EXP grant | Defeat path in `HandleDealingDamageInternal_Async` (`src/dungeon_damage.c`) | Applies overkill % before `AddExpPoints` |

---

## TODO

- Optional battle-log line calling out the overkill bonus amount.
- Cap on bonus percent for extreme overkill / high-damage setups.

---

## Limitations & Bugs

- **OHKO / 9999 damage** hits are excluded so the sentinel value cannot produce absurd bonuses.
- Only **full-HP** one-shots count; chip damage then a finishing blow does not.
- Bonus uses **integer** floors (`overkill / maxHP`, then `exp * percent / 100`), so tiny EXP yields may truncate the bonus to 0.
- Residual / non-move damage that somehow KOs from full HP can still qualify if it goes through the same EXP path.
