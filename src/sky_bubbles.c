/*
 * Explorers of Sky demake: the Krabby bubbles.
 *
 * EoS blows bubbles over the dusk beach scenes with an engine effect
 * (supervision_SpecialActing 4/5 in m01a0202/0203, and over the sunset beach
 * and sea in m01a0204..0208). Here they are OBJ sprites: 14x14 and 8x8
 * bubbles in four tints (graphics/custom/sky_bubbles/bubbles.png, captured
 * from EoS's OBJ layer) drifting up the screen with a slight sway.
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
#define BUBBLE_CELLS 6
#define BUBBLE_BIG_CELLS 4
#define BUBBLE_MAX 14

static const u8 sBubbleTiles[] = INCBIN_U8("graphics/custom/sky_bubbles/bubbles.4bpp");
static const u16 sBubblePal[] = INCBIN_U16("graphics/custom/sky_bubbles/bubbles.gbapal");

struct SkyBubble
{
    s32 x, y;   /* 24.8 */
    s16 vx, vy; /* 8.8 per frame */
    u8 cell;
    u8 phase;
};

static EWRAM_DATA struct SkyBubble sBubbles[BUBBLE_MAX] = {0};
static EWRAM_INIT u8 sBubbleMode = 0;
static EWRAM_INIT u8 sBubbleCount = 0;

/* Drift per mode: EoS's {SpecialActing 4: Krabby on the sand, 5: Krabby at
 * sunset}, then the sunset beach / sea. */
static const struct { s16 vxMin, vxMax, vyMin, vyMax; u8 count; } sModes[] = {
    [SKY_BUBBLES_KRABBY_SAND]   = { -70, -20, -150, -70, 14 },
    [SKY_BUBBLES_KRABBY_SUNSET] = { -60, -10, -110, -50, 12 },
    [SKY_BUBBLES_BEACH]         = { -30,  30,  -70, -30, 10 },
};

static void SpawnBubble(struct SkyBubble *b, bool8 anywhere)
{
    s32 m = sBubbleMode;

    b->x = RandRange(-8, 240) << 8;
    b->y = (anywhere ? RandRange(0, 176) : RandRange(160, 184)) << 8;
    b->vx = RandRange(sModes[m].vxMin, sModes[m].vxMax + 1);
    b->vy = RandRange(sModes[m].vyMin, sModes[m].vyMax + 1);
    b->cell = (RandInt(3) == 0) ? BUBBLE_BIG_CELLS + RandInt(BUBBLE_CELLS - BUBBLE_BIG_CELLS) : RandInt(BUBBLE_BIG_CELLS);
    b->phase = RandInt(64);
}

static void LoadBubblePalette(bool8 fade, s32 brightness)
{
    s32 i;

    for (i = 0; i < 16; i++) {
        u16 c = sBubblePal[i];
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

    if (mode <= 0 || mode >= (s32)ARRAY_COUNT(sModes)) {
        sBubbleMode = 0;
        sBubbleCount = 0;
        return;
    }
    sBubbleMode = mode;
    sBubbleCount = sModes[mode].count;
    for (i = 0; i < sBubbleCount; i++)
        SpawnBubble(&sBubbles[i], TRUE);
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

/* EoS shows the text box and portraits on the other screen: hide bubbles
 * that would cover an open window (frame included). */
static bool8 OverWindow(s32 sx, s32 sy)
{
    s32 i;

    for (i = 0; i < MAX_WINDOWS; i++) {
        const Window *w = &gWindows[i];
        s32 x0, y0, x1, y1;

        if (w->width <= 0 || w->height <= 0)
            continue;
        x0 = (w->x - 1) * 8;
        y0 = (w->y - 1) * 8;
        x1 = (w->x + w->width + 1) * 8;
        y1 = (w->y + w->height + 1) * 8;
        if (sx + 16 > x0 && sx < x1 && sy + 16 > y0 && sy < y1)
            return TRUE;
    }
    return FALSE;
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

static void DrawBubbles(void)
{
    s32 i;

    CpuCopy((void *)(OBJ_VRAM0 + BUBBLE_TILE_NUM * 32), sBubbleTiles, BUBBLE_CELLS * 4 * 32);

    for (i = 0; i < sBubbleCount; i++) {
        struct SkyBubble *b = &sBubbles[i];
        SpriteOAM sprite;
        s32 sway, sx, sy;

        b->x += b->vx;
        b->y += b->vy;
        b->phase++;
        if ((b->y >> 8) < -16 || (b->x >> 8) < -16 || (b->x >> 8) > 240)
            SpawnBubble(b, FALSE);

        /* gentle sway: triangle wave, +-2 px over 64 frames */
        sway = (b->phase & 63);
        sway = (sway < 32 ? sway : 63 - sway) / 8 - 2;
        sx = (b->x >> 8) + sway;
        sy = b->y >> 8;
        if (sy > 160 || OverWindow(sx, sy))
            continue;

        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 0); /* square */
        SpriteSetSize(&sprite, 1);  /* 16x16 */
        SpriteSetPalNum(&sprite, BUBBLE_OBJ_PAL);
        SpriteSetPriority(&sprite, 1);
        SpriteSetX(&sprite, sx & 0x1FF);
        SpriteSetY(&sprite, sy & 0xFF);
        SpriteSetTileNum(&sprite, BUBBLE_TILE_NUM + b->cell * 4);
        AddSprite(&sprite, 0, NULL, NULL);
    }
}

#endif /* SKY_STORY */
