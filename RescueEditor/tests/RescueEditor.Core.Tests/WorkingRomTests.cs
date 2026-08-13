using System.Text;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class WorkingRomTests
{
    [Fact]
    public void ApplyThenSyncPatchesDialogueWithoutWritingSourceFile()
    {
        var path = Path.Combine(Path.GetTempPath(), $"working-rom-{Guid.NewGuid():N}.gba");
        var (source, scene, database) = CreateToy(path);
        var working = new WorkingRom(source);
        var changes = new ChangeService();
        var script = """
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Yo")
            WAIT(8)
            RET()
            """;

        SceneEditing.ApplySceneScriptSource(
            changes, scene, SceneScriptSource.Parse(script, database.DialogueByOffset), database, script);
        var report = working.Sync(database);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.False(File.Exists(path));
        Assert.Equal(source.Sha1, RomImage.FromBytes(path, source.Bytes.ToArray()).Sha1);
        Assert.Equal("Yo", Encoding.ASCII.GetString(working.View.Copy(0x20, 2)));
        Assert.NotEqual(source.Sha1, working.View.Sha1);
        Assert.True(database.DialogueByOffset[0x20].Dirty);
    }

    [Fact]
    public void CommentedCommandIsOmittedFromWorkingRomScript()
    {
        var (source, scene, database) = CreateToy("/tmp/working-rom-comments.gba");
        var working = new WorkingRom(source);
        var changes = new ChangeService();
        var script = """
            @station g0/s0 EVENT_TEST
            # DIALOGUE(2, "Hi")
            WAIT(8)
            RET()
            """;

        SceneEditing.ApplySceneScriptSource(changes, scene, SceneScriptSource.Parse(script), database, script);
        working.Sync(database);

        var commands = ScriptCodec.ReadScript(working.View, 0x40);
        Assert.Equal(0xDB, commands[0].Op);
        Assert.Equal(8, commands[0].ArgShort);
        Assert.Equal(0xEF, commands[1].Op);
        Assert.DoesNotContain(commands, command => command.Op == 0x34);
    }

    [Fact]
    public void AssembleLongerScriptRelocatesAndRoundTripsThroughWorkingRom()
    {
        var bytes = new byte[0x12000];
        Array.Fill(bytes, (byte)0xFF, 0x10000, 0x2000);
        Encoding.ASCII.GetBytes("Hi").CopyTo(bytes, 0x20);
        bytes[0x22] = 0;

        var dialogue = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = RomPointer.FromOffset(0x20).Value,
            RomOffset = 0x40,
        };
        var ret = new ScriptCommandData { Op = 0xEF, RomOffset = 0x50 };
        var encoded = ScriptCodec.Encode([dialogue, ret]);
        encoded.CopyTo(bytes, 0x40);
        bytes[0x10] = 0;
        bytes[0x11] = 0;
        BitConverter.GetBytes(RomPointer.FromOffset(0x40).Value).CopyTo(bytes, 0x18);

        var source = RomImage.FromBytes("/tmp/working-rom-relocate.gba", bytes);
        var station = new ScriptRefData
        {
            Name = "EVENT_TEST",
            ScriptOffset = 0x40,
            ScriptCapacity = encoded.Length,
            RomOffset = 0x10,
        };
        station.Commands.AddRange([dialogue, ret]);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        database.DialogueByOffset[0x20] = new DialogueString { Offset = 0x20, Size = 2, Text = "Hi" };

        var working = new WorkingRom(source);
        var changes = new ChangeService();
        var script = """
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Hi")
            WAIT(8)
            WAIT(16)
            RET()
            """;

        SceneEditing.ApplySceneScriptSource(
            changes, scene, SceneScriptSource.Parse(script, database.DialogueByOffset), database, script);
        var report = working.Sync(database);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.True(station.ScriptOffset >= 0x10000, $"expected relocate, got 0x{station.ScriptOffset:X}");
        Assert.Equal(station.ScriptOffset, working.View.ReadPointerOffset(0x18));

        var commands = ScriptCodec.ReadScript(working.View, station.ScriptOffset);
        Assert.Equal([0x34, 0xDB, 0xDB, 0xEF], commands.Select(c => (int)c.Op).ToArray());
        Assert.Equal(8, commands[1].ArgShort);
        Assert.Equal(16, commands[2].ArgShort);
        Assert.Equal(source.Sha1, RomImage.FromBytes(source.Path, source.Bytes.ToArray()).Sha1);
    }

    [Fact]
    public void UndoRestoresWorkingRomDialogue()
    {
        var (source, scene, database) = CreateToy("/tmp/working-rom-undo.gba");
        var working = new WorkingRom(source);
        var changes = new ChangeService();
        var script = """
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Yo")
            WAIT(8)
            RET()
            """;

        SceneEditing.ApplySceneScriptSource(
            changes, scene, SceneScriptSource.Parse(script, database.DialogueByOffset), database, script);
        working.Sync(database);
        changes.Undo();
        working.Sync(database);

        Assert.Equal("Hi", Encoding.ASCII.GetString(working.View.Copy(0x20, 2)));
    }

    [Fact]
    public void OverlaySurvivesSceneSync()
    {
        var (source, _, database) = CreateToy("/tmp/working-rom-overlay.gba");
        var working = new WorkingRom(source);
        working.Overlay(0x180, new byte[] { 0x11, 0x22 });
        working.Sync(database);
        Assert.Equal(0x11, working.View.ReadByte(0x180));
        Assert.Equal(0x22, working.View.ReadByte(0x181));
    }

    private static (RomImage Source, Scene Scene, SceneDatabase Database) CreateToy(string path)
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
        var encoded = ScriptCodec.Encode([dialogue, wait, ret]);
        encoded.CopyTo(bytes, 0x40);

        var source = RomImage.FromBytes(path, bytes);
        var station = new ScriptRefData
        {
            Name = "EVENT_TEST",
            ScriptOffset = 0x40,
            ScriptCapacity = encoded.Length,
            RomOffset = 0x10,
        };
        station.Commands.AddRange([dialogue, wait, ret]);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        database.DialogueByOffset[0x20] = new DialogueString
        {
            Offset = 0x20,
            Size = 2,
            Text = "Hi",
        };
        return (source, scene, database);
    }
}
