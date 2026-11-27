/*
 * Explorers of Sky demake: EoS's boss-battle transition.
 *
 * EoS runs CORO_BOSS_WIPE_FUNC (SCRIPT/COMMON/unionall.ssb) before every boss
 * fight; chapter 1 reaches it from m01a0401 / m01a0501 (Beach Cave Pit), after
 * two white flashes:
 *
 *     bgm_Stop(); se_Play(5143); screen_WhiteOut(1, 2); Wait(2); screen_FadeIn(1, 2);
 *     Wait(10); (the same again); WaitSe(5143);
 *     se_Play(5136); supervision_SpecialActing(13, 0, 0); Wait(60);
 *     screen_WhiteOutAll(1, 30); supervision_SpecialActing(3, 0, 0);
 *
 * SpecialActing(13) draws blue-white speed streaks with the 3D engine over the
 * whole bottom screen: six 256x64 strips of 4-pixel-tall pills (centre y 28,
 * 36, 92, 100, 156, 164) that open vertically out of their centre lines over
 * 32 frames while fading in (alpha +1/31 per frame), slide sideways at 4 px
 * per frame and, once open, speed up by 1/4 px per frame to 9 px per frame
 * (three strips left, three right). The pills and their timing here are taken
 * from DeSmuME captures of the effect (tools/make_sky_boss_wipe.py ->
 * src/data/sky_boss_wipe.h).
 *
 * The GBA draws the strips on two BG layers sharing one map: BG1 holds the
 * strips at y 28 / 92 / 156 (drawn on top, as in EoS) and BG2 the ones at
 * 36 / 100 / 164. An HBlank DMA (DMA3) writes BG1 / BG2's HOFS and VOFS every
 * line, so each line picks its strip's texture row (the vertical opening) and
 * its strip's x. The streak tiles and map borrow the dungeon's text window
 * tiles at VRAM 0x2000-0x4DFF, which are blank once the dialogue box closes,
 * and are cleared again afterwards. EoS's master-brightness flashes and
 * white-out are BLDY brightness on every layer; the streaks' fade-in is
 * BLDALPHA.
 *
 * Frame numbers below count from the first se_Play(5143) and follow a
 * DeSmuME recording of m01a0401 (documentation/Features/SkyDemake.md, "Boss
 * battle transition").
 */
#include "global.h"

#ifdef SKY_STORY

#include "bg_control.h"
#include "bg_palette_buffer.h"
#include "cpu.h"
#include "dungeon_music.h"
#include "dungeon_vram.h"
#include "sky_boss_wipe.h"
#include "sky_story.h"

struct BossWipeStrip
{
    s16 y;      // centre line on EoS's 256x192 screen
    s8 dir;     // -1 left, 1 right
    u8 delay;   // frames at 4 px/frame before it speeds up; it opens over the 32 frames before that
    s8 adjust;  // x correction measured against the capture
    u8 layer;   // 0 = BG1 (on top), 1 = BG2
};

#include "data/sky_boss_wipe.h"

#define WIPE_PALETTE        12      // BG palette 12 is unused on screen in the Pit
#define WIPE_SCREENBASE     4       // map at VRAM 0x2000
#define WIPE_VRAM_START     0x2000
#define WIPE_VRAM_END       0x4E00  // the font chrome starts at 0x4F00
#define WIPE_TILE_START     ((WIPE_VRAM_START + BOSS_WIPE_MAP_ROWS * 64 + 31) / 32)
#define WIPE_LINES          DISPLAY_HEIGHT
#define WIPE_TABLE_SIZE     (WIPE_LINES * 2 * sizeof(u32))
/* The two HBlank tables live in VRAM too (the dungeon heap has no room for
 * them, nor EWRAM): one after the streak tiles, one in BG2's map, which the
 * Pit leaves empty. The last line's HBlank reads one entry past a table; that
 * value only reaches the registers during VBlank. */
#define WIPE_TABLE_0_VRAM   (WIPE_VRAM_END - WIPE_TABLE_SIZE)
#define WIPE_TABLE_1_VRAM   0x7000

/* EoS's 256x192 screen is cropped to the GBA's 240x160 around its centre. */
#define DS_X_OFFSET         8
#define DS_Y_OFFSET         16

/* Timeline, in frames from the first se_Play(5143). */
#define FLASH_1             0
#define FLASH_2             16
#define LOAD_FRAME          (FLASH_1 + 3)
#define WIPE_SE             49
#define STREAKS_START       60      // SpecialActing(13)'s first frame
#define WHITE_OUT_START     123     // screen_WhiteOutAll(1, 30)
#define WIPE_END            152

