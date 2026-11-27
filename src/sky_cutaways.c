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
#include "structs/sprite_oam.h"
#include "text_2.h"
#include "text_3.h"
#include "window_buffer.h"
#include "structs/str_ground_bg.h"

#define ART_8BPP_TILE_BASE 128
#define ART_8BPP_MAX_TILES TITLE_BG_8BPP_MAX_TILES
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
static EWRAM_DATA const struct SkyCover *sActiveCover = NULL;

#define SCROLL_COLS 30
#define SCROLL_RING 21            /* rows visible at a sub-tile offset */
#define SCROLL_MAIN_SLOTS TITLE_BG_8BPP_MAX_TILES /* 8bpp tiles 128.. (0x6000-0xF7FF) */

/* BG3 (CHARBASE 1, 0x4000) tile number for a ring position: the cutaway
 * area first, then 0x4800-0x4EFF (free in title-BG mode, below the font). */
static u16 ScrollSlot(s32 row, s32 col)
{
    s32 n = (row % SCROLL_RING) * SCROLL_COLS + col;
    return n < SCROLL_MAIN_SLOTS ? ART_8BPP_TILE_BASE + n : 32 + (n - SCROLL_MAIN_SLOTS);
}

void SkyCutaway_LoadScrollRow(const u8 *tiles, s32 row)
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
    /* keep the actors on screen while the map is rebuilt under the cover */
    SkyGroundSprite_DrawActors(cover->camX, cover->camY);
}

/* Ground frames (src/ground_main.c): take the cover away once the rebuilt map
 * shows the same view. */
static EWRAM_DATA bool8 sCoverEnding = FALSE;

void SkyCutaway_UpdateCover(void)
{
    if (sCoverEnding) {
        /* One frame after ShowWindows: its window tilemaps have replaced the
         * cover on BG0/BG1 now, so their usual priorities (in front of the
         * sprites) and offsets can come back. */
        sCoverEnding = FALSE;
        gSkyCoverActive = FALSE;
        gBG0Control.hofs = gBG1Control.hofs = 0;
        gBG0Control.vofs = gBG1Control.vofs = 0;
        /* the pre-pan mask had OBJ off (black screen); the actors stay shown */
        SetBGOBJEnableFlags(sCoverRestoreMask & ~0x10);
        return;
    }
    if (sCoverFrames <= 0)
        return;
    /* The ground loop does not draw the actors in view until its camera has
     * settled; keep them where the pan left them while the cover is up. */
    if (sActiveCover != NULL)
        SkyGroundSprite_DrawActors(sActiveCover->camX, sActiveCover->camY);
    if (--sCoverFrames > 0)
        return;
    ShowWindows(NULL, TRUE, TRUE);
    if (sActiveCover != NULL) /* ShowWindows dropped this frame's sprites */
        SkyGroundSprite_DrawActors(sActiveCover->camX, sActiveCover->camY);
    sActiveCover = NULL;
    sCoverEnding = TRUE;
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
        SkyCutaway_LoadScrollRow(tiles, r);
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
            SkyCutaway_LoadScrollRow(tiles, ++loaded);
        SetBG3RegOffsets(0, y);
        SkyGroundSprite_DrawActors(cover->camX, cover->camY - dist + y);
        RunFullscreenArtFrame();
    }
    SkyGroundSprite_DrawActors(cover->camX, cover->camY);
    sActiveCover = cover;
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

/*
 * The storm cliff (EoS m01a0102, level v01p02a on the top screen), frame for
 * frame as recorded from EoS (documentation/Features/SkyDemake.md, "The
 * storm cliff"). The picture's two halves (dark / lit by lightning) are in
 * VRAM together as EoS's own 4bpp tiles: the dark half on BG3, the lit half
 * on BG2 over it, so a flash is one tilemap copy (EoS moves the camera). The
 * bolt (object V01P02A1_181) is OBJs over the lit half. EoS fades the top
 * screen with the DS master brightness: the same sixteenths here.
 * Frame 0 is the first frame the cliff is visible.
 */
