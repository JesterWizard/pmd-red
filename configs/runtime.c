#include "runtime.h"

const RuntimeConfig gRuntimeConfigRom __attribute__((section(".runtime_config"))) = {
    .always_run = FALSE,
    .infinite_belly = FALSE,
    .exp_multiplier = 1, /* 1 = vanilla */
    .recruit_rate_boost = FALSE,
    .all_friend_areas = TRUE, /* TRUE = own every Friend Area; FALSE = vanilla unlocks */
    .debug_menu = TRUE, /* Enable the custom in-game menu */
    .disable_something_approaches = TRUE,
    .l_to_use_move = TRUE, /* TRUE = L alone; FALSE = vanilla L+A */
    .pmd2_battle_info_colors = TRUE, /* TRUE = PMD2 log colors; FALSE = vanilla */
    .pmd2_font = TRUE, /* TRUE = PMD2 Latin font; FALSE = vanilla */
    .pmd2_training_grounds = TRUE, /* TRUE = 5 floors + exit, no boss, scaling levels; FALSE = vanilla 3F+boss */
    .pmd2_rescue_points = TRUE, /* TRUE = show rescue points beside job difficulty; FALSE = vanilla */
    .pmd2_send_home = TRUE, /* TRUE = Team "Send Home" for new recruits; FALSE = vanilla Farewell */
    .custom_graphics = TRUE, /* TRUE = PMD2 Poké coin + cyan money; FALSE = vanilla */
    .party_leader_switch = TRUE, /* TRUE = dungeon Make Leader anytime (temp until postgame); FALSE = vanilla */
    .show_dungeon_portraits = TRUE, /* TRUE = portraits on ally talk, level-up, job thank-you; FALSE = vanilla */
    .bank_interest_percent = 5, /* Percent interest on savings per dungeon clear; 0 = disabled */
    .pmd2_rank_rewards = TRUE, /* TRUE = bag pages + storage by rank; FALSE = vanilla bag 20/10 */
    .achievements = FALSE, /* TRUE = parallel achievements menu + tracking; FALSE = off */
    .compact_kangaskhan_storage = TRUE, /* TRUE = max 99/item (u8); FALSE = max 255 */
    .custom_title_backgrounds = TRUE, /* TRUE = custom title BGs; FALSE = vanilla titlen0–2 */
    .dungeon_modifiers = FALSE, /* TRUE = 20% chance of a floor modifier; FALSE = off */
    .starter_choice_prompt = TRUE, /* TRUE = choose starter or take quiz; FALSE = quiz only */
    .starter_confirm_preview = TRUE, /* TRUE = stats/moves confirm before starter/partner commit; FALSE = vanilla instant pick */
    .all_starters_as_partners = TRUE, /* TRUE = all player starters can be partners; FALSE = vanilla 10 */
    .overkill_exp_bonus = TRUE, /* TRUE = +25% EXP per 100% overkill on full-HP KO; FALSE = off */
    .custom_portraits = TRUE, /* TRUE = SpriteCollab portraits (Normal + evo packs); FALSE = vanilla kao */
    .outlaw_missions = TRUE, /* TRUE = WANTED hunt jobs on bulletin; FALSE = vanilla job types only */
    .refresh_bulletin_on_exit = TRUE, /* TRUE = reroll board jobs on board open; FALSE = vanilla (dungeon/day only) */
    .unrestricted_bulletin_jobs = TRUE, /* TRUE = new jobs may reuse accepted Job List floors; FALSE = vanilla unique floors */
    .expanded_job_slots = TRUE, /* TRUE = accept up to 16 jobs; FALSE = vanilla 8 */
    .damage_preview = TRUE, /* TRUE = estimated dmg/acc/effect while facing foe; FALSE = off */
    .keep_allies = TRUE, /* TRUE = allies stay overnight; FALSE = vanilla end-of-day Stand By */
    .multi_select_selling = TRUE, /* TRUE = L/R multi-select sell (Kangaskhan-style); FALSE = one at a time */
    .gummis_in_town = TRUE, /* TRUE = Give Gummi from town Team menu; FALSE = Friend Area only */
    .status_condition_exp = TRUE, /* TRUE = EXP on status KOs; FALSE = vanilla (no EXP) */
    .keep_linked_moves_at_0_pp = TRUE, /* TRUE = links survive 0 PP; FALSE = vanilla delink */
    .evolution_stat_boost = TRUE, /* TRUE = +10% current stats per evolution; FALSE = vanilla */
    .custom_iq_skills = TRUE, /* TRUE = custom IQ skills (Conserver, …); FALSE = vanilla set */
    .custom_abilities = TRUE, /* TRUE = custom abilities; FALSE = vanilla set only */
    .rb_complete_dungeon = TRUE, /* TRUE = R+B clears dungeon; FALSE = off */
    .spinda_cafe = TRUE, /* TRUE = Spinda Café at Whiscash Pond; FALSE = off */
    .perpetual_gummis = FALSE, /* TRUE = always ≥1 of each gummi in storage; FALSE = off */
    .infinite_tms = TRUE, /* TRUE = TMs not consumed on use; FALSE = vanilla Used TM */
    .physical_special_split = TRUE, /* TRUE = Gen4+ move-based Phys/Spec; FALSE = vanilla type-based */
    .dungeon_hp_bars = TRUE, /* TRUE = floating HP bars on visible Pokémon; FALSE = off */
    .custom_story = FALSE, /* TRUE = Weird Autumn SSLP story (Treecko/Squirtle + custom dialogue); FALSE = vanilla */
    .friend_area_intros = TRUE, /* TRUE = 2s (A-skippable) art splash on Friend Area visit */
    .team_act = TRUE, /* TRUE = Team ACT in postgame Makuhita Dojo team courses; FALSE = hidden */
    .max_level_stats = FALSE, /* TRUE = leader/partner/team → Lv100 + max stats/IQ; FALSE = vanilla */
    .all_makuhita_dojo = FALSE, /* TRUE = all Dojo courses + Makuhita visible; FALSE = story unlocks */
    .skip_title_intro = TRUE, /* TRUE = button-skip boot intro with no save; FALSE = vanilla (need save) */
    .living_square = TRUE, /* TRUE = Square NPCs wander / visit / banter; FALSE = vanilla static */
    .full_party_entry = TRUE, /* TRUE = enter with 4 members pre-postgame; FALSE = vanilla (need postgame) */
    .thought_bubbles = TRUE, /* TRUE = L toggles overworld thought bubble; FALSE = off */
};
