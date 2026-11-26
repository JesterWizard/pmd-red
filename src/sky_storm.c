/*
 * Explorers of Sky demake: the lightning over the stormy sea (EoS m01d0112,
 * level v01p07b).
 *
 * EoS's cloud object (GROUND/v01p07b1.wan) plays its animation 1 once,
 * 60 frames after the scene has faded in (SetAnimation(18)): the clouds light
 * up yellow from below (frame 4), go dark, flicker again (frames 1-3, a spark
 * under the cloud above the view), and 90 frames in a bolt strikes the sea
 * from a lit cloud for 24 frames (frames 5 and 6 alternate), 118 frames in
 * all. EoS plays no sound with it (the storm BGM carries the thunder).
 *
 * On the GBA the dark clouds are baked into the map (MAP_SKY_STORM_WAVES, map
 * palette 1, two colours). A lit frame swaps those two colours for EoS's lit
 * body colours and draws the rest of the frame (the yellow light, the lit
 * puff, the bolt) as OBJs placed in map pixels, from EoS's own frames
 * (src/data/sky_storm_bolts.h, graphics/custom/sky_storm/bolts.png, built by
 * tools/make_sky_storm_fx.py from captures of EoS's OBJ layer).
 *
 * Scripts: SKY_STORM_BOLT (SPECIAL_PROCESS 0x72) starts the animation.
 * VRAM: OBJ tiles 0x100.. in two slots of SKY_BOLT_FRAME_TILES_MAX tiles: a
 * new frame is uploaded into the slot the displayed OAM does not use. The
 * stormy sea has no actors or effects (they use 0x000-0x15F and 0x248..).
 * Palette: OBJ bank 15 (the thought bubbles', unused in cutscenes).
 */
#include "global.h"

#ifdef SKY_STORY

#include "globaldata.h"
#include "code_809D148.h"
#include "cpu.h"
#include "palette_fade_util.h"
#include "sky_story.h"
#include "sprite.h"
#include "structs/rgb.h"
#include "structs/sprite_oam.h"
#include "structs/str_position.h"

struct SkyBoltObj
{
    s16 x, y;   /* map pixels */
    u8 size;    /* 0: 8x8, 1: 16x16, 2: 32x32 */
    u16 tile;   /* within the frame's tiles */
};

struct SkyBoltFrame
{
    u16 firstObj, numObjs, firstTile, numTiles;
};

#include "data/sky_storm_bolts.h"

#define BOLT_TILE_NUM 0x100
#define BOLT_OBJ_PAL 15
#define BOLT_PAL_BASE ((16 + BOLT_OBJ_PAL) * 16)
/* MAP_SKY_STORM_WAVES's cloud palette (map palette 1) in the BG palettes */
#define CLOUD_PAL_BASE (1 * 16)
/* OBJs from this map row down are behind the map's front layer (the waves;
 * no cloud reaches below row 147) */
#define BOLT_WAVES_Y 160

static const u8 sBoltTiles[] = INCBIN_U8("graphics/custom/sky_storm/bolts.4bpp");
static const u16 sBoltPal[] = INCBIN_U16("graphics/custom/sky_storm/bolts.gbapal");

/* EoS v01p07b1.wan animation 1: (frames, WAN frame) */
static const u8 sBoltAnim[][2] = {
    { 2, 4 }, { 2, 0 }, { 4, 4 }, { 24, 0 }, { 2, 4 }, { 2, 1 }, { 4, 0 }, { 2, 1 },
    { 2, 2 }, { 2, 3 }, { 2, 1 }, { 42, 0 }, { 2, 4 }, { 2, 5 }, { 2, 6 }, { 2, 5 },
    { 2, 6 }, { 2, 5 }, { 2, 6 }, { 2, 5 }, { 2, 6 }, { 2, 5 }, { 2, 6 }, { 2, 5 },
    { 2, 4 }, { 2, 0 },
};

/* The baked cloud colours (graphics/custom/sky_storm/clouds.png 1, 2) and
 * EoS's lit body colours for them. */
static const u8 sCloudDark[2][3] = { { 16, 24, 24 }, { 40, 40, 48 } };
static const u8 sCloudLit[2][3] = { { 0, 8, 8 }, { 0, 48, 24 } };

static EWRAM_INIT bool8 sBoltActive = FALSE;
static EWRAM_INIT bool8 sBoltArmed = FALSE;   /* palette loaded, animation next frame */
static EWRAM_INIT u8 sBoltStep = 0;
static EWRAM_INIT u8 sBoltStepTimer = 0;
static EWRAM_INIT u8 sBoltFrame = 0;    /* WAN frame shown */
static EWRAM_INIT u8 sBoltSlot = 0;     /* VRAM slot of sBoltFrame's tiles */

