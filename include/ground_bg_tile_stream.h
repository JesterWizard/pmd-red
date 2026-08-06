#ifndef GUARD_GROUND_BG_TILE_STREAM_H
#define GUARD_GROUND_BG_TILE_STREAM_H

#include "structs/str_ground_bg.h"

/* Source tile ids in tileMappings use bits 0-11 (up to 4095); bits 12-15 = palette.
 * Hardware BG entries only have a 10-bit tile field, so maps with numTiles > unk6
 * keep graphics in ROM/EWRAM and remap the visible window into VRAM on camera moves. */

void GroundBgTileStream_Reset(void);
bool8 GroundBgTileStream_IsActive(void);

/* Copy all BPC tile gfx into a heap buffer and clear the VRAM tile pool.
 * Returns TRUE when streaming is required (numTiles > vramSlots). */
bool8 GroundBgTileStream_Install(const u16 *tileData, s32 numTiles, s32 vramSlots);

/* Same as Install, but takes ownership of ownedBase (freed on Reset). tileData
 * must point at the first non-null tile within that allocation. */
bool8 GroundBgTileStream_InstallOwned(void *ownedBase, const u16 *tileData, s32 numTiles, s32 vramSlots);

/* Stream from a stable pointer (ROM / static). Nothing is freed on Reset. */
bool8 GroundBgTileStream_InstallRom(const u16 *tileData, s32 numTiles, s32 vramSlots);

/* TRUE when the visible tile window changed (or first frame) and BG tilemaps
 * must be rebuilt + remapped. FALSE → only scroll regs need updating. */
bool8 GroundBgTileStream_NeedsRebuild(GroundBg *groundBg);

/* After chunk→tilemap expand: assign VRAM slots and queue gfx uploads (no VRAM
 * writes yet — call FlushUploads after VBlank, before tilemap DMA). */
void GroundBgTileStream_RemapVisibleTilemaps(GroundBg *groundBg);

/* Apply queued tile uploads. Safe during VBlank / DoScheduledMemCopies. */
void GroundBgTileStream_FlushUploads(void);

#endif /* GUARD_GROUND_BG_TILE_STREAM_H */
