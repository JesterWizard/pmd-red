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
