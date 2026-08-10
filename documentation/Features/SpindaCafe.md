# Spinda's Café (Whiscash Pond)

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

Adds a PMD2-style **Spinda's Café** entered from Whiscash Pond (north of Pokémon Square): stairs + café sign ornaments on the west grass warp into an indoor café map with the Juice Bar (Spinda) and Recycle Shop (Wynaut). Wobbuffet is present and only says his name.

Toggle: `gRuntimeConfig.spinda_cafe` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`).

Unlock: stairs + indoor staff after `QUEST_CAN_ACCESS_JOBS`.

---

## Behavior

### Entrance (Whiscash Pond)

- Stairs ornament at `{15,45}` with café **sign** at `{18,45}` on the west grass (group 31).
- Stepping on the 3×3 warp event enters `MAP_SPINDA_CAFE`.
- Outdoor café NPCs are **not** on the pond; staff live only inside.

### Juice Bar (Spinda)

1. Mix Drink → pick a Toolbox food item (berries / seeds / vitamins / food / gummis).
2. Pick a teammate currently on the active team.
3. Item is consumed. Message flow:
   - Spinda mixes the drink (Happy portrait).
   - **System:** `{NAME} drank the juice!`
   - Spinda reacts (Happy / Joyous / Sad portraits; miracle has its own line).
   - **System:** IQ / Attack / Defense / HP / level / Ginseng rises (amounts via `{VALUE_0}`).
   - **System:** If IQ rose past a skill threshold, each newly available IQ skill is announced (same as gummi feeding).
4. Effects:
   - **Permanent base (always):**
     - **Gummi:** type IQ via `GetGummiItemStatBoost` + at least one offense stat.
     - **Protein / Calcium / Iron / Zinc:** +3 to the matching offense stat.
     - **Life Seed:** +3 max HP; **Sitrus Berry:** +2 max HP.
     - **Joy Seed:** +1 level (stats/moves like a normal level-up).
     - **Ginseng:** +1 (12% +3) power on the set move, same as dungeon Ginseng.
     - **Doom Seed:** no positive effect (no level loss).
   - **Good feeling** (per-item chance; skipped for vitamins / Joy / Life / Sitrus / Doom / Hunger): ingredient-specific +IQ and/or +HP from [`src/data/spinda_juice_effects.h`](../../src/data/spinda_juice_effects.h). Gummis use 25% for +2 IQ.
   - **Miracle** (~1%; Hunger Seed allowed, other permanent boosters not): +2–5 to one of HP / Atk / Sp.Atk / Def / Sp.Def / IQ, on top of the base effect.

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
| Pond stairs / warp | [`src/data/ground/vanilla/ground_data_t01p02a_station.h`](../../src/data/ground/vanilla/ground_data_t01p02a_station.h) / [`custom/`](../../src/data/ground/custom/) (group 31; keep both packs in sync) |
| Indoor map / NPCs | [`src/data/ground/vanilla/ground_data_cafe_station.h`](../../src/data/ground/vanilla/ground_data_cafe_station.h) / [`custom/`](../../src/data/ground/custom/) (`MAP_SPINDA_CAFE` / gs229) |
| Map conversion | [`src/ground_map_conversion_table.c`](../../src/ground_map_conversion_table.c) (`unk0 = 6` dual-layer) |
| Map art source | [`graphics/custom/spinda_cafe.png`](../../graphics/custom/spinda_cafe.png) → `data/map_bg/T01P08*` via [`tools/convert_ground_map_png.py`](../../tools/convert_ground_map_png.py); VRAM streaming in [`src/ground_bg_tile_stream.c`](../../src/ground_bg_tile_stream.c) |
| Stairs / sign ornaments | [`graphics/ornament/Stairs01/`](../../graphics/ornament/Stairs01/), [`graphics/ornament/Sign01/`](../../graphics/ornament/Sign01/), [`src/data/ornament/stairs01.h`](../../src/data/ornament/stairs01.h), [`src/data/ornament/sign01.h`](../../src/data/ornament/sign01.h) (from [`graphics/custom/spinda_cafe_stairs.png`](../../graphics/custom/spinda_cafe_stairs.png) / [`spinda_cafe_sign.png`](../../graphics/custom/spinda_cafe_sign.png)) |
| Special text | [`include/constants/script_cmd.h`](../../include/constants/script_cmd.h), [`src/textbox.c`](../../src/textbox.c) |
| Juice Bar | [`src/spinda_cafe.c`](../../src/spinda_cafe.c), [`include/spinda_cafe.h`](../../include/spinda_cafe.h) |
| Good-feeling table | [`src/data/spinda_juice_effects.h`](../../src/data/spinda_juice_effects.h) |
| Recycle Shop | [`src/recycle_shop.c`](../../src/recycle_shop.c) |
| Strings | [`src/data/locale/spinda_cafe_usa.h`](../../src/data/locale/spinda_cafe_usa.h) |
| Save | [`src/save.c`](../../src/save.c), `savedSpindaCafe` (reuses former `fill42C`) |

---

## Limitations

- Indoor art source is **520×400** (~146 colors, ~1840 unique 8×8 tiles). GBA **4bpp** multi-bank BGs cannot reproduce that art 1:1 (some tiles use 16+ colors; co-occurrence exceeds 14×15 palette slots). The café therefore uses **8bpp / 256-color** BG2+BG3 (`gGroundMap8bpp`), with art tiles at **CHARBASE1 indices 128–767** (`0x6000–0xFFFF`, 640 slots — font/chrome at `0x4F00–0x5FFF` preserved like title 8bpp) and maps at **SB 0/1**. Window tile gfx starts at **tile 128** (`ShowWindowsInternal`) so dialogue cannot overwrite those maps; UI (BG0/BG1) maps stay at **SB 6/7** while exploring (256 window tiles). Unique tiles still exceed VRAM, so **[dynamic tile loading](../gba_techniques/DynamicTileLoading.md)** streams the visible window from an **uncompressed ROM BPC**. Convert with `tools/convert_ground_map_png.py --bpp 8` (asserts 100% PNG match). Map conversion stays **`unk0 = 6`** so sprites sit between layers — do not use `unk0 = 5`. The 640-slot pool covers typical top-of-room windows (~550–630 unique); Remap uses two-pass stamp-then-alloc over the full **32×24** buffer.
- **Wide UI (dynamic):** `ShowWindows` counts the window stack. If it needs more than 256 tiles, art tilemaps move to **SB 30/31** (streamer pool capped at 704), window gfx loads from **tile 2** in low VRAM (`0x06000000+`), and art cells under each menu rect are cleared (invisible under opaque UI — frees those streamer tiles). BG2/BG3 stay on so the café remains visible around menus. Closing remaps art back to SB 0/1. Dialogue width / Toolbox row caps still avoid flipping for small boxes.
- Collision: cave walls/void from luminance; **bars** (counter through approach row `y=22`) and **round tables** from fixed tile regions. Player stands on `y=24`; invisible kind-4 talk objects on `y=22` bridge A-range. Staff stay on solid fascia tiles.
- **Bar occlusion:** bottom **4px** of the fascia row on **BMA layer0 (BG2)** in front of Pokémon (left bar FG ends at `x=24`, dropping Spinda’s rightmost two jar tiles). Rest of the room on **layer1 (BG3)**.
- No cup-dungeon unlocks, door recruits, or Project P dungeon unlocks.
- No bad drinks (Hunger / Grimy lookalike stat drops).
- Good-feeling chances are approximate (community-tested rates), not decomp-verified.
- Recycle catalog / lottery tables are Red-adapted, not a full Sky dump.
- Stairs / NPC positions may need in-game tuning.
