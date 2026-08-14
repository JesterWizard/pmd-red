using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneEntitySlotTests
{
    [Fact]
    public void AddLiveAppendsStubAtPositionAndSupportsUndo()
    {
        var sector = new SceneSector { Group = 1, Sector = 2, RomOffset = 0x200 };
        var changes = new ChangeService();

        var added = SceneEditing.AddEntity(
            changes, sector, SceneEntityKind.Live, new CompactPos(6, 7, 0, 0), typeId: 72);

        Assert.Single(sector.Lives);
        Assert.Same(added, sector.Lives[0]);
        Assert.True(sector.LivesListDirty);
        Assert.Equal(72, added.TypeId);
        Assert.Equal(6, added.Position.XTiles);
        Assert.Equal(7, added.Position.YTiles);
        Assert.Equal(-1, added.RomOffset);
        Assert.Equal(4, added.Scripts.Count);
        Assert.Equal(0xEF, Assert.Single(added.Scripts[0].Commands).Op);
        Assert.True(added.Scripts[0].Dirty);
        Assert.Empty(added.Scripts[1].Commands);

        changes.Undo();
        Assert.Empty(sector.Lives);
    }

    [Theory]
    [InlineData(SceneEntityKind.Object, 16)]
    [InlineData(SceneEntityKind.Effect, 16)]
    [InlineData(SceneEntityKind.Live, 24)]
    public void AddEntityRejectsWhenSectorIsFull(SceneEntityKind kind, int cap)
    {
        var sector = new SceneSector { Group = 0, Sector = 3, RomOffset = 0x100 };
        for (var i = 0; i < cap; i++)
            sector.ListFor(kind).Add(new SceneEntity { Kind = kind, Index = i });
        var changes = new ChangeService();

        var exception = Assert.Throws<InvalidOperationException>(
            () => SceneEditing.AddEntity(changes, sector, kind));
        Assert.Equal(
            $"Sector g0/s3 already has {cap} {SceneEntities.Noun(kind)}.",
            exception.Message);
    }

    [Fact]
    public void AddEffectUsesSingleRetStub()
    {
        var sector = new SceneSector { Group = 0, Sector = 0 };
        var added = SceneEditing.AddEntity(new ChangeService(), sector, SceneEntityKind.Effect);

        Assert.Single(added.Scripts);
        Assert.Equal(0xEF, Assert.Single(added.Scripts[0].Commands).Op);
        Assert.True(sector.EffectsListDirty);
    }

    [Fact]
    public void AddDialogueAllocatesPlaceholderAndSupportsUndo()
    {
        var database = new SceneDatabase();
        database.DialogueByOffset[0x20] = new DialogueString
        {
            Offset = 0x20,
            Size = 2,
            Text = "Hi",
        };
        var changes = new ChangeService();

        var added = SceneEditing.AddDialogue(changes, database, "New line.");

        Assert.True(added.Offset < 0);
        Assert.True(added.Dirty);
        Assert.Equal("New line.", added.Text);
        Assert.Same(added, database.DialogueByOffset[added.Offset]);
        Assert.Equal("D0001", ScriptIndexer.FormatCatalogId(database.DialogueByOffset, added));

        changes.Undo();
        Assert.False(database.DialogueByOffset.ContainsKey(added.Offset));
        Assert.Single(database.DialogueByOffset);
    }

    [Fact]
    public void QuotedMsgReusesAllocatedDialoguePointer()
    {
        var database = new SceneDatabase();
        var changes = new ChangeService();
        var added = SceneEditing.AddDialogue(changes, database, "Hello, partner!");

        var parsed = ScriptSource.Parse("""DIALOGUE(1, "Hello, partner!")""", database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(unchecked((uint)added.Offset), command.Command.ArgPtr);
        Assert.Equal("Hello, partner!", command.DialogueText);
    }

    [Fact]
    public void WriteWorkingCopyPersistsNewLiveListAndDialogue()
    {
        var bytes = new byte[0x12000];
        Array.Fill(bytes, (byte)0xFF, 0x10000, 0x2000);
        var sectorOffset = 0x100;
        var source = RomImage.FromBytes("/tmp/entity-slot-toy.gba", bytes);
        var sector = new SceneSector
        {
            Group = 0,
            Sector = 0,
            RomOffset = sectorOffset,
            LivesListDirty = true,
        };
        var scene = new Scene { MapId = 1, Name = "Toy" };
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        var changes = new ChangeService();
        var live = SceneEditing.AddEntity(
            changes, sector, SceneEntityKind.Live, new CompactPos(4, 5, 0, 0), typeId: 8);
        var dialogue = SceneEditing.AddDialogue(changes, database, "Over here!");

        var working = new WorkingRom(source);
        var report = working.Sync(database);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.True(live.RomOffset >= 0);
        Assert.Equal(8, working.View.ReadByte(live.RomOffset));
        Assert.Equal(4, working.View.ReadByte(live.RomOffset + 4));
        Assert.Equal(5, working.View.ReadByte(live.RomOffset + 5));
        Assert.True(live.ScriptOffsets[0] > 0);
        Assert.Equal(0xEF, working.View.ReadByte(live.ScriptOffsets[0]));
        Assert.True(dialogue.Offset >= 0);
        Assert.Equal("Over here!", System.Text.Encoding.ASCII.GetString(
            working.View.Copy(dialogue.Offset, "Over here!".Length)));
    }
}
