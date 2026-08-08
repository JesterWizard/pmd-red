# PMD2 Send Home

## Introduction

With this feature enabled, a newly recruited Pokémon can be sent to its
Friend Area while a dungeon is still in progress. A recruit can also join
when the dungeon party is full; the player can send an existing member or the
new recruit home.

Toggle: `gRuntimeConfig.pmd2_send_home` in
[`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to
`FALSE` for the vanilla Red/Blue behavior.

## Behavior

- Team-menu Farewell sends new recruits to their Friend Area instead of
  deleting them.
- If a successful recruit cannot fit because of the four-member or six-body-
  size limit, the player can send a current team member home and continue
  recruiting.
- The new recruit can be sent home immediately instead of joining the active
  dungeon party.
- Friend Area capacity is checked immediately; the existing release menu is
  shown when that area is full.

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Recruitment | [`src/dungeon_mon_recruit.c`](../../src/dungeon_mon_recruit.c) |
| Team Farewell | [`src/dungeon_action_handler.c`](../../src/dungeon_action_handler.c) |
| Sendable-member picker | [`src/dungeon_menu_team.c`](../../src/dungeon_menu_team.c) |

## Save Compatibility

No save layout changes are required. Members sent home are written through the
existing recruited-Pokémon storage path.
