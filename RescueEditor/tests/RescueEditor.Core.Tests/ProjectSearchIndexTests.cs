using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ProjectSearchIndexTests
{
    [Fact]
    public void EmptyOrWhitespaceQueryReturnsNothing()
    {
        var index = IndexWithDialogueAndScript();

        Assert.Empty(index.Search(""));
        Assert.Empty(index.Search("   "));
        Assert.Empty(ProjectSearchIndex.Empty.Search("MSG_NPC"));
    }

    [Fact]
    public void FindsDialogueSubstringAndId()
    {
        var index = IndexWithDialogueAndScript();

        var byText = Assert.Single(index.Search("partner").Where(h => h.Kind == ProjectSearchKind.Dialogue));
        Assert.Equal(ProjectSearchMatch.Text, byText.Match);
        Assert.Equal("dialogue:123456", byText.AssetId);
        Assert.Equal(0x123456, byText.DialogueOffset);
        Assert.Contains("Hello, partner!", byText.Snippet, StringComparison.OrdinalIgnoreCase);
        Assert.NotNull(byText.Script);
        Assert.Equal("MSG_NPC", byText.Script!.OpcodeName);
        Assert.Equal(ScriptSiteKind.Station, byText.Script.Site);

        var byId = Assert.Single(index.Search("D0007").Where(h => h.Kind == ProjectSearchKind.Dialogue));
        Assert.Equal(ProjectSearchMatch.Id, byId.Match);
        Assert.Equal("D0007", byId.Title);

        var byOffset = Assert.Single(index.Search("123456").Where(h => h.Kind == ProjectSearchKind.Dialogue));
        Assert.Equal(0x123456, byOffset.DialogueOffset);
    }

    [Fact]
    public void FindsOpcodeAndNamedDefineUsages()
    {
        var index = IndexWithDialogueAndScript();

        var opcode = Assert.Single(index.Search("BGM_SWITCH").Where(h => h.Kind == ProjectSearchKind.Script));
        Assert.Equal(ProjectSearchMatch.Opcode, opcode.Match);
        Assert.Equal("BGM_SWITCH", opcode.Title);
        Assert.NotNull(opcode.Script);
        Assert.Equal(ScriptSiteKind.Station, opcode.Script!.Site);
        Assert.Equal(1, opcode.Script.CommandIndex);

        var define = Assert.Single(index.Search("MUS_POKE").Where(h => h.Kind == ProjectSearchKind.Script));
        Assert.Equal(ProjectSearchMatch.Define, define.Match);
        Assert.Contains("MUS_POKE_SQUARE", define.Snippet, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(34, define.Script!.Value);
    }

    [Fact]
    public void DialogueTextAlsoYieldsReferencingScript()
    {
        var index = IndexWithDialogueAndScript();

        var hits = index.Search("Hello, partner");
        Assert.Contains(hits, h => h.Kind == ProjectSearchKind.Dialogue);
        var script = Assert.Single(hits.Where(h => h.Kind == ProjectSearchKind.Script));
        Assert.Equal(ProjectSearchMatch.Text, script.Match);
        Assert.Equal("MSG_NPC", script.Script!.OpcodeName);
    }

    [Fact]
    public void RanksExactOpcodeAheadOfSubstringText()
    {
        var scene = MakeScene(1, "Pond");
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Name = "EVENT",
            Commands =
            {
                new ScriptCommandData { Op = 0x44, Arg1 = 34 },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        var database = Database(scene);
        var assets = new[]
        {
            Dialogue("dialogue:1", "D0001", 0x10, "We should BGM_SWITCH the mood later."),
        };
        var index = ProjectSearchIndex.Build(assets, database, MusicNames());

        var hits = index.Search("BGM_SWITCH");
        Assert.True(hits.Count >= 2);
        Assert.Equal(ProjectSearchKind.Script, hits[0].Kind);
        Assert.Equal(ProjectSearchMatch.Opcode, hits[0].Match);
        Assert.Equal(ProjectSearchRank.Exact, hits[0].Rank);
        Assert.Contains(hits, h => h.Kind == ProjectSearchKind.Dialogue && h.Match == ProjectSearchMatch.Text);
    }

    [Fact]
    public void IsCaseInsensitiveAndHonorsLimit()
    {
        var index = IndexWithDialogueAndScript();

        var lower = index.Search("msg_npc");
        var upper = index.Search("MSG_NPC");
        Assert.Equal(lower.Select(h => h.Title), upper.Select(h => h.Title));
        Assert.NotEmpty(lower);

        var limited = index.Search("e", limit: 2);
        Assert.Equal(2, limited.Count);
    }

    [Fact]
    public void UnrelatedQueryIsEmpty()
    {
        var index = IndexWithDialogueAndScript();
        Assert.Empty(index.Search("xyzzynotfound"));
    }

    private static ProjectSearchIndex IndexWithDialogueAndScript()
    {
        var scene = MakeScene(12, "Whiscash Pond");
        var sector = scene.Groups[0].Sectors[0];
        sector.Stations.Add(new ScriptRefData
        {
            Name = "EVENT",
            Commands =
            {
                new ScriptCommandData { Op = 0x08, Arg1 = 12 },
                new ScriptCommandData { Op = 0x44, Arg1 = 34 },
                new ScriptCommandData
                {
                    Op = 0x34,
                    ArgShort = 0,
                    ArgPtr = RomImage.RomVirtualAddress + 0x123456,
                },
                new ScriptCommandData { Op = 0xEF },
            },
        });
        var database = Database(scene);
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 16,
            Text = "Hello, partner!",
        };
        var assets = new[]
        {
            Dialogue("dialogue:123456", "D0007", 0x123456, "Hello, partner!"),
        };
        return ProjectSearchIndex.Build(assets, database, MusicNames());
    }

    private static ScriptNamedDefinitions MusicNames() => new()
    {
        Music = new NamedIdCatalog([(34, "MUS_POKE_SQUARE")]),
        Fanfare = new NamedIdCatalog([]),
        Map = new NamedIdCatalog([(12, "MAP_WHISCASH_POND")]),
        Emotion = new NamedIdCatalog([]),
        UpdateName = new NamedIdCatalog([]),
        ObjFlag = new NamedIdCatalog([]),
        EmotionEffect = new NamedIdCatalog([]),
        Direction = new NamedIdCatalog([]),
        DirTrans = new NamedIdCatalog([]),
        Placement = new NamedIdCatalog([]),
        GroundAnim = new NamedIdCatalog([]),
        ScriptId = new NamedIdCatalog([]),
        PaletteUtil = new NamedIdCatalog([]),
    };

    private static AssetDescriptor Dialogue(string id, string name, int offset, string text) => new()
    {
        Id = id,
        Name = name,
        Category = AssetCategory.Dialogue,
        Kind = AssetKind.Dialogue,
        Offset = offset,
        Size = text.Length,
        Description = text,
        Metadata = new Dictionary<string, string>
        {
            ["dialogueId"] = name.TrimStart('D').TrimStart('0') is { Length: > 0 } n ? n : "0",
            ["romOffset"] = $"0x{offset:X}",
        },
    };

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
