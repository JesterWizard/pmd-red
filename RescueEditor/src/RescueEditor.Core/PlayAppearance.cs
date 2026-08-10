namespace RescueEditor.Core;

/// <summary>Personality-test starter/partner pools (retail tables).</summary>
public static class PlayTeamSpecies
{
    /// <summary><c>gStarterSelectionList</c> — unique quiz starters.</summary>
    public static readonly short[] Starters =
    [
        1,   // Bulbasaur
        4,   // Charmander
        7,   // Squirtle
        25,  // Pikachu
        52,  // Meowth
        54,  // Psyduck
        66,  // Machop
        104, // Cubone
        133, // Eevee
        152, // Chikorita
        155, // Cyndaquil
        158, // Totodile
        252, // Treecko
        255, // Torchic
        258, // Mudkip
        300, // Skitty
    ];

    /// <summary><c>gPartners</c> — partner picker list.</summary>
    public static readonly short[] Partners =
    [
        4, 1, 7, 25, 152, 158, 155, 255, 252, 258,
    ];

    public static (short Player, short Partner) PickRandom(Random? rng = null)
    {
        rng ??= Random.Shared;
        var player = Starters[rng.Next(Starters.Length)];
        short partner;
        var guard = 0;
        do
        {
            partner = Partners[rng.Next(Partners.Length)];
            guard++;
        } while (partner == player && guard < 32);
        if (partner == player)
        {
            partner = Partners.FirstOrDefault(p => p != player, Partners[0]);
        }
        return (player, partner);
    }
}

/// <summary>Overrides dynamic live types (species 0) with a concrete player/partner pair.</summary>
public sealed class PlayAppearance
{
    public PlayAppearance(short playerSpecies, short partnerSpecies)
    {
        PlayerSpecies = playerSpecies;
        PartnerSpecies = partnerSpecies;
    }

    public short PlayerSpecies { get; }
    public short PartnerSpecies { get; }

    public static PlayAppearance Random(Random? rng = null)
    {
        var (player, partner) = PlayTeamSpecies.PickRandom(rng);
        return new PlayAppearance(player, partner);
    }

    /// <summary>Default Scene Play team: Charmander hero + Bulbasaur partner.</summary>
    public static PlayAppearance CharmanderAndBulbasaur { get; } = new(
        PlayTeamSpecies.Starters[1], // Charmander = 4
        PlayTeamSpecies.Starters[0]); // Bulbasaur = 1

    /// <summary>
    /// Maps live TypeIds used for hero/partner slots (see <c>sub_80A7DDC</c>).
    /// Returns null when the type should use the ROM table / preview stand-ins.
    /// </summary>
    public short? TryResolveLiveType(byte typeId) => typeId switch
    {
        0 or 1 or 3 or 33 or 35 => PlayerSpecies,
        2 or 4 or 5 or 6 or 7 or 8 or 34 => PartnerSpecies,
        _ => null,
    };
}

/// <summary>Known story ground scenes for Scene Play presets.</summary>
public static class ScenePlayPresets
{
    public const int TinyWoodsEntryMapId = 178;
    public const int TinyWoodsIntroGroup = 1;
    public const int TinyWoodsIntroSector = 0;

    public static bool IsTinyWoodsIntro(Scene scene, int group, int sector) =>
        scene.MapId == TinyWoodsEntryMapId &&
        group == TinyWoodsIntroGroup &&
        sector == TinyWoodsIntroSector;

    /// <summary>
    /// Prefer scripted playback for dialogue-driven cutscenes (and the Tiny Woods intro).
    /// Free-roam stations that only set BGM/SELECT stay on bootstrap so walking still works.
    /// </summary>
    public static bool ShouldScriptPlay(Scene scene, int group, int sector)
    {
        if (IsTinyWoodsIntro(scene, group, sector))
            return true;

        var station = scene.Groups.ElementAtOrDefault(group)?
            .Sectors.ElementAtOrDefault(sector)?
            .Stations.FirstOrDefault();
        if (station?.Commands is null || station.Commands.Count == 0)
            return false;

        foreach (var cmd in station.Commands)
        {
            if (cmd.Op is
                0x32 or 0x33 or 0x34 or 0x35 or 0x36 or 0x37 or 0x38 or 0x39 or 0xCF)
                return true;
        }
        return false;
    }

    /// <summary>
    /// Tiny Woods map header group 0 is a bootstrap station; default Play to the intro cutscene.
    /// Explicit group/sector (playlist navigator, editor pickers) are preserved.
    /// </summary>
    public static (int Group, int Sector) ResolvePlayTarget(Scene scene, int group, int sector)
    {
        if (scene.MapId == TinyWoodsEntryMapId && group == 0 && sector == 0)
            return (TinyWoodsIntroGroup, TinyWoodsIntroSector);
        return (group, sector);
    }
}
