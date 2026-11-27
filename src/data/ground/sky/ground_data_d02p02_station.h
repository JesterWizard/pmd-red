/*
 * Explorers of Sky demake, chapter 3: the station of every chapter-3 map
 * (gMapScriptTable points them all at gs181, the slot of Red's Thunderwave
 * Cave end, which the sky build does not use). See
 * documentation/Features/SkyChapter3.md.
 *
 * The scene scripts, actors and sectors are in
 * events/sky/scenes/sky_d02p02_scenes.scene; the build compiles them into
 * sky_d02p02_scenes.h (tools/event_editor/scenes.py, documentation/EventEditor.md).
 * Group 0 is the free roam's hub (it runs the map's group), 1-12 the free roam,
 * 20-66 EoS's scenes (src/data/ground/sky/sky_ch3_events.h lists them).
 */
#include "sky_d02p02_scenes.h"

static const struct GroundLink s_gs181_links[] = {
    /* link   0 */ { { /*x*/   0, /*y*/   0, /*flags*/ 0, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 }, /* placeholder */
};

const GroundScriptHeader gGroundScript_gs181 = { LPARRAY(s_gs181_groups), s_gs181_links };
