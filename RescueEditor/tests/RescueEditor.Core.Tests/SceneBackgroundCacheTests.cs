using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneBackgroundCacheTests
{
    [Fact]
    public void RenderMapBackgroundImageMatchesPngPath()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        foreach (var id in new[] { 1, 6 })
        {
            var scene = database.FindScene(id)!;
            var expected = RgbaImage.FromPng(SceneCompositor.RenderMapBackground(rom, scene)!.Png!)!;
            var actual = SceneCompositor.RenderMapBackgroundImage(rom, scene)!;
            Assert.Equal(expected.Width, actual.Width);
            Assert.Equal(expected.Height, actual.Height);
            Assert.True(expected.Pixels.AsSpan().SequenceEqual(actual.Pixels));
        }
    }

    [Fact]
    public void RenderMapBackgroundImageReturnsIndependentCopies()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(6)!;
        var a = SceneCompositor.RenderMapBackgroundImage(rom, scene)!;
        var original = a.Pixels[0];
        a.Pixels[0] ^= 0xFF;
        var b = SceneCompositor.RenderMapBackgroundImage(rom, scene)!;
        Assert.NotSame(a.Pixels, b.Pixels);
        Assert.Equal(original, b.Pixels[0]);
    }

    [Fact]
    public void ComposeSceneImageIsStableAcrossCalls()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var scene = database.FindScene(1)!;
        var live = scene.AllEntities.First(e => e.Kind == SceneEntityKind.Live);
        var c0 = SceneCompositor.ComposeSceneImage(rom, scene, 0, 1);
        var c1 = SceneCompositor.ComposeSceneImage(rom, scene, 0, 1, selected: live, drawLabels: true, showGrid: true);
        var c2 = SceneCompositor.ComposeSceneImage(rom, scene, 0, 1);
        Assert.NotNull(c1);
        Assert.True(c0.Pixels.AsSpan().SequenceEqual(c2.Pixels));
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
