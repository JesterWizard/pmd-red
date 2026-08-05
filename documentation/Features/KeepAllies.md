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
| `TRUE` (default) | Skip auto Stand By while a partner follower is active (`PARTNER1_KIND != 0`) |
| `FALSE` | Vanilla: clear `POKEMON_FLAG_ON_TEAM` for sally members on dismiss |

Still dismissed when:

1. **Explicit Stand By / Farewell** — Friend Area talk, Team menu, or dungeon Farewell (unchanged menu paths).
2. **Story alone segments** — scripts that set `PARTNER1_KIND` to `0` before calling dismiss (e.g. imprisoned chapter, some mid-dungeon story hubs) still clear the party so cutscenes and forced-alone stretches stay correct.

If nobody is removed, the “dispersed to the Friend Area(s)” text is skipped (same as vanilla when the party was already empty).

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

- Story scripts that dismiss **without** setting `PARTNER1_KIND` to `0` will keep allies on the team; most such cutscenes use fixed `SELECT_ENTITIES` lists and do not spawn sally followers.
- Partner / leader are never removed by these routines (same as vanilla `sub_808D4B0`).
