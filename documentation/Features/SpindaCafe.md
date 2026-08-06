# Spinda's Café (Whiscash Pond)

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Adds a PMD2-style **Spinda's Café** on Whiscash Pond (north of Pokémon Square): outdoor NPCs for the Juice Bar (Spinda) and Recycle Shop (Wynaut). Wobbuffet is present and only says his name. No indoor map in v1.

Toggle: `gRuntimeConfig.spinda_cafe` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`).

Unlock: café NPCs spawn after `QUEST_CAN_ACCESS_JOBS` on normal pond visits.

---

## Behavior

### Juice Bar (Spinda)

1. Mix Drink → pick a Toolbox food item (berries / seeds / vitamins / food / gummis).
2. Pick a teammate currently on the active team.
3. Item is consumed. Message flow:
   - Spinda mixes the drink (Happy portrait).
   - **System:** `{NAME} drank the juice!`
   - Spinda reacts (Happy / Joyous / Sad portraits from SpriteCollab).
   - **System:** IQ / Attack / Defense / etc. rises (same style as town gummi feeding).
4. Effects:
   - **Gummi:** existing IQ path via `GetGummiItemStatBoost`, and **always at least one offense stat** (PMD2-accurate). Good feeling adds +2 IQ and Joyous face.
   - **Other food:** chance of IQ / offense; good feeling guarantees a boost.

### Recycle Shop (Wynaut / Wobbuffet)

1. **Recycle:** choose 2 / 4 / 6 / 8 items (higher counts unlock with recycle progress), then pick that many Toolbox items.
2. Exchange for a catalog item **or** a Prize Ticket.
3. **Prize Ticket lottery:** pick a color (cosmetic) → loss / normal / big win prize tables.
4. Stackable throwables (Stick, Iron Thorn, Silver Spike, Geo Pebble, thrown categories) cannot be recycled.

Progress (`itemsRecycled`, ticket type) is saved in a `SPINDA_CAFE_SAVE_SIZE` (0x20) flash chunk after achievements.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Pond NPCs | [`src/data/ground/ground_data_t01p02a_station.h`](../../src/data/ground/ground_data_t01p02a_station.h) (group 31) |
| Special text | [`include/constants/script_cmd.h`](../../include/constants/script_cmd.h), [`src/textbox.c`](../../src/textbox.c) |
| Juice Bar | [`src/spinda_cafe.c`](../../src/spinda_cafe.c), [`include/spinda_cafe.h`](../../include/spinda_cafe.h) |
| Recycle Shop | [`src/recycle_shop.c`](../../src/recycle_shop.c) |
| Strings | [`src/data/locale/spinda_cafe_usa.h`](../../src/data/locale/spinda_cafe_usa.h) |
| Save | [`src/save.c`](../../src/save.c), `savedSpindaCafe` (reuses former `fill42C`) |

---

## Limitations

- No indoor café map, cup-dungeon unlocks, door recruits, or Project P dungeon unlocks.
- Recycle catalog / lottery tables are Red-adapted, not a full Sky dump.
- NPC positions on the grassy mid-pond area (`{30,50}` / `{34,50}` / `{38,50}`, facing south). Tune further in-game if needed.
