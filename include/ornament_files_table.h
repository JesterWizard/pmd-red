#ifndef GUARD_ORNAMENT_FILES_TABLE_H
#define GUARD_ORNAMENT_FILES_TABLE_H

/* The sky build has its own list (src/ornament_files_table.c): Red's 64
 * team-base flag files (flag##c / flag##p), which only Red's team base uses,
 * are left out, and the EoS ground objects (the Relic Fragment, the guild's
 * totem poles and gate, the Exploration Team Kit, the dinner, the pearl) are
 * added in name order. */
#ifdef SKY_STORY
#define ORNAMENT_FILES_COUNT 40
#else
#define ORNAMENT_FILES_COUNT 79
#endif

#include "structs/str_file_system.h"

extern const File gOrnamentFiles[ORNAMENT_FILES_COUNT];

#endif // GUARD_ORNAMENT_FILES_TABLE_H
