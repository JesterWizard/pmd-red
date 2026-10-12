namespace RescueEditor.Core;

/// <summary>
/// Human-readable report of <see cref="RomLayoutProbe"/> and <see cref="RomLayoutValidator"/> results for a ROM,
/// ending with a ready-to-paste <see cref="RomProfile"/> snippet when the layout probes completely and validates sane.
/// Read-only: never writes the ROM or any profile.
/// </summary>
public static class RomLayoutReport
{
    private const int GameCodeOffset = 0xAC;
    private const int GameCodeLength = 4;

    private static readonly string[] AnchorNames =
    [
        "gMapFilesTable",
        "gGroundMapConversionTable",
        "gMapScriptTable",
        "gGroundLivesTypeData",
        "gFunctionScriptTable",
    ];

    /// <summary>Probes the ROM, validates a candidate profile when the probe is complete, and formats the report.</summary>
    public static string Build(RomImage rom)
    {
        ArgumentNullException.ThrowIfNull(rom);

        var probe = RomLayoutProbe.Probe(rom);
        RomLayoutValidation? validation = null;
        if (probe.Complete)
        {
            var candidate = probe.ToCandidateProfile(rom, "candidate", "Candidate", ReadGameCode(rom));
            validation = RomLayoutValidator.Validate(rom, candidate);
        }

        return Format(rom, probe, validation);
    }

    public static string Format(RomImage rom, RomLayoutProbeResult probe, RomLayoutValidation? validation)
    {
        ArgumentNullException.ThrowIfNull(rom);
        ArgumentNullException.ThrowIfNull(probe);

        var lines = new List<string>
        {
            $"ROM: {rom.Path}",
            $"Game code: {ReadGameCode(rom)}  SHA-1: {rom.Sha1}  Size: 0x{rom.Length:X}",
            FormatKnownProfile(rom),
            $"Probe: {(probe.Complete ? "complete" : "incomplete")}",
        };

        foreach (var name in AnchorNames)
        {
            lines.Add(probe.Anchors.TryGetValue(name, out var offset)
                ? $"  {name} = 0x{offset:X}"
                : $"  {name} = not found");
        }

        lines.Add(
            $"  MapCount = {probe.MapCount}, MapFileCount = {probe.MapFileCount}, " +
            $"FunctionScriptCount = {probe.FunctionScriptCount}, MapScriptHeaderCount = {probe.MapScriptHeaderCount}");

        foreach (var problem in probe.Problems)
            lines.Add($"  Problem: {problem}");

        if (validation is null)
        {
            lines.Add(probe.Complete ? "Validation: skipped" : "Validation: skipped (probe incomplete)");
        }
        else
        {
            lines.Add($"Validation: {(validation.IsSane ? "sane" : "NOT sane")}");
            foreach (var error in validation.Errors)
                lines.Add($"  Error: {error}");
            foreach (var warning in validation.Warnings)
                lines.Add($"  Warning: {warning}");
            foreach (var sample in validation.Samples)
                lines.Add($"  Sample: {sample}");
        }

        if (probe.Complete && validation is { IsSane: true })
            AppendSnippet(lines, probe);

        return string.Join("\n", lines);
    }

    /// <summary>
    /// Returns the GBA header game code at 0xAC: up to 4 bytes, stopping at the first NUL, with any byte outside
    /// printable ASCII shown as '?'. Returns "" when the ROM is too small.
    /// </summary>
    public static string ReadGameCode(RomImage rom)
    {
        ArgumentNullException.ThrowIfNull(rom);
        if (!rom.IsRangeValid(GameCodeOffset, GameCodeLength))
            return "";

        var bytes = rom.Slice(GameCodeOffset, GameCodeLength);
        var nul = bytes.IndexOf((byte)0);
        if (nul >= 0)
            bytes = bytes[..nul];

        var chars = new char[bytes.Length];
        for (var i = 0; i < bytes.Length; i++)
            chars[i] = bytes[i] is >= 0x20 and <= 0x7E ? (char)bytes[i] : '?';
        return new string(chars);
    }

    private static string FormatKnownProfile(RomImage rom)
    {
        var profile = RomProfile.TryMatch(rom);
        if (profile is null)
            return "Known profile: none";

        var status = profile.LayoutVerified ? "verified" : "browse-only";
        return $"Known profile: {profile.Name} ({profile.Id}, {status})";
    }

    private static void AppendSnippet(List<string> lines, RomLayoutProbeResult probe)
    {
        lines.Add("RomProfile snippet:");
        lines.Add($"        MapCount = {probe.MapCount},");
        lines.Add($"        MapFileCount = {probe.MapFileCount},");
        lines.Add($"        FunctionScriptCount = {probe.FunctionScriptCount},");
        lines.Add("        Anchors = new Dictionary<string, int>(StringComparer.Ordinal)");
        lines.Add("        {");
        foreach (var name in AnchorNames)
            lines.Add($"            [\"{name}\"] = 0x{probe.Anchors[name]:X},");
        lines.Add("        },");
    }
}
