#include "global.h"
#include "friend_area_intros.h"
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
#include "runtime.h"
#include "sprite.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "window_buffer.h"

/* Same VRAM layout as custom title backgrounds. */
#define INTRO_8BPP_TILE_BASE 128
#define INTRO_8BPP_MAX_TILES 600

static void FriendAreaIntro_RunFrame(void)
{
    CopyWindowBgBuffer(NULL, COPY_WINDOW_BG_BUFFER_WIN0);
    nullsub_8(FALSE);
    sub_8005180();
    ToggleWindowBgBuffer();
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

void ShowFriendAreaIntro_Async(u8 areaId)
{
    const u8 *srcData;
    const RGB_Struct *pal;
    u32 payloadLen;
    u8 *buf;
    u32 decompSize;
    u32 tileBytes;
    u16 *tilemap;
    s32 i, j;
    s32 frames;
    s32 brightness;

    if (!gRuntimeConfig.friend_area_intros)
        return;
    if (areaId == FRIEND_AREA_NONE || areaId >= FRIEND_AREA_COUNT)
        return;
    if (gFriendAreaIntroAssets[areaId].at4pn == NULL || gFriendAreaIntroAssets[areaId].pal == NULL)
        return;

    srcData = gFriendAreaIntroAssets[areaId].at4pn;
    pal = (const RGB_Struct *)gFriendAreaIntroAssets[areaId].pal;

    ResetSprites(TRUE);
    UpdateFadeInTile(0);
    InitFontPalette();
    sub_800CDA8(2);
    ShowWindows(NULL, TRUE, TRUE);
    SetBG2RegOffsets(0, 0);
    SetBG3RegOffsets(0, 0);
    SetBGOBJEnableFlags(0);

    payloadLen = srcData[5] | (srcData[6] << 8);
    buf = MemoryAlloc((payloadLen + 3) & ~3, MEMALLOC_GROUP_0);
    decompSize = DecompressAT(buf, 0, srcData);
    if (decompSize < 0x1000)
        decompSize = 0x1000;
    tilemap = (u16 *)buf;
    tileBytes = decompSize - 0x1000;
    if (tileBytes > INTRO_8BPP_MAX_TILES * 64)
        tileBytes = INTRO_8BPP_MAX_TILES * 64;
    tileBytes = (tileBytes + 3) & ~3;

    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            u16 entry = tilemap[i * 32 + j + (32 * 32)];

            gBgTilemaps[2][i][j] = 0;
            gBgTilemaps[3][i][j] = (entry & ~0x3FF)
                | ((entry & 0x3FF) + INTRO_8BPP_TILE_BASE);
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

    /* Quick fade-in; discard residual A from map confirm. */
    brightness = 0;
    while (brightness < 32) {
        brightness++;
        for (i = 0; i < 240; i++)
            SetBGPaletteBufferColorRGB(i, &pal[i], brightness, NULL);
        FriendAreaIntro_RunFrame();
    }

    frames = 0;
    while (frames < FRIEND_AREA_INTRO_FRAMES) {
        FriendAreaIntro_RunFrame();
        frames++;
        if (gRealInputs.pressed & A_BUTTON)
            break;
    }

    /* Fade out to black before tearing down 8bpp (avoids a white flash). */
    while (brightness > 0) {
        brightness--;
        for (i = 0; i < 240; i++)
            SetBGPaletteBufferColorRGB(i, &pal[i], brightness, NULL);
        FriendAreaIntro_RunFrame();
    }

    SetTitleBg8bpp(FALSE);
    ClearTitleBgMapsForGround();
    /* Keep BG2/BG3 hidden until ground SELECT_MAP rebuilds them. */
    SetBGOBJEnableFlags(0xC);
    FriendAreaIntro_RunFrame();
    InitFontPalette();
    ShowWindows(NULL, TRUE, TRUE);
}
