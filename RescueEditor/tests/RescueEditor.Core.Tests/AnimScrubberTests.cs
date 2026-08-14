using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class AnimScrubberTests
{
    [Fact]
    public void FrameAtTick_WalksDurationsAndWraps()
    {
        var seq = AxAnimSequence.FromFrames(
        [
            new(8, 10, 0, 0),
            new(4, 11, 1, -2),
        ]);

        Assert.Equal(12, seq.TotalDurationFrames);
        Assert.Equal(10, seq.PoseIdAtTick(0));
        Assert.Equal(10, seq.PoseIdAtTick(7));
        Assert.Equal(11, seq.PoseIdAtTick(8));
        Assert.Equal(11, seq.PoseIdAtTick(11));
        Assert.Equal(10, seq.PoseIdAtTick(12));
        Assert.Equal(0, seq.FrameIndexAtTick(0));
        Assert.Equal(0, seq.FrameIndexAtTick(7));
        Assert.Equal(1, seq.FrameIndexAtTick(8));
        Assert.Equal(0, seq.TickAtFrameIndex(0));
        Assert.Equal(8, seq.TickAtFrameIndex(1));
        Assert.Equal(11, seq.FrameAtTick(8).PoseId);
        Assert.Equal(-2, seq.FrameAtTick(8).OffsetY);
    }

    [Theory]
    [InlineData(22, "GROUND_ANIM_TWITCH", 13, true, false, "hold first")]
    [InlineData(5, "GROUND_ANIM_WALK_IN_PLACE", 0, false, true, "loop")]
    [InlineData(2, "GROUND_ANIM_STILL", 0, false, false, "play once")]
    [InlineData(6, "GROUND_ANIM_SLEEP", 5, false, true, "loop")]
    public void DescribeSelectAnimation_MapsConstantsToAx(
        int scriptAnim, string name, int ax, bool hold, bool loops, string playback)
    {
        var mapping = GroundAnimMapping.Describe(scriptAnim, ScriptNamedDefinitions.BuiltInGroundAnim);
        Assert.Equal(scriptAnim, mapping.ScriptAnimId);
        Assert.Equal(name, mapping.ConstantName);
        Assert.Equal(ax, mapping.AxAnimIndex);
        Assert.Equal(hold, mapping.HoldFirstFrame);
        Assert.Equal(loops, mapping.Loops);
        Assert.Equal(playback, mapping.PlaybackMode);
        Assert.Contains("SELECT_ANIMATION", mapping.SelectAnimationLabel, StringComparison.Ordinal);
        Assert.Contains(name, mapping.SelectAnimationLabel, StringComparison.Ordinal);
    }

    [Fact]
    public void ListMappings_IncludesStillAndTwitch()
    {
        var rows = GroundAnimMapping.List(ScriptNamedDefinitions.BuiltInGroundAnim);
        Assert.Contains(rows, r => r.ScriptAnimId == 2 && r.ConstantName == "GROUND_ANIM_STILL");
        Assert.Contains(rows, r => r.ScriptAnimId == 22 && r.AxAnimIndex == 13);
    }

    [Fact]
    public void Scrubber_AdvancesAxFramesIgnoringHold()
    {
        var seq = AxAnimSequence.FromFrames(
        [
            new(6, 229, 0, 0),
            new(6, 230, 0, 1),
        ]);
        var scrub = AnimScrubber.ForActor(22, seq, direction: 0);

        Assert.Equal(229, scrub.Current.PoseId);
        Assert.Equal(0, scrub.ScenePlayTick);
        Assert.Equal(229, scrub.ScenePlayFrame.PoseId);

        scrub.SetTick(6);
        Assert.Equal(230, scrub.Current.PoseId);
        Assert.Equal(1, scrub.FrameIndex);
        Assert.Equal(0, scrub.ScenePlayTick);
        Assert.Equal(229, scrub.ScenePlayFrame.PoseId);

        scrub.SetFrameIndex(0);
        Assert.Equal(0, scrub.Tick);
        Assert.Equal(229, scrub.Current.PoseId);
    }

    [Fact]
    public void Scrubber_LoopingAnimUsesWrappedScenePlayTick()
    {
        var seq = AxAnimSequence.FromFrames(
        [
            new(4, 1, 0, 0),
            new(4, 2, 0, 0),
        ]);
        var scrub = AnimScrubber.ForActor(5, seq, direction: 0);
        scrub.SetTick(4);
        Assert.Equal(4, scrub.ScenePlayTick);
        Assert.Equal(2, scrub.ScenePlayFrame.PoseId);
    }

    [Fact]
    public void EffectiveTick_PlayOnceHoldsLastFrame()
    {
        Assert.Equal(0, GroundAnimMapping.EffectiveTick(2, 0, 10));
        Assert.Equal(9, GroundAnimMapping.EffectiveTick(2, 99, 10));
        Assert.Equal(0, GroundAnimMapping.EffectiveTick(22, 40, 12));
        Assert.Equal(4, GroundAnimMapping.EffectiveTick(5, 12, 8));
    }

    [Fact]
    public void TryLoadActor_MoltresTwitchMatchesGamePoses()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        if (!File.Exists(Path.Combine(root, "src", "data", "ax", "moltres.h")))
            return;

        var scrub = AnimScrubber.TryLoadActor(root, "moltres", scriptAnim: 22, direction: 0);
        Assert.NotNull(scrub);
        Assert.Equal(13, scrub!.Mapping.AxAnimIndex);
        Assert.Equal(229, scrub.Current.PoseId);
        Assert.True(scrub.Sequence.Frames.Count >= 2);
        scrub.SetTick(scrub.Sequence.Frames[0].DurationFrames);
        Assert.Equal(230, scrub.Current.PoseId);

        var atlas = new ActorSpriteAtlas(root);
        var held = atlas.TryGetAnimatedSprite(146, 22, 0, tickFrames: 30, applyRetailPlayback: true);
        var scrubbed = atlas.TryGetAnimatedSprite(146, 22, 0, tickFrames: 30, applyRetailPlayback: false);
        Assert.NotNull(held);
        Assert.NotNull(scrubbed);
        Assert.False(
            held!.Value.Image.Pixels.SequenceEqual(scrubbed!.Value.Image.Pixels),
            "Scrub preview must show later AX frames even when Scene Play holds first");
    }

    [Fact]
    public void EffectScrubber_NoticeAdvancesWhenRomPresent()
    {
        var romPath = FindUpwards("baserom.gba");
        if (romPath is null) return;

        var rom = RomImage.Open(romPath);
        var atlas = new EmotionEffectAtlas(FindRepoRoot(), rom);
        var info = atlas.TryGetSequence(EmotionEffectAtlas.NoticeId);
        Assert.NotNull(info);
        var seq = info.Value;
        Assert.True(seq.TotalDuration > 0);
        Assert.True(seq.Frames.Count >= 1);

        var names = new NamedIdCatalog([(88, "EMOTION_EFFECT_NOTICE")]);
        var scrub = AnimScrubber.ForEffect(EmotionEffectAtlas.NoticeId, seq, names);
        Assert.Equal("EMOTION_EFFECT_NOTICE", scrub.Mapping.ConstantName);
        Assert.Equal(0, scrub.FrameIndex);
        if (seq.Frames.Count < 2)
            return;

        scrub.SetTick(seq.Frames[0].DurationFrames);
        Assert.Equal(1, scrub.FrameIndex);
        var a = atlas.TryGetFrame(EmotionEffectAtlas.NoticeId, 0);
        var b = atlas.TryGetFrame(EmotionEffectAtlas.NoticeId, seq.Frames[0].DurationFrames);
        Assert.NotNull(a);
        Assert.NotNull(b);
        Assert.Equal(scrub.Current.PoseId, seq.Frames[scrub.FrameIndex].PoseId);
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (Directory.Exists(Path.Combine(dir.FullName, "graphics", "ax", "mon")))
                return dir.FullName;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "graphics", "ax", "mon")) ? local : null;
    }

    private static string? FindUpwards(string fileName)
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            var candidate = Path.Combine(dir.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red/baserom.gba";
        return File.Exists(local) ? local : null;
    }
}
