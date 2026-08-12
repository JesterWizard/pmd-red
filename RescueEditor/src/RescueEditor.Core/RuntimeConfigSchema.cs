namespace RescueEditor.Core;

public enum RuntimeConfigFieldKind
{
    Toggle,
    U8,
}

/// <summary>
/// Schema for <c>RuntimeConfig</c> in <c>include/runtime.h</c>.
/// Add new fields here when the C struct grows so the C Patches menu stays in sync.
/// <see cref="VanillaValue"/> is stock retail behavior; <see cref="RecommendedValue"/> is the
/// Install offering (decomp feature on / sensible numeric default).
/// </summary>
public sealed record RuntimeConfigFieldDef(
    string Id,
    int Offset,
    RuntimeConfigFieldKind Kind,
    string DisplayName,
    string Group,
    string Description,
    byte VanillaValue = 0,
    byte RecommendedValue = 1,
    byte Min = 0,
    byte Max = 255);

public static class RuntimeConfigSchema
{
    public static IReadOnlyList<RuntimeConfigFieldDef> Fields { get; } = BuildFields();

    public static int ByteLength => Fields.Count;

    public static RuntimeConfigFieldDef? Find(string id) =>
        Fields.FirstOrDefault(field => string.Equals(field.Id, id, StringComparison.Ordinal));

    public static byte[] CreateVanillaBytes()
    {
        var bytes = new byte[ByteLength];
        foreach (var field in Fields)
            bytes[field.Offset] = field.VanillaValue;
        return bytes;
    }

