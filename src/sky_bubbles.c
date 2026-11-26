/*
 * Explorers of Sky demake: the Krabby bubbles.
 *
 * EoS blows bubbles over the dusk beach scenes with an engine effect
 * (supervision_SpecialActing 4/5 in m01a0202/0203, and over the sunset beach
 * and sea in m01a0204..0208). Here they are OBJ sprites: 14x14 and 8x8
 * bubbles in four tints (graphics/custom/sky_bubbles/bubbles.png, captured
 * from EoS's OBJ layer) drifting up the screen with a slight sway.
 *
 * The same system draws the rain over the storm (SKY_BUBBLES_RAIN, EoS
 * m01d0112 / m01a0102: EFFECT_VERY_HEAVY_RAIN, the same over the sea and the
 * cliff). EoS draws it on its 3D layer: ~146 streaks on the 256x192 screen,
 * 18-72 px long, 26.5 deg from vertical, 7 px down and 3.5 px right a frame,
 * added at half alpha over the picture. Here the screen is tiled with three
 * 64x64 sheets of EoS's own streaks (graphics/custom/sky_rain/rain_sheets.png,
 * tools/make_sky_storm_fx.py; cell (c, r) shows sheet (c + r) % 3, which
 * wraps seamlessly) that scroll at EoS's speed: 20 OBJs, semi-transparent,
 * blended 16/16 over 8/16 of BG2/BG3/backdrop (EoS: rain + picture / 2),
 * restored when it stops.
 *
 * Scripts: SKY_BUBBLES(mode) (SPECIAL_PROCESS 0x61). 0 stops.
 * VRAM: OBJ tiles 0x300.. (the rain: 0x300-0x3BF; shared with the thought
 * bubbles, which never show in a cutscene); palette: OBJ bank 14 (Red's
 * second ornament palette slot).
 * The tiles are re-uploaded every frame so ground AX traffic cannot clobber
 * them.
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "bg_control.h"
#include "bg_palette_buffer.h"
#include "cpu.h"
#include "palette_fade_util.h"
#include "random.h"
#include "sky_story.h"
#include "sprite.h"
#include "structs/rgb.h"
#include "structs/sprite_oam.h"
#include "text_1.h"
#include "window_buffer.h"

#define BUBBLE_TILE_NUM 0x300
#define BUBBLE_OBJ_PAL 14
#define BUBBLE_PAL_BASE ((16 + BUBBLE_OBJ_PAL) * 16)
#define BUBBLE_CELLS 6           /* 16x16 cells: 4 x 14 px, 2 x 8 px */
#define BUBBLE_BIG_CELLS 4
#define CELL_MID 6               /* 32x32 sprite, ~22 px bubble */
#define CELL_BIG 7               /* 64x64 sprite, ~46 px bubble */
#define CELL_MIXED 8
#define CELL_SMALL 9
#define MID_TILE_OFFSET (BUBBLE_CELLS * 4)
#define BIG_TILE_OFFSET (MID_TILE_OFFSET + 16)
#define BUBBLE_MAX 44
#define RAIN_SHEETS 3
#define RAIN_SHEET_TILES 64          /* 64x64 */
#define RAIN_PERIOD (64 * RAIN_SHEETS)
#define RAIN_VX 896                  /* 3.5 px a frame (8.8) */
#define RAIN_VY 1792                 /* 7 px a frame */
/* EoS: rain (as captured over black) + half the picture */
#define RAIN_EVA 16
#define RAIN_EVB 8
#define RAIN_BLEND BLDALPHA_BLEND(RAIN_EVA, RAIN_EVB)
#define BLDCNT_EFFECT_MASK (3 << 6)
#define RAIN_BLEND_TARGETS (BLDCNT_TGT2_BG0 | BLDCNT_TGT2_BG1 | BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_BD)

static const u8 sBubbleTiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubbles.4bpp");
/* EoS's ~22 px mouth bubble and a ~46 px drifting one (same palette) */
static const u8 sBubble32Tiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubble32.4bpp");
static const u8 sBubble64Tiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubble64.4bpp");
static const u16 sBubblePal[] = INCBIN_U16("graphics/custom/sky_bubbles/bubbles.gbapal");
static const u8 sRainTiles[] = INCBIN_U8("graphics/custom/sky_rain/rain_sheets.4bpp");
static const u16 sRainPal[] = INCBIN_U16("graphics/custom/sky_rain/rain_sheets.gbapal");

struct SkyBubble
{
    s32 x, y;   /* 24.8 */
    s16 vx, vy; /* 8.8 per frame */
    u8 cell;
    u8 phase;
    bool8 alive;
};

