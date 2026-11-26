#ifndef GUARD_ORNAMENT_FILES_TABLE_H
#define GUARD_ORNAMENT_FILES_TABLE_H

/* Sky build: the Relic Fragment object (sorts after npc04p) and the two
 * guild totem poles with their palettes (sort after titleopc). */
/* It also leaves out the 64 team-base flag files (flag##c / flag##p, the
 * first 64 entries), which only Red's team base uses. */
#ifdef SKY_STORY
#define SKY_ORNAMENT_FILES 1
#define SKY_ORNAMENT_TAIL_FILES 4
#define ORNAMENT_SKIPPED_FLAG_FILES 64
#else
#define SKY_ORNAMENT_FILES 0
#define SKY_ORNAMENT_TAIL_FILES 0
#define ORNAMENT_SKIPPED_FLAG_FILES 0
#endif

#define ORNAMENT_FILES_COUNT (79 - ORNAMENT_SKIPPED_FLAG_FILES + SKY_ORNAMENT_FILES + SKY_ORNAMENT_TAIL_FILES)

#include "structs/str_file_system.h"

extern const File gOrnamentFiles[ORNAMENT_FILES_COUNT];

#endif // GUARD_ORNAMENT_FILES_TABLE_H
