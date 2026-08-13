using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptSourceTests
{
    [Fact]
    public void FormatsAsk3WithQuotedPrompt()
    {
        var command = new ScriptCommandData
        {
            Op = 0xD5,
            ArgByte = 1,
            ArgShort = 0,
            Arg1 = -1,
            ArgPtr = 0x08123456,
        };
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Activate the subevent?" },
        };

        var line = ScriptSource.FormatCommand(command, dialogue);

        Assert.Equal("ASK3(1, 0, -1, \"Activate the subevent?\")", line);
    }

    [Fact]
    public void ParsesAsk3RoundTrip()
    {
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Activate the subevent?" },
        };
        var parsed = ScriptSource.Parse(
            "ASK3(1, 0, -1, \"Activate the subevent?\")",
            dialogue);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(0xD5, command.Command.Op);
        Assert.Equal(1, command.Command.ArgByte);
        Assert.Equal(0, command.Command.ArgShort);
        Assert.Equal(-1, command.Command.Arg1);
        Assert.Equal("Activate the subevent?", command.DialogueText);
    }

    [Fact]
    public void FormatsSceneLiveScriptsWithPortraitDialogue()
    {
        var scene = new Scene { MapId = 191, Name = "Great Canyon" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        var live = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 0,
            Index = 0,
            Group = 0,
            Sector = 0,
            DisplayName = "Live 0",
            ScriptOffsets = [-1, -1, -1, -1],
        };
        live.Scripts.Add(new EntityScriptSlot
        {
            Offset = 0x100,
            Capacity = 48,
            Commands =
            {
                new ScriptCommandData { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 0 },
                new ScriptCommandData { Op = 0x34, ArgShort = 1, ArgPtr = 0x08123456 },
                new ScriptCommandData { Op = 0x30 },
                new ScriptCommandData { Op = 0xF0 },
            },
        });
        live.ScriptOffsets[0] = 0x100;
        sector.Lives.Add(live);
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 64, Text = " This is the Great Canyon..." },
        };

        var text = SceneScriptSource.Format(scene, dialogue);

        Assert.Contains("@live g0/s0 dlg0", text);
        Assert.Contains("PORTRAIT(3, 1, 0)", text);
        Assert.Contains("DIALOGUE(1, \" This is the Great Canyon...\")", text);
        Assert.Contains("TEXTBOX_CLEAR()", text);
    }

    [Fact]
    public void ApplyUpdatesLiveScriptCommands()
    {
        var scene = new Scene { MapId = 1, Name = "Toy" };
        var group = new SceneGroup { Index = 0 };
        var sector = new SceneSector { Group = 0, Sector = 0 };
        var live = new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 0,
            Index = 0,
            Group = 0,
            Sector = 0,
            DisplayName = "Live 0",
            ScriptOffsets = [0x100, -1, -1, -1],
        };
        var slot = new EntityScriptSlot
        {
            Offset = 0x100,
            Capacity = 32,
            Commands =
            {
                new ScriptCommandData { Op = 0x34, ArgShort = 1, ArgPtr = 0x08123456 },
                new ScriptCommandData { Op = 0xEF },
            },
        };
        live.Scripts.Add(slot);
        sector.Lives.Add(live);
        group.Sectors.Add(sector);
        scene.Groups.Add(group);
        var database = new SceneDatabase();
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 64,
            Text = "Old.",
        };
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @live g0/s0 dlg0
            DIALOGUE(1, "New line.")
            RET()
            """, database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, database);

        Assert.Equal(2, slot.Commands.Count);
        Assert.Equal(0x34, slot.Commands[0].Op);
        Assert.Equal("New line.", database.DialogueByOffset[0x123456].Text);
        Assert.True(slot.Dirty);
    }

    [Fact]
    public void FormatsMsgNpcAsDialogueWithQuotedText()
    {
        var command = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = 0x08123456,
        };
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Hello my name is {ACTOR}." },
        };

        var line = ScriptSource.FormatCommand(command, dialogue);

        Assert.Equal("DIALOGUE(2, \"Hello my name is {ACTOR}.\")", line);
    }

    [Fact]
    public void FormatsWalkRelativeAsMoveToCoords()
    {
        var command = new ScriptCommandData
        {
            Op = 0x6A,
            ArgShort = 2,
            Arg1 = 46,
            Arg2 = 92,
        };

        var line = ScriptSource.FormatCommand(command);

        Assert.Equal("MOVE_TO_COORDS(2, 46, 92)", line);
    }

    [Fact]
    public void ParsesDialogueAliasIntoMsgNpc()
    {
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Hello my name is {ACTOR}." },
        };

        var parsed = ScriptSource.Parse(
            "DIALOGUE(2, \"Hello my name is {ACTOR}.\")",
            dialogue);

        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(0x34, command.Command.Op);
        Assert.Equal(2, command.Command.ArgShort);
        Assert.Equal(0x08123456u, command.Command.ArgPtr);
        Assert.Equal("Hello my name is {ACTOR}.", command.DialogueText);
    }

    [Fact]
    public void ParsesMoveToCoordsAliasIntoWalkRelative()
    {
        var parsed = ScriptSource.Parse("MOVE_TO_COORDS(2, 46, 92)");

        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var command = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(0x6A, command.Command.Op);
        Assert.Equal(2, command.Command.ArgShort);
        Assert.Equal(46, command.Command.Arg1);
        Assert.Equal(92, command.Command.Arg2);
    }

    [Fact]
    public void WalkRelativeRoundTripsBytes()
    {
        var original = new ScriptCommandData
        {
            Op = 0x6A,
            ArgByte = 0,
            ArgShort = 2,
            Arg1 = 46,
            Arg2 = 92,
        };

        var parsed = ScriptSource.Parse(ScriptSource.FormatCommand(original));

        Assert.True(parsed.Ok);
        var roundTrip = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(original.ToBytes(), roundTrip.Command.ToBytes());
    }

    [Fact]
    public void MsgNpcRoundTripsBytesWhenDialogueIsKnown()
    {
        var original = new ScriptCommandData
        {
            Op = 0x34,
            ArgShort = 2,
            ArgPtr = 0x08123456,
        };
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Hello my name is {ACTOR}." },
        };

        var parsed = ScriptSource.Parse(ScriptSource.FormatCommand(original, dialogue), dialogue);

        Assert.True(parsed.Ok);
        var roundTrip = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(original.ToBytes(), roundTrip.Command.ToBytes());
    }

    [Fact]
    public void UnknownOpcodeRoundTripsAsCmdHex()
    {
        var original = new ScriptCommandData
        {
            Op = 0x2A,
            ArgByte = 1,
            ArgShort = 2,
            Arg1 = 3,
            Arg2 = 4,
            ArgPtr = 0x08001000,
        };

        var line = ScriptSource.FormatCommand(original);
        Assert.StartsWith("CMD_2A(", line);

        var parsed = ScriptSource.Parse(line);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var roundTrip = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(original.ToBytes(), roundTrip.Command.ToBytes());
    }

    [Theory]
    [InlineData(0x2D, 7, 0, 0, 0, "UPDATE_NAME(7, 0, 0)")]
    [InlineData(0x52, 0, 0, 0x01000000, 0, "SET_OBJ_FLAGS(16777216)")]
    [InlineData(0x53, 0, 0, 0x01000000, 0, "CLEAR_OBJ_FLAGS(16777216)")]
    [InlineData(0x60, 0, 0, 0x88, 0, "SET_HEIGHT(136)")]
    [InlineData(0x70, 0, 0x0A00, 0, 0, "HEIGHT_TO(2560, 0)")]
    [InlineData(0x84, 0, 0x80, -24, 0, "WALK_RELATIVE_DIST(128, -24, 0)")]
    [InlineData(0xDF, 0, 0, 0, 0, "WAIT_FADE()")]
    [InlineData(0xDE, 0, 0, 0, 0, "WAIT_EFFECT()")]
    [InlineData(0x56, 0, 0, 0x1A2, 0, "EMOTION_EFFECT(418)")]
    [InlineData(0x93, 4, 10, 0, 0, "ROTATE_TO_LIVES(4, 10, 0)")]
    public void SkyTowerOpcodesFormatAndParseByName(
        byte op, byte argByte, short argShort, int arg1, int arg2, string expected)
    {
        var original = new ScriptCommandData
        {
            Op = op,
            ArgByte = argByte,
            ArgShort = argShort,
            Arg1 = arg1,
            Arg2 = arg2,
        };

        var line = ScriptSource.FormatCommand(original);
        Assert.Equal(expected, line);

        var parsed = ScriptSource.Parse(line);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var roundTrip = Assert.Single(Assert.Single(parsed.Sections).Commands);
        Assert.Equal(original.ToBytes(), roundTrip.Command.ToBytes());
    }

    [Fact]
    public void ParseErrorReportsLineNumber()
    {
        var parsed = ScriptSource.Parse("WAIT(1)\nNOT_A_COMMAND(\nRET()");

        Assert.False(parsed.Ok);
        var error = Assert.Single(parsed.Errors);
        Assert.Equal(2, error.Line);
        Assert.Contains("NOT_A_COMMAND", error.Message);
    }

    [Fact]
    public void FormatsSceneStationsWithHeaders()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0x34, ArgShort = 2, ArgPtr = 0x08123456 },
            new ScriptCommandData { Op = 0x6A, ArgShort = 2, Arg1 = 46, Arg2 = 92 },
            new ScriptCommandData { Op = 0xEF });
        var dialogue = new Dictionary<int, DialogueString>
        {
            [0x123456] = new() { Offset = 0x123456, Size = 32, Text = "Hello my name is {ACTOR}." },
        };

        var text = SceneScriptSource.Format(scene, dialogue);

        Assert.Contains("@station g0/s0 EVENT_TEST", text);
        Assert.Contains("DIALOGUE(2, \"Hello my name is {ACTOR}.\")", text);
        Assert.Contains("MOVE_TO_COORDS(2, 46, 92)", text);
        Assert.Contains("RET()", text);
    }

    [Fact]
    public void ParsesStationHeaderWithoutName()
    {
        var parsed = ScriptSource.Parse("""
            @station g0/s0
            WAIT(8)
            RET()
            """);

        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var section = Assert.Single(parsed.Sections);
        Assert.Equal("station", section.Kind);
        Assert.Equal(0, section.Group);
        Assert.Equal(0, section.Sector);
        Assert.Equal(string.Empty, section.Name);
        Assert.Equal(2, section.Commands.Count);
    }

    [Fact]
    public void ApplyUpdatesUnnamedStation()
    {
        var scene = CreateSceneWithStation("",
            new ScriptCommandData { Op = 0xDB, ArgShort = 1 },
            new ScriptCommandData { Op = 0xEF });
        var station = scene.Groups[0].Sectors[0].Stations[0];
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @station g0/s0
            WAIT(8)
            RET()
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed);

        Assert.Equal(8, station.Commands[0].ArgShort);
    }

    [Fact]
    public void FormatOmitsEmptyStationName()
    {
        var scene = CreateSceneWithStation("",
            new ScriptCommandData { Op = 0xEF });

        var text = SceneScriptSource.Format(scene);

        Assert.Contains("@station g0/s0\n", text);
        Assert.DoesNotContain("@station g0/s0 \n", text);
    }

    [Fact]
    public void ApplyReplacesStationCommandsIncludingInsertAndDelete()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0x6A, ArgShort = 2, Arg1 = 46, Arg2 = 92 },
            new ScriptCommandData { Op = 0xEF });
        var station = scene.Groups[0].Sectors[0].Stations[0];
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @station g0/s0 EVENT_TEST
            MOVE_TO_COORDS(2, 10, 20)
            WAIT(8)
            RET()
            """);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed);

        Assert.Equal(3, station.Commands.Count);
        Assert.Equal(0x6A, station.Commands[0].Op);
        Assert.Equal(10, station.Commands[0].Arg1);
        Assert.Equal(20, station.Commands[0].Arg2);
        Assert.Equal(0xDB, station.Commands[1].Op);
        Assert.Equal(8, station.Commands[1].ArgShort);
        Assert.Equal(0xEF, station.Commands[2].Op);

        changes.Undo();
        Assert.Equal(2, station.Commands.Count);
        Assert.Equal(46, station.Commands[0].Arg1);
    }

    [Fact]
    public void ApplyUpdatesExistingDialogueText()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0x34, ArgShort = 2, ArgPtr = 0x08123456 },
            new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 64,
            Text = "Hello my name is {ACTOR}.",
        };
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Goodbye.")
            RET()
            """, database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, database);

        Assert.Equal("Goodbye.", database.DialogueByOffset[0x123456].Text);
        Assert.Equal(0x08123456u, scene.Groups[0].Sectors[0].Stations[0].Commands[0].ArgPtr);
    }

    [Fact]
    public void ApplyAllowsDialogueLongerThanOriginalSlot()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0x34, ArgShort = 2, ArgPtr = 0x08123456 },
            new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 13,
            Text = "Hello world.",
        };
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Hello there, world!!!!")
            RET()
            """, database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, database);

        var dialogue = database.DialogueByOffset[0x123456];
        Assert.Equal("Hello there, world!!!!", dialogue.Text);
        Assert.True(dialogue.Dirty);
        Assert.Equal(13, dialogue.Size);
    }

    [Fact]
    public void ParseOmitsCommentedCommands()
    {
        var parsed = ScriptSource.Parse("""
            @station g0/s0 EVENT_TEST
            # MOVE_TO_COORDS(2, 46, 92)
            // WAIT(4)
            WAIT(8)
            RET()
            """);

        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var commands = Assert.Single(parsed.Sections).Commands;
        Assert.Equal(2, commands.Count);
        Assert.Equal(0xDB, commands[0].Command.Op);
        Assert.Equal(8, commands[0].Command.ArgShort);
        Assert.Equal(0xEF, commands[1].Command.Op);
    }

    [Fact]
    public void ApplyPreservesCommentedCommandsWhenReformatted()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0x6A, ArgShort = 2, Arg1 = 46, Arg2 = 92 },
            new ScriptCommandData { Op = 0xDB, ArgShort = 8 },
            new ScriptCommandData { Op = 0xEF });
        var changes = new ChangeService();
        var source = """
            @station g0/s0 EVENT_TEST
            # MOVE_TO_COORDS(2, 46, 92)
            WAIT(8)
            RET()
            """;

        var parsed = SceneScriptSource.Parse(source);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, sourceText: source);

        var station = scene.Groups[0].Sectors[0].Stations[0];
        Assert.Equal(2, station.Commands.Count);
        Assert.Equal(0xDB, station.Commands[0].Op);

        var formatted = SceneScriptSource.Format(scene);
        Assert.Contains("# MOVE_TO_COORDS(2, 46, 92)", formatted);
        Assert.Contains("WAIT(8)", formatted);
        Assert.DoesNotContain("MOVE_TO_COORDS(2, 46, 92)\n", formatted.Replace("# MOVE_TO_COORDS(2, 46, 92)", ""));

        changes.Undo();
        Assert.Equal(3, station.Commands.Count);
        Assert.DoesNotContain("# MOVE_TO_COORDS", SceneScriptSource.Format(scene));
    }

    [Fact]
    public void ApplyReusesCommentedDialoguePointerWhenCommandIndexShifts()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0xDB, ArgShort = 8 },
            new ScriptCommandData { Op = 0x34, ArgShort = 2, ArgPtr = 0x08123456 },
            new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        database.DialogueByOffset[0x123456] = new DialogueString
        {
            Offset = 0x123456,
            Size = 32,
            Text = "Old line.",
        };
        var changes = new ChangeService();
        var source = """
            @station g0/s0 EVENT_TEST
            # WAIT(8)
            DIALOGUE(2, "Replacement line.")
            RET()
            """;

        var parsed = SceneScriptSource.Parse(source, database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, database, source);

        var command = scene.Groups[0].Sectors[0].Stations[0].Commands[0];
        Assert.Equal(0x34, command.Op);
        Assert.Equal(0x08123456u, command.ArgPtr);
        Assert.Equal("Replacement line.", database.DialogueByOffset[0x123456].Text);
    }

    [Fact]
    public void ApplyKeepsNewDialogueTextOnReformat()
    {
        var scene = CreateSceneWithStation("EVENT_TEST",
            new ScriptCommandData { Op = 0xEF });
        var database = new SceneDatabase();
        var changes = new ChangeService();

        var parsed = SceneScriptSource.Parse("""
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Hello my name is {ACTOR}.")
            RET()
            """, database.DialogueByOffset);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));

        SceneEditing.ApplySceneScriptSource(changes, scene, parsed, database);

        var text = SceneScriptSource.Format(scene, database.DialogueByOffset);
        Assert.Contains("DIALOGUE(2, \"Hello my name is {ACTOR}.\")", text);
    }

    private static ScriptNamedDefinitions TestNames() => new()
    {
        Music = new NamedIdCatalog([(7, "MUS_POKEMON_SQUARE"), (12, "MUS_WELCOME_TO_THE_WORLD_OF_POKEMON")]),
        Fanfare = new NamedIdCatalog([(206, "LEVELUP"), (204, "REWARD")]),
        Map = new NamedIdCatalog([(0, "MAP_SQUARE"), (1, "MAP_POKEMON_SQUARE")]),
        Emotion = new NamedIdCatalog([(0, "EMOTION_NORMAL"), (1, "EMOTION_HAPPY"), (12, "EMOTION_SUPRISED")]),
        UpdateName = new NamedIdCatalog([(0, "UPDATE_NAME_CLEAR"), (7, "UPDATE_NAME_ACTOR_SELF")]),
        ObjFlag = new NamedIdCatalog([(0x1F, "OBJ_FLAG_INTERACT_MASK"), (0x01000000, "OBJ_FLAG_AIRBORNE")]),
        EmotionEffect = new NamedIdCatalog([(0, "EMOTION_EFFECT_NONE"), (88, "EMOTION_EFFECT_NOTICE")]),
        Direction = new NamedIdCatalog([(0, "DIRECTION_SOUTH"), (4, "DIRECTION_NORTH")]),
        DirTrans = new NamedIdCatalog([(0, "DIR_TRANS_NONE"), (10, "DIR_TRANS_10")]),
        Placement = new NamedIdCatalog([(0, "PLACEMENT_LEFT_BOTTOM_1"), (3, "PLACEMENT_RIGHT_BOTTOM_FLIP"), (21, "PLACEMENT_KEEP")]),
        GroundAnim = new NamedIdCatalog([(2, "GROUND_ANIM_STILL"), (5, "GROUND_ANIM_WALK_IN_PLACE"), (6, "GROUND_ANIM_SLEEP")]),
        ScriptId = new NamedIdCatalog([(0, "END_TALK"), (355, "COMMON_ENTER")]),
        PaletteUtil = new NamedIdCatalog([(0, "PALUTIL_KIND_00"), (1, "PALUTIL_KIND_01"), (13, "PALUTIL_KIND_13")]),
    };

    [Fact]
    public void FormatsPortraitPlacementAnimationAndJumpScriptNames()
    {
        var names = TestNames();
        Assert.Equal(
            "PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 1, EMOTION_NORMAL)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 0 },
                names: names));
        Assert.Equal(
            "SELECT_ANIMATION(GROUND_ANIM_STILL)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x54, ArgShort = 2 }, names: names));
        Assert.Equal(
            "JUMP_SCRIPT(END_TALK)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0xE9, ArgShort = 0 }, names: names));
        Assert.Equal(
            "FLASH_FROM(1, PALUTIL_KIND_13, 60, 0)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x27, ArgByte = 1, ArgShort = 13, Arg1 = 60, Arg2 = 0 },
                names: names));
        Assert.Equal(
            "CAMERA_SHAKE(2, 1, 3)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x97, ArgShort = 2, Arg1 = 1, Arg2 = 3 }));
        Assert.Equal(
            "TEXTBOX_AUTO_PRESS(-1, -1)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x2B, Arg1 = -1, Arg2 = -1 }));
        Assert.Equal(
            "FANFARE_FADEOUT2(60, 453)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x4E, ArgShort = 60, Arg1 = 453 }));
    }

    [Fact]
    public void ParsesNewNamedCommandsAndParamCatalogs()
    {
        var names = TestNames();
        var parsed = ScriptSource.Parse("""
            PORTRAIT(PLACEMENT_KEEP, 1, EMOTION_HAPPY)
            SELECT_ANIMATION(GROUND_ANIM_SLEEP)
            JUMP_SCRIPT(COMMON_ENTER)
            CALL_SCRIPT(END_TALK)
            FLASH_TO(1, PALUTIL_KIND_01, 5, 0)
            TEXTBOX_AUTO_PRESS(60, 60)
            FANFARE_FADEOUT2(60, LEVELUP)
            CAMERA_SHAKE(0, 0, 0)
            EMOTION_EFFECT(EMOTION_EFFECT_NOTICE)
            """, names: names);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var commands = Assert.Single(parsed.Sections).Commands;
        Assert.Equal(21, commands[0].Command.ArgByte);
        Assert.Equal(6, commands[1].Command.ArgShort);
        Assert.Equal(355, commands[2].Command.ArgShort);
        Assert.Equal(0, commands[3].Command.ArgShort);
        Assert.Equal(1, commands[4].Command.ArgShort);
        Assert.Equal(60, commands[5].Command.Arg1);
        Assert.Equal(206, commands[6].Command.Arg1);
        Assert.Equal(0, commands[7].Command.ArgShort);
        Assert.Equal(88, commands[8].Command.Arg1);
    }

    [Fact]
    public void FormatsAndParsesDebuginfoOIgnoringFilenamePtr()
    {
        var formatted = ScriptSource.FormatCommand(new ScriptCommandData
        {
            Op = 0xF6,
            ArgShort = 35,
            ArgPtr = 0x0825FFA8,
        });
        Assert.Equal("DEBUGINFO_O(35)", formatted);

        var parsed = ScriptSource.Parse("DEBUGINFO_O(35)\nDEBUGINFO(99)");
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var commands = Assert.Single(parsed.Sections).Commands;
        Assert.Equal(0xF6, commands[0].Command.Op);
        Assert.Equal(35, commands[0].Command.ArgShort);
        Assert.Equal(0xF6, commands[1].Command.Op);
        Assert.Equal(99, commands[1].Command.ArgShort);
    }

    [Fact]
    public void FormatsNamedUpdateNameObjFlagsEmotionEffectAndDirection()
    {
        var names = TestNames();
        Assert.Equal(
            "UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0, 0)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x2D, ArgByte = 7, ArgShort = 0, Arg1 = 0 },
                names: names));
        Assert.Equal(
            "SET_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x52, Arg1 = 0x01000000 }, names: names));
        Assert.Equal(
            "CLEAR_OBJ_FLAGS(OBJ_FLAG_INTERACT_MASK)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x53, Arg1 = 0x1F }, names: names));
        Assert.Equal(
            "EMOTION_EFFECT(EMOTION_EFFECT_NOTICE)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x56, Arg1 = 88 }, names: names));
        Assert.Equal(
            "WALK_DIRECTION(72, 256, DIRECTION_NORTH)",
            ScriptSource.FormatCommand(
                new ScriptCommandData { Op = 0x89, ArgByte = 72, ArgShort = 256, Arg1 = 4 },
                names: names));
    }

    [Fact]
    public void ParsesNamedGroundScriptParams()
    {
        var names = TestNames();
        var parsed = ScriptSource.Parse("""
            UPDATE_NAME(UPDATE_NAME_ACTOR_SELF, 0, 0)
            SET_OBJ_FLAGS(OBJ_FLAG_AIRBORNE)
            EMOTION_EFFECT(EMOTION_EFFECT_NOTICE)
            WALK_DIRECTION(0x48, 0x100, DIRECTION_NORTH)
            """, names: names);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var commands = Assert.Single(parsed.Sections).Commands;
        Assert.Equal(7, commands[0].Command.ArgByte);
        Assert.Equal(0x01000000, commands[1].Command.Arg1);
        Assert.Equal(88, commands[2].Command.Arg1);
        Assert.Equal(4, commands[3].Command.Arg1);
    }

    [Fact]
    public void SuggestsGroundScriptParamAutocomplete()
    {
        var names = TestNames();
        Assert.Equal(
            ["UPDATE_NAME_ACTOR_SELF"],
            names.Suggest(0x2D, 0, "UPDATE_NAME_ACTOR").Select(e => e.Name).ToArray());
        Assert.Equal(
            ["OBJ_FLAG_AIRBORNE"],
            names.Suggest(0x52, 0, "OBJ_FLAG_AIR").Select(e => e.Name).ToArray());
        Assert.Equal(
            ["EMOTION_EFFECT_NOTICE"],
            names.Suggest(0x56, 0, "EMOTION_EFFECT_NOT").Select(e => e.Name).ToArray());
        Assert.Equal(
            ["DIRECTION_NORTH"],
            names.Suggest(0x89, 2, "DIRECTION_N").Select(e => e.Name).ToArray());
    }

    [Fact]
    public void FormatsNamedMusicEmotionMapAndFanfare()
    {
        var names = TestNames();
        Assert.Equal(
            "BGM_SWITCH(MUS_POKEMON_SQUARE)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x44, Arg1 = 7 }, names: names));
        Assert.Equal(
            "PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 1, EMOTION_HAPPY)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x2E, ArgByte = 0, ArgShort = 1, Arg1 = 1 }, names: names));
        // keep a raw place id when not in catalog
        Assert.Equal(
            "PORTRAIT(9, 1, EMOTION_HAPPY)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x2E, ArgByte = 9, ArgShort = 1, Arg1 = 1 }, names: names));
        Assert.Equal(
            "SELECT_MAP(MAP_POKEMON_SQUARE)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x08, Arg1 = 1 }, names: names));
        Assert.Equal(
            "SELECT_GROUND(MAP_SQUARE)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x09, Arg1 = 0 }, names: names));
        Assert.Equal(
            "FANFARE_PLAY(LEVELUP)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x49, Arg1 = 206 }, names: names));
        Assert.Equal(
            "BGM_SWITCH(99)",
            ScriptSource.FormatCommand(new ScriptCommandData { Op = 0x44, Arg1 = 99 }, names: names));
    }

    [Fact]
    public void ParsesNamedArgsAndRawNumbers()
    {
        var names = TestNames();
        var parsed = ScriptSource.Parse("""
            BGM_SWITCH(MUS_POKEMON_SQUARE)
            BGM_SWITCH(12)
            PORTRAIT(2, 5, EMOTION_HAPPY)
            SELECT_MAP(MAP_POKEMON_SQUARE)
            FANFARE_PLAY(LEVELUP)
            """, names: names);
        Assert.True(parsed.Ok, string.Join("; ", parsed.Errors.Select(e => e.Message)));
        var commands = Assert.Single(parsed.Sections).Commands;
        Assert.Equal(7, commands[0].Command.Arg1);
        Assert.Equal(12, commands[1].Command.Arg1);
        Assert.Equal(1, commands[2].Command.Arg1);
        Assert.Equal(1, commands[3].Command.Arg1);
        Assert.Equal(206, commands[4].Command.Arg1);
    }

    [Fact]
    public void NamedFormatParseRoundTrips()
    {
        var names = TestNames();
        var originals = new[]
        {
            new ScriptCommandData { Op = 0x44, Arg1 = 7 },
            new ScriptCommandData { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 12 },
            new ScriptCommandData { Op = 0x08, Arg1 = 1 },
            new ScriptCommandData { Op = 0x49, Arg1 = 204 },
        };
        foreach (var original in originals)
        {
            var line = ScriptSource.FormatCommand(original, names: names);
            var parsed = ScriptSource.Parse(line, names: names);
            Assert.True(parsed.Ok, line + ": " + string.Join("; ", parsed.Errors.Select(e => e.Message)));
            var command = Assert.Single(Assert.Single(parsed.Sections).Commands).Command;
            Assert.Equal(original.Op, command.Op);
            Assert.Equal(original.ArgByte, command.ArgByte);
            Assert.Equal(original.ArgShort, command.ArgShort);
            Assert.Equal(original.Arg1, command.Arg1);
        }
    }

    [Fact]
    public void SuggestsScopedAutocompleteForCurrentArg()
    {
        var names = TestNames();
        var music = names.Suggest(0x44, 0, "MUS_POKE");
        Assert.Equal(["MUS_POKEMON_SQUARE"], music.Select(e => e.Name).ToArray());
        var emotion = names.Suggest(0x2E, 2, "EMOTION_H");
        Assert.Equal(["EMOTION_HAPPY"], emotion.Select(e => e.Name).ToArray());
        Assert.Empty(names.Suggest(0x44, 0, "EMOTION"));
        Assert.Empty(names.Suggest(0xDB, 0, "WAIT")); // WAIT has no named catalog
    }

    [Fact]
    public void CompletionResolvesCaretToScopedSuggestions()
    {
        var names = TestNames();
        var line = "BGM_SWITCH(MUS_POK";
        var query = ScriptCompletion.TryGetQuery(line, line.Length);
        Assert.NotNull(query);
        Assert.Equal(0x44, query!.Op);
        Assert.Equal(0, query.ArgIndex);
        Assert.Equal("MUS_POK", query.Prefix);

        var hits = ScriptCompletion.Suggest(names, "PORTRAIT(2, 5, EMOTION_H", "PORTRAIT(2, 5, EMOTION_H".Length);
        Assert.Equal(["EMOTION_HAPPY"], hits.Select(e => e.Name).ToArray());

        Assert.Empty(ScriptCompletion.Suggest(names, "WAIT(10", 7));
        Assert.Empty(ScriptCompletion.Suggest(names, "BGM_SWITCH(MUS_POK", 3)); // caret in opcode name
    }

    [Fact]
    public void FormatRewritesSavedSourceTextWithNamedArgs()
    {
        var names = TestNames();
        var scene = CreateSceneWithStation("evt", new ScriptCommandData { Op = 0x2E, ArgByte = 2, ArgShort = 1, Arg1 = 1 });
        scene.ScriptSourceText = """
            @station g0/s0 evt
            PORTRAIT(2, 1, 1)
            BGM_SWITCH(7)
            WAIT(15)
            """;

        var text = SceneScriptSource.Format(scene, names: names);

        Assert.Contains("PORTRAIT(2, 1, EMOTION_HAPPY)", text);
        Assert.Contains("BGM_SWITCH(MUS_POKEMON_SQUARE)", text);
        Assert.Contains("WAIT(15)", text);
        Assert.Contains("@station g0/s0 evt", text);
    }

    [Fact]
    public void LoadsPartialCatalogsWhenSomeHeadersMissing()
    {
        var temp = Directory.CreateTempSubdirectory("rt-names-");
        try
        {
            var constants = Path.Combine(temp.FullName, "include", "constants");
            Directory.CreateDirectory(constants);
            File.WriteAllText(Path.Combine(constants, "emotions.h"), """
                #define EMOTION_NORMAL 0
                #define EMOTION_HAPPY 1
                """);

            var defs = ScriptNamedDefinitions.TryLoadFromRepository(temp.FullName);
            Assert.NotNull(defs);
            Assert.True(defs!.Emotion.TryGetId("EMOTION_HAPPY", out var id));
            Assert.Equal(1, id);
            Assert.Empty(defs.Music.Entries);
            Assert.Empty(defs.Map.Entries);
        }
        finally
        {
            temp.Delete(recursive: true);
        }
    }

    private static Scene CreateSceneWithStation(string name, params ScriptCommandData[] commands)
    {
        var station = new ScriptRefData { Name = name };
        station.Commands.AddRange(commands);
        var sector = new SceneSector { Group = 0, Sector = 0 };
        sector.Stations.Add(station);
        var group = new SceneGroup { Index = 0 };
        group.Sectors.Add(sector);
        var scene = new Scene { MapId = 1, Name = "Sky Tower Peak" };
        scene.Groups.Add(group);
        return scene;
    }
}
