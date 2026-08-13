namespace RescueEditor.Core;

/// <summary>Decomp header / table paths used to populate editor catalogs, relative to the repo root.</summary>
public static class NamedConstantSources
{
    public const string BgMusic = "include/constants/bg_music.h";
    public const string Emotions = "include/constants/emotions.h";
    public const string GroundMap = "include/constants/ground_map.h";
    public const string GroundScriptParams = "include/constants/ground_script_params.h";
    public const string Direction = "include/constants/direction.h";
    public const string ScriptId = "include/constants/script_id.h";
    public const string PaletteUtil = "include/constants/palette_util.h";
    public const string PortraitPlacement = "include/portrait_placement.h";
    public const string DataScript = "include/data_script.h";
    public const string Monster = "include/constants/monster.h";
    public const string MoveId = "include/constants/move_id.h";
    public const string Item = "include/constants/item.h";
    public const string Type = "include/constants/type.h";
    public const string Ability = "include/constants/ability.h";
    public const string FriendArea = "include/constants/friend_area.h";
    public const string Dungeon = "include/constants/dungeon.h";
    public const string Trap = "include/constants/trap.h";
    public const string Weather = "include/constants/weather.h";
    public const string SoundNames = "src/sound_names.c";

    public static IReadOnlyList<string> All { get; } =
    [
        BgMusic,
        Emotions,
        GroundMap,
        GroundScriptParams,
        Direction,
        ScriptId,
        PaletteUtil,
        PortraitPlacement,
        DataScript,
        Monster,
        MoveId,
        Item,
        Type,
        Ability,
        FriendArea,
        Dungeon,
        Trap,
        Weather,
        SoundNames,
    ];

    public static string Combine(string repositoryRoot, string relative) =>
        Path.Combine(repositoryRoot, relative.Replace('/', Path.DirectorySeparatorChar));
}
