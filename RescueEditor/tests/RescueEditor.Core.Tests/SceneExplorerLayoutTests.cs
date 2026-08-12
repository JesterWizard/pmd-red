using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneExplorerLayoutTests
{
    [Fact]
    public void Build_OrdersScenesByMapId_NotAlphabetically()
    {
        var scenes = new[]
        {
            new Scene { MapId = 190, Name = "Mt. Thunder Peak" },
            new Scene { MapId = 1, Name = "Pokémon Square" },
            new Scene { MapId = 10, Name = "Pikachu Team Base" },
        };

        var items = SceneExplorerLayout.Build(scenes);
        Assert.Equal(new[] { 1, 10, 190 }, items.Select(i => i.MapId).ToArray());
        Assert.Equal("1: Pokémon Square", items[0].Title);
        Assert.Equal("10: Pikachu Team Base", items[1].Title);
        Assert.Equal("190: Mt. Thunder Peak", items[2].Title);
    }

    [Fact]
    public void Build_IsFlat_NoLetterGroups()
    {
        var scenes = new[]
        {
            new Scene { MapId = 0, Name = "Adventure Start" },
            new Scene { MapId = 50, Name = "Dungeon" },
            new Scene { MapId = 100, Name = "Base" },
        };

        var items = SceneExplorerLayout.Build(scenes);
        Assert.Equal(3, items.Count);
        // Titles are map-id prefixed, not "A — Adventure" style groups.
        Assert.All(items, item => Assert.StartsWith($"{item.MapId}:", item.Title));
    }
}

public sealed class SoundIndexerPerfTests
{
    [Fact]
    public void IndexWaves_DoesNotRequireRomSearchAtCatalogTime()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(baserom);
        var waves = SoundIndexer.Index(root, rom)
            .Where(a => a.Kind == AssetKind.SoundWave)
            .ToArray();
        Assert.NotEmpty(waves);
        // Fast path: list source files without resolving ROM ranges during catalog build.
        Assert.All(waves, w => Assert.False(w.HasRomRange));
        Assert.All(waves, w => Assert.False(string.IsNullOrWhiteSpace(w.SourcePath)));
    }

    [Fact]
    public void SoundWaveCodec_ResolvesRomRangeLazilyFromSource()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(baserom);
        var wave = SoundIndexer.Index(root, rom)
            .First(a => a.Kind == AssetKind.SoundWave &&
                        a.Metadata.GetValueOrDefault("waveKind") == "directsound");
        Assert.False(wave.HasRomRange);

        var resolved = SoundWaveCodec.Resolve(rom, wave);
        Assert.True(resolved.HasRomRange);
        var wav = SoundWaveCodec.ToWave(rom, resolved);
        Assert.True(wav.Length > 44);
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
