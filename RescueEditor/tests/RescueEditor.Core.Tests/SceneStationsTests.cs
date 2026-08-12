using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneStationsTests
{
    [Fact]
    public void EnumerateListsStationsWithGroupSectorIdentity()
    {
        var scene = MakeScene(
            ("A", 0, 0, [Wait(1), Ret()]),
            ("B", 0, 1, [Ret()]),
            ("C", 1, 0, [Wait(2), Wait(3), Ret()]));

        var entries = SceneStations.Enumerate(scene);

        Assert.Equal(3, entries.Count);
        Assert.Equal("g0/s0", entries[0].Identity);
        Assert.Equal(0, entries[0].StationIndex);
        Assert.Equal(2, entries[0].CommandCount);
        Assert.Equal("WAIT", entries[0].FirstOpcodePreview);
        Assert.Equal("A", entries[0].Name);

        Assert.Equal("g0/s1", entries[1].Identity);
        Assert.Equal("g1/s0", entries[2].Identity);
        Assert.Equal(3, entries[2].CommandCount);
    }

    [Fact]
    public void EnumerateUsesIndexSuffixWhenSectorHasMultipleStations()
    {
        var scene = MakeScene(
            ("FIRST", 0, 0, [Ret()]),
            ("SECOND", 0, 0, [Wait(1), Ret()]));

        var entries = SceneStations.Enumerate(scene);

        Assert.Equal(2, entries.Count);
        Assert.Equal("g0/s0.0", entries[0].Identity);
        Assert.Equal("g0/s0.1", entries[1].Identity);
        Assert.Equal(0, entries[0].StationIndex);
        Assert.Equal(1, entries[1].StationIndex);
    }

    [Fact]
    public void EnumerateEmptySceneReturnsEmpty()
    {
        var scene = new Scene { MapId = 1, Name = "Empty" };
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups[0].Sectors.Add(new SceneSector { Group = 0, Sector = 0 });

        Assert.Empty(SceneStations.Enumerate(scene));
        Assert.Equal("0 stations · 0 commands", SceneStations.Summarize(scene));
    }

    [Fact]
    public void SummarizeCountsStationsAndCommands()
    {
        var scene = MakeScene(
            ("A", 0, 0, [Wait(1), Ret()]),
            ("B", 0, 0, [Ret()]));

        Assert.Equal("2 stations · 3 commands", SceneStations.Summarize(scene));
    }

    [Fact]
    public void FormatDisplayRowMatchesInspectorSketch()
    {
        var scene = MakeScene(("EVENT", 0, 0, [Wait(8), Ret()]));
        var entry = SceneStations.Enumerate(scene)[0];
        Assert.Equal("g0/s0 · station 0 · 2 cmds · WAIT", entry.DisplayLabel);
    }

    [Fact]
    public void FindStationHeaderLineLocatesAtStationSection()
    {
        var source = """
            # Toy
            @station g0/s0 FIRST
            RET()

            @station g0/s0.1 SECOND
            WAIT(1)
            RET()
            """;

        Assert.Equal(2, SceneStations.FindStationHeaderLine(source, group: 0, sector: 0, stationIndex: 0));
        Assert.Equal(5, SceneStations.FindStationHeaderLine(source, group: 0, sector: 0, stationIndex: 1));
        Assert.Equal(-1, SceneStations.FindStationHeaderLine(source, group: 9, sector: 9, stationIndex: 0));
    }

    [Fact]
    public void AddStationAppendsStubAndSupportsUndo()
    {
        var scene = MakeScene(("EXISTING", 0, 0, [Ret()]));
        scene.ScriptSourceText = "# stale\n";
        var sector = scene.Groups[0].Sectors[0];
        var changes = new ChangeService();

        var added = SceneEditing.AddStation(changes, scene, sector);

        Assert.Equal(2, sector.Stations.Count);
        Assert.Same(added, sector.Stations[1]);
        Assert.True(sector.StationsListDirty);
        Assert.True(sector.HasStation);
        Assert.Equal(-1, added.ScriptOffset);
        Assert.Equal(-1, added.RomOffset);
        Assert.Single(added.Commands);
        Assert.Equal(0xEF, added.Commands[0].Op);
        Assert.Null(scene.ScriptSourceText);
        Assert.Contains(SceneStations.Enumerate(scene), e => e.Station == added);

        changes.Undo();
        Assert.Single(sector.Stations);
        Assert.Equal("# stale\n", scene.ScriptSourceText);
    }

    [Fact]
    public void AddStationRejectsWhenSectorIsFull()
    {
        var sector = new SceneSector { Group = 0, Sector = 0, RomOffset = 0x100 };
        for (var i = 0; i < SceneStations.MaxPerSector; i++)
            sector.Stations.Add(new ScriptRefData { Name = $"S{i}", Commands = { Ret() } });
        var scene = new Scene { MapId = 1 };
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        var changes = new ChangeService();

        Assert.Throws<InvalidOperationException>(() => SceneEditing.AddStation(changes, scene, sector));
    }

    [Fact]
    public void WriteWorkingCopyPersistsNewStationListAndScript()
    {
        var bytes = new byte[0x12000];
        Array.Fill(bytes, (byte)0xFF, 0x10000, 0x2000);
        // Sector blob at 0x100 with zeroed station count/pointer.
        var sectorOffset = 0x100;
        var source = RomImage.FromBytes("/tmp/station-list-toy.gba", bytes);
        var sector = new SceneSector
        {
            Group = 0,
            Sector = 0,
            RomOffset = sectorOffset,
            StationsListDirty = true,
        };
        var station = new ScriptRefData
        {
            Name = "NEW_STATION",
            ScriptOffset = -1,
            RomOffset = -1,
            Commands = { Wait(4), Ret() },
        };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Toy" };
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.Scenes.Add(scene);

        var working = new WorkingRom(source);
        var report = working.Sync(database);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.True(sector.StationsListDirty);
        Assert.True(station.RomOffset >= 0);
        Assert.True(station.ScriptOffset >= 0);
        Assert.Equal(1, working.View.ReadInt32(sectorOffset + 32));
        Assert.True(working.View.ReadPointerOffset(sectorOffset + 36) >= 0);

        var commands = ScriptCodec.ReadScript(working.View, station.ScriptOffset);
        Assert.Equal(2, commands.Count);
        Assert.Equal(0xDB, commands[0].Op);
        Assert.Equal(4, commands[0].ArgShort);
        Assert.Equal(0xEF, commands[1].Op);

        var reloaded = ScriptRefData.Read(working.View, station.RomOffset, loadCommands: true);
        Assert.Equal("NEW_STATION", reloaded.Name);
        Assert.Equal(2, reloaded.Commands.Count);
    }

    private static Scene MakeScene(params (string Name, int Group, int Sector, ScriptCommandData[] Commands)[] stations)
    {
        var scene = new Scene { MapId = 1, Name = "Test" };
        foreach (var item in stations)
        {
            var group = scene.Groups.FirstOrDefault(g => g.Index == item.Group);
            if (group is null)
            {
                group = new SceneGroup { Index = item.Group };
                scene.Groups.Add(group);
            }

            var sector = group.Sectors.FirstOrDefault(s => s.Sector == item.Sector);
            if (sector is null)
            {
                sector = new SceneSector { Group = item.Group, Sector = item.Sector };
                group.Sectors.Add(sector);
            }

            sector.Stations.Add(new ScriptRefData
            {
                Name = item.Name,
                Commands = item.Commands.ToList(),
            });
            sector.HasStation = true;
        }

        scene.Groups.Sort((a, b) => a.Index.CompareTo(b.Index));
        foreach (var group in scene.Groups)
            group.Sectors.Sort((a, b) => a.Sector.CompareTo(b.Sector));
        return scene;
    }

    private static ScriptCommandData Wait(short frames) => new() { Op = 0xDB, ArgShort = frames };
    private static ScriptCommandData Ret() => new() { Op = 0xEF };
}
