#include "runtime.h"

const RuntimeConfig gRuntimeConfigRom __attribute__((section(".runtime_config"))) = {
    .always_run = FALSE,
    .infinite_belly = FALSE,
    .exp_multiplier = 1, /* 1 = vanilla */
    .recruit_rate_boost = FALSE,
    .all_friend_areas = FALSE,
    .debug_menu = FALSE,
    .disable_something_approaches = TRUE,
    .l_to_use_move = TRUE, /* TRUE = L alone; FALSE = vanilla L+A */
    .pmd2_battle_info_colors = TRUE, /* TRUE = PMD2 log colors; FALSE = vanilla */
    .custom_graphics = TRUE, /* TRUE = PMD2 Poké coin + cyan money; FALSE = vanilla */
    .party_leader_switch = TRUE, /* TRUE = dungeon Make Leader anytime (temp until postgame); FALSE = vanilla */
    .ally_talk_portrait = TRUE, /* TRUE = show ally default portrait when talking; FALSE = vanilla */
};
