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
#include "code_800C9CC.h"
#include "cpu.h"
#include "fullscreen_art.h"
#include "graphics_memory.h"
#include "input.h"
#include "m4a.h"
#include "memory.h"
#include "music_util.h"
#include "sky_story.h"
#include "sprite.h"
#include "structs/sprite_oam.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
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

/* ------------------------------------------------------------------------
 * The rest of EoS's opening: thirteen EoS scenes as fourteen GBA ones
 * (the logo scene shows one screen, then the other; src/data/sky_opening_scenes.h,
 * tools/make_sky_opening.py), played back as EoS showed them.
 *
 * Each scene has two BG layers (BG2 in front, BG3 behind), 4bpp with EoS's
 * own tiles and palettes, each a "world" (a version per change of content)
 * that streams into a 31x21-tile ring as the view moves; every frame gives
 * the view's position in each world, the OAM entries (EoS's sprites, piece
 * for piece), the palette set and each screen's fade. Scenes start when the
 * song reaches the tick EoS starts them at (EoS waits for the song's
 * signals), so they keep in time with the music.
 *
 * VRAM (gTitleBg8bpp's maps: BG2 at screen base 8, BG3 at 31):
 *   BG3: char base 1, ring tiles 64-767 (0x4800-0x9FFF)
 *   BG2: char base 2, ring tiles 256-959 (0xA000-0xF7FF)
 * The rings take the font and window-frame sheet (0x4F00-0x5FFF, tiles
 * 0x278-0x2FF of char base 0): ReloadFontSheet puts it back at the end.
 *
 * Nothing on screen is written while it is being drawn. A ring is 32x22
 * cells, one more each way than the 31x21 a view can show, so the cells
 * coming into view take slots that are off screen; a cell whose slot is on
 * screen (an animated tile changing in place, a jump of two tiles) is
 * queued and copied in the vertical blank with the tilemap that uses it.
 */
struct SkyOpFrame
{
    s16 pos[4];        /* BG2 x, y, BG3 x, y: world pixel of the view's top-left */
    u16 firstObj;
    u8 numObj;
    u8 ver[2];
    u8 bgPal, objPal;
    s8 fadeA, fadeB;   /* bottom / top screen: -16 (black) .. 16 (white) */
    u8 eva, evb;       /* semi-transparent OBJs, or BG2 when it blends */
    u8 flags;          /* bit 0: BG2 blends over what is behind it (eva / evb); bit 1 / 2: BG2 / BG3 hidden */
};

struct SkyOpObj
{
    s16 x, y;
    u16 tile;
    u16 attr;          /* shape 0-1, size 2-3, hflip 4, vflip 5, semi 6, priority 7-8, palette 9-12, bottom screen 13 */
};

struct SkyOpPalSet
{
    u16 cols[256];
    u16 engA;          /* bit p: palette p fades with the bottom screen */
    u16 pad;
};

struct SkyOpVersion
{
    u16 w, h;          /* in tiles */
    u8 flags, pad;     /* bit 0: wraps across, bit 1: wraps down */
    u32 mapOff, tilesOff;
};

struct SkyOpScene
{
    const u32 *blob;
    const struct SkyOpVersion *ver;
    u16 numFrames;
    s16 startTick;     /* the song's m4a clock to start at; -1: right after the scene before */
    u8 numVer[2];
    u16 pad;
    u32 framesOff, objsOff, bgSetsOff, objSetsOff, objTilesOff;
};

#include "data/sky_opening_scenes.h"

#define OP_RING_W 32
#define OP_RING_H 22
#define OP_VIEW_W 31        /* cells a 240x160 view can touch */
#define OP_VIEW_H 21
#define OP_WAIT_LIMIT 600   /* frames: if the song does not play, do not wait for it */
/* bgm0001 at 130 bpm: m4a's clock (24 a quarter) moves 130/150 a frame */
#define OP_FRAMES_PER_TICK_X256 (150 * 256 / 130)

EWRAM_DATA bool8 gSkyOpeningBg4bpp = FALSE;
EWRAM_DATA bool8 gSkyTitleFromWhite = FALSE;
/* What is on screen, for the regression suite: 1 the Shaymin scene, 2-15
 * the scenes after it (sOpScenes), SKY_OPENING_SCENE_TITLE the title, else 0. */
