#ifndef GUARD_RUNTIME_CONFIG_H
#define GUARD_RUNTIME_CONFIG_H

#include "gba/types.h"

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

/*
 * Build-time hack toggles (ROM const copy).
 * Edit configs/runtime.c, then rebuild.
 */
typedef struct {
    u8 always_run;            /* Run without holding B (overworld + dungeon) */
    u8 infinite_belly;        /* Skip hunger / wall / Pass Scarf belly drain */
    u8 exp_multiplier;        /* Scale AddExpPoints (1 = vanilla) */
    u8 recruit_rate_boost;    /* +Friend Bow bonus to recruit rate */
    u8 all_friend_areas;      /* Own every Friend Area on load / new save */
    u8 debug_menu;            /* Add Debug to the title main menu */
    u8 disable_something_approaches; /* Skip dungeon wind timer / blow-out */
    u8 l_to_use_move;         /* Use set move with L alone (vs vanilla L+A) */
    /* PMD2-style dungeon battle log colors:
     * leader = light blue, allies = yellow, enemies = cyan,
     * exp / level-up stat gain numbers = cyan */
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
    /* Extra EXP for one-shotting full-HP foes based on overkill damage */
    u8 overkill_exp_bonus;
    /* SpriteCollab portraits for starter evolutions (else vanilla kao / none) */
    u8 custom_portraits;
    /* Mix outlaw hunt jobs onto the Pelipper bulletin board */
    u8 outlaw_missions;
    /* Regenerate Pelipper bulletin jobs whenever the board UI closes */
    u8 refresh_bulletin_on_exit;
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
    /* Cheat: R+B in dungeon clears with success */
    u8 rb_complete_dungeon;
    /* Spinda's Café at Whiscash Pond (Juice Bar + Recycle Shop) */
    u8 spinda_cafe;
    /* Keep at least one of every gummi type in Kangaskhan storage */
    u8 perpetual_gummis;
    /* TMs stay usable after teaching (else convert to Used TM) */
    u8 infinite_tms;
} RuntimeConfig;

extern const RuntimeConfig gRuntimeConfigRom;
#define gRuntimeConfig gRuntimeConfigRom

#endif /* GUARD_RUNTIME_CONFIG_H */
