#include "global.h"
#include "sky_story.h"
#include "sky_boss_wipe.h"
#include "bg_control.h"
#include "window_buffer.h"
#include "cpu.h"

EWRAM_DATA u32 gUnknown_202D800 = {0};

EWRAM_INIT u16 gRawKeyInput = {0}; // Not used here, but has to be declare along with sBldCntTable for alignment. Perhaps this file should be merged with bg_control and code_800C9CC.
// Despite being in EWRAM, these never change.
static EWRAM_INIT u16 sBldCntTable[] = {
    (BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (BLDCNT_TGT1_BG1 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (BLDCNT_TGT1_BG3 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD),
    (0),
};

void sub_800CDA8(u32 r0)
{
    gUnknown_202D800 = r0;
    gBldCnt = sBldCntTable[r0];
}

u32 sub_800CDC8(void)
{
    return gUnknown_202D800;
}

// arm9.bin::02007FF4
void SetWindowTitle(const u8 *title)
{
}

void nullsub_23(bool8 a0)
{
}

UNUSED static void nullsub_182(void)
{
}

UNUSED static bool8 sub_800CDE0(void)
{
    return TRUE;
}

#ifdef SKY_STORY
/* DMA 3 moves a word from EWRAM to VRAM in 9 cycles; the BIOS's CpuSet takes
 * 15. The dungeon copies about 5 KB a frame through these (BG tilemaps 0 and
 * 1, the HP bar's tiles, animated tiles): 6.9% of a frame with CpuSet, 4.0%
 * with DMA. A DMA holds the CPU (and interrupts) until it is done, so long
 * copies go in blocks of DMA_BLOCK bytes (under a scanline each). The
 * boss-battle transition owns DMA 3 while it runs (src/sky_boss_wipe.c);
 * copies use CpuSet then. */
#define DMA_BLOCK 0x200
#define DMA_MIN 64

void CpuCopy(void *dest, const void *src, s32 size)
{
    if (size >= DMA_MIN && !gSkyBossWipeActive && (((u32)dest | (u32)src) & 3) == 0) {
        while (size >= 4) {
            s32 n = size > DMA_BLOCK ? DMA_BLOCK : (size & ~3);

            DmaCopy32(3, src, dest, n);
            src = (const u8 *)src + n;
            dest = (u8 *)dest + n;
            size -= n;
        }
        return;
    }
    CpuCopy32(src, dest, size);
}

void CpuFill(void *dest, void *value, s32 size)
{
    if (size >= DMA_MIN && !gSkyBossWipeActive && ((u32)dest & 3) == 0) {
        while (size >= 4) {
            s32 n = size > DMA_BLOCK ? DMA_BLOCK : (size & ~3);

            DmaFill32(3, value, dest, n);
            dest = (u8 *)dest + n;
            size -= n;
        }
        return;
    }
    CpuFill32(value, dest, size);
}

void CpuClear(void *dest, s32 size)
{
    CpuFill(dest, NULL, size);
}
#else
// In NDS, this func is copied to 01FF9FC4
void CpuCopy(void *dest, const void *src, s32 size)
{
    CpuCopy32(src, dest, size);
}

// In NDS, this func is copied to 01FF9FB0
void CpuClear(void *dest, s32 size)
{
    CpuFill32(NULL, dest, size);
}

void CpuFill(void *dest, void *value, s32 size)
{
    CpuFill32(value, dest, size);
}
#endif

void VBlank_CB(void)
{
    // Looks like a macro?
    u16 cnt = REG_DMA0CNT_H;
    cnt |= DMA_ENABLE;
    cnt &= ~(DMA_START_HBLANK | DMA_START_VBLANK | DMA_REPEAT);
    REG_DMA0CNT_H = cnt;
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    asm("mov \tr8, r8");
    REG_DMA0CNT_H = cnt & ~(DMA_ENABLE);

    REG_WININ = WININ_WIN0_ALL | WININ_WIN1_ALL;
#ifdef SKY_STORY
    /* The pan cover (src/sky_cutaways.c) uses BG1 outside the text windows. */
    REG_WINOUT = WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR | WINOUT_WIN01_BG3 | WINOUT_WIN01_BG2 | WINOUT_WIN01_BG0
               | (gSkyCoverActive ? WINOUT_WIN01_BG1 : 0);
#else
    REG_WINOUT = WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR | WINOUT_WIN01_BG3 | WINOUT_WIN01_BG2 | WINOUT_WIN01_BG0;
#endif
    REG_BLDCNT = gBldCnt;
    REG_BLDALPHA = gBldAlpha;
    if (gDrawWindow) {
        // Write the next 2 values from gWinBufferPtr to WIN0H/WIN1H every HBlank, allows for drawing
        // non-rectangular windows
        DmaSet(0, &gWinBufferPtr[2], REG_ADDR_WIN0H, ((DMA_ENABLE | DMA_START_HBLANK | DMA_REPEAT | DMA_SRC_INC | DMA_DEST_RELOAD | DMA_16BIT) << 16) | 2);
        // Manually set the first WIN0H and WIN1H values
        REG_WIN0H = gWinBufferPtr[0];
        REG_WIN1H = gWinBufferPtr[1];
        // Set WIN0V/WIN1V to max screen dimensions
        REG_WIN0V = DISPLAY_HEIGHT;
        REG_WIN1V = DISPLAY_HEIGHT;
    }
    else {
        REG_WIN0H = 0;
        REG_WIN1H = 0;
        REG_WIN0V = 0;
        REG_WIN1V = 0;
    }
#ifdef SKY_STORY
    /* EoS's boss-battle transition (src/sky_boss_wipe.c). */
    if (gSkyBossWipeActive)
        SkyBossWipe_VBlank();
#endif
}
