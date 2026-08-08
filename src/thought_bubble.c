#include "global.h"
#include "globaldata.h"
#include "bg_palette_buffer.h"
#include "code_809D148.h"
#include "constants/event_flag.h"
#include "cpu.h"
#include "event_flag.h"
#include "ground_lives.h"
#include "runtime.h"
#include "sprite.h"
#include "structs/sprite_oam.h"
#include "structs/str_position.h"
#include "thought_bubble.h"

/*
 * Overworld thought bubbles (ygodm8-style), adapted for PMD ground mode.
 *
 * L toggles a 128×64 OBJ overlay above the player. Art comes from the latest
 * SCENARIO_MAIN progress key via thought_bubble_table.inc (DEFAULT fallback).
 *
 * VRAM: tiles 0x300–0x37F (128 tiles). Palette: OBJ bank 15.
 * Re-uploaded each visible frame so ground AX sprite traffic cannot corrupt it.
 */

#define THOUGHT_BUBBLE_TILE_NUM 0x300
#define THOUGHT_BUBBLE_OBJ_PAL 15
#define THOUGHT_BUBBLE_PAL_INDEX_BASE ((16 + THOUGHT_BUBBLE_OBJ_PAL) * 16)
#define THOUGHT_BUBBLE_WIDTH 128
#define THOUGHT_BUBBLE_HEIGHT 64
#define THOUGHT_BUBBLE_TILES 128
#define THOUGHT_BUBBLE_UPLOAD_BYTES (THOUGHT_BUBBLE_TILES * 32)
#define THOUGHT_BUBBLE_X_OFFSET 64
#define THOUGHT_BUBBLE_Y_OFFSET 64
#define THOUGHT_BUBBLE_SCREEN_W 240
#define THOUGHT_BUBBLE_SCREEN_H 160

/* Literal INCBINs here (not via .inc) so scaninc tracks .4bpp/.gbapal deps. */
static const u8 sThoughtBubbleDEFAULTTiles[] = INCBIN_U8("graphics/custom/thought_bubbles/default/thought.4bpp");
static const u16 sThoughtBubbleDEFAULTPalette[] = INCBIN_U16("graphics/custom/thought_bubbles/default/thought.gbapal");

#include "data/thought_bubble_table.inc"

#define DECLARE_THOUGHT_BUBBLE_ENUM(symbol) THOUGHT_BUBBLE_##symbol,

#define DECLARE_THOUGHT_BUBBLE_ASSET_ENTRY(symbol) \
    [THOUGHT_BUBBLE_##symbol] = { \
        .tiles = sThoughtBubble##symbol##Tiles, \
        .palette = sThoughtBubble##symbol##Palette, \
    },