static EWRAM_DATA struct SkyBubble sBubbles[BUBBLE_MAX] = {0};
static EWRAM_INIT u8 sBubbleMode = 0;
static EWRAM_INIT u8 sBubbleCount = 0;
static EWRAM_DATA u8 sEmitterTimer[4] = {0};
static EWRAM_INIT bool8 sBlendSaved = FALSE;
static EWRAM_INIT u16 sSavedBldCnt = 0;
static EWRAM_INIT u16 sSavedBldAlpha = 0;
static EWRAM_INIT s16 sSavedWinAlpha = 0;
static EWRAM_INIT s32 sRainX = 0;   /* rain field offset, 24.8, mod RAIN_PERIOD */
static EWRAM_INIT s32 sRainY = 0;

/* Where and how EoS's bubbles move, measured frame by frame in EoS (DeSmuME,
 * OBJ layer only; the GBA camera shows the same map window, +-1 px):
 *   Krabby on the sand (v01p04b): from the two Krabby mouths, down-right,
 *     ~(+1.5, +2.0) px/frame; more drift in from a Krabby off the top left.
 *   Krabby at sunset (v01p05b): from three mouths, up-left, ~(-2.1, -1.2)
 *     px/frame; more come in from the right edge.
 *   the sunset beach (d01p11b): slow drift to the left (~0.35 px/frame),
 *     no rise; new ones come in from the right edge.
 * An emitter with h > 0 spawns anywhere in that vertical span. */
/* x, y: bubble centre; cell: CELL_MID, CELL_BIG, CELL_MIXED (mid or big),
 * CELL_SMALL (the 14 / 8 px ones) */
struct BubbleEmitter { s16 x, y, h; u8 interval; u8 cell; };
struct BubbleMode
{
    s16 vxMin, vxMax, vyMin, vyMax;
    u8 count;
    bool8 bigOnly;
    bool8 fillScreen;          /* start with bubbles already on screen */
    u8 numEmitters;
    struct BubbleEmitter emitters[4];
};

static const struct BubbleMode sModes[] = {
    [SKY_BUBBLES_KRABBY_SAND] = { 300, 520, 300, 620, 16, TRUE, FALSE, 3,
        { { 170, 75, 0, 16, CELL_MID }, { 85, 136, 0, 32, CELL_MID },
          { -14, 30, 70, 40, CELL_MIXED } } },
    [SKY_BUBBLES_KRABBY_SUNSET] = { -620, -400, -380, -240, 18, TRUE, FALSE, 4,
        { { 96, 143, 0, 31, CELL_MID }, { 176, 95, 0, 31, CELL_MID }, { 124, 62, 0, 62, CELL_MID },
          { 262, 60, 130, 22, CELL_MIXED } } },
    [SKY_BUBBLES_BEACH] = { -140, -60, -4, 4, 14, FALSE, TRUE, 1,
        { { 252, 0, 160, 26, CELL_SMALL } } },
    /* the rain is a scrolling field of sheets (DrawRain), no bubbles */
    [SKY_BUBBLES_RAIN] = { 0, 0, 0, 0, 0, FALSE, FALSE, 0, { { 0 } } },
};

static u8 RandomCell(u8 kind)
{
    switch (kind) {
        case CELL_MID:
        case CELL_BIG:
            return kind;
        case CELL_MIXED:
            return RandInt(3) == 0 ? CELL_BIG : CELL_MID;
        default:
            /* the beach: EoS's 5..20 px bubbles */
            if (RandInt(4) == 0)
                return CELL_MID;
            if (RandInt(3) != 0)
                return RandInt(BUBBLE_BIG_CELLS);
            return BUBBLE_BIG_CELLS + RandInt(BUBBLE_CELLS - BUBBLE_BIG_CELLS);
    }
}

static void SpawnBubbleAt(struct SkyBubble *b, s32 x, s32 y, u8 kind)
{
    const struct BubbleMode *m = &sModes[sBubbleMode];

    b->x = x << 8;
    b->y = y << 8;
    b->vx = RandRange(m->vxMin, m->vxMax + 1);
    b->vy = RandRange(m->vyMin, m->vyMax + 1);
    b->phase = RandInt(64);
    b->cell = RandomCell(kind);
    b->alive = TRUE;
}

static void SpawnBubble(struct SkyBubble *b)
{
    SpawnBubbleAt(b, RandRange(0, 240), RandRange(0, 160), CELL_SMALL);
}

