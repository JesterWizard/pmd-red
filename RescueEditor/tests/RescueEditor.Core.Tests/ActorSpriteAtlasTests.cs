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
        Assert.Equal(8, bang!.Width);
        Assert.Equal(8, bang.Height);
        // Drawn NOTICE fallback is white ink.
        var white = 0;
        for (var i = 0; i < bang.Pixels.Length; i += 4)
        {
            if (bang.Pixels[i + 3] < 200)
                continue;
            if (bang.Pixels[i] > 200 && bang.Pixels[i + 1] > 200 && bang.Pixels[i + 2] > 200)
                white++;
        }
        Assert.True(white >= 4, $"Expected white NOTICE ink, got {white} white pixels");
    }

    [Fact]
    public void GbaChromaKeysTealPaddingAndFindsContentBottom()
    {
        var root = FindRepoRoot();
        if (root is null) return;
        var path = Path.Combine(root, "graphics", "ax", "mon", "charmander", "sprite_1.png");
        if (!File.Exists(path)) return;

        var image = RgbaImage.FromPng(File.ReadAllBytes(path));
        Assert.NotNull(image);
        GbaChroma.KeyOut(image!);
        var bottom = GbaChroma.ContentBottom(image);
        Assert.True(bottom >= 0 && bottom < image.Height - 4,
            $"Expected feet above chroma pad, bottom={bottom} height={image.Height}");
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