EWRAM_DATA u8 gSkyOpeningScene = 0;
EWRAM_DATA u16 gSkyOpeningFrame = 0;   /* the frame within the scene */

static const u16 sOpRingBase[2] = { 256, 64 };
#define OP_RING_SLOTS (OP_RING_W * OP_RING_H)
#define OP_HELD_BLANK 0xFFFF
#define OP_DEFER_MAX 400    /* tiles copied in one vertical blank at most */
#define OP_OBJ_MAX 128

struct OpDefer
{
    u32 *dst;
    const u32 *src;    /* NULL: a transparent tile */
};

/* The work memory, on the heap while the scenes play (EWRAM is nearly full). */
struct OpWork
{
    /* per ring slot, the tile it holds + 1 (0: unknown, OP_HELD_BLANK: transparent) */
    u16 held[2][OP_RING_SLOTS];
    /* tiles for slots that are on screen: copied in the vertical blank */
    struct OpDefer defer[OP_DEFER_MAX];
    s32 numDefer;
    /* per OBJ buffer half and OAM position, the tile data already there
     * (source tile + 1, then its place): unchanged sprites are not copied again */
    u16 objSrc[2][OP_OBJ_MAX];
    u16 objDst[2][OP_OBJ_MAX];
    u8 hide, hidden;   /* BG layers to hide (SetBGOBJEnableFlags) from the next frame / hidden now */
};
static EWRAM_DATA struct OpWork *sOp = NULL;

struct OpRing
{
    s16 cx, cy;
    s16 ver;           /* -1: nothing of this layer is on screen yet */
};

static s32 OpMod(s32 a, s32 n)
{
    a %= n;
    return a < 0 ? a + n : a;
}

static u8 *OpChar(s32 l)
{
    return (u8 *)VRAM + (l == 0 ? 0x8000 : 0x4000);
}

static inline void OpCopyTile(u32 *dst, const u32 *src)
{
    if (src != NULL) {
        dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
        dst[4] = src[4]; dst[5] = src[5]; dst[6] = src[6]; dst[7] = src[7];
    }
    else {
        dst[0] = 0; dst[1] = 0; dst[2] = 0; dst[3] = 0;
        dst[4] = 0; dst[5] = 0; dst[6] = 0; dst[7] = 0;
    }
}

/* In the vertical blank: the tiles whose slots were on screen. */
static void OpFlushDeferred(void)
{
    const struct OpDefer *d = sOp->defer;
    s32 n;

    for (n = sOp->numDefer; n > 0; n--, d++)
        OpCopyTile(d->dst, d->src);
    sOp->numDefer = 0;
}

/* RunFullscreenArtFrame, with the queued tiles copied first thing in the
 * vertical blank (before the tilemaps and the scroll registers). */
static void OpFrame(void)
{
    CopyWindowBgBuffer(NULL, COPY_WINDOW_BG_BUFFER_WIN0);
    nullsub_8(FALSE);
    sub_8005180();
    ToggleWindowBgBuffer();
    UpdateSoundEffectCounters();
    WaitForNextFrameAndAdvanceRNG();
    if (sOp != NULL) {
        OpFlushDeferred();
        if (sOp->hide != sOp->hidden) {
            sOp->hidden = sOp->hide;
            SetBGOBJEnableFlags(sOp->hidden);
        }
    }
    LoadBufferedInputs();
    CopySpritesToOam();
    sub_8005304();
    TransferBGPaletteBuffer();
    xxx_call_update_bg_vram();
    DoScheduledMemCopies();
    xxx_call_update_bg_sound_input();
    ResetSprites(FALSE);
}

/* Loads cells c0..c1-1 of ring row cy: tile data into the ring's slots,
 * tilemap entries (EoS's flips and palette) pointing at them. `shown` is
 * the view on screen now (NULL: none of this layer). */