static void RunEmitters(void)
{
    const struct BubbleMode *m = &sModes[sBubbleMode];
    s32 e, i;

    for (e = 0; e < m->numEmitters; e++) {
        const struct BubbleEmitter *em = &m->emitters[e];

        if (sEmitterTimer[e] != 0) {
            sEmitterTimer[e]--;
            continue;
        }
        sEmitterTimer[e] = em->interval - 4 + RandInt(9);
        for (i = 0; i < sBubbleCount; i++) {
            if (!sBubbles[i].alive) {
                SpawnBubbleAt(&sBubbles[i], em->x, em->y + (em->h ? RandInt(em->h) : 0), em->cell);
                break;
            }
        }
    }
}

static void LoadBubblePalette(bool8 fade, s32 brightness)
{
    s32 i;

    const u16 *pal = sBubbleMode == SKY_BUBBLES_RAIN ? sRainPal : sBubblePal;

    for (i = 0; i < 16; i++) {
        u16 c = pal[i];
        RGB_Array rgb = { .c = { (c & 0x1F) << 3, ((c >> 5) & 0x1F) << 3, ((c >> 10) & 0x1F) << 3, 0 } };

        if (fade) {
            sub_8003810(BUBBLE_PAL_BASE + i, rgb);
        }
        else {
            RGB_Struct s = { rgb.c[0], rgb.c[1], rgb.c[2], 0 };
            SetBGPaletteBufferColorRGB(BUBBLE_PAL_BASE + i, &s, brightness, NULL);
        }
    }
}

void SkyBubbles_Start(s32 mode)
{
    s32 i;

    if (sBlendSaved) {
        gBldCnt = sSavedBldCnt;
        gBldAlpha = sSavedBldAlpha;
        gUnknown_2026E4E = sSavedWinAlpha;
        sBlendSaved = FALSE;
    }
    if (mode == SKY_BUBBLES_RAIN) {
        sSavedBldCnt = gBldCnt;
        sSavedBldAlpha = gBldAlpha;
        sSavedWinAlpha = gUnknown_2026E4E;
        sBlendSaved = TRUE;
    }

    if (mode <= 0 || mode >= (s32)ARRAY_COUNT(sModes)) {
        sBubbleMode = 0;
        sBubbleCount = 0;
        return;
    }
    sBubbleMode = mode;
    sBubbleCount = sModes[mode].count;
    for (i = 0; i < 4; i++)
        sEmitterTimer[i] = i * 5;
    for (i = 0; i < sBubbleCount; i++) {
        sBubbles[i].alive = FALSE;
        if (sModes[mode].fillScreen)
            SpawnBubble(&sBubbles[i]);
    }
    LoadBubblePalette(TRUE, 31);
}

bool8 SkyBubbles_Active(void)
{
    return sBubbleMode != 0;
}

/* Cutaways set the BG palette with an explicit brightness; follow it. */
void SkyBubbles_SetBrightness(s32 brightness)
{
    if (sBubbleMode != 0)
        LoadBubblePalette(FALSE, brightness);
}

/* The rain: the screen tiled with the three sheets, scrolling down-right.
 * OBJ priority 1, over the cutaways' art too. */
static void DrawRain(void)
{
    s32 c, r, ox, oy;

    CpuFastCopy(sRainTiles, (void *)(OBJ_VRAM0 + BUBBLE_TILE_NUM * 32), sizeof(sRainTiles));
    /* Every frame: screen changes (cutaway <-> map) rewrite the blend. Only
     * the semi-transparent OBJs blend (no BG is a first target, or the waves
     * would blend into the sky), and ToggleWindowBgBuffer reloads BLDALPHA
     * from gUnknown_2026E4E every frame, so the weights go there too. */
    gBldCnt = (gBldCnt & ~(BLDCNT_TGT1_ALL | BLDCNT_EFFECT_MASK)) | BLDCNT_EFFECT_BLEND | RAIN_BLEND_TARGETS;
    gBldAlpha = RAIN_BLEND;
    gUnknown_2026E4E = (RAIN_EVA << 8) | RAIN_EVB;

    sRainX = (sRainX + RAIN_VX) % (RAIN_PERIOD << 8);
    sRainY = (sRainY + RAIN_VY) % (RAIN_PERIOD << 8);
    ox = sRainX >> 8;
    oy = sRainY >> 8;
    for (c = 0; c < RAIN_PERIOD / 64 + 5; c++) {
        s32 x = 64 * c + ox - RAIN_PERIOD;

        if (x <= -64 || x >= 240)
            continue;
        for (r = 0; r < RAIN_PERIOD / 64 + 4; r++) {
            s32 y = 64 * r + oy - RAIN_PERIOD;
            SpriteOAM sprite;

            if (y <= -64 || y >= 160)
                continue;
            sprite.attrib1 = 0;
            sprite.attrib2 = 0;
            sprite.attrib3 = 0;
            sprite.unk6 = 0;
            SpriteSetShape(&sprite, 0);   /* square */
            SpriteSetSize(&sprite, 3);    /* 64x64 */
            SpriteSetObjMode(&sprite, 1); /* semi-transparent */
            SpriteSetPalNum(&sprite, BUBBLE_OBJ_PAL);
            SpriteSetPriority(&sprite, 1);
            SpriteSetX(&sprite, x & 0x1FF);
            SpriteSetY(&sprite, y & 0xFF);
            SpriteSetTileNum(&sprite, BUBBLE_TILE_NUM + ((c + r) % RAIN_SHEETS) * RAIN_SHEET_TILES);
            AddSprite(&sprite, 0, NULL, NULL);
        }
    }
}

