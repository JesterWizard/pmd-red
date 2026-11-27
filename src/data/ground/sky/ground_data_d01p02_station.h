/*
 * Explorers of Sky demake: Beach Cave Pit after the Zubat & Koffing battle
 * (EoS SCRIPT/D01P41A/m01a0701), on the converted EoS map d01p41a.
 * Replaces the Tiny Woods end-room group (gs179 group 1).
 *
 * The scene scripts, actors and sectors are in
 * events/sky/scenes/sky_d01p02_scenes.scene; the build compiles them into
 * sky_d01p02_scenes.h (tools/event_editor/scenes.py, documentation/EventEditor.md).
 */
#include "sky_d01p02_scenes.h"

static const struct GroundLink s_gs179_links[] = { /* 0x82302d4 */
    /* link   0 */ { { /*x*/  20, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  24, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs179 = { LPARRAY(s_gs179_groups), s_gs179_links }; /* 0x82302e4 */
