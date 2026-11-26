#include "global.h"
#include "sky_story.h"
#include "fullscreen_art.h"
#include "bg_control.h"
#include "bg_palette_buffer.h"
#include "code_800C9CC.h"
#include "cpu.h"
#include "decompress_at.h"
#include "graphics_memory.h"
#include "input.h"
#include "memory.h"
#include "music_util.h"
#include "random.h"
#include "sprite.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "window_buffer.h"

/* Same VRAM layout as custom title backgrounds. */
#define ART_8BPP_TILE_BASE 128
#define ART_8BPP_MAX_TILES TITLE_BG_8BPP_MAX_TILES

void RunFullscreenArtFrame(void)
{
    CopyWindowBgBuffer(NULL, COPY_WINDOW_BG_BUFFER_WIN0);
    nullsub_8(FALSE);
    sub_8005180();
    ToggleWindowBgBuffer();
#ifdef SKY_STORY
    /* After the window buffer calls, which reset the blend weights (the rain
     * sets its own). */
    SkyBubbles_DrawCutaway();
#endif
    UpdateSoundEffectCounters();
    WaitForNextFrameAndAdvanceRNG();
    LoadBufferedInputs();
    CopySpritesToOam();
    sub_8005304();
    TransferBGPaletteBuffer();
    xxx_call_update_bg_vram();
    DoScheduledMemCopies();
    xxx_call_update_bg_sound_input();
    ResetSprites(FALSE);
}

void SetFullscreenArtBrightness(const RGB_Struct *pal, s32 brightness)
{
    s32 i;

    for (i = 0; i < 240; i++)
        SetBGPaletteBufferColorRGB(i, &pal[i], brightness, NULL);
#ifdef SKY_STORY
    SkyBubbles_SetBrightness(brightness);
#endif
}

#ifdef SKY_STORY
/* Same screen set-up as LoadFullscreenArt, with an empty BG3 map: the caller
 * streams its own 8bpp tiles (src/sky_cutaways.c, the CG scrolls). */
void LoadFullscreenArtBlank(void)
{
    s32 i, j;

    ResetSprites(TRUE);
    UpdateFadeInTile(0);
    InitFontPalette();
    sub_800CDA8(2);
    ShowWindows(NULL, TRUE, TRUE);
    SetBG2RegOffsets(0, 0);
    SetBG3RegOffsets(0, 0);
    SetBGOBJEnableFlags(0);
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            gBgTilemaps[2][i][j] = 0;
            gBgTilemaps[3][i][j] = 0;
        }
    }
    SetTitleBg8bpp(TRUE);
    for (i = 0; i < 20; i++) {
        gBgTilemaps[0][i][0] = 0;
        gBgTilemaps[1][i][0] = 0;
    }
    ScheduleBgTilemapCopy(0);
    ScheduleBgTilemapCopy(1);
    ScheduleBgTilemapCopy(2);
    ScheduleBgTilemapCopy(3);
}
#endif

void LoadFullscreenArt(const u8 *at4pn)
{
    u32 outLen;
    u8 *buf;
    u32 decompSize;
    u32 tileBytes;
    u16 *tilemap;
    s32 i, j;

    ResetSprites(TRUE);
    UpdateFadeInTile(0);
    InitFontPalette();
    sub_800CDA8(2);
    ShowWindows(NULL, TRUE, TRUE);
    SetBG2RegOffsets(0, 0);
    SetBG3RegOffsets(0, 0);
    SetBGOBJEnableFlags(0);

    /* AT4PX bytes 5..6 are the compressed length; size from the output length at 0x10. */
    if (at4pn[4] == 'N')
        outLen = at4pn[5] | (at4pn[6] << 8);
    else
        outLen = at4pn[0x10] | (at4pn[0x11] << 8);
    buf = MemoryAlloc((outLen + 3) & ~3, MEMALLOC_GROUP_0);
    decompSize = DecompressAT(buf, 0, at4pn);
    if (decompSize < 0x1000)
        decompSize = 0x1000;
    tilemap = (u16 *)buf;
    tileBytes = decompSize - 0x1000;
    if (tileBytes > ART_8BPP_MAX_TILES * 64)
        tileBytes = ART_8BPP_MAX_TILES * 64;
    tileBytes = (tileBytes + 3) & ~3;

    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            u16 entry = tilemap[i * 32 + j + (32 * 32)];

            gBgTilemaps[2][i][j] = 0;
            gBgTilemaps[3][i][j] = (entry & ~0x3FF)
                | ((entry & 0x3FF) + ART_8BPP_TILE_BASE);
        }
    }

    SetTitleBg8bpp(TRUE);
    for (i = 0; i < 20; i++) {
        gBgTilemaps[0][i][0] = 0;
        gBgTilemaps[1][i][0] = 0;
    }
    ScheduleBgTilemapCopy(0);
    ScheduleBgTilemapCopy(1);
    ScheduleBgTilemapCopy(2);
    ScheduleBgTilemapCopy(3);
    CpuCopy((u32 *)(VRAM + 0x6000), buf + 0x1000, tileBytes);
    MemoryFree(buf);
}

void UnloadFullscreenArt(void)
{
    SetTitleBg8bpp(FALSE);
    ClearTitleBgMapsForGround();
    /* Keep BG2/BG3 hidden until ground SELECT_MAP rebuilds them. */
    SetBGOBJEnableFlags(0xC);
    RunFullscreenArtFrame();
    InitFontPalette();
    ShowWindows(NULL, TRUE, TRUE);
}
