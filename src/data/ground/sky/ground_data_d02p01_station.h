/*
 * Explorers of Sky demake, chapter 2: the station of every chapter-2 map
 * (gMapScriptTable points them all at gs180, the slot of Red's Thunderwave
 * Cave entrance, which the sky build does not use). See
 * documentation/Features/SkyChapter2.md.
 *
 * The scene scripts, actors and sectors are in
 * events/sky/scenes/sky_d02p01_scenes.scene; the build compiles them into
 * sky_d02p01_scenes.h (tools/event_editor/scenes.py, documentation/EventEditor.md).
 * As yet a placeholder: group 0, the enter script.
 */
#include "sky_d02p01_scenes.h"

static const struct GroundLink s_gs180_links[] = {
    /* link   0 */ { { /*x*/   0, /*y*/   0, /*flags*/ 0, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 }, /* placeholder */
};

const GroundScriptHeader gGroundScript_gs180 = { LPARRAY(s_gs180_groups), s_gs180_links };