struct SkyCliffBoltObj
{
    s16 x, y;
    u16 tile;
};

#include "data/sky_storm_cliff.h"
static const u32 sCliffTiles[] = INCBIN_U32("graphics/custom/sky_storm_cliff/cliff.tiles");
static const u16 sCliffDarkMap[] = INCBIN_U16("graphics/custom/sky_storm_cliff/dark.tilemap");
static const u16 sCliffLitMap[] = INCBIN_U16("graphics/custom/sky_storm_cliff/lit.tilemap");
static const u16 sCliffPal[] = INCBIN_U16("graphics/custom/sky_storm_cliff/cliff.pal");
static const u32 sCliffBoltTiles[] = INCBIN_U32("graphics/custom/sky_storm_cliff/bolt.tiles");

#define CLIFF_BOLT_TILE_NUM 0x100 /* the ground emotes' tiles: saved and put back */
#define CLIFF_BOLT_OBJ_PAL 15
#define CLIFF_BOLT_PAL_BASE ((16 + CLIFF_BOLT_OBJ_PAL) * 16)
#define CLIFF_THUNDER_SE 461      /* EoS se_Play(6401) */
#define CLIFF_FADE_OUT 370        /* screen2_FadeOut(0, 60) */
#define CLIFF_FRAMES 431          /* the last one is black */
#define CLIFF_BOLT_FRAMES 34

/* The darkening (sixteenths) of the fade-in's frames, as EoS shows them. */
static const u8 sCliffFadeIn[] = {
    15, 14, 14, 13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 8, 8, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1,
};

/* A flash: the thunder, the lit picture for two frames, the dark one again,
 * then the lit picture with the bolt for CLIFF_BOLT_FRAMES. EoS's first
 * flash is slower than its second (it loads the sound and the object). */
static const s16 sCliffFlashes[][4] = {
    /* se, lit, dark, lit + bolt */
    { 149, 152, 154, 159 },
    { 242, 243, 245, 247 },
};

/* The bolt animation: (frames, bolt frame; 0: none) */
static const u8 sCliffBoltAnim[][2] = {
    { 4, 0 }, { 2, 1 }, { 1, 0 }, { 6, 2 }, { 1, 0 }, { 2, 3 }, { 2, 4 }, { 1, 0 },
    { 2, 3 }, { 2, 4 }, { 1, 0 }, { 2, 3 }, { 2, 4 }, { 6, 0 },
};

static s32 CliffDarkening(s32 frame)
{
    if (frame < (s32)ARRAY_COUNT(sCliffFadeIn))
        return sCliffFadeIn[frame];
    if (frame >= CLIFF_FADE_OUT) {
        s32 d = (frame - CLIFF_FADE_OUT) * 16 / 60;
        return d > 16 ? 16 : d;
    }
    return 0;
}

static bool8 CliffLit(s32 frame, s32 *boltFrame)
{
    s32 i, j;

    *boltFrame = 0;
    for (i = 0; i < (s32)ARRAY_COUNT(sCliffFlashes); i++) {
        const s16 *f = sCliffFlashes[i];

        if (frame >= f[1] && frame < f[2])
            return TRUE;
        if (frame >= f[3] && frame < f[3] + CLIFF_BOLT_FRAMES) {
            s32 t = frame - f[3];

            for (j = 0; t >= sCliffBoltAnim[j][0]; j++)
                t -= sCliffBoltAnim[j][0];
            *boltFrame = sCliffBoltAnim[j][1];
            return TRUE;
        }
    }
    return FALSE;
}

