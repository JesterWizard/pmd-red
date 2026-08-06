#include "global.h"
#include "globaldata.h"
#include "ground_bg_tile_stream.h"
#include "cpu.h"
#include "memory.h"
#include "debug.h"
#include "gba/macro.h"

#define STREAM_MAX_SOURCE_TILES 2048
/* Café entry can need ~400 unique 8bpp tiles in one remap; keep them queued so
 * FlushUploads commits with the tilemap DMA instead of mid-frame copies. */
#define STREAM_MAX_UPLOADS 576
#define STREAM_VRAM_BASE_4BPP (VRAM + 0x8000)
/* 3×3 dual-layer renderer fills rows 0..23 only (see RenderChunksToBgTilemaps_3x3). */
#define STREAM_VISIBLE_TILEMAP_ENTRIES (32 * 24)

static EWRAM_DATA bool8 sActive = FALSE;
static EWRAM_DATA bool8 sPrimed = FALSE;
static EWRAM_DATA u8 sBppMode = GROUND_STREAM_4BPP;
static EWRAM_DATA u16 sTileBytes = 32;
static EWRAM_DATA u32 sVramBase = STREAM_VRAM_BASE_4BPP;
static EWRAM_DATA u16 sFirstSlot = 1;
static EWRAM_DATA s16 sNumTiles = 0;      /* includes null tile 0 */
static EWRAM_DATA s16 sVramSlots = 0;
static EWRAM_DATA u8 *sTileGfx = NULL;    /* pointer to tile 1..N-1 gfx */
static EWRAM_DATA void *sOwnedBase = NULL;
static EWRAM_DATA u16 sSourceToSlot[STREAM_MAX_SOURCE_TILES];
static EWRAM_DATA u16 sSlotToSource[1024];
static EWRAM_DATA u16 sSlotStamp[1024];
static EWRAM_DATA u32 sFreeBits[32];
static EWRAM_DATA u16 sFreeCount = 0;
static EWRAM_DATA u16 sClock = 1;
static EWRAM_DATA u16 sOnScreenClock = 0;
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
    sBppMode = GROUND_STREAM_4BPP;
    sTileBytes = 32;
    sVramBase = STREAM_VRAM_BASE_4BPP;
    sFirstSlot = 1;
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

bool8 GroundBgTileStream_Is8bpp(void)
{
    return sActive && sBppMode == GROUND_STREAM_8BPP;
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
    u16 first = sFirstSlot;

    CpuFill16(0, sFreeBits, sizeof(sFreeBits));
    sFreeCount = 0;
    for (i = first; i < vramSlots; i++)
        MarkFree((u16)i);
    sClockHand = first;
}

static void ClearVramPool(s32 vramSlots)
{
    u32 tileBytes = sTileBytes;
    u16 first = sFirstSlot;
    u32 clearSlots;

    /* Never wipe slots below sFirstSlot — 8bpp café leaves 0–127 for font/chrome. */
    if (first >= vramSlots)
        return;
    clearSlots = (u32)(vramSlots - first);
    CpuFill16(0, (void *)(sVramBase + first * tileBytes), tileBytes);
    if (clearSlots > 1)
        CpuFill16(0xFFFF, (void *)(sVramBase + (first + 1) * tileBytes), (clearSlots - 1) * tileBytes);
    BuildFreeList(vramSlots);
}

static bool8 ActivateStream(const u16 *tileData, s32 numTiles, s32 vramSlots, void *ownedBase, u8 bppMode)
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

    sBppMode = bppMode;
    if (bppMode == GROUND_STREAM_8BPP) {
        sTileBytes = 64;
        sVramBase = GROUND_STREAM_8BPP_VRAM_BASE;
        sFirstSlot = GROUND_STREAM_8BPP_FIRST_SLOT;
        if (vramSlots > GROUND_STREAM_8BPP_VRAM_SLOTS)
            vramSlots = GROUND_STREAM_8BPP_VRAM_SLOTS;
    }
    else {
        sTileBytes = 32;
        sVramBase = STREAM_VRAM_BASE_4BPP;
        sFirstSlot = 1;
    }

    sOwnedBase = ownedBase;
    sTileGfx = (u8 *)tileData;
    sNumTiles = numTiles;
    sVramSlots = vramSlots;
    ClearVramPool(vramSlots);
    sActive = TRUE;
    return TRUE;
}

bool8 GroundBgTileStream_InstallOwned(void *ownedBase, const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode)
{
    if (ownedBase == NULL)
        FATAL_ERROR("ground tile stream: null owned buffer");
    return ActivateStream(tileData, numTiles, vramSlots, ownedBase, bppMode);
}

