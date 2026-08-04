@ =============================================================================
@ EWRAM occupancy map (linker layout from pmd_red.map)
@ =============================================================================
@ Hardware window: 0x02000000 – 0x02040000 (256 KiB)
@ Rescan: python3 tools/gen_ram_map.py [--emit-asm]
@
@ Layout:
@   0x02000000 – 0x0203AF20  ewram        (NOLOAD .bss / ewram_data / ewram_lib)
@   0x0203AF20 – 0x0203B368  ewram_init   (initialized; loaded from ROM)
@   0x0203B368 ── FreeEwramSpaceTop ──── SAFE custom pool (FREE*)
@                bump _kernel_malloc_ewram grows downward toward Top
@   0x02040000 ── FreeEwramSpaceBottom (~19.4 KiB free)
@
@ * Prefer this band for fixed custom buffers. Large dynamic needs should use
@   MemoryAlloc() against sMainHeap (0x24000 bytes inside memory.o) instead of
@   shrinking the free band — the heap is already ~57% of EWRAM.
@
@ Largest static consumers (object sizes from map):
@   0x02003A4C  memory.o           0x24320  (~144.8 KiB; includes sMainHeap[0x24000])
@                 sHeapDescriptorList @ 0x02003A4C
@                 sMainHeap          @ 0x02003C94 .. 0x02027C94
@   0x02027E20  pokemon.o          0x95B8   (~37.4 KiB recruited Pokémon storage)
@   0x02033BBC  text_1.o           0x5CC8   (~23.2 KiB windows / tilemaps)
@   0x02031600  sprite.o           0x17BC
@   0x02039DE0  m4a ewram_lib      0x1140   (gSoundInfo @ 0x02039F70)
@   0x02032DBC  string_format.o    0xE00
@
@ Notable named globals:
@   0x02000000  gMPlayTrack_* (sound_data .bss)
@   0x02002CB0  gGameOptions
@   0x020035D4  gTeamInventory
@   0x02027E18  gPlayTime
@   0x020315E4  gRescueTeamInfo
@   0x0203B05C  gFriendAreas          (ewram_init)
@   0x0203B0AC  gTeamInventoryRef
@   0x0203B190  gRecruitedPokemonRef
@   0x0203B200  gDungeon
@
@ Named vanilla inventory (doc only): ram_map_ewram_pool.inc
@ =============================================================================

SET_DATA FreeEwramSpaceTop, 0x0203B368
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

REF_DATA gGameOptions, 0x02002CB0
REF_DATA gTeamInventory, 0x020035D4
@ memory.o heap arena (static; not exported — addresses from layout math).
REF_DATA sMainHeap, 0x02003C94
SET_ARRAY sMainHeapDoc, 0x02003C94, 0x24000
REF_DATA gPlayTime, 0x02027E18
REF_DATA gRescueTeamInfo, 0x020315E4
REF_DATA gSoundInfo, 0x02039F70
REF_DATA gFlash, 0x02039DCC

@ -- Initialized refs (ewram_init) ---------------------------------------------

REF_DATA gFriendAreas, 0x0203B05C
REF_DATA gFriendAreasMapPtr, 0x0203B060
REF_DATA gGameOptionsRef, 0x0203B078
REF_DATA gTeamInventoryRef, 0x0203B0AC
REF_DATA gPlayTimeRef, 0x0203B18C
REF_DATA gRecruitedPokemonRef, 0x0203B190
REF_DATA gDungeon, 0x0203B200
REF_DATA gSavePakRead, 0x0203B21C

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
