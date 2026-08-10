#ifndef GUARD_RUNTIME_CONFIG_H
#define GUARD_RUNTIME_CONFIG_H

#include "gba/types.h"

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

/*
 * Runtime hack toggles.
 * `gRuntimeConfigRom` supplies the build-time defaults from configs/runtime.c.
 * The mutable copy is initialized from those defaults and may be overridden
 * by the in-game debug menu.
 */
typedef struct {
    u8 always_run;            /* Run without holding B (overworld + dungeon) */
    u8 infinite_belly;        /* Skip hunger / wall / Pass Scarf belly drain */
    u8 exp_multiplier;        /* Scale AddExpPoints (1 = vanilla) */
    u8 recruit_rate_boost;    /* +Friend Bow bonus to recruit rate */
    u8 all_friend_areas;      /* Own every Friend Area on load / new save */
    u8 debug_menu;            /* Start opens the custom in-game menu */
    u8 disable_something_approaches; /* Skip dungeon wind timer / blow-out */
    u8 l_to_use_move;         /* Use set move with L alone (vs vanilla L+A) */
    /* PMD2-style dungeon battle log colors:
     * leader = light blue, allies = yellow, enemies = cyan,
     * exp / level-up stat gain numbers = cyan,
     * obtained / dungeon item names = cream pink,
     * obtained money amounts = cyan,
     * Pokémon summary Stats: cyan Exp / To next level,
     * separate Attack/Defense labels, Tactic on leaders */
    u8 pmd2_battle_info_colors;
    /* PMD2 Poké coin glyph + cyan money amount in dungeon HUD */
    u8 custom_graphics;
    /* PMD2 Latin dialogue/UI font (Explorers glyph set); else vanilla */
    u8 pmd2_font;
    /* Dungeon Make Leader anytime; temporary until exit unless postgame */
    u8 party_leader_switch;
    /* Show neutral portraits in dungeon (ally talk + level-up) if available */
    u8 show_dungeon_portraits;
    /* PMD2-style Makuhita Dojo: 5 playable floors + auto-exit (no boss),
     * with enemy levels/EXP scaling per floor (1/10/20/25/35) */
    u8 pmd2_training_grounds;
    /* Show each job's rescue-point reward beside its difficulty */
    u8 pmd2_rescue_points;
    /* PMD2-style Send Home on Team menu for new recruits (+ full-party recruit) */
    u8 pmd2_send_home;
    /* Felicity Bank interest on successful dungeon clear (percent; 0 = off) */
    u8 bank_interest_percent;
    /* Rank rewards: bag pages + Kangaskhan storage capacity by rescue rank
     * (else vanilla bag 20/10 and unlimited storage totals) */
    u8 rank_rewards;
    /* Parallel achievements system (title menu + tracking + rewards) */
    u8 achievements;
    /* Compact Kangaskhan storage: u8 counts, max 99/item (else max 255) */
    u8 compact_kangaskhan_storage;
    /* Random custom title BG from graphics/title_screen_backgrounds/ (else vanilla titlen*) */
    u8 custom_title_backgrounds;
    /* Random floor modifiers (Poisonous Air / Darkness / Electric Terrain / Treasure Rich) */
    u8 dungeon_modifiers;
    /* Prompt to choose starter directly or take the personality quiz (else quiz only) */
    u8 starter_choice_prompt;
    /* Before committing starter/partner pick: preview Lv1 stats + moves, then Yes/No */
    u8 starter_confirm_preview;
    /* All player starters (incl. Meowth/Psyduck/etc.) can be partners; else vanilla 10 */
    u8 all_starters_as_partners;
    /* Extra EXP for one-shotting full-HP foes based on overkill damage */
    u8 overkill_exp_bonus;
    /* SpriteCollab portraits: Normal for Gen1–3 + Munchlax; full packs for starter evos / Spinda */
    u8 custom_portraits;
    /* Mix outlaw hunt jobs onto the Pelipper bulletin board */
    u8 outlaw_missions;
    /* Regenerate Pelipper bulletin jobs whenever the board UI closes */
    u8 refresh_bulletin_on_exit;
    /* Accept up to 16 Job List slots (else vanilla 8); storage always 16 */
    u8 expanded_job_slots;
    /* Show estimated damage / accuracy / effect while facing an enemy */
    u8 damage_preview;
    /* Keep recruited allies on the team overnight (skip auto Stand By).
     * Stand By / Farewell still work. Story alone segments (PARTNER1_KIND==0)
     * still dismiss so cutscenes stay correct. */
    u8 keep_allies;
    /* Kecleon sell: L/R multi-select like Kangaskhan store (else single-item only) */
    u8 multi_select_selling;
    /* Town Team menu: Give Gummi for IQ / Friend-Area stat boosts (else Friend Area only) */
    u8 gummis_in_town;
    /* Grant EXP when an enemy faints to status residual damage (else vanilla: no EXP) */
    u8 status_condition_exp;
    /* Keep linked moves linked when a move in the chain hits 0 PP (else vanilla: delink) */
    u8 keep_linked_moves_at_0_pp;
    /* +10% to current HP / Atk / Sp.Atk / Def / Sp.Def on each evolution */
    u8 evolution_stat_boost;
    /* Custom IQ skills (e.g. Conserver); else vanilla skill set only */
    u8 custom_iq_skills;
    /* Custom abilities (ABILITY_FIRST_CUSTOM_ABILITY+); else vanilla set only */
    u8 custom_abilities;
    /* Cheat: R+B in dungeon clears with success */
    u8 rb_complete_dungeon;
    /* Spinda's Café at Whiscash Pond (Juice Bar + Recycle Shop) */
    u8 spinda_cafe;
    /* Keep at least one of every gummi type in Kangaskhan storage */
    u8 perpetual_gummis;
    /* TMs stay usable after teaching (else convert to Used TM) */
    u8 infinite_tms;
    /* Gen4+ move-based Physical/Special split (else vanilla type-based) */
    u8 physical_special_split;
    /* Floating HP bars above Pokémon visible in the dungeon */
    u8 dungeon_hp_bars;
    /* Weird Autumn SSLP custom story (forced Treecko/Squirtle + rewritten early cutscenes) */
    u8 custom_story;
    /* Full-screen art splash (2s / A skip) when entering a Friend Area */
    u8 friend_area_intros;
    /* Makuhita Dojo: unlock Team ACT with the other postgame team courses */
    u8 team_act;
    /* Raise leader/partner/active team to Lv100 with max HP/stats/IQ */
    u8 max_level_stats;
    /* Unlock every Makuhita Dojo course + show Makuhita (QUEST_UNK10) */
    u8 all_makuhita_dojo;
    /* Allow button-skip of boot opening intro even with no save data
     * (vanilla: only skippable once SCENARIO_MAIN has progressed) */
    u8 skip_title_intro;
    /* Pokémon Square ambient life: wander routes, visitors, banter (else vanilla static NPCs) */
    u8 living_square;
    /* Allow dungeon entry with 4 party members before postgame
     * (else vanilla caps at 3 until QUEST_REACHED_POSTGAME / canChangeLeader) */
    u8 full_party_entry;
    /* Ground overworld: L toggles a thought-bubble sprite above the player
     * (art selected from latest SCENARIO_MAIN; else DEFAULT) */
    u8 thought_bubbles;
} RuntimeConfig;

/* magic(4) + version(4) + RuntimeConfig + checksum(4); grow when fields are added */
#define RUNTIME_CONFIG_SAVE_SIZE 0x44

extern const RuntimeConfig gRuntimeConfigRom;
extern RuntimeConfig gRuntimeConfigData;

#define gRuntimeConfig gRuntimeConfigData

void InitializeRuntimeConfigFromRom(void);
void ResetRuntimeConfigToRom(void);
u32 SaveRuntimeConfig(u8 *buffer, u32 bufLen);
bool8 RestoreRuntimeConfig(const u8 *buffer, u32 bufLen);

#endif /* GUARD_RUNTIME_CONFIG_H */
