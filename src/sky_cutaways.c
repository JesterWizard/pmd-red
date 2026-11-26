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
#include "palette_util.h"
#include "palette_fade_util.h"
#include "code_800C9CC.h"
#include "music_util.h"
#include "random.h"
#include "sprite.h"
#include "text_2.h"
#include "text_3.h"
#include "window_buffer.h"
#include "structs/str_ground_bg.h"

#define ART_8BPP_TILE_BASE 128
#define ART_8BPP_MAX_TILES 600
#define FADE_STEPS 31

/* Connected CGs (tools/make_sky_cutaway_scrolls.py): the top-screen CG over
 * the map from its top edge down to the scene's first view (as EoS's two
 * screens), raw 8bpp tiles, 30 per row. */
#include "data/sky_scrolls.h"
static const u8 sScrollBeachTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/beach.tiles");
static const u8 sScrollBeachPal[] = INCBIN_U8("graphics/custom/sky_scrolls/beach.pal");
static const u8 sScrollGuildTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/guild.tiles");
static const u8 sScrollGuildPal[] = INCBIN_U8("graphics/custom/sky_scrolls/guild.pal");

/* Covers (tools/make_sky_cutaway_scrolls.py): each pan's last view as the
 * map's own tiles on the text layers, shown while the map is rebuilt. */
static const u8 sCoverBeachTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/beach_cover.tiles");
static const u16 sCoverBeachMap[] = INCBIN_U16("graphics/custom/sky_scrolls/beach_cover.tilemap");
static const u8 sCoverGuildTiles[] = INCBIN_U8("graphics/custom/sky_scrolls/guild_cover.tiles");
static const u16 sCoverGuildMap[] = INCBIN_U16("graphics/custom/sky_scrolls/guild_cover.tilemap");
extern const u8 gFileED0111A[];
extern const u8 gFileEG0101B[];

struct SkyCover
{
    const u8 *tiles;
    const u16 *tilemap;   /* front layer (BG0) then back layer (BG1), 32x32 each */
    const u8 *bpl;        /* the map's palettes (RT BPL) */
    u16 numTiles;
    u8 x, y;              /* camera sub-tile offset */
    s16 camX, camY;       /* the map's first view (top-left, map pixels) */
};

static const struct SkyCover sCoverBeach = { sCoverBeachTiles, sCoverBeachMap, gFileED0111A, SKY_SCROLL_BEACH_COVER_TILES, SKY_SCROLL_BEACH_COVER_X, SKY_SCROLL_BEACH_COVER_Y, SKY_SCROLL_BEACH_CAM_X, SKY_SCROLL_BEACH_CAM_Y };
static const struct SkyCover sCoverGuild = { sCoverGuildTiles, sCoverGuildMap, gFileEG0101B, SKY_SCROLL_GUILD_COVER_TILES, SKY_SCROLL_GUILD_COVER_X, SKY_SCROLL_GUILD_COVER_Y, SKY_SCROLL_GUILD_CAM_X, SKY_SCROLL_GUILD_CAM_Y };

#define COVER_FRAMES 6
static EWRAM_DATA s8 sCoverFrames = 0;
EWRAM_DATA bool8 gSkyCoverActive = FALSE;
static EWRAM_DATA u8 sCoverRestoreMask = 0;

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

/* The pan's last frame: swap the 8bpp picture for the cover in one vblank.
 * The cover is the same image built from the map's own tiles and palettes on
 * BG0/BG1 (the map's front / back layers; gSkyCoverActive lets BG1 show
 * outside text windows, src/cpu.c), which the ground map rebuild does not
 * touch; BG2/BG3 stay hidden
 * until SkyCutaway_UpdateCover removes the cover. */
static void ShowCover(const struct SkyCover *cover, s32 palBank)
{
    const u8 *bpl = cover->bpl;
    s32 numPals = bpl[0] | (bpl[1] << 8);
    s32 p, c, i, j;

    CpuCopy((void *)VRAM, cover->tiles, cover->numTiles * 32);
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            u16 e0 = cover->tilemap[i * 32 + j];
            u16 e1 = cover->tilemap[1024 + i * 32 + j];
            gBgTilemaps[0][i][j] = e0 ? e0 + (palBank << 12) : 0;
            gBgTilemaps[1][i][j] = e1 ? e1 + (palBank << 12) : 0;
        }
    }
    ScheduleBgTilemapCopy(0);
    ScheduleBgTilemapCopy(1);
    for (p = 0; p < numPals && palBank + p < 14; p++) {
        RGB_Struct black = { 0, 0, 0, 0 };
        SetBGPaletteBufferColorRGB((palBank + p) * 16, &black, 31, NULL);
        for (c = 0; c < 15; c++) {
            const u8 *rgb = &bpl[4 + (p * 15 + c) * 4];
            RGB_Struct col = { rgb[0], rgb[1], rgb[2], 0 };
            SetBGPaletteBufferColorRGB((palBank + p) * 16 + 1 + c, &col, 31, NULL);
        }
    }
    gSkyCoverActive = TRUE;
    gBG0Control.hofs = gBG1Control.hofs = cover->x;
    gBG0Control.vofs = gBG1Control.vofs = cover->y;
    SetTitleBg8bpp(FALSE);
    /* RunFullscreenArtFrame, with the layer switch inside the same vblank as
     * the palette and tilemap copies. */
    CopyWindowBgBuffer(NULL, COPY_WINDOW_BG_BUFFER_WIN0);
    nullsub_8(FALSE);
    sub_8005180();
    ToggleWindowBgBuffer();
    UpdateSoundEffectCounters();
    WaitForNextFrameAndAdvanceRNG();
    SetBGOBJEnableFlags(0xC);
    LoadBufferedInputs();
    CopySpritesToOam();
    sub_8005304();
    TransferBGPaletteBuffer();
    xxx_call_update_bg_vram();
    DoScheduledMemCopies();
    xxx_call_update_bg_sound_input();
    ResetSprites(FALSE);
}

