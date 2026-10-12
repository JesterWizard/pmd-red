using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RomLayoutProbeTests
{
    private static readonly string[] AnchorNames =
    [
        "gMapFilesTable",
        "gGroundMapConversionTable",
        "gMapScriptTable",
        "gGroundLivesTypeData",
        "gFunctionScriptTable",
    ];

    [Fact]
    public void ProbeFindsUsRetailAnchors()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var result = RomLayoutProbe.Probe(rom);

        Assert.True(result.Complete, string.Join("; ", result.Problems));
        foreach (var name in AnchorNames)
        {
            Assert.True(result.Anchors.ContainsKey(name), $"missing anchor {name}");
            Assert.Equal(RomProfile.Us10.Anchors[name], result.Anchors[name]);
        }

        Assert.Equal(5, result.Anchors.Count);
        Assert.Equal(229, result.MapCount);
        Assert.Equal(245, result.MapFileCount);
        Assert.Equal(407, result.FunctionScriptCount);
        Assert.Equal(229, result.MapScriptHeaderCount);
        Assert.Empty(result.Problems);
    }

    [Fact]
    public void ProbeReportsMissingTablesOnBlankRom()
    {
        var rom = RomImage.FromBytes("blank.gba", new byte[0x10000]);
        var result = RomLayoutProbe.Probe(rom);

        Assert.False(result.Complete);
        Assert.Empty(result.Anchors);
        Assert.NotEmpty(result.Problems);
    }

    [Fact]
    public void CandidateProfileUsesProbedAnchorsAndStaysBrowseOnly()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var result = RomLayoutProbe.Probe(rom);
        var p = result.ToCandidateProfile(rom, "probe", "Probe", "B24E");

        Assert.True(p.LayoutVerified);
        Assert.False(p.AllowWrites);
        Assert.Equal(rom.Sha1, p.ExpectedSha1);
        Assert.Equal(rom.Length, p.ExpectedSize);
        Assert.Equal(229, p.MapCount);
        Assert.Equal(245, p.MapFileCount);
        Assert.Equal(407, p.FunctionScriptCount);
        foreach (var name in AnchorNames)
            Assert.Equal(RomProfile.Us10.Anchors[name], p.Anchors[name]);
    }

    [Fact]
    public void ToCandidateProfileThrowsWhenIncomplete()
    {
        var rom = RomImage.FromBytes("blank.gba", new byte[0x10000]);
        var result = RomLayoutProbe.Probe(rom);

        Assert.Throws<InvalidOperationException>(() => result.ToCandidateProfile(rom, "probe", "Probe", "B24E"));
    }

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