    private static IReadOnlyList<RuntimeConfigFieldDef> BuildFields()
    {
        var fields = new List<RuntimeConfigFieldDef>();
        void Add(
            string id,
            RuntimeConfigFieldKind kind,
            string displayName,
            string group,
            string description,
            byte vanilla = 0,
            byte recommended = 1,
            byte min = 0,
            byte max = 255)
        {
            fields.Add(new RuntimeConfigFieldDef(
                id, fields.Count, kind, displayName, group, description,
                vanilla, recommended, min, max));
        }

        Add("always_run", RuntimeConfigFieldKind.Toggle, "Always Run", "QoL / Cheats",
            "Run in the overworld and dungeons without holding B.");
        Add("infinite_belly", RuntimeConfigFieldKind.Toggle, "Infinite Belly", "QoL / Cheats",
            "Skip hunger, wall, and Pass Scarf belly drain.");
        Add("exp_multiplier", RuntimeConfigFieldKind.U8, "EXP Multiplier", "QoL / Cheats",
            "Scale AddExpPoints (1 = vanilla). Typical values: 1, 2, 4.",
            vanilla: 1, recommended: 2, min: 1, max: 4);
        Add("recruit_rate_boost", RuntimeConfigFieldKind.Toggle, "Recruit Rate Boost", "QoL / Cheats",
            "Apply a Friend Bow-style bonus to recruitment rates.");
        Add("all_friend_areas", RuntimeConfigFieldKind.Toggle, "All Friend Areas", "Story / Unlocks",
            "Visit or recruit into any Friend Area. Unlock flags stay vanilla.");
        Add("debug_menu", RuntimeConfigFieldKind.Toggle, "Debug Menu", "QoL / Cheats",
            "Start opens the custom in-game debug menu.");
        Add("disable_something_approaches", RuntimeConfigFieldKind.Toggle, "Disable Something Approaches", "QoL / Cheats",
            "Skip the dungeon wind timer and blow-out.");
        Add("l_to_use_move", RuntimeConfigFieldKind.Toggle, "L to Use Move", "QoL / Cheats",
            "Use the set move with L alone (else vanilla L+A).");
        Add("pmd2_battle_info_colors", RuntimeConfigFieldKind.Toggle, "PMD2 Battle Log Colors", "PMD2-style",
            "Explorers-style colors in the dungeon battle log and related HUD text.");
        Add("custom_graphics", RuntimeConfigFieldKind.Toggle, "Custom Graphics", "Graphics / UI",
            "PMD2 Poké coin glyph and cyan money amounts in the dungeon HUD.");
        Add("pmd2_font", RuntimeConfigFieldKind.Toggle, "PMD2 Font", "PMD2-style",
            "Explorers Latin dialogue/UI font instead of vanilla.");
        Add("party_leader_switch", RuntimeConfigFieldKind.Toggle, "Party Leader Switch", "Gameplay",
            "Allow Make Leader anytime in a dungeon; persists to save.");
        Add("show_dungeon_portraits", RuntimeConfigFieldKind.Toggle, "Dungeon Portraits", "Graphics / UI",
            "Show neutral portraits for ally talk, level-up, and job thank-you when available.");
        Add("pmd2_training_grounds", RuntimeConfigFieldKind.Toggle, "PMD2 Training Grounds", "PMD2-style",
            "Makuhita Dojo: 5 floors, auto-exit, no boss, scaled enemy levels.");
        Add("pmd2_rescue_points", RuntimeConfigFieldKind.Toggle, "PMD2 Rescue Points", "PMD2-style",
            "Show each job's rescue-point reward beside its difficulty.");
        Add("pmd2_send_home", RuntimeConfigFieldKind.Toggle, "PMD2 Send Home", "PMD2-style",
            "Team Send Home for new recruits, including full-party recruit handling.");
        Add("bank_interest_percent", RuntimeConfigFieldKind.U8, "Bank Interest Percent", "Gameplay",
            "Felicity Bank interest after a successful dungeon clear (0 = off). Typical: 0, 5, 10.",
            vanilla: 0, recommended: 5, min: 0, max: 100);
        Add("pmd2_rank_rewards", RuntimeConfigFieldKind.Toggle, "PMD2 Rank Rewards", "PMD2-style",
            "Bag pages, Kangaskhan storage, and PMD2 rank item prizes scale with rescue rank.");
        Add("achievements", RuntimeConfigFieldKind.Toggle, "Achievements", "Gameplay",
            "Parallel achievements menu, tracking, and rewards.");
        Add("compact_kangaskhan_storage", RuntimeConfigFieldKind.Toggle, "Compact Kangaskhan Storage", "Gameplay",
            "Storage uses max 99 per item; only Stick/Gravelerock share a stack slot.");
        Add("custom_title_backgrounds", RuntimeConfigFieldKind.Toggle, "Custom Title Backgrounds", "Graphics / UI",
            "Random custom title-screen background instead of vanilla titlen*.");
        Add("dungeon_modifiers", RuntimeConfigFieldKind.Toggle, "Dungeon Floor Modifiers", "Gameplay",
            "Random floor modifiers (Poisonous Air, Darkness, Electric Terrain, Treasure Rich).");
        Add("starter_choice_prompt", RuntimeConfigFieldKind.Toggle, "Starter Choice Prompt", "Story / Unlocks",
            "Choose a starter directly or take the personality quiz.");
        Add("starter_confirm_preview", RuntimeConfigFieldKind.Toggle, "Starter Confirm Preview", "Story / Unlocks",
            "Before committing starter/partner, preview Lv1 stats and moves with Yes/No.");
        Add("all_starters_as_partners", RuntimeConfigFieldKind.Toggle, "All Starters as Partners", "Story / Unlocks",
            "All player starters can be partners (else vanilla 10).");
        Add("pmd2_casting_starters", RuntimeConfigFieldKind.Toggle, "PMD2 Casting Starters", "PMD2-style",
            "Add Vulpix, Meowth, and Phanpy to the starter pick list.");
        Add("overkill_exp_bonus", RuntimeConfigFieldKind.Toggle, "Overkill EXP Bonus", "Gameplay",
            "Extra EXP for one-shotting full-HP foes based on overkill damage.");
        Add("custom_portraits", RuntimeConfigFieldKind.Toggle, "Custom Portraits", "Graphics / UI",
            "SpriteCollab portraits for Gen 1–3 plus expanded packs for starter evos / Spinda.");
        Add("outlaw_missions", RuntimeConfigFieldKind.Toggle, "Outlaw Missions", "Jobs / Bulletin",
            "Wanted Board menu entry and outlaw hunt jobs on the bulletin.");
        Add("refresh_bulletin_on_exit", RuntimeConfigFieldKind.Toggle, "Refresh Bulletin on Open", "Jobs / Bulletin",
            "Reroll Pelipper board jobs whenever the board UI opens.");
        Add("unrestricted_bulletin_jobs", RuntimeConfigFieldKind.Toggle, "Unrestricted Bulletin Jobs", "Jobs / Bulletin",
            "New jobs may reuse dungeon floors already used by accepted Job List entries.");
        Add("expanded_job_slots", RuntimeConfigFieldKind.Toggle, "Expanded Job Slots", "Jobs / Bulletin",
            "Accept up to 16 Job List slots (else vanilla 8).");
        Add("damage_preview", RuntimeConfigFieldKind.Toggle, "Damage Preview", "Gameplay",
            "Show estimated damage, accuracy, and effect while facing an enemy.");
        Add("keep_allies", RuntimeConfigFieldKind.Toggle, "Keep Allies Overnight", "Gameplay",
            "Keep recruited allies overnight (skip auto Stand By and disperse popup).");
        Add("multi_select_selling", RuntimeConfigFieldKind.Toggle, "Multi-Select Selling", "QoL / Cheats",
            "Kecleon sell: L/R multi-select like Kangaskhan store.");
        Add("gummis_in_town", RuntimeConfigFieldKind.Toggle, "Gummis in Town", "Gameplay",
            "Town Team menu: Give Gummi for IQ / Friend-Area stat boosts.");
        Add("pmd2_gummi_stats", RuntimeConfigFieldKind.Toggle, "PMD2 Gummi Stats", "PMD2-style",
            "Dungeon gummis can raise a random basic stat, or rarely all four.");
        Add("status_condition_exp", RuntimeConfigFieldKind.Toggle, "Status Condition EXP", "Gameplay",
            "Grant EXP when an enemy faints to status residual damage.");
        Add("keep_linked_moves_at_0_pp", RuntimeConfigFieldKind.Toggle, "Keep Linked Moves at 0 PP", "Gameplay",
            "Keep linked moves linked when a move in the chain hits 0 PP.");
        Add("evolution_stat_boost", RuntimeConfigFieldKind.Toggle, "Evolution Stat Boost", "Gameplay",
            "+10% to current HP / Atk / Sp.Atk / Def / Sp.Def on each evolution.");
        Add("custom_iq_skills", RuntimeConfigFieldKind.Toggle, "Custom IQ Skills", "Gameplay",
            "Enable custom IQ skills (e.g. Conserver) on top of the vanilla set.");
        Add("custom_abilities", RuntimeConfigFieldKind.Toggle, "Custom Abilities", "Gameplay",
            "Enable custom abilities beyond the vanilla ability set.");
        Add("rb_complete_dungeon", RuntimeConfigFieldKind.Toggle, "R+B Complete Dungeon", "QoL / Cheats",
            "Cheat: hold R+B in a dungeon to clear it successfully.");
        Add("spinda_cafe", RuntimeConfigFieldKind.Toggle, "Spinda Café", "Gameplay",
            "Spinda's Café at Whiscash Pond (Juice Bar + Recycle Shop).");
        Add("perpetual_gummis", RuntimeConfigFieldKind.Toggle, "Perpetual Gummis", "QoL / Cheats",
            "Keep at least one of every gummi type in Kangaskhan storage.");
        Add("infinite_tms", RuntimeConfigFieldKind.Toggle, "Infinite TMs", "QoL / Cheats",
            "TMs stay usable after teaching instead of becoming Used TM.");
        Add("physical_special_split", RuntimeConfigFieldKind.Toggle, "Physical/Special Split", "Gameplay",
            "Gen 4+ move-based Physical/Special split (else vanilla type-based).");
        Add("dungeon_hp_bars", RuntimeConfigFieldKind.Toggle, "Dungeon HP Bars", "Graphics / UI",
            "Floating HP bars above Pokémon visible in the dungeon.");
        Add("custom_story", RuntimeConfigFieldKind.Toggle, "Custom Story", "Story / Unlocks",
            "Weird Autumn SSLP custom story (forced Treecko/Squirtle + rewritten early cutscenes).");
        Add("friend_area_intros", RuntimeConfigFieldKind.Toggle, "Friend Area Intros", "Graphics / UI",
            "Full-screen art splash (~2s, A to skip) when entering a Friend Area.");
        Add("team_act", RuntimeConfigFieldKind.Toggle, "Team ACT", "Story / Unlocks",
            "Unlock Team ACT with the other postgame Makuhita Dojo team courses.");
        Add("max_level_stats", RuntimeConfigFieldKind.Toggle, "Max Level Stats", "QoL / Cheats",
            "Raise leader/partner/active team to Lv100 with max HP/stats/IQ.");
        Add("all_makuhita_dojo", RuntimeConfigFieldKind.Toggle, "All Makuhita Dojo", "Story / Unlocks",
            "Unlock every Makuhita Dojo course and show Makuhita.");
        Add("skip_title_intro", RuntimeConfigFieldKind.Toggle, "Skip Title Intro", "QoL / Cheats",
            "Allow button-skip of the boot opening intro even with no save data.");
        Add("living_square", RuntimeConfigFieldKind.Toggle, "Living Square", "Gameplay",
            "Pokémon Square ambient life: wander routes, visitors, banter.");
        Add("full_party_entry", RuntimeConfigFieldKind.Toggle, "Full Party Entry", "Gameplay",
            "Enter dungeons with 4 party members (else most dungeons max 3).");
        Add("thought_bubbles", RuntimeConfigFieldKind.Toggle, "Thought Bubbles", "Graphics / UI",
            "Ground overworld: L toggles a thought-bubble sprite above the player.");

        return fields;
    }
}