/* DS master brightness (darken): c - c * d / 16 on each 5-bit channel. */
static void SetCliffDarkening(s32 d)
{
    s32 i;

    for (i = 0; i < (s32)ARRAY_COUNT(sCliffPal); i++) {
        u16 c = sCliffPal[i];
        s32 r = c & 0x1F, g = (c >> 5) & 0x1F, b = (c >> 10) & 0x1F;

        c = (r - (r * d >> 4)) | ((g - (g * d >> 4)) << 5) | ((b - (b * d >> 4)) << 10);
        SetBGPaletteBufferColor(i, &c);
    }
    SkyBubbles_SetBrightness((16 - d) * FADE_STEPS / 16); /* the rain fades with it */
}

static void SetCliffLit(bool8 lit)
{
    s32 r, c;

    for (r = 0; r < SKY_CLIFF_ROWS; r++)
        for (c = 0; c < SKY_CLIFF_LIT_COLS; c++)
            gBgTilemaps[2][r][c] = lit ? sCliffLitMap[r * SKY_CLIFF_LIT_COLS + c]
                                       : SKY_CLIFF_BLANK + SKY_CLIFF_BG2_BASE;
    ScheduleBgTilemapCopy(2);
}

static void DrawCliffBolt(s32 boltFrame)
{
    const u8 *f = sCliffBoltFrames[boltFrame - 1];
    s32 i;

    for (i = 0; i < f[1]; i++) {
        const struct SkyCliffBoltObj *o = &sCliffBoltObjs[f[0] + i];
        SpriteOAM sprite;

        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 0); /* square */
        SpriteSetSize(&sprite, 1);  /* 16x16 */
        SpriteSetPalNum(&sprite, CLIFF_BOLT_OBJ_PAL);
        SpriteSetPriority(&sprite, 1);
        SpriteSetX(&sprite, o->x & 0x1FF);
        SpriteSetY(&sprite, o->y & 0xFF);
        SpriteSetTileNum(&sprite, CLIFF_BOLT_TILE_NUM + o->tile);
        /* added before the rain's OBJs (RunFullscreenArtFrame) */
        AddSprite(&sprite, 0, NULL, NULL);
    }
}

