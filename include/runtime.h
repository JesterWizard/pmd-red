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
     * leader = light blue, allies = yellow, enemies = cyan, exp numbers = cyan */
    u8 pmd2_battle_info_colors;
    /* PMD2 Poké coin glyph + cyan money amount in dungeon HUD */
    u8 custom_graphics;
    /* PMD2 Latin dialogue/UI font (Explorers glyph set); else vanilla */
    u8 pmd2_font;
    /* Dungeon Make Leader anytime; temporary until exit unless postgame */
    u8 party_leader_switch;
    /* Show ally default portrait when talking in dungeon (if available) */
    u8 ally_talk_portrait;
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
} RuntimeConfig;

extern const RuntimeConfig gRuntimeConfigRom;
#define gRuntimeConfig gRuntimeConfigRom

#endif /* GUARD_RUNTIME_CONFIG_H */
