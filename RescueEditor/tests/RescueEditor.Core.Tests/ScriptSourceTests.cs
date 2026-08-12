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
