# RAM map (EWRAM / IWRAM / Flash)

Occupancy and free-space notes for custom code. Pattern follows
[sigma_star_saga/asm](https://github.com/JesterWizard/sigma_star_saga/tree/master/asm).

| File | Role |
| --- | --- |
| `asm/ram_map.s` | Entry object (macros + includes) |
| `asm/ram_map_iwram.s` | IWRAM used bands + `FreeRamSpace*` + `_kernel_malloc` |
| `asm/ram_map_ewram.s` | EWRAM used bands + `FreeEwramSpace*` + `_kernel_malloc_ewram` |
| `asm/ram_map_sram.s` | Flash save bus (fully used — not free scratch) |
| `asm/ram_map_*_pool.inc` | Auto-generated named-symbol inventory |

```bash
python3 tools/gen_ram_map.py --emit-asm   # refresh pool.inc from pmd_red.map
python3 tools/scan_ram_literals.py        # optional baserom LDR-pool cross-check
python3 tools/check_save_layout.py        # bit-packed save chunks vs buffer caps
```

## Free space (from current `pmd_red.map` / `make` `--print-memory-usage`)

| Region | Free range | Size | Allocator |
| --- | ---: | ---: | --- |
| **EWRAM** | `0x0203F0C8`–`0x02040000` | ~3.8 KiB | `_kernel_malloc_ewram` (grows down) |
| **IWRAM** | `0x03004108`–`0x03005F00` | ~7.5 KiB usable | `_kernel_malloc` (grows up; must stop at `StackReserveTop`) |
| **SRAM** (flash) | capacity `0x0E000000`–`+128 KiB` | used = save footprint | `FLASH1M` save pak; linker **Used Size** is primary+backup main pak + metadata (`sSramSaveFootprint`), not 100% of the chip |

IWRAM above `0x03007F00` is stacks + `SOUND_INFO_PTR` / `INTR_*` — do not allocate there.

The user stack at `0x03007F00` grows **down into the IWRAM free band**. Dungeon floor
generation (`GenerateStandardFloor` and friends) builds `GridCell grid[15][15]` on the
stack — single frames of ~7.4 KiB, peaking around 8 KiB total — so anything placed above
`StackReserveTop` (`0x03005F00`) is silently overwritten whenever a floor is generated.
`asm/ram_map_iwram.s` asserts this at build time.

`tools/gen_ram_map.py` reads `ewram_init_end`, `gUnknown_3004000`, and `UsedFreeRamSpaceTop` from the map so free-band markers stay in sync after layout changes.

Save layout changes (IQ flag bits, storage size, achievements blob, etc.) must keep chunk `#define`s and `unk448[]` in sync — see `.cursor/skills/save-sram-layout/SKILL.md` and `tools/check_save_layout.py` (runs after link).

## Used highlights

- **EWRAM:** ~98.5% static (`ewram_init_end` @ `0x0203F0C8`). Dominated by `sMainHeap` (`0x24000` in `memory.c`) plus Pokémon / text / sprite / ground-stream BSS. Dynamic game objects go through `MemoryAlloc`, not the free band.
- **IWRAM:** data through `0x03001B56`, init through `0x03002078`, then `0x2090` reserved for libc (`gUnknown_3004000` @ `0x03004108`). The free band is currently unallocated; `gBgTilemaps` was moved back to EWRAM because it collided with the deep stack.
- **Save bus `0x0E000000`:** flash sectors via `ReadFlashData` / `WriteFlashData` — not cart SRAM/EEPROM.

Vanilla symbols already linked from C are documented with `REF_DATA` / pool comments only (not re-exported). Only `Free*` markers and `_kernel_malloc*` allocations are new globals for hacks.

## EWRAM savings idea: shared menu work pointers

Most UI already `MemoryAlloc`s its work struct and frees it on exit, but each file still keeps a permanent `EWRAM_INIT Type *work = { NULL }` (4 bytes). Menus that cannot run at the same time could share a small pool:

```c
EWRAM_INIT void *gMenuWork[4] = { NULL };
#define MENU_WORK(type, slot) (*(type **)&gMenuWork[slot])
```

Typical slot layout: 0 = root shop/storage, 1 = first nested list, 2 = second nested (e.g. item description). Cursor-restore scalars (`u16` last index) must stay file-local.

**Caveat:** do not put `kecleon_bros4` (`sub_801A5D8`) on a shared slot without changing its init. It does `if (ptr == NULL) ptr = MemoryAlloc(...)` and **reuses** a non-NULL pointer — safe when the pointer is private, but on a shared slot it will reinterpret another menu’s live (or stale) allocation as its own struct and corrupt heap/VRAM. A first-pass pool that shared that slot was reverted after Continue → house graphics corruption.
