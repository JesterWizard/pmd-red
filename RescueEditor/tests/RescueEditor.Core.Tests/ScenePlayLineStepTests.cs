using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScenePlayLineStepTests
{
    [Fact]
    public void StepLine_RunsOneLineAndStaysPaused()
    {
        var session = MakeScriptedSession(
        [
            new ScriptCommandData { Op = 0xDB, ArgShort = 3 }, // WAIT(3)
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 0, Arg1 = 1 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 1, Arg1 = 2 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        Assert.True(session.StepLine());
        Assert.True(session.ScriptVm!.IsPaused);
        Assert.Equal(1, session.LinesStepped);
        var indexAfterFirst = CurrentIndex(session);
        Assert.True(indexAfterFirst > 0);

        Assert.True(session.StepLine());
        Assert.Equal(2, session.LinesStepped);
        Assert.True(CurrentIndex(session) > indexAfterFirst);
    }

    [Fact]
    public void StepLine_DismissesDialogueBeforeRunningNextLine()
    {
        var session = MakeScriptedSession(
        [
            new ScriptCommandData { Op = 0x34, ArgShort = 1 }, // MSG_NPC — waits for A
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 0, Arg1 = 1 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 1, Arg1 = 2 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        Assert.True(session.StepLine());
        Assert.True(session.WaitingForAdvance);
        var indexAtDialogue = CurrentIndex(session);

        Assert.True(session.StepLine());
        Assert.False(session.WaitingForAdvance);
        Assert.True(CurrentIndex(session) > indexAtDialogue);
        Assert.Equal(2, session.LinesStepped);
    }

    [Fact]
    public void StepToLine_ReplaysFromStartToEarlierLine()
    {
        var session = MakeScriptedSession(
        [
            new ScriptCommandData { Op = 0xDB, ArgShort = 3 }, // WAIT(3)
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 0, Arg1 = 1 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 1, Arg1 = 2 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 2, Arg1 = 3 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        Assert.True(session.StepLine());
        Assert.True(session.StepLine());
        var indexAt2 = CurrentIndex(session);
        Assert.True(session.StepLine());

        session.StepToLine(2);
        Assert.Equal(2, session.LinesStepped);
        Assert.True(session.ScriptVm!.IsPaused);
        Assert.Equal(indexAt2, CurrentIndex(session));
    }

    [Fact]
    public void StepLine_ReturnsFalseWhenFinished()
    {
        var session = MakeScriptedSession(
        [
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        var sawFalse = false;
        for (var i = 0; i < 5; i++)
        {
            if (!session.StepLine())
            {
                sawFalse = true;
                break;
            }
        }

        Assert.True(sawFalse);
        Assert.True(session.ScriptFinished);
    }

    [Fact]
    public void StepOver_StopsWhenAnotherActorStartsDialogue()
    {
        var vm = GroundScriptVm.FromActors(
        [
            ("a",
            [
                new ScriptCommandData { Op = 0xDB, ArgShort = 30 }, // WAIT(30)
                new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 0, Arg1 = 1 }, // UPDATE_VAR
                new ScriptCommandData { Op = 0xF0 }, // HALT
            ], 0),
            ("b",
            [
                new ScriptCommandData { Op = 0x34, ArgShort = 1 }, // MSG_NPC — waits for A
                new ScriptCommandData { Op = 0xF0 }, // HALT
            ], 1),
        ]);

        vm.Pause();
        vm.StepOver();

        Assert.True(vm.WaitingForAdvance);
        Assert.True(vm.IsPaused);
        // Stopped on the frame "b" opened its textbox, so "a" is still inside its WAIT 30.
        Assert.True(vm.Watch().Actors.Single(x => x.Name == "a").WaitFrames > 0);
    }

    [Fact]
    public void StepOver_StopsOnOwnDialogueWithoutSpinning()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x34, ArgShort = 1 }, // MSG_NPC — waits for A
            new ScriptCommandData { Op = 0xA6, ArgByte = 0, ArgShort = 0, Arg1 = 1 }, // UPDATE_VAR
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        vm.Pause();
        vm.StepOver();

        Assert.True(vm.WaitingForAdvance);
        Assert.True(vm.IsPaused);
    }

    private static ScenePlaySession MakeScriptedSession(IReadOnlyList<ScriptCommandData> commands)
    {
        var scene = new Scene { MapId = 99, Name = "Step" };
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups[0].Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands = commands.ToList(),
        });
        scene.Groups[0].Sectors[0].HasStation = true;
        return new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
    }

    private static int CurrentIndex(ScenePlaySession session) =>
        session.ScriptVm!.Watch().CurrentActor!.Value.Index;

    private static RomImage EmptyRom()
    {
        var path = Path.GetTempFileName();
        File.WriteAllBytes(path, new byte[0x100]);
        return RomImage.Open(path);
    }
}
