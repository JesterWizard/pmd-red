using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneVolumeEditingTests
{
    [Fact]
    public void AddMoveAndResizeLinkRoundTripThroughChangeService()
    {
        var scene = EmptyScene(mapId: 7);
        var changes = new ChangeService();

        var link = SceneEditing.AddLink(changes, scene, new CompactPos(4, 5, 0, 0), width: 2, height: 3);
        Assert.Single(scene.Links);
        Assert.True(scene.LinksListDirty);
        Assert.Equal(4, link.Position.XTiles);
        Assert.Equal(2, link.Width);

        SceneEditing.MoveLink(changes, link, new CompactPos(8, 9, 0, 0));
        SceneEditing.SetLinkSize(changes, link, 4, 1);
        SceneEditing.SetLinkRet(changes, link, 2);
        Assert.Equal(8, link.Position.XTiles);
        Assert.Equal(4, link.Width);
        Assert.Equal(1, link.Height);
        Assert.Equal(2, link.Ret);

        changes.Undo();
        Assert.Equal(0, link.Ret);
        changes.Undo();
        Assert.Equal(2, link.Width);
        changes.Undo();
        Assert.Equal(4, link.Position.XTiles);
        changes.Undo();
        Assert.Empty(scene.Links);
    }

    [Fact]
    public void AddEventVolumeUsesDrawnSize()
    {
        var sector = new SceneSector { Group = 0, Sector = 0, RomOffset = 0x200 };
        var changes = new ChangeService();
        var added = SceneEditing.AddEntity(
            changes, sector, SceneEntityKind.Event, new CompactPos(6, 7, 0, 0), width: 3, height: 5);

        Assert.Equal(SceneEntityKind.Event, added.Kind);
        Assert.Equal(3, added.Width);
        Assert.Equal(5, added.Height);
        Assert.True(sector.EventsListDirty);
        changes.Undo();
        Assert.Empty(sector.Events);
    }

    [Fact]
    public void ProjectReloadRestoresAddedLink()
    {
        var scene = EmptyScene(mapId: 3);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        var project = new ProjectDocument { Name = "Links" };
        var changes = new ChangeService();
        changes.Attach(project, database);
        SceneEditing.AddLink(changes, scene, new CompactPos(10, 12, 0, 0), 2, 4, ret: 1);

        var freshScene = EmptyScene(mapId: 3);
        var fresh = new SceneDatabase();
        fresh.Scenes.Add(freshScene);
        ProjectEditApplier.Apply(project, fresh);

        Assert.Single(freshScene.Links);
        Assert.Equal(10, freshScene.Links[0].Position.XTiles);
        Assert.Equal(12, freshScene.Links[0].Position.YTiles);
        Assert.Equal(2, freshScene.Links[0].Width);
        Assert.Equal(4, freshScene.Links[0].Height);
        Assert.Equal(1, freshScene.Links[0].Ret);
        Assert.True(freshScene.LinksListDirty);
    }

    [Fact]
    public void RomBuilderWritesAddedLink()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1);
        Assert.NotNull(scene);
        var changes = new ChangeService();
        var project = ProjectDocument.Create(rom, RomProfile.Us10);
        changes.Attach(project, database);
        var added = SceneEditing.AddLink(changes, scene!, new CompactPos(11, 13, 0, 0), 2, 3, ret: 1);

        var output = Path.Combine(Path.GetTempPath(), "rescue-temple-link-rewrite-test.gba");
        try
        {
            var report = RomBuilder.Build(rom, database, project, output);
            Assert.True(report.Success, string.Join("; ", report.Errors));
            Assert.True(added.RomOffset >= 0);
            var rebuilt = RomImage.Open(output);
            var pos = CompactPos.Read(rebuilt, added.RomOffset);
            Assert.Equal(11, pos.XTiles);
            Assert.Equal(13, pos.YTiles);
            Assert.Equal(2, rebuilt.ReadByte(added.RomOffset + 4));
            Assert.Equal(3, rebuilt.ReadByte(added.RomOffset + 5));
            Assert.Equal(1, rebuilt.ReadByte(added.RomOffset + 6));
        }
        finally
        {
            if (File.Exists(output))
                File.Delete(output);
        }
    }

    private static Scene EmptyScene(int mapId)
    {
        var scene = new Scene { MapId = mapId, Name = "volume", HeaderOffset = 0x100 };
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups.Add(group);
        return scene;
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
