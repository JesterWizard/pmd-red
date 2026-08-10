---
name: save-sram-layout
description: >-
  Enforce flash/SRAM save-pak layout accounting when changing bit-packed save
  fields, chunk sizes, IQ flags, inventory/storage, achievements, or
  UnkStruct_sub_8011DAC. Use when editing save.c, pokemon_3.c WriteBits/ReadBits
  sizes, RECRUITED_POKEMON_SAVE_SIZE, TEAM_INVENTORY_SAVE_SIZE,
  ACHIEVEMENTS_SAVE_SIZE, IqSkillFlags, STORAGE_SIZE, include/save.h unk448, or
  when make memory regions / SRAM / flash save format is discussed.
---

# Save / SRAM layout

Cart save is **FLASH1M** at `0x0E000000` (linker region name **SRAM** so
`make` `--print-memory-usage` lists it). Capacity is 128 KiB; **Used Size** is
the real streamed footprint from `gSramSaveFootprint` in `src/save.c`
(primary + backup `UnkStruct_sub_8011DAC` + sector-0x1F metadata) — not the
whole chip. Do not treat unused flash as general-purpose scratch. See
`asm/ram_map_sram.s` and `documentation/ram-map.md`.

## When this skill applies

Any change that alters what gets **written into or sized for** the save pak:

- `WriteBits` / `ReadBits` widths in `WritePoke1Bits`, `SavePoke2s`, inventory,
  achievements, mail, adventure data
- `NUM_PICKED_IQ_SKILLS` / `IQ_SKILL_FLAGS_BIT_COUNT` / `IqSkillFlags`
- `STORAGE_SIZE`, `TEAM_INVENTORY_SAVE_SIZE`, `ACHIEVEMENTS_SAVE_SIZE`,
  `RECRUITED_POKEMON_SAVE_SIZE`, `MAIL_INFO_SAVE_SIZE` / accepted job slots
- `UnkStruct_sub_8011DAC` / `unk448[]` in `include/save.h`
- New fields appended to the save blob in `src/save.c`

## Checklist (do all)

1. **Estimate bit-packed size** for any chunk you grew:
   - Recruited Pokémon: run `python3 tools/check_save_layout.py`
   - Required bytes must be **≤** the chunk `#define` buffer passed to
     `Save*` / `Restore*` (e.g. `RECRUITED_POKEMON_SAVE_SIZE`).
   - `WriteBits` has **no bounds check** — overflow silently corrupts the next
     chunk in `unk448` and breaks Continue (black/garbage house).
2. **Grow the chunk constant** if the estimate exceeds it (with headroom).
3. **Grow `unk448[]`** so the sum of all fixed chunks still fits; update the
   struct size comment in `include/save.h`.
4. **Keep `save.c` advances in sync** (`r4 += CHUNK`, `array_ptr += CHUNK`) with
   the same constants — never hardcode a stale hex size.
5. **Document save incompatibility** in the relevant Features doc (old saves /
   New Game required when layout changes).
6. **Confirm `make` memory regions** list **SRAM** with Used Size matching the
   save footprint (grows when `UnkStruct_sub_8011DAC` / metadata grow). Capacity
   stays 128 KiB. If SRAM is missing, restore the `SRAM` `MEMORY` region and
   `sram_save` / `.sram_save` section wiring in the ld scripts + `src/save.c`.

## Chunk map (`unk448` order)

| Chunk | Constant | Notes |
| --- | --- | --- |
| Recruited Pokémon | `RECRUITED_POKEMON_SAVE_SIZE` | Scales with IQ flag bits × `NUM_MONSTERS` |
| Dungeon team (poke2) | `150 * 4` | Also uses `IQ_SKILL_FLAGS_BIT_COUNT` |
| Team inventory | `TEAM_INVENTORY_SAVE_SIZE` | Scales with `STORAGE_SIZE` |
| Rescue team | `0x10` | |
| Friend areas | `0x8` | |
| Adventure | `0x100` | |
| Exclusive / unk | `0x594` | |
| Mail | `MAIL_INFO_SAVE_SIZE` | Scales with accepted job slots (`MAX_ACCEPTED_JOBS`) |
| Achievements | `ACHIEVEMENTS_SAVE_SIZE` | |

## Anti-patterns

- Expanding in-memory flags/structs without rechecking save bit widths
- Growing one chunk `#define` without growing `unk448`
- Assuming `--print-memory-usage` EWRAM/IWRAM/ROM alone means save is fine
- Treating flash as allocatable free space for gameplay buffers