/* Ground frames (src/ground_main.c): take the cover away once the rebuilt map
 * shows the same view. */
void SkyCutaway_UpdateCover(void)
{
    if (sCoverFrames <= 0)
        return;
    if (--sCoverFrames > 0)
        return;
    ShowWindows(NULL, TRUE, TRUE);
    gSkyCoverActive = FALSE;
    gBG0Control.hofs = gBG1Control.hofs = 0;
    gBG0Control.vofs = gBG1Control.vofs = 0;
    SetBGOBJEnableFlags(sCoverRestoreMask);
}

/* Fade in on the CG (or arrive on it from the cutaway already shown), hold,
 * then ease down until the screen shows exactly the map's first view. The
 * map is rebuilt behind one black frame; the script shows it at once. */
static void ScrollConnected(const u8 *tiles, const u8 *pal, s32 rows, s32 hold, bool8 fadeIn, const struct SkyCover *cover)
{
    s32 r, f, y, loaded;
    s32 dist = rows * 8 - 160;
    s32 frames = dist * 3 / 5;

    /* The scene's actors are on the map already (SELECT_ENTITIES before the
     * cutaway): unfade the ground palettes so their OBJ palettes are lit
     * (the art then takes BG palettes 0-239), and draw them over the pan. */
    sub_80999E8(0);
    sub_8099BE4(); /* apply it now: the ground loop is not running */
    RunPaletteFadeFunctions();
    LoadFullscreenArtBlank();
    /* BG0-BG2 are unused during the pan; their VRAM takes the cover. */
    SetBGOBJEnableFlags(0x7);
    for (r = 0; r < SCROLL_RING; r++)
        ScrollLoadRow(tiles, r);
    loaded = SCROLL_RING - 1;
    SetBG3RegOffsets(0, 0);
    if (fadeIn) {
        for (f = 0; f <= FADE_STEPS; f++) {
            SetFullscreenArtBrightness((const RGB_Struct *)pal, f);
            SkyGroundSprite_DrawActors(cover->camX, cover->camY - dist);
            RunFullscreenArtFrame();
        }
    }
    else {
        SetFullscreenArtBrightness((const RGB_Struct *)pal, FADE_STEPS);
        SkyGroundSprite_DrawActors(cover->camX, cover->camY - dist);
        RunFullscreenArtFrame();
    }
    for (f = 0; f < hold; f++) {
        SkyGroundSprite_DrawActors(cover->camX, cover->camY - dist);
        RunFullscreenArtFrame();
    }
    for (f = 1; f <= frames; f++) {
        /* smoothstep: dist * t^2 (3 - 2t), t in 1/256 */
        s32 t = (f << 8) / frames;
        y = (dist * ((t * t) >> 8) * (768 - 2 * t)) >> 16;
        if (y > dist)
            y = dist;
        while (loaded < (y + 159) / 8 && loaded < rows - 1)
            ScrollLoadRow(tiles, ++loaded);
        SetBG3RegOffsets(0, y);
        SkyGroundSprite_DrawActors(cover->camX, cover->camY - dist + y);
        RunFullscreenArtFrame();
    }
    SkyGroundSprite_DrawActors(cover->camX, cover->camY);
    ShowCover(cover, gGroundMapDungeon_3001B70 != NULL ? gGroundMapDungeon_3001B70->unk52C.unk0 : 0);
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
    bool8 connected = FALSE;

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
            PlaySoundWithVolume(461, 256); /* EoS se_Play(6401): thunder */
            WhiteFlash(first, 2);
            SwapArt(&gSkyCutaways[SKY_CUTAWAY_STORM_LIT]);
            Hold(4);
            WhiteFlash(&gSkyCutaways[SKY_CUTAWAY_STORM_LIT], 2);
            Hold(6);
            SwapArt(first);
            Hold(frames / 4);
        }
        /* EoS shows the cliff (top screen) over the stormy sea (bottom
         * screen): fade the cliff out; the script fades the sea in. */
        Fade(first, FALSE);
    }
    else if (id == SKY_CUTAWAY_SKY_DAY_SCROLL || id == SKY_CUTAWAY_GUILD_SKY_SCROLL) {
        if (id == SKY_CUTAWAY_SKY_DAY_SCROLL)
            ScrollConnected(sScrollBeachTiles, sScrollBeachPal, SKY_SCROLL_BEACH_ROWS, frames, TRUE, &sCoverBeach);
        else
            ScrollConnected(sScrollGuildTiles, sScrollGuildPal, SKY_SCROLL_GUILD_ROWS, frames, TRUE, &sCoverGuild);
        connected = TRUE;
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
    if (connected) {
        /* The cover is up (ShowCover): rebuild the map under it; the ground
         * loop removes it (SkyCutaway_UpdateCover). No black frames. */
        ClearTitleBgMapsForGround();
        InitFontPalette();
        if (map >= 0)
            GroundMap_Select(map);
        sub_80999E8(0);
        sCoverRestoreMask = ~savedLayers & 0x1F;
        sCoverFrames = COVER_FRAMES;
        SetBGOBJEnableFlags(sCoverRestoreMask | 0xC);
        return;
    }
    UnloadFullscreenArt();
    if (map >= 0)
        GroundMap_Select(map);
    SetBGOBJEnableFlags(~savedLayers & 0x1F);
}

#endif /* SKY_STORY */