_Static_assert(WIPE_TILE_START * 32 + BOSS_WIPE_TILE_COUNT * 32 <= WIPE_VRAM_END, "boss wipe tiles must fit in the text window area");
_Static_assert(WIPE_TILE_START * 32 + BOSS_WIPE_TILE_COUNT * 32 <= WIPE_TABLE_0_VRAM, "boss wipe HBlank table must fit after the tiles");

/* screen_WhiteOut(1, 2) / screen_FadeIn(1, 2): master brightness 8, 16, 16, 16, 8. */
static const u8 sFlashLevels[] = {8, 16, 16, 16, 8};
/* screen_WhiteOutAll(1, 30), as measured frame by frame. */
static const u8 sWhiteOutLevels[] = {
    1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 16, 16,
};

EWRAM_DATA bool8 gSkyBossWipeActive = FALSE;

static EWRAM_DATA struct {
    u16 bldCnt;
    u16 bldAlpha;
    u16 bldY;
    u16 savedBldCnt;
    u16 savedBldAlpha;
    bool8 layers;       // BG1 / BG2 show the streaks
    bool8 hideBg0;
    bool8 dmaOn;        // the HBlank DMA feeds BG1 / BG2
    u8 front;           // table the HBlank DMA reads
    s8 ready;           // table to show from the next VBlank, -1 none
    bool8 loaded;
    u32 *tables[2];     // WIPE_LINES x {BG1 HOFS|VOFS, BG2 HOFS|VOFS}
    s32 x[6];           // strip x, 1/4 px
    s32 speed[6];       // 1/4 px per frame
    u16 savedPalette[16];
} sWipe = {0};

static void ApplyPalette(void)
{
    s32 i;

    for (i = 1; i < 16; i++) {
        u16 color = sBossWipePalette[i];
        SetBGPaletteBufferColor(WIPE_PALETTE * 16 + i, &color);
    }
}

static bool8 VramIsZero(u32 start, u32 end)
{
    const u32 *p = (const u32 *)(VRAM + start);

    while (p < (const u32 *)(VRAM + end)) {
        if (*p++ != 0)
            return FALSE;
    }
    return TRUE;
}

static bool8 LoadStreaks(void)
{
    s32 i;
    vu16 *map;

    if (!VramIsZero(WIPE_VRAM_START, WIPE_VRAM_END) || !VramIsZero(WIPE_TABLE_1_VRAM, WIPE_TABLE_1_VRAM + WIPE_TABLE_SIZE))
        return FALSE;
    CpuCopy((void *)(VRAM + WIPE_TILE_START * 32), sBossWipeTiles, sizeof(sBossWipeTiles));
    map = (vu16 *)(VRAM + WIPE_VRAM_START);
    for (i = 0; i < BOSS_WIPE_MAP_ROWS * 32; i++) {
        u16 e = sBossWipeMap[i];
        map[i] = ((e & 0x3FF) + WIPE_TILE_START) | (e & 0xC00) | (WIPE_PALETTE << 12);
    }
    for (i = 0; i < 16; i++)
        sWipe.savedPalette[i] = GetBGPaletteBufferColor(WIPE_PALETTE * 16 + i);
    ApplyPalette();
    sWipe.tables[0] = (u32 *)(VRAM + WIPE_TABLE_0_VRAM);
    sWipe.tables[1] = (u32 *)(VRAM + WIPE_TABLE_1_VRAM);
    sWipe.loaded = TRUE;
    for (i = 0; i < 6; i++) {
        sWipe.x[i] = 0;
        sWipe.speed[i] = 16;
    }
    // The first table built is table 0: table 1 is BG2's own map, which shows
    // until the DMA takes over BG2.
    sWipe.front = 1;
    sWipe.ready = -1;
    return TRUE;
}

static void UnloadStreaks(void)
{
    s32 i;

    sWipe.layers = FALSE;
    DmaStop(3);
    sWipe.dmaOn = FALSE;
    sWipe.loaded = FALSE;
    CpuClear((void *)(VRAM + WIPE_VRAM_START), WIPE_VRAM_END - WIPE_VRAM_START);
    CpuClear((void *)(VRAM + WIPE_TABLE_1_VRAM), WIPE_TABLE_SIZE);
    for (i = 1; i < 16; i++)
        SetBGPaletteBufferColor(WIPE_PALETTE * 16 + i, &sWipe.savedPalette[i]);
}

