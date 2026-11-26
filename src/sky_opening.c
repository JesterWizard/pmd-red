/*
 * Explorers of Sky demake: the opening's Shaymin scene, before the title.
 *
 * EoS boots into an opening movie (unionall.ssb DEMO_02). Its first scene,
 * SCRIPT/S13P02A/t02a0201.ssb, shows the sky with the sun and a lens flare on
 * the top screen, flashes it white, then pans the camera down the level
 * S13P02A while Shaymin (Sky Forme) flies in from the distance towards the
 * camera and up past it, trailing Gracidea petals, to "Pokémon Exploration
 * Team Theme". The graphics are EoS's own (tools/make_sky_opening.py): the
 * level as one tall 8bpp picture on BG3 (streamed a tile row at a time, like
 * the connected CG pans in src/sky_cutaways.c), and the three WAN objects as
 * OBJ sprites, piece for piece.
 *
 * The DS shows 256x384 at once (both screens); the GBA shows 240x160. The
 * camera starts on the top screen's sky (the sun and the flare), and after
 * the flash eases down onto the bottom screen's view, which it then follows
 * at EoS's speed (0.5 px a frame), showing that screen's middle 160 lines,
 * so Shaymin and the petals move over the ground exactly as in EoS.
 *
 * Timing, in frames from the start of the fade-in, measured in EoS (DeSmuME,
 * frame by frame, OBJ layer isolated):
 *     0- 16  fade in (EoS: screen_FadeIn 15); the flare (frame 0) is up
 *    34- 65  the top screen whites out and back (screen2_WhiteOut 15)
 *    74      the flare plays its sequence (SetAnimation 18) as the pan starts
 *    80-376  the camera moves down 148 px (MovePosition 0.5)
 *   215-313  Shaymin: WAN frames 1..99, one a frame (SetAnimation 17)
 *   290-375  the petals: frame 0 for 12 frames, then 1..74
 *   387-447  fade out (screen_FadeOut 60)
 * EoS flickers the flare against an empty frame every other frame (half
 * transparency); here it is a semi-transparent OBJ blended 8/8.
 * A or START skips (EoS: START): a 30-frame fade, then the title.
 *
 * VRAM: BG3 as the cutaway pans; OBJ tiles 0-511 / 512-1023 double-buffered
 * (the pieces of the frame being built go to the half not on screen).
 * Palettes: BG 0-239 the picture, OBJ 0-2 the flare, Shaymin, the petals.
 */
#include "global.h"

#ifdef SKY_STORY

#include "bg_control.h"
#include "bg_palette_buffer.h"
#include "cpu.h"
#include "fullscreen_art.h"
#include "input.h"
#include "music_util.h"
#include "sky_story.h"
#include "sprite.h"
#include "structs/sprite_oam.h"
#include "window_buffer.h"

struct SkyOpeningPiece
{
    s16 x, y;          /* from the object's origin */
    u8 shape, size;    /* GBA OBJ shape / size (the DS ones) */
    u8 flip;           /* bit 0 h, bit 1 v */
    u16 tile;          /* first 4bpp tile in the object's graphics */
};

struct SkyOpeningFrame
{
    u16 first;
    u8 count;
};

#include "data/sky_opening.h"

static const u8 sSkyTiles[] = INCBIN_U8("graphics/custom/sky_opening/sky.tiles");
static const u8 sSkyPal[] = INCBIN_U8("graphics/custom/sky_opening/sky.pal"); /* 240 RGBX */
static const u8 sFlareGfx[] = INCBIN_U8("graphics/custom/sky_opening/flare.4bpp");
static const u16 sFlarePal[] = INCBIN_U16("graphics/custom/sky_opening/flare.gbapal");
static const u8 sShayminGfx[] = INCBIN_U8("graphics/custom/sky_opening/shaymin.4bpp");
static const u16 sShayminPal[] = INCBIN_U16("graphics/custom/sky_opening/shaymin.gbapal");
static const u8 sPetalsGfx[] = INCBIN_U8("graphics/custom/sky_opening/petals.4bpp");
static const u16 sPetalsPal[] = INCBIN_U16("graphics/custom/sky_opening/petals.gbapal");

struct SkyOpeningObject
{
    const struct SkyOpeningPiece *pieces;
    const struct SkyOpeningFrame *frames;
    const u8 *gfx;
    const u16 *pal;
    s16 x, y;          /* origin in the level (EoS's placement, t02a0201.ssa) */
    u8 sortLayer;
    bool8 blend;
};

enum { OBJ_FLARE, OBJ_SHAYMIN, OBJ_PETALS, OBJ_COUNT };

