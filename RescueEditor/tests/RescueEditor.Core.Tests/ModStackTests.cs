using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ModStackTests
{
    [Fact]
    public void ApplyEnabledAppliesInOrderLaterModWins()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteMod(dir, "A", rom, (0x10, new byte[] { 1, 1 }));
            var b = WriteMod(dir, "B", rom, (0x11, new byte[] { 2 }));

            var working = new WorkingRom(rom);
            var result = ModStack.ApplyEnabled(new[] { Entry(a), Entry(b) }, working, database: null, runtimeConfig: null);

            Assert.Empty(result.Errors);
            Assert.Equal(1, working.View.ReadByte(0x10));
            Assert.Equal(2, working.View.ReadByte(0x11));
            Assert.Equal(new[] { "A", "B" }, result.Applied);

            var reversed = new WorkingRom(rom);
            var reversedResult = ModStack.ApplyEnabled(new[] { Entry(b), Entry(a) }, reversed, database: null, runtimeConfig: null);

            Assert.Empty(reversedResult.Errors);
            Assert.Equal(1, reversed.View.ReadByte(0x11));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void ApplyEnabledSkipsDisabledMods()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteMod(dir, "A", rom, (0x10, new byte[] { 1, 1 }));
            var working = new WorkingRom(rom);

            var result = ModStack.ApplyEnabled(new[] { Entry(a, enabled: false) }, working, database: null, runtimeConfig: null);

            Assert.Equal(0, working.View.ReadByte(0x10));
            Assert.Empty(result.Applied);
            Assert.Empty(result.Errors);
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void ApplyEnabledUsesModLayerNotUserPatches()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteMod(dir, "A", rom, (0x10, new byte[] { 1, 1 }));
            var working = new WorkingRom(rom);

            ModStack.ApplyEnabled(new[] { Entry(a) }, working, database: null, runtimeConfig: null);

            Assert.Equal(1, working.View.ReadByte(0x10));
            Assert.Empty(working.CaptureUserPatches());
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void ApplyEnabledReportsMissingFileAndContinues()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteMod(dir, "A", rom, (0x10, new byte[] { 1, 1 }));
            var working = new WorkingRom(rom);

            var result = ModStack.ApplyEnabled(
                new[] { Entry("/nonexistent/x.rtmod"), Entry(a) }, working, database: null, runtimeConfig: null);

            var error = Assert.Single(result.Errors);
            Assert.Contains("File not found", error, StringComparison.Ordinal);
            Assert.Equal(new[] { "A" }, result.Applied);
            Assert.Equal(1, working.View.ReadByte(0x10));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void InspectFlagsDifferentBaserom()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var foreign = WriteModPackage(
                dir, "Foreign", new string('0', 40), [(0x10, new byte[] { 1 })], [], []);

            var info = ModStack.Inspect(Entry(foreign), rom.Sha1);

            Assert.False(info.IsUsable);
            Assert.Contains("different baserom", info.Error ?? string.Empty, StringComparison.Ordinal);
            Assert.NotNull(info.Package);
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void FindConflictsReportsOverlappingRangesAndCPatchValues()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteModPackage(
                dir,
                "A",
                rom.Sha1,
                [(0x10, new byte[] { 1, 2, 3, 4 })],
                [new ModPackageRuntimeConfigField { Id = "always_run", Value = 1 }],
                []);
            var b = WriteModPackage(
                dir,
                "B",
                rom.Sha1,
                [(0x12, new byte[] { 9, 9, 9, 9 })],
                [new ModPackageRuntimeConfigField { Id = "always_run", Value = 0 }],
                []);
            var c = WriteMod(dir, "C", rom, (0x100, new byte[] { 5, 6 }));

            var infos = new[]
            {
                ModStack.Inspect(Entry(a), rom.Sha1),
                ModStack.Inspect(Entry(b), rom.Sha1),
                ModStack.Inspect(Entry(c), rom.Sha1),
            };
            Assert.All(infos, info => Assert.Null(info.Error));
            Assert.All(infos, info => Assert.True(info.IsUsable));

            var conflicts = ModStack.FindConflicts(infos);

            Assert.Equal(2, conflicts.Count);

            var romConflict = Assert.Single(
                conflicts, conflict => conflict.Detail.Contains("ROM range", StringComparison.Ordinal));
            Assert.Equal("A", romConflict.EarlierMod);
            Assert.Equal("B", romConflict.LaterMod);
            Assert.Contains("0x12", romConflict.Detail, StringComparison.Ordinal);

            var cPatchConflict = Assert.Single(
                conflicts, conflict => conflict.Detail.Contains("always_run", StringComparison.Ordinal));
            Assert.Equal("A", cPatchConflict.EarlierMod);
            Assert.Equal("B", cPatchConflict.LaterMod);

            Assert.DoesNotContain(
                conflicts, conflict => conflict.EarlierMod == "C" || conflict.LaterMod == "C");
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void FindConflictsReportsSameEditTarget()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            var a = WriteModPackage(
                dir,
                "A",
                rom.Sha1,
                [],
                [],
                [new ProjectEdit { Id = "edit-a", Kind = "script.source", Target = "g0/s0" }]);
            var b = WriteModPackage(
                dir,
                "B",
                rom.Sha1,
                [],
                [],
                [new ProjectEdit { Id = "edit-b", Kind = "script.source", Target = "g0/s0" }]);

            var infos = new[]
            {
                ModStack.Inspect(Entry(a), rom.Sha1),
                ModStack.Inspect(Entry(b), rom.Sha1),
            };

            var conflict = Assert.Single(ModStack.FindConflicts(infos));
            Assert.Equal("A", conflict.EarlierMod);
            Assert.Equal("B", conflict.LaterMod);
            Assert.Contains("script.source g0/s0", conflict.Detail, StringComparison.Ordinal);
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void ApplyRomPatchesWritesUserLayer()
    {
        var rom = ToyRom();
        var working = new WorkingRom(rom);

        var applied = ModStack.ApplyRomPatches(
            [
                new ProjectRomPatch { Offset = 0x30, Data = new byte[] { 7 } },
                new ProjectRomPatch { Offset = 0x1FF, Data = new byte[] { 1, 2 } },
            ],
            working);

        Assert.Equal(1, applied);
        Assert.Equal(7, working.View.ReadByte(0x30));
        var patch = Assert.Single(working.CaptureUserPatches());
        Assert.Equal(0x30, patch.Offset);
        Assert.Equal(new byte[] { 7 }, patch.Data);
    }

    [Fact]
    public void ApplyEnabledKeepsLoadingAfterModThrows()
    {
        var rom = ToyRom();
        var dir = NewTempDir();
        try
        {
            // An unparseable script.source edit makes ProjectEditApplier throw InvalidOperationException.
            var broken = WriteModPackage(
                dir,
                "Broken",
                rom.Sha1,
                [],
                [],
                [
                    new ProjectEdit
                    {
                        Id = "bad",
                        Kind = "script.source",
                        Target = "Toy",
                        Values =
                        {
                            ["mapId"] = "1",
                            ["source"] = "@station g0/s0 EVENT_TEST\nNOT_A_COMMAND(\nRET()\n",
                        },
                    },
                ]);
            var a = WriteMod(dir, "A", rom, (0x10, new byte[] { 1, 1 }));
            var database = new SceneDatabase { Profile = RomProfile.Us10 };
            database.Scenes.Add(new Scene { MapId = 1, Name = "Toy" });
            var working = new WorkingRom(rom);

            var result = ModStack.ApplyEnabled(
                new[] { Entry(broken), Entry(a) }, working, database, runtimeConfig: null);

            Assert.Contains(result.Errors, error => error.StartsWith("Broken: ", StringComparison.Ordinal));
            Assert.Equal(new[] { "A" }, result.Applied);
            Assert.Equal(1, working.View.ReadByte(0x10));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    private static RomImage ToyRom() => RomImage.FromBytes("/tmp/modstack-toy.gba", new byte[0x200]);

    private static string NewTempDir()
    {
        var dir = Path.Combine(Path.GetTempPath(), $"modstack-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        return dir;
    }

    private static ProjectModEntry Entry(string path, bool enabled = true) => new()
    {
        Path = path,
        Enabled = enabled,
    };

    private static string WriteMod(string dir, string name, RomImage rom, params (int Offset, byte[] Data)[] overlays) =>
        WriteModPackage(dir, name, rom.Sha1, overlays, [], []);

    private static string WriteModPackage(
        string dir,
        string name,
        string baseRomSha1,
        (int Offset, byte[] Data)[] overlays,
        ModPackageRuntimeConfigField[] runtimeConfig,
        ProjectEdit[] edits)
    {
        var document = new ModPackageDocument
        {
            Name = name,
            BaseRomSha1 = baseRomSha1,
        };
        foreach (var (offset, data) in overlays)
        {
            document.Overlays.Add(new ModPackageOverlay
            {
                Id = $"overlay:0x{offset:X}",
                Offset = offset,
                Size = data.Length,
                Data = data,
            });
        }

        document.RuntimeConfig.AddRange(runtimeConfig);
        document.Edits.AddRange(edits);

        var path = Path.Combine(dir, name + ".rtmod");
        ModPackage.ExportArchive(document, path);
        return path;
    }
}
