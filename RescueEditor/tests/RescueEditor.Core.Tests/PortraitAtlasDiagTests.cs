using Xunit;
using RescueEditor.Core;

namespace RescueEditor.Core.Tests;

public class PortraitAtlasDiagTests
{
    [Fact]
    public void PortraitPngDecodesCleanlyAndAtlasUsesRomOrPng()
    {
        var root = @"C:\Users\Owner\Github\pmd-red-win";
        if (!File.Exists(Path.Combine(root, "baserom.gba"))) return;

        var path = Path.Combine(root, "graphics", "portraits", "charmander", "Normal.png");
        var direct = RgbaImage.FromPng(File.ReadAllBytes(path));
        Assert.NotNull(direct);
        Assert.True(Count(direct!) < 40, $"PNG codec unique={Count(direct)}");

        var rom = RomImage.Open(Path.Combine(root, "baserom.gba"));
        var atlas = new PortraitAtlas(rom, root);
        var img = atlas.TryGet(4, 4); // Worried
        Assert.NotNull(img);
        Assert.True(Count(img!) < 80, $"atlas unique={Count(img)}");
    }

    private static int Count(RgbaImage img)
    {
        var set = new HashSet<int>();
        for (var i = 0; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i + 3] < 16) continue;
            set.Add(img.Pixels[i] | (img.Pixels[i+1]<<8) | (img.Pixels[i+2]<<16));
        }
        return set.Count;
    }
}