static void OpLoadCells(const u8 *blob, const struct SkyOpVersion *v, s32 l, s32 cy, s32 c0, s32 c1, const struct OpRing *shown)
{
    u16 *tmRow = gBgTilemaps[l == 0 ? 2 : 3][cy & 31];
    u32 *chr = (u32 *)OpChar(l);
    const u32 *map = (const u32 *)(blob + v->mapOff);
    const u32 *tiles = (const u32 *)(blob + v->tilesOff);
    s32 slotRow = OpMod(cy, OP_RING_H) * OP_RING_W;
    u16 *heldRow = &sOp->held[l][slotRow];
    s32 y = (v->flags & 2) ? OpMod(cy, v->h) : cy;
    s32 x = (v->flags & 1) ? OpMod(c0, v->w) : c0;
    bool8 rowIn = y >= 0 && y < v->h;
    bool8 rowShown = shown != NULL && OpMod(cy - shown->cy, OP_RING_H) < OP_VIEW_H;
    s32 cx;

    slotRow += sOpRingBase[l];
    for (cx = c0; cx < c1; cx++) {
        u32 e = 0xFFFFFFFF;
        s32 col = cx & (OP_RING_W - 1);
        u32 id;

        if (rowIn && x >= 0 && x < v->w)
            e = map[y * v->w + x];
        id = e == 0xFFFFFFFF ? OP_HELD_BLANK : (e >> 16) + 1;
        /* the slot may hold this tile already (the layer's versions share
         * their tiles: an animation reloads only what changes) */
        if (heldRow[col] != id) {
            u32 *dst = chr + (slotRow + col) * 8;
            const u32 *src = e == 0xFFFFFFFF ? NULL : tiles + (e >> 16) * 8;

            heldRow[col] = id;
            if (rowShown && ((cx - shown->cx) & (OP_RING_W - 1)) < OP_VIEW_W && sOp->numDefer < OP_DEFER_MAX) {
                sOp->defer[sOp->numDefer].dst = dst;
                sOp->defer[sOp->numDefer].src = src;
                sOp->numDefer++;
            }
            else {
                OpCopyTile(dst, src);
            }
        }
        tmRow[col] = (slotRow + col) | (e == 0xFFFFFFFF ? 0 : (e & 0xFC00));
        if (++x == v->w && (v->flags & 1))
            x = 0;
    }
}

/* Streams the cells the view needs that the ring does not hold yet. */
static void OpUpdateLayer(const struct SkyOpScene *sc, s32 l, s32 ver, s32 x, s32 y, struct OpRing *r)
{
    const u8 *blob = (const u8 *)sc->blob;
    const struct SkyOpVersion *v = &sc->ver[(l == 1 ? sc->numVer[0] : 0) + ver];
    s32 nx = x >> 3, ny = y >> 3, cy;
    bool8 all = r->ver != ver || nx - r->cx >= OP_VIEW_W || r->cx - nx >= OP_VIEW_W
             || ny - r->cy >= OP_VIEW_H || r->cy - ny >= OP_VIEW_H;

    if (all || nx != r->cx || ny != r->cy) {
        const struct OpRing *shown = r->ver >= 0 ? r : NULL;

        for (cy = ny; cy < ny + OP_VIEW_H; cy++) {
            bool8 rowNew = all || cy < r->cy || cy >= r->cy + OP_VIEW_H;
            /* the columns that came into view (a whole row if the row did) */
            s32 c0 = nx, c1 = nx + OP_VIEW_W;

            if (!rowNew) {
                if (nx > r->cx)
                    c0 = r->cx + OP_VIEW_W;
                else
                    c1 = r->cx;
            }
            if (c0 < c1)
                OpLoadCells(blob, v, l, cy, c0, c1, shown);
        }
        r->cx = nx;
        r->cy = ny;
        r->ver = ver;
        ScheduleBgTilemapCopy(l == 0 ? 2 : 3);
    }
    if (l == 0)
        SetBG2RegOffsets(x & 0xFF, y & 0xFF);
    else
        SetBG3RegOffsets(x & 0xFF, y & 0xFF);
}

/* A scene without this layer: one transparent tile everywhere. */
static void OpClearLayer(s32 l)
{
    s32 i, j;

    OpCopyTile((u32 *)OpChar(l) + sOpRingBase[l] * 8, NULL);
    sOp->held[l][0] = OP_HELD_BLANK;
    for (i = 0; i < 32; i++)
        for (j = 0; j < 32; j++)
            gBgTilemaps[l == 0 ? 2 : 3][i][j] = sOpRingBase[l];
    ScheduleBgTilemapCopy(l == 0 ? 2 : 3);
}

