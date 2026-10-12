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

    [Fact]
    public void ModOverlaysApplyBeforeUserOverlaysAfterSync()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-modlayer.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        working.OverlayMod(0x10, new byte[] { 1, 2, 3 });
        working.Overlay(0x11, new byte[] { 9 });
        working.Sync(new SceneDatabase { Profile = RomProfile.Us10 });

        Assert.Equal(1, working.View.ReadByte(0x10));
        Assert.Equal(9, working.View.ReadByte(0x11));
        Assert.Equal(3, working.View.ReadByte(0x12));
    }

    [Fact]
    public void CaptureUserPatchesKeepsOnlyBytesThatDifferFromSeedAndMods()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-modlayer.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        working.OverlayMod(0x20, new byte[] { 5, 5 });
        working.Overlay(0x1F, new byte[] { 0, 5, 7, 8 });
        working.Overlay(0x40, new byte[] { 4 });

        var patches = working.CaptureUserPatches();

        Assert.Equal(2, patches.Count);
        Assert.Equal(0x21, patches[0].Offset);
        Assert.Equal(new byte[] { 7, 8 }, patches[0].Data);
        Assert.Equal(0x40, patches[1].Offset);
        Assert.Equal(new byte[] { 4 }, patches[1].Data);
    }

    [Fact]
    public void CaptureUserPatchesLaterOverlayWins()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-modlayer.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        working.Overlay(0x30, new byte[] { 1, 1 });
        working.Overlay(0x31, new byte[] { 2 });

        var patches = working.CaptureUserPatches();

        Assert.Single(patches);
        Assert.Equal(0x30, patches[0].Offset);
        Assert.Equal(new byte[] { 1, 2 }, patches[0].Data);
    }

    [Fact]
    public void UserEditVersionCountsUserEditsOnly()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-version.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var userEdits = 0;
        working.UserEdited += (_, _) => userEdits++;

        working.OverlayMod(0x10, new byte[] { 1 });
        Assert.Equal(0, working.UserEditVersion);
        Assert.Equal(0, userEdits);

        working.Overlay(0x20, new byte[] { 1 });
        Assert.Equal(1, working.UserEditVersion);
        Assert.Equal(1, userEdits);

        working.Sync(new SceneDatabase { Profile = RomProfile.Us10 });
        Assert.Equal(1, working.UserEditVersion);
        Assert.Equal(1, userEdits);

        working.Adopt(MutableRom.From(working.View));
        Assert.Equal(2, working.UserEditVersion);
        Assert.Equal(2, userEdits);
    }

    [Fact]
    public void ResizingAdoptSnapshotsEarlierUserPatches()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-snapshot.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        working.Overlay(0x20, new byte[] { 7 });
        var first = MutableRom.From(working.View);
        first.ExtendTo(0x200);
        working.Adopt(first);

        var snapshot = Assert.Single(working.PreResizePatches);
        Assert.Equal(0x20, snapshot.Offset);
        Assert.Equal(new byte[] { 7 }, snapshot.Data);

        working.Overlay(0x30, new byte[] { 8 });
        var second = MutableRom.From(working.View);
        second.ExtendTo(0x300);
        working.Adopt(second);

        var still = Assert.Single(working.PreResizePatches);
        Assert.Equal(0x20, still.Offset);
        Assert.Equal(new byte[] { 7 }, still.Data);
    }

    [Fact]
    public void AdoptSetsHasStructuralEdits()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-modlayer.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        Assert.False(working.HasStructuralEdits);
        var buffer = MutableRom.From(working.View);
        buffer.ExtendTo(0x200);
        working.Adopt(buffer);
        Assert.True(working.HasStructuralEdits);
    }

    [Fact]
    public void ResizingAdoptBumpsStructuralVersion()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-structural-version.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        Assert.Equal(0, working.StructuralVersion);
        var sameLength = working.BeginMutate();
        sameLength.WriteByte(0x10, 3);
        working.Adopt(sameLength);
        Assert.Equal(0, working.StructuralVersion);

        var resized = MutableRom.From(working.View);
        resized.ExtendTo(0x200);
        working.Adopt(resized);
        Assert.Equal(1, working.StructuralVersion);
    }

    [Fact]
    public void SameLengthAdoptKeepsModLayerAndIsCapturable()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-modlayer.gba", new byte[0x100]);
        var working = new WorkingRom(rom);

        working.OverlayMod(0x10, new byte[] { 5 });
        var buffer = working.BeginMutate();
        buffer.WriteByte(0x40, 9);
        working.Adopt(buffer);

        Assert.False(working.HasStructuralEdits);
        Assert.Equal(5, working.View.ReadByte(0x10));
        Assert.Equal(9, working.View.ReadByte(0x40));

        var patches = working.CaptureUserPatches();
        Assert.Single(patches);
        Assert.Equal(0x40, patches[0].Offset);
        Assert.Equal(new byte[] { 9 }, patches[0].Data);

        working.Sync(new SceneDatabase { Profile = RomProfile.Us10 });
        Assert.Equal(9, working.View.ReadByte(0x40));
    }

    [Fact]
    public void ProjectDocumentRoundTripsModsAndRomPatches()
    {
        var document = new ProjectDocument
        {
            Mods = { new ProjectModEntry { Path = "/x/a.rtmod", Name = "A", Enabled = false } },
            RomPatches = { new ProjectRomPatch { Offset = 0x40, Data = new byte[] { 1, 2 } } },
        };
        var path = Path.Combine(Path.GetTempPath(), $"proj-{Guid.NewGuid():N}.rtproj");
        try
        {
            document.Save(path);
            var loaded = ProjectDocument.Load(path);

            Assert.Single(loaded.Mods);
            Assert.Equal("/x/a.rtmod", loaded.Mods[0].Path);
            Assert.Equal("A", loaded.Mods[0].Name);
            Assert.False(loaded.Mods[0].Enabled);
            Assert.Single(loaded.RomPatches);
            Assert.Equal(0x40, loaded.RomPatches[0].Offset);
            Assert.Equal(new byte[] { 1, 2 }, loaded.RomPatches[0].Data);
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }

    [Fact]
    public void OverlayReportsBeforeAndAfterBytes()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        working.Overlay(0x10, new byte[] { 1, 2 });

        var raised = Assert.Single(events);
        var change = Assert.Single(raised.Changes);
        Assert.Equal(0x10, change.Offset);
        Assert.Equal(new byte[] { 0, 0 }, change.Before);
        Assert.Equal(new byte[] { 1, 2 }, change.After);
    }

    [Fact]
    public void OverlayWithSameBytesReportsNothing()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        working.Overlay(0x10, new byte[] { 0 });

        Assert.Empty(events);
    }

    [Fact]
    public void ModOverlaySyncAndQuietOverlayReportNothing()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        working.OverlayMod(0x10, new byte[] { 1 });
        working.Sync(new SceneDatabase { Profile = RomProfile.Us10 });
        working.Overlay(0x20, new byte[] { 1 }, recordHistory: false);

        Assert.Empty(events);
        Assert.Equal(1, working.View.ReadByte(0x10));
        Assert.Equal(1, working.View.ReadByte(0x20));
    }

    [Fact]
    public void SameLengthAdoptReportsAllRunsOnce()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        var buffer = working.BeginMutate();
        buffer.WriteByte(0x10, 1);
        buffer.WriteByte(0x40, 2);
        working.Adopt(buffer);

        var raised = Assert.Single(events);
        Assert.Equal(2, raised.Changes.Count);
        Assert.Equal(0x10, raised.Changes[0].Offset);
        Assert.Equal(new byte[] { 0 }, raised.Changes[0].Before);
        Assert.Equal(new byte[] { 1 }, raised.Changes[0].After);
        Assert.Equal(0x40, raised.Changes[1].Offset);
        Assert.Equal(new byte[] { 0 }, raised.Changes[1].Before);
        Assert.Equal(new byte[] { 2 }, raised.Changes[1].After);
    }

    [Fact]
    public void RestoreBytesUndoesAndRedoesWithoutReporting()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        working.Overlay(0x10, new byte[] { 1 });
        working.Overlay(0x10, new byte[] { 2 });
        Assert.Equal(2, events.Count);
        var changes = events.SelectMany(raised => raised.Changes).ToList();

        working.RestoreBytes(changes, useAfter: false);
        Assert.Equal(0, working.View.ReadByte(0x10));
        Assert.Empty(working.CaptureUserPatches());

        working.RestoreBytes(changes, useAfter: true);
        Assert.Equal(2, working.View.ReadByte(0x10));
        Assert.Equal(2, events.Count);
    }

    [Fact]
    public void ApplyRomPatchesDoesNotReportHistory()
    {
        var rom = RomImage.FromBytes("/tmp/working-rom-history.gba", new byte[0x100]);
        var working = new WorkingRom(rom);
        var events = new List<RomBytesChangedEventArgs>();
        working.UserBytesChanged += (_, e) => events.Add(e);

        var applied = ModStack.ApplyRomPatches(
            [new ProjectRomPatch { Offset = 0x30, Data = new byte[] { 7 } }],
            working);

        Assert.Equal(1, applied);
        Assert.Empty(events);
        Assert.Equal(7, working.View.ReadByte(0x30));
    }
}
