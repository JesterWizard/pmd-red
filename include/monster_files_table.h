#ifndef GUARD_MONSTER_FILES_TABLE_H
#define GUARD_MONSTER_FILES_TABLE_H

/* Sky build: the Gen 4 sprites ax424.. sort right after ax423. */
#ifdef SKY_STORY
#define SKY_GEN4_AX_COUNT SKY_GEN4_MONSTER_COUNT
#else
#define SKY_GEN4_AX_COUNT 0
#endif

#define MONSTER_FILES_COUNT (497 + SKY_GEN4_AX_COUNT)

#include "structs/str_file_system.h"
#include "constants/monster.h"

extern const File gMonsterFiles[MONSTER_FILES_COUNT];

#endif // GUARD_MONSTER_FILES_TABLE_H
