# Dungeon HP Bars

---

## Index

- [Introduction](#introduction)
- [Behavior](#behavior)
- [Graphics](#graphics)
- [Code Locations](#code-locations)
- [Limitations](#limitations)

---

## Introduction

When enabled, every Pokémon visible on the dungeon floor shows a small floating HP bar above its sprite.

Toggle: `gRuntimeConfig.dungeon_hp_bars` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to disable.

---

## Behavior

1. Bars draw for team and enemy Pokémon that are currently rendered (same visibility rules as the body sprite), including during battle/turn resolution.
2. Fill level uses `HP / maxHPStat` mapped onto 12 frames (full → nearly empty). Color shifts green → yellow → orange → red as HP drops.
3. Bars are **hidden** when:
   - HP is full (`HP >= maxHPStat`)
   - HP ≤ 0
   - The Pokémon is moving (`Entity.unk23 == 0`, i.e. `pixelPos` changed this frame)
4. Palette follows dungeon brightness / fade like other dungeon OBJ colors.

---

## Graphics

Source art: [`graphics/custom/hp_bars.png`](../../graphics/custom/hp_bars.png) — 16×96 strip of twelve 16×8 frames (built from the provided sheet). Converted to `.4bpp` via `gbagfx` at build time. The full-HP frame is not uploaded (bars hide at full HP).

| Resource | Value |
|----------|--------|
| OBJ VRAM tile base | `0x232` (22 tiles; gap between etcfont and type-1/2 effects) |
| OBJ palette | bank **13** |
| Sprite size | 16×8 (`shape=1`, `size=0`) |

Do **not** place bars at `0x380`: type-3 move effects use OBJ base `0x370` and will look palette-corrupted if that region is overwritten.

---

## Code Locations

| Area | Paths |
|------|--------|
| Toggle | [`include/runtime.h`](../../include/runtime.h), [`configs/runtime.c`](../../configs/runtime.c) |
| Draw / load / palette | [`src/dungeon_hp_bars.c`](../../src/dungeon_hp_bars.c), [`include/dungeon_hp_bars.h`](../../include/dungeon_hp_bars.h) |
| Per-frame hook | [`src/dungeon_mon_sprite_render.c`](../../src/dungeon_mon_sprite_render.c) (`UpdateMonsterSprite`) |
| Init + fade palette | [`src/dungeon_pokemon_sprites.c`](../../src/dungeon_pokemon_sprites.c), [`src/dungeon_vram.c`](../../src/dungeon_vram.c) |

---

## Limitations

- Fixed 11 discrete fill frames (not a continuous pixel fill).
- Uses one OAM entry per visible Pokémon; busy floors compete with the usual 128-sprite budget.
- Position is a fixed offset above the sprite origin (not per-species head height).
