using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RomLayoutValidatorTests
{
    [Fact]
    public void ValidatorAcceptsProbedUsLayout()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var candidate = ProbedCandidate(rom);
        var v = RomLayoutValidator.Validate(rom, candidate);

        Assert.True(v.IsSane, string.Join("; ", v.Errors));
        Assert.True(v.SceneCount >= 228, $"SceneCount {v.SceneCount} < 228");
        Assert.Equal(407, v.FunctionScriptCount);
        Assert.DoesNotContain(v.Warnings, warning => warning.Contains("differs from US retail", StringComparison.Ordinal));
        Assert.NotEmpty(v.Samples);
    }

    [Fact]
    public void ValidatorRejectsWrongMapScriptAnchor()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var probed = ProbedCandidate(rom);
        var anchors = new Dictionary<string, int>(probed.Anchors, StringComparer.Ordinal)
        {
            ["gMapScriptTable"] = probed.Anchors["gMapFilesTable"],
        };
        var broken = new RomProfile
        {
            Id = probed.Id,
            Name = probed.Name,
            GameCode = probed.GameCode,
            ExpectedSha1 = probed.ExpectedSha1,
            ExpectedSize = probed.ExpectedSize,
            Anchors = anchors,
            MapCount = probed.MapCount,
            MapFileCount = probed.MapFileCount,
            FunctionScriptCount = probed.FunctionScriptCount,
            AllowWrites = false,
            LayoutVerified = true,
        };

        var v = RomLayoutValidator.Validate(rom, broken);

        Assert.False(v.IsSane);
    }

    [Fact]
    public void ValidatorRejectsUnverifiedProfile()
    {
        var rom = RomImage.FromBytes("eu.gba", new byte[64]);

        var v = RomLayoutValidator.Validate(rom, RomProfile.Eu10);

        Assert.False(v.IsSane);
        Assert.Contains(v.Errors, error => error.Contains("LayoutVerified", StringComparison.Ordinal));
    }

    [Fact]
    public void ValidatorDoesNotThrowOnBlankRom()
    {
        var rom = RomImage.FromBytes("blank.gba", new byte[0x10000]);
        var anchors = new Dictionary<string, int>(StringComparer.Ordinal)
        {
            ["gMapFilesTable"] = 0x100,
            ["gGroundMapConversionTable"] = 0x100,
            ["gMapScriptTable"] = 0x100,
            ["gGroundLivesTypeData"] = 0x100,
            ["gFunctionScriptTable"] = 0x100,
        };
        var candidate = new RomProfile
        {
            Id = "blank",
            Name = "Blank",
            ExpectedSha1 = rom.Sha1,
            ExpectedSize = rom.Length,
            Anchors = anchors,
            MapCount = 10,
            MapFileCount = 10,
            FunctionScriptCount = 10,
            AllowWrites = false,
            LayoutVerified = true,
        };

        var v = RomLayoutValidator.Validate(rom, candidate);

        Assert.False(v.IsSane);
    }

    private static RomProfile ProbedCandidate(RomImage rom) =>
        RomLayoutProbe.Probe(rom).ToCandidateProfile(rom, "probe-us", "Probe US", "B24E");

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
