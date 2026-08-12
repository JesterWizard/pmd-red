using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CompressionTests
{
    [Fact]
    public void DecompressAt_NinetalesPortrait_MatchesSkyTempleGolden()
    {
        var at4px = ReadTestdata("ninetales_normal.at4px");
        var expected = ReadTestdata("ninetales_normal.decompressed.bin");

        var actual = Compression.DecompressAt(at4px);

        Assert.Equal(expected.Length, actual.Length);
        Assert.Equal(expected, actual);
    }

    [Fact]
    public void DecompressAt_NinetalesPortrait_OnlyKeepsEyeReds()
    {
        // Palette index 5 is the eye red. A prior PX pattern bug sprayed it across the fur.
        var decoded = Compression.DecompressAt(ReadTestdata("ninetales_normal.at4px"));
        var reds = new List<(int X, int Y)>();
        for (var tileY = 0; tileY < 5; tileY++)
        for (var tileX = 0; tileX < 5; tileX++)
        {
            var tileOffset = (tileY * 5 + tileX) * 32;
            for (var row = 0; row < 8; row++)
            for (var pair = 0; pair < 4; pair++)
            {
                var packed = decoded[tileOffset + row * 4 + pair];
                for (var i = 0; i < 2; i++)
                {
                    var index = i == 0 ? packed & 0xF : packed >> 4;
                    if (index != 5)
                        continue;
                    reds.Add((tileX * 8 + pair * 2 + i, tileY * 8 + row));
                }
            }
        }

        Assert.Equal([(24, 15), (25, 16), (26, 16)], reds);
    }

    private static byte[] ReadTestdata(string fileName)
    {
        var path = Path.Combine(AppContext.BaseDirectory, "Testdata", fileName);
        if (!File.Exists(path))
        {
            // Fallback when content files were not copied (IDE / older builds).
            path = FindUpwards(Path.Combine("Testdata", fileName))
                ?? throw new FileNotFoundException($"Missing testdata: {fileName}");
        }

        return File.ReadAllBytes(path);
    }

    private static string? FindUpwards(string relative)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, relative);
            if (File.Exists(candidate))
                return candidate;
            // tests/RescueEditor.Core.Tests/Testdata/...
            candidate = Path.Combine(directory.FullName, "tests", "RescueEditor.Core.Tests", relative);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }

        return null;
    }
}
