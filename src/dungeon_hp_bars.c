#include "global.h"
#include "globaldata.h"
#include "bg_palette_buffer.h"
#include "cpu.h"
#include "dungeon_hp_bars.h"
#include "dungeon_util.h"
#include "dungeon_vram.h"
#include "graphics_memory.h"
#include "runtime.h"
#include "sprite.h"
#include "structs/dungeon_entity.h"
#include "structs/rgb.h"
#include "structs/sprite_oam.h"
#include "structs/str_dungeon.h"

/*
 * Floating dungeon HP bars — 11 frames of 16×8 (near-full → nearly empty).
 *
 * VRAM: tiles 0x232–0x247 (22 tiles), the gap between etcfont (ends 0x231)
 * and type-1/2 move effects (base 0x248). Type-3 effects use 0x370+ and must
 * not be overlapped — an earlier 0x380 placement corrupted attack graphics.
 *
 * Palette: OBJ bank 13 (monster pals 0–12, effects 14, UI/minimap 15).
 */

#define HP_BAR_ART_FRAMES 12 /* frames in graphics/custom/hp_bars.png */
#define HP_BAR_FRAMES 11    /* uploaded frames; full-HP art frame skipped */
#define HP_BAR_TILES_PER_FRAME 2
#define HP_BAR_VRAM_INDEX 0x232
#define HP_BAR_OBJ_PAL 13
#define HP_BAR_PAL_INDEX_BASE ((16 + HP_BAR_OBJ_PAL) * 16) /* 464 */
#define HP_BAR_ART_FIRST_FRAME 1 /* skip full bar; hidden when HP is full anyway */
#define HP_BAR_UPLOAD_BYTES (HP_BAR_FRAMES * HP_BAR_TILES_PER_FRAME * 32)
#define HP_BAR_ART_BYTE_SKIP (HP_BAR_ART_FIRST_FRAME * HP_BAR_TILES_PER_FRAME * 32)

/* Visual bar sits in the lower half of each 8px cell; lift so it clears the head. */
#define HP_BAR_X_OFFSET (-8)
#define HP_BAR_Y_OFFSET (-6)

enum {
    HP_BAR_COL_TRANSPARENT = 0,
    HP_BAR_COL_BORDER,
    HP_BAR_COL_EMPTY,
    HP_BAR_COL_GREEN,
    HP_BAR_COL_YELLOW,
    HP_BAR_COL_ORANGE,
    HP_BAR_COL_ORANGE_DARK,
    HP_BAR_COL_RED,
};

static const RGB_Struct sHpBarPalette[16] = {
    [HP_BAR_COL_TRANSPARENT] = {   0,   0,   0, 0x80 },
    [HP_BAR_COL_BORDER] = {  56,  56,  56, 0x80 },
    [HP_BAR_COL_EMPTY] = {  80,  88, 144, 0x80 },
    [HP_BAR_COL_GREEN] = {  88, 248, 112, 0x80 },
    [HP_BAR_COL_YELLOW] = { 248, 248,  64, 0x80 },
    [HP_BAR_COL_ORANGE] = { 248, 192, 120, 0x80 },
    [HP_BAR_COL_ORANGE_DARK] = { 224, 144,  88, 0x80 },
    [HP_BAR_COL_RED] = { 248, 112,  88, 0x80 },
};

/* 16×96 strip: 12 stacked 16×8 frames (full → 1px). Built from graphics/custom/hp_bars.png. */
static const u8 sHpBarGfx[] = INCBIN_U8("graphics/custom/hp_bars.4bpp");

void LoadDungeonHpBarGraphics(void)
{
    if (!gRuntimeConfig.dungeon_hp_bars)
        return;

    /* Upload near-full→empty frames only; leave type-3 effect space at 0x370 alone. */
    CpuCopy((void *)(OBJ_VRAM0 + HP_BAR_VRAM_INDEX * 32),
            sHpBarGfx + HP_BAR_ART_BYTE_SKIP,
            HP_BAR_UPLOAD_BYTES);
    ApplyDungeonHpBarPalette();
}

void ApplyDungeonHpBarPalette(void)
{
    s32 i;

    if (!gRuntimeConfig.dungeon_hp_bars)
        return;

    for (i = 0; i < 16; i++) {
        SetBGPaletteBufferColorRGB(HP_BAR_PAL_INDEX_BASE + i, &sHpBarPalette[i],
                                   gDungeonBrightness, gDungeon->colorRamp);
    }
}

static s32 GetHpBarFrame(s32 hp, s32 maxHp)
{
    s32 level;

    /* Hidden at 0 HP and at full HP; only damaged Pokémon show a bar. */
    if (hp <= 0 || maxHp <= 0 || hp >= maxHp)
        return -1;

    level = (hp * HP_BAR_FRAMES + maxHp - 1) / maxHp;
    if (level < 1)
        level = 1;
    if (level > HP_BAR_FRAMES)
        level = HP_BAR_FRAMES;

    /* Uploaded strip is near-full → empty. */
    return HP_BAR_FRAMES - level;
}

void DrawDungeonHpBar(Entity *entity, s32 screenX, s32 screenY, s32 ySort, u32 priority)
{
    EntityInfo *entInfo;
    SpriteOAM sprite;
    s32 frame;
    s32 posX;
    s32 posY;

    if (!gRuntimeConfig.dungeon_hp_bars)
        return;
    if (!EntityIsValid(entity))
        return;

    /* unk23 resets to 0 while pixelPos is changing (walking / knockback). */
    if (entity->unk23 == 0)
        return;

    entInfo = GetEntInfo(entity);
    frame = GetHpBarFrame(entInfo->HP, entInfo->maxHPStat);
    if (frame < 0)
        return;

    posX = screenX + HP_BAR_X_OFFSET;
    posY = screenY + HP_BAR_Y_OFFSET;
    if (posX < -32 || posY < -32 || posX >= 240 || posY >= 160)
        return;

    sprite.attrib1 = 0;
    sprite.attrib2 = 0;
    sprite.attrib3 = 0;
    sprite.unk6 = 0;
    SpriteSetShape(&sprite, 1); /* horizontal */
    SpriteSetSize(&sprite, 0);  /* 16×8 */
    SpriteSetPalNum(&sprite, HP_BAR_OBJ_PAL);
    SpriteSetPriority(&sprite, priority);
    SpriteSetX(&sprite, posX);
    SpriteSetY(&sprite, posY);
    SpriteSetTileNum(&sprite, HP_BAR_VRAM_INDEX + frame * HP_BAR_TILES_PER_FRAME);
    AddSprite(&sprite, ySort, NULL, NULL);
}