/* level: -16 (black) .. 16 (white); dim: 16 .. 0 (the START fade on top) */
static void OpFadeRow(u16 *dst, const u16 *src, s32 level, u32 dim)
{
    s32 i;

    if (level == 0 && dim == 16) {
        for (i = 0; i < 16; i++)
            dst[i] = src[i];
        return;
    }
    for (i = 0; i < 16; i++) {
        u32 c = src[i];
        u32 r = c & 0x1F, g = (c >> 5) & 0x1F, b = (c >> 10) & 0x1F;

        if (level < 0) {
            u32 k = 16 + level;

            r = (r * k) >> 4;
            g = (g * k) >> 4;
            b = (b * k) >> 4;
        }
        else if (level > 0) {
            r += ((31 - r) * level) >> 4;
            g += ((31 - g) * level) >> 4;
            b += ((31 - b) * level) >> 4;
        }
        dst[i] = RGB2((r * dim) >> 4, (g * dim) >> 4, (b * dim) >> 4);
    }
}

/* base: 0 the BG palettes, 16 the OBJ ones (rows of the palette buffer) */
static void OpSetPalettes(const struct SkyOpPalSet *set, s32 base, s32 fadeA, s32 fadeB, s32 dim)
{
    s32 p;

    for (p = 0; p < 16; p++)
        OpFadeRow(SkyBGPaletteBufferRow(base + p), &set->cols[p * 16], (set->engA >> p) & 1 ? fadeA : fadeB, dim);
}

/* The frame's OBJs: OAM entries, and their tiles into the OBJ buffer half
 * not on screen (tiles 0-511 / 512-1007: the font's OBJ tiles follow). */
static void OpDrawObjs(const u8 *blob, const struct SkyOpScene *sc, const struct SkyOpFrame *fr, s32 half)
{
    const struct SkyOpObj *objs = (const struct SkyOpObj *)(blob + sc->objsOff);
    const u8 *gfx = blob + sc->objTilesOff;
    s32 first = half * OBJ_BUF_TILES, tile = first, k;
    s32 limit = first + (half ? OBJ_BUF_TILES - 16 : OBJ_BUF_TILES);
    u16 *src = sOp->objSrc[half], *dst = sOp->objDst[half];

    for (k = 0; k < fr->numObj && k < OP_OBJ_MAX; k++) {
        const struct SkyOpObj *o = &objs[fr->firstObj + k];
        s32 shape = o->attr & 3, size = (o->attr >> 2) & 3;
        s32 n = (sObjW[shape][size] / 8) * (sObjH[shape][size] / 8);
        SpriteOAM sprite;

        if (tile + n > limit)
            break;
        if (src[k] != o->tile + 1 || dst[k] != tile) {
            CpuCopy((u8 *)OBJ_VRAM0 + tile * 32, gfx + o->tile * 32, n * 32);
            src[k] = o->tile + 1;
            dst[k] = tile;
        }
        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, shape);
        SpriteSetSize(&sprite, size);
        SpriteSetMatrixNum(&sprite, ((o->attr >> 4) & 3) << 3);
        SpriteSetObjMode(&sprite, (o->attr >> 6) & 1);
        SpriteSetPalNum(&sprite, (o->attr >> 9) & 15);
        SpriteSetPriority(&sprite, (o->attr >> 7) & 3);
        SpriteSetX(&sprite, o->x & 0x1FF);
        SpriteSetY(&sprite, o->y & 0xFF);
        SpriteSetTileNum(&sprite, tile);
        /* one sort layer: the first one added is in front (as on the DS) */
        AddSprite(&sprite, 4, NULL, NULL);
        tile += n;
    }
    for (; k < OP_OBJ_MAX && src[k] != 0; k++)
        src[k] = 0;   /* (a later, longer list starts from other tiles) */
}

static bool8 OpSkipPressed(void)
{
    return (gRealInputs.pressed & (A_BUTTON | START_BUTTON)) != 0;
}

