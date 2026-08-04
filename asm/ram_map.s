.section .rodata

@ =============================================================================
@ RAM map entry — assembles region fragments into one object (build/.../asm/ram_map.o)
@ =============================================================================
@
@ Region sources (edit these, not this file, when adding symbols):
@   ram_map_iwram.s       — IWRAM free pool + named symbols
@   ram_map_iwram_pool.inc — auto inventory from tools/gen_ram_map.py
@   ram_map_ewram.s       — EWRAM free pool + named symbols
@   ram_map_ewram_pool.inc — auto inventory from tools/gen_ram_map.py
@   ram_map_sram.s        — Flash save bus (not cart SRAM)
@
@ Fragments are .included here (not compiled separately) so bump-allocator
@ cursors carry across regions in a single assembly pass.
@ Pattern: https://github.com/JesterWizard/sigma_star_saga/tree/master/asm
@ Guide: docs/ram-map.md
@
@ Addresses come from the matching pmd_red.map (linker layout). Rescan:
@   python3 tools/gen_ram_map.py [--emit-asm]
@   python3 tools/scan_ram_literals.py   # optional baserom pool cross-check
@ =============================================================================

.macro SET_DATA name, value
	.global \name
	.type \name, object
	.set \name, \value
.endm

.macro SET_ARRAY name, value, size
	SET_DATA \name, \value
	.global \name\()End
	.type \name\()End, object
	.set \name\()End, (\value + \size)
.endm

.macro dat value, name
	SET_DATA \name, \value
.endm

@ Documentation alias for already-linked symbols (not .global — avoids dupes).
.macro REF_DATA name, value
	.set \name\()_addr, \value
.endm

.include "ram_map_iwram.s"
.include "ram_map_ewram.s"
.include "ram_map_sram.s"
