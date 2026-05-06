#ifndef GUARD_DUNGEON_RANDOM_H
#define GUARD_DUNGEON_RANDOM_H

#include "structs/dungeon_entity.h"

void SetDungeonRNGPreseed23Bit(u32 preseed23);
u32 GenerateDungeonRNGSeed(void);
void InitDungeonRNG(u32 value);
s32 DungeonRand16Bit(void);
s32 DungeonRandInt(s32 cap);
s32 DungeonRandRange(s32 low, s32 high);
bool8 DungeonRandOutcome(s32 percentChance);
bool8 DungeonRandOutcome_2(s32 percentChance);
s32 CalculateStatusTurns(Entity *target, const s16 *turnRange, bool8 factorCurerSkills);

#endif
