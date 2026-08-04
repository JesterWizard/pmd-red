# Damage Preview

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

When enabled, opening a move’s submenu (A on the moves list) shows estimated damage and accuracy in a small window below the moves list.

Toggle: `gRuntimeConfig.damage_preview` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to disable.

Example:

```
Estimated Damage:
30-58
Accuracy:
90%
```

The preview is read-only: it does not advance dungeon RNG or change combat outcomes.

---

## Behavior

1. On the dungeon moves menu, press A on a move to open Use / Set / Info.
2. Preview uses that move against the first enemy in `SetTargetsForMove` range (facing / cone / line / around).
3. Display in a **separate** window under the moves list (moves box stays vanilla size / spacing):
   - **Damage:** dry-run `CalcDamage` min/max. Status / no target / zero-power → `--`.
   - **Accuracy:** product of both accuracy stages. No target → `--`.
4. Preview is only drawn while the submenu is open.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Preview draw / calcs | [`src/dungeon_damage_preview.c`](../../src/dungeon_damage_preview.c), [`include/dungeon_damage_preview.h`](../../include/dungeon_damage_preview.h) |
| Moves menu hook | [`src/dungeon_menu_moves.c`](../../src/dungeon_menu_moves.c) |
| Dry accuracy | [`src/dungeon_move_util.c`](../../src/dungeon_move_util.c) (`GetAccuracyPercent` / `GetCombinedAccuracyPercent`) |
| Dry damage | [`src/dungeon_damage.c`](../../src/dungeon_damage.c) (`gCalcDamagePreviewMode`) |
| Labels | [`src/dungeon_strings.c`](../../src/dungeon_strings.c) |

---

## Limitations

- Only shown from the moves list submenu (not while free-aiming on the floor).
- Linked moves: only the selected slot (not the full link chain).
- Multi-target: first enemy in the target list only.
- Multi-hit: per-hit range, not total expected damage.
- No redirect simulation (Lightningrod, Magic Coat, etc.).
- Fixed-damage / OHKO / special handlers not using `CalcDamage`: damage shown as `--`.
