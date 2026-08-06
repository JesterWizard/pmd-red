#include "global.h"
#include "globaldata.h"
#include "ground_bg_tile_stream.h"
#include "cpu.h"
#include "memory.h"
#include "debug.h"

#define STREAM_MAX_SOURCE_TILES 2048
#define STREAM_VRAM_BASE (VRAM + 0x8000)

static EWRAM_DATA bool8 sActive = FALSE;
static EWRAM_DATA s16 sNumTiles = 0;      /* includes null tile 0 */
static EWRAM_DATA s16 sVramSlots = 0;     /* unk6, typically 0x400 */
static EWRAM_DATA u8 *sTileGfx = NULL;    /* pointer to tile 1..N-1 gfx */
static EWRAM_DATA void *sOwnedBase = NULL; /* MemoryFree this on Reset; may equal sTileGfx */
static EWRAM_DATA u16 sSourceToSlot[STREAM_MAX_SOURCE_TILES];
static EWRAM_DATA u16 sSlotToSource[1024];
static EWRAM_DATA u16 sSlotStamp[1024];
static EWRAM_DATA u16 sStamp = 1;
static EWRAM_DATA u16 sClock = 1;

void GroundBgTileStream_Reset(void)
{
    if (sOwnedBase != NULL) {
        MemoryFree(sOwnedBase);
        sOwnedBase = NULL;
    }
    sTileGfx = NULL;
    sActive = FALSE;
    sNumTiles = 0;
    sVramSlots = 0;
    sStamp = 1;
    sClock = 1;
    CpuFill16(0, sSourceToSlot, sizeof(sSourceToSlot));
    CpuFill16(0, sSlotToSource, sizeof(sSlotToSource));
    CpuFill16(0, sSlotStamp, sizeof(sSlotStamp));
}

bool8 GroundBgTileStream_IsActive(void)
{
    return sActive;
}

static void ClearVramPool(s32 vramSlots)
{
    u16 *dst = (u16 *)STREAM_VRAM_BASE;
    s32 i, j;

    /* Tile 0 = transparent/empty */
    for (j = 0; j < 16; j++)
        *dst++ = 0;

    for (i = 1; i < vramSlots; i++) {
        for (j = 0; j < 16; j++)
            *dst++ = 0xFFFF;
    }
}

/* Keep an already-allocated BPC (or tile) buffer; no second heap copy. */
bool8 GroundBgTileStream_InstallOwned(void *ownedBase, const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    GroundBgTileStream_Reset();

    if (numTiles <= vramSlots || numTiles <= 1)
        return FALSE;
    if (numTiles > STREAM_MAX_SOURCE_TILES)
        FATAL_ERROR("ground tile stream: too many source tiles");
    if (ownedBase == NULL || tileData == NULL)
        FATAL_ERROR("ground tile stream: null owned buffer");
    if (vramSlots > 1024)
        vramSlots = 1024;

    sOwnedBase = ownedBase;
    sTileGfx = (u8 *)tileData;
    sNumTiles = numTiles;
    sVramSlots = vramSlots;
    ClearVramPool(vramSlots);
    sActive = TRUE;
    return TRUE;
}

/* ROM / static tile gfx — stable for the life of the map, nothing to free. */
bool8 GroundBgTileStream_InstallRom(const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    GroundBgTileStream_Reset();

    if (numTiles <= vramSlots || numTiles <= 1)
        return FALSE;
    if (numTiles > STREAM_MAX_SOURCE_TILES)
        FATAL_ERROR("ground tile stream: too many source tiles");
    if (tileData == NULL)
        FATAL_ERROR("ground tile stream: null rom tiles");
    if (vramSlots > 1024)
        vramSlots = 1024;

    sOwnedBase = NULL;
    sTileGfx = (u8 *)tileData;
    sNumTiles = numTiles;
    sVramSlots = vramSlots;
    ClearVramPool(vramSlots);
    sActive = TRUE;
    return TRUE;
}

bool8 GroundBgTileStream_Install(const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    s32 dataTiles;
    s32 bytes;
    void *owned;

    GroundBgTileStream_Reset();

    if (numTiles <= vramSlots || numTiles <= 1)
        return FALSE;
    if (numTiles > STREAM_MAX_SOURCE_TILES)
        FATAL_ERROR("ground tile stream: too many source tiles");
    if (vramSlots > 1024)
        vramSlots = 1024;

    dataTiles = numTiles - 1;
    bytes = dataTiles * 32;
    owned = MemoryAlloc(bytes, MEMALLOC_GROUP_6);
    if (owned == NULL)
        FATAL_ERROR("ground tile stream: alloc failed");

    CpuCopy(owned, tileData, bytes);
    return GroundBgTileStream_InstallOwned(owned, owned, numTiles, vramSlots);
}

static void UploadTile(u16 sourceId, u16 slot)
{
    const u8 *src = sTileGfx + (sourceId - 1) * 32;
    void *dst = (void *)(STREAM_VRAM_BASE + slot * 32);

    CpuCopy(dst, src, 32);
}

static u16 EvictSlot(void)
{
    u16 bestSlot = 1;
    u16 bestStamp = 0xFFFF;
    u16 slot;

    for (slot = 1; slot < (u16)sVramSlots; slot++) {
        if (sSlotToSource[slot] == 0)
            return slot;
        if (sSlotStamp[slot] < bestStamp) {
            bestStamp = sSlotStamp[slot];
            bestSlot = slot;
        }
    }

    if (sSlotToSource[bestSlot] != 0)
        sSourceToSlot[sSlotToSource[bestSlot]] = 0;
    sSlotToSource[bestSlot] = 0;
    return bestSlot;
}

static u16 EnsureTile(u16 sourceId)
{
    u16 slot;

    if (sourceId == 0)
        return 0;
    if (sourceId >= (u16)sNumTiles)
        return 0;

    slot = sSourceToSlot[sourceId];
    if (slot != 0) {
        sSlotStamp[slot] = sClock;
        return slot;
    }

    slot = EvictSlot();
    UploadTile(sourceId, slot);
    sSourceToSlot[sourceId] = slot;
    sSlotToSource[slot] = sourceId;
    sSlotStamp[slot] = sClock;
    return slot;
}

static void RemapTilemap(u16 *tilemap, s32 count)
{
    s32 i;

    for (i = 0; i < count; i++) {
        u16 entry = tilemap[i];
        u16 sourceId = entry & 0x0FFF;
        u16 palBits = entry & 0xF000;

        if (sourceId == 0) {
            tilemap[i] = 0;
            continue;
        }
        tilemap[i] = EnsureTile(sourceId) | palBits;
    }
}

void GroundBgTileStream_RemapVisibleTilemaps(GroundBg *groundBg)
{
    s32 layer;
    MapRender *mapRender;

    if (!sActive || groundBg == NULL)
        return;

    sClock++;
    if (sClock == 0) {
        /* stamp overflow — bump everyone so relative order stays usable */
        sClock = 1;
        CpuFill16(0, sSlotStamp, sizeof(sSlotStamp));
    }

    for (layer = 0; layer < groundBg->unk474; layer++) {
        mapRender = &groundBg->mapRender[layer];
        if (mapRender->bgTilemaps[0] != NULL)
            RemapTilemap(mapRender->bgTilemaps[0], 32 * 32);
        if (mapRender->numBgs > 1 && mapRender->bgTilemaps[1] != NULL)
            RemapTilemap(mapRender->bgTilemaps[1], 32 * 32);
    }

    sStamp = sClock;
}