#define DECLARE_THOUGHT_BUBBLE_FLAG_ENTRY(key, symbol) \
    { key, THOUGHT_BUBBLE_##symbol },

enum {
    THOUGHT_BUBBLE_ASSET_LIST(DECLARE_THOUGHT_BUBBLE_ENUM)
    THOUGHT_BUBBLE_COUNT
};

struct ThoughtBubbleAsset {
    const u8 *tiles;
    const u16 *palette;
};

struct ThoughtBubbleFlagMapping {
    u16 key;
    u8 bubbleId;
};

static const struct ThoughtBubbleAsset sThoughtBubbleAssets[THOUGHT_BUBBLE_COUNT] = {
    THOUGHT_BUBBLE_ASSET_LIST(DECLARE_THOUGHT_BUBBLE_ASSET_ENTRY)
};

static const struct ThoughtBubbleFlagMapping sThoughtBubbleFlagMappings[] = {
    THOUGHT_BUBBLE_FLAG_LIST(DECLARE_THOUGHT_BUBBLE_FLAG_ENTRY)
    /* Sentinel keeps the array non-empty when the flag list has no rows. */
    { THOUGHT_BUBBLE_SCENARIO_NONE, THOUGHT_BUBBLE_DEFAULT },
};

#undef DECLARE_THOUGHT_BUBBLE_ENUM
#undef DECLARE_THOUGHT_BUBBLE_ASSET_ENTRY
#undef DECLARE_THOUGHT_BUBBLE_FLAG_ENTRY
#undef THOUGHT_BUBBLE_ASSET_LIST
#undef THOUGHT_BUBBLE_FLAG_LIST

static EWRAM_DATA u8 sShowThoughtBubbles = 0;
static EWRAM_DATA u16 sLatestThoughtBubbleScenarioKey = THOUGHT_BUBBLE_SCENARIO_NONE;

static s32 ClampInt(s32 value, s32 min, s32 max)
{
    if (value < min)
        return min;
    if (value > max)
        return max;
    return value;
}

u16 GetLatestThoughtBubbleScenarioKey(void)
{
    return sLatestThoughtBubbleScenarioKey;
}

void ThoughtBubble_NotifyScenarioMain(s32 main, s32 sub)
{
    sLatestThoughtBubbleScenarioKey = THOUGHT_BUBBLE_SCENARIO_KEY(main, sub);
}

void ThoughtBubble_Reset(void)
{
    sLatestThoughtBubbleScenarioKey = THOUGHT_BUBBLE_SCENARIO_NONE;
    sShowThoughtBubbles = 0;
}

bool8 ThoughtBubble_IsVisible(void)
{
    return sShowThoughtBubbles != 0;
}

static void SyncScenarioKeyFromScriptVars(void)
{
    u32 main;
    u32 sub;

    GetScriptVarScenario(SCENARIO_MAIN, &main, &sub);
    sLatestThoughtBubbleScenarioKey = THOUGHT_BUBBLE_SCENARIO_KEY(main, sub);
}

void ThoughtBubble_Show(void)
{
    SyncScenarioKeyFromScriptVars();
    sShowThoughtBubbles = 1;
}

void ThoughtBubble_Hide(void)
{
    sShowThoughtBubbles = 0;
}

static u8 GetThoughtBubbleIdForKey(u16 key)
{
    u32 i;

    if (key == THOUGHT_BUBBLE_SCENARIO_NONE)
        return THOUGHT_BUBBLE_DEFAULT;

    for (i = 0; i < ARRAY_COUNT(sThoughtBubbleFlagMappings); i++) {
        if (sThoughtBubbleFlagMappings[i].key == key)
            return sThoughtBubbleFlagMappings[i].bubbleId;
    }

    return THOUGHT_BUBBLE_DEFAULT;
}

static void LoadThoughtBubbleGfx(void)
{
    u8 bubbleId = GetThoughtBubbleIdForKey(sLatestThoughtBubbleScenarioKey);
    const struct ThoughtBubbleAsset *asset = &sThoughtBubbleAssets[bubbleId];
    s32 i;
    u16 color;

    CpuCopy((void *)(OBJ_VRAM0 + THOUGHT_BUBBLE_TILE_NUM * 32),
            asset->tiles,
            THOUGHT_BUBBLE_UPLOAD_BYTES);

    for (i = 0; i < 16; i++) {
        color = asset->palette[i];
        SetBGPaletteBufferColor(THOUGHT_BUBBLE_PAL_INDEX_BASE + i, &color);
    }
}

static void DrawThoughtBubbleHalf(s32 screenX, s32 screenY, s32 tileNum)
{
    SpriteOAM sprite;

    sprite.attrib1 = 0;
    sprite.attrib2 = 0;
    sprite.attrib3 = 0;
    sprite.unk6 = 0;
    SpriteSetShape(&sprite, 0); /* square */
    SpriteSetSize(&sprite, 3);  /* 64×64 */
    SpriteSetPalNum(&sprite, THOUGHT_BUBBLE_OBJ_PAL);
    SpriteSetPriority(&sprite, 0);
    SpriteSetX(&sprite, screenX);
    SpriteSetY(&sprite, screenY);
    SpriteSetTileNum(&sprite, tileNum);
    AddSprite(&sprite, 0, NULL, NULL);
}

void ThoughtBubble_Draw(void)
{
    PixelPos worldPos;
    PixelPos camera;
    s32 playerId;
    s32 bubbleX;
    s32 bubbleY;

    if (!gRuntimeConfig.thought_bubbles || !sShowThoughtBubbles)
        return;

    playerId = sub_80A7AE8(0);
    if (playerId < 0)
        return;
    if (sub_80A8FD8(playerId, &worldPos) == -1)
        return;
    if (!sub_809D248(&camera))
        return;

    LoadThoughtBubbleGfx();

    bubbleX = (worldPos.x / 256) - camera.x - THOUGHT_BUBBLE_X_OFFSET - 8;
    bubbleY = (worldPos.y / 256) - camera.y - THOUGHT_BUBBLE_Y_OFFSET - 10;
    bubbleX = ClampInt(bubbleX, 0, THOUGHT_BUBBLE_SCREEN_W - THOUGHT_BUBBLE_WIDTH);
    bubbleY = ClampInt(bubbleY, 0, THOUGHT_BUBBLE_SCREEN_H - THOUGHT_BUBBLE_HEIGHT);

    DrawThoughtBubbleHalf(bubbleX, bubbleY, THOUGHT_BUBBLE_TILE_NUM);
    DrawThoughtBubbleHalf(bubbleX + 64, bubbleY, THOUGHT_BUBBLE_TILE_NUM + 64);
}
