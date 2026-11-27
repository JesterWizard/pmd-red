#include "global.h"
#include "sky_story.h"

/* The story CG table (gSkyCutaways): generated from events/sky/cutaways.cfg
 * by tools/event_editor/cutaways.py into the build's sky_cg_config.h (the
 * sky build only; <> keeps scaninc away from it, the Makefile lists it). */
#ifdef SKY_STORY
#define SKY_CG_TABLE
#include <sky_cg_config.h>
#endif
