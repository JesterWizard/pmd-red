@ =============================================================================
@ Save / Flash-bus occupancy map (PMD Red Rescue Team)
@ =============================================================================
@ Cart save: FLASH1M_V102 (marker string in agb_flash_1m.c) — NOT EEPROM and
@ NOT plain 64 KiB SRAM. I/O goes through IdentifyFlash / ReadFlash /
@ ProgramFlashSector at FLASH_BASE.
@ Rescan: python3 tools/gen_ram_map.py
@
@ Hardware window: 0x0E000000 – 0x0E010000 (64 KiB bus mirror; 1 Mbit flash
@ uses bank switching via SwitchFlashBank — logical size 128 KiB / 32 × 4 KiB
@ sectors).
@
@ Linker MEMORY region "SRAM" (128 KiB capacity): Used Size comes from
@ gSramSaveFootprint in src/save.c (primary + backup main pak + metadata) —
@ not the whole chip. Remaining flash is unused capacity, not free scratch
@ for gameplay buffers.
@
@ Vanilla ownership: the save pak streams sectors 0x1000 bytes at a time
@ (ReadFlashData / WriteFlashData). Sector 0x1F holds a small metadata block.
@
@ 0x0E000000 ── FlashSpaceTop ──────────── USED by save system (NOT free)
@ 0x0E010000 ── bus window end (banked flash continues via SwitchFlashBank)
@
@ There is no safe unused flash band for general-purpose scratch. Do not carve
@ FreeFlashSpace* bump allocations unless you own a dedicated unused sector
@ and have verified it on hardware/mGBA. Prefer EWRAM free pool or MemoryAlloc.
@ =============================================================================

SET_DATA FlashSpaceTop, 0x0E000000
SET_DATA FlashSpaceBottom, 0x0E010000
SET_DATA gFlashBase, 0x0E000000

@ Marker identity lives in ROM (agb_flash_1m.c AgbLibFlashVersion).
@ Runtime type pointer is gFlash in EWRAM (@ 0x02039DCC).

@ -- Custom allocations --------------------------------------------------------
@ None. Flash is fully claimed by the save library.
@ If you add a dedicated unused sector later:
@   SET_DATA FreeFlashSpaceTop, <sector_base>
@   SET_DATA FreeFlashSpaceBottom, <sector_base + 0x1000>
