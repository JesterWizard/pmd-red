# Custom Portraits: Starter Evolution Faces

---

## Index

- [Introduction](#introduction)
- [Coverage](#coverage)
- [Artist / build workflow](#artist--build-workflow)
- [Code Locations](#code-locations)

---

## Introduction

Vanilla Red Rescue Team only ships dialogue portraits (`kao`) for base starters (and a few evolved NPCs like Charizard / Blastoise / Persian). Mid and final evolutions of the personality-test starters normally show no face.

This feature loads **[SpriteCollab](https://sprites.pmdcollab.org)** portraits for those evolved forms from `graphics/portraits/<species>/`, converts them at build time to **AT4PX** (vanilla kao compression) + RGBX palettes, and serves them from a separate `pksdir0` archive when enabled.

Toggle: `gRuntimeConfig.custom_portraits` in [`configs/runtime.c`](../../configs/runtime.c) (default `TRUE`). Set to `FALSE` to restore vanilla kao lookup (no portraits for most evolutions).

| Mode | Behavior |
|------|----------|
| `TRUE` (default) | Prefer `ckaoNNN` from `gCustomPortraitArchive` for covered species |
| `FALSE` | Vanilla `kaoNNN` / `dialogueSprites` only |

Portraits credit the SpriteCollab contributors listed in each folder’s `credits.txt`.

---

## Coverage

**Player-selectable starters (16):** Bulbasaur, Charmander, Squirtle, Pikachu, Meowth, Psyduck, Machop, Cubone, Eevee, Chikorita, Cyndaquil, Totodile, Treecko, Torchic, Mudkip, Skitty.

**Partner pool (10):** Charmander, Bulbasaur, Squirtle, Pikachu, Chikorita, Totodile, Cyndaquil, Torchic, Treecko, Mudkip.

**Player-only (not partner):** Meowth, Psyduck, Machop, Cubone, Eevee, Skitty.

**Evolved forms with custom portraits (30):**

| Line | Evolutions |
|------|------------|
| Bulbasaur | Ivysaur, Venusaur |
| Charmander | Charmeleon, Charizard |
| Squirtle | Wartortle, Blastoise |
| Pikachu | Raichu |
| Meowth | Persian |
| Psyduck | Golduck |
| Machop | Machoke, Machamp (Normal only on SpriteCollab) |
| Cubone | Marowak |
| Eevee | Vaporeon, Jolteon, Flareon, Espeon, Umbreon |
| Chikorita | Bayleef, Meganium |
| Cyndaquil | Quilava, Typhlosion |
| Totodile | Croconaw, Feraligatr |
| Treecko | Grovyle, Sceptile |
| Torchic | Combusken, Blaziken |
| Mudkip | Marshtomp, Swampert |
| Skitty | Delcatty |

Emotion slots match the game’s 13 kao emotions (Normal … Surprised).

---

## Artist / build workflow

### Refresh from SpriteCollab

```bash
python3 convert_custom_portraits.py --fetch --force-fetch --convert --generate
```

### Convert / regenerate only (Makefile does this)

Requires `skytemple-files` (`pip install skytemple-files`) for AT4PX encoding.

```bash
python3 convert_custom_portraits.py --convert --generate
# or: make custom-portraits-convert
```

| File | Role |
|------|------|
| `graphics/portraits/<species>/*.png` | Source art (40×40) |
| `*.pal` / `*.at4px` | Build outputs next to each PNG (AT4PX = vanilla kao gfx) |
| `src/custom_portraits_data.c` | Auto-generated SIRO archive + INCBINs |

---

## Code Locations

| Piece | Path |
|-------|------|
| Runtime toggle | `configs/runtime.c` → `custom_portraits` |
| Converter | `convert_custom_portraits.py` |
| Archive helpers | `src/custom_portraits.c`, `include/custom_portraits.h` |
| Generated data | `src/custom_portraits_data.c` |
| Load hooks | `src/pokemon.c` (`GetDialogueSpriteDataPtr`, etc.) |
| Overworld gate | `src/textbox.c` (allow evo faces for hero/partner) |
