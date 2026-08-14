using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class AxActorSpriteAuthoringTests
{
    [Fact]
    public void ValidateFolder_RejectsMissingSprites()
    {
        var dest = MakeDestFrame(16, 16);
        var src = Directory.CreateTempSubdirectory("ax-src-empty").FullName;
        try
        {
            var error = AxActorSpriteAuthoring.ValidateFolder(src, dest);
            Assert.NotNull(error);
            Assert.Contains("sprite_", error, StringComparison.OrdinalIgnoreCase);
        }
        finally
        {
            Directory.Delete(src, recursive: true);
            Directory.Delete(Path.GetDirectoryName(dest)!, recursive: true);
        }
    }

    [Fact]
    public void ValidateFolder_RejectsSizeMismatch()
    {
        var dest = MakeDestFrame(16, 16);
        var src = Directory.CreateTempSubdirectory("ax-src-size").FullName;
        try
        {
            File.WriteAllBytes(Path.Combine(src, "sprite_1.png"), Solid(8, 8, 200, 10, 10).ToPng());
            var error = AxActorSpriteAuthoring.ValidateFolder(src, dest);
            Assert.NotNull(error);
            Assert.Contains("16×16", error);
        }
        finally
        {
            Directory.Delete(src, recursive: true);
            Directory.Delete(Path.GetDirectoryName(dest)!, recursive: true);
        }
    }

    [Fact]
    public void TryWriteFolder_ReplacesPngAnd4bppAndAtlasReadsIt()
    {
        var dest = MakeDestFrame(16, 16);
        var repo = Path.GetFullPath(Path.Combine(dest, "..", "..", "..", ".."));
        var src = Directory.CreateTempSubdirectory("ax-src-ok").FullName;
        try
        {
            var next = Solid(16, 16, 16, 200, 40);
            Mark(next, 3, 5, 240, 20, 20);
            File.WriteAllBytes(Path.Combine(src, "sprite_1.png"), next.ToPng());

            var error = AxActorSpriteAuthoring.TryWriteFolder(src, dest);
            Assert.Null(error);

            var written = RgbaImage.FromPng(File.ReadAllBytes(Path.Combine(dest, "sprite_1.png")));
            Assert.NotNull(written);
            AssertPixelNear(written!, 3, 5, 240, 20, 20);

            var tiles = File.ReadAllBytes(Path.Combine(dest, "sprite_1.4bpp"));
            Assert.Equal(16 / 8 * 16 / 8 * 32, tiles.Length);

            var plte = File.ReadAllBytes(Path.Combine(dest, "sprite_1.png"));
            Assert.True(System.Text.Encoding.ASCII.GetString(plte).Contains("PLTE", StringComparison.Ordinal));

            var atlas = new ActorSpriteAtlas(repo);
            var thumb = atlas.TryGetStandingThumbnail(201);
            Assert.NotNull(thumb);
            AssertPixelNear(thumb!, 3, 5, 240, 20, 20);
        }
        finally
        {
            Directory.Delete(src, recursive: true);
            Directory.Delete(repo, recursive: true);
        }
    }

    [Fact]
    public void TryWriteSpecies_UsesUnownOverrideFolder()
    {
        var repo = Directory.CreateTempSubdirectory("ax-repo-species").FullName;
        var dest = Path.Combine(repo, "graphics", "ax", "mon", "unowna");
        Directory.CreateDirectory(dest);
        File.WriteAllBytes(Path.Combine(dest, "sprite_1.png"), Solid(16, 16, 8, 8, 8).ToPng());
        File.WriteAllBytes(Path.Combine(dest, "sprite_1.4bpp"), new byte[128]);
        var src = Directory.CreateTempSubdirectory("ax-src-species").FullName;
        try
        {
            File.WriteAllBytes(Path.Combine(src, "sprite_1.png"), Solid(16, 16, 0, 90, 200).ToPng());
            var error = AxActorSpriteAuthoring.TryWriteSpecies(repo, speciesId: 201, src);
            Assert.Null(error);
            var image = RgbaImage.FromPng(File.ReadAllBytes(Path.Combine(dest, "sprite_1.png")));
            AssertPixelNear(image!, 0, 0, 0, 90, 200);
        }
        finally
        {
            Directory.Delete(src, recursive: true);
            Directory.Delete(repo, recursive: true);
        }
    }

    private static string MakeDestFrame(int width, int height)
    {
        var repo = Directory.CreateTempSubdirectory("ax-repo").FullName;
        var dest = Path.Combine(repo, "graphics", "ax", "mon", "unowna");
        Directory.CreateDirectory(dest);
        File.WriteAllBytes(Path.Combine(dest, "sprite_1.png"), Solid(width, height, 40, 40, 40).ToPng());
        File.WriteAllBytes(Path.Combine(dest, "sprite_1.4bpp"), new byte[width / 8 * height / 8 * 32]);
        return dest;
    }

    private static RgbaImage Solid(int w, int h, byte r, byte g, byte b)
    {
        var px = new byte[w * h * 4];
        for (var i = 0; i < px.Length; i += 4)
        {
            px[i] = r;
            px[i + 1] = g;
            px[i + 2] = b;
            px[i + 3] = 255;
        }

        return new RgbaImage(w, h, px);
    }

    private static void Mark(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        image.Pixels[o] = r;
        image.Pixels[o + 1] = g;
        image.Pixels[o + 2] = b;
        image.Pixels[o + 3] = 255;
    }

    private static void AssertPixelNear(RgbaImage image, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * image.Width + x) * 4;
        Assert.InRange(image.Pixels[o], r - 8, r + 8);
        Assert.InRange(image.Pixels[o + 1], g - 8, g + 8);
        Assert.InRange(image.Pixels[o + 2], b - 8, b + 8);
        Assert.True(image.Pixels[o + 3] > 8);
    }
}
