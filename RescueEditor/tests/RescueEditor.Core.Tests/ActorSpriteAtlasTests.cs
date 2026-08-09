using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public class ActorSpriteAtlasTests
{
    [Theory]
    [InlineData(0, 0, false)]  // South
    [InlineData(2, 6, true)]   // East = west sheet flipped
    [InlineData(6, 6, false)]  // West
    [InlineData(4, 12, false)] // North
    public void IdleSpriteForDirectionMatchesAxLayout(int dir, int spriteIndex, bool flip)
    {
        var (index, flipH) = ActorSpriteAtlas.IdleSpriteForDirection(dir);
        Assert.Equal(spriteIndex, index);
        Assert.Equal(flip, flipH);
    }

    [Fact]
    public void LoadsSleepAndWestSheetsWhenPresent()
    {
        var root = FindRepoRoot();
        if (root is null) return;

        var atlas = new ActorSpriteAtlas(root);
        var sleep = atlas.TryGetAnimatedSprite(
            speciesId: 4,
            animationId: GroundScriptVm.AnimSleep,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(sleep);

        var west = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirWest,
            tickFrames: 0);
        Assert.NotNull(west);
        Assert.False(west.Value.FlipH);

        var south = atlas.TryGetAnimatedSprite(
            speciesId: 1,
            animationId: GroundScriptVm.AnimIdle,
            direction: GroundScriptVm.DirSouth,
            tickFrames: 0);
        Assert.NotNull(south);
        // West-facing sheet should differ from south idle.
        Assert.False(ReferenceEquals(west.Value.Image, south.Value.Image));
    }

    [Fact]
    public void EmotionEffectAtlasLoadsNoticeIcon()
    {
        var root = FindRepoRoot();
        if (root is null) return;

        var effects = new EmotionEffectAtlas(root);
        var bang = effects.TryGet(EmotionEffectAtlas.NoticeId);
        Assert.NotNull(bang);
        Assert.True(bang!.Width >= 2 && bang.Height >= 2);
        // Should have some opaque white-ish ink (not empty).
        var opaque = 0;
        for (var i = 3; i < bang.Pixels.Length; i += 4)
        {
            if (bang.Pixels[i] > 200)
                opaque++;
        }
        Assert.True(opaque > 0);
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (Directory.Exists(Path.Combine(dir.FullName, "graphics", "ax", "mon", "charmander")))
                return dir.FullName;
            dir = dir.Parent;
        }
        // WSL repo path used by Windows mirror tests.
        const string wsl = @"\\wsl$\Ubuntu\home\username\Github\pmd-red";
        if (Directory.Exists(Path.Combine(wsl, "graphics", "ax", "mon", "charmander")))
            return wsl;
        var local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "graphics", "ax", "mon", "charmander")) ? local : null;
    }
}
