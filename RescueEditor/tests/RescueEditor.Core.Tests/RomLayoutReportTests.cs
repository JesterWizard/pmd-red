using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RomLayoutReportTests
{
    [Fact]
    public void BuildReportsSaneUsLayoutWithSnippet()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var text = RomLayoutReport.Build(rom);

        Assert.Contains("Game code: B24E", text);
        Assert.Contains("Known profile: PMD Red Rescue Team US 1.0 (us10, verified)", text);
        Assert.Contains("Probe: complete", text);
        Assert.Contains("gMapScriptTable = 0x11E258", text);
        Assert.Contains("Validation: sane", text);
        Assert.Contains("RomProfile snippet:", text);
        Assert.Contains("[\"gFunctionScriptTable\"] = 0x12F1F8,", text);
        Assert.Contains("MapCount = 229,", text);
    }

    [Fact]
    public void BuildOnBlankRomOmitsSnippet()
    {
        var rom = RomImage.FromBytes("blank.gba", new byte[0x10000]);
        var text = RomLayoutReport.Build(rom);

        Assert.Contains("Probe: incomplete", text);
        Assert.Contains("Validation: skipped", text);
        Assert.Contains("Known profile: none", text);
        Assert.DoesNotContain("RomProfile snippet", text);
        Assert.DoesNotContain('\0', text);
    }

    [Fact]
    public void ReadGameCodeHandlesTinyRom()
    {
        var rom = RomImage.FromBytes("tiny.gba", new byte[16]);

        Assert.Equal("", RomLayoutReport.ReadGameCode(rom));
    }

    [Fact]
    public void ReadGameCodeStopsAtNulAndMasksControlBytes()
    {
        var bytes = new byte[0x100];
        bytes[0xAC] = (byte)'B';
        bytes[0xAD] = 0x01;
        bytes[0xAE] = (byte)'X';
        bytes[0xAF] = 0x00;
        var rom = RomImage.FromBytes("code.gba", bytes);

        Assert.Equal("B?X", RomLayoutReport.ReadGameCode(rom));
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
