#ifndef GUARD_STR_MON_PORTRAIT_H
#define GUARD_STR_MON_PORTRAIT_H

#include "constants/emotions.h"
#include "structs/rgb.h"
#include "structs/str_file_system.h"
#include "structs/str_position.h"

// size: 0x8
typedef struct PortraitGfxSub
{
    /* 0x0 */ const RGB_Struct *pal;
    /* 0x4 */ const u8 *gfx;
} PortraitGfxSub;

// size: 0x68
typedef struct PortraitGfx
{
    // NOTE: The actual number of sprites is different depending on pokemon. For example, starters have 12 sprites, while most legendaries only 1. Unused sprites are set as NULL, NULL.
    /* 0x0 */ PortraitGfxSub sprites[13];
} PortraitGfx;

#define NUM_RED_PORTRAIT_EMOTIONS 13

// The emotion part of a portrait sprite id (0x40 marks a remapped id, see
// GetSpecialPortraitFaceId). Red's portraits have 13 emotions (4 bits). The sky
// build's custom portraits also hold EoS's emotions past them (EMOTION_DIZZY 13,
// EMOTION_SIGH 16, numbered as in EoS), so there the emotion takes 5 bits.
#ifdef SKY_STORY
#define PORTRAIT_EMOTION(spriteId) ((spriteId) & 0x1F)

// A sky custom portrait with faces past Red's 13: the same layout, a longer
// array (sprites is PortraitGfx's last member, so indexing past 13 reads on).
// Only emotions its gCustomPortraitMasks bit names are ever read from it.
typedef struct PortraitGfxSky
{
    PortraitGfxSub sprites[MAX_EMOTIONS];
} PortraitGfxSky;
#else
#define PORTRAIT_EMOTION(spriteId) ((spriteId) & 0xF)
#endif

// Size: R=0x10 | B=0xF
typedef struct MonPortraitMsg
{
    /* 0x0 */ OpenedFile *faceFile;
    /* 0x4 */ PortraitGfx *faceData;
    /* 0x8 */ DungeonPos pos;
    /* 0xC */ u8 spriteId; // Which mon's sprite to use. For example Kecleon has multiple sprites depending on whether it's green or purple.
    /* 0xD */ bool8 flip; // Whether the mon's sprite is flipped.
    /* 0xE */ u8 unkE;
} MonPortraitMsg;

#endif // GUARD_STR_MON_PORTRAIT_H