static void SetCloudsLit(bool8 lit)
{
    s32 i;

    for (i = 0; i < 2; i++) {
        const u8 *c = lit ? sCloudLit[i] : sCloudDark[i];
        RGB_Array rgb = { .c = { c[0], c[1], c[2], 0 } };

        sub_8003810(CLOUD_PAL_BASE + 1 + i, rgb);
    }
}

/* OBJ bank 15 is the thought bubbles' / text arrow's palette in other
 * scenes: keep what was there and put it back when the bolt is done. */
static EWRAM_DATA RGB_Array sSavedObjPal[16] = {0};
static EWRAM_DATA bool8 sObjPalSaved = FALSE;

static void LoadBoltPalette(void)
{
    s32 i;

    if (!sObjPalSaved) {
        for (i = 0; i < 16; i++)
            sSavedObjPal[i] = SkyPaletteFade_GetColor(BOLT_PAL_BASE + i);
        sObjPalSaved = TRUE;
    }

    for (i = 0; i < 16; i++) {
        u16 c = sBoltPal[i];
        RGB_Array rgb = { .c = { (c & 0x1F) << 3, ((c >> 5) & 0x1F) << 3, ((c >> 10) & 0x1F) << 3, 0 } };

        sub_8003810(BOLT_PAL_BASE + i, rgb);
    }
}

void SkyStorm_StartBolt(void)
{
    sBoltActive = TRUE;
    sBoltArmed = TRUE;
    sBoltStep = 0;
    sBoltStepTimer = 0;
    sBoltFrame = 0;
}

void SkyStorm_Stop(void)
{
    s32 i;

    if (sBoltActive && sBoltFrame != 0)
        SetCloudsLit(FALSE);
    if (sObjPalSaved) {
        for (i = 0; i < 16; i++)
            sub_8003810(BOLT_PAL_BASE + i, sSavedObjPal[i]);
        sObjPalSaved = FALSE;
    }
    sBoltActive = FALSE;
    sBoltFrame = 0;
}

static void ShowFrame(u8 frame)
{
    if (frame == sBoltFrame)
        return;
    if (frame != 0) {
        const struct SkyBoltFrame *f = &sSkyBoltFrames[frame];

        sBoltSlot ^= 1;
        CpuFastCopy(sBoltTiles + f->firstTile * 32,
                    (void *)(OBJ_VRAM0 + (BOLT_TILE_NUM + sBoltSlot * SKY_BOLT_FRAME_TILES_MAX) * 32),
                    f->numTiles * 32);
    }
    if ((frame != 0) != (sBoltFrame != 0))
        SetCloudsLit(frame != 0);
    sBoltFrame = frame;
}

/* Every ground frame (src/ground_main.c). */
void SkyStorm_Draw(void)
{
    const struct SkyBoltFrame *f;
    PixelPos cam;
    s32 i;

    if (!sBoltActive)
        return;
    if (sBoltStep >= ARRAY_COUNT(sBoltAnim)) {
        SkyStorm_Stop();
        return;
    }
    /* every frame while active; the fade system writes it to the hardware a
     * frame later, so the animation starts the frame after SKY_STORM_BOLT */
    LoadBoltPalette();
    if (sBoltArmed) {
        sBoltArmed = FALSE;
        return;
    }
    ShowFrame(sBoltAnim[sBoltStep][1]);
    if (++sBoltStepTimer >= sBoltAnim[sBoltStep][0]) {
        sBoltStepTimer = 0;
        sBoltStep++;
    }
    if (sBoltFrame == 0)
        return;

    if (!sub_809D248(&cam))
        return;
    f = &sSkyBoltFrames[sBoltFrame];
    for (i = 0; i < f->numObjs; i++) {
        const struct SkyBoltObj *o = &sSkyBoltObjs[f->firstObj + i];
        s32 size = 8 << o->size;
        s32 sx = o->x - cam.x;
        s32 sy = o->y - cam.y;
        SpriteOAM sprite;

        if (sx >= DISPLAY_WIDTH || sx <= -size || sy >= DISPLAY_HEIGHT || sy <= -size)
            continue;
        sprite.attrib1 = 0;
        sprite.attrib2 = 0;
        sprite.attrib3 = 0;
        sprite.unk6 = 0;
        SpriteSetShape(&sprite, 0); /* square */
        SpriteSetSize(&sprite, o->size);
        SpriteSetPalNum(&sprite, BOLT_OBJ_PAL);
        /* The bolt's foot goes behind the waves (BG2), as in EoS. */
        SpriteSetPriority(&sprite, o->y >= BOLT_WAVES_Y ? 3 : 1);
        SpriteSetX(&sprite, sx & 0x1FF);
        SpriteSetY(&sprite, sy & 0xFF);
        SpriteSetTileNum(&sprite, BOLT_TILE_NUM + sBoltSlot * SKY_BOLT_FRAME_TILES_MAX + o->tile);
        /* Added before the rain (SkyStorm_Draw runs first): over it. */
        AddSprite(&sprite, 0, NULL, NULL);
    }
}

#endif /* SKY_STORY */
