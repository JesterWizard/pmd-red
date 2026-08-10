# Keep Allies Overnight

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team puts every non-leader (and often non-partner) team member on **Stand By** whenever you return from an adventure or the day ends (`DISMISSAL_SALLY_MEMBER*` → `sub_808D4B0` / `sub_808D500`). You must visit Friend Areas again to rebuild the party.

When enabled, recruited allies stay on the team across days and dungeon returns.

Toggle: `gRuntimeConfig.keep_allies` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla auto Stand By.

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Skip auto Stand By on dungeon return / end of day; skip the disperse popup |
| `FALSE` | Vanilla: clear `POKEMON_FLAG_ON_TEAM` for sally members on dismiss |

Still dismissed when:

1. **Explicit Stand By / Farewell** — Friend Area talk, Team menu, or dungeon Farewell (unchanged menu paths).

`DISMISSAL_SALLY_MEMBER*` only shows “dispersed to the Friend Area(s)” when the dismiss routine reports that someone was removed. With `keep_allies`, that routine returns false immediately, so the popup is skipped.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Auto dismiss | [`src/pokemon.c`](../../src/pokemon.c) (`sub_808D4B0`, `sub_808D500`) |
| Script callers | `DISMISSAL_SALLY_MEMBER*_FUNC` in [`src/data/ground/ground_event_data.h`](../../src/data/ground/ground_event_data.h) via special `0x3B` case `9` in [`src/ground_script.c`](../../src/ground_script.c) |
| Manual Stand By | [`src/friend_area_action_menu.c`](../../src/friend_area_action_menu.c), [`src/party_list_menu.c`](../../src/party_list_menu.c), [`src/friend_list_menu.c`](../../src/friend_list_menu.c) |

---

## Limitations

- Story alone cutscenes that call dismiss will also keep allies on the team; most such scenes use fixed `SELECT_ENTITIES` lists and do not spawn sally followers.
- Partner / leader are never removed by these routines (same as vanilla `sub_808D4B0`).