/* Bubbles use OBJ priority 2: behind the text boxes and portraits (BG0/BG1,
 * priorities 0/1), in front of the map (BG2/BG3, priorities 2/3). EoS shows
 * its text on the other screen. */
static void DrawBubbles(void)
{
    s32 i;

    if (sBubbleMode == SKY_BUBBLES_RAIN) {
        DrawRain();
        return;
    }
    CpuCopy((void *)(OBJ_VRAM0 + BUBBLE_TILE_NUM * 32), sBubbleTiles, BUBBLE_CELLS * 4 * 32);
    CpuCopy((void *)(OBJ_VRAM0 + (BUBBLE_TILE_NUM + MID_TILE_OFFSET) * 32), sBubble32Tiles, 16 * 32);
    CpuCopy((void *)(OBJ_VRAM0 + (BUBBLE_TILE_NUM + BIG_TILE_OFFSET) * 32), sBubble64Tiles, 64 * 32);

    RunEmitters();
    for (i = 0; i < sBubbleCount; i++) {
        struct SkyBubble *b = &sBubbles[i];
        SpriteOAM sprite;
        s32 sway, sx, sy, size;

        if (!b->alive)
            continue;
        b->x += b->vx;
        b->y += b->vy;
        b->phase++;
        /* bubbles are positioned by their centre */
        size = b->cell == CELL_BIG ? 64 : b->cell == CELL_MID ? 32 : 16;
        if ((b->y >> 8) < -size / 2 || (b->y >> 8) > 160 + size / 2
            || (b->x >> 8) < -size / 2 || (b->x >> 8) > 240 + size / 2 + 16) {
            b->alive = FALSE;   /* emitters bring new ones */
            continue;
        }

        /* gentle sway on the beach: triangle wave, +-2 px over 64 frames */
        sway = (b->phase & 63);
        sway = (sBubbleMode != SKY_BUBBLES_BEACH) ? 0 : (sway < 32 ? sway : 63 - sway) / 8 - 2;
        sx = (b->x >> 8) + sway - size / 2;
        sy = (b->y >> 8) - size / 2;
        if (sy >= 160 || sy <= -size || sx >= 240 || sx <= -size)
            continue;

        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 0); /* square */
        SpriteSetSize(&sprite, size == 64 ? 3 : size == 32 ? 2 : 1);
        SpriteSetPalNum(&sprite, BUBBLE_OBJ_PAL);
        SpriteSetPriority(&sprite, 2);
        SpriteSetX(&sprite, sx & 0x1FF);
        SpriteSetY(&sprite, sy & 0xFF);
        {
            s32 tile = b->cell < BUBBLE_CELLS ? b->cell * 4
                     : (b->cell == CELL_BIG ? BIG_TILE_OFFSET : MID_TILE_OFFSET);
            SpriteSetTileNum(&sprite, BUBBLE_TILE_NUM + tile);
        }
        AddSprite(&sprite, 0, NULL, NULL);
    }
}

/* Ground frames: re-assert the palette through the fade system every frame
 * (cutaways and map rebuilds overwrite OBJ bank 14). */
void SkyBubbles_Draw(void)
{
    if (sBubbleMode == 0)
        return;
    LoadBubblePalette(TRUE, 31);
    DrawBubbles();
}

/* Cutaway frames: the palette follows SkyBubbles_SetBrightness. */
void SkyBubbles_DrawCutaway(void)
{
    if (sBubbleMode == 0)
        return;
    DrawBubbles();
}

#endif /* SKY_STORY */
