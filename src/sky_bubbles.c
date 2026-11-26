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
 * m01a0102): 1 px teal streaks (graphics/custom/sky_rain/rain.png) falling
 * steeply over the cliff and the stormy sea. Like EoS, the rain is blended
 * over the picture: semi-transparent OBJs alpha-blended with BG2/BG3/backdrop
 * (gBldCnt second targets, RAIN_BLEND weights), restored when it stops.
 *
 * Scripts: SKY_BUBBLES(mode) (SPECIAL_PROCESS 0x61). 0 stops.
 * VRAM: OBJ tiles 0x300.. (shared with the thought bubbles, which never show
 * in a cutscene); palette: OBJ bank 14 (Red's second ornament palette slot).
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
#define RAIN_CELLS 3
/* rain weight 10/16 over 8/16 of the picture: dim over the cliff, bright
 * over the sky, as in EoS */
#define RAIN_BLEND BLDALPHA_BLEND(10, 8)
#define RAIN_BLEND_TARGETS (BLDCNT_TGT2_BG2 | BLDCNT_TGT2_BG3 | BLDCNT_TGT2_BD)

static const u8 sBubbleTiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubbles.4bpp");
/* EoS's ~22 px mouth bubble and a ~46 px drifting one (same palette) */
static const u8 sBubble32Tiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubble32.4bpp");
static const u8 sBubble64Tiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubble64.4bpp");
static const u16 sBubblePal[] = INCBIN_U16("graphics/custom/sky_bubbles/bubbles.gbapal");
static const u8 sRainTiles[] = INCBIN_U8("graphics/custom/sky_rain/rain.4bpp");
static const u16 sRainPal[] = INCBIN_U16("graphics/custom/sky_rain/rain.gbapal");

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
    /* falling: about 7 px down and 1.75 px right per frame */
    [SKY_BUBBLES_RAIN] = { 400, 480, 1700, 2000, 44, FALSE, FALSE, 0, { { 0 } } },
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

static void SpawnBubble(struct SkyBubble *b, bool8 anywhere)
{
    if (sBubbleMode == SKY_BUBBLES_RAIN) {
        SpawnBubbleAt(b, RandRange(-48, 240), anywhere ? RandRange(-32, 160) : RandRange(-48, -24), CELL_SMALL);
        b->cell = RandInt(RAIN_CELLS);
        return;
    }
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
        sBlendSaved = FALSE;
    }
    if (mode == SKY_BUBBLES_RAIN) {
        sSavedBldCnt = gBldCnt;
        sSavedBldAlpha = gBldAlpha;
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
        if (mode == SKY_BUBBLES_RAIN || sModes[mode].fillScreen)
            SpawnBubble(&sBubbles[i], TRUE);
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

static void DrawBubbles(void);

/* Bubbles use OBJ priority 2: behind the text boxes and portraits (BG0/BG1,
 * priorities 0/1), in front of the map (BG2/BG3, priorities 2/3). EoS shows
 * its text on the other screen. */
static void DrawBubbles(void)
{
    s32 i;
    bool8 rain = (sBubbleMode == SKY_BUBBLES_RAIN);

    if (rain) {
        CpuCopy((void *)(OBJ_VRAM0 + BUBBLE_TILE_NUM * 32), sRainTiles, RAIN_CELLS * 4 * 32);
        /* every frame: screen changes (cutaway <-> map) rewrite the blend */
        gBldCnt |= RAIN_BLEND_TARGETS;
        gBldAlpha = RAIN_BLEND;
    }
    else
    {
        CpuCopy((void *)(OBJ_VRAM0 + BUBBLE_TILE_NUM * 32), sBubbleTiles, BUBBLE_CELLS * 4 * 32);
        CpuCopy((void *)(OBJ_VRAM0 + (BUBBLE_TILE_NUM + MID_TILE_OFFSET) * 32), sBubble32Tiles, 16 * 32);
        CpuCopy((void *)(OBJ_VRAM0 + (BUBBLE_TILE_NUM + BIG_TILE_OFFSET) * 32), sBubble64Tiles, 64 * 32);
    }

    if (!rain)
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
        if (rain) {
            if ((b->y >> 8) > 160 || (b->x >> 8) > 240)
                SpawnBubble(b, FALSE);
        }
        /* non-rain bubbles are positioned by their centre */
        size = rain ? 8 : (b->cell == CELL_BIG ? 64 : b->cell == CELL_MID ? 32 : 16);
        if (!rain && ((b->y >> 8) < -size / 2 || (b->y >> 8) > 160 + size / 2
                      || (b->x >> 8) < -size / 2 || (b->x >> 8) > 240 + size / 2 + 16)) {
            b->alive = FALSE;   /* emitters bring new ones */
            continue;
        }

        /* gentle sway on the beach: triangle wave, +-2 px over 64 frames */
        sway = (b->phase & 63);
        sway = (rain || sBubbleMode != SKY_BUBBLES_BEACH) ? 0 : (sway < 32 ? sway : 63 - sway) / 8 - 2;
        sx = (b->x >> 8) + sway - (rain ? 0 : size / 2);
        sy = (b->y >> 8) - (rain ? 0 : size / 2);
        if (sy >= 160 || sy <= -size || sx >= 240 || sx <= -size)
            continue;

        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        if (rain) {
            SpriteSetShape(&sprite, 2); /* tall */
            SpriteSetSize(&sprite, 1);  /* 8x32 */
            SpriteSetObjMode(&sprite, 1); /* semi-transparent */
        }
        else {
            SpriteSetShape(&sprite, 0); /* square */
            SpriteSetSize(&sprite, size == 64 ? 3 : size == 32 ? 2 : 1);
        }
        SpriteSetPalNum(&sprite, BUBBLE_OBJ_PAL);
        SpriteSetPriority(&sprite, rain ? 1 : 2);
        SpriteSetX(&sprite, sx & 0x1FF);
        SpriteSetY(&sprite, sy & 0xFF);
        {
            s32 tile = (rain || b->cell < BUBBLE_CELLS) ? b->cell * 4
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
