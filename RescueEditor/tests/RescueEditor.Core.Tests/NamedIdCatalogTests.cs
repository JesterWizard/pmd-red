using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class NamedIdCatalogTests
{
    [Fact]
    public void LookupAndReverseLookup()
    {
        var catalog = new NamedIdCatalog(
        [
            (7, "MUS_POKEMON_SQUARE"),
            (1, "MUS_RESCUE_TEAM_BASE"),
        ]);

        Assert.True(catalog.TryGetName(7, out var name));
        Assert.Equal("MUS_POKEMON_SQUARE", name);
        Assert.True(catalog.TryGetId("MUS_POKEMON_SQUARE", out var id));
        Assert.Equal(7, id);
        Assert.True(catalog.TryGetId("mus_pokemon_square", out id));
        Assert.Equal(7, id);
        Assert.False(catalog.TryGetName(99, out _));
        Assert.False(catalog.TryGetId("MUS_MISSING", out _));
    }

    [Fact]
    public void SearchPrefersPrefixThenSubstring()
    {
        var catalog = new NamedIdCatalog(
        [
            (1, "MUS_POKEMON_SQUARE"),
            (2, "MUS_POKE"),
            (3, "MUS_FILE_SELECT"),
            (4, "STOP_BGM"),
        ]);

        var hits = catalog.Search("MUS_POKE");
        Assert.Equal(["MUS_POKE", "MUS_POKEMON_SQUARE"], hits.Select(h => h.Name).ToArray());

        hits = catalog.Search("SQUARE");
        Assert.Equal(["MUS_POKEMON_SQUARE"], hits.Select(h => h.Name).ToArray());

        hits = catalog.Search("mus_file");
        Assert.Equal(["MUS_FILE_SELECT"], hits.Select(h => h.Name).ToArray());
    }

    [Fact]
    public void ParseMusicEnumFromBgMusicHeader()
    {
        var catalog = NamedIdCatalogs.ParseMusicEnum("""
            enum MusicID
            {
                MUS_RESCUE_TEAM_BASE = 1,
                MUS_FRIEND_AREA_SWAMP,
                MUS_POKEMON_SQUARE = 7,
                MUS_BLANK_50 = 50,
                MUS_DUNGEON_FAIL,
            };
            """);

        Assert.True(catalog.TryGetId("MUS_RESCUE_TEAM_BASE", out var id));
        Assert.Equal(1, id);
        Assert.True(catalog.TryGetId("MUS_FRIEND_AREA_SWAMP", out id));
        Assert.Equal(2, id);
        Assert.True(catalog.TryGetId("MUS_POKEMON_SQUARE", out id));
        Assert.Equal(7, id);
        Assert.True(catalog.TryGetId("MUS_BLANK_50", out id));
        Assert.Equal(50, id);
        Assert.True(catalog.TryGetId("MUS_DUNGEON_FAIL", out id));
        Assert.Equal(51, id);
    }

    [Fact]
    public void ParseEmotionDefines()
    {
        var catalog = NamedIdCatalogs.ParseEmotionDefines("""
            #define EMOTION_NORMAL 0
            #define EMOTION_HAPPY 1
            #define EMOTION_SUPRISED 12
            #define MAX_EMOTIONS 20
            """);

        Assert.True(catalog.TryGetName(1, out var name));
        Assert.Equal("EMOTION_HAPPY", name);
        Assert.True(catalog.TryGetId("EMOTION_SUPRISED", out var id));
        Assert.Equal(12, id);
        Assert.False(catalog.TryGetId("MAX_EMOTIONS", out _));
    }

    [Fact]
    public void ParseGroundMapEnum()
    {
        var catalog = NamedIdCatalogs.ParseGroundMapEnum("""
            enum GroundMapID
            {
                MAP_SQUARE,
                MAP_POKEMON_SQUARE,
                MAP_TEAM_BASE_PIKACHU_BASIC = 9,
                MAP_TEAM_BASE_PIKACHU_CONSTRUCTION,
            };
            """);

        Assert.True(catalog.TryGetId("MAP_SQUARE", out var id));
        Assert.Equal(0, id);
        Assert.True(catalog.TryGetId("MAP_POKEMON_SQUARE", out id));
        Assert.Equal(1, id);
        Assert.True(catalog.TryGetId("MAP_TEAM_BASE_PIKACHU_BASIC", out id));
        Assert.Equal(9, id);
        Assert.True(catalog.TryGetId("MAP_TEAM_BASE_PIKACHU_CONSTRUCTION", out id));
        Assert.Equal(10, id);
    }

    [Fact]
    public void ParseSfxNamesArray()
    {
        var catalog = NamedIdCatalogs.ParseSfxNames("""
            const struct SfxName gSfxNames[] =
            {
                {"DUMMY", 1},
                {"HABITAT_HOME01", 1},
                {NULL, 1},
                {"LEVELUP", 1},
            };
            """);

        Assert.True(catalog.TryGetName(0, out var name));
        Assert.Equal("DUMMY", name);
        Assert.True(catalog.TryGetName(1, out name));
        Assert.Equal("HABITAT_HOME01", name);
        Assert.False(catalog.TryGetName(2, out _));
        Assert.True(catalog.TryGetName(3, out name));
        Assert.Equal("LEVELUP", name);
        Assert.True(catalog.TryGetId("LEVELUP", out var id));
        Assert.Equal(3, id);
    }

    [Fact]
    public void LoadsRealRepositoryHeadersWhenPresent()
    {
        var root = RuntimeConfigHeaderParser.TryFindHeaderPath();
        if (root is null)
            return;

        var repo = Path.GetDirectoryName(Path.GetDirectoryName(root));
        Assert.NotNull(repo);
        var defs = ScriptNamedDefinitions.TryLoadFromRepository(repo);
        Assert.NotNull(defs);
        Assert.True(defs!.Music.TryGetId("MUS_POKEMON_SQUARE", out var mus));
        Assert.Equal(7, mus);
        Assert.True(defs.Emotion.TryGetId("EMOTION_HAPPY", out var emotion));
        Assert.Equal(1, emotion);
        Assert.True(defs.Map.TryGetId("MAP_POKEMON_SQUARE", out var map));
        Assert.Equal(1, map);
    }
}
