#ifndef GUARD_CUSTOM_PORTRAITS_H
#define GUARD_CUSTOM_PORTRAITS_H

#include "structs/str_file_system.h"

// One bit per emotion (as dialogueSprites). The sky build's portraits go up to
// EoS's EMOTION_SIGH (16), past a u16.
#ifdef SKY_STORY
typedef u32 CustomPortraitMask;
#else
typedef u16 CustomPortraitMask;
#endif

extern const FileArchive gCustomPortraitArchive;
extern const s16 gCustomPortraitSpecies[];
extern const CustomPortraitMask gCustomPortraitMasks[];
extern const u16 gCustomPortraitCount;

/* TRUE if species has a SpriteCollab portrait pack in gCustomPortraitArchive. */
bool8 HasCustomPortrait(s16 speciesId);
/* Emotion bitmask for custom portraits (same layout as dialogueSprites). */
CustomPortraitMask GetCustomPortraitMask(s16 speciesId);

#endif /* GUARD_CUSTOM_PORTRAITS_H */
