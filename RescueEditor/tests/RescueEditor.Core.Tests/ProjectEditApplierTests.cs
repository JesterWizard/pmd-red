using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ProjectEditApplierTests
{
    [Fact]
    public void SaveReloadRestoresAssembledScript()
    {
        var scene = CreateScene("EVENT_TEST", new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        var project = new ProjectDocument { Name = "RoundTrip" };
        var changes = new ChangeService();
        changes.Attach(project, database);
        var source = """
            @station g0/s0 EVENT_TEST
            WAIT(8)
            RET()
            """;

        SceneEditing.ApplySceneScriptSource(changes, scene, SceneScriptSource.Parse(source), database, source);

        var path = Path.Combine(Path.GetTempPath(), $"rt-script-{Guid.NewGuid():N}.rtproj");
        try
        {
            project.Save(path);
            var loaded = ProjectDocument.Load(path);

            var reloaded = CreateScene("EVENT_TEST", new ScriptCommandData { Op = 0xEF });
            var fresh = new SceneDatabase();
            fresh.Scenes.Add(reloaded);
            ProjectEditApplier.Apply(loaded, fresh);

            var station = reloaded.Groups[0].Sectors[0].Stations[0];
            Assert.Equal(2, station.Commands.Count);
            Assert.Equal(0xDB, station.Commands[0].Op);
            Assert.Equal(8, station.Commands[0].ArgShort);
            Assert.Equal(0xEF, station.Commands[1].Op);
            Assert.Equal(
                source.Replace("\r\n", "\n").TrimEnd(),
                reloaded.ScriptSourceText?.Replace("\r\n", "\n").TrimEnd());
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }

    [Fact]
    public void ApplyRestoresEntityPositionEdits()
    {
        var entity = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            RomOffset = 0x100,
            Position = new CompactPos(1, 2, 0, 0),
        };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Lives.Add(entity);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        var project = new ProjectDocument();
        project.Edits.Add(new ProjectEdit
        {
            Id = "1",
            Kind = "entity.position",
            Target = "0x100",
            Values = { ["x"] = "3", ["y"] = "4", ["xFlags"] = "2", ["yFlags"] = "0" },
        });

        ProjectEditApplier.Apply(project, database);

        Assert.Equal(3, entity.Position.XTiles);
        Assert.Equal(4, entity.Position.YTiles);
        Assert.Equal(2, entity.Position.XFlags);
    }

    [Fact]
    public void ApplyThrowsWhenStoredSourceDoesNotAssemble()
    {
        var scene = CreateScene("EVENT_TEST", new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        var project = new ProjectDocument();
        project.Edits.Add(new ProjectEdit
        {
            Id = "bad",
            Kind = "script.source",
            Target = scene.Name,
            Values =
            {
                ["mapId"] = "1",
                ["source"] = "@station g0/s0 EVENT_TEST\nNOT_A_COMMAND(\nRET()\n",
            },
        });

        var error = Assert.Throws<InvalidOperationException>(() => ProjectEditApplier.Apply(project, database));
        Assert.Contains("line 2", error.Message, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("NOT_A_COMMAND", error.Message);
    }

    private static Scene CreateScene(string stationName, params ScriptCommandData[] commands)
    {
        var station = new ScriptRefData { Name = stationName };
        station.Commands.AddRange(commands);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        return scene;
    }
}
