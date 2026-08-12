using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundScriptVmDeepeningTests
{
    [Fact]
    public void SelectEntitiesMinusOneKeepsActiveSector()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x0C, ArgShort = -1, ArgByte = 0xFF }, // SELECT_ENTITIES(-1, -1)
            new() { Op = 0xEF },
        };
        var vm = GroundScriptVm.FromCommands(commands, group: 1, sector: 0);
        vm.TickFrames(2);
        Assert.Equal(1, vm.ActiveGroup);
        Assert.Equal(0, vm.ActiveSector);
    }

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
    public void FlashToRaisesOverlayThenFlashFromClearsAndBlocksWaitFade()
    {
        // FLASH_TO(wait, kind, duration, RGB_U32(0xFF,0xFF,0xFF))
        var flashRgb = (0xFF << 16) | (0xFF << 8) | 0xFF;
        var vm = GroundScriptVm.FromCommands(
        [
            new ScriptCommandData
            {
                Op = 0x28, // FLASH_TO
                ArgByte = 1, // wait until done
                ArgShort = 5, // kind
                Arg1 = 4, // duration frames (preview)
                Arg2 = flashRgb,
            },
            new ScriptCommandData
            {
                Op = 0x27, // FLASH_FROM
                ArgByte = 1,
                ArgShort = 5,
                Arg1 = 4,
                Arg2 = flashRgb,
            },
            new ScriptCommandData { Op = 0xDF }, // wait fade/flash idle
            new ScriptCommandData { Op = 0xF0 }, // HALT
        ]);

        Assert.Equal(0, vm.FlashAlpha);
        vm.TickFrames(1);
        Assert.True(vm.FadeBusy, "FLASH_TO should keep fade/flash busy while interpolating");
        Assert.True(vm.FlashAlpha > 0, "FLASH_TO should raise flash overlay");
        Assert.Equal(0xFF, vm.FlashR);
        Assert.Equal(0xFF, vm.FlashG);
        Assert.Equal(0xFF, vm.FlashB);

        // Drive until FLASH_TO completes and FLASH_FROM begins clearing.
        var sawFull = false;
        var sawClearing = false;
        for (var i = 0; i < 120 && !vm.Finished; i++)
        {
            vm.TickFrames(1);
            if (vm.FlashAlpha >= 250)
                sawFull = true;
            if (sawFull && vm.FlashAlpha is > 0 and < 200)
                sawClearing = true;
            if (sawClearing && !vm.FadeBusy && vm.FlashAlpha == 0)
                break;
        }

        Assert.True(sawFull, "Expected flash to reach full white overlay");
        Assert.True(sawClearing, "Expected FLASH_FROM to clear the overlay");
        Assert.Equal(0, vm.FlashAlpha);
        Assert.False(vm.FadeBusy);
    }

    [Fact]
    public void SpawnEffectAddsMapEffectAtActorPosition()
    {
        var scene = new Scene { MapId = 99, Name = "SpawnEffect" };
        scene.Groups.Add(new SceneGroup { Index = 0 });
        scene.Groups[0].Sectors.Add(new SceneSector { Group = 0, Sector = 0 });
        scene.Groups[0].Sectors[0].Lives.Add(new SceneEntity
        {
            Kind = SceneEntityKind.Live,
            TypeId = 1,
            Position = new CompactPos(12, 8, 0, 0),
            Index = 0,
            DisplayName = "Hero",
        });
        scene.Groups[0].Sectors[0].Stations.Add(new ScriptRefData
        {
            Id = 1,
            Name = "station",
            Commands =
            [
                new ScriptCommandData { Op = 0x1A, Arg2 = 3 }, // SPAWN_EFFECT kind 3
                new ScriptCommandData { Op = 0xF0 },
            ],
        });
        scene.Groups[0].Sectors[0].HasStation = true;

        var session = new ScenePlaySession(EmptyRom(), scene, 0, 0, scripted: true);
        session.Tick(1.0 / 60.0);
        Assert.Contains(session.ScriptVm!.MapEffects, e => e.Kind == 3 && e.X == 12 * 8 && e.Y == 8 * 8);
    }

    [Fact]
    public void ApplyScreenOverlayCompositesBlackFadeAndRgbFlash()
    {
        var pixels = new byte[4]; // 1×1 RGBA
        pixels[0] = 0x80;
        pixels[1] = 0x80;
        pixels[2] = 0x80;
        pixels[3] = 255;
        var image = new RgbaImage(1, 1, pixels);

        // Full black fade → black
        GbaDialogueHud.ApplyScreenOverlay(image, fadeAlpha: 255, flashR: 0, flashG: 0, flashB: 0, flashAlpha: 0);
        Assert.Equal(0, image.Pixels[0]);
        Assert.Equal(0, image.Pixels[1]);
        Assert.Equal(0, image.Pixels[2]);

        image.Pixels[0] = 0x80;
        image.Pixels[1] = 0x80;
        image.Pixels[2] = 0x80;
        // Full white flash on mid gray → near white
        GbaDialogueHud.ApplyScreenOverlay(image, fadeAlpha: 0, flashR: 255, flashG: 255, flashB: 255, flashAlpha: 255);
        Assert.True(image.Pixels[0] > 200);
        Assert.True(image.Pixels[1] > 200);
        Assert.True(image.Pixels[2] > 200);
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

    private static RomImage EmptyRom()
    {
        var path = Path.GetTempFileName();
        File.WriteAllBytes(path, new byte[0x100]);
        return RomImage.Open(path);
    }
}