/* One frame of EoS's strip motion: 4 px per frame, then +1/4 px per frame up to 9. */
static void StepStreaks(s32 n)
{
    s32 i;

    for (i = 0; i < 6; i++) {
        if (n > sBossWipeStrips[i].delay + 1 && sWipe.speed[i] < 36)
            sWipe.speed[i]++;
        sWipe.x[i] += sWipe.speed[i];
    }
}

/* Writes the HBlank table for streak frame n (0 = SpecialActing(13)'s first frame). */
static void BuildTable(u32 *table, s32 n)
{
    s32 hofs[6], open[6];
    s32 i, y, layer;

    for (i = 0; i < 6; i++) {
        const struct BossWipeStrip *strip = &sBossWipeStrips[i];
        s32 x = (strip->dir * sWipe.x[i]) >> 2;

        hofs[i] = (DS_X_OFFSET - (x + strip->adjust)) & 0xFF;
        // Height in 1/32: the strip opens from its centre line over 32 frames.
        open[i] = n + 32 - strip->delay;
        if (open[i] > 32)
            open[i] = 32;
    }

    for (y = 0; y < WIPE_LINES; y++) {
        s32 dsY = y + DS_Y_OFFSET;

        for (layer = 0; layer < 2; layer++) {
            s32 row = 0;

            // Strips 0-2 (y 28 / 92 / 156) are BG1, 3-5 (36 / 100 / 164) BG2; each covers its centre +-32.
            if (layer == 0)
                i = dsY < 60 ? 0 : dsY < 124 ? 1 : 2;
            else
                i = dsY < 68 ? 3 : dsY < 132 ? 4 : 5;

            if (y < DISPLAY_HEIGHT && open[i] > 0) {
                s32 d = dsY - sBossWipeStrips[i].y;
                s32 r;

                if (open[i] >= 32) {
                    r = 32 + d;
                }
                else {
                    // Texture row at (d + 0.5) / scale, rounded down.
                    s32 num = (2 * d + 1) * 16;

                    if (num >= 0)
                        r = 32 + num / open[i];
                    else
                        r = 32 - ((-num + open[i] - 1) / open[i]);
                }
                if (r >= 0 && r < 64)
                    row = sBossWipeRowMap[i][r];
            }
            table[y * 2 + layer] = hofs[i] | (((row - y) & 0xFF) << 16);
        }
    }
}

static void SetBrightness(s32 level)
{
    sWipe.bldCnt = BLDCNT_TGT1_ALL | BLDCNT_EFFECT_LIGHTEN;
    sWipe.bldY = level;
}

static void SetStreakAlpha(s32 alpha)
{
    s32 eva = (alpha * 16 + 15) / 31;

    sWipe.bldCnt = BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_BLEND
                 | BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_OBJ | BLDCNT_TGT2_BD;
    sWipe.bldAlpha = BLDALPHA_BLEND(eva, 16 - eva);
    sWipe.bldY = 0;
}

static void RunFrame(void)
{
    gBldCnt = sWipe.bldCnt;
    gBldAlpha = sWipe.bldAlpha;
    DungeonRunFrameActions(0x46);
}

