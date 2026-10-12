using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class HomeTilesTests
{
    private static AssetDescriptor Asset(string id, AssetCategory category, AssetKind kind) => new()
    {
        Id = id,
        Name = id,
        Category = category,
        Kind = kind,
    };

    [Fact]
    public void Build_ReturnsTilesInFixedOrder()
    {
        var tiles = HomeTiles.Build(new AssetCatalog(), null);

        Assert.Equal(
            new[]
            {
                AssetCategory.Scenes,
                AssetCategory.Portraits,
                AssetCategory.Dialogue,
                AssetCategory.Music,
                AssetCategory.SoundEffects,
                AssetCategory.GroundMaps,
                AssetCategory.Backgrounds,
                AssetCategory.Effects,
                AssetCategory.Scripts,
                AssetCategory.Dungeons,
                AssetCategory.DataTables,
                AssetCategory.CPatches,
            },
            tiles.Select(tile => tile.Category).ToArray());
    }

    [Fact]
    public void Build_TitlesPortraitsAsCharacters()
    {
        var tiles = HomeTiles.Build(new AssetCatalog(), null);

        Assert.Equal("Characters", tiles.Single(tile => tile.Category == AssetCategory.Portraits).Title);
        Assert.Equal("Maps", tiles.Single(tile => tile.Category == AssetCategory.GroundMaps).Title);
    }

    [Fact]
    public void Build_CountsAssetsPerCategory()
    {
        var catalog = new AssetCatalog();
        catalog.Add(Asset("music-a", AssetCategory.Music, AssetKind.SoundSong));
        catalog.Add(Asset("music-b", AssetCategory.Music, AssetKind.SoundSong));
        catalog.Add(Asset("portrait-a", AssetCategory.Portraits, AssetKind.KaoPortrait));
        catalog.Add(Asset("fx-a", AssetCategory.Effects, AssetKind.Effect));
        catalog.Add(Asset("fx-b", AssetCategory.Effects, AssetKind.Effect));
        catalog.Add(Asset("fx-c", AssetCategory.Effects, AssetKind.Effect));

        var tiles = HomeTiles.Build(catalog, null);

        Assert.Equal(2, tiles.Single(tile => tile.Category == AssetCategory.Music).Count);
        Assert.Equal(1, tiles.Single(tile => tile.Category == AssetCategory.Portraits).Count);
        Assert.Equal(0, tiles.Single(tile => tile.Category == AssetCategory.Dialogue).Count);
        Assert.Equal(3, tiles.Single(tile => tile.Category == AssetCategory.Effects).Count);
    }

    [Fact]
    public void Build_UsesSceneDatabaseCountForScenes()
    {
        var scenes = new SceneDatabase();
        scenes.Scenes.Add(new Scene { MapId = 1, Name = "a" });
        scenes.Scenes.Add(new Scene { MapId = 2, Name = "b" });
        scenes.Scenes.Add(new Scene { MapId = 3, Name = "c" });

        var emptyCatalogTiles = HomeTiles.Build(new AssetCatalog(), scenes);
        Assert.Equal(3, emptyCatalogTiles.Single(tile => tile.Category == AssetCategory.Scenes).Count);

        var catalog = new AssetCatalog();
        catalog.Add(Asset("scene-a", AssetCategory.Scenes, AssetKind.Raw));
        catalog.Add(Asset("scene-b", AssetCategory.Scenes, AssetKind.Raw));
        var nullSceneTiles = HomeTiles.Build(catalog, null);
        Assert.Equal(
            catalog.ForCategory(AssetCategory.Scenes).Count,
            nullSceneTiles.Single(tile => tile.Category == AssetCategory.Scenes).Count);
    }
}
