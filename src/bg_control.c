#include "global.h"
#include "bg_control.h"
#include "cpu.h"
#include "graphics_memory.h"
#include "ground_bg.h"
#include "ground_bg_tile_stream.h"
#include "structs/str_ground_bg.h"
#include "text_1.h"

EWRAM_DATA BGControlStruct gBG0Control = {0};
EWRAM_DATA BGControlStruct gBG1Control = {0};
EWRAM_DATA BGControlStruct gBG2Control = {0};
EWRAM_DATA BGControlStruct gBG3Control = {0};
static EWRAM_DATA u8 sBldAlpha_CoeffA = {0};
static EWRAM_DATA u8 sBldAlpha_CoeffB = {0};
UNUSED static EWRAM_DATA u8 sUnknownUnusedEwram[0x140] = {0};
EWRAM_DATA u16 gBldAlpha = 0;
EWRAM_DATA u16 gBldCnt = 0;
EWRAM_DATA bool8 gUnknown_202D7FE = 0;
EWRAM_DATA bool8 gTitleBg8bpp = 0;

void SetBldAlphaReg(s32 lowAlpha, s32 highAlpha)
{
    if (lowAlpha < 0)
        lowAlpha = 0;
    else if (lowAlpha > 16)
        lowAlpha = 16;

    if (highAlpha < 0)
        highAlpha = 0;
    else if (highAlpha > 16)
        highAlpha = 16;

    sBldAlpha_CoeffA = lowAlpha;
    sBldAlpha_CoeffB = highAlpha;

    gBldAlpha = BLDALPHA_BLEND1(sBldAlpha_CoeffA, sBldAlpha_CoeffB);
}

static void SetBG0RegOffsets(s32 xoffset, s32 yoffset)
{
    gBG0Control.hofs = xoffset;
    gBG0Control.vofs = yoffset;
}

static void SetBG1RegOffsets(s32 xoffset, s32 yoffset)
{
    gBG1Control.hofs = xoffset;
    gBG1Control.vofs = yoffset;
}

void SetBG2RegOffsets(s32 xoffset, s32 yoffset)
{
    gBG2Control.hofs = xoffset;
    gBG2Control.vofs = yoffset;
}

void SetBG3RegOffsets(s32 xoffset, s32 yoffset)
{
    gBG3Control.hofs = xoffset;
    gBG3Control.vofs = yoffset;
}

UNUSED static void SetBGRegOffsets(s32 reg, u32 xoffset, s32 yoffset)
{
    switch (reg) {
        default:
        case 0: return SetBG0RegOffsets(xoffset, yoffset);
        case 1: return SetBG1RegOffsets(xoffset, yoffset);
        case 2: return SetBG2RegOffsets(xoffset, yoffset);
        case 3: return SetBG3RegOffsets(xoffset, yoffset);
    }
}

UNUSED static void SetBGRegXOffset(s32 reg, s32 offset)
{
    switch (reg) {
        default:
        case 0:
            gBG0Control.hofs = offset;
            break;
        case 1:
            gBG1Control.hofs = offset;
            break;
        case 2:
            gBG2Control.hofs = offset;
            break;
        case 3:
            gBG3Control.hofs = offset;
            break;
    }
}

UNUSED static void SetBGRegYOffset(s32 reg, s32 offset)
{
    switch (reg) {
        default:
        case 0:
            gBG0Control.vofs = offset;
            break;
        case 1:
            gBG1Control.vofs = offset;
            break;
        case 2:
            gBG2Control.vofs = offset;
            break;
        case 3:
            gBG3Control.vofs = offset;
            break;
    }
}

void sub_800CD64(s32 r0, bool8 r1)
{
    gUnknown_202D7FE = r1;
    gBG2Control.unk2 = r0 ? 0x8000 : 0;
}

void SetTitleBg8bpp(bool8 enabled)
{
    gTitleBg8bpp = enabled;
}

EWRAM_DATA bool8 gGroundMap8bpp = 0;
EWRAM_DATA bool8 gGroundMap8bppWideUi = 0;

void SetGroundMap8bpp(bool8 enabled)
{
    gGroundMap8bpp = enabled;
    if (!enabled)
        gGroundMap8bppWideUi = FALSE;
    if (enabled) {
        /* Wipe UI + art maps before the first café DMA. Legacy SB 30/31 and
         * title SB 31 can still hold stale entries. */
        CpuClear(gBgTilemaps[0], BG_SCREEN_SIZE);
        CpuClear(gBgTilemaps[1], BG_SCREEN_SIZE);
        CpuClear(gBgTilemaps[2], BG_SCREEN_SIZE);
        CpuClear(gBgTilemaps[3], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(6), gBgTilemaps[0], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(7), gBgTilemaps[1], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(12), gBgTilemaps[0], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(13), gBgTilemaps[1], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(0), gBgTilemaps[2], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(1), gBgTilemaps[3], BG_SCREEN_SIZE);
        /* Wipe legacy café map slots so a mode switch cannot flash old data. */
        CpuCopy(BG_SCREEN_ADDR(30), gBgTilemaps[2], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(31), gBgTilemaps[3], BG_SCREEN_SIZE);
    }
}

/* Café explore: UI maps at SB 6/7 → window tiles only 128..383 (256).
 * Large menus: park art tilemaps at SB 30/31 (streamer pool capped at 704),
 * reclaim SB 0/1 as window tile gfx from tile 2, keep BG2/BG3 visible. Blank
 * only the menu rectangles on the art layers (opaque UI covers them). */
