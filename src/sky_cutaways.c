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

/* Connected CGs (tools/make_sky_cutaway_scrolls.py): the top-screen CG over
 * the map from its top edge down to the scene's first view (as EoS's two
 * screens), raw 8bpp tiles, 30 per row. */
#include "data/sky_scrolls.h"
static const u8 sScrollStormTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/storm.tiles");
static const u8 sScrollStormPal[] = INCBIN_U8("graphics/custom/sky_scrolls/storm.pal");
static const u8 sScrollBeachTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/beach.tiles");
static const u8 sScrollBeachPal[] = INCBIN_U8("graphics/custom/sky_scrolls/beach.pal");
static const u8 sScrollGuildTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/guild.tiles");
static const u8 sScrollGuildPal[] = INCBIN_U8("graphics/custom/sky_scrolls/guild.pal");

#define SCROLL_COLS 30
#define SCROLL_RING 21            /* rows visible at a sub-tile offset */
#define SCROLL_MAIN_SLOTS 608     /* 8bpp tiles 128.. (0x6000-0xF7FF) */

/* BG3 (CHARBASE 1, 0x4000) tile number for a ring position: the cutaway
 * area first, then 0x4800-0x4EFF (free in title-BG mode, below the font). */
static u16 ScrollSlot(s32 row, s32 col)
{
    s32 n = (row % SCROLL_RING) * SCROLL_COLS + col;
    return n < SCROLL_MAIN_SLOTS ? ART_8BPP_TILE_BASE + n : 32 + (n - SCROLL_MAIN_SLOTS);
}

static void ScrollLoadRow(const u8 *tiles, s32 row)
{
    s32 c;

    for (c = 0; c < SCROLL_COLS; c++) {
        u16 slot = ScrollSlot(row, c);
        CpuCopy((void *)(VRAM + 0x4000 + slot * 64), &tiles[(row * SCROLL_COLS + c) * 64], 64);
        gBgTilemaps[3][row % 32][c] = slot;
    }
    ScheduleBgTilemapCopy(3);
}

/* Fade in on the CG (or arrive on it from the cutaway already shown), hold,
 * then ease down until the screen shows exactly the map's first view. The
 * map is rebuilt behind one black frame; the script shows it at once. */
static void ScrollConnected(const u8 *tiles, const u8 *pal, s32 rows, s32 hold, bool8 fadeIn)
{
    s32 r, f, y, loaded;
    s32 dist = rows * 8 - 160;
    s32 frames = dist * 3 / 5;

    LoadFullscreenArtBlank();
    for (r = 0; r < SCROLL_RING; r++)
        ScrollLoadRow(tiles, r);
    loaded = SCROLL_RING - 1;
    SetBG3RegOffsets(0, 0);
    if (fadeIn) {
        for (f = 0; f <= FADE_STEPS; f++) {
            SetFullscreenArtBrightness((const RGB_Struct *)pal, f);
            RunFullscreenArtFrame();
        }
    }
    else {
        SetFullscreenArtBrightness((const RGB_Struct *)pal, FADE_STEPS);
        RunFullscreenArtFrame();
    }
    for (f = 0; f < hold; f++)
        RunFullscreenArtFrame();
    for (f = 1; f <= frames; f++) {
        /* smoothstep: dist * t^2 (3 - 2t), t in 1/256 */
        s32 t = (f << 8) / frames;
        y = (dist * ((t * t) >> 8) * (768 - 2 * t)) >> 16;
        if (y > dist)
            y = dist;
        while (loaded < (y + 159) / 8 && loaded < rows - 1)
            ScrollLoadRow(tiles, ++loaded);
        SetBG3RegOffsets(0, y);
        RunFullscreenArtFrame();
    }
    SetFullscreenArtBrightness((const RGB_Struct *)pal, 0);
    RunFullscreenArtFrame();
}

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

/* EoS boot: the Nintendo logo, then the ESRB online notice (A skips). */
static void ShowBootScreens(void)
{
    s32 n, i;

    for (n = SKY_TITLE_NINTENDO; n <= SKY_TITLE_ESRB; n++) {
        const SkyCutawayArt *art = &gSkyTitleArt[n];
        LoadFullscreenArt(art->at4px);
        Fade(art, TRUE);
        for (i = 0; i < 150; i++) {
            RunFullscreenArtFrame();
            if (i >= 20 && (gRealInputs.pressed & (A_BUTTON | START_BUTTON)))
                break;
        }
        Fade(art, FALSE);
        UnloadFullscreenArt();
    }
}

/* EoS title: logo over the sky, "Press START" blinking. START or A (or the
 * time running out, like Red's title) goes on to the main menu. */
static void ShowTitleScreen(s32 frames)
{
    const SkyCutawayArt *press = &gSkyTitleArt[SKY_TITLE_PRESS_START];
    const SkyCutawayArt *blank = &gSkyTitleArt[SKY_TITLE_BLANK];
    bool8 shown = TRUE;
    s32 i;

    LoadFullscreenArt(press->at4px);
    Fade(press, TRUE);
    for (i = 0; i < frames; i++) {
        if (i % 32 == 31) {
            shown = !shown;
            SwapArt(shown ? press : blank);
        }
        else
            RunFullscreenArtFrame();
        if (gRealInputs.pressed & (A_BUTTON | START_BUTTON))
            break;
    }
    Fade(shown ? press : blank, FALSE);
    UnloadFullscreenArt();
}

void SkyStory_ShowCutaway_Async(s32 id, s32 frames)
{
    s32 map = GetGroundMapID();
    u32 savedLayers = (REG_DISPCNT >> 8) & 0x1F;
    const SkyCutawayArt *first;
    s32 i;

    if (frames <= 0)
        frames = 120;
    if (id == SKY_CUTAWAY_BOOT_SCREENS || id == SKY_CUTAWAY_TITLE_SCREEN) {
        /* Nothing to go back to: leave BG2/BG3 hidden and the screen black. */
        if (id == SKY_CUTAWAY_BOOT_SCREENS)
            ShowBootScreens();
        else
            ShowTitleScreen(frames);
        SetBGOBJEnableFlags((~savedLayers & 0x1F) | 0xC);
        return;
    }
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
        /* EoS shows the cliff above the stormy sea: pan down to the sea. */
        ScrollConnected(sScrollStormTiles, sScrollStormPal, SKY_SCROLL_STORM_ROWS, 0, FALSE);
    }
    else if (id == SKY_CUTAWAY_SKY_DAY_SCROLL || id == SKY_CUTAWAY_GUILD_SKY_SCROLL) {
        if (id == SKY_CUTAWAY_SKY_DAY_SCROLL)
            ScrollConnected(sScrollBeachTiles, sScrollBeachPal, SKY_SCROLL_BEACH_ROWS, frames, TRUE);
        else
            ScrollConnected(sScrollGuildTiles, sScrollGuildPal, SKY_SCROLL_GUILD_ROWS, frames, TRUE);
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

    SetBG3RegOffsets(0, 0);
    UnloadFullscreenArt();
    if (map >= 0)
        GroundMap_Select(map);
    SetBGOBJEnableFlags(~savedLayers & 0x1F);
}

#endif /* SKY_STORY */
