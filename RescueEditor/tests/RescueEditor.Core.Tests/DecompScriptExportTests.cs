using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DecompScriptExportTests
{
    [Fact]
    public void FormatsLiveScriptAsDecompCArray()
    {
        var scene = CreateScene(mapId: 12);
        var live = AddLive(scene, group: 0, sector: 1, index: 0, scriptOffset: 0x1E20D0, commands:
        [
            new ScriptCommandData { Op = 0x54, ArgShort = 2 },
            new ScriptCommandData { Op = 0xE8, ArgShort = 3 },
            new ScriptCommandData { Op = 0xEF },
        ]);
        live.Scripts[0].Offset = 0x1E20D0;

        var names = TestNames();
        var text = DecompScriptExport.Format(scene, names: names);

        Assert.Equal("""
            static const struct ScriptCommand s_gs12_g0_s1_lives0_dlg0[] = { /* 0x81e20d0 */
                SELECT_ANIMATION(GROUND_ANIM_STILL),
                CALL_SCRIPT(WAIT_START_FUNC),
                RET,
            };

            """.Replace("\r\n", "\n"), text.Replace("\r\n", "\n"));
    }

    [Fact]
    public void UsesDecompMacroNamesAndGettextStrings()
    {
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 1,
            ArgPtr = 0x08123456,
        };
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = " Hello\nworld" },
        };

        var line = DecompScriptExport.FormatCommand(command, dialogue);

        Assert.Equal("MSG_NPC(1, _(\" Hello\\nworld\"))", line);
    }

    [Fact]
    public void FormatsLabelWithDecompIndentAndComment()
    {
        var line = DecompScriptExport.FormatCommand(new ScriptCommandData { Op = 0xF4, ArgShort = 3 });
        Assert.Equal("  LABEL(3), /* = 0x03 */", line);
    }

    [Fact]
    public void OmitsParensOnZeroArgMacros()
    {
        Assert.Equal("HALT", DecompScriptExport.FormatCommand(new ScriptCommandData { Op = 0xF0 }));
        Assert.Equal("TEXTBOX_CLEAR", DecompScriptExport.FormatCommand(new ScriptCommandData { Op = 0x30 }));
        Assert.Equal("END_DELETE", DecompScriptExport.FormatCommand(new ScriptCommandData { Op = 0xF1 }));
    }

    [Fact]
    public void ExportsOnlyMatchingStationWhenFiltered()
    {
        var scene = CreateScene(mapId: 12);
        AddStation(scene, group: 0, sector: 0, index: 0, commands:
        [
            new ScriptCommandData { Op = 0x08, Arg1 = 12 },
            new ScriptCommandData { Op = 0xEF },
        ]);
        AddStation(scene, group: 1, sector: 0, index: 0, commands:
        [
            new ScriptCommandData { Op = 0xF0 },
        ]);
        AddLive(scene, group: 0, sector: 0, index: 0, scriptOffset: 0x100, commands:
        [
            new ScriptCommandData { Op = 0xEF },
        ]);

        var names = TestNames();
        var text = DecompScriptExport.Format(
            scene,
            new DecompScriptExportFilter(Kind: "station", Group: 0, Sector: 0, Index: 0),
            names: names);

        Assert.Contains("s_gs12_g0_s0_station_sref_script", text);
        Assert.Contains("SELECT_MAP(MAP_TEAM_BASE_INSIDE)", text);
        Assert.DoesNotContain("lives0", text);
        Assert.DoesNotContain("s_gs12_g1_", text);
    }

    [Fact]
    public void ExportsWholeSector()
    {
        var scene = CreateScene(mapId: 12);
        AddStation(scene, group: 0, sector: 0, index: 0, commands:
        [
            new ScriptCommandData { Op = 0xEF },
        ]);
        AddLive(scene, group: 0, sector: 0, index: 0, scriptOffset: 0x100, commands:
        [
            new ScriptCommandData { Op = 0xF0 },
        ]);
        AddStation(scene, group: 0, sector: 1, index: 0, commands:
        [
            new ScriptCommandData { Op = 0xF1 },
        ]);

        var text = DecompScriptExport.Format(
            scene,
            new DecompScriptExportFilter(Group: 0, Sector: 0));

        Assert.Contains("s_gs12_g0_s0_station_sref_script", text);
        Assert.Contains("s_gs12_g0_s0_lives0_dlg0", text);
        Assert.DoesNotContain("g0_s1_", text);
    }

    [Fact]
    public void SuggestsGroundDataStationFilename()
    {
        var scene = new Scene
        {
            MapId = 12,
            Map = new GroundMapDefinition { MapId = 12, BmaName = "B01P02A" },
        };
        Assert.Equal("ground_data_b01p02a_station.h", DecompScriptExport.SuggestedFileName(scene));
    }

    [Fact]
    public void FormatsParsedEditorDialogueAsMsgNpc()
    {
        var parsed = SceneScriptSource.Parse("""
            @live g0/s0 dlg0
            DIALOGUE(1, "Hi")
            RET()
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        var text = DecompScriptExport.Format(12, parsed.Sections);

        Assert.Contains("MSG_NPC(1, _(\"Hi\"))", text);
        Assert.Contains("    RET,", text);
        Assert.Contains("s_gs12_g0_s0_lives0_dlg0", text);
    }

    [Fact]
    public void FilterForScopeWidensToSectorOrScene()
    {
        var current = new DecompScriptExportFilter(Kind: "live", Group: 0, Sector: 1, Index: 0, ScriptSlot: 0);
        var sector = DecompScriptExport.FilterForScope(DecompScriptExportScope.CurrentSector, current);
        Assert.Equal(0, sector?.Group);
        Assert.Equal(1, sector?.Sector);
        Assert.Null(sector?.Kind);
        Assert.Null(DecompScriptExport.FilterForScope(DecompScriptExportScope.WholeScene, current));
    }

    [Fact]
    public void FilterFromSourceLineSelectsCurrentSection()
    {
        var source = """
            @station g0/s0
            RET()
            @live g0/s1 dlg0
            HALT()
            """;
        var filter = DecompScriptExport.FilterFromSourceLine(source, lineNumber: 4);
        Assert.NotNull(filter);
        Assert.Equal("live", filter!.Kind);
        Assert.Equal(0, filter.Group);
        Assert.Equal(1, filter.Sector);
        Assert.Equal(0, filter.ScriptSlot);
    }

    private static ScriptNamedDefinitions TestNames() => new()
    {
        Music = new NamedIdCatalog([]),
        Fanfare = new NamedIdCatalog([]),
        Map = new NamedIdCatalog([(12, "MAP_TEAM_BASE_INSIDE")]),
        Emotion = new NamedIdCatalog([]),
        UpdateName = new NamedIdCatalog([]),
        ObjFlag = new NamedIdCatalog([]),
        EmotionEffect = new NamedIdCatalog([]),
        Direction = new NamedIdCatalog([]),
        DirTrans = new NamedIdCatalog([]),
        Placement = new NamedIdCatalog([]),
        GroundAnim = new NamedIdCatalog([(2, "GROUND_ANIM_STILL")]),
        ScriptId = new NamedIdCatalog([(0, "END_TALK"), (3, "WAIT_START_FUNC")]),
        PaletteUtil = new NamedIdCatalog([]),
    };

    private static Scene CreateScene(int mapId)
    {
        var scene = new Scene { MapId = mapId, Name = "Team Base" };
        return scene;
    }

    private static ScriptRefData AddStation(
        Scene scene,
        int group,
        int sector,
        int index,
        ScriptCommandData[] commands)
    {
        var sceneGroup = EnsureGroup(scene, group);
        var sceneSector = EnsureSector(sceneGroup, group, sector);
        while (sceneSector.Stations.Count <= index)
            sceneSector.Stations.Add(new ScriptRefData());
        var station = sceneSector.Stations[index];
        station.Commands.Clear();
        station.Commands.AddRange(commands);
        return station;
    }

    private static SceneEntity AddLive(
        Scene scene,
        int group,
        int sector,
        int index,
        int scriptOffset,
        ScriptCommandData[] commands)
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
                ScriptOffsets = [-1, -1, -1, -1],
            });
        }

        var live = sceneSector.Lives[index];
        live.ScriptOffsets[0] = scriptOffset;
        var slot = new EntityScriptSlot { Offset = scriptOffset, Capacity = commands.Length * 16 };
        slot.Commands.AddRange(commands);
        if (live.Scripts.Count == 0)
            live.Scripts.Add(slot);
        else
        {
            live.Scripts[0] = slot;
        }

        return live;
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
