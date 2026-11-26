#ifndef GUARD_GROUND_FILES_TABLE_H
#define GUARD_GROUND_FILES_TABLE_H

/* Explorers of Sky demake: 7 EoS ground maps x (bpl, bpc, bma). */
#ifdef SKY_STORY
#define SKY_GROUND_FILES 21
#else
#define SKY_GROUND_FILES 0
#endif
#define GROUND_FILES_COUNT (680 + SKY_GROUND_FILES)

#include "structs/str_file_system.h"

extern const File gGroundFiles[GROUND_FILES_COUNT];

#endif // GUARD_GROUND_FILES_TABLE_H
