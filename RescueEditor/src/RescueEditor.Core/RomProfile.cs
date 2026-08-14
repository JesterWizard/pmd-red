namespace RescueEditor.Core;

/// <summary>Version-specific ROM layout anchors and validation for RescueTemple.</summary>
public sealed class RomProfile
{
    public const string Eu10Sha1 = "afee3b060dd5fd4a68afb1b003456aef3a2af073";
    public const string Jp10Sha1 = "4bc9370edebb3da5bdf768eeced689fda3f8b77b";
    public const string BlueUsSha1 = "503edef4fe6088bca00616efcac3b13da90cd105";

    private static readonly IReadOnlyDictionary<string, int> Us10Anchors =
        new Dictionary<string, int>(StringComparer.Ordinal)
        {
            ["gMapFilesTable"] = 0x1188F0,
            ["gGroundMapConversionTable"] = 0x11BAF4,
            ["gMapScriptTable"] = 0x11E258,
            ["gGroundLivesTypeData"] = 0x11E63C,
            ["gFunctionScriptTable"] = 0x12F1F8,
        };

    private static readonly IReadOnlyDictionary<string, int> EmptyAnchors =
        new Dictionary<string, int>(StringComparer.Ordinal);

    public required string Id { get; init; }
    public required string Name { get; init; }
    public required string ExpectedSha1 { get; init; }
    public required int ExpectedSize { get; init; }
    public required IReadOnlyDictionary<string, int> Anchors { get; init; }
    public required int MapCount { get; init; }
    public required int MapFileCount { get; init; }
    public required int FunctionScriptCount { get; init; }
    public string GameCode { get; init; } = "";
    public bool AllowWrites { get; init; }
    public bool LayoutVerified { get; init; }

    public int this[string name] => Anchors[name];

    public bool Matches(RomImage rom) => Matches(rom.Sha1, rom.Length);

    public bool Matches(string sha1, int length) =>
        length == ExpectedSize &&
        string.Equals(sha1, ExpectedSha1, StringComparison.OrdinalIgnoreCase);

    public static RomProfile Us10 { get; } = new()
    {
        Id = "us10",
        Name = "PMD Red Rescue Team US 1.0",
        GameCode = "B24E",
        ExpectedSha1 = RomImage.ExpectedRetailSha1,
        ExpectedSize = RomImage.ExpectedRetailSize,
        AllowWrites = true,
        LayoutVerified = true,
        MapCount = 230,
        MapFileCount = 246,
        FunctionScriptCount = 407,
        Anchors = Us10Anchors,
    };

    public static RomProfile Eu10 { get; } = BrowseOnly(
        id: "eu10",
        name: "PMD Red Rescue Team EU",
        gameCode: "B24P",
        sha1: Eu10Sha1);

    public static RomProfile Jp10 { get; } = BrowseOnly(
        id: "jp10",
        name: "PMD Red Rescue Team JP",
        gameCode: "B24J",
        sha1: Jp10Sha1);

    public static RomProfile BlueUs { get; } = BrowseOnly(
        id: "blue-us",
        name: "PMD Blue Rescue Team US",
        gameCode: "APHE",
        sha1: BlueUsSha1);

    public static IReadOnlyList<RomProfile> All { get; } = [Us10, Eu10, Jp10, BlueUs];

    public static RomProfile? TryMatch(RomImage rom) => TryMatch(rom.Sha1, rom.Length);

    public static RomProfile? TryMatch(string sha1, int length)
    {
        foreach (var profile in All)
        {
            if (profile.Matches(sha1, length))
                return profile;
        }

        return null;
    }

    public static RomProfile RequireWritable(RomImage rom)
    {
        var profile = TryMatch(rom)
            ?? throw new InvalidOperationException(
                "ROM writes require the known US 1.0 baserom. Open a matching retail image or use browse-only mode.");
        return RequireWritable(profile);
    }

    public static RomProfile RequireWritable(RomProfile profile)
    {
        if (!profile.AllowWrites)
            throw new InvalidOperationException(
                $"Profile '{profile.Name}' is browse-only until its layout is verified.");
        return profile;
    }

    private static RomProfile BrowseOnly(string id, string name, string gameCode, string sha1) => new()
    {
        Id = id,
        Name = name,
        GameCode = gameCode,
        ExpectedSha1 = sha1,
        ExpectedSize = RomImage.ExpectedRetailSize,
        AllowWrites = false,
        LayoutVerified = false,
        MapCount = 0,
        MapFileCount = 0,
        FunctionScriptCount = 0,
        Anchors = EmptyAnchors,
    };
}
