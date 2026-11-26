#ifndef GUARD_CUSTOM_TITLE_BACKGROUNDS_H
#define GUARD_CUSTOM_TITLE_BACKGROUNDS_H

#include "structs/str_file_system.h"

#ifdef SKY_STORY
#define CUSTOM_TITLE_BG_COUNT 10 /* EoS top-menu CGs (BACK/s09p01a-s09p10a) */
#else
#define CUSTOM_TITLE_BG_COUNT 6
#endif

extern const FileArchive gCustomTitleBgArchive;

#endif /* GUARD_CUSTOM_TITLE_BACKGROUNDS_H */