/* Waits (the screen as it is) until the song reaches `tick`. TRUE: skipped. */
static bool8 OpWaitTick(s32 tick)
{
    s32 n;

    for (n = 0; (s32)gMPlayInfo_BGM.clock < tick && n < OP_WAIT_LIMIT; n++) {
        OpFrame();
        if (OpSkipPressed())
            return TRUE;
    }
    return FALSE;
}

/* Plays the scenes. Returns TRUE when START (or A) skipped, after fading
 * out. The screen is left one colour (black, or the last scene's white);
 * OpEnd gives the VRAM back. */
static bool8 OpPlayScenes(void)
{
    s32 s, t, l, dim = 16, half = 0;
    u32 key, lastKey = 0, lastObjKey = 0, clock0;
    bool8 skip = FALSE;
    /* what is on screen (START fades that out) */
    const struct SkyOpScene *sc = NULL;
    const struct SkyOpFrame *fr = NULL;

    gSkyOpeningBg4bpp = TRUE;
    sOp = MemoryAlloc(sizeof(struct OpWork), MEMALLOC_GROUP_0);
    sOp->numDefer = 0;
    sOp->hide = sOp->hidden = 0;
    for (s = 0; s < SKY_OP_SCENE_COUNT && !skip; s++) {
        struct OpRing ring[2] = { { 0, 0, -1 }, { 0, 0, -1 } };
        const struct SkyOpScene *next = &sOpScenes[s];
        const u8 *blob = (const u8 *)next->blob;

        gSkyOpeningScene = s + 2;
        if (next->startTick >= 0 && OpWaitTick(next->startTick)) {
            skip = TRUE;
            break;
        }
        sc = next;
        CpuFill16(0, sOp->held, sizeof(sOp->held));
        CpuFill16(0, sOp->objSrc, sizeof(sOp->objSrc));
        for (l = 0; l < 2; l++)
            if (sc->numVer[l] == 0)
                OpClearLayer(l);
        clock0 = gMPlayInfo_BGM.clock;
        for (t = 0; t < sc->numFrames; ) {
            s32 nextT, due;

            fr = &((const struct SkyOpFrame *)(blob + sc->framesOff))[t];
            gSkyOpeningFrame = t;
            for (l = 0; l < 2; l++)
                if (sc->numVer[l] != 0)
                    OpUpdateLayer(sc, l, fr->ver[l], fr->pos[l * 2], fr->pos[l * 2 + 1], &ring[l]);
            /* palettes only when they change (a set or a fade level) */
            key = (fr->bgPal << 16) | ((u8)fr->fadeA << 8) | (u8)fr->fadeB;
            if (t == 0 || key != lastKey)
                OpSetPalettes(&((const struct SkyOpPalSet *)(blob + sc->bgSetsOff))[fr->bgPal], 0, fr->fadeA, fr->fadeB, 16);
            lastKey = key;
            key = (fr->objPal << 16) | ((u8)fr->fadeA << 8) | (u8)fr->fadeB;
            if (t == 0 || key != lastObjKey)
                OpSetPalettes(&((const struct SkyOpPalSet *)(blob + sc->objSetsOff))[fr->objPal], 16, fr->fadeA, fr->fadeB, 16);
            lastObjKey = key;
            /* (not t & 1: a dropped frame would draw into the half on screen) */
            half ^= 1;
            OpDrawObjs(blob, sc, fr, half);
            /* semi-transparent OBJs, and BG2 when EoS blends it (light, haze) */
            gBldCnt = (gBldCnt & ~(BLDCNT_TGT1_ALL | BLDCNT_EFFECT_MASK)) | BLDCNT_EFFECT_BLEND
                    | ((fr->flags & 1) ? BLDCNT_TGT1_BG2 | BLDCNT_TGT2_OBJ : 0)
                    | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_BD;
            gBldAlpha = BLDALPHA_BLEND(fr->eva, fr->evb);
            gUnknown_2026E4E = (fr->eva << 8) | fr->evb;
            sOp->hide = (fr->flags & 6) << 1;   /* BG2 / BG3 */
            OpFrame();
            if (OpSkipPressed()) {
                skip = TRUE;
                break;
            }
            /* Keep to the song: a frame that took longer than one GBA frame
             * (many tiles to load) drops the scene frames it overran. */
            nextT = t + 1;
            due = ((s32)(gMPlayInfo_BGM.clock - clock0) * OP_FRAMES_PER_TICK_X256) >> 8;
            if (due > nextT + 1 && due - nextT < 16)
                nextT = due - 1;   /* (the clock's ticks are coarser than frames) */
            t = nextT;
        }
    }
    if (skip) {
        /* START: fade what is on screen out, as EoS does, then the title */
        FadeOutBGM_(SKIP_FADE_LEN);
        for (t = 1; t <= SKIP_FADE_LEN; t++) {
            dim = 16 - t * 16 / SKIP_FADE_LEN;
            if (fr != NULL) {
                OpSetPalettes(&((const struct SkyOpPalSet *)((const u8 *)sc->blob + sc->bgSetsOff))[fr->bgPal], 0, fr->fadeA, fr->fadeB, dim);
                OpSetPalettes(&((const struct SkyOpPalSet *)((const u8 *)sc->blob + sc->objSetsOff))[fr->objPal], 16, fr->fadeA, fr->fadeB, dim);
                half ^= 1;
                OpDrawObjs((const u8 *)sc->blob, sc, fr, half);
            }
            OpFrame();
        }
    }
    return skip;
}

