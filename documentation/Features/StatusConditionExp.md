# Status Condition EXP

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team grants no Exp. Points when an enemy faints to residual status damage (burn, poison, wrap, etc.). The residual-damage path uses a dummy attacker and always passes `giveExp = FALSE`.

When enabled, those status KOs award the same team EXP share as a normal defeat.

Toggle: `gRuntimeConfig.status_condition_exp` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla (no EXP on status KOs).

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Enemy faint from listed status exits → full team EXP (boosted / halved multipliers honored) |
| `FALSE` | Vanilla: no EXP from status residual KOs |

Eligible exit reasons (same set as the Status KO achievement): burn, poison / badly poisoned, constriction, wrap, curse, leech seed, perish song, nightmare.

Does **not** enable recruitment on status KOs (still uses the dummy attacker for the faint path).

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Runtime toggle | `RuntimeConfig.status_condition_exp` in `include/runtime.h`, `configs/runtime.c` | Master enable / disable |
| EXP grant | `DealDamageToEntity_Async` in `src/dungeon_damage.c` | After a confirmed status faint, `AddExpPoints` to all team members |

---

## Limitations

- Only enemies; team members fainting to status never grant EXP.
- Weather, hunger, traps, Destiny Bond, Liquid Ooze, and similar non-status residuals are unchanged.
- Recruitment is still unavailable for status KOs.
