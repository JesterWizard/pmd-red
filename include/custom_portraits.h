#ifndef GUARD_CUSTOM_PORTRAITS_H
#define GUARD_CUSTOM_PORTRAITS_H

#include "structs/str_file_system.h"

extern const FileArchive gCustomPortraitArchive;
extern const s16 gCustomPortraitSpecies[];
extern const u16 gCustomPortraitMasks[];
extern const u16 gCustomPortraitCount;

/* TRUE if species has a SpriteCollab portrait pack in gCustomPortraitArchive. */
bool8 HasCustomPortrait(s16 speciesId);
/* Emotion bitmask for custom portraits (same layout as dialogueSprites). */
u16 GetCustomPortraitMask(s16 speciesId);

#endif /* GUARD_CUSTOM_PORTRAITS_H */
