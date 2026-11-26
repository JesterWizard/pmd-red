#ifndef GUARD_ORNAMENT_FILES_TABLE_H
#define GUARD_ORNAMENT_FILES_TABLE_H

/* Sky build: the Relic Fragment object (sorts after npc04p). */
#ifdef SKY_STORY
#define SKY_ORNAMENT_FILES 1
#else
#define SKY_ORNAMENT_FILES 0
#endif

#define ORNAMENT_FILES_COUNT (79 + SKY_ORNAMENT_FILES)

#include "structs/str_file_system.h"

extern const File gOrnamentFiles[ORNAMENT_FILES_COUNT];

#endif // GUARD_ORNAMENT_FILES_TABLE_H
