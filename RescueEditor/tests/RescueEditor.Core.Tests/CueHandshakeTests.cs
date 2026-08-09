using Xunit;
using RescueEditor.Core;

namespace RescueEditor.Core.Tests;

public class CueHandshakeTests
{
    [Fact]
    public void UnkE5SignalsAwaitCueAndThenContinues()
    {
        // Station awaits cue 5 then RETs; Butterfree E5(5) then RETs.
        var vm = GroundScriptVm.FromActors(
        [
            ("station",
            [
                new ScriptCommandData { Op = 0xE3, ArgShort = 5 }, // AWAIT_CUE(5)
                new ScriptCommandData { Op = 0xEF },
            ], -1),
            ("butterfree",
            [
                new ScriptCommandData { Op = 0xE5, ArgByte = 0, ArgShort = 5 }, // LockCond/alert 5
                new ScriptCommandData { Op = 0xEF },
            ], 2),
        ]);

        vm.TickFrames(5);
        Assert.True(vm.Finished);
    }

    [Fact]
    public void AlertWakesAwaitOnSeparateActor()
    {
        var vm = GroundScriptVm.FromActors(
        [
            ("waiter",
            [
                new ScriptCommandData { Op = 0xE3, ArgShort = 6 },
                new ScriptCommandData { Op = 0xEF },
            ], 0),
            ("alerter",
            [
                new ScriptCommandData { Op = 0xE4, ArgShort = 6 },
                new ScriptCommandData { Op = 0xEF },
            ], 1),
        ]);
        vm.TickFrames(3);
        Assert.True(vm.Finished);
    }

    [Fact]
    public void DialoguePauseDoesNotBlockOtherActorsCues()
    {
        // Speaker opens a textbox; alerter must still be able to raise a cue the speaker awaits after A.
        var vm = GroundScriptVm.FromActors(
        [
            ("speaker",
            [
                new ScriptCommandData { Op = 0x34, ArgShort = 0 }, // MSG_NPC — waits for A
                new ScriptCommandData { Op = 0xE3, ArgShort = 9 }, // AWAIT_CUE(9)
                new ScriptCommandData { Op = 0xEF },
            ], 0),
            ("alerter",
            [
                new ScriptCommandData { Op = 0xDB, ArgShort = 2 }, // WAIT(2) while speaker is in textbox
                new ScriptCommandData { Op = 0xE4, ArgShort = 9 }, // ALERT_CUE(9)
                new ScriptCommandData { Op = 0xEF },
            ], 1),
        ]);

        vm.TickFrames(1);
        Assert.True(vm.WaitingForAdvance);
        // Alerter should still progress waits/alerts while the textbox is open.
        vm.TickFrames(5);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        vm.TickFrames(3);
        Assert.True(vm.Finished);
    }
}
