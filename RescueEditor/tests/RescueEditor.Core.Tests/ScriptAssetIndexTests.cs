using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptAssetIndexTests
{
    [Fact]
    public void IndexesDialogueBgmPortraitAndMapFromStation()
    {
        var scene = MakeScene(mapId: 12, name: "Whiscash Pond");
        var sector = scene.Groups[0].Sectors[0];
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 7,
            Index = 0,
            Group = 0,
            Sector = 0,
            DisplayName = "Whiscash",
        });
        sector.Stations.Add(new ScriptRefData
        {
            Name = "EVENT",
            Commands =
            {
                new ScriptCommandData { Op = 0x08, Arg1 = 12 },
                new ScriptCommandData { Op = 0x44, Arg1 = 34 },
                new ScriptCommandData { Op = 0x2E, ArgByte = 0, ArgShort = 0, Arg1 = 1 },
                new ScriptCommandData { Op = 0x34, ArgShort = 0, ArgPtr = RomImage.RomVirtualAddress + 0x123456 },
                new ScriptCommandData { Op = 0xEF },
            },
        });

        var index = ScriptAssetIndex.Build(Database(scene));

        var map = Assert.Single(index.Find(ScriptAssetKind.Map, 12));
        Assert.Equal("Whiscash Pond", map.SceneName);
        Assert.Equal(12, map.MapId);
        Assert.Equal(ScriptSiteKind.Station, map.Site);
        Assert.Equal(0, map.CommandIndex);
        Assert.Equal("SELECT_MAP", map.OpcodeName);

        var music = Assert.Single(index.Find(ScriptAssetKind.Music, 34));
        Assert.Equal(1, music.CommandIndex);
        Assert.Equal("BGM_SWITCH", music.OpcodeName);

        var portrait = Assert.Single(index.Find(ScriptAssetKind.Portrait, 0));
        Assert.Equal("Whiscash", portrait.PortraitSpecies);
        Assert.Equal(1, portrait.PortraitEmotion);
        Assert.Equal(2, portrait.CommandIndex);

        var dialogue = Assert.Single(index.Find(ScriptAssetKind.Dialogue, 0x123456));
        Assert.Equal(3, dialogue.CommandIndex);
        Assert.Equal("g0/s0 · station 0 · MSG_NPC", dialogue.LocationLabel);
    }

    [Fact]
    public void IndexesLiveObjectAndFunctionScripts()
    {
        var scene = MakeScene(mapId: 3, name: "Base");
        var sector = scene.Groups[0].Sectors[0];
        var live = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Index = 0,
            Group = 0,
            Sector = 0,
        };
        live.Scripts.Add(new EntityScriptSlot
        {
            Commands =
            {
                new ScriptCommandData { Op = 0x45, ArgShort = 8, Arg1 = 50 },
                new ScriptCommandData { Op = 0xF0 },
            },
        });
        sector.Lives.Add(live);

        var obj = new SceneEntity
        {
            Kind = SceneEntityKind.Object,
            Index = 1,
            Group = 0,
            Sector = 0,
        };
        obj.Scripts.Add(new EntityScriptSlot());
        obj.Scripts.Add(new EntityScriptSlot
        {
            Commands =
            {
                new ScriptCommandData { Op = 0x49, Arg1 = 201 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        sector.Objects.Add(obj);

        var database = Database(scene);
        database.FunctionScripts.Add(new ScriptRefData
        {
            Name = "FUNC",
            Commands =
            {
                new ScriptCommandData { Op = 0x09, Arg1 = 99 },
                new ScriptCommandData { Op = 0xEF },
            },
        });

        var index = ScriptAssetIndex.Build(database);

        var fadein = Assert.Single(index.Find(ScriptAssetKind.Music, 50));
        Assert.Equal(ScriptSiteKind.Live, fadein.Site);
        Assert.Equal(0, fadein.ScriptSlot);
        Assert.Equal("BGM_FADEIN", fadein.OpcodeName);

        var fanfare = Assert.Single(index.Find(ScriptAssetKind.Fanfare, 201));
        Assert.Equal(ScriptSiteKind.Object, fanfare.Site);
        Assert.Equal(1, fanfare.SiteIndex);
        Assert.Equal(1, fanfare.ScriptSlot);

        var ground = Assert.Single(index.Find(ScriptAssetKind.Map, 99));
        Assert.Equal(ScriptSiteKind.Function, ground.Site);
        Assert.Equal("FUNC", ground.SiteName);
    }

    [Fact]
    public void FindForAssetResolvesDialogueSongSceneAndPortrait()
    {
        var scene = MakeScene(mapId: 8, name: "Tiny Woods");
        scene.Map = new GroundMapDefinition { MapId = 8, BmaName = "D01P11A" };
        var sector = scene.Groups[0].Sectors[0];
        sector.Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            Index = 0,
            DisplayName = "Pikachu",
        });
        sector.Stations.Add(new ScriptRefData
        {
            Name = "INTRO",
            Commands =
            {
                new ScriptCommandData { Op = 0x08, Arg1 = 8 },
                new ScriptCommandData { Op = 0x44, Arg1 = 12 },
                new ScriptCommandData { Op = 0x4C, Arg1 = 250 },
                new ScriptCommandData { Op = 0x2E, ArgShort = 0, Arg1 = 0 },
                new ScriptCommandData { Op = 0x32, ArgPtr = RomImage.RomVirtualAddress + 0x20 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        var index = ScriptAssetIndex.Build(Database(scene));

        var dialogueHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "dialogue:20",
            Name = "D0001",
            Category = AssetCategory.Dialogue,
            Kind = AssetKind.Dialogue,
            Offset = 0x20,
        });
        Assert.Single(dialogueHits);

        var songHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "sound-song:seq_012",
            Name = "Tiny Woods",
            Category = AssetCategory.Music,
            Kind = AssetKind.SoundSong,
            Metadata = new Dictionary<string, string> { ["songId"] = "12" },
        });
        Assert.Single(songHits);

        var fanfareHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "sound-song:seq_250",
            Name = "Fanfare",
            Category = AssetCategory.SoundEffects,
            Kind = AssetKind.SoundSong,
            Metadata = new Dictionary<string, string> { ["songId"] = "250" },
        });
        Assert.Single(fanfareHits);

        var sceneHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "scene:8",
            Name = "008: Tiny Woods",
            Category = AssetCategory.Scenes,
            Kind = AssetKind.Scene,
            Metadata = new Dictionary<string, string> { ["mapId"] = "8" },
        });
        Assert.Single(sceneHits);

        var mapHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "ground-map:D01P11A:0",
            Name = "D01P11A",
            Category = AssetCategory.GroundMaps,
            Kind = AssetKind.GroundMap,
            Metadata = new Dictionary<string, string> { ["romName"] = "D01P11A" },
        });
        Assert.Single(mapHits);

        var portraitHits = index.FindForAsset(new AssetDescriptor
        {
            Id = "portrait-sheet:Pikachu",
            Name = "Pikachu",
            Category = AssetCategory.Portraits,
            Kind = AssetKind.KaoPortraitSheet,
            Metadata = new Dictionary<string, string> { ["species"] = "Pikachu" },
        });
        Assert.Single(portraitHits);
    }

    [Fact]
    public void FindSourceLineJumpsToCommandUnderStationHeader()
    {
        var scene = MakeScene(mapId: 1, name: "Toy");
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Name = "EVENT_TEST",
            Commands =
            {
                new ScriptCommandData { Op = 0x44, Arg1 = 1 },
                new ScriptCommandData { Op = 0xDB, ArgShort = 8 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        var index = ScriptAssetIndex.Build(Database(scene));
        var hit = Assert.Single(index.Find(ScriptAssetKind.Music, 1));
        var source = SceneScriptSource.Format(scene);

        var line = ScriptAssetIndex.FindSourceLine(source, hit);

        Assert.Equal(4, line);
        Assert.Contains("BGM_SWITCH", source.Split('\n')[line - 1]);
    }

    [Fact]
    public void FindSourceSelectionSelectsQuotedDialogue()
    {
        var scene = MakeScene(mapId: 1, name: "Toy");
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Name = "EVENT_TEST",
            Commands =
            {
                new ScriptCommandData { Op = 0x34, ArgPtr = RomImage.RomVirtualAddress + 0x123456 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        var database = Database(scene);
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 20,
            Text = "Hello, partner!",
        };
        var hit = Assert.Single(ScriptAssetIndex.Build(database).Find(ScriptAssetKind.Dialogue, 0x123456));
        var source = SceneScriptSource.Format(scene, database.DialogueByOffset);
        var selection = ScriptAssetIndex.FindSourceSelection(source, hit);

        Assert.True(selection.Line >= 1);
        var line = source.Replace("\r\n", "\n").Split('\n')[selection.Line - 1];
        Assert.Equal("\"Hello, partner!\"", line.Substring(selection.Column, selection.Length));
    }

    [Fact]
    public void IgnoresUnrelatedIds()
    {
        var scene = MakeScene(mapId: 1, name: "Empty-ish");
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Name = "A",
            Commands = { new ScriptCommandData { Op = 0x44, Arg1 = 5 }, new ScriptCommandData { Op = 0xEF } },
        });

        var index = ScriptAssetIndex.Build(Database(scene));

        Assert.Empty(index.Find(ScriptAssetKind.Music, 99));
        Assert.Empty(index.Find(ScriptAssetKind.Dialogue, 1));
        Assert.Empty(index.FindForAsset(new AssetDescriptor
        {
            Id = "raw:1",
            Name = "raw",
            Category = AssetCategory.RawArchives,
            Kind = AssetKind.Raw,
        }));
    }

    private static SceneDatabase Database(Scene scene)
    {
        var database = new SceneDatabase();
        database.Scenes.Add(scene);
        return database;
    }

    private static Scene MakeScene(int mapId, string name)
    {
        var scene = new Scene { MapId = mapId, Name = name };
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups.Add(group);
        return scene;
    }
}
