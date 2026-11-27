#include "global.h"
#include "globaldata.h"
#include "ground_sprite_data.h"

const char *const gUnknown_81178F4[] = {
    "flag00c",
    "flag01c",
    "flag02c",
    "flag03c",
    "flag04c",
    "flag05c",
    "flag06c",
    "flag07c",
    "flag08c",
    "flag09c",
    "flag10c",
    "flag11c",
    "flag12c",
    "flag13c",
    "flag14c",
    "flag15c",
    "flag16c",
    "flag100c",
    "flag101c",
    "flag102c",
    "flag103c",
    "flag104c",
    "flag105c",
    "flag106c",
    "flag107c",
    "flag108c",
    "flag109c",
    "flag110c",
    "flag111c",
    "flag112c",
    "flag113c",
    "flag114c",
    "titleopc",
    "titlebgc",
    "stoneimc",
    "stairs01c",
    "sign01c",
#ifdef SKY_STORY
    "totempole1c", /* 37: 0x125 */
    "totempole2c", /* 38: 0x126 */
    "dinnerc",     /* 39: 0x127 */
    "pearlc",      /* 40: 0x128 */
    "totempole3c", /* 41: 0x129 */
    "dojowarpc",   /* 42: 0x12A */
    "timegearc",   /* 43: 0x12B */
    "crumblingrockc", /* 44: 0x12C */
#endif
    NULL
};

const struct GroundObjectKind gGroundObjectKinds[] = {
    { -1, 0x000, NULL }, // many dummy/unused entries
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },

    { 1, 0x100, "flag00p" },
    { 1, 0x100, "flag00p" },
    { 1, 0x101, "flag01p" },
    { 1, 0x102, "flag02p" },
    { 1, 0x103, "flag03p" },
    { 1, 0x104, "flag04p" },
    { 1, 0x105, "flag05p" },
    { 1, 0x106, "flag06p" },
    { 1, 0x107, "flag07p" },
    { 1, 0x108, "flag08p" },
    { 1, 0x109, "flag09p" },
    { 1, 0x10A, "flag10p" },
    { 1, 0x10B, "flag11p" },
    { 1, 0x10C, "flag12p" },
    { 1, 0x10D, "flag13p" },
    { 1, 0x10E, "flag14p" },
    { 1, 0x10F, "flag15p" },
    { 1, 0x110, "flag16p" },
    { 1, 0x111, "flag100p" },
    { 1, 0x112, "flag101p" },
    { 1, 0x113, "flag102p" },
    { 1, 0x114, "flag103p" },
    { 1, 0x115, "flag104p" },
    { 1, 0x116, "flag105p" },
    { 1, 0x117, "flag106p" },
    { 1, 0x118, "flag107p" },
    { 1, 0x119, "flag108p" },
    { 1, 0x11A, "flag109p" },
    { 1, 0x11B, "flag110p" },
    { 1, 0x11C, "flag111p" },
    { 1, 0x11D, "flag112p" },
    { 1, 0x11E, "flag113p" },
    { 1, 0x11F, "flag114p" },
    { 6, 0x120, "titleop1" },
    { 1, 0x120, "titleop2" },
    { 4, 0x121, "titlebg1" },
    { 1, 0x006, "npc01p" },
    { 1, 0x006, "npc02p" },
    { 1, 0x005, "npc03p" },
    { 1, 0x006, "npc04p" },
    { 1, 0x000, "item01p" },
    /* Shared stairs01c palette (0x100|35) — one extend slot for stairs+sign. */
    { 1, 0x123, "stairs01p" },
    { 1, 0x123, "sign01p" },
#ifdef SKY_STORY
    /* Explorers of Sky demake: the Relic Fragment (EoS GROUND/g01p01a1.wan), shared palette 5. */
    { 1, 0x005, "relicfragmentp" },
    /* The guild's totem poles (EoS GROUND/t01p01a1.wan, t01p01a3.wan): 32x64,
     * two 16-tile units each, each on its own EoS palette (extend slots). */
    { 2, 0x125, "totempole1p" },
    { 2, 0x126, "totempole2p" },
    /* Chapter 2 (documentation/Features/SkyChapter2.md). The guild's gate
     * (GROUND/g01p01a3.wan, 32x32 + 32x16) shows beside both totem poles, so
     * it shares totem pole 2's palette instead of taking a third extend slot. */
    { 2, 0x126, "guildgatep" },
    /* The Exploration Team Kit (GROUND/g01p05a1.wan): shared palette 4. */
    { 1, 0x004, "teamkitp" },
    /* The mess hall's dinner (GROUND/g01p06b1.wan) and the pearl at the end of
     * Drenched Bluff (GROUND/d02p31a1.wan), each on its own EoS palette. */
    { 1, 0x127, "dinnerp" },
    { 1, 0x128, "pearlp" },
    /* Chapter 3 (documentation/Features/SkyChapter3.md). The Outlaw Notice
     * Board's flipping panel (GROUND/g01p03a1.wan, 20 tiles): shared palette 6. */
    { 2, 0x006, "outlawpanelp" },
    /* Azurill's apple (GROUND/p03p02a1.wan): shared palette 8. */
    { 1, 0x008, "applep" },
    /* Treasure Town's other two totem poles (GROUND/t01p01a2.wan, t01p01a4.wan)
     * show beside totem pole 2 (t01p01a3), so they share one extend palette
     * made for both (convert ... --merge-palette). */
    { 2, 0x129, "totempole3p" },
    { 3, 0x129, "totempole4p" },
    /* Marowak Dojo's warp (GROUND/t01p04a1.wan, 72 tiles), its own EoS palette. */
    { 5, 0x12A, "dojowarpp" },
    /* The visions: the Outlaw Notice Board's panel seen from behind and
     * Dugtrio's hole (GROUND/v03p03a1.wan, v03p03a2.wan: shared palettes 4, 1),
     * the Time Gear and its glow (v03p06a1.wan on its own palette, v03p06a2.wan
     * on shared palette 10, 120 tiles) and the crumbling rock
     * (v03p11a1.wan, its own palette). */
    { 3, 0x004, "boardbackp" },
    { 2, 0x001, "dugtrioholep" },
    { 1, 0x12B, "timegearp" },
    { 8, 0x00A, "timegearglowp" },
    { 2, 0x12C, "crumblingrockp" },
#endif
    { -1, 0x000, NULL }
};

// Dummy trailing list
const struct GroundObjectKind gUnknown_8117E8C[] = {
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
    { -1, 0x000, NULL },
};
