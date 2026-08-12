using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RuntimeConfigSchemaTests
{
    [Fact]
    public void FieldsCoverEveryRuntimeConfigMemberInOrder()
    {
        var ids = RuntimeConfigSchema.Fields.Select(f => f.Id).ToArray();
        Assert.Equal(
        [
            "always_run",
            "infinite_belly",
            "exp_multiplier",
            "recruit_rate_boost",
            "all_friend_areas",
            "debug_menu",
            "disable_something_approaches",
            "l_to_use_move",
            "pmd2_battle_info_colors",
            "custom_graphics",
            "pmd2_font",
            "party_leader_switch",
            "show_dungeon_portraits",
            "pmd2_training_grounds",
            "pmd2_rescue_points",
            "pmd2_send_home",
            "bank_interest_percent",
            "pmd2_rank_rewards",
            "achievements",
            "compact_kangaskhan_storage",
            "custom_title_backgrounds",
            "dungeon_modifiers",
            "starter_choice_prompt",
            "starter_confirm_preview",
            "all_starters_as_partners",
            "pmd2_casting_starters",
            "overkill_exp_bonus",
            "custom_portraits",
            "outlaw_missions",
            "refresh_bulletin_on_exit",
            "unrestricted_bulletin_jobs",
            "expanded_job_slots",
            "damage_preview",
            "keep_allies",
            "multi_select_selling",
            "gummis_in_town",
            "pmd2_gummi_stats",
            "status_condition_exp",
            "keep_linked_moves_at_0_pp",
            "evolution_stat_boost",
            "custom_iq_skills",
            "custom_abilities",
            "rb_complete_dungeon",
            "spinda_cafe",
            "perpetual_gummis",
            "infinite_tms",
            "physical_special_split",
            "dungeon_hp_bars",
            "custom_story",
            "friend_area_intros",
            "team_act",
            "max_level_stats",
            "all_makuhita_dojo",
            "skip_title_intro",
            "living_square",
            "full_party_entry",
            "thought_bubbles",
        ], ids);
    }

    [Fact]
    public void ByteOffsetsAreContiguousU8Slots()
    {
        Assert.Equal(57, RuntimeConfigSchema.ByteLength);
        for (var i = 0; i < RuntimeConfigSchema.Fields.Count; i++)
            Assert.Equal(i, RuntimeConfigSchema.Fields[i].Offset);
    }

    [Theory]
    [InlineData("exp_multiplier", RuntimeConfigFieldKind.U8)]
    [InlineData("bank_interest_percent", RuntimeConfigFieldKind.U8)]
    [InlineData("always_run", RuntimeConfigFieldKind.Toggle)]
    [InlineData("debug_menu", RuntimeConfigFieldKind.Toggle)]
    public void FieldKindsMatchRuntimeSemantics(string id, RuntimeConfigFieldKind kind)
    {
        var field = RuntimeConfigSchema.Find(id);
        Assert.NotNull(field);
        Assert.Equal(kind, field!.Kind);
    }

    [Fact]
    public void EveryFieldHasDisplayNameGroupAndDescription()
    {
        foreach (var field in RuntimeConfigSchema.Fields)
        {
            Assert.False(string.IsNullOrWhiteSpace(field.DisplayName));
            Assert.False(string.IsNullOrWhiteSpace(field.Group));
            Assert.False(string.IsNullOrWhiteSpace(field.Description));
        }
    }
}