static void ShowStormCliff(void)
{
    void *boltVram = (void *)(OBJ_VRAM0 + CLIFF_BOLT_TILE_NUM * 32);
    u32 *savedTiles = MemoryAlloc(sizeof(sCliffBoltTiles), MEMALLOC_GROUP_0);
    u16 savedPal[16];
    bool8 lit = FALSE;
    s32 darkening = -1;
    s32 frame, i, r, c;

    /* As LoadFullscreenArtBlank, with every layer off until the maps, the
     * tiles and a black palette are in place (two black frames). */
    SetBGOBJEnableFlags(0x1F);
    ResetSprites(TRUE);
    UpdateFadeInTile(0);
    InitFontPalette();
    sub_800CDA8(2);
    ShowWindows(NULL, TRUE, TRUE);
    SetBG2RegOffsets(SKY_CLIFF_LIT_HOFS, 0);
    SetBG3RegOffsets(0, 0);
    CpuClear(gBgTilemaps[2], BG_SCREEN_SIZE);
    CpuClear(gBgTilemaps[3], BG_SCREEN_SIZE);
    SetTitleBg8bpp(TRUE);
    gSkyOpeningBg4bpp = TRUE; /* BG2 / BG3 4bpp, char bases 0x8000 / 0x4000 (src/reg_control.c) */
    for (r = 0; r < 20; r++) {
        gBgTilemaps[0][r][0] = 0;
        gBgTilemaps[1][r][0] = 0;
    }
    ScheduleBgTilemapCopy(0);
    ScheduleBgTilemapCopy(1);
    CpuCopy((void *)(VRAM + 0x6000), sCliffTiles, sizeof(sCliffTiles));
    for (r = 0; r < SKY_CLIFF_ROWS; r++)
        for (c = 0; c < SKY_CLIFF_DARK_COLS; c++)
            gBgTilemaps[3][r][c] = sCliffDarkMap[r * SKY_CLIFF_DARK_COLS + c];
    ScheduleBgTilemapCopy(3);
    SetCliffLit(FALSE);
    SetCliffDarkening(16);
    for (i = 0; i < 16; i++) {
        u16 col = sCliffBoltPal[i];

        savedPal[i] = GetBGPaletteBufferColor(CLIFF_BOLT_PAL_BASE + i);
        SetBGPaletteBufferColor(CLIFF_BOLT_PAL_BASE + i, &col);
    }
    RunFullscreenArtFrame();
    RunFullscreenArtFrame();
    SetBGOBJEnableFlags(0);
    if (savedTiles != NULL) {
        CpuCopy(savedTiles, boltVram, sizeof(sCliffBoltTiles));
        CpuCopy(boltVram, sCliffBoltTiles, sizeof(sCliffBoltTiles));
    }

    for (frame = 0; frame < CLIFF_FRAMES; frame++) {
        s32 boltFrame;
        bool8 nowLit = CliffLit(frame, &boltFrame);
        s32 d = CliffDarkening(frame);

        if (d != darkening) {
            darkening = d;
            SetCliffDarkening(d);
        }
        if (nowLit != lit) {
            lit = nowLit;
            SetCliffLit(lit);
        }
        for (i = 0; i < (s32)ARRAY_COUNT(sCliffFlashes); i++)
            if (frame == sCliffFlashes[i][0])
                PlaySoundWithVolume(CLIFF_THUNDER_SE, 256);
        if (boltFrame != 0 && savedTiles != NULL)
            DrawCliffBolt(boltFrame);
        RunFullscreenArtFrame();
    }

    for (i = 0; i < 16; i++)
        SetBGPaletteBufferColor(CLIFF_BOLT_PAL_BASE + i, &savedPal[i]);
    if (savedTiles != NULL) {
        CpuCopy(boltVram, savedTiles, sizeof(sCliffBoltTiles));
        MemoryFree(savedTiles);
    }
    /* black: hide the 4bpp layers before BG3 goes back to 8bpp */
    SetBGOBJEnableFlags(0xC);
    gSkyOpeningBg4bpp = FALSE;
    SetBG2RegOffsets(0, 0);
    /* The ground's BG0 / BG1 maps (screen bases 12, 13) are where the
     * cliff's first tiles were: blank until the ground redraws them. */
    CpuClear((void *)BG_SCREEN_ADDR(12), 2 * BG_SCREEN_SIZE);
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

/* "Press START" is OBJ tiles 0.. with OBJ palette 0 (the title card is BG3
 * art only), so the blink leaves the picture's palette and tiles alone. */
#define PRESS_START_TILE 0
#define PRESS_START_PAL 0

static void SetPressStartBrightness(s32 brightness)
{
    s32 i;

    for (i = 0; i < 16; i++) {
        u16 c = gSkyPressStartPal[i];
        RGB_Struct rgb = { (c & 0x1F) << 3, ((c >> 5) & 0x1F) << 3, ((c >> 10) & 0x1F) << 3, 0 };
        SetBGPaletteBufferColorRGB(256 + PRESS_START_PAL * 16 + i, &rgb, brightness, NULL);
    }
}

static void DrawPressStart(void)
{
    s32 i;

    for (i = 0; i < gSkyPressStartPos[2]; i++) {
        SpriteOAM sprite;

        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 1); /* horizontal */
        SpriteSetSize(&sprite, 3);  /* 64x32 */
        SpriteSetPalNum(&sprite, PRESS_START_PAL);
        SpriteSetPriority(&sprite, 0);
        SpriteSetX(&sprite, gSkyPressStartPos[0] + 64 * i);
        SpriteSetY(&sprite, gSkyPressStartPos[1]);
        SpriteSetTileNum(&sprite, PRESS_START_TILE + 32 * i);
        AddSprite(&sprite, 0, NULL, NULL);
    }
}

static void TitleFade(const SkyCutawayArt *art, bool8 in, bool8 shown)
{
    s32 b;

    for (b = 0; b <= FADE_STEPS; b++) {
        SetFullscreenArtBrightness((const RGB_Struct *)art->pal, in ? b : FADE_STEPS - b);
        SetPressStartBrightness(in ? b : FADE_STEPS - b);
        if (shown)
            DrawPressStart();
        RunFullscreenArtFrame();
    }
}

