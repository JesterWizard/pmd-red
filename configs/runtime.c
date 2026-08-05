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
    .pmd2_font = TRUE, /* TRUE = PMD2 Latin font; FALSE = vanilla */
    .pmd2_training_grounds = TRUE, /* TRUE = 5 floors + exit, no boss, scaling levels; FALSE = vanilla 3F+boss */
    .custom_graphics = TRUE, /* TRUE = PMD2 Poké coin + cyan money; FALSE = vanilla */
    .party_leader_switch = TRUE, /* TRUE = dungeon Make Leader anytime (temp until postgame); FALSE = vanilla */
    .show_dungeon_portraits = TRUE, /* TRUE = portraits on ally talk + level-up; FALSE = vanilla */
    .bank_interest_percent = 5, /* Percent interest on savings per dungeon clear; 0 = disabled */
    .rank_rewards = TRUE, /* TRUE = bag pages + storage by rank; FALSE = vanilla bag 20/10 */
    .achievements = TRUE, /* TRUE = parallel achievements menu + tracking; FALSE = off */
    .compact_kangaskhan_storage = TRUE, /* TRUE = max 99/item (u8); FALSE = max 255 */
    .custom_title_backgrounds = TRUE, /* TRUE = custom title BGs; FALSE = vanilla titlen0–2 */
    .dungeon_modifiers = FALSE, /* TRUE = 20% chance of a floor modifier; FALSE = off */
    .starter_choice_prompt = TRUE, /* TRUE = choose starter or take quiz; FALSE = quiz only */
    .overkill_exp_bonus = TRUE, /* TRUE = +25% EXP per 100% overkill on full-HP KO; FALSE = off */
    .custom_portraits = TRUE, /* TRUE = SpriteCollab evo portraits; FALSE = vanilla kao / none */
    .outlaw_missions = TRUE, /* TRUE = WANTED hunt jobs on bulletin; FALSE = vanilla job types only */
    .refresh_bulletin_on_exit = TRUE, /* TRUE = reroll board jobs on board exit; FALSE = vanilla (dungeon/day only) */
    .damage_preview = TRUE, /* TRUE = estimated dmg/acc/effect while facing foe; FALSE = off */
};
