using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundScriptVmDebugTests
{
    private static ScriptCommandData Anim(int id) => new() { Op = 0x54, ArgShort = (short)id };
    private static ScriptCommandData Wait(int frames) => new() { Op = 0xDB, ArgShort = (short)frames };
    private static ScriptCommandData Ret() => new() { Op = 0xEF };
    private static ScriptCommandData Label(int id) => new() { Op = 0xF4, ArgShort = (short)id };
    private static ScriptCommandData JumpLabel(int id) => new() { Op = 0xE7, ArgShort = (short)id };
    private static ScriptCommandData CallLabel(int id) => new() { Op = 0xE6, ArgShort = (short)id };
    private static ScriptCommandData CallScript(int id) => new() { Op = 0xE8, ArgShort = (short)id };
    private static ScriptCommandData UpdateVar(int varId, int value) =>
        new() { Op = 0xA6, ArgByte = 0, ArgShort = (short)varId, Arg1 = value };
    private static ScriptCommandData SetObjFlags(int bits) => new() { Op = 0x52, Arg1 = bits };
    private static ScriptCommandData AwaitCue(int cue) => new() { Op = 0xE3, ArgShort = (short)cue };
    private static ScriptCommandData AlertCue(int cue) => new() { Op = 0xE4, ArgShort = (short)cue };

    [Fact]
    public void PauseStopsOpcodeProgress()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), Ret()]);
        vm.Pause();
        vm.TickFrames(10);
        Assert.True(vm.IsPaused);
        Assert.Equal(0, vm.Watch().Actors[0].Index);
        Assert.Equal(GroundScriptVm.AnimIdle, vm.GetAnimation(0));
    }

    [Fact]
    public void StepOverExecutesOneOpcodeThenPauses()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), Anim(2), Ret()]);
        vm.Pause();
        vm.StepOver();
        Assert.True(vm.IsPaused);
        Assert.Equal(6, vm.GetAnimation(0));
        Assert.Equal(1, vm.Watch().Actors[0].Index);

        vm.StepOver();
        Assert.Equal(2, vm.GetAnimation(0));
        Assert.Equal(2, vm.Watch().Actors[0].Index);
    }

    [Fact]
    public void ContinueRunsUntilCommandBreakpoint()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), Anim(2), Ret()]);
        vm.AddBreakpoint(new GroundScriptBreakpoint(CommandIndex: 1));
        vm.TickFrames(8);
        Assert.True(vm.IsPaused);
        Assert.Equal(6, vm.GetAnimation(0));
        Assert.Equal(1, vm.Watch().Actors[0].Index);
        Assert.Equal(0x54, vm.Watch().Actors[0].Opcode);
    }

    [Fact]
    public void OpcodeBreakpointPausesBeforeMatchingOp()
    {
        var vm = GroundScriptVm.FromCommands([Wait(0), Anim(6), Ret()]);
        vm.AddBreakpoint(new GroundScriptBreakpoint(Opcode: 0x54));
        vm.TickFrames(8);
        Assert.True(vm.IsPaused);
        Assert.Equal(1, vm.Watch().Actors[0].Index);
        Assert.Equal(GroundScriptVm.AnimIdle, vm.GetAnimation(0));
    }

    [Fact]
    public void ContinueFromBreakpointDoesNotImmediatelyRehit()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), Anim(3), Ret()]);
        vm.AddBreakpoint(new GroundScriptBreakpoint(CommandIndex: 0));
        vm.TickFrames(2);
        Assert.Equal(0, vm.Watch().Actors[0].Index);
        vm.Continue();
        vm.TickFrames(8);
        Assert.True(vm.Finished);
        Assert.Equal(3, vm.GetAnimation(0));
    }

    [Fact]
    public void ActorScopedBreakpointIgnoresOtherActors()
    {
        var vm = GroundScriptVm.FromActors(
        [
            ("a", new[] { Anim(6), Ret() }, 0),
            ("b", new[] { Anim(3), Ret() }, 1),
        ]);
        vm.AddBreakpoint(new GroundScriptBreakpoint(CommandIndex: 0, ActorName: "b"));
        vm.TickFrames(4);
        Assert.True(vm.IsPaused);
        var watch = vm.Watch();
        Assert.Equal("b", watch.CurrentActor?.Name);
        Assert.Equal(6, vm.GetAnimation(0));
        Assert.Equal(GroundScriptVm.AnimIdle, vm.GetAnimation(1));
    }

    [Fact]
    public void WatchExposesCuesCurrentActorAndBranchTarget()
    {
        var vm = GroundScriptVm.FromActors(
        [
            ("waiter", new[] { AwaitCue(5), Ret() }, 0),
            ("signal", new[] { Wait(1), AlertCue(5), Ret() }, 1),
        ]);
        vm.Pause();
        var before = vm.Watch();
        Assert.Equal("waiter", before.CurrentActor?.Name);
        Assert.Equal(0xE3, before.Actors[0].Opcode);
        Assert.Null(before.Actors[0].BranchTargetIndex);

        var jumper = GroundScriptVm.FromCommands(
        [
            Anim(6),
            JumpLabel(9),
            Anim(3),
            Label(9),
            Ret(),
        ]);
        jumper.Pause();
        jumper.StepOver();
        var atJump = jumper.Watch();
        Assert.Equal(1, atJump.Actors[0].Index);
        Assert.Equal(3, atJump.Actors[0].BranchTargetIndex);
        Assert.Equal("JUMP_LABEL", atJump.Actors[0].BranchKind);
    }

    [Fact]
    public void LastTransferExplainsJumpAndCall()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            Anim(6),
            JumpLabel(9),
            Anim(3),
            Label(9),
            Ret(),
        ]);
        vm.Pause();
        vm.StepOver();
        vm.StepOver();
        var watch = vm.Watch();
        Assert.Equal(3, watch.Actors[0].Index);
        Assert.Contains("JUMP_LABEL", watch.LastTransfer, StringComparison.Ordinal);
        Assert.Contains("9", watch.LastTransfer, StringComparison.Ordinal);
    }

    [Fact]
    public void StepOverCallLabelReturnsToCaller()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            CallLabel(1),
            Anim(2),
            Ret(),
            Label(1),
            Anim(6),
            new() { Op = 0xEE },
        ]);
        vm.Pause();
        vm.StepOver();
        Assert.True(vm.IsPaused);
        Assert.Equal(6, vm.GetAnimation(0));
        Assert.Equal(1, vm.Watch().Actors[0].Index);
        Assert.Contains("CALL_LABEL", vm.Watch().LastTransfer, StringComparison.Ordinal);
    }

    [Fact]
    public void StepOverCallScriptDoesNotStopInsideCallee()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            CallScript(0x2E), // SMILE_START_FUNC
            Anim(2),
            Ret(),
        ]);
        vm.Pause();
        vm.StepOver();
        Assert.True(vm.IsPaused);
        Assert.Equal(1, vm.Watch().Actors[0].Index);
        Assert.Equal(0x54, vm.Watch().Actors[0].Opcode);
    }

    [Fact]
    public void WatchTracksLocalsAndObjFlags()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            UpdateVar(3, 42),
            SetObjFlags(0x10),
            Ret(),
        ]);
        vm.Pause();
        vm.StepOver();
        vm.StepOver();
        var watch = vm.Watch();
        Assert.Equal(42, watch.Locals[3]);
        Assert.Equal(0x10, watch.Actors[0].ObjFlags);
    }

    [Fact]
    public void FormatWatchIncludesPausedActorAndLastTransfer()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), JumpLabel(0), Ret()]);
        vm.Pause();
        vm.StepOver();
        vm.StepOver();
        var text = vm.Watch().Format();
        Assert.Contains("paused", text, StringComparison.OrdinalIgnoreCase);
        Assert.Contains("test", text, StringComparison.Ordinal);
        Assert.Contains("JUMP_LABEL", text, StringComparison.Ordinal);
    }

    [Fact]
    public void WatchListingShowsAllCommandsWithCurrentMarker()
    {
        var vm = GroundScriptVm.FromCommands([Anim(6), Wait(3), Ret()]);
        vm.Pause();
        var first = GroundScriptWatchListing.Build(vm.Watch());
        Assert.Contains("@test", first.Body, StringComparison.Ordinal);
        Assert.Contains("SELECT_ANIMATION", first.Body, StringComparison.Ordinal);
        Assert.Contains("WAIT", first.Body, StringComparison.Ordinal);
        Assert.Contains("RET", first.Body, StringComparison.Ordinal);
        Assert.Contains(">  0", first.Body, StringComparison.Ordinal);
        Assert.DoesNotContain(">  1", first.Body, StringComparison.Ordinal);
        Assert.Contains(first.ScrollLine, first.HighlightLines);

        var key = first.BodyKey;
        vm.TickFrames(4);
        Assert.Equal(key, GroundScriptWatchListing.Build(vm.Watch()).BodyKey);

        vm.StepOver();
        var second = GroundScriptWatchListing.Build(vm.Watch());
        Assert.NotEqual(key, second.BodyKey);
        Assert.Contains(">  1", second.Body, StringComparison.Ordinal);

        vm.StepOver();
        var third = GroundScriptWatchListing.Build(vm.Watch());
        Assert.Contains("RET", third.Body, StringComparison.Ordinal);
        Assert.Contains(">  2", third.Body, StringComparison.Ordinal);
    }
}
