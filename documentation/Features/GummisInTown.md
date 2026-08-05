# Gummis in Town

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Vanilla Red Rescue Team only offers **Give Gummi** when talking to a Pokémon in its Friend Area (party action menu). The town **Team** list can give held items, but not feed gummis for IQ.

When enabled, town Team members get the same Give Gummi flow as Friend Areas.

Toggle: `gRuntimeConfig.gummis_in_town` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for Friend-Area-only feeding.

---

## Behavior

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Town **Team** → select Pokémon → **Give Gummi** (IQ + Friend-Area stat boosts via existing gummi UI) |
| `FALSE` | Vanilla: no Give Gummi on the town Team menu |

Effects match Friend Area feeding (`GetGummiItemStatBoost`): type-based IQ gain and random held-stat boosts. Option is greyed when the Toolbox has no gummis.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Town Team menu | [`src/friend_list_menu.c`](../../src/friend_list_menu.c) |
| Gummi feed UI | [`src/code_80227B8.c`](../../src/code_80227B8.c) (`sub_80227B8`) |
| Friend Area Give Gummi (unchanged) | [`src/party_list_menu.c`](../../src/party_list_menu.c) |

---

## Limitations

- Only the town Team list (`CreateFriendListMenu(0)`). Friend-area Visit list is unchanged.
- Does not change dungeon gummi eating.
