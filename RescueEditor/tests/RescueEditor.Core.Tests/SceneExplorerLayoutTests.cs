using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SceneExplorerLayoutTests
{
    [Fact]
    public void Build_SplitsIntoStoryFriendAreasAndPostGame()
    {
        var scenes = new[]
        {
            Scene(190, "Mt. Thunder Peak", "D06P03m"),
            Scene(105, "Bountiful Sea", "H01P01m"),
            Scene(1, "Pokémon Square", "T01P01m"),
            Scene(216, "Western Cave", "D20P01m"),
            Scene(235, "Spinda's Café", "T01P08m"),
            Scene(124, "Sky Blue Plains", "H06P03m"),
        };

        var groups = SceneExplorerLayout.Build(scenes);

        Assert.Equal(
            new[] { SceneExplorerLayout.Story, SceneExplorerLayout.FriendAreas, SceneExplorerLayout.PostGame },
            groups.Select(g => g.Key).ToArray());
        Assert.Equal(new[] { "Story", "Friend Areas", "Post Game" }, groups.Select(g => g.Title).ToArray());
        Assert.Equal(new[] { 1, 190 }, groups[0].Items.Select(i => i.MapId).ToArray());
        Assert.Equal(new[] { 105, 124 }, groups[1].Items.Select(i => i.MapId).ToArray());
        Assert.Equal(new[] { 216, 235 }, groups[2].Items.Select(i => i.MapId).ToArray());
        Assert.Equal("1: Pokémon Square", groups[0].Items[0].Title);
        Assert.Equal("105: Bountiful Sea", groups[1].Items[0].Title);
        Assert.Equal("216: Western Cave", groups[2].Items[0].Title);
    }

    [Fact]
    public void Build_KeepsEmptyGroups_AndOrdersByMapIdWithinGroup()
    {
        var scenes = new[]
        {
            Scene(10, "Pikachu Team Base", "B01P01Cm"),
            Scene(1, "Pokémon Square", "T01P01m"),
        };

        var groups = SceneExplorerLayout.Build(scenes);
        Assert.Equal(3, groups.Count);
        Assert.Equal(new[] { 1, 10 }, groups[0].Items.Select(i => i.MapId).ToArray());
        Assert.Empty(groups[1].Items);
        Assert.Empty(groups[2].Items);
    }

    [Theory]
    [InlineData("T01P01m", SceneExplorerLayout.Story)]
    [InlineData("B01P01Cm", SceneExplorerLayout.Story)]
    [InlineData("D01P01m", SceneExplorerLayout.Story)]
    [InlineData("D13P03m", SceneExplorerLayout.Story)]
    [InlineData("A04P02m", SceneExplorerLayout.Story)]
    [InlineData("S03m", SceneExplorerLayout.Story)]
    [InlineData("H01P01m", SceneExplorerLayout.FriendAreas)]
    [InlineData("H01P01Wm", SceneExplorerLayout.FriendAreas)]
    [InlineData("H29P04m", SceneExplorerLayout.FriendAreas)]
    [InlineData("D14P01m", SceneExplorerLayout.PostGame)]
    [InlineData("D20P01m", SceneExplorerLayout.PostGame)]
    [InlineData("D24P02m", SceneExplorerLayout.PostGame)]
    [InlineData("T01P08m", SceneExplorerLayout.PostGame)]
    public void Classify_UsesRomMapName(string bmaName, string expected)
    {
        var scene = Scene(0, "x", bmaName);
        Assert.Equal(expected, SceneExplorerLayout.Classify(scene));
    }

    [Fact]
    public void Classify_WithoutMap_DefaultsToStory()
    {
        var scene = new Scene { MapId = 1, Name = "Pokémon Square" };
        Assert.Equal(SceneExplorerLayout.Story, SceneExplorerLayout.Classify(scene));
    }

    [Fact]
    public void Build_FromRetailRom_PlacesEverySceneInExactlyOneGroup()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var database = SceneGraphParser.Parse(rom, RomProfile.Us10);
        var groups = SceneExplorerLayout.Build(database.Scenes);

        Assert.Equal(3, groups.Count);
        var placed = groups.SelectMany(g => g.Items).Select(i => i.MapId).ToArray();
        Assert.Equal(database.Scenes.Count, placed.Length);
        Assert.Equal(placed.Length, placed.Distinct().Count());

        var friendAreas = groups.Single(g => g.Key == SceneExplorerLayout.FriendAreas);
        var postGame = groups.Single(g => g.Key == SceneExplorerLayout.PostGame);
        var story = groups.Single(g => g.Key == SceneExplorerLayout.Story);
        Assert.Contains(friendAreas.Items, i => i.Title.Contains("Bountiful Sea"));
        Assert.Contains(postGame.Items, i => i.Title.Contains("Western Cave"));
        Assert.Contains(story.Items, i => i.Title.Contains("Pokémon Square"));
        Assert.True(friendAreas.Items.Count >= 50, $"expected many friend areas, got {friendAreas.Items.Count}");
        Assert.True(postGame.Items.Count >= 8, $"expected post-game dungeons, got {postGame.Items.Count}");
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

    private static Scene Scene(int mapId, string name, string bma) => new()
    {
        MapId = mapId,
        Name = name,
        Map = new GroundMapDefinition { MapId = mapId, Name = name, BmaName = bma },
    };
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