/* Origins measured against EoS's frames (the flare on the top screen). */
static const struct SkyOpeningObject sObjects[OBJ_COUNT] = {
    [OBJ_FLARE]   = { sFlarePieces, sFlareFrames, sFlareGfx, sFlarePal, 180, 88, 1, TRUE },
    [OBJ_SHAYMIN] = { sShayminPieces, sShayminFrames, sShayminGfx, sShayminPal, 176, 324, 2, FALSE },
    [OBJ_PETALS]  = { sPetalsPieces, sPetalsFrames, sPetalsGfx, sPetalsPal, 180, 324, 3, FALSE },
};

#define CROP_X 56          /* the picture is level columns 56..295 */
#define T_FADE_IN 16
#define T_WHITE_START 34
#define T_WHITE_LEN 16
#define T_FLARE_SEQ 74
#define T_PAN 80
#define T_JOIN 200         /* the GBA camera reaches EoS's bottom screen */
#define T_PAN_END 376
#define T_SHAYMIN 215
#define T_PETALS 290
#define T_FADE_OUT 387
#define FADE_OUT_LEN 60
#define SKIP_FADE_LEN 30
#define BOTTOM_VIEW_Y 208  /* 192 (top screen) + 16: the bottom screen's middle 160 lines */

#define SCROLL_COLS 30
#define OBJ_BUF_TILES 512
#define FLARE_EVA 8
#define FLARE_EVB 8
#define BLDCNT_EFFECT_MASK (3 << 6)

static const u8 sObjW[3][4] = { { 8, 16, 32, 64 }, { 16, 32, 32, 64 }, { 8, 8, 16, 32 } };
static const u8 sObjH[3][4] = { { 8, 16, 32, 64 }, { 8, 8, 16, 32 }, { 16, 32, 32, 64 } };

/* EoS's camera, the top of the GBA view in level lines. */
static s32 CameraY(s32 t)
{
    s32 track, u, s;

    if (t < T_PAN)
        return 0;
    if (t > T_PAN_END)
        t = T_PAN_END;
    track = BOTTOM_VIEW_Y + (t - T_PAN) / 2;
    if (t >= T_JOIN)
        return track;
    /* smoothstep from the sky onto the bottom screen's track */
    u = ((t - T_PAN) << 8) / (T_JOIN - T_PAN);
    s = (((u * u) >> 8) * (768 - 2 * u)) >> 8;
    return (track * s) >> 8;
}

/* bright: 0 (black) .. 16; white: 0 .. 16 (white) */
static void SetColors(const u16 *src, s32 index, s32 n, s32 bright, s32 white)
{
    s32 i;

    for (i = 0; i < n; i++) {
        u16 c = src[i];
        s32 r = c & 0x1F, g = (c >> 5) & 0x1F, b = (c >> 10) & 0x1F;

        r = r * bright / 16;
        g = g * bright / 16;
        b = b * bright / 16;
        r += (31 - r) * white / 16;
        g += (31 - g) * white / 16;
        b += (31 - b) * white / 16;
        c = RGB2(r, g, b);
        SetBGPaletteBufferColor(index + i, &c);
    }
}

static EWRAM_DATA u16 sSkyPal15[240] = {0};

static void SetPalettes(s32 bright, s32 white)
{
    s32 i;

    SetColors(sSkyPal15, 0, 240, bright, white);
    for (i = 0; i < OBJ_COUNT; i++)
        SetColors(sObjects[i].pal, 256 + i * 16, 16, bright, white);
}

static s32 FrameFor(s32 obj, s32 t)
{
    s32 i;

    switch (obj) {
        case OBJ_FLARE:
            if (t < T_FLARE_SEQ)
                return 0;
            i = (t - T_FLARE_SEQ) / 2;
            return i < (s32)ARRAY_COUNT(sFlareSeq) ? sFlareSeq[i] : sFlareSeq[ARRAY_COUNT(sFlareSeq) - 1];
        case OBJ_SHAYMIN:
            i = t - T_SHAYMIN;
            return (i >= 0 && i < (s32)ARRAY_COUNT(sShayminSeq)) ? sShayminSeq[i] : -1;
        default:
            i = t - T_PETALS;
            return (i >= 0 && i < (s32)ARRAY_COUNT(sPetalsSeq)) ? sPetalsSeq[i] : -1;
    }
}

/* Adds one object's pieces (the first piece in front, as on the DS) and
 * copies their tiles to *tile, in the OBJ buffer not on screen. */
