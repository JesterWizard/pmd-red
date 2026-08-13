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
    public void ParseMoveAndTypeDefines()
    {
        var moves = NamedIdCatalogs.ParseMoveDefines("""
            #define MOVE_NOTHING 0x0
            #define MOVE_IRON_TAIL 0x1
            #define MOVE_TACKLE 0x9A
            #define NUM_MOVE_IDS (MOVE_SLEEP_TALK_ATTACK + 1)
            """);
        Assert.True(moves.TryGetId("MOVE_IRON_TAIL", out var id));
        Assert.Equal(1, id);
        Assert.True(moves.TryGetId("MOVE_TACKLE", out id));
        Assert.Equal(0x9A, id);
        Assert.False(moves.TryGetId("NUM_MOVE_IDS", out _));

        var types = NamedIdCatalogs.ParseTypeDefines("""
            #define TYPE_NONE 0x0
            #define TYPE_GRASS 0x4
            #define TYPE_STEEL 0x11
            #define NUM_TYPES 0x12
            """);
        Assert.Equal("TYPE_GRASS", types.Format(4));
        Assert.False(types.TryGetId("NUM_TYPES", out _));
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
        Assert.True(defs.UpdateName.TryGetId("UPDATE_NAME_ACTOR_SELF", out var kind));
        Assert.Equal(7, kind);
        Assert.True(defs.ObjFlag.TryGetId("OBJ_FLAG_AIRBORNE", out var flag));
        Assert.Equal(0x01000000, flag);
        Assert.True(defs.EmotionEffect.TryGetId("EMOTION_EFFECT_NOTICE", out var effect));
        Assert.Equal(88, effect);
        Assert.True(defs.Direction.TryGetId("DIRECTION_NORTH", out var dir));
        Assert.Equal(4, dir);
        Assert.True(defs.Placement.TryGetId("PLACEMENT_KEEP", out var place));
        Assert.Equal(21, place);
        Assert.True(defs.GroundAnim.TryGetId("GROUND_ANIM_STILL", out var anim));
        Assert.Equal(2, anim);
        Assert.True(defs.ScriptId.TryGetId("END_TALK", out var script));
        Assert.Equal(0, script);
        Assert.True(defs.ScriptId.TryGetId("COMMON_ENTER", out _));
        Assert.True(defs.PaletteUtil.TryGetId("PALUTIL_KIND_13", out var pal));
        Assert.Equal(13, pal);
    }

    [Fact]
    public void ParseUpdateNameKindEnum()
    {
        var catalog = NamedIdCatalogs.ParseUpdateNameKindEnum("""
            enum UpdateNameKind
            {
                UPDATE_NAME_CLEAR = 0,
                UPDATE_NAME_SPEECH_SELF = 1,
                UPDATE_NAME_ACTOR_SELF = 7,
                UPDATE_NAME_DUNGEON_FLOORS = 10,
            };
            """);

        Assert.True(catalog.TryGetId("UPDATE_NAME_CLEAR", out var id));
        Assert.Equal(0, id);
        Assert.True(catalog.TryGetId("UPDATE_NAME_ACTOR_SELF", out id));
        Assert.Equal(7, id);
        Assert.True(catalog.TryGetName(10, out var name));
        Assert.Equal("UPDATE_NAME_DUNGEON_FLOORS", name);
    }

    [Fact]
    public void ParseObjFlagDefines()
    {
        var catalog = NamedIdCatalogs.ParseObjFlagDefines("""
            #define OBJ_FLAG_CANCEL_SCRIPT2   0x00000400
            #define OBJ_FLAG_WALK_RELATED     0x00001000
            #define OBJ_FLAG_INTERACT_MASK    0x0000001F
            #define OBJ_FLAG_AIRBORNE         0x01000000
            """);

        Assert.True(catalog.TryGetId("OBJ_FLAG_AIRBORNE", out var id));
        Assert.Equal(0x01000000, id);
        Assert.True(catalog.TryGetName(0x1F, out var name));
        Assert.Equal("OBJ_FLAG_INTERACT_MASK", name);
        Assert.True(catalog.TryGetId("OBJ_FLAG_CANCEL_SCRIPT2", out id));
        Assert.Equal(0x400, id);
    }

    [Fact]
    public void ParseEmotionEffectDefines()
    {
        var catalog = NamedIdCatalogs.ParseEmotionEffectDefines("""
            #define EMOTION_EFFECT_NONE       0
            #define EMOTION_EFFECT_NOTICE     88
            #define EMOTION_EFFECT_ANGRY      94
            """);

        Assert.True(catalog.TryGetId("EMOTION_EFFECT_NOTICE", out var id));
        Assert.Equal(88, id);
        Assert.True(catalog.TryGetName(0, out var name));
        Assert.Equal("EMOTION_EFFECT_NONE", name);
        Assert.False(catalog.TryGetId("EMOTION_NORMAL", out _));
    }

    [Fact]
    public void ParseDirectionEnums()
    {
        var direction = NamedIdCatalogs.ParseDirectionEnum("""
            enum Direction
            {
                DIRECTION_SOUTH,
                DIRECTION_SOUTHEAST,
                DIRECTION_EAST,
                DIRECTION_NORTHEAST,
                DIRECTION_NORTH,
                NUM_DIRECTIONS
            };
            """);
        Assert.True(direction.TryGetId("DIRECTION_NORTH", out var id));
        Assert.Equal(4, id);
        Assert.False(direction.TryGetId("NUM_DIRECTIONS", out _));

        var trans = NamedIdCatalogs.ParseDirTransEnum("""
            enum DirectionTransformation
            {
                DIR_TRANS_NONE,
                DIR_TRANS_SPINRIGHT1,
                DIR_TRANS_10 = 10,
                DIR_TRANS_11,
            };
            """);
        Assert.True(trans.TryGetId("DIR_TRANS_NONE", out id));
        Assert.Equal(0, id);
        Assert.True(trans.TryGetId("DIR_TRANS_11", out id));
        Assert.Equal(11, id);
    }

    [Fact]
    public void ParsePlacementEnumAndKeepAlias()
    {
        var catalog = NamedIdCatalogs.ParsePortraitPlacement("""
            enum PortraitPlacementID
            {
                PLACEMENT_LEFT_BOTTOM_1,
                PLACEMENT_CENTERLEFT_CENTER,
                PLACEMENT_LEFT_BOTTOM_2,
                PLACEMENT_RIGHT_BOTTOM_FLIP,
                PLACEMENT_COUNT,
            };
            #define PLACEMENT_KEEP PLACEMENT_COUNT
            """);
        Assert.True(catalog.TryGetId("PLACEMENT_LEFT_BOTTOM_1", out var id));
        Assert.Equal(0, id);
        Assert.True(catalog.TryGetId("PLACEMENT_RIGHT_BOTTOM_FLIP", out id));
        Assert.Equal(3, id);
        Assert.True(catalog.TryGetId("PLACEMENT_KEEP", out id));
        Assert.Equal(4, id);
        Assert.False(catalog.TryGetId("PLACEMENT_COUNT", out _));
    }

    [Fact]
    public void ParseGroundAnimDefines()
    {
        var catalog = NamedIdCatalogs.ParseGroundAnimDefines("""
            #define GROUND_ANIM_STILL 2
            #define GROUND_ANIM_SLEEP 6
            """);
        Assert.True(catalog.TryGetId("GROUND_ANIM_STILL", out var id));
        Assert.Equal(2, id);
        Assert.True(catalog.TryGetName(6, out var name));
        Assert.Equal("GROUND_ANIM_SLEEP", name);
    }

    [Fact]
    public void ParseScriptIdEnum()
    {
        var catalog = NamedIdCatalogs.ParseScriptIdEnum("""
            enum ScriptID
            {
                END_TALK,
                WAIT_END_TALK_FUNC,
                COMMON_ENTER = 355,
                NUM_SCRIPT_IDS
            };
            """);
        Assert.True(catalog.TryGetId("END_TALK", out var id));
        Assert.Equal(0, id);
        Assert.True(catalog.TryGetId("COMMON_ENTER", out id));
        Assert.Equal(355, id);
        Assert.False(catalog.TryGetId("NUM_SCRIPT_IDS", out _));
    }

    [Fact]
    public void ParseGroundScriptParamsHeader()
    {
        var text = """
            enum UpdateNameKind
            {
                UPDATE_NAME_CLEAR = 0,
                UPDATE_NAME_ACTOR_SELF = 7,
            };
            #define OBJ_FLAG_AIRBORNE         0x01000000
            #define EMOTION_EFFECT_NOTICE     88
            #define GROUND_ANIM_STILL 2
            """;
        var (updateName, objFlag, emotionEffect, groundAnim) = NamedIdCatalogs.ParseGroundScriptParams(text);
        Assert.True(updateName.TryGetId("UPDATE_NAME_ACTOR_SELF", out var kind));
        Assert.Equal(7, kind);
        Assert.True(objFlag.TryGetId("OBJ_FLAG_AIRBORNE", out var flag));
        Assert.Equal(0x01000000, flag);
        Assert.True(emotionEffect.TryGetId("EMOTION_EFFECT_NOTICE", out var effect));
        Assert.Equal(88, effect);
        Assert.True(groundAnim.TryGetId("GROUND_ANIM_STILL", out var anim));
        Assert.Equal(2, anim);
    }
}
