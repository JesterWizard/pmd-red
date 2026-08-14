using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DungeonCatalogTests
{
    [Fact]
    public void Index_TinyWoods_ExposesFloorsSpawnsTrapsItemsAndMusic()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var assets = DungeonIndexer.Index(rom, root);
        Assert.NotEmpty(assets);

        var tiny = Assert.Single(assets.Where(a =>
            a.Kind == AssetKind.Dungeon &&
            a.Metadata.GetValueOrDefault("dungeonId") == "0"));
        Assert.Equal(AssetCategory.Dungeons, tiny.Category);
        Assert.Contains("Tiny Woods", tiny.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(3, tiny.Children.Count);

        var floor1 = tiny.Children[0];
        Assert.Equal(AssetKind.DungeonFloor, floor1.Kind);
        Assert.Equal("1", floor1.Metadata["floor"]);
        Assert.Contains("B1F", floor1.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal("14", floor1.Metadata["tileset"]);
        Assert.Contains("Tiny Woods", floor1.Metadata.GetValueOrDefault("music"), StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Pidgey", floor1.Description ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Wonder Tile", floor1.Description ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.True(int.Parse(floor1.Metadata["itemDensity"]) > 0);
    }

    [Fact]
    public void CatalogBuild_IncludesDungeonsCategory()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var (catalog, _, _) = CatalogBuilder.Build(RomImage.Open(baserom));
        var dungeons = catalog.ForCategory(AssetCategory.Dungeons);
        Assert.NotEmpty(dungeons);
        Assert.Contains(dungeons, d => d.Name.Contains("Tiny Woods", StringComparison.OrdinalIgnoreCase));
        Assert.Contains(dungeons, d => d.Name.Contains("Mt. Thunder Peak", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void Preview_TinyWoodsAndThunderPeak_AreUsable()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, charmap, _) = CatalogBuilder.Build(rom);
        var tiny = catalog.ForCategory(AssetCategory.Dungeons)
            .First(a => a.Metadata.GetValueOrDefault("dungeonId") == "0");
        var peak = catalog.ForCategory(AssetCategory.Dungeons)
            .First(a => a.Name.Contains("Mt. Thunder Peak", StringComparison.OrdinalIgnoreCase));

        var tinyPreview = AssetPreviewer.Create(rom, tiny, charmap);
        Assert.NotNull(tinyPreview.Png);
        Assert.True(tinyPreview.Png!.AsSpan(0, 4).SequenceEqual(new byte[] { 0x89, 0x50, 0x4E, 0x47 }));
        Assert.Contains("Pidgey", tinyPreview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("MUS_TINY_WOODS", tinyPreview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.False(SceneCompositor.IsVisuallyFlat(tinyPreview));

        var peakFloor = peak.Children.Last();
        var peakPreview = AssetPreviewer.Create(rom, peakFloor, charmap);
        Assert.NotNull(peakPreview.Png);
    }

    [Fact]
    public void Index_WithoutDecompHeaders_StillUsesBuiltinNames()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var empty = Path.Combine(Path.GetTempPath(), "rescue-temple-no-headers");
        Directory.CreateDirectory(empty);
        var assets = DungeonIndexer.Index(rom, empty);
        var tiny = Assert.Single(assets.Where(a => a.Metadata.GetValueOrDefault("dungeonId") == "0"));
        Assert.Contains("Tiny Woods", tiny.Name);
        Assert.Contains("Pidgey", tiny.Children[0].Description ?? "");
        Assert.Contains("Wonder Tile", tiny.Children[0].Description ?? "");
    }

    [Fact]
    public void FloorContents_TinyWoodsB1F_ListsPokemonItemsAndTraps()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = DungeonMapParamTables.TryLoad(rom);
        Assert.NotNull(tables);
        var floor = tables!.TryReadFloor(rom, 0, 1);
        Assert.NotNull(floor);
        var contents = DungeonFloorContents.From(floor!);
        Assert.Contains(contents.Pokemon, p => p.Name.Contains("Pidgey", StringComparison.OrdinalIgnoreCase));
        Assert.Contains(contents.Pokemon, p => p.Name.Contains("Sunkern", StringComparison.OrdinalIgnoreCase));
        Assert.Contains(contents.Pokemon, p => p.Name.Contains("Wurmple", StringComparison.OrdinalIgnoreCase));
        Assert.DoesNotContain(contents.Pokemon, p => p.Name.Contains("Kecleon", StringComparison.OrdinalIgnoreCase));
        Assert.Contains(contents.Traps, t => t.Name.Contains("Wonder Tile", StringComparison.OrdinalIgnoreCase));
        Assert.True(contents.Traps.All(t => t.Weight != 0));
        Assert.Contains(contents.Items, i => i.Name.Contains("Poke", StringComparison.OrdinalIgnoreCase));
        Assert.True(contents.Items.Count <= 3, "Tiny Woods B1F only spawns Poké on the floor");
        Assert.DoesNotContain(contents.Items, i => i.Name.Contains("Hurl", StringComparison.OrdinalIgnoreCase));
        Assert.True(contents.Pokemon.All(p => p.Id > 0 && p.RomOffset >= 0));
        Assert.True(contents.Traps.All(t => t.RomOffset >= 0));
        Assert.True(contents.Items.All(i => i.RomOffset >= 0 && i.TableWords > 0));
    }

    [Fact]
    public void IconAtlas_TinyWoods_RendersItemAndTrapSprites()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var icons = DungeonIconAtlas.TryLoad(rom, tileset: 14);
        Assert.NotNull(icons);
        var poke = icons!.TryGetItem(105);
        Assert.NotNull(poke);
        Assert.True(poke!.Width >= 16);
        var band = icons.TryGetItem(35);
        Assert.NotNull(band);
        Assert.False(IsMostlyHotRed(band!), "Detect Band must use palet OBJ colors, not dungeon tileset red");
        Assert.False(IsMostlyHotRed(band!), "Detect Band must use palet OBJ colors, not dungeon tileset red");
        Assert.True(
            HasApproximateColor(band!, 183, 135, 39) ||
            HasApproximateColor(band!, 223, 119, 31) ||
            HasApproximateColor(band!, 231, 63, 103),
            "Detect Band uses ax/pal bank 4 (" + DescribeColors(band!) + ")");
        Assert.True(HasApproximateColor(poke, 135, 159, 255) || HasApproximateColor(poke, 223, 183, 0),
            "Poké uses ax/pal bank 3 blues/golds");
        var wonder = icons.TryGetTrap(16);
        Assert.NotNull(wonder);
        Assert.True(wonder!.Width >= 16);
    }

    [Fact]
    public void SpawnCodec_WritesMonsterTrapAndRoundtripsItems()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = DungeonMapParamTables.TryLoad(rom)!;
        var floor = tables.TryReadFloor(rom, 0, 1)!;
        Assert.True(floor.ItemCompressedWords > 0);

        var (expanded, words) = DungeonSpawnCodec.DecodeItemTable(rom, floor.ItemListOffset);
        Assert.Equal(floor.ItemCompressedWords, words);
        var working = new WorkingRom(rom);
        var buffer = working.BeginMutate();
        Assert.True(DungeonSpawnCodec.TryWriteItemTable(buffer, floor.ItemListOffset, words, expanded));
        working.Commit(buffer, floor.ItemListOffset, words * 2);
        var (again, _) = DungeonSpawnCodec.DecodeItemTable(working.View, floor.ItemListOffset);
        Assert.Equal(expanded, again);

        var pidgey = floor.Monsters.First(m => m.Species != 0);
        buffer = working.BeginMutate();
        DungeonSpawnCodec.WriteMonster(buffer, pidgey.RomOffset, 1, 12, 1111);
        working.Commit(buffer, pidgey.RomOffset, DungeonMapParamTables.SpawnEntrySize);
        var rewritten = tables.TryReadFloor(working.View, 0, 1)!;
        var row = rewritten.Monsters.First(m => m.RomOffset == pidgey.RomOffset);
        Assert.Equal(1, row.Species);
        Assert.Equal(12, row.Level);
        Assert.Equal(1111, row.Weight);

        var trap = floor.Traps[0];
        buffer = working.BeginMutate();
        DungeonSpawnCodec.WriteTrap(buffer, trap.RomOffset, 42);
        working.Commit(buffer, trap.RomOffset, 2);
        Assert.Equal(42, tables.TryReadFloor(working.View, 0, 1)!.Traps[0].Threshold);
    }

    [Fact]
    public void GenerateAndCache_TinyWoodsB1F_IsADungeonMapNotATilesheet()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = DungeonMapParamTables.TryLoad(rom);
        var floor = tables!.TryReadFloor(rom, 0, 1)!;
        var cache = Path.Combine(Path.GetTempPath(), "rescue-temple-dungeon-cache-test");
        if (Directory.Exists(cache))
            Directory.Delete(cache, recursive: true);

        var first = DungeonFloorRenderer.Render(rom, floor, cacheDirectory: cache, seed: 1);
        Assert.NotNull(first.Png);
        Assert.True(first.Width >= 200, "Generated floors are 56×32 tiles at 24px, not a 128px tilesheet");
        Assert.True(first.FloorTileCount >= 20);
        Assert.True(first.RoomCount >= 2);
        Assert.False(SceneCompositor.IsVisuallyFlat(new PreviewContent("t", Png: first.Png)));

        var cachedFile = Directory.GetFiles(cache, "*.png");
        Assert.NotEmpty(cachedFile);

        var writeTime = File.GetLastWriteTimeUtc(cachedFile[0]);
        var second = DungeonFloorRenderer.Render(rom, floor, cacheDirectory: cache, seed: 1);
        Assert.Equal(first.Png, second.Png);
        Assert.Equal(writeTime, File.GetLastWriteTimeUtc(cachedFile[0]));
        Assert.True(DungeonFloorPreviewCache.TryLoad(cache, floor, seed: 1, out var loaded));
        Assert.Equal(first.FloorTileCount, loaded!.FloorTileCount);
        Assert.Equal(first.RoomCount, loaded.RoomCount);
        Assert.Equal(first.Png, loaded.Png);
    }

    [Fact]
    public void PreviewBake_SecondRun_SkipsUnchangedFloors()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var cache = Path.Combine(Path.GetTempPath(), "rescue-temple-dungeon-bake-test");
        if (Directory.Exists(cache))
            Directory.Delete(cache, recursive: true);

        var first = DungeonFloorPreviewBake.Run(rom, cache, dungeonIds: [0]);
        Assert.True(first.Generated >= 3);
        Assert.Equal(0, first.Skipped);
        var png = Directory.GetFiles(cache, "*.png").OrderBy(p => p).First();
        var writeTime = File.GetLastWriteTimeUtc(png);

        var second = DungeonFloorPreviewBake.Run(rom, cache, dungeonIds: [0]);
        Assert.Equal(0, second.Generated);
        Assert.Equal(first.Total, second.Skipped);
        Assert.Equal(writeTime, File.GetLastWriteTimeUtc(png));
    }

    [Fact]
    public void PreviewBake_RegeneratesAfterLayoutEdit()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = DungeonMapParamTables.TryLoad(rom)!;
        var floor = tables.TryReadFloor(rom, 0, 1)!;
        var cache = Path.Combine(Path.GetTempPath(), "rescue-temple-dungeon-bake-edit-test");
        if (Directory.Exists(cache))
            Directory.Delete(cache, recursive: true);

        var vanilla = DungeonFloorRenderer.Render(rom, floor, cacheDirectory: cache, seed: 1);
        var working = new WorkingRom(rom);
        var buffer = working.BeginMutate();
        DungeonFloorPropertiesCodec.Patch(buffer, floor.PropertiesOffset, new FloorPropertiesPatch(Layout: floor.Properties.Layout == 0 ? 1 : 0));
        working.Commit(buffer, floor.PropertiesOffset, DungeonMapParamTables.FloorPropertiesSize);
        var edited = tables.TryReadFloor(working.View, 0, 1)!;
        Assert.NotEqual(
            DungeonFloorPreviewCache.Fingerprint(floor),
            DungeonFloorPreviewCache.Fingerprint(edited));

        var redrawn = DungeonFloorRenderer.Render(working.View, edited, cacheDirectory: cache, seed: 1);
        Assert.NotEqual(vanilla.Png, redrawn.Png);
    }

    [Fact]
    public void Dungeons_UseDungeonWorkspace()
    {
        Assert.Equal(CategoryWorkspaceKind.Dungeons, CategoryWorkspace.Resolve(AssetCategory.Dungeons));
        Assert.False(CategoryWorkspace.UsesAssetBrowser(AssetCategory.Dungeons));
    }

    [Fact]
    public void FloorProperties_TinyWoodsB1F_ExposesMusicWeatherDarknessAndLayout()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var labels = DungeonIndexer.LoadLabels(root);
        var tables = DungeonMapParamTables.TryLoad(rom);
        Assert.NotNull(tables);
        var floor = tables!.TryReadFloor(rom, 0, 1);
        Assert.NotNull(floor);
        Assert.True(floor!.PropertiesOffset >= 0);
        Assert.Contains("TINY_WOODS", DungeonIndexer.ResolveMusic(floor.Properties.BgMusic, labels), StringComparison.OrdinalIgnoreCase);
        Assert.Equal("Clear", DungeonIndexer.PrettyWeather(floor.Properties.Weather, labels));
        Assert.Contains("Small", DungeonIndexer.PrettyLayout(floor.Properties.Layout, labels), StringComparison.OrdinalIgnoreCase);
        Assert.InRange(floor.Properties.VisibilityRange, 0, 3);

        var asset = DungeonIndexer.Index(rom, root)
            .First(a => a.Metadata.GetValueOrDefault("dungeonId") == "0")
            .Children[0];
        Assert.Contains("LAYOUT_SMALL", asset.Metadata.GetValueOrDefault("layout") ?? "", StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void FloorPropertiesCodec_WritesMusicWeatherDarknessLayout_AndLeavesReservedBytes()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var labels = DungeonIndexer.LoadLabels(root);
        var tables = DungeonMapParamTables.TryLoad(rom)!;
        var floor = tables.TryReadFloor(rom, 0, 1)!;
        var off = floor.PropertiesOffset;
        var before = rom.Copy(off, DungeonMapParamTables.FloorPropertiesSize);

        var working = new WorkingRom(rom);
        var buffer = working.BeginMutate();
        DungeonFloorPropertiesCodec.Patch(buffer, off, new FloorPropertiesPatch(
            Layout: 0,
            BgMusic: 2,
            Weather: 4,
            VisibilityRange: 1));
        working.Commit(buffer, off, DungeonMapParamTables.FloorPropertiesSize);

        var rewritten = tables.TryReadFloor(working.View, 0, 1)!;
        Assert.Equal(0, rewritten.Properties.Layout);
        Assert.Equal(2, rewritten.Properties.BgMusic);
        Assert.Equal(4, rewritten.Properties.Weather);
        Assert.Equal(1, rewritten.Properties.VisibilityRange);
        Assert.Contains("THUNDERWAVE", DungeonIndexer.ResolveMusic(rewritten.Properties.BgMusic, labels), StringComparison.OrdinalIgnoreCase);
        Assert.Equal("Rain", DungeonIndexer.PrettyWeather(rewritten.Properties.Weather, labels));

        var after = working.View.Copy(off, DungeonMapParamTables.FloorPropertiesSize);
        Assert.Equal(before[DungeonFloorPropertiesCodec.UnkEOffset], after[DungeonFloorPropertiesCodec.UnkEOffset]);
        Assert.Equal(before[DungeonFloorPropertiesCodec.FloorNumberOffset], after[DungeonFloorPropertiesCodec.FloorNumberOffset]);
        Assert.Equal(before[DungeonFloorPropertiesCodec.Unk1AOffset], after[DungeonFloorPropertiesCodec.Unk1AOffset]);
        Assert.Equal(before[DungeonFloorPropertiesCodec.Unk1BOffset], after[DungeonFloorPropertiesCodec.Unk1BOffset]);

        var asset = DungeonIndexer.Index(working.View, root)
            .First(a => a.Metadata.GetValueOrDefault("dungeonId") == "0")
            .Children[0];
        var preview = DungeonPreview.Create(working.View, asset, root);
        Assert.Contains("THUNDERWAVE", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Rain", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("LAYOUT_LARGE", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
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

    private static bool IsMostlyHotRed(RgbaImage image)
    {
        var opaque = 0;
        var hot = 0;
        var px = image.Pixels;
        for (var i = 0; i + 3 < px.Length; i += 4)
        {
            if (px[i + 3] < 128)
                continue;
            opaque++;
            if (px[i] > 200 && px[i + 1] < 90 && px[i + 2] < 90)
                hot++;
        }

        return opaque > 0 && hot * 2 >= opaque;
    }

    private static bool HasApproximateColor(RgbaImage image, byte r, byte g, byte b, int slop = 24)
    {
        var px = image.Pixels;
        for (var i = 0; i + 3 < px.Length; i += 4)
        {
            if (px[i + 3] < 128)
                continue;
            if (Math.Abs(px[i] - r) <= slop &&
                Math.Abs(px[i + 1] - g) <= slop &&
                Math.Abs(px[i + 2] - b) <= slop)
                return true;
        }

        return false;
    }

    private static string DescribeColors(RgbaImage image)
    {
        var seen = new HashSet<string>();
        var px = image.Pixels;
        for (var i = 0; i + 3 < px.Length; i += 4)
        {
            if (px[i + 3] < 128)
                continue;
            seen.Add($"{px[i]},{px[i + 1]},{px[i + 2]}");
        }

        return string.Join("; ", seen.Take(12));
    }
}
