#include "global.h"
#include "globaldata.h"
#include "ground_bg_tile_stream.h"
#include "cpu.h"
#include "memory.h"
#include "debug.h"
#include "gba/macro.h"

#define STREAM_MAX_SOURCE_TILES 2048
#define STREAM_MAX_UPLOADS 256
#define STREAM_VRAM_BASE (VRAM + 0x8000)

static EWRAM_DATA bool8 sActive = FALSE;
static EWRAM_DATA bool8 sPrimed = FALSE;
static EWRAM_DATA s16 sNumTiles = 0;      /* includes null tile 0 */
static EWRAM_DATA s16 sVramSlots = 0;     /* unk6, typically 0x400 */
static EWRAM_DATA u8 *sTileGfx = NULL;    /* pointer to tile 1..N-1 gfx */
static EWRAM_DATA void *sOwnedBase = NULL; /* MemoryFree this on Reset; may equal sTileGfx */
static EWRAM_DATA u16 sSourceToSlot[STREAM_MAX_SOURCE_TILES];
static EWRAM_DATA u16 sSlotToSource[1024];
static EWRAM_DATA u16 sSlotStamp[1024];
static EWRAM_DATA u32 sFreeBits[32];      /* bit N set ⇒ slot N is free */
static EWRAM_DATA u16 sFreeCount = 0;
static EWRAM_DATA u16 sClock = 1;
static EWRAM_DATA u16 sOnScreenClock = 0; /* stamp of tiles in the displayed tilemap */
static EWRAM_DATA u16 sClockHand = 1;
static EWRAM_DATA s16 sCachedTileX = -1;
static EWRAM_DATA s16 sCachedTileY = -1;
static EWRAM_DATA u16 sUploadSlot[STREAM_MAX_UPLOADS];
static EWRAM_DATA u16 sUploadSource[STREAM_MAX_UPLOADS];
static EWRAM_DATA u16 sUploadCount = 0;

void GroundBgTileStream_Reset(void)
{
    if (sOwnedBase != NULL) {
        MemoryFree(sOwnedBase);
        sOwnedBase = NULL;
    }
    sTileGfx = NULL;
    sActive = FALSE;
    sPrimed = FALSE;
    sNumTiles = 0;
    sVramSlots = 0;
    sFreeCount = 0;
    sClock = 1;
    sOnScreenClock = 0;
    sClockHand = 1;
    sCachedTileX = -1;
    sCachedTileY = -1;
    sUploadCount = 0;
    CpuFill16(0, sSourceToSlot, sizeof(sSourceToSlot));
    CpuFill16(0, sSlotToSource, sizeof(sSlotToSource));
    CpuFill16(0, sSlotStamp, sizeof(sSlotStamp));
    CpuFill16(0, sFreeBits, sizeof(sFreeBits));
}

bool8 GroundBgTileStream_IsActive(void)
{
    return sActive;
}

static void MarkFree(u16 slot)
{
    sFreeBits[slot >> 5] |= (1u << (slot & 31));
    sFreeCount++;
}

static void MarkUsed(u16 slot)
{
    u32 mask = (1u << (slot & 31));
    u32 *word = &sFreeBits[slot >> 5];

    if (*word & mask) {
        *word &= ~mask;
        if (sFreeCount > 0)
            sFreeCount--;
    }
}

static void BuildFreeList(s32 vramSlots)
{
    s32 i;

    CpuFill16(0, sFreeBits, sizeof(sFreeBits));
    sFreeCount = 0;
    for (i = 1; i < vramSlots; i++)
        MarkFree((u16)i);
    sClockHand = 1;
}

static void ClearVramPool(s32 vramSlots)
{
    CpuFill16(0, (void *)STREAM_VRAM_BASE, 32);
    if (vramSlots > 1)
        CpuFill16(0xFFFF, (void *)(STREAM_VRAM_BASE + 32), (vramSlots - 1) * 32);
    BuildFreeList(vramSlots);
}

