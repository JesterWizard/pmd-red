/*
 * Explorers of Sky demake: full-screen cutaways for EoS's second-screen art
 * (sky panoramas, the Relic Fragment close-up, the storm cliff with lightning,
 * the animated sunset sea). Scripts call SKY_CUTAWAY(id, frames), which is
 * SPECIAL_PROCESS 0x60 (src/ground_script.c). The ground map is rebuilt
 * afterwards, so a cutaway can sit in the middle of a scene.
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "sky_story.h"
#include "bg_control.h"
#include "bg_palette_buffer.h"
#include "cpu.h"
#include "decompress_at.h"
#include "fullscreen_art.h"
#include "ground_map.h"
#include "input.h"
#include "memory.h"
#include "structs/rgb.h"
#include "text_1.h"
#include "graphics_memory.h"

#define ART_8BPP_TILE_BASE 128
#define ART_8BPP_MAX_TILES 600
#define FADE_STEPS 31


/* Swap the picture without re-initialising windows/sprites (animation frames).
 * Tiles and tilemap go through the scheduled copies of one frame, so they
 * change together with the palette. */
static void SwapArt(const SkyCutawayArt *art)
{
    const u8 *at = art->at4px;
    u32 outLen = (at[4] == 'N') ? (at[5] | (at[6] << 8)) : (at[0x10] | (at[0x11] << 8));
    u8 *buf = MemoryAlloc((outLen + 3) & ~3, MEMALLOC_GROUP_0);
    u32 decompSize = DecompressAT(buf, 0, at);
    u32 tileBytes;
    u16 *tilemap = (u16 *)buf;
    s32 i, j;

    if (decompSize < 0x1000)
        decompSize = 0x1000;
    tileBytes = decompSize - 0x1000;
    if (tileBytes > ART_8BPP_MAX_TILES * 64)
        tileBytes = ART_8BPP_MAX_TILES * 64;
    tileBytes = (tileBytes + 3) & ~3;
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            u16 entry = tilemap[i * 32 + j + (32 * 32)];
            gBgTilemaps[3][i][j] = (entry & ~0x3FF) | ((entry & 0x3FF) + ART_8BPP_TILE_BASE);
        }
    }
    ScheduleMemCopy((u32 *)(VRAM + 0x6000), (const u32 *)(buf + 0x1000), tileBytes);
    ScheduleBgTilemapCopy(3);
    SetFullscreenArtBrightness((const RGB_Struct *)art->pal, 31);
    RunFullscreenArtFrame();
    MemoryFree(buf);
}

static void Fade(const SkyCutawayArt *art, bool8 in)
{
    s32 b, f;
    for (b = 0; b <= FADE_STEPS; b++) {
        SetFullscreenArtBrightness((const RGB_Struct *)art->pal, in ? b : FADE_STEPS - b);
        for (f = 0; f < 1; f++)
            RunFullscreenArtFrame();
    }
}

static void Hold(s32 frames)
{
    s32 f;
    for (f = 0; f < frames; f++)
        RunFullscreenArtFrame();
}

static void WhiteFlash(const SkyCutawayArt *art, s32 frames)
{
    s32 i;
    static const RGB_Struct sWhite = { 255, 255, 255 };
    for (i = 0; i < 240; i++)
        SetBGPaletteBufferColorRGB(i, &sWhite, 31, NULL);
    Hold(frames);
    SetFullscreenArtBrightness((const RGB_Struct *)art->pal, 31);
}

void SkyStory_ShowCutaway_Async(s32 id, s32 frames)
{
    s32 map = GetGroundMapID();
    u32 savedLayers = (REG_DISPCNT >> 8) & 0x1F;
    const SkyCutawayArt *first;
    s32 i;

    if (frames <= 0)
        frames = 120;
    if (id == SKY_CUTAWAY_STORM) {
        /* EoS m01a0102: the cliff in the storm, lit up by lightning twice. */
        first = &gSkyCutaways[SKY_CUTAWAY_STORM_CLIFF];
        LoadFullscreenArt(first->at4px);
        Fade(first, TRUE);
        Hold(frames / 2);
        for (i = 0; i < 2; i++) {
            WhiteFlash(first, 2);
            SwapArt(&gSkyCutaways[SKY_CUTAWAY_STORM_LIT]);
            Hold(4);
            WhiteFlash(&gSkyCutaways[SKY_CUTAWAY_STORM_LIT], 2);
            Hold(6);
            SwapArt(first);
            Hold(frames / 4);
        }
        Fade(first, FALSE);
    }
    else if (id == SKY_CUTAWAY_SUNSET_SEA_ANIM) {
        /* EoS m01a0205/0207: the sea glittering at sunset (8-frame loop). */
        first = &gSkyCutaways[SKY_CUTAWAY_SUNSET_SEA0];
        LoadFullscreenArt(first->at4px);
        Fade(first, TRUE);
        for (i = 0; i < frames / 8; i++) {
            SwapArt(&gSkyCutaways[SKY_CUTAWAY_SUNSET_SEA0 + (i % 8)]);
            Hold(7);
        }
        Fade(&gSkyCutaways[SKY_CUTAWAY_SUNSET_SEA0 + ((i - 1) % 8)], FALSE);
    }
    else {
        if (id < 0 || id >= SKY_CUTAWAY_COUNT)
            return;
        first = &gSkyCutaways[id];
        LoadFullscreenArt(first->at4px);
        Fade(first, TRUE);
        for (i = 0; i < frames; i++) {
            RunFullscreenArtFrame();
            if (i >= 30 && (gRealInputs.pressed & (A_BUTTON | B_BUTTON)))
                break;
        }
        Fade(first, FALSE);
    }

    UnloadFullscreenArt();
    if (map >= 0)
        GroundMap_Select(map);
    SetBGOBJEnableFlags(~savedLayers & 0x1F);
}

#endif /* SKY_STORY */