/* After the whole opening EoS fades its title in from white (t02a0501:
 * screen2_FadeIn after the white-out), "Press START" coming with it. */
#define TITLE_WHITE_FRAMES 15
static void TitleFadeFromWhite(const SkyCutawayArt *art)
{
    const RGB_Struct *pal = (const RGB_Struct *)art->pal;
    s32 f, i;

    for (f = 0; f <= TITLE_WHITE_FRAMES; f++) {
        s32 w = TITLE_WHITE_FRAMES - f;

        for (i = 0; i < 240; i++) {
            RGB_Struct c = pal[i];

            c.r += (255 - c.r) * w / TITLE_WHITE_FRAMES;
            c.g += (255 - c.g) * w / TITLE_WHITE_FRAMES;
            c.b += (255 - c.b) * w / TITLE_WHITE_FRAMES;
            SetBGPaletteBufferColorRGB(i, &c, FADE_STEPS, NULL);
        }
        SetPressStartBrightness(f * FADE_STEPS / TITLE_WHITE_FRAMES);
        DrawPressStart();
        RunFullscreenArtFrame();
    }
}

/* EoS title: logo over the sky, "Press START" blinking. START or A (or the
 * time running out, like Red's title) goes on to the main menu. */
static void ShowTitleScreen(s32 frames)
{
    const SkyCutawayArt *card = &gSkyTitleArt[SKY_TITLE_CARD];
    bool8 shown = TRUE;
    s32 i;

    LoadFullscreenArt(card->at4px);
    CpuCopy((u8 *)OBJ_VRAM0 + PRESS_START_TILE * 32, gSkyPressStartGfx, gSkyPressStartPos[2] * 32 * 32);
    gSkyOpeningScene = SKY_OPENING_SCENE_TITLE;
    if (gSkyTitleFromWhite)
        TitleFadeFromWhite(card);
    else
        TitleFade(card, TRUE, shown);
    gSkyTitleFromWhite = FALSE;
    for (i = 0; i < frames; i++) {
        if (i % 32 == 31)
            shown = !shown;
        if (shown)
            DrawPressStart();
        RunFullscreenArtFrame();
        if (gRealInputs.pressed & (A_BUTTON | START_BUTTON))
            break;
    }
    TitleFade(card, FALSE, shown);
    UnloadFullscreenArt();
    gSkyOpeningScene = 0;
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
    if (id == SKY_CUTAWAY_BOOT_SCREENS || id == SKY_CUTAWAY_TITLE_SCREEN || id == SKY_CUTAWAY_OPENING) {
        /* Nothing to go back to: leave BG2/BG3 hidden and the screen black. */
        if (id == SKY_CUTAWAY_BOOT_SCREENS)
            ShowBootScreens();
        else if (id == SKY_CUTAWAY_OPENING)
            SkyOpening_Play(); /* src/sky_opening.c */
        else
            ShowTitleScreen(frames);
        SetBGOBJEnableFlags((~savedLayers & 0x1F) | 0xC);
        return;
    }
    if (id == SKY_CUTAWAY_STORM) {
        /* EoS m01a0102: the cliff in the storm, lit up by lightning twice,
         * then it fades out; the script fades the stormy sea in (EoS shows
         * the cliff on the top screen over the sea on the bottom one). The
         * sequence has EoS's own length: `frames` is not used. */
        ShowStormCliff();
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
        /* OBJ stays on: the actors are shown over the cover */
        SetBGOBJEnableFlags((sCoverRestoreMask | 0xC) & ~0x10);
        return;
    }
    UnloadFullscreenArt();
    if (map >= 0)
        GroundMap_Select(map);
    SetBGOBJEnableFlags(~savedLayers & 0x1F);
}

#endif /* SKY_STORY */
