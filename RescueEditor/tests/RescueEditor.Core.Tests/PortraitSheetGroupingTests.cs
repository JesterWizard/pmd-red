using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class PortraitSheetGroupingTests
{
    [Fact]
    public void GroupBySpecies_CollapsesEmotionsIntoUniqueNames()
    {
        var portraits = new[]
        {
            Portrait("alakazam", "Normal", 0x100, 0x10),
            Portrait("alakazam", "Happy", 0x200, 0x10),
            Portrait("bulbasaur", "Normal", 0x300, 0x10),
        };

        var sheets = PortraitSheetGrouping.GroupBySpecies(portraits);

        Assert.Equal(2, sheets.Count);
        Assert.Equal(["alakazam", "bulbasaur"], sheets.Select(s => s.Name).ToArray());
        Assert.All(sheets, s => Assert.Equal(AssetKind.KaoPortraitSheet, s.Kind));
        Assert.Equal(2, sheets[0].Children.Count);
        Assert.Equal(1, sheets[1].Children.Count);
        Assert.Equal("Happy", sheets[0].Children[1].Metadata["emotion"]);
    }

    [Fact]
    public void GroupBySpecies_PreservesEmotionOrder()
    {
        var portraits = new[]
        {
            Portrait("mew", "Normal", 1, 1),
            Portrait("mew", "Happy", 2, 1),
            Portrait("mew", "Angry", 3, 1),
        };

        var sheet = Assert.Single(PortraitSheetGrouping.GroupBySpecies(portraits));
        Assert.Equal(["Normal", "Happy", "Angry"],
            sheet.Children.Select(c => c.Metadata["emotion"]).ToArray());
    }

    [Fact]
    public void CatalogPortraitsAreUniqueSpeciesSheets()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, _, _) = CatalogBuilder.Build(rom);
        var portraits = catalog.ForCategory(AssetCategory.Portraits);
        Assert.NotEmpty(portraits);
        Assert.All(portraits, p => Assert.Equal(AssetKind.KaoPortraitSheet, p.Kind));
        Assert.Equal(portraits.Count, portraits.Select(p => p.Name).Distinct(StringComparer.OrdinalIgnoreCase).Count());
        Assert.Contains(portraits, p => p.Children.Count >= 2);

        var sheet = portraits.First(p => p.Children.Count >= 2);
        var preview = GraphicsRenderers.RenderPortraitSheet(rom, sheet);
        Assert.NotNull(preview.Png);
        var image = RgbaImage.FromPng(preview.Png!);
        Assert.NotNull(image);
        Assert.True(image!.Width > 40, $"Sheet should be wider than one face (got {image.Width})");
        Assert.True(image.Height > 40, $"Sheet should include emotion labels under faces (got {image.Height})");
    }

    private static AssetDescriptor Portrait(string species, string emotion, int offset, int size) => new()
    {
        Id = $"portrait:{species}:{emotion}",
        Name = $"{species} — {emotion}",
        Category = AssetCategory.Portraits,
        Kind = AssetKind.KaoPortrait,
        Offset = offset,
        Size = size,
        AuxiliaryOffset = offset + size,
        AuxiliarySize = 0x20,
        Metadata = new Dictionary<string, string>
        {
            ["species"] = species,
            ["emotion"] = emotion,
            ["forcePrefix"] = "false",
        },
    };

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
