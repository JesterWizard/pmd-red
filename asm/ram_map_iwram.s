@ =============================================================================
@ IWRAM occupancy map (linker layout from pmd_red.map)
@ =============================================================================
@ Hardware window: 0x03000000 – 0x03008000 (32 KiB)
@ Rescan: python3 tools/gen_ram_map.py [--emit-asm]
@
@ Layout (matching / modern share the same region sizes):
@   0x03000000 – 0x03001B56  iwram_data   (NOLOAD .bss via sym_iwram / iwram_data)
@   0x03001B56 – 0x03001B58  pad
@   0x03001B58 – 0x03002078  iwram_init   (initialized; loaded from ROM)
@   0x03002078 – 0x03004108  iwram_lib    (0x2090 reserved for libc _sbrk / heap end)
@                            gUnknown_3004000 @ 0x03004108 (sub_80001E0)
@   0x03004108 ── FreeRamSpaceTop ──────── SAFE custom pool (FREE)
@                bump _kernel_malloc grows UP toward Bottom (away from stack)
@   0x03007F00 ── FreeRamSpaceBottom / user SP (sp_sys = IWRAM_END - 0x100)
@   0x03007F00 – 0x03007FA0  user/sys stack (USED — grows down)
@   0x03007FA0 ── IRQ SP (sp_irq = IWRAM_END - 0x60)
@   0x03007FA0 – 0x03007FF0  IRQ stack (USED)
@   0x03007FF0               SOUND_INFO_PTR
@   0x03007FF8               INTR_CHECK
@   0x03007FFC               INTR_VECTOR
@   0x03008000               end of IWRAM
@
@ Dense iwram_data consumers (see sym_iwram.txt):
@   0x03000000  dungeon_tilemap      0x180
@   0x03000180  m4a SoundMainRAM     0x400
@   0x03000580  music                0x40
@   0x030005C0  palette_fade_util    0xA94
@   0x03001054  mersenne twister     0x9C0
@   0x03001A14  text_1 gWindowBg     0x142
@
@ Safe leftover for custom code: ONLY 0x03004108–0x03007F00 via _kernel_malloc
@ (~15.7 KiB). Grow from Top upward so the first byte is NOT under user SP.
@ Named vanilla inventory (doc only): ram_map_iwram_pool.inc
@ =============================================================================

SET_DATA FreeRamSpaceTop, 0x03004108
SET_DATA FreeRamSpaceBottom, 0x03007F00
SET_DATA UsedFreeRamSpaceTop, FreeRamSpaceTop

SET_DATA gUserStackTop, 0x03007F00
SET_DATA gIrqStackTop, 0x03007FA0
SET_DATA gVanillaIwramHighWater, 0x03004108

REF_DATA SOUND_INFO_PTR, 0x03007FF0
REF_DATA INTR_CHECK, 0x03007FF8
REF_DATA INTR_VECTOR, 0x03007FFC

.macro _kernel_malloc name, size
	SET_DATA \name, UsedFreeRamSpaceTop
	.set UsedFreeRamSpaceTop, UsedFreeRamSpaceTop + \size
.endm

@ -- Hot-path / audio / text (iwram_data) --------------------------------------

REF_DATA SoundMainRAM_Buffer, 0x03000180
REF_DATA gWindowBg, 0x03001A14

@ -- Ground-mode pointers (iwram_init) -----------------------------------------

REF_DATA gGroundEffects, 0x03001B60
REF_DATA gGroundEvents, 0x03001B64
REF_DATA gGroundLives, 0x03001B68
REF_DATA gGroundLivesMeta, 0x03001B6C
REF_DATA gGroundMapAction, 0x03001B70
REF_DATA gGroundMapDungeon_3001B70, 0x03001B74
REF_DATA gGroundObjects, 0x03001B78
REF_DATA gUnknown_3001B74, 0x03001B80
REF_DATA gUnknown_3001B78, 0x03001B84
REF_DATA ScrollDownWindow, 0x03001B8C
REF_DATA ScrollUpWindow, 0x03001CE4
REF_DATA sub_82729A4, 0x03001E8C
REF_DATA sub_8272A78, 0x03001F74
REF_DATA gUnknown_3004000, 0x03004108

@ -- Map inventory (auto-generated, documentation) -----------------------------
.include "ram_map_iwram_pool.inc"

@ -- Custom free-space allocations ---------------------------------------------
@ Prefer _kernel_malloc here for small hot-path scratch. Grow upward from Top.
@ NEVER place new C static IWRAM that the linker maps below FreeRamSpaceTop
@ without updating this map — it will collide with vanilla / iwram_lib.
@
@ Example:
@ _kernel_malloc gExampleIwramScratch, 0x10
