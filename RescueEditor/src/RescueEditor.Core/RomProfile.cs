namespace RescueEditor.Core;

/// <summary>Version-specific ROM layout anchors and validation for RescueTemple.</summary>
public sealed class RomProfile
{
    public required string Name { get; init; }
    public required string ExpectedSha1 { get; init; }
    public required int ExpectedSize { get; init; }
    public required IReadOnlyDictionary<string, int> Anchors { get; init; }
    public required int MapCount { get; init; }
    public required int MapFileCount { get; init; }
    public required int FunctionScriptCount { get; init; }
    public bool AllowWrites { get; init; }

    public int this[string name] => Anchors[name];

    public bool Matches(RomImage rom) =>
        rom.Length == ExpectedSize &&
        string.Equals(rom.Sha1, ExpectedSha1, StringComparison.OrdinalIgnoreCase);

    public static RomProfile Us10 { get; } = new()
    {
        Name = "PMD Red Rescue Team US 1.0",
        ExpectedSha1 = RomImage.ExpectedRetailSha1,
        ExpectedSize = RomImage.ExpectedRetailSize,
        AllowWrites = true,
        MapCount = 230,
        MapFileCount = 246,
        FunctionScriptCount = 407,
        Anchors = new Dictionary<string, int>(StringComparer.Ordinal)
        {
            ["gMapFilesTable"] = 0x1188F0,
            ["gGroundMapConversionTable"] = 0x11BAF4,
            ["gMapScriptTable"] = 0x11E258,
            ["gGroundLivesTypeData"] = 0x11E63C,
            ["gFunctionScriptTable"] = 0x12F1F8,
        },
    };

    public static RomProfile? TryMatch(RomImage rom) =>
        Us10.Matches(rom) ? Us10 : null;

    public static RomProfile RequireWritable(RomImage rom)
    {
        var profile = TryMatch(rom)
            ?? throw new InvalidOperationException(
                "ROM writes require the known US 1.0 baserom. Open a matching retail image or use browse-only mode.");
        if (!profile.AllowWrites)
            throw new InvalidOperationException($"Profile '{profile.Name}' does not allow writes.");
        return profile;
    }
}
