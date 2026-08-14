using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DialogueSpeakerResolverTests
{
    [Fact]
    public void ResolvesSpeakerEmotionFromPrecedingPortrait()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x2E, ArgByte = 0, ArgShort = 3, Arg1 = 4 }, // PORTRAIT npc=3 emotion=Worried
            new() { Op = 0x34, ArgShort = 3, ArgPtr = 0x08000000 }, // MSG_NPC speaker=3
        };

        var info = DialogueSpeakerResolver.TryResolve(commands, msgIndex: 1);
        Assert.NotNull(info);
        Assert.Equal(3, info!.Value.SpeakerId);
        Assert.Equal(4, info.Value.Emotion);
        Assert.Equal(0, info.Value.Placement);
    }

    [Fact]
    public void ResolvesPortraitPlacementAndKeepsPriorWhenSentinel()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x2E, ArgByte = 3, ArgShort = 1, Arg1 = 0 }, // RIGHT_BOTTOM_FLIP
            new() { Op = 0x2E, ArgByte = 21, ArgShort = 1, Arg1 = 2 }, // PLACEMENT_KEEP
            new() { Op = 0x34, ArgShort = 1 },
        };

        var info = DialogueSpeakerResolver.TryResolve(commands, msgIndex: 2);
        Assert.Equal(3, info!.Value.Placement);
        Assert.Equal(2, info.Value.Emotion);
    }

    [Fact]
    public void UsesLatestMatchingPortraitEmotion()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x2E, ArgShort = 1, Arg1 = 1 },
            new() { Op = 0x2E, ArgShort = 1, Arg1 = 12 }, // Surprised
            new() { Op = 0x34, ArgShort = 1 },
        };

        var info = DialogueSpeakerResolver.TryResolve(commands, msgIndex: 2);
        Assert.Equal(12, info!.Value.Emotion);
    }

    [Fact]
    public void ResolvesSpeciesFromTypeBind()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x2D, ArgByte = 9, ArgShort = 2, Arg1 = 55 }, // bind slot 2 → type 55
            new() { Op = 0x2E, ArgShort = 2, Arg1 = 0 },
            new() { Op = 0x34, ArgShort = 2 },
        };

        var info = DialogueSpeakerResolver.TryResolve(
            commands,
            msgIndex: 2,
            resolveTypeSpecies: typeId => typeId == 55 ? (short)282 : (short)0);

        Assert.Equal(282, info!.Value.Species);
        Assert.Equal(0, info.Value.Emotion);
    }

    [Fact]
    public void NarrationSpeakerReturnsNull()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x34, ArgShort = -1 },
        };
        Assert.Null(DialogueSpeakerResolver.TryResolve(commands, msgIndex: 0));
    }

    [Fact]
    public void DefaultsEmotionToNormalWhenNoPortrait()
    {
        var commands = new List<ScriptCommandData>
        {
            new() { Op = 0x34, ArgShort = 0 },
        };
        var info = DialogueSpeakerResolver.TryResolve(
            commands,
            msgIndex: 0,
            resolveLiveSpecies: live => live == 0 ? (short)4 : (short)0);
        Assert.NotNull(info);
        Assert.Equal(0, info!.Value.Emotion);
        Assert.Equal(4, info.Value.Species);
    }
}

public sealed class DialoguePortraitPreviewTests
{
    [Fact]
    public void RenderFramesFaceWithDialogueChrome()
    {
        var face = new RgbaImage(40, 40, new byte[40 * 40 * 4]);
        // Mark a distinctive interior pixel
        face.Pixels[(20 * 40 + 20) * 4] = 10;
        face.Pixels[(20 * 40 + 20) * 4 + 1] = 20;
        face.Pixels[(20 * 40 + 20) * 4 + 2] = 30;
        face.Pixels[(20 * 40 + 20) * 4 + 3] = 255;

        var framed = DialoguePortraitPreview.RenderFramed(face, scale: 1);
        Assert.Equal(44, framed.Width);
        Assert.Equal(44, framed.Height);
        // Outer border
        Assert.Equal(0x88, framed.Pixels[0]);
        Assert.Equal(0xA8, framed.Pixels[1]);
        Assert.Equal(0xE0, framed.Pixels[2]);
        // Face pixel offset by frame pad
        var o = ((2 + 20) * 44 + (2 + 20)) * 4;
        Assert.Equal(10, framed.Pixels[o]);
        Assert.Equal(20, framed.Pixels[o + 1]);
        Assert.Equal(30, framed.Pixels[o + 2]);
    }

    [Fact]
    public void RenderFramedScalesNearestNeighbor()
    {
        var face = new RgbaImage(40, 40, new byte[40 * 40 * 4]);
        var framed = DialoguePortraitPreview.RenderFramed(face, scale: 2);
        Assert.Equal(88, framed.Width);
        Assert.Equal(88, framed.Height);
    }
}