void SkyBossWipe_Start(void)
{
    s32 s;
    bool8 streaks = FALSE;

    DungeonStopBGM();
    sWipe.savedBldCnt = gBldCnt;
    sWipe.savedBldAlpha = gBldAlpha;
    sWipe.bldAlpha = gBldAlpha;
    sWipe.layers = FALSE;
    sWipe.dmaOn = FALSE;
    sWipe.loaded = FALSE;
    SetBrightness(0);
    sWipe.hideBg0 = FALSE;
    gSkyBossWipeActive = TRUE;

    for (s = 0; s <= WIPE_END; s++) {
        if (s == FLASH_1 || s == FLASH_2)
            PlaySoundEffect(SE_SKY_FLASH_HEAVY);
        else if (s == WIPE_SE)
            PlaySoundEffect(SE_SKY_BOSS_WIPE);

        if (s > FLASH_1 && s <= FLASH_1 + 5)
            SetBrightness(sFlashLevels[s - FLASH_1 - 1]);
        else if (s > FLASH_2 && s <= FLASH_2 + 5)
            SetBrightness(sFlashLevels[s - FLASH_2 - 1]);
        else if (s >= WHITE_OUT_START)
            SetBrightness(sWhiteOutLevels[s - WHITE_OUT_START]);
        else
            SetBrightness(0);

        // Hide BG0 a frame before the streak tiles go into its text window
        // tiles; load them while the first flash is fully white, as the copy
        // makes the dungeon miss a frame.
        if (s == LOAD_FRAME - 1)
            sWipe.hideBg0 = TRUE;
        if (s == LOAD_FRAME)
            streaks = LoadStreaks();
        if (streaks && s >= STREAKS_START) {
            s32 n = s - STREAKS_START;
            s32 back = sWipe.front ^ 1;

            if (n > 0)
                StepStreaks(n);
            BuildTable(sWipe.tables[back], n);
            sWipe.ready = back;
            sWipe.layers = TRUE;
            ApplyPalette();
            if (s < WHITE_OUT_START) {
                // EoS: polygon alpha 1/31 on the second frame, +1 per frame.
                s32 alpha = n - 1;
                if (alpha < 0)
                    alpha = 0;
                if (alpha > 31)
                    alpha = 31;
                SetStreakAlpha(alpha);
            }
        }
        RunFrame();
    }

    // Fully white: drop the streak layers behind the white screen.
    if (streaks) {
        sWipe.layers = FALSE;
        RunFrame();
        UnloadStreaks();
    }
    sWipe.hideBg0 = FALSE;
}

void SkyBossWipe_HoldWhite(s32 frames)
{
    SetBrightness(16);
    while (frames-- > 0)
        RunFrame();
}

void SkyBossWipe_FadeIn(void)
{
    s32 level;

    // EoS's fade-in on the fight: master brightness 15 down to 0, one step per frame.
    for (level = 15; level >= 0; level--) {
        SetBrightness(level);
        RunFrame();
    }
    gSkyBossWipeActive = FALSE;
    gBldCnt = sWipe.savedBldCnt;
    gBldAlpha = sWipe.savedBldAlpha;
    REG_BLDY = 0;
}

static void SetStreakBgRegs(const u32 *table)
{
    REG_BG1CNT = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(WIPE_SCREENBASE) | BGCNT_16COLOR | BGCNT_TXT256x256;
    REG_BG2CNT = BGCNT_PRIORITY(0) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(WIPE_SCREENBASE) | BGCNT_16COLOR | BGCNT_TXT256x256;
    *(vu32 *)REG_ADDR_BG1HOFS = table[0];
    *(vu32 *)REG_ADDR_BG2HOFS = table[1];
}

/* VBlank_CB: after the window setup. */
void SkyBossWipe_VBlank(void)
{
    REG_BLDCNT = sWipe.bldCnt;
    REG_BLDALPHA = sWipe.bldAlpha;
    REG_BLDY = sWipe.bldY;
    if (sWipe.layers && sWipe.loaded) {
        const u32 *table;

        if (sWipe.ready >= 0) {
            sWipe.front = sWipe.ready;
            sWipe.ready = -1;
        }
        table = sWipe.tables[sWipe.front];
        DmaStop(3);
        SetStreakBgRegs(table);
        DmaSet(3, &table[2], REG_ADDR_BG1HOFS,
               ((DMA_ENABLE | DMA_START_HBLANK | DMA_REPEAT | DMA_SRC_INC | DMA_DEST_RELOAD | DMA_32BIT) << 16) | 2);
        sWipe.dmaOn = TRUE;
    }
    else if (sWipe.dmaOn) {
        DmaStop(3);
        sWipe.dmaOn = FALSE;
    }
    if (sWipe.hideBg0) {
        /* BG0's text window map points at the tiles the streaks borrow. */
        REG_WININ = (WININ_WIN0_ALL | WININ_WIN1_ALL) & ~(WININ_WIN0_BG0 | WININ_WIN1_BG0);
        /* BG1 shows outside the windows only while it carries the streaks. */
        REG_WINOUT = WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR | WINOUT_WIN01_BG2 | WINOUT_WIN01_BG3
                   | (sWipe.dmaOn ? WINOUT_WIN01_BG1 : 0);
    }
}

/* UpdateBGControlRegisters: after the game's own BG / blend registers. It can
 * run before the frame's VBlank, so it only touches BG1 / BG2 once the HBlank
 * DMA runs. */
void SkyBossWipe_UpdateRegs(void)
{
    REG_BLDCNT = sWipe.bldCnt;
    if (sWipe.dmaOn && sWipe.loaded)
        SetStreakBgRegs(sWipe.tables[sWipe.front]);
}

#endif /* SKY_STORY */
