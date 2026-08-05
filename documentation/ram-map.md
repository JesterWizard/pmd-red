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
```

## Free space (matching `pmd_red.map`)

| Region | Free range | Size | Allocator |
| --- | --- | ---: | --- |
| **EWRAM** | `0x0203B368`–`0x02040000` | ~19.4 KiB | `_kernel_malloc_ewram` (grows down) |
| **IWRAM** | `0x03004108`–`0x03007F00` | ~15.7 KiB | `_kernel_malloc` (grows up) |
| **Flash** | none | 0 | `FLASH1M_V102` save pak owns the chip |

IWRAM above `0x03007F00` is stacks + `SOUND_INFO_PTR` / `INTR_*` — do not allocate there.

## Used highlights

- **EWRAM:** ~235 KiB static. Dominated by `sMainHeap` (`0x24000` in `memory.c`) plus Pokémon / text / sprite BSS. Dynamic game objects go through `MemoryAlloc`, not the free band.
- **IWRAM:** data through `0x03001B56`, init through `0x03002078`, then `0x2090` reserved for libc (`gUnknown_3004000` @ `0x03004108`).
- **Save bus `0x0E000000`:** flash sectors via `ReadFlashData` / `WriteFlashData` — not cart SRAM/EEPROM.

Vanilla symbols already linked from C are documented with `REF_DATA` / pool comments only (not re-exported). Only `Free*` markers and `_kernel_malloc*` allocations are new globals for hacks.

## EWRAM savings: shared menu work pointers

Most UI already `MemoryAlloc`s its work struct and frees it on exit, but each file still keeps a permanent `EWRAM_INIT Type *work = { NULL }` (4 bytes) for the live pointer. Town/shop menus never run at the same time, so those pointers can share a small pool:

```c
// include/menu_work.h / src/menu_work.c
EWRAM_INIT void *gMenuWork[MENU_WORK_SLOTS] = { NULL }; // currently 4 slots

#define MENU_WORK(type, slot) (*(type **)&gMenuWork[slot])
// usage: #define sKecleonBrosWork1 MENU_WORK(KecleonBrosWork1, MENU_WORK_SLOT_0)
```

Slot conventions for the shop/storage first pass:

| Slot | Role | Examples |
| --- | --- | --- |
| 0 | Root shop/storage UI | Kangaskhan 1/2, Kecleon 1, Gulpin main, Wigglytuff 3, Felicity, Makuhita 1 |
| 1 | First nested submenu | Kecleon 2/3/4 lists, Gulpin move UI, Wigglytuff area list, Makuhita courses |
| 2 | Second nested layer | Wigglytuff friend-area info (while list still live), item description over an inventory picker |
| 3 | Reserved | deeper nesting / future menus |

Notes:

- Kangaskhan storage1 and storage2 are **alternate roots** (different textbox entry points), not parent/child — both use slot 0.
- Nested depth matters: Kangaskhan/Kecleon keep the root allocated while opening Kecleon 4 (`sub_801A5D8`) on slot 1, then item description on slot 2.
- Cursor-restore scalars (`u16` last menu index, etc.) stay as file-local `EWRAM_INIT`; only the heap work **pointers** are pooled.
- Larger wins come from the same idea applied to static buffers / BSS blobs listed in `sym_ewram.txt` and `sym_ewram_init.txt`, not just pointers — especially relevant for an NDS port with tighter RAM.

