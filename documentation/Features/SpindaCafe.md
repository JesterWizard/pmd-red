# Spinda's Café (Whiscash Pond)

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Adds a PMD2-style **Spinda's Café** entered from Whiscash Pond (north of Pokémon Square): a stairs ornament warps into an indoor café map with the Juice Bar (Spinda) and Recycle Shop (Wynaut). Wobbuffet is present and only says his name.

Toggle: `gRuntimeConfig.spinda_cafe` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`).

Unlock: stairs + indoor staff after `QUEST_CAN_ACCESS_JOBS`.

---

## Behavior

### Entrance (Whiscash Pond)

- Dungeon-style **stairs** ornament at `{30,46}` (group 31).
- Stepping on the 3×3 warp event enters `MAP_SPINDA_CAFE`.
- Outdoor café NPCs are **not** on the pond; staff live only inside.

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
| Pond stairs / warp | [`src/data/ground/ground_data_t01p02a_station.h`](../../src/data/ground/ground_data_t01p02a_station.h) (group 31) |
| Indoor map / NPCs | [`src/data/ground/ground_data_cafe_station.h`](../../src/data/ground/ground_data_cafe_station.h) (`MAP_SPINDA_CAFE` / gs229) |
| Map art source | [`graphics/custom/spinda_cafe.png`](../../graphics/custom/spinda_cafe.png) → `data/map_bg/T01P08*` via [`tools/convert_ground_map_png.py`](../../tools/convert_ground_map_png.py) |
| Stairs ornament | [`graphics/ornament/Stairs01/`](../../graphics/ornament/Stairs01/), [`src/data/ornament/stairs01.h`](../../src/data/ornament/stairs01.h) |
| Special text | [`include/constants/script_cmd.h`](../../include/constants/script_cmd.h), [`src/textbox.c`](../../src/textbox.c) |
| Juice Bar | [`src/spinda_cafe.c`](../../src/spinda_cafe.c), [`include/spinda_cafe.h`](../../include/spinda_cafe.h) |
| Recycle Shop | [`src/recycle_shop.c`](../../src/recycle_shop.c) |
| Strings | [`src/data/locale/spinda_cafe_usa.h`](../../src/data/locale/spinda_cafe_usa.h) |
| Save | [`src/save.c`](../../src/save.c), `savedSpindaCafe` (reuses former `fill42C`) |

---

## Limitations

- Indoor art uses **13×16-color** BG palettes (208 colors) — the town-map engine loads at most 13 (`gUnknown_8117324.unk2`). More banks corrupt the floor. Downscaled with `--max-width 360` to stay under ~1024 tiles (no saturation boost — that yellow-washed the map).
- Collision: cave walls/void from luminance; **bars** (counter face) and **round tables** from fixed tile regions in [`tools/convert_ground_map_png.py`](../../tools/convert_ground_map_png.py); staff stand in the walkable strip behind the counters.
- No cup-dungeon unlocks, door recruits, or Project P dungeon unlocks.
- Recycle catalog / lottery tables are Red-adapted, not a full Sky dump.
- Stairs / NPC positions may need in-game tuning.
