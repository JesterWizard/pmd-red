namespace RescueEditor.Core;

/// <summary>
/// Outcome of <see cref="RomLayoutValidator.Validate"/>. Errors block a layout from being marked verified;
/// warnings are informational (for example, a region with different table counts than US retail).
/// </summary>
public sealed class RomLayoutValidation
{
    public List<string> Errors { get; } = new();
    public List<string> Warnings { get; } = new();
    public List<string> Samples { get; } = new();
    public int SceneCount { get; set; }
    public int FunctionScriptCount { get; set; }
    public bool IsSane => Errors.Count == 0;
}

/// <summary>
/// Sanity-checks a candidate <see cref="RomProfile"/> against a ROM by parsing its scene graph read-only,
/// so a probed EU/JP layout can be judged before it is marked verified. Garbage input is reported
/// through <see cref="RomLayoutValidation.Errors"/> rather than thrown.
/// </summary>
public static class RomLayoutValidator
{
    public const int UsRetailMapCount = 229;
    public const int UsRetailMapFileCount = 245;
    public const int UsRetailFunctionScriptCount = 407;

    private const int MaxMapFileErrors = 10;
    private const int SampleLeadingSceneCount = 3;

    private static readonly string[] AnchorNames =
    [
        "gMapFilesTable",
        "gGroundMapConversionTable",
        "gMapScriptTable",
        "gGroundLivesTypeData",
        "gFunctionScriptTable",
    ];

    public static RomLayoutValidation Validate(RomImage rom, RomProfile candidate)
    {
        ArgumentNullException.ThrowIfNull(rom);
        ArgumentNullException.ThrowIfNull(candidate);
        var result = new RomLayoutValidation();

        if (!candidate.LayoutVerified)
        {
            result.Errors.Add("candidate profile must be LayoutVerified to parse");
            return result;
        }

        var anchorProblems = false;
        foreach (var name in AnchorNames)
        {
            if (!candidate.Anchors.TryGetValue(name, out var offset))
            {
                result.Errors.Add($"anchor {name} is missing from the candidate profile");
                anchorProblems = true;
            }
            else if (!rom.IsRangeValid(offset, sizeof(uint)))
            {
                result.Errors.Add($"anchor {name} at 0x{offset:X} is outside the ROM");
                anchorProblems = true;
            }
        }

        if (anchorProblems)
            return result;

        SceneDatabase database;
        try
        {
            database = SceneGraphParser.Parse(rom, candidate, parallel: false);
        }
        catch (Exception exception) when (exception is InvalidDataException or ArgumentOutOfRangeException or IndexOutOfRangeException)
        {
            result.Errors.Add($"scene parse failed: {exception.Message}");
            return result;
        }

        result.SceneCount = database.Scenes.Count;
        result.FunctionScriptCount = database.FunctionScripts.Count;

        foreach (var diagnostic in database.Diagnostics)
        {
            if (diagnostic.Contains("has no script header", StringComparison.Ordinal))
                result.Warnings.Add(diagnostic);
            else if (diagnostic.Contains("does not match profile", StringComparison.Ordinal))
                continue;
            else
                result.Errors.Add(diagnostic);
        }

        var mapFileErrors = 0;
        foreach (var map in database.Maps)
        {
            if (map.MapFileTableId >= -1 && map.MapFileTableId < candidate.MapFileCount)
                continue;

            if (mapFileErrors == MaxMapFileErrors)
            {
                result.Errors.Add("... more");
                break;
            }

            mapFileErrors++;
            result.Errors.Add(
                $"Map {map.MapId}: map file id {map.MapFileTableId} out of range 0..{candidate.MapFileCount - 1}");
        }

        if (result.SceneCount < candidate.MapCount - 1)
            result.Errors.Add($"{result.SceneCount} scenes parsed, expected at least {candidate.MapCount - 1}");

        if (result.FunctionScriptCount != candidate.FunctionScriptCount)
            result.Errors.Add(
                $"{result.FunctionScriptCount} function scripts parsed, expected {candidate.FunctionScriptCount}");

        var emptyNames = database.FunctionScripts.Count(script => string.IsNullOrEmpty(script.Name));
        if (emptyNames > 0)
            result.Errors.Add($"{emptyNames} function script(s) have an empty name");

        if (candidate.MapCount != UsRetailMapCount)
            result.Warnings.Add($"MapCount {candidate.MapCount} differs from US retail {UsRetailMapCount}");
        if (candidate.MapFileCount != UsRetailMapFileCount)
            result.Warnings.Add($"MapFileCount {candidate.MapFileCount} differs from US retail {UsRetailMapFileCount}");
        if (candidate.FunctionScriptCount != UsRetailFunctionScriptCount)
            result.Warnings.Add(
                $"FunctionScriptCount {candidate.FunctionScriptCount} differs from US retail {UsRetailFunctionScriptCount}");

        var scenes = database.Scenes;
        for (var i = 0; i < scenes.Count; i++)
        {
            if (i < SampleLeadingSceneCount || i == scenes.Count - 1)
                result.Samples.Add(FormatSample(scenes[i]));
        }

        return result;
    }

    private static string FormatSample(Scene scene) =>
        $"Map {scene.MapId} {scene.Name}: header 0x{scene.HeaderOffset:X}, {scene.Groups.Count} groups";
}
