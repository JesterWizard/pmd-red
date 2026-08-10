using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundScriptVmDeepeningTests
{
    [Fact]
    public void WaitIsFrameAccurate()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0xDB, ArgShort = 60 }, // WAIT(60)
            new() { Op = 0xEF }, // RET
        };
        var vm = GroundScriptVm.FromCommands(commands);
        for (var i = 0; i < 60; i++)
            vm.TickFrames(1);
        Assert.False(vm.Finished);
        vm.TickFrames(1);
        Assert.True(vm.Finished);
    }

    [Fact]
    public void CallScriptInitSleepSetsSleepAnimation()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0xE8, ArgShort = 53 }, // CALL_SCRIPT(INIT_SLEEP_FUNC)
            new() { Op = 0xEF },
        };
        var vm = GroundScriptVm.FromCommands(commands, rom, RomProfile.Us10);
        vm.TickFrames(5);
        Assert.Equal(6, vm.GetAnimation(0));
    }

    [Fact]
    public void CallScriptWakeupRestoresIdleAnimation()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0xE8, ArgShort = 53 }, // INIT_SLEEP
            new() { Op = 0xE8, ArgShort = 32 }, // WAKEUP
            new() { Op = 0xEF },
        };
        var vm = GroundScriptVm.FromCommands(commands, rom, RomProfile.Us10);
        // INIT_SLEEP is instant; WAKEUP has SET_DIR_WAIT(60)+WAIT(60)
        vm.TickFrames(5);
        Assert.Equal(6, vm.GetAnimation(0));
        vm.TickFrames(130);
        Assert.Equal(2, vm.GetAnimation(0));
    }

    [Fact]
    public void PortraitCommandTracksSpeakerAndEmotion()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x2E, ArgByte = 2, ArgShort = 0, Arg1 = 0 }, // PORTRAIT left, NPC 0, Normal
            new() { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 1 }, // PORTRAIT right flip, NPC 1, Happy
            new() { Op = 0xEF },
        };
        var vm = GroundScriptVm.FromCommands(commands);
        vm.TickFrames(2);
        Assert.Equal(2, vm.Portraits.Count);
        Assert.Contains(vm.Portraits, p => p.NpcId == 0 && p.Emotion == 0 && !p.Flip);
        Assert.Contains(vm.Portraits, p => p.NpcId == 1 && p.Emotion == 1 && p.Flip);
    }

    [Fact]
    public void Fade2InDoesNotClearMainBlackOverlay()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x23, ArgShort = 0 }, // FADE_OUT instant
            new ScriptCommandData { Op = 0x26, ArgShort = 0 }, // FADE2_OUT instant
            new ScriptCommandData { Op = 0x25, ArgShort = 0 }, // FADE2_IN instant — main stays black
            new ScriptCommandData { Op = 0x34, ArgShort = -1 }, // MSG_NPC (wake-up line style)
            new ScriptCommandData { Op = 0x22, ArgShort = 0 }, // FADE_IN instant
        ]);
        vm.TickFrames(1);
        Assert.Equal(255, vm.FadeAlpha);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        vm.TickFrames(1);
        Assert.Equal(0, vm.FadeAlpha);
    }

    [Fact]
    public void TinyWoodsIntroKeepsBlackUntilFadeInThenSleepsFacingPartner()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var charmapPath = FindUpwards("charmap.txt");
        var charmap = charmapPath is null ? null : Charmap.FromFile(charmapPath);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10, charmap: charmap);
        var scene = database.FindScene(ScenePlayPresets.TinyWoodsEntryMapId);
        Assert.NotNull(scene);

        var session = new ScenePlaySession(
            rom, scene!, 1, 0,
            charmap: charmap,
            appearance: new PlayAppearance(1, 4),
            profile: database.Profile);

        // Drive through MSG_ON_BG + black-screen MSG_NPC until fade-in begins.
        var sawBlackNpcDialogue = false;
        var sawSleepAfterFade = false;
        var sawNotice = false;
        for (var i = 0; i < 8000 && !session.ScriptFinished; i++)
        {
            if (session.WaitingForAdvance)
            {
                if (session.FadeAlpha >= 250 &&
                    session.DialogueMode == PlayDialogueMode.Box)
                    sawBlackNpcDialogue = true;
                session.AdvanceDialogue();
            }

            session.Tick(1.0 / 60.0);

            var vm = session.ScriptVm;
            if (vm is null) continue;

            // After fade starts clearing, player should still be asleep and partner west-facing.
            if (vm.FadeAlpha is > 0 and < 250 &&
                vm.GetAnimation(0) == GroundScriptVm.AnimSleep &&
                vm.GetDirection(1) == GroundScriptVm.DirWest)
                sawSleepAfterFade = true;

            if (vm.TryGetActiveEffect(1, out var fx) && fx == EmotionEffectAtlas.NoticeId)
                sawNotice = true;

            if (sawBlackNpcDialogue && sawSleepAfterFade && sawNotice)
                break;
        }

        Assert.True(sawBlackNpcDialogue, "Expected navy MSG_NPC while screen still black");
        Assert.True(sawSleepAfterFade, "Expected sleep + partner facing west during fade-in");
        Assert.True(sawNotice, "Expected partner NOTICE (!) after wakeup cue");
    }

    [Fact]
    public void NpcDialogueWaitsForAdvanceWithoutAutoClearing()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x34, ArgShort = 1 }, // MSG_NPC speaker 1
        ]);
        vm.TickFrames(1);
        Assert.True(vm.WaitingForAdvance);
        vm.TickFrames(300);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        Assert.False(vm.WaitingForAdvance);
    }

    [Fact]
    public void MsgOnBgNarrationWaitsForAWithoutAutoClearing()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x37, ArgShort = -1 }, // MSG_ON_BG (black-screen narration)
        ]);
        vm.TickFrames(1);
        Assert.Equal(PlayDialogueMode.OnBackground, vm.DialogueMode);
        Assert.True(vm.WaitingForAdvance);
        vm.TickFrames(300);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        Assert.False(vm.WaitingForAdvance);
    }

    [Fact]
    public void MsgOnBgAutoAlsoWaitsForAButton()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x39, ArgShort = 30 }, // MSG_ON_BG_AUTO — viewer still waits
        ]);
        vm.TickFrames(1);
        Assert.Equal(PlayDialogueMode.OnBackground, vm.DialogueMode);
        Assert.True(vm.WaitingForAdvance);
        vm.TickFrames(300);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        Assert.False(vm.WaitingForAdvance);
    }

    [Fact]
    public void MsgOnBgAutoWaitPressPagesRequireABetweenPages()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x39, ArgShort = 30 }, // MSG_ON_BG_AUTO
        ]);
        vm.TickFrames(1);
        Assert.True(vm.WaitingForAdvance);
        vm.SetDialoguePagesForTests(["page one", "page two"], autoDismiss: false);
        vm.TickFrames(200);
        Assert.True(vm.WaitingForAdvance, "WAIT_PRESS mid-pages must not auto-advance");
        vm.AdvanceDialogue();
        Assert.True(vm.WaitingForAdvance);
        Assert.Equal("page two", vm.DialoguePage);
        vm.TickFrames(200);
        Assert.True(vm.WaitingForAdvance);
        vm.AdvanceDialogue();
        Assert.False(vm.WaitingForAdvance);
    }

    [Fact]
    public void BgmSwitchAndFadeoutUpdateMusicId()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x45, ArgShort = 60, Arg1 = 101 }, // BGM_FADEIN
            new ScriptCommandData { Op = 0x44, Arg1 = 10 }, // BGM_SWITCH
            new ScriptCommandData { Op = 0x48, ArgShort = 30 }, // BGM_FADEOUT
            new ScriptCommandData { Op = 0xEF }, // RET
        ]);
        vm.TickFrames(1);
        Assert.Equal(101, vm.MusicId);
        vm.TickFrames(1);
        Assert.Equal(10, vm.MusicId);
        vm.TickFrames(1);
        Assert.Null(vm.MusicId);
    }

    [Fact]
    public void VisiblePortraitsOnlyIncludeCurrentSpeaker()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x2E, ArgByte = 2, ArgShort = 0, Arg1 = 0 }, // PORTRAIT player
            new ScriptCommandData { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 0 }, // PORTRAIT partner
            new ScriptCommandData { Op = 0x34, ArgShort = 1 }, // MSG_NPC partner
        ]);
        vm.TickFrames(4);
        Assert.True(vm.WaitingForAdvance);
        Assert.Equal(1, vm.DialogueSpeakerId);
        Assert.Equal(2, vm.Portraits.Count);
        Assert.Single(vm.VisiblePortraits);
        Assert.All(vm.VisiblePortraits, p => Assert.Equal(1, p.NpcId));
    }

    [Fact]
    public void SetDirWaitAndRotateToUpdateFacing()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x8B, ArgByte = 1, ArgShort = 2 }, // SET_DIR_WAIT EAST, 1 frame
            new ScriptCommandData { Op = 0x91, ArgByte = 1, Arg1 = 6 }, // ROTATE_TO WEST
        ]);
        vm.TickFrames(1);
        Assert.Equal(GroundScriptVm.DirEast, vm.GetDirection(0));
        vm.TickFrames(2);
        Assert.Equal(GroundScriptVm.DirWest, vm.GetDirection(0));
        Assert.True(GroundScriptVm.ShouldFlipHorizontal(GroundScriptVm.DirWest));
        Assert.False(GroundScriptVm.ShouldFlipHorizontal(GroundScriptVm.DirEast));
    }

    [Fact]
    public void EmotionEffectOpcodeAttachesAndClears()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x56, Arg1 = EmotionEffectAtlas.NoticeId }, // NOTICE !
            new ScriptCommandData { Op = 0xDE }, // wait effect
            new ScriptCommandData { Op = 0x56, Arg1 = 0 }, // clear
        ]);
        vm.TickFrames(1);
        Assert.True(vm.TryGetActiveEffect(0, out var id));
        Assert.Equal(EmotionEffectAtlas.NoticeId, id);
        // Wait out effect frames.
        vm.TickFrames(60);
        Assert.False(vm.TryGetActiveEffect(0, out _));
    }

    [Fact]
    public void SmileEffectStaysUntilCleared()
    {
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData { Op = 0x56, Arg1 = EmotionEffectAtlas.SmileId },
            new ScriptCommandData { Op = 0xDB, ArgShort = 90 }, // WAIT
            new ScriptCommandData { Op = 0x56, Arg1 = 0 },
        ]);
        vm.TickFrames(1);
        Assert.True(vm.TryGetActiveEffect(0, out var id));
        Assert.Equal(EmotionEffectAtlas.SmileId, id);
        vm.TickFrames(60); // still sticky mid-wait
        Assert.True(vm.TryGetActiveEffect(0, out _));
        vm.TickFrames(40);
        Assert.False(vm.TryGetActiveEffect(0, out _));
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
