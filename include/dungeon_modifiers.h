#ifndef GUARD_DUNGEON_MODIFIERS_H
#define GUARD_DUNGEON_MODIFIERS_H

#include "gba/types.h"

u8 GetFloorModifier(void);
void TryRollAndApplyFloorModifier(void);
void AnnounceFloorModifier(void);
void AddDungeonFloorMoney(s32 amount);

#endif /* GUARD_DUNGEON_MODIFIERS_H */
