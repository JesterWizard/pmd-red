using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneDiffBuilderTests
{
    [Fact]
    public void IdenticalScenesYieldNoEntries()
    {
        var baseline = CreateScene();
        AddLive(baseline, group: 0, sector: 0, index: 0, romOffset: 0x100, position: new CompactPos(4, 8, 0, 0));
        AddStation(baseline, group: 0, sector: 0, index: 0, name: "EVENT_TEST",
            new ScriptCommandData { Op = 0xDB, ArgShort = 10 },
            new ScriptCommandData { Op = 0xEF });

        var current = SceneClone.Clone(baseline);
        var report = SceneDiffBuilder.Compare(baseline, current);

        Assert.Empty(report.Entries);
        Assert.False(report.HasChanges);
        Assert.Equal("", report.FormatText());
    }

    [Fact]
    public void MovedActorAppearsAndUntouchedDoesNot()
    {
        var baseline = CreateScene();
        AddLive(baseline, group: 0, sector: 0, index: 0, romOffset: 0x100, position: new CompactPos(4, 8, 0, 0), typeId: 3);
        AddLive(baseline, group: 0, sector: 0, index: 1, romOffset: 0x118, position: new CompactPos(10, 12, 0, 0), typeId: 7);

        var current = SceneClone.Clone(baseline);
        current.Groups[0].Sectors[0].Lives[0].Position = new CompactPos(20, 8, 0, 0);

        var report = SceneDiffBuilder.Compare(baseline, current);

        Assert.True(report.HasChanges);
        var moved = Assert.Single(report.Entries);
        Assert.Equal(SceneDiffKind.EntityMoved, moved.Kind);
        Assert.Contains("g0/s0", moved.Path);
        Assert.Contains("live", moved.Path, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("(4,8)", moved.Summary.Replace(" ", ""));
        Assert.Contains("(20,8)", moved.Summary.Replace(" ", ""));
        Assert.DoesNotContain("type 7", report.FormatText(), StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void ChangedCommandAppearsAndUntouchedStationDoesNot()
    {
        var baseline = CreateScene();
        AddStation(baseline, group: 0, sector: 0, index: 0, name: "EVENT_A",
            new ScriptCommandData { Op = 0xDB, ArgShort = 10 },
            new ScriptCommandData { Op = 0xEF });
        AddStation(baseline, group: 0, sector: 1, index: 0, name: "EVENT_B",
            new ScriptCommandData { Op = 0xF0 });

        var current = SceneClone.Clone(baseline);
        current.Groups[0].Sectors[0].Stations[0].Commands[0].ArgShort = 40;

        var report = SceneDiffBuilder.Compare(baseline, current);

        Assert.Single(report.Entries);
        var changed = report.Entries[0];
        Assert.Equal(SceneDiffKind.CommandChanged, changed.Kind);
        Assert.Contains("@station g0/s0", changed.Path);
        Assert.Contains("WAIT", changed.Baseline ?? "");
        Assert.Contains("WAIT", changed.Current ?? "");
        Assert.DoesNotContain("EVENT_B", report.FormatText());
        Assert.DoesNotContain("@station g0/s1", report.FormatText());
    }

    [Fact]
    public void SectorFilterHidesEditsOutsideScope()
    {
        var baseline = CreateScene();
        AddLive(baseline, group: 0, sector: 0, index: 0, romOffset: 0x100, position: new CompactPos(1, 1, 0, 0));
        AddLive(baseline, group: 0, sector: 1, index: 0, romOffset: 0x200, position: new CompactPos(2, 2, 0, 0));

        var current = SceneClone.Clone(baseline);
        current.Groups[0].Sectors[0].Lives[0].Position = new CompactPos(9, 1, 0, 0);
        current.Groups[0].Sectors[1].Lives[0].Position = new CompactPos(9, 2, 0, 0);

        var report = SceneDiffBuilder.Compare(baseline, current, new SceneDiffFilter(Group: 0, Sector: 1));

        var moved = Assert.Single(report.Entries);
        Assert.Contains("g0/s1", moved.Path);
        Assert.DoesNotContain("g0/s0", report.FormatText());
    }

    [Fact]
    public void AddedAndRemovedEntitiesAreReported()
    {
        var baseline = CreateScene();
        AddLive(baseline, group: 0, sector: 0, index: 0, romOffset: 0x100, position: new CompactPos(1, 1, 0, 0), typeId: 1);
        AddLive(baseline, group: 0, sector: 0, index: 1, romOffset: 0x118, position: new CompactPos(2, 2, 0, 0), typeId: 2);

        var current = SceneClone.Clone(baseline);
        current.Groups[0].Sectors[0].Lives.RemoveAt(1);
        current.Groups[0].Sectors[0].Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 9,
            Index = 1,
            Group = 0,
            Sector = 0,
            Position = new CompactPos(5, 5, 0, 0),
            DisplayName = "Live 9",
            RomOffset = -1,
        });

        var report = SceneDiffBuilder.Compare(baseline, current);
        Assert.Contains(report.Entries, e => e.Kind == SceneDiffKind.EntityRemoved);
        Assert.Contains(report.Entries, e => e.Kind == SceneDiffKind.EntityAdded);
        Assert.DoesNotContain(report.Entries, e => e.Kind == SceneDiffKind.EntityMoved);
    }

    [Fact]
    public void DialogueTextChangeShowsOnCommand()
    {
        var baseline = CreateScene();
        AddStation(baseline, group: 0, sector: 0, index: 0, name: "TALK",
            new ScriptCommandData { Op = 0x34, ArgShort = 1, ArgPtr = 0x08123456 },
            new ScriptCommandData { Op = 0xEF });
        var baselineDialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 16, Text = "Hello" },
        };
        var currentDialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 16, Text = "Goodbye" },
        };

        var current = SceneClone.Clone(baseline);
        var report = SceneDiffBuilder.Compare(
            baseline, current,
            baselineDialogue: baselineDialogue,
            currentDialogue: currentDialogue);

        var changed = Assert.Single(report.Entries);
        Assert.Equal(SceneDiffKind.CommandChanged, changed.Kind);
        Assert.Contains("Hello", changed.Baseline);
        Assert.Contains("Goodbye", changed.Current);
    }

    [Fact]
    public void CloneIsIndependentOfLaterEdits()
    {
        var original = CreateScene();
        AddLive(original, group: 0, sector: 0, index: 0, romOffset: 0x100, position: new CompactPos(1, 1, 0, 0));
        var clone = SceneClone.Clone(original);
        original.Groups[0].Sectors[0].Lives[0].Position = new CompactPos(3, 3, 0, 0);

        Assert.Equal(new CompactPos(1, 1, 0, 0), clone.Groups[0].Sectors[0].Lives[0].Position);
    }

    private static Scene CreateScene() => new() { MapId = 12, Name = "Team Base" };

    private static void AddLive(
        Scene scene,
        int group,
        int sector,
        int index,
        int romOffset,
        CompactPos position,
        byte typeId = 1)
    {
        var sceneGroup = EnsureGroup(scene, group);
        var sceneSector = EnsureSector(sceneGroup, group, sector);
        while (sceneSector.Lives.Count <= index)
        {
            sceneSector.Lives.Add(new SceneEntity
            {
                Kind = SceneEntityKind.Live,
                Index = sceneSector.Lives.Count,
                Group = group,
                Sector = sector,
            });
        }

        var live = sceneSector.Lives[index];
        live.Index = index;
        live.TypeId = typeId;
        live.Position = position;
        live.RomOffset = romOffset;
        live.DisplayName = $"Live {typeId}";
    }

    private static void AddStation(
        Scene scene,
        int group,
        int sector,
        int index,
        string name,
        params ScriptCommandData[] commands)
    {
        var sceneGroup = EnsureGroup(scene, group);
        var sceneSector = EnsureSector(sceneGroup, group, sector);
        while (sceneSector.Stations.Count <= index)
            sceneSector.Stations.Add(new ScriptRefData());
        var station = sceneSector.Stations[index];
        station.Name = name;
        station.Commands.Clear();
        station.Commands.AddRange(commands);
    }

    private static SceneGroup EnsureGroup(Scene scene, int group)
    {
        while (scene.Groups.Count <= group)
            scene.Groups.Add(new SceneGroup { Index = scene.Groups.Count });
        var item = scene.Groups[group];
        item.Index = group;
        return item;
    }

    private static SceneSector EnsureSector(SceneGroup group, int groupIndex, int sector)
    {
        while (group.Sectors.Count <= sector)
            group.Sectors.Add(new SceneSector { Group = groupIndex, Sector = group.Sectors.Count });
        var item = group.Sectors[sector];
        item.Group = groupIndex;
        item.Sector = sector;
        return item;
    }
}
