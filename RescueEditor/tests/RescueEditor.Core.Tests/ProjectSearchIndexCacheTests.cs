using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ProjectSearchIndexCacheTests
{
    [Fact]
    public void RoundTripPreservesSearchResults()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var built = CatalogBuilder.Build(rom);
        var names = ScriptNamedDefinitions.TryLoadBestEffort(Path.GetDirectoryName(baserom));
        var index = ProjectSearchIndex.Build(built.Catalog.Assets, built.Scenes, names);
        var key = ProjectSearchIndex.CacheKey(rom.Sha1, names);

        using var stream = new MemoryStream();
        index.Save(stream, key);
        stream.Position = 0;
        var loaded = ProjectSearchIndex.TryLoad(stream, key);

        Assert.True(index.DocumentCount > 0);
        Assert.NotEmpty(index.Search("0x"));
        Assert.NotNull(loaded);
        Assert.Equal(index.DocumentCount, loaded!.DocumentCount);
        foreach (var query in new[] { "Pikachu", "SELECT_MAP", "0x", "MUS_", "welcome", "ALERT_CUE", "Wigglytuff" })
            Assert.Equal(index.Search(query), loaded.Search(query));
    }

    [Fact]
    public void TryLoadRejectsWrongKey()
    {
        var index = ProjectSearchIndex.Build(
            new[]
            {
                new AssetDescriptor
                {
                    Id = "d1",
                    Name = "d1",
                    Category = AssetCategory.Dialogue,
                    Kind = AssetKind.Dialogue,
                    Offset = 16,
                    Description = "Hello world",
                },
            },
            null);

        using var stream = new MemoryStream();
        index.Save(stream, "a");

        stream.Position = 0;
        Assert.Null(ProjectSearchIndex.TryLoad(stream, "b"));

        // Positive control: the same key must still load, so the rejection above is not a blanket failure.
        stream.Position = 0;
        Assert.NotNull(ProjectSearchIndex.TryLoad(stream, "a"));
    }

    [Fact]
    public void TryLoadRejectsGarbage()
    {
        Assert.Null(ProjectSearchIndex.TryLoad(new MemoryStream(new byte[] { 1, 2, 3, 4, 5 }), "a"));
        Assert.Null(ProjectSearchIndex.TryLoad(new MemoryStream(Array.Empty<byte>()), "a"));
    }

    [Fact]
    public void CacheKeyChangesWithRomAndNames()
    {
        Assert.NotEqual(ProjectSearchIndex.CacheKey("aa", null), ProjectSearchIndex.CacheKey("bb", null));
        Assert.Equal(ProjectSearchIndex.CacheKey("aa", null), ProjectSearchIndex.CacheKey("aa", null));

        var empty = NamesWithMusic();
        var withEntry = NamesWithMusic(new NamedIdEntry(7, "MUS_TEST"));
        Assert.NotEqual(ProjectSearchIndex.CacheKey("aa", null), ProjectSearchIndex.CacheKey("aa", empty));
        Assert.NotEqual(ProjectSearchIndex.CacheKey("aa", empty), ProjectSearchIndex.CacheKey("aa", withEntry));
        Assert.Equal(ProjectSearchIndex.CacheKey("aa", withEntry), ProjectSearchIndex.CacheKey("aa", withEntry));
    }

    private static ScriptNamedDefinitions NamesWithMusic(params NamedIdEntry[] music)
    {
        NamedIdCatalog Empty() => new([]);
        return new ScriptNamedDefinitions
        {
            Music = new NamedIdCatalog(music.Select(entry => (entry.Id, entry.Name))),
            Fanfare = Empty(),
            Map = Empty(),
            Emotion = Empty(),
            UpdateName = Empty(),
            ObjFlag = Empty(),
            EmotionEffect = Empty(),
            Direction = Empty(),
            DirTrans = Empty(),
            Placement = Empty(),
            GroundAnim = Empty(),
            ScriptId = Empty(),
            PaletteUtil = Empty(),
        };
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
