@ =============================================================================
@ EWRAM occupancy map (linker layout from pmd_red.map)
@ =============================================================================
@ Hardware window: 0x02000000 – 0x02040000 (256 KiB)
@ Rescan: python3 tools/gen_ram_map.py [--emit-asm]
@
@ Layout (modern / current):
@   0x02000000 – 0x0203CC70  ewram        (NOLOAD .bss / ewram_data / ewram_lib)
@   0x0203CC70 – 0x0203D0C8  ewram_init   (initialized; loaded from ROM)
@   0x0203D0C8 ── FreeEwramSpaceTop ──── SAFE custom pool (FREE*)
@                bump _kernel_malloc_ewram grows downward toward Top
@   0x02040000 ── FreeEwramSpaceBottom (~11.8 KiB free after static+init)
@
@ * Prefer this band for fixed custom buffers. Large dynamic needs should use
@   MemoryAlloc() against sMainHeap (0x24000 bytes inside memory.o) instead of
@   shrinking the free band — the heap is already ~57% of EWRAM.
@
@ Largest static consumers (object sizes from map):
@   0x020066CC  memory.o           0x24328  (~148.3 KiB; includes sMainHeap[0x24000])
@   0x0202AAA8  pokemon.o          0x8DFC   (~35.5 KiB; team IDs + packed unkC)
@   0x0203790C  text_1.o           0x3CC8   (~15.3 KiB; window GFX pool; tilemaps→IWRAM)
@   0x02033AEC  sprite.o           0x3020
@   0x020031C4  ground_bg_tile_stream.o 0x2AAC
@
@ Notable named globals:
@   0x02002D48  gGameOptions
@   0x02006118  gTeamInventory
@   0x0202AAA0  gPlayTime
@   0x02033AB0  gRescueTeamInfo
@   0x0203BCC0  gSoundInfo
@   0x0203CDB0  gFriendAreas          (ewram_init)
@   0x0203CEE4  gRecruitedPokemonRef
@   0x0203CF58  gDungeon
@
@ Named vanilla inventory (doc only): ram_map_ewram_pool.inc
@ =============================================================================

SET_DATA FreeEwramSpaceTop, 0x0203D0C8
SET_DATA FreeEwramSpaceBottom, 0x02040000
SET_DATA UsedFreeEwramSpaceTop, FreeEwramSpaceBottom

.macro _kernel_malloc_ewram name, size
	.set UsedFreeEwramSpaceTop, UsedFreeEwramSpaceTop - \size
	.set UsedFreeEwramSpaceTop, UsedFreeEwramSpaceTop & ~3
	SET_DATA \name, UsedFreeEwramSpaceTop
.endm

.macro _kernel_malloc_ewram_array name, size
	.set UsedFreeEwramSpaceTop, UsedFreeEwramSpaceTop - \size
	.set UsedFreeEwramSpaceTop, UsedFreeEwramSpaceTop & ~3
	SET_ARRAY \name, UsedFreeEwramSpaceTop, \size
.endm

@ -- Engine / save / party (static .bss) ---------------------------------------

REF_DATA gGameOptions, 0x02002D48
REF_DATA gTeamInventory, 0x02006118
@ memory.o heap arena (static; not exported — addresses from layout math).
REF_DATA sMainHeap, 0x020066F4
SET_ARRAY sMainHeapDoc, 0x020066F4, 0x24000
REF_DATA gPlayTime, 0x0202AAA0
REF_DATA gRescueTeamInfo, 0x02033AB0
REF_DATA gSoundInfo, 0x0203BCC0

@ -- Initialized refs (ewram_init) ---------------------------------------------

REF_DATA gFriendAreas, 0x0203CDB0
REF_DATA gRecruitedPokemonRef, 0x0203CEE4
REF_DATA gDungeon, 0x0203CF58

@ -- Map inventory (auto-generated, documentation) -----------------------------
.include "ram_map_ewram_pool.inc"

@ -- Custom free-space allocations ---------------------------------------------
@ Prefer _kernel_malloc_ewram / _kernel_malloc_ewram_array for larger buffers.
@ Keep allocations above FreeEwramSpaceTop; verify UsedFreeEwramSpaceTop does
@ not cross below Top after adding symbols.
@
@ Example:
@ _kernel_malloc_ewram_array gExampleEwramBuf, 0x1000

@ Parallel achievements blob (see include/achievements.h; ACHIEVEMENTS_DATA_SIZE)
_kernel_malloc_ewram gAchievementsData, 0x70
