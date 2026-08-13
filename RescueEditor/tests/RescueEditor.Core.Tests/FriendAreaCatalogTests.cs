using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class FriendAreaCatalogTests
{
    [Fact]
    public void Decode_SampleAreas_FromRetailRom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = FriendAreaTables.TryLoad(rom);
        Assert.NotNull(tables);

        var sea = FriendAreaCodec.Read(rom, tables!, 1);
        Assert.NotNull(sea);
        Assert.Equal("Bountiful Sea", sea!.Name);
        Assert.Equal(9, sea.Capacity);
        Assert.Equal(FriendAreaUnlock.ShopPostGame, sea.Unlock);
        Assert.Equal(5500u, sea.Price);
        Assert.Equal("Northern Sea", sea.LocationName);
        Assert.Equal(0xD0, sea.MapX);
        Assert.Equal(0x16, sea.MapY);
        Assert.Equal("H01P01m", sea.SceneBma);

        var plains = FriendAreaCodec.Read(rom, tables!, 12);
        Assert.NotNull(plains);
        Assert.Equal("Wild Plains", plains!.Name);
        Assert.Equal(13, plains.Capacity);
        Assert.Equal(FriendAreaUnlock.ShopStory, plains.Unlock);
        Assert.Equal(100u, plains.Price);
        Assert.Equal("South Plains", plains.LocationName);
        Assert.Equal("H06P01m", plains.SceneBma);

        var current = FriendAreaCodec.Read(rom, tables!, 5);
        Assert.Equal(FriendAreaUnlock.LegendaryRequest, current!.Unlock);
        Assert.Equal(0u, current.Price);

        var moonview = FriendAreaCodec.Read(rom, tables!, 10);
        Assert.Equal(FriendAreaUnlock.WonderMail, moonview!.Unlock);
        Assert.Equal(6, moonview.Capacity);
    }

    [Fact]
    public void Index_ExposesFriendAreasWithDecodedFields()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, charmap, _) = CatalogBuilder.Build(rom);
        var tables = catalog.ForCategory(AssetCategory.DataTables);
        Assert.Contains(tables, a => a.Kind == AssetKind.FriendAreaTable);

        var group = tables.First(a => a.Kind == AssetKind.FriendAreaTable);
        Assert.True(group.Children.Count >= 57, $"expected many friend areas, got {group.Children.Count}");

        var sea = group.Children.First(a => a.Metadata.GetValueOrDefault("id") == "1");
        Assert.Equal(AssetKind.FriendAreaEntry, sea.Kind);
        Assert.Contains("Bountiful Sea", sea.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal("9", sea.Metadata["capacity"]);
        Assert.Contains("Post-game", sea.Metadata["unlock"], StringComparison.OrdinalIgnoreCase);
        Assert.Equal("5500", sea.Metadata["price"]);
        Assert.Equal("Northern Sea", sea.Metadata["location"]);
        Assert.Equal("H01P01m", sea.Metadata["sceneBma"]);

        var preview = AssetPreviewer.Create(rom, sea, charmap);
        Assert.Contains("Bountiful Sea", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Northern Sea", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("H01P01m", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void Write_UnlockPriceCapacityAndMapPin_RoundTrip()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = FriendAreaTables.TryLoad(rom);
        Assert.NotNull(tables);

        var buffer = MutableRom.From(rom);
        Assert.True(FriendAreaCodec.WriteSettings(buffer, tables!, 1, new FriendAreaSettingsPatch(
            Capacity: 11,
            Unlock: FriendAreaUnlock.ShopStory,
            Price: 1234)));
        Assert.True(FriendAreaCodec.WriteMapPin(buffer, tables!, 1, mapX: 0x111, mapY: 0x22));

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var sea = FriendAreaCodec.Read(view, tables!, 1);
        Assert.Equal(11, sea!.Capacity);
        Assert.Equal(FriendAreaUnlock.ShopStory, sea.Unlock);
        Assert.Equal(1234u, sea.Price);
        Assert.Equal(0x111, sea.MapX);
        Assert.Equal(0x22, sea.MapY);

        var serene = FriendAreaCodec.Read(view, tables!, 3);
        Assert.Equal("Northern Sea", serene!.LocationName);
        Assert.Equal(0x111, serene.MapX);
    }

    [Fact]
    public void Write_MoveAreaToAnotherLocation_RoundTrip()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var tables = FriendAreaTables.TryLoad(rom);
        Assert.NotNull(tables);

        var glacierId = FriendAreaCodec.LocationIdNamed("Glacier");
        var buffer = MutableRom.From(rom);
        Assert.True(FriendAreaCodec.WriteLocation(buffer, tables!, 1, glacierId));

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var sea = FriendAreaCodec.Read(view, tables!, 1);
        Assert.Equal("Glacier", sea!.LocationName);
        Assert.Equal(0x1CD, sea.MapX);
        Assert.Equal(0x1C, sea.MapY);
    }

    [Fact]
    public void SceneBackground_CopiesRainbowPeakGroundMap()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        const string bma = "H05P02m";
        var expected = GroundMapIndexer.TryRenderFromMap(rom, new GroundMapDefinition
        {
            BmaName = bma,
            BplName = "H05P02",
            BpcName = "H05P02c",
        });
        Assert.NotNull(expected?.Png);

        var image = FriendAreaIntroArt.TryLoadSceneBackground(rom, catalog: null, bma);
        Assert.NotNull(image);
        var fromMap = RgbaImage.FromPng(expected!.Png!);
        Assert.NotNull(fromMap);
        Assert.Equal(fromMap!.Width, image!.Width);
        Assert.Equal(fromMap.Height, image.Height);
        Assert.Equal(fromMap.Pixels, image.Pixels);
    }

    [Fact]
    public void IntroArt_LoadsSacredFieldPngFromRepository()
    {
        var root = CatalogBuilder.FindRepositoryRoot(
            FindUpwards("baserom.gba") ?? "/home/username/Github/pmd-red/baserom.gba");
        Assert.Equal("sacred_field", FriendAreaIntroArt.SlugFor(17));

        var image = FriendAreaIntroArt.TryLoadFromRepository(root, 17);
        Assert.NotNull(image);
        Assert.Equal(240, image!.Width);
        Assert.Equal(160, image.Height);
        Assert.Contains(image.Pixels, b => b != 0);
    }

    [Fact]
    public void IntroArt_PrefersRomDecodeOverRepository()
    {
        var root = CatalogBuilder.FindRepositoryRoot(
            FindUpwards("baserom.gba") ?? "/home/username/Github/pmd-red/baserom.gba");
        var png = FriendAreaIntroArt.TryLoadFromRepository(root, 17);
        Assert.NotNull(png);

        var rom = RomImage.FromBytes("synthetic.gba", new byte[0x200]);
        var loaded = FriendAreaIntroArt.TryLoad(rom, tables: null, root, 17);
        Assert.NotNull(loaded);
        Assert.Equal(png!.Width, loaded!.Width);
        Assert.Equal(png.Height, loaded.Height);
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