static void DrawObject(s32 obj, s32 frameId, s32 camY, s32 *tile)
{
    const struct SkyOpeningObject *o = &sObjects[obj];
    const struct SkyOpeningFrame *fr = &o->frames[frameId];
    s32 i;

    for (i = 0; i < fr->count; i++) {
        const struct SkyOpeningPiece *p = &o->pieces[fr->first + i];
        s32 w = sObjW[p->shape][p->size];
        s32 h = sObjH[p->shape][p->size];
        s32 x = o->x - CROP_X + p->x;
        s32 y = o->y - camY + p->y;
        s32 n = (w / 8) * (h / 8);
        SpriteOAM sprite;

        if (x >= 240 || x + w <= 0 || y >= 160 || y + h <= 0)
            continue;
        if ((*tile & (OBJ_BUF_TILES - 1)) + n > OBJ_BUF_TILES)
            break;
        CpuCopy((u8 *)OBJ_VRAM0 + *tile * 32, o->gfx + p->tile * 32, n * 32);
        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, p->shape);
        SpriteSetSize(&sprite, p->size);
        SpriteSetMatrixNum(&sprite, p->flip << 3);
        SpriteSetObjMode(&sprite, o->blend ? 1 : 0);
        SpriteSetPalNum(&sprite, obj);
        SpriteSetPriority(&sprite, 1);
        SpriteSetX(&sprite, x & 0x1FF);
        SpriteSetY(&sprite, y & 0xFF);
        SpriteSetTileNum(&sprite, *tile);
        AddSprite(&sprite, o->sortLayer, NULL, NULL);
        *tile += n;
    }
}

void SkyOpening_Play(void)
{
    u16 savedBldCnt = gBldCnt;
    u16 savedBldAlpha = gBldAlpha;
    s16 savedWinAlpha = gUnknown_2026E4E;
    s32 t, r, loaded, end, fadeStart, fadeLen;

    for (r = 0; r < 240; r++)
        sSkyPal15[r] = RGB2(sSkyPal[r * 4] >> 3, sSkyPal[r * 4 + 1] >> 3, sSkyPal[r * 4 + 2] >> 3);
    LoadFullscreenArtBlank();
    SetPalettes(0, 0);
    for (r = 0; r < 21; r++)
        SkyCutaway_LoadScrollRow(sSkyTiles, r);
    loaded = 20;
    SetBG3RegOffsets(0, 0);
    StartNewBGM_(MUS_SKY_EXPLORATION_TEAM_THEME);

    fadeStart = T_FADE_OUT;
    fadeLen = FADE_OUT_LEN;
    end = T_FADE_OUT + FADE_OUT_LEN;
    for (t = 0; t <= end; t++) {
        s32 camY = CameraY(t);
        s32 tile = (t & 1) * OBJ_BUF_TILES;
        s32 bright = 16, white = 0, obj;

        if (fadeStart == T_FADE_OUT && t >= 1 && t < T_FADE_OUT
            && (gRealInputs.pressed & (A_BUTTON | START_BUTTON))) {
            fadeStart = t;
            fadeLen = SKIP_FADE_LEN;
            end = t + SKIP_FADE_LEN;
            FadeOutBGM_(SKIP_FADE_LEN);
        }
        if (t == T_FADE_OUT && fadeStart == T_FADE_OUT)
            FadeOutBGM_(FADE_OUT_LEN);

        if (t < T_FADE_IN)
            bright = t;
        if (t >= fadeStart)
            bright = 16 - (t - fadeStart) * 16 / fadeLen;
        if (t >= T_WHITE_START && t < T_WHITE_START + 2 * T_WHITE_LEN) {
            s32 w = t - T_WHITE_START;
            white = w < T_WHITE_LEN ? w : 2 * T_WHITE_LEN - w;
        }
        if (bright < 16 || white > 0 || t == T_FADE_IN || t == T_WHITE_START + 2 * T_WHITE_LEN)
            SetPalettes(bright, white);

        while (loaded < (camY + 159) / 8 && loaded < SKY_OPENING_SKY_ROWS - 1)
            SkyCutaway_LoadScrollRow(sSkyTiles, ++loaded);
        SetBG3RegOffsets(0, camY);

        for (obj = 0; obj < OBJ_COUNT; obj++) {
            s32 f = FrameFor(obj, t);
            if (f >= 0)
                DrawObject(obj, f, camY, &tile);
        }
        /* The flare: semi-transparent over the picture. Every frame, as the
         * window code reloads the blend registers (see src/sky_bubbles.c). */
        gBldCnt = (gBldCnt & ~(BLDCNT_TGT1_ALL | BLDCNT_EFFECT_MASK)) | BLDCNT_EFFECT_BLEND
                | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_BD;
        gBldAlpha = BLDALPHA_BLEND(FLARE_EVA, FLARE_EVB);
        gUnknown_2026E4E = (FLARE_EVA << 8) | FLARE_EVB;
        RunFullscreenArtFrame();
    }

    gBldCnt = savedBldCnt;
    gBldAlpha = savedBldAlpha;
    gUnknown_2026E4E = savedWinAlpha;
    SetBG3RegOffsets(0, 0);
    RunFullscreenArtFrame(); /* no sprites: clears the OAM */
    UnloadFullscreenArt();
}

#endif /* SKY_STORY */