static bool8 ActivateStream(const u16 *tileData, s32 numTiles, s32 vramSlots, void *ownedBase)
{
    GroundBgTileStream_Reset();

    if (numTiles <= vramSlots || numTiles <= 1)
        return FALSE;
    if (numTiles > STREAM_MAX_SOURCE_TILES)
        FATAL_ERROR("ground tile stream: too many source tiles");
    if (tileData == NULL)
        FATAL_ERROR("ground tile stream: null tiles");
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

bool8 GroundBgTileStream_InstallOwned(void *ownedBase, const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    if (ownedBase == NULL)
        FATAL_ERROR("ground tile stream: null owned buffer");
    return ActivateStream(tileData, numTiles, vramSlots, ownedBase);
}

bool8 GroundBgTileStream_InstallRom(const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    return ActivateStream(tileData, numTiles, vramSlots, NULL);
}

bool8 GroundBgTileStream_Install(const u16 *tileData, s32 numTiles, s32 vramSlots)
{
    s32 dataTiles;
    s32 bytes;
    void *owned;

    if (numTiles <= vramSlots || numTiles <= 1) {
        GroundBgTileStream_Reset();
        return FALSE;
    }
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

bool8 GroundBgTileStream_NeedsRebuild(GroundBg *groundBg)
{
    MapRender *mapRender;
    s16 tx, ty;

    if (!sActive || groundBg == NULL)
        return FALSE;

    mapRender = &groundBg->mapRender[0];
    tx = mapRender->tilePos.x;
    ty = mapRender->tilePos.y;
    if (sPrimed && tx == sCachedTileX && ty == sCachedTileY)
        return FALSE;
    return TRUE;
}

static void QueueUpload(u16 sourceId, u16 slot)
{
    if (sUploadCount < STREAM_MAX_UPLOADS) {
        sUploadSlot[sUploadCount] = slot;
        sUploadSource[sUploadCount] = sourceId;
        sUploadCount++;
        return;
    }
    /* Rare overflow: write immediately (may hitch, but keeps correctness). */
    CpuFastCopy(sTileGfx + (sourceId - 1) * 32,
                (void *)(STREAM_VRAM_BASE + slot * 32),
                32);
}

void GroundBgTileStream_FlushUploads(void)
{
    u16 i;

    if (!sActive || sUploadCount == 0)
        return;

    for (i = 0; i < sUploadCount; i++) {
        u16 sourceId = sUploadSource[i];
        u16 slot = sUploadSlot[i];

        CpuFastCopy(sTileGfx + (sourceId - 1) * 32,
                    (void *)(STREAM_VRAM_BASE + slot * 32),
                    32);
    }
    sUploadCount = 0;
    /* Tilemap DMA follows in DoScheduledMemCopies — these stamps are now on-screen. */
    sOnScreenClock = sClock;
}

static u16 PopFreeSlot(void)
{
    u16 word;
    u16 bit;
    u16 slot;

    if (sFreeCount == 0)
        return 0;

    for (word = 0; word < 32; word++) {
        u32 bits = sFreeBits[word];
        if (bits == 0)
            continue;
        for (bit = 0; bit < 32; bit++) {
            if (bits & (1u << bit)) {
                slot = (word << 5) | bit;
                if (slot == 0)
                    continue;
                MarkUsed(slot);
                return slot;
            }
        }
    }
    sFreeCount = 0;
    return 0;
}

static u16 AllocSlot(void)
{
    u16 slot;
    u16 scanned;
    u16 limit;
    u16 freeSlot;

    freeSlot = PopFreeSlot();
    if (freeSlot != 0)
        return freeSlot;

    /* Prefer slots not in the currently displayed tilemap and not in this rebuild. */
    limit = (u16)sVramSlots;
    for (scanned = 1; scanned < limit; scanned++) {
        slot = sClockHand;
        if (++sClockHand >= limit)
            sClockHand = 1;

        if (sSlotToSource[slot] == 0)
            return slot;

        if (sSlotStamp[slot] != sClock && sSlotStamp[slot] != sOnScreenClock) {
            sSourceToSlot[sSlotToSource[slot]] = 0;
            sSlotToSource[slot] = 0;
            return slot;
        }
    }

    /* Fallback: steal a non-current slot even if it is on-screen (should be rare). */
    for (scanned = 1; scanned < limit; scanned++) {
        slot = sClockHand;
        if (++sClockHand >= limit)
            sClockHand = 1;
        if (sSlotStamp[slot] != sClock) {
            if (sSlotToSource[slot] != 0)
                sSourceToSlot[sSlotToSource[slot]] = 0;
            sSlotToSource[slot] = 0;
            return slot;
        }
    }

    slot = sClockHand;
    if (++sClockHand >= limit)
        sClockHand = 1;
    if (sSlotToSource[slot] != 0)
        sSourceToSlot[sSlotToSource[slot]] = 0;
    sSlotToSource[slot] = 0;
    return slot;
}

static u16 EnsureTile(u16 sourceId)
{
    u16 slot;

    if (sourceId == 0 || sourceId >= (u16)sNumTiles)
        return 0;

    slot = sSourceToSlot[sourceId];
    if (slot != 0) {
        sSlotStamp[slot] = sClock;
        return slot;
    }

    slot = AllocSlot();
    QueueUpload(sourceId, slot);
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

        if (sourceId == 0)
            continue;
        tilemap[i] = EnsureTile(sourceId) | (entry & 0xF000);
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
        sClock = 1;
        CpuFill16(0, sSlotStamp, sizeof(sSlotStamp));
        sOnScreenClock = 0;
    }

    for (layer = 0; layer < groundBg->unk474; layer++) {
        mapRender = &groundBg->mapRender[layer];
        if (mapRender->bgTilemaps[0] != NULL)
            RemapTilemap(mapRender->bgTilemaps[0], 32 * 32);
        if (mapRender->numBgs > 1 && mapRender->bgTilemaps[1] != NULL)
            RemapTilemap(mapRender->bgTilemaps[1], 32 * 32);
    }

    sCachedTileX = groundBg->mapRender[0].tilePos.x;
    sCachedTileY = groundBg->mapRender[0].tilePos.y;
    sPrimed = TRUE;
}
