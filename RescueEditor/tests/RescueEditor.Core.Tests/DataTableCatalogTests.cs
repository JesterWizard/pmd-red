using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DataTableCatalogTests
{
    [Fact]
    public void DecompressMoveId_OneAndTwoByteEncodings()
    {
        Assert.Equal((0x7F, 1), DataTableCodec.DecompressMoveId([0x7F, 0x01]));
        Assert.Equal((0x9A, 2), DataTableCodec.DecompressMoveId([0x81, 0x1A])); // MOVE_TACKLE = 0x9A
    }

    [Fact]
    public void Decode_BulbasaurMoveAndStick_FromRetailRom()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var charmap = Charmap.FromFile(Path.Combine(root, "charmap.txt"));
        var tables = DataTableTables.TryLoad(rom);
        Assert.NotNull(tables);

        var bulb = DataTableCodec.ReadMonster(rom, tables!, 1, charmap);
        Assert.NotNull(bulb);
        Assert.Contains("Bulbasaur", bulb!.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(20, bulb.BaseHp);
        Assert.Equal(18, bulb.ExpYield);
        Assert.Equal(4, bulb.Type1); // TYPE_GRASS
        Assert.Equal(8, bulb.Type2); // TYPE_POISON
        Assert.Equal(0x1A, bulb.Ability1); // ABILITY_OVERGROW
        Assert.Contains(bulb.LevelUpMoves, m => m.MoveId == 0x9A && m.Level == 1); // Tackle

        var ironTail = DataTableCodec.ReadMove(rom, tables!, 1, charmap);
        Assert.NotNull(ironTail);
        Assert.Contains("Iron Tail", ironTail!.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(20, ironTail.BasePower);
        Assert.Equal(0x11, ironTail.Type); // TYPE_STEEL
        Assert.Equal(10, ironTail.BasePp);
        Assert.Equal(0, ironTail.Category); // physical

        var stick = DataTableCodec.ReadItem(rom, tables!, 1, charmap);
        Assert.NotNull(stick);
        Assert.Contains("Stick", stick!.Name, StringComparison.OrdinalIgnoreCase);
        Assert.Equal(2u, stick.BuyPrice);
        Assert.Equal(1u, stick.SellPrice);
        Assert.Equal(0, stick.Category); // thrown line
    }

    [Fact]
    public void Index_ExposesNamedEntriesAndDecodedMetadata()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var (catalog, charmap, _) = CatalogBuilder.Build(rom);
        var tables = catalog.ForCategory(AssetCategory.DataTables);
        Assert.Equal(3, tables.Count);

        var monsters = tables.First(a => a.Kind == AssetKind.MonsterTable);
        Assert.Equal("Pokemon", monsters.Name);
        var bulb = monsters.Children.First(a => a.Metadata.GetValueOrDefault("id") == "1");
        Assert.Equal(AssetKind.MonsterEntry, bulb.Kind);
        Assert.Contains("Bulbasaur", bulb.Name, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("MONSTER_", bulb.Name, StringComparison.Ordinal);
        Assert.Equal("20", bulb.Metadata["baseHp"]);
        Assert.Contains("Grass", bulb.Metadata.GetValueOrDefault("types"), StringComparison.OrdinalIgnoreCase);

        var preview = AssetPreviewer.Create(rom, bulb, charmap);
        Assert.Contains("Bulbasaur", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.Contains("Tackle", preview.Text ?? "", StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("Lv.1  154", preview.Text ?? "", StringComparison.Ordinal);

        var moves = tables.First(a => a.Kind == AssetKind.MoveTable);
        var iron = moves.Children.First(a => a.Metadata.GetValueOrDefault("id") == "1");
        Assert.Equal("20", iron.Metadata["basePower"]);
        Assert.Contains("Iron Tail", iron.Name, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("MOVE_", iron.Name, StringComparison.Ordinal);

        var items = tables.First(a => a.Kind == AssetKind.ItemTable);
        var stick = items.Children.First(a => a.Metadata.GetValueOrDefault("id") == "1");
        Assert.Equal("2", stick.Metadata["buyPrice"]);
        Assert.Contains("Stick", stick.Name, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("ITEM_", stick.Name, StringComparison.Ordinal);
    }

    [Fact]
    public void CompressMoveId_RoundTrips()
    {
        foreach (var id in new[] { 0x01, 0x7F, 0x80, 0x9A, 0x1AD })
        {
            var packed = DataTableCodec.CompressMoveId(id);
            var (decoded, consumed) = DataTableCodec.DecompressMoveId(packed);
            Assert.Equal(id, decoded);
            Assert.Equal(packed.Length, consumed);
        }
    }

    [Fact]
    public void Write_MonsterStatsMoveDescriptionAndLearnset_RoundTrip()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var charmap = Charmap.FromFile(Path.Combine(root, "charmap.txt"));
        var tables = DataTableTables.TryLoad(rom);
        Assert.NotNull(tables);

        var buffer = MutableRom.From(rom);
        Assert.True(DataTableCodec.WriteMonster(buffer, tables!, 1, charmap, new DataTableMonsterPatch(
            BaseHp: 25, ExpYield: 18, Type1: 4, Type2: 8, Ability1: 0x1A, Ability2: 0,
            FriendArea: 13, BaseAtk: 2, BaseSpAtk: 2, BaseDef: 1, BaseSpDef: 0,
            Weight: 153, Size: 27, BodySize: 1, RecruitRate: 125,
            LevelUpMoves: [new LevelUpMove(0xD9, 1), new LevelUpMove(0x9A, 4)]))); // Growl then Tackle
        Assert.True(DataTableCodec.WriteMove(buffer, tables!, 3, charmap, new DataTableMovePatch(
            BasePower: 4, BasePp: 17, Type: 1, Category: 2, Accuracy1: 125, Accuracy2: 125,
            AccuracyAi: 75, CritChance: 12, Description: "Makes the target drowsy.")));
        Assert.True(DataTableCodec.WriteItem(buffer, tables!, 1, charmap, new DataTableItemPatch(
            BuyPrice: 9, SellPrice: 4, Category: 0, MoveId: 0, Description: "A thrown spike.")));

        var view = RomImage.FromBytes(rom.Path, buffer.Copy(0, buffer.Length));
        var bulb = DataTableCodec.ReadMonster(view, tables!, 1, charmap);
        Assert.Equal(25, bulb!.BaseHp);
        Assert.Equal(new LevelUpMove(0xD9, 1), bulb.LevelUpMoves[0]);
        Assert.Equal("Growl", DataTableCodec.MoveDisplayName(view, tables!, 0xD9, charmap));

        var yawn = DataTableCodec.ReadMove(view, tables!, 3, charmap);
        Assert.Equal("Makes the target drowsy.", yawn!.Description);

        var stick = DataTableCodec.ReadItem(view, tables!, 1, charmap);
        Assert.Equal(9u, stick!.BuyPrice);
        Assert.Equal("A thrown spike.", stick.Description);
    }

    [Fact]
    public void MovePicks_AreAlphabeticalByDisplayName()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null)
            return;

        var rom = RomImage.Open(baserom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var charmap = Charmap.FromFile(Path.Combine(root, "charmap.txt"));
        var tables = DataTableTables.TryLoad(rom);
        var picks = DataTableCodec.AlphabeticalMoves(rom, tables!, charmap);
        Assert.Contains(picks, p => p.Name.Contains("Iron Tail", StringComparison.OrdinalIgnoreCase));
        var names = picks.Select(p => p.Name).ToArray();
        var sorted = names.OrderBy(n => n, StringComparer.OrdinalIgnoreCase).ToArray();
        Assert.Equal(sorted, names);
    }

    [Fact]
    public void DataTables_UseDedicatedWorkspace()
    {
        Assert.Equal(CategoryWorkspaceKind.DataTables, CategoryWorkspace.Resolve(AssetCategory.DataTables));
        Assert.False(CategoryWorkspace.UsesAssetBrowser(AssetCategory.DataTables));
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
