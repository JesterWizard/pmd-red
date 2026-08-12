using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class BplPaletteAnimationTests
{
    [Fact]
    public void CometBpl_HasPaletteAnimations()
    {
        var bpl = ReadMapBg("A04P03.bpl");
        if (bpl is null)
            return;

        var anim = BplPaletteAnimation.TryParse(bpl);
        Assert.NotNull(anim);
        Assert.True(anim!.HasAnimations);
        Assert.Equal(7, anim.PaletteCount);
        Assert.Equal(8, anim.NumFrames(1));
        Assert.Equal(4, anim.DurationPerFrame(1));
        Assert.Equal(12, anim.NumFrames(6));
    }

    [Fact]
    public void CometRender_ChangesAcrossPaletteAnimTicks()
    {
        var root = FindRepoRoot();
        if (root is null)
            return;

        var bpl = File.ReadAllBytes(Path.Combine(root, "data", "map_bg", "A04P03.bpl"));
        var bpc = File.ReadAllBytes(Path.Combine(root, "data", "map_bg", "A04P03c.bpc"));
        var bma = File.ReadAllBytes(Path.Combine(root, "data", "map_bg", "A04P03m.bma"));

        var frame0 = GroundMapRenderer.Render("Comet", bpl, bpc, bma, animTick: 0);
        var frameLater = GroundMapRenderer.Render("Comet", bpl, bpc, bma, animTick: 16);
        Assert.NotNull(frame0.Png);
        Assert.NotNull(frameLater.Png);
        Assert.False(
            frame0.Png!.SequenceEqual(frameLater.Png!),
            "Comet BPL palette animation should change the rendered map across ticks");
    }

    [Fact]
    public void CometScenePlay_BackgroundAdvancesWithAnimTick()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (_, _, database) = CatalogBuilder.Build(rom);
        var scene = database.FindScene(173);
        Assert.NotNull(scene);
        Assert.Equal("A04P03m", scene!.Map?.BmaName);

        var session = new ScenePlaySession(rom, scene, group: 2, sector: 0, scripted: true);
        Assert.True(session.HasMapPaletteAnimation, "Comet BPL should load as palette-animated");

        var at0 = SceneCompositor.RenderMapBackground(rom, scene, animTick: 0);
        _ = session.RenderFrameImage();
        for (var i = 0; i < 20; i++)
            session.Tick(1.0 / 60.0);
        Assert.True(session.AnimTick >= 20);
        _ = session.RenderFrameImage();

        var atTick = SceneCompositor.RenderMapBackground(rom, scene, animTick: session.AnimTick);
        Assert.NotNull(at0?.Png);
        Assert.NotNull(atTick?.Png);
        Assert.False(
            at0!.Png!.SequenceEqual(atTick!.Png!),
            "Scene Play anim tick should drive Comet BPL palette animation");
    }

    private static byte[]? ReadMapBg(string fileName)
    {
        var root = FindRepoRoot();
        if (root is null)
            return null;
        var path = Path.Combine(root, "data", "map_bg", fileName);
        return File.Exists(path) ? File.ReadAllBytes(path) : null;
    }

    private static string? FindRepoRoot()
    {
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        while (dir is not null)
        {
            if (File.Exists(Path.Combine(dir.FullName, "baserom.gba")) ||
                Directory.Exists(Path.Combine(dir.FullName, "data", "map_bg")))
                return dir.FullName;
            dir = dir.Parent;
        }

        const string local = "/home/username/Github/pmd-red";
        return Directory.Exists(Path.Combine(local, "data", "map_bg")) ? local : null;
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