void SetGroundMap8bppWideUi(bool8 enabled)
{
    if (!gGroundMap8bpp) {
        gGroundMap8bppWideUi = FALSE;
        return;
    }
    if (gGroundMap8bppWideUi == enabled)
        return;

    if (enabled) {
        GroundBgTileStream_SetCafeWideUiSlots(TRUE);
        if (gGroundMapDungeon_3001B70 != NULL) {
            sub_80A4764(gGroundMapDungeon_3001B70);
            GroundBgTileStream_FlushUploads();
        }
        /* Publish remapped art at SB 30/31, then free SB 0/1 for windows. */
        CpuCopy(BG_SCREEN_ADDR(30), gBgTilemaps[2], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(31), gBgTilemaps[3], BG_SCREEN_SIZE);
        REG_BG2CNT = (REG_BG2CNT & ~0x1F00) | BGCNT_SCREENBASE(30);
        REG_BG3CNT = (REG_BG3CNT & ~0x1F00) | BGCNT_SCREENBASE(31);
        CpuFill16(0, (void *)BG_SCREEN_ADDR(0), BG_SCREEN_SIZE);
        CpuFill16(0, (void *)BG_SCREEN_ADDR(1), BG_SCREEN_SIZE);
        gGroundMap8bppWideUi = TRUE;
    }
    else {
        gGroundMap8bppWideUi = FALSE;
        REG_BG2CNT = (REG_BG2CNT & ~0x1F00) | BGCNT_SCREENBASE(0);
        REG_BG3CNT = (REG_BG3CNT & ~0x1F00) | BGCNT_SCREENBASE(1);
        GroundBgTileStream_SetCafeWideUiSlots(FALSE);
        if (gGroundMapDungeon_3001B70 != NULL) {
            sub_80A4764(gGroundMapDungeon_3001B70);
            GroundBgTileStream_FlushUploads();
        }
        CpuCopy(BG_SCREEN_ADDR(0), gBgTilemaps[2], BG_SCREEN_SIZE);
        CpuCopy(BG_SCREEN_ADDR(1), gBgTilemaps[3], BG_SCREEN_SIZE);
        CpuFill16(0, (void *)BG_SCREEN_ADDR(30), BG_SCREEN_SIZE);
        CpuFill16(0, (void *)BG_SCREEN_ADDR(31), BG_SCREEN_SIZE);
    }

    CpuClear(gBgTilemaps[0], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[1], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(6), gBgTilemaps[0], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(7), gBgTilemaps[1], BG_SCREEN_SIZE);
    REG_BG0CNT = (REG_BG0CNT & ~0x1F00) | BGCNT_SCREENBASE(6);
    REG_BG1CNT = (REG_BG1CNT & ~0x1F00) | BGCNT_SCREENBASE(7);
}

/* Café keeps BG0 off while exploring; text windows may turn it back on. */
bool8 GroundMap8bppHideBg0(void)
{
    return gGroundMap8bpp;
}

/* Call after leaving the title screen (gTitleBg8bpp already FALSE). Title art
 * lives on BG2/BG3; house maps typically only rebuild BG3 (unkA==1). Stale BG2
 * tilemaps keep indexing into CHARBASE2 after map tiles replace title tiles →
 * garbage flash. Clear software maps and both title-8bpp + vanilla screenbases. */
void ClearTitleBgMapsForGround(void)
{
    CpuClear(gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[3], BG_SCREEN_SIZE);
    /* Title 8bpp layout (may still be what the last frame scanned). */
    CpuCopy(BG_SCREEN_ADDR(8), gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(31), gBgTilemaps[3], BG_SCREEN_SIZE);
    /* Vanilla ground layout. */
    CpuCopy(BG_SCREEN_ADDR(14), gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(15), gBgTilemaps[3], BG_SCREEN_SIZE);
}

/* Leave café 8bpp: clear flag caller-side, then wipe café UI (SB 6/7) + art
 * (SB 0/1) and republish vanilla SB 12–15 so the next 4bpp map is clean. */
void ClearGroundMap8bppMaps(void)
{
    gGroundMap8bppWideUi = FALSE;
    CpuClear(gBgTilemaps[0], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[1], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[3], BG_SCREEN_SIZE);
    /* Café 8bpp UI map slots (CHARBASE0). */
    CpuCopy(BG_SCREEN_ADDR(6), gBgTilemaps[0], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(7), gBgTilemaps[1], BG_SCREEN_SIZE);
    /* Café 8bpp art maps (+ legacy SB 30/31). */
    CpuCopy(BG_SCREEN_ADDR(0), gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(1), gBgTilemaps[3], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(30), gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(31), gBgTilemaps[3], BG_SCREEN_SIZE);
    /* Vanilla ground layout. */
    CpuCopy(BG_SCREEN_ADDR(12), gBgTilemaps[0], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(13), gBgTilemaps[1], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(14), gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuCopy(BG_SCREEN_ADDR(15), gBgTilemaps[3], BG_SCREEN_SIZE);
}

void SetBGOBJEnableFlags(u32 mask)
{
    REG_DISPCNT = (REG_DISPCNT & 0xE0FF) | (~(mask << 8) & (DISPCNT_BG_ALL_ON | DISPCNT_OBJ_ON));
}
