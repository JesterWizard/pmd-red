using System.Text;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EmulatorPlaytestTests
{
    [Fact]
    public void PlaytestRomPathSitsNextToBuiltRom()
    {
        var dir = Path.Combine(Path.GetTempPath(), "rt-playtest");
        var built = Path.Combine(dir, "mod.edited.gba");
        Assert.Equal(Path.Combine(dir, "mod.edited.playtest.gba"), EmulatorPlaytest.PlaytestRomPath(built));
    }

    [Fact]
    public void WindowsCandidatesUseProgramFilesAndLocalAppData()
    {
        var env = new Dictionary<string, string>
        {
            ["ProgramFiles"] = @"C:\Program Files",
            ["LOCALAPPDATA"] = @"C:\Users\me\AppData\Local",
        };
        var candidates = EmulatorPlaytest.DefaultEmulatorCandidates(
            isWindows: true, isMacOs: false, name => env.GetValueOrDefault(name));
        Assert.Equal(
            new[] { @"C:\Program Files\mGBA\mGBA.exe", @"C:\Users\me\AppData\Local\Programs\mGBA\mGBA.exe" },
            candidates);
    }

    [Fact]
    public void LinuxCandidatesIncludeMgbaQt()
    {
        var candidates = EmulatorPlaytest.DefaultEmulatorCandidates(isWindows: false, isMacOs: false, _ => null);
        Assert.Contains("/usr/bin/mgba-qt", candidates);
    }

    [Fact]
    public void ConfiguredEmulatorWinsOverCandidates()
    {
        var result = EmulatorPlaytest.ResolveEmulator("/opt/my/mgba", ["/usr/bin/mgba-qt"], _ => true);
        Assert.True(result.Success);
        Assert.Equal("/opt/my/mgba", result.Path);
    }

    [Fact]
    public void MissingConfiguredEmulatorIsReportedByPath()
    {
        var result = EmulatorPlaytest.ResolveEmulator("/opt/gone/mgba", ["/usr/bin/mgba-qt"], path => path == "/usr/bin/mgba-qt");
        Assert.False(result.Success);
        Assert.Contains("/opt/gone/mgba", result.Error);
        Assert.Contains("Set Emulator", result.Error);
    }

    [Fact]
    public void FallsBackToFirstExistingCandidate()
    {
        var result = EmulatorPlaytest.ResolveEmulator(null, ["/a/mgba", "/b/mgba", "/c/mgba"], path => path != "/a/mgba");
        Assert.True(result.Success);
        Assert.Equal("/b/mgba", result.Path);
    }

    [Fact]
    public void NoEmulatorFoundExplainsHowToFixIt()
    {
        var result = EmulatorPlaytest.ResolveEmulator("  ", ["/usr/bin/mgba-qt"], _ => false);
        Assert.False(result.Success);
        Assert.Contains("mGBA", result.Error);
        Assert.Contains(EmulatorPlaytest.MgbaDownloadUrl, result.Error);
        Assert.Contains("Set Emulator", result.Error);
        Assert.Contains("/usr/bin/mgba-qt", result.Error);
    }

    [Fact]
    public void PrepareCopyWithoutBuildAsksForBuildRom()
    {
        var result = EmulatorPlaytest.PrepareCopy(null);
        Assert.False(result.Success);
        Assert.Contains("Build ROM", result.Error);
    }

    [Fact]
    public void PrepareCopyReportsMissingBuiltRom()
    {
        var missing = Path.Combine(Path.GetTempPath(), $"rt-missing-{Guid.NewGuid():N}", "mod.gba");
        var result = EmulatorPlaytest.PrepareCopy(missing);
        Assert.False(result.Success);
        Assert.Contains(missing, result.Error);
    }

    [Fact]
    public void PrepareCopyRefreshesRomAndSeedsSaveOnlyOnce()
    {
        var dir = Path.Combine(Path.GetTempPath(), $"rt-playtest-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            var built = Path.Combine(dir, "mod.edited.gba");
            File.WriteAllBytes(built, [1, 2, 3]);
            File.WriteAllBytes(Path.Combine(dir, "mod.edited.sav"), [9]);

            var first = EmulatorPlaytest.PrepareCopy(built);
            Assert.True(first.Success, first.Error);
            Assert.Equal(EmulatorPlaytest.PlaytestRomPath(built), first.RomPath);
            Assert.Equal(new byte[] { 1, 2, 3 }, File.ReadAllBytes(first.RomPath!));
            var playtestSave = Path.Combine(dir, "mod.edited.playtest.sav");
            Assert.Equal(new byte[] { 9 }, File.ReadAllBytes(playtestSave));

            // Rebuild: ROM copy refreshes, the playtest save keeps its own progress.
            File.WriteAllBytes(playtestSave, [7]);
            File.WriteAllBytes(built, [4, 5]);
            var second = EmulatorPlaytest.PrepareCopy(built);
            Assert.True(second.Success, second.Error);
            Assert.Equal(new byte[] { 4, 5 }, File.ReadAllBytes(second.RomPath!));
            Assert.Equal(new byte[] { 7 }, File.ReadAllBytes(playtestSave));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void StartInfoPassesRomAsOneArgument()
    {
        var rom = Path.Combine(Path.GetTempPath(), "my mods", "mod.playtest.gba");
        var info = EmulatorPlaytest.CreateStartInfo("/usr/bin/mgba-qt", rom);
        Assert.Equal("/usr/bin/mgba-qt", info.FileName);
        Assert.False(info.UseShellExecute);
        Assert.Equal(new[] { rom }, info.ArgumentList);
        Assert.Equal(Path.GetDirectoryName(rom), info.WorkingDirectory);
    }
}