bool8 GroundBgTileStream_InstallRom(const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode)
{
    return ActivateStream(tileData, numTiles, vramSlots, NULL, bppMode);
}

bool8 GroundBgTileStream_Install(const u16 *tileData, s32 numTiles, s32 vramSlots, u8 bppMode)
{
    s32 dataTiles;
    s32 bytes;
    void *owned;
    u16 tileBytes = (bppMode == GROUND_STREAM_8BPP) ? 64 : 32;

    if (numTiles <= vramSlots || numTiles <= 1) {
        GroundBgTileStream_Reset();
        return FALSE;
    }
    if (numTiles > STREAM_MAX_SOURCE_TILES)
        FATAL_ERROR("ground tile stream: too many source tiles");
    if (vramSlots > 1024)
        vramSlots = 1024;

    dataTiles = numTiles - 1;
    bytes = dataTiles * tileBytes;
    owned = MemoryAlloc(bytes, MEMALLOC_GROUP_6);
    if (owned == NULL)
        FATAL_ERROR("ground tile stream: alloc failed");

    CpuCopy(owned, tileData, bytes);
    return GroundBgTileStream_InstallOwned(owned, owned, numTiles, vramSlots, bppMode);
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
    CpuFastCopy(sTileGfx + (sourceId - 1) * sTileBytes,
                (void *)(sVramBase + slot * sTileBytes),
                sTileBytes);
}

void GroundBgTileStream_FlushUploads(void)
{
    u16 i;

    if (!sActive || sUploadCount == 0)
        return;

    for (i = 0; i < sUploadCount; i++) {
        u16 sourceId = sUploadSource[i];
        u16 slot = sUploadSlot[i];

        CpuFastCopy(sTileGfx + (sourceId - 1) * sTileBytes,
                    (void *)(sVramBase + slot * sTileBytes),
                    sTileBytes);
    }
    sUploadCount = 0;
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
                if (slot < sFirstSlot)
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
    u16 first;
    u16 freeSlot;

    freeSlot = PopFreeSlot();
    if (freeSlot != 0)
        return freeSlot;

    first = sFirstSlot;
    limit = (u16)sVramSlots;
    if (sClockHand < first)
        sClockHand = first;
    for (scanned = first; scanned < limit; scanned++) {
        slot = sClockHand;
        if (++sClockHand >= limit)
            sClockHand = first;

        if (slot < first)
            continue;

        if (sSlotToSource[slot] == 0)
            return slot;

        if (sSlotStamp[slot] != sClock && sSlotStamp[slot] != sOnScreenClock) {
            sSourceToSlot[sSlotToSource[slot]] = 0;
            sSlotToSource[slot] = 0;
            return slot;
        }
    }

    for (scanned = first; scanned < limit; scanned++) {
        slot = sClockHand;
        if (++sClockHand >= limit)
            sClockHand = first;
        if (slot < first)
            continue;
        if (sSlotStamp[slot] != sClock) {
            if (sSlotToSource[slot] != 0)
                sSourceToSlot[sSlotToSource[slot]] = 0;
            sSlotToSource[slot] = 0;
            return slot;
        }
    }

    slot = sClockHand;
    if (++sClockHand >= limit)
        sClockHand = first;
    if (slot < first)
        slot = first;
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

void GroundBgTileStream_Invalidate(void)
{
    sPrimed = FALSE;
    sCachedTileX = -1;
    sCachedTileY = -1;
    sOnScreenClock = 0;
    sUploadCount = 0;
    /* Drop any provisional slot cache so the next Remap starts clean. */
    if (sActive && sVramSlots > 0) {
        CpuFill16(0, sSourceToSlot, sizeof(sSourceToSlot));
        CpuFill16(0, sSlotToSource, sizeof(sSlotToSource));
        CpuFill16(0, sSlotStamp, sizeof(sSlotStamp));
        BuildFreeList(sVramSlots);
        sClock = 1;
        sClockHand = sFirstSlot;
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
        /* Only the rendered 32×24 window — remapping blank rows wastes slots. */
        if (mapRender->bgTilemaps[0] != NULL)
            RemapTilemap(mapRender->bgTilemaps[0], STREAM_VISIBLE_TILEMAP_ENTRIES);
        if (mapRender->numBgs > 1 && mapRender->bgTilemaps[1] != NULL)
            RemapTilemap(mapRender->bgTilemaps[1], STREAM_VISIBLE_TILEMAP_ENTRIES);
    }

    sCachedTileX = groundBg->mapRender[0].tilePos.x;
    sCachedTileY = groundBg->mapRender[0].tilePos.y;
    sPrimed = TRUE;
}
