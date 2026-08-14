using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GameplayTableTests
{
    [Fact]
    public void Toolbar_PutsTableTabsOnASecondRow()
    {
        Assert.Equal(2, DataTablesToolbarLayout.RowCount);
        Assert.Empty(DataTablesToolbarLayout.TabsOnRow(0));
        Assert.Equal(
            new[] { "Pokemon", "Moves", "Items", "Friend Areas", "Types", "Exclusives", "Shops" },
            DataTablesToolbarLayout.TabsOnRow(1));
        Assert.Equal(52, DataTablesToolbarLayout.HostHeight(rowHeight: 26));
        Assert.False(DataTablesToolbarLayout.TabFitsBesideFilter(
            tabCount: 7, tabWidth: 88, filterClusterWidth: 420, toolbarWidth: 720));
    }

    [Fact]
    public void Ivysaur_Evolution_RoundTrips()
    {
        if (!TryOpen(out var rom, out var charmap, out var tables))
            return;

        var ivy = DataTableCodec.ReadMonster(rom, tables, 2, charmap);
        Assert.NotNull(ivy);
        Assert.Equal(1, ivy!.EvolveFrom); // Bulbasaur
        Assert.Equal(1, ivy.EvolveType); // EVOLVE_TYPE_LEVEL
        Assert.Equal(16, ivy.EvolveRequirement);

        var buffer = MutableRom.From(rom);
        Assert.True(DataTableCodec.WriteMonster(buffer, tables, 2, charmap, PatchFrom(ivy, evolveFrom: 4, evolveType: 1, evolveRequirement: 20)));
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var written = DataTableCodec.ReadMonster(view, tables, 2, charmap);
        Assert.Equal(4, written!.EvolveFrom);
        Assert.Equal(20, written.EvolveRequirement);
    }

    [Fact]
    public void TypeChart_FireVsGrassIsSuper_AndRoundTrips()
    {
        if (!TryOpenRom(out var rom))
            return;

        var chart = GameplayTableTables.TryLoad(rom);
        Assert.NotNull(chart);
        Assert.Equal(GameplayTableCodec.Super, GameplayTableCodec.ReadMatchup(rom, chart!, 2, 4)); // Fire vs Grass
        Assert.Equal(GameplayTableCodec.Immune, GameplayTableCodec.ReadMatchup(rom, chart!, 5, 9)); // Electric vs Ground

        var buffer = MutableRom.From(rom);
        Assert.True(GameplayTableCodec.WriteMatchup(buffer, chart!, 2, 4, GameplayTableCodec.Immune));
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        Assert.Equal(GameplayTableCodec.Immune, GameplayTableCodec.ReadMatchup(view, chart!, 2, 4));
        Assert.Equal(GameplayTableCodec.Immune, GameplayTableCodec.ReadMatchup(view, chart!, 5, 9));
    }

    [Fact]
    public void ExclusivePokemon_PorygonIsRedOnly_AndRoundTrips()
    {
        if (!TryOpenRom(out var rom))
            return;

        var tables = GameplayTableTables.TryLoad(rom);
        Assert.NotNull(tables);
        var porygon = GameplayTableCodec.ReadExclusive(rom, tables!, 0);
        Assert.NotNull(porygon);
        Assert.Equal(137, porygon!.Species);
        Assert.True(porygon.InRed);
        Assert.False(porygon.InBlue);

        var buffer = MutableRom.From(rom);
        Assert.True(GameplayTableCodec.WriteExclusive(buffer, tables!, 0, new ExclusivePokemonPatch(137, InRed: false, InBlue: true)));
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var written = GameplayTableCodec.ReadExclusive(view, tables!, 0);
        Assert.False(written!.InRed);
        Assert.True(written.InBlue);
    }

    [Fact]
    public void TownKecleonShop_DecodesItems_AndWritesWeight()
    {
        if (!TryOpen(out var rom, out var charmap, out var data))
            return;

        var gameplay = GameplayTableTables.TryLoad(rom);
        Assert.NotNull(gameplay);
        var shops = GameplayTableCodec.ListShops(rom, gameplay!);
        var town = shops.FirstOrDefault(s => s.Kind == ShopKind.TownShop);
        Assert.NotNull(town);
        Assert.Contains(town!.Items, i => i.ItemId == 7); // Gravelerock

        var buffer = MutableRom.From(rom);
        Assert.True(GameplayTableCodec.WriteShopItemWeight(buffer, rom, town, 7, 9999));
        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var rewritten = GameplayTableCodec.ReadShop(view, town);
        Assert.Equal(9999, rewritten.First(i => i.ItemId == 7).Weight);
        Assert.NotNull(DataTableCodec.ReadItem(rom, data, 7, charmap));
    }

    [Fact]
    public void Index_IncludesTypesExclusivesAndShops()
    {
        if (!TryOpenRom(out var rom))
            return;

        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var charmap = Charmap.FromFile(Path.Combine(root, "charmap.txt"));
        var indexed = DataTableIndexer.Index(rom, charmap);
        Assert.Contains(indexed, a => a.Kind == AssetKind.TypeMatchupTable);
        Assert.Contains(indexed, a => a.Kind == AssetKind.ExclusiveTable);
        Assert.Contains(indexed, a => a.Kind == AssetKind.ShopTable);
        var types = indexed.First(a => a.Kind == AssetKind.TypeMatchupTable);
        Assert.Equal(18, types.Children.Count);
        Assert.Equal("Fire", types.Children.First(c => c.Metadata["id"] == "2").Metadata["displayName"]);
    }

    private static DataTableMonsterPatch PatchFrom(
        MonsterTableEntry e, int evolveFrom, int evolveType, int evolveRequirement) =>
        new(
            BaseHp: e.BaseHp, ExpYield: e.ExpYield, Type1: e.Type1, Type2: e.Type2,
            Ability1: e.Ability1, Ability2: e.Ability2, FriendArea: e.FriendArea,
            BaseAtk: e.BaseAtk, BaseSpAtk: e.BaseSpAtk, BaseDef: e.BaseDef, BaseSpDef: e.BaseSpDef,
            Weight: e.Weight, Size: e.Size, BodySize: e.BodySize, RecruitRate: e.RecruitRate,
            LevelUpMoves: e.LevelUpMoves,
            EvolveFrom: evolveFrom, EvolveType: evolveType, EvolveRequirement: evolveRequirement,
            EvolveExtra: e.EvolveExtra);

    private static bool TryOpen(out RomImage rom, out Charmap charmap, out DataTableTables tables)
    {
        rom = null!;
        charmap = null!;
        tables = null!;
        if (!TryOpenRom(out rom))
            return false;
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        charmap = Charmap.FromFile(Path.Combine(root, "charmap.txt"));
        tables = DataTableTables.TryLoad(rom)!;
        return tables is not null;
    }

    private static bool TryOpenRom(out RomImage rom)
    {
        rom = null!;
        var path = FindUpwards("baserom.gba");
        if (path is null)
            return false;
        rom = RomImage.Open(path);
        return true;
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
