using System.Text;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ModPackageTests
{
    [Fact]
    public void CollectIncludesRuntimeConfigFieldsAndRomOverlays()
    {
        var (working, project, database, config) = CreateEditedToy();

        var package = ModPackage.Collect(working, project, database, config);

        Assert.Equal(ModPackage.Kind, package.Kind);
        Assert.Equal(working.Source.Sha1, package.BaseRomSha1);
        Assert.Contains(package.RuntimeConfig, field => field.Id == "always_run" && field.Value == 1);
        Assert.Contains(package.Overlays, overlay =>
            overlay.Offset == 0x180 && overlay.Data.AsSpan().SequenceEqual(new byte[] { 0x11, 0x22 }));
        Assert.Contains(package.Edits, edit => edit.Kind == "script.source");
    }

    [Fact]
    public void FolderAndArchiveRoundTripRestoresEditsOnFreshBaserom()
    {
        var (working, project, database, config) = CreateEditedToy();
        var package = ModPackage.Collect(working, project, database, config);
        var root = Path.Combine(Path.GetTempPath(), $"rtmod-{Guid.NewGuid():N}");
        Directory.CreateDirectory(root);
        try
        {
            var folder = Path.Combine(root, "folder");
            var archive = Path.Combine(root, "pack.rtmod");
            ModPackage.ExportFolder(package, folder);
            ModPackage.ExportArchive(package, archive);

            Assert.True(File.Exists(Path.Combine(folder, ModPackage.ManifestFileName)));

            foreach (var loaded in new[] { ModPackage.Load(folder), ModPackage.Load(archive) })
            {
                var fresh = RecreateToy(working.Source);
                var result = ModPackage.Apply(loaded, fresh.Working, fresh.Project, fresh.Database, fresh.Config);

                Assert.True(result.Success, string.Join("; ", result.Errors));
                Assert.Equal(1, fresh.Config.Get("always_run"));
                Assert.Equal(0x11, fresh.Working.View.ReadByte(0x180));
                Assert.Equal(0x22, fresh.Working.View.ReadByte(0x181));
                Assert.Equal("Yo", fresh.Database.DialogueByOffset[0x20].Text);
                var commands = fresh.Database.Scenes[0].Groups[0].Sectors[0].Stations[0].Commands;
                Assert.Equal(0x34, commands[0].Op);
                Assert.Equal(0xDB, commands[1].Op);
                Assert.Equal(8, commands[1].ArgShort);
            }
        }
        finally
        {
            Directory.Delete(root, recursive: true);
        }
    }

    [Fact]
    public void ApplyRejectsMismatchedBaseromSha1()
    {
        var (working, project, database, config) = CreateEditedToy();
        var package = ModPackage.Collect(working, project, database, config);
        var other = RomImage.FromBytes("/tmp/rtmod-other.gba", new byte[0x200]);
        var fresh = new WorkingRom(other);

        var error = Assert.Throws<InvalidDataException>(() =>
            ModPackage.Apply(package, fresh, new ProjectDocument(), new SceneDatabase(), config));
        Assert.Contains("SHA-1", error.Message, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void CollectSkipsUnchangedRuntimeConfigAndEmptyOverlays()
    {
        var source = CreateToyBytes();
        var rom = RomImage.FromBytes("/tmp/rtmod-empty.gba", source);
        var working = new WorkingRom(rom);
        var project = ProjectDocument.Create(rom, RomProfile.Us10);
        var database = new SceneDatabase { Profile = RomProfile.Us10 };
        var config = RuntimeConfigState.CreateStandalone();

        var package = ModPackage.Collect(working, project, database, config);

        Assert.Empty(package.Overlays);
        Assert.Empty(package.RuntimeConfig);
        Assert.Empty(package.Edits);
    }

    private static (WorkingRom Working, ProjectDocument Project, SceneDatabase Database, RuntimeConfigState Config)
        CreateEditedToy()
    {
        var (working, project, database, config, scene) = RecreateToy(
            RomImage.FromBytes("/tmp/rtmod-toy.gba", CreateToyBytes()));
        var changes = new ChangeService();
        changes.Attach(project, database);
        var script = """
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Yo")
            WAIT(8)
            RET()
            """;
        SceneEditing.ApplySceneScriptSource(
            changes, scene, SceneScriptSource.Parse(script, database.DialogueByOffset), database, script);
        RuntimeConfigEditing.SetField(changes, config, "always_run", 1);
        working.Overlay(0x180, new byte[] { 0x11, 0x22 });
        working.Sync(database, runtimeConfig: config);
        return (working, project, database, config);
    }

    private static (WorkingRom Working, ProjectDocument Project, SceneDatabase Database, RuntimeConfigState Config, Scene Scene)
        RecreateToy(RomImage source)
    {
        var working = new WorkingRom(source);
        var project = ProjectDocument.Create(source, RomProfile.Us10);
        var (scene, database) = CreateSceneGraph();
        var config = RuntimeConfigState.CreateStandalone();
        return (working, project, database, config, scene);
    }

    private static (Scene Scene, SceneDatabase Database) CreateSceneGraph()
    {
        var dialogue = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };
        var wait = new ScriptCommandData { Op = 0xDB, ArgShort = 8, RomOffset = 0x50 };
        var ret = new ScriptCommandData { Op = 0xEF, RomOffset = 0x60 };
        var station = new ScriptRefData
        {
            Name = "EVENT_TEST",
            ScriptOffset = 0x40,
            ScriptCapacity = ScriptCodec.Encode([dialogue, wait, ret]).Length,
            RomOffset = 0x10,
        };
        station.Commands.AddRange([dialogue, wait, ret]);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        var database = new SceneDatabase { Profile = RomProfile.Us10 };
        database.Scenes.Add(scene);
        database.DialogueByOffset[0x20] = new DialogueString
        {
            Offset = 0x20,
            Size = 2,
            Text = "Hi",
        };
        return (scene, database);
    }

    private static byte[] CreateToyBytes()
    {
        var bytes = new byte[0x200];
        Array.Fill(bytes, (byte)0xFF, 0x180, 0x80);
        Encoding.ASCII.GetBytes("Hi").CopyTo(bytes, 0x20);
        bytes[0x22] = 0;
        var dialogue = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };
        var wait = new ScriptCommandData { Op = 0xDB, ArgShort = 8, RomOffset = 0x50 };
        var ret = new ScriptCommandData { Op = 0xEF, RomOffset = 0x60 };
        ScriptCodec.Encode([dialogue, wait, ret]).CopyTo(bytes, 0x40);
        return bytes;
    }
}
