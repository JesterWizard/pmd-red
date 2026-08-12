using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DungeonShellPreviewTests
{
    private const int MtThunderEndMapId = 190;

    [Fact]
    public void MtThunderPeakPreview_IsNotMidCorridor()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (_, _, database) = CatalogBuilder.Build(rom);
        var peak = database.FindScene(MtThunderEndMapId);
        Assert.NotNull(peak);
        Assert.Equal("D06P03m", peak!.Map?.BmaName);

        var peakPreview = SceneCompositor.RenderMapBackground(rom, peak);
        Assert.NotNull(peakPreview?.Png);
        Assert.False(SceneCompositor.IsVisuallyFlat(peakPreview!), "Peak should use dungeon emap, not an empty shell");

        var midPreview = GroundMapIndexer.TryRenderFromMap(rom, new GroundMapDefinition
        {
            MapId = MtThunderEndMapId,
            Name = "Mid",
            BplName = "D06P02",
            BpcName = "D06P02c",
            BmaName = "D06P02m",
        });
        Assert.NotNull(midPreview?.Png);

        Assert.False(
            peakPreview!.Png!.SequenceEqual(midPreview!.Png!),
            "Peak must not fall back to Mt. Thunder Mid's corridor");
    }

    [Fact]
    public void ResolveTileset_MtThunderPeakFloor100_Is66()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        Assert.True(DungeonShellPreview.TryResolveTileset(rom, dungeonId: 6, floor: 100, out var tileset));
        Assert.Equal(66, tileset);
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