/* After the scenes, the screen all but one colour: empties the two layers, goes
 * back to the 8bpp set-up and restores what the rings overwrote: the font
 * and window-frame sheet (every window's frame is drawn from it). */
static void OpEnd(bool8 white)
{
    s32 i, j;

    /* exactly one colour (a scene's last fade step may be a shade off) */
    for (i = 0; i < 32; i++) {
        u16 *row = SkyBGPaletteBufferRow(i);

        for (j = 0; j < 16; j++)
            row[j] = white ? RGB_WHITE : RGB_BLACK;
    }
    for (i = 0; i < 32; i++) {
        for (j = 0; j < 32; j++) {
            gBgTilemaps[2][i][j] = 0;
            gBgTilemaps[3][i][j] = 0;
        }
    }
    ScheduleBgTilemapCopy(2);
    ScheduleBgTilemapCopy(3);
    sOp->numDefer = 0;
    sOp->hide = 0;
    OpFrame(); /* no sprites: clears the OAM */
    gSkyOpeningBg4bpp = FALSE;
    MemoryFree(sOp);
    sOp = NULL;
    ReloadFontSheet();
}

void SkyOpening_Play(void)
{
    u16 savedBldCnt = gBldCnt;
    u16 savedBldAlpha = gBldAlpha;
    s16 savedWinAlpha = gUnknown_2026E4E;
    s32 t, r, loaded, end, fadeStart, fadeLen;
    bool8 skipped = FALSE;

    gSkyTitleFromWhite = FALSE;
    gSkyOpeningScene = 1;
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

        if (!skipped && t >= 1 && (gRealInputs.pressed & (A_BUTTON | START_BUTTON))) {
            /* START: a 30-frame fade, then the title (the song fades too) */
            skipped = TRUE;
            if (t < fadeStart) {
                fadeStart = t;
                fadeLen = SKIP_FADE_LEN;
                end = t + SKIP_FADE_LEN;
            }
            FadeOutBGM_(SKIP_FADE_LEN);
        }

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

    /* The song plays on (EoS: no fade at the end of the Shaymin scene) into
     * the rest of the opening, then the title, which EoS fades in from
     * white on the song's last signal. */
    if (!skipped) {
        skipped = OpPlayScenes();
        if (!skipped && !OpWaitTick(SKY_OP_TITLE_TICK))
            gSkyTitleFromWhite = TRUE;
        else if (!skipped)
            FadeOutBGM_(SKIP_FADE_LEN);
        OpEnd(gSkyTitleFromWhite);
    }

    gBldCnt = savedBldCnt;
    gBldAlpha = savedBldAlpha;
    gUnknown_2026E4E = savedWinAlpha;
    SetBG2RegOffsets(0, 0);
    SetBG3RegOffsets(0, 0);
    RunFullscreenArtFrame(); /* no sprites: clears the OAM */
    UnloadFullscreenArt();
    gSkyOpeningScene = 0;
}

#endif /* SKY_STORY */
