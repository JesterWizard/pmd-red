using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CatalogRawArchiveTests
{
    [Fact]
    public void Build_DoesNotIndexRawArchiveEntries()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;
        var rom = RomImage.Open(baserom);

        var result = CatalogBuilder.Build(rom, parallel: false);

        Assert.DoesNotContain(result.Catalog.Assets, a => a.Id.StartsWith("archive:", StringComparison.Ordinal));
        Assert.Contains(result.Catalog.Assets, a => a.Category == AssetCategory.GroundMaps);
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
