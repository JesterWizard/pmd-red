using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public class PortraitCleanupTests
{
    [Fact]
    public void DespeckleRemovesOrphanDarkPixelsSurroundedByBackground()
    {
        const byte bgR = 119, bgG = 199, bgB = 215;
        var pixels = new byte[40 * 40 * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = bgR;
            pixels[i + 1] = bgG;
            pixels[i + 2] = bgB;
            pixels[i + 3] = 255;
        }

        // Orphan dark speck in open background (Charmander-style stray).
        Set(pixels, 32, 14, 71, 55, 71, 255);
        Set(pixels, 32, 15, 71, 55, 71, 255);

        var image = new RgbaImage(40, 40, pixels);
        PortraitCleanup.Despeckle(image);

        Assert.True(IsColor(image, 32, 14, bgR, bgG, bgB), "orphan at (32,14) should become background");
        Assert.True(IsColor(image, 32, 15, bgR, bgG, bgB), "orphan at (32,15) should become background");
    }

    [Fact]
    public void DespeckleKeepsOutlineAttachedToBody()
    {
        const byte bgR = 119, bgG = 199, bgB = 215;
        var pixels = new byte[40 * 40 * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = bgR;
            pixels[i + 1] = bgG;
            pixels[i + 2] = bgB;
            pixels[i + 3] = 255;
        }

        // Solid body block with a dark outline on its edge — must survive.
        for (var y = 10; y < 30; y++)
        for (var x = 10; x < 30; x++)
            Set(pixels, x, y, 255, 119, 87, 255);
        for (var x = 10; x < 30; x++)
            Set(pixels, x, 10, 71, 55, 71, 255);

        var image = new RgbaImage(40, 40, pixels);
        PortraitCleanup.Despeckle(image);

        Assert.True(IsColor(image, 15, 10, 71, 55, 71), "attached outline must remain");
        Assert.True(IsColor(image, 20, 20, 255, 119, 87), "body must remain");
    }

    private static void Set(byte[] px, int x, int y, byte r, byte g, byte b, byte a)
    {
        var o = (y * 40 + x) * 4;
        px[o] = r;
        px[o + 1] = g;
        px[o + 2] = b;
        px[o + 3] = a;
    }

    private static bool IsColor(RgbaImage img, int x, int y, byte r, byte g, byte b)
    {
        var o = (y * img.Width + x) * 4;
        return img.Pixels[o] == r && img.Pixels[o + 1] == g && img.Pixels[o + 2] == b
               && img.Pixels[o + 3] >= 250;
    }
}
