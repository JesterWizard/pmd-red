#ifndef GUARD_GROUND_BG_TILE_STREAM_H
#define GUARD_GROUND_BG_TILE_STREAM_H

#include "structs/str_ground_bg.h"

/* Source tile ids in tileMappings use bits 0-11 (up to 4095); bits 12-15 = palette.
 * Hardware BG entries only have a 10-bit tile field, so maps with numTiles > unk6
 * keep graphics in ROM/EWRAM and remap the visible window into VRAM on camera moves.
 *
 * 4bpp: VRAM+0x8000, 32 B/tile, up to 1024 slots (CHARBASE2).
 * 8bpp café: VRAM+0x4000, 64 B/tile, up to 704 slots (CHARBASE1; SB 30/31 for maps). */

#define GROUND_STREAM_4BPP 0
#define GROUND_STREAM_8BPP 1

#define GROUND_STREAM_8BPP_VRAM_SLOTS 704
#define GROUND_STREAM_8BPP_VRAM_BASE (VRAM + 0x4000)

void GroundBgTileStream_Reset(void);
bool8 GroundBgTileStream_IsActive(void);
bool8 GroundBgTileStream_Is8bpp(void);

/* Copy all BPC tile gfx into a heap buffer and clear the VRAM tile pool.
 * Returns TRUE when streaming is required (numTiles > vramSlots).
 * bppMode: GROUND_STREAM_4BPP or GROUND_STREAM_8BPP. */
bool8 GroundBgTileStream_Install(const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode);

bool8 GroundBgTileStream_InstallOwned(void *ownedBase, const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode);

bool8 GroundBgTileStream_InstallRom(const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode);

bool8 GroundBgTileStream_NeedsRebuild(GroundBg *groundBg);

void GroundBgTileStream_RemapVisibleTilemaps(GroundBg *groundBg);

void GroundBgTileStream_FlushUploads(void);

#endif /* GUARD_GROUND_BG_TILE_STREAM_H */
