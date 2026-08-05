# Evolution Stat Boost

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

When enabled, each evolution multiplies the Pokémon’s **current** HP, Attack, Sp. Atk, Defense, and Sp. Def by **110%** (+10%). A second evolution applies another +10% on top of the new values.

Toggle: `gRuntimeConfig.evolution_stat_boost` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla (stats unchanged on evolve).

Vanilla Red Rescue Team keeps the pre-evolution’s accumulated stats when the species changes; this option adds a permanent bump at each evolve step.

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | On each evolution: current stats × 1.10 (integer math) |
| `FALSE` | Vanilla: species/name/EXP update only; stats unchanged |

**Caps (same as level-up):** HP ≤ 999; Atk / Sp. Atk / Def / Sp. Def ≤ 255.

**Applies to:**

- Luminous Cave / overworld evolution (`sub_808F798`)
- In-dungeon enemy evolution (`sub_8072B78`)

Does not retroactively boost Pokémon that are already evolved when the flag is turned on, and does not change wild spawn calcs for evolved species that never evolved as that individual.

---

## Code Locations

| Feature | Location | Description |
|--------|----------|-------------|
| Runtime toggle | `RuntimeConfig.evolution_stat_boost` in `include/runtime.h`, `configs/runtime.c` | Master enable / disable |
| Overworld evolve | `ApplyEvolutionStatBoost` in `src/pokemon_evolution.c` | Boosts `Pokemon` HP / offense before re-recruit |
| Dungeon enemy evolve | `sub_8072B78` in `src/dungeon_leveling.c` | Boosts dungeon entity HP / atk / def |

---

## Limitations

- Integer division (`stat * 110 / 100`); very low stats may round down the gain to 0.
- Compounding: two evolutions ≈ ×1.21, not a flat +20% from the unevolved baseline.
- Shedinja created alongside Ninjask also goes through the overworld evolve path and receives the boost on whatever stats that copy carried.
- Turning the feature off mid-save does not remove boosts already applied.
