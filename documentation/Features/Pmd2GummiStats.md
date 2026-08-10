# PMD2 Dungeon Gummi Stats

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team dungeon gummis only restore Belly and raise IQ. Explorers of Time/Darkness/Sky also roll permanent basic-stat gains when a gummi is eaten in a dungeon.

Toggle: `gRuntimeConfig.pmd2_gummi_stats` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla IQ/Belly-only dungeon gummis.

`RUNTIME_CONFIG_SAVE_SIZE` stays `0x44` (one extra `u8` fills remaining padding).

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | After the usual IQ/Belly effects, eligible team members may gain basic stats (see rates below) |
| `FALSE` | Vanilla: dungeon gummis do not change Attack / Sp. Atk / Defense / Sp. Def |

**Eligibility** (team members only; experience-locked allies skip IQ and stats):

- Best single-type IQ affinity for that gummi is **≥ 3** (neutral or better on Red’s table), **or**
- IQ was already **999** before the gummi

**Rates** (when eligible; one roll `0..99`):

| Roll | Effect |
|------|--------|
| `0` (1%) | +1 Attack, Sp. Atk, Defense, and Sp. Def |
| `1..24` (24%) | +1 to one random basic stat |
| `25..99` | No stat change |

Stat messages reuse the Protein / Calcium / Iron / Zinc raise helpers (`Raise*StatTarget`). Friend Area / town Give Gummi and Spinda Café drinks are unchanged.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Debug menu | [`src/data/custom_debug_menu.h`](../../src/data/custom_debug_menu.h) (`Gummi stats`) |
| Dungeon eat/throw | [`src/dungeon_item_action.c`](../../src/dungeon_item_action.c) (`HandleGummiItemAction`) |

---

## Limitations

- Rates and eligibility approximate Explorers dungeon gummis (not a byte-accurate port). Wonder Gummi +3 boosts are not present in Red.
- Dual-type eligibility uses the **better** of the two type affinities (Explorers-style), while Red’s IQ gain still **sums** both types.
- Does not change Friend Area / town feeding or Café drinks.
