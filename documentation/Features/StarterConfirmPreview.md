# Starter Confirm Preview

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Before committing to a hero (direct pick) or partner at the start of the game, show that Pokémon’s Level 1 stats, features, moves, and info, then ask for a Yes/No confirmation.

Toggle: `gRuntimeConfig.starter_confirm_preview` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` for vanilla instant commit on A.

---

## Behavior

1. On the starter or partner list, press **A** on a Pokémon.
2. A summary window opens with tabs (Left/Right):
   - **Stats** — Level 5 HP / Atk / Sp.Atk / Def / Sp.Def (same as first dungeon)
   - **Features** — types and abilities
   - **Moves** — Level 5 moveset; Up/Down to select, **A** for move info
   - **Info** — category, Friend Area, etc.
3. On Stats / Features / Info, **A** → Yes/No: “Choose …?” / “Choose … as your partner?”
4. **Yes** commits and continues; **No** or **B** on the summary returns to the list.

The selection-list portrait box is cleared before the summary opens.

Quiz-assigned heroes skip this step (no player pick). Partners always use it when the toggle is on.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Preview UI | [`src/starter_confirm_menu.c`](../../src/starter_confirm_menu.c), [`include/starter_confirm_menu.h`](../../include/starter_confirm_menu.h) |
| Flow hooks | [`src/personality_test1.c`](../../src/personality_test1.c) |
| Strings | [`src/data/locale/personality_test1_usa.h`](../../src/data/locale/personality_test1_usa.h) (`STARTER_CONFIRM_Q`, `PARTNER_CONFIRM_Q`) |

---

## Limitations

- Preview builds a temporary Pokémon raised to level 5 (same gains/moves as `sub_8043FD0` on first dungeon entry).
- On the Moves tab, **A** opens move info (not the choose prompt); switch to another tab and press **A** to confirm.
- Does not apply to the personality-quiz hero reveal (only direct starter pick + partner).
