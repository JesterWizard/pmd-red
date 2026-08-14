using System.Globalization;

namespace RescueEditor.Core;

public enum ShopKind
{
    TownShop,
    TownWares,
    DungeonShop,
}

public sealed class GameplayTableTables
{
    public const int TypeCount = 18;
    public const int ExclusiveCount = 12;
    public const int ExclusiveEntrySize = 4;
    public const int TypeCellSize = 2;
    public const int RandomItemSetCount = 26;
    public const int KecleonShopSetIndex = 15; // RANDOM_ITEMS_SET_KECLEON_SHOP_1 - 1
    public const int TownKecleonSetCount = 8;

    public required int TypeChart { get; init; }
    public required int ExclusivePokemon { get; init; }
    public int RandomItemSets { get; init; } = -1;

    public int MatchupOffset(int attack, int defend) =>
        TypeChart + (attack * TypeCount + defend) * TypeCellSize;

    public int ExclusiveOffset(int index) => ExclusivePokemon + index * ExclusiveEntrySize;

    public static GameplayTableTables? TryLoad(RomImage rom)
    {
        var fireRow = IndexOf(rom.Bytes, FireRowNeedle);
        var exclusives = IndexOf(rom.Bytes, ExclusiveNeedle);
        if (fireRow < TypeCount * TypeCellSize * 2 || exclusives < 0)
            return null;

        var chart = fireRow - TypeCount * TypeCellSize * 2; // skip None + Normal rows
        var sets = FindRandomItemSets(rom);
        return new GameplayTableTables
        {
            TypeChart = chart,
            ExclusivePokemon = exclusives,
            RandomItemSets = sets,
        };
    }

    // Fire attacking: Neutral, Neutral, Resist, Resist, Super, Neutral, Super, Neutral,
    // Neutral, Neutral, Neutral, Neutral, Super, Resist, Neutral, Resist, Neutral, Super
    private static readonly byte[] FireRowNeedle =
    [
        0x02, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x02, 0x00,
        0x03, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00,
        0x03, 0x00, 0x01, 0x00, 0x02, 0x00, 0x01, 0x00, 0x02, 0x00, 0x03, 0x00,
    ];

    // Porygon (red), Porygon2 (blue), Magikarp (blue)
    private static readonly byte[] ExclusiveNeedle =
    [
        0x89, 0x00, 0x01, 0x00,
        0x02, 0x01, 0x00, 0x01,
        0x81, 0x00, 0x00, 0x01,
    ];

    // Kecleon Shop 1: skip to Thrown (arc), 12.5%, 62.5%, 100%
    private static readonly byte[] KecleonShop1Needle =
    [
        0x31, 0x75, 0xE2, 0x04, 0x6A, 0x18, 0x10, 0x27,
    ];

    private static int FindRandomItemSets(RomImage rom)
    {
        var shop1 = IndexOf(rom.Bytes, KecleonShop1Needle);
        if (shop1 < 0)
            return -1;
        var ptr = RomImage.RomVirtualAddress + (uint)shop1;
        var needle = new byte[4];
        BitConverter.TryWriteBytes(needle, ptr);
        var hit = IndexOf(rom.Bytes, needle);
        if (hit < KecleonShopSetIndex * 4)
            return -1;
        return hit - KecleonShopSetIndex * 4;
    }

    private static int IndexOf(ReadOnlySpan<byte> haystack, ReadOnlySpan<byte> needle)
    {
        if (needle.IsEmpty || haystack.Length < needle.Length)
            return -1;
        var last = haystack.Length - needle.Length;
        for (var i = 0; i <= last; i += 2)
        {
            if (haystack.Slice(i, needle.Length).SequenceEqual(needle))
                return i;
        }

        return -1;
    }
}

public sealed record ExclusivePokemonEntry(int Index, int Species, bool InRed, bool InBlue);
public sealed record ExclusivePokemonPatch(int Species, bool InRed, bool InBlue);
public sealed record ShopItemWeight(int ItemId, int Weight);

public sealed record ShopTableEntry(
    int Id,
    string Name,
    ShopKind Kind,
    int TableOffset,
    int CompressedWords,
    IReadOnlyList<ShopItemWeight> Items,
    string? SampleDungeon = null);

public static class GameplayTableCodec
{
    public const int Immune = 0;
    public const int Resist = 1;
    public const int Neutral = 2;
    public const int Super = 3;

    public static int ReadMatchup(RomImage rom, GameplayTableTables tables, int attack, int defend)
    {
        if (!IsType(attack) || !IsType(defend))
            return Neutral;
        var off = tables.MatchupOffset(attack, defend);
        return rom.IsRangeValid(off, 2) ? rom.ReadInt16(off) : Neutral;
    }

    public static bool WriteMatchup(
        MutableRom rom, GameplayTableTables tables, int attack, int defend, int effectiveness,
        ICollection<RomSpan>? dirty = null)
    {
        if (!IsType(attack) || !IsType(defend))
            return false;
        var off = tables.MatchupOffset(attack, defend);
        if (!rom.IsRangeValid(off, 2))
            return false;
        rom.WriteInt16(off, (short)Math.Clamp(effectiveness, Immune, Super));
        dirty?.Add(new RomSpan(off, 2));
        return true;
    }

    public static ExclusivePokemonEntry? ReadExclusive(RomImage rom, GameplayTableTables tables, int index)
    {
        if ((uint)index >= GameplayTableTables.ExclusiveCount)
            return null;
        var off = tables.ExclusiveOffset(index);
        if (!rom.IsRangeValid(off, GameplayTableTables.ExclusiveEntrySize))
            return null;
        return new ExclusivePokemonEntry(
            index,
            rom.ReadInt16(off),
            rom.ReadByte(off + 2) != 0,
            rom.ReadByte(off + 3) != 0);
    }

    public static bool WriteExclusive(
        MutableRom rom,
        GameplayTableTables tables,
        int index,
        ExclusivePokemonPatch patch,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)index >= GameplayTableTables.ExclusiveCount)
            return false;
        var off = tables.ExclusiveOffset(index);
        if (!rom.IsRangeValid(off, GameplayTableTables.ExclusiveEntrySize))
            return false;
        rom.WriteInt16(off, (short)Math.Clamp(patch.Species, short.MinValue, short.MaxValue));
        rom.WriteByte(off + 2, (byte)(patch.InRed ? 1 : 0));
        rom.WriteByte(off + 3, (byte)(patch.InBlue ? 1 : 0));
        dirty?.Add(new RomSpan(off, GameplayTableTables.ExclusiveEntrySize));
        return true;
    }

    public static IReadOnlyList<ShopTableEntry> ListShops(RomImage rom, GameplayTableTables tables)
    {
        var shops = new List<ShopTableEntry>();
        AddTownShops(rom, tables, shops);
        AddDungeonShops(rom, shops);
        return shops;
    }

    public static IReadOnlyList<ShopItemWeight> ReadShop(RomImage rom, ShopTableEntry shop)
    {
        var (expanded, _) = DungeonSpawnCodec.DecodeItemTable(rom, shop.TableOffset);
        return CollectWeights(expanded);
    }

    public static bool WriteShopItemWeight(
        MutableRom rom,
        RomImage view,
        ShopTableEntry shop,
        int itemId,
        int weight,
        ICollection<RomSpan>? dirty = null)
    {
        if (!DungeonSpawnCodec.TrySetItemWeight(rom, view, shop.TableOffset, shop.CompressedWords, itemId, weight))
            return false;
        dirty?.Add(new RomSpan(shop.TableOffset, shop.CompressedWords * 2));
        return true;
    }

    public static bool WriteShopItems(
        MutableRom rom,
        RomImage view,
        ShopTableEntry shop,
        IReadOnlyList<ShopItemWeight> items,
        ICollection<RomSpan>? dirty = null)
    {
        var (expanded, _) = DungeonSpawnCodec.DecodeItemTable(view, shop.TableOffset);
        for (var id = 0; id < DungeonMapParamTables.ItemIdCount; id++)
            expanded[DungeonMapParamTables.ItemCategoryCount + id] = 0;
        foreach (var item in items)
        {
            if ((uint)item.ItemId < DungeonMapParamTables.ItemIdCount)
                expanded[DungeonMapParamTables.ItemCategoryCount + item.ItemId] = (short)item.Weight;
        }

        if (!DungeonSpawnCodec.TryWriteItemTable(rom, shop.TableOffset, shop.CompressedWords, expanded))
            return false;
        dirty?.Add(new RomSpan(shop.TableOffset, shop.CompressedWords * 2));
        return true;
    }

    private static void AddTownShops(RomImage rom, GameplayTableTables tables, List<ShopTableEntry> shops)
    {
        if (tables.RandomItemSets < 0)
            return;
        var names = new[]
        {
            "Town Kecleon Shop 1", "Town Kecleon Wares 1",
            "Town Kecleon Shop 2", "Town Kecleon Wares 2",
            "Town Kecleon Shop 3", "Town Kecleon Wares 3",
            "Town Kecleon Shop 4", "Town Kecleon Wares 4",
        };
        for (var i = 0; i < GameplayTableTables.TownKecleonSetCount; i++)
        {
            var ptrOff = tables.RandomItemSets + (GameplayTableTables.KecleonShopSetIndex + i) * 4;
            var data = rom.ReadPointerOffset(ptrOff);
            if (data < 0)
                continue;
            var (expanded, words) = DungeonSpawnCodec.DecodeItemTable(rom, data);
            var kind = i % 2 == 0 ? ShopKind.TownShop : ShopKind.TownWares;
            shops.Add(new ShopTableEntry(
                shops.Count,
                names[i],
                kind,
                data,
                words,
                CollectWeights(expanded)));
        }
    }

    private static void AddDungeonShops(RomImage rom, List<ShopTableEntry> shops)
    {
        var map = DungeonMapParamTables.TryLoad(rom);
        if (map is null)
            return;

        var seen = new HashSet<int>();
        for (var dungeonId = 0; dungeonId <= DungeonIndexer.LastStoryDungeonId; dungeonId++)
        {
            var floorCount = DungeonBuiltinNames.TryGetDungeon(dungeonId, out var info)
                ? info.FloorCount
                : map.CountFloors(rom, dungeonId);
            var display = info?.DisplayName ?? $"Dungeon {dungeonId}";
            var up = info?.StairDirectionUp ?? false;
            for (var floor = 1; floor < floorCount; floor++)
            {
                var record = map.TryReadFloor(rom, dungeonId, floor);
                if (record is null || record.ItemTables.Length <= 1)
                    continue;
                var tableIndex = record.ItemTables[1];
                var listPtr = map.ItemSpawnPointers + tableIndex * 4;
                if (!rom.IsRangeValid(listPtr, 4))
                    continue;
                var srcOff = rom.ReadPointerOffset(listPtr);
                if (srcOff < 0 || !seen.Add(srcOff))
                    continue;
                var (expanded, words) = DungeonSpawnCodec.DecodeItemTable(rom, srcOff);
                var items = CollectWeights(expanded);
                if (items.Count == 0)
                    continue;
                var label = up ? $"F{floor}" : $"B{floor}";
                shops.Add(new ShopTableEntry(
                    shops.Count,
                    $"{display} {label} shop",
                    ShopKind.DungeonShop,
                    srcOff,
                    words,
                    items,
                    display));
            }
        }
    }

    private static IReadOnlyList<ShopItemWeight> CollectWeights(short[] expanded)
    {
        var list = new List<ShopItemWeight>();
        for (var id = 0; id < DungeonMapParamTables.ItemIdCount; id++)
        {
            var weight = expanded[DungeonMapParamTables.ItemCategoryCount + id];
            if (weight != 0)
                list.Add(new ShopItemWeight(id, weight));
        }

        return list;
    }

    private static bool IsType(int id) => (uint)id < GameplayTableTables.TypeCount;
}

public static class GameplayTableIndexer
{
    public static IReadOnlyList<AssetDescriptor> Index(RomImage rom, GameplayTableTables? tables = null)
    {
        tables ??= GameplayTableTables.TryLoad(rom);
        if (tables is null)
            return [];

        var assets = new List<AssetDescriptor>
        {
            BuildTypes(tables),
            BuildExclusives(rom, tables),
        };
        var shops = GameplayTableCodec.ListShops(rom, tables);
        if (shops.Count > 0)
            assets.Add(BuildShops(shops));
        return assets;
    }

    private static AssetDescriptor BuildTypes(GameplayTableTables tables)
    {
        var children = new List<AssetDescriptor>(GameplayTableTables.TypeCount);
        for (var id = 0; id < GameplayTableTables.TypeCount; id++)
        {
            var name = DataTableEnums.TypeName(id);
            children.Add(new AssetDescriptor
            {
                Id = $"datatable:type:{id}",
                Name = $"{id:D2}  {name}",
                Category = AssetCategory.DataTables,
                Kind = AssetKind.TypeMatchupEntry,
                Offset = tables.MatchupOffset(id, 0),
                Size = GameplayTableTables.TypeCount * GameplayTableTables.TypeCellSize,
                Format = "gTypeEffectivenessChart",
                Description = $"{name} attacking",
                Metadata = new Dictionary<string, string>
                {
                    ["id"] = id.ToString(CultureInfo.InvariantCulture),
                    ["displayName"] = name,
                    ["table"] = "type",
                },
            });
        }

        return new AssetDescriptor
        {
            Id = "datatable:type",
            Name = "Types",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.TypeMatchupTable,
            Offset = tables.TypeChart,
            Size = GameplayTableTables.TypeCount * GameplayTableTables.TypeCount * GameplayTableTables.TypeCellSize,
            Format = "gTypeEffectivenessChart",
            Description = $"{children.Count} attacking types",
            Metadata = new Dictionary<string, string>
            {
                ["table"] = "type",
                ["count"] = children.Count.ToString(CultureInfo.InvariantCulture),
            },
            Children = children,
        };
    }

    private static AssetDescriptor BuildExclusives(RomImage rom, GameplayTableTables tables)
    {
        var children = new List<AssetDescriptor>(GameplayTableTables.ExclusiveCount);
        for (var i = 0; i < GameplayTableTables.ExclusiveCount; i++)
        {
            var entry = GameplayTableCodec.ReadExclusive(rom, tables, i);
            if (entry is null)
                continue;
            var name = DungeonBuiltinNames.Species(entry.Species);
            var version = entry.InRed && entry.InBlue ? "Both" : entry.InRed ? "Red" : "Blue";
            children.Add(new AssetDescriptor
            {
                Id = $"datatable:exclusive:{i}",
                Name = $"{i:D2}  {name}",
                Category = AssetCategory.DataTables,
                Kind = AssetKind.ExclusiveEntry,
                Offset = tables.ExclusiveOffset(i),
                Size = GameplayTableTables.ExclusiveEntrySize,
                Format = "gExclusivePokemon",
                Description = $"{name} — {version}",
                Metadata = new Dictionary<string, string>
                {
                    ["id"] = i.ToString(CultureInfo.InvariantCulture),
                    ["displayName"] = name,
                    ["species"] = entry.Species.ToString(CultureInfo.InvariantCulture),
                    ["table"] = "exclusive",
                },
            });
        }

        return new AssetDescriptor
        {
            Id = "datatable:exclusive",
            Name = "Exclusives",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.ExclusiveTable,
            Offset = tables.ExclusivePokemon,
            Size = GameplayTableTables.ExclusiveCount * GameplayTableTables.ExclusiveEntrySize,
            Format = "gExclusivePokemon",
            Description = $"{children.Count} version-exclusive species",
            Metadata = new Dictionary<string, string>
            {
                ["table"] = "exclusive",
                ["count"] = children.Count.ToString(CultureInfo.InvariantCulture),
            },
            Children = children,
        };
    }

    private static AssetDescriptor BuildShops(IReadOnlyList<ShopTableEntry> shops)
    {
        var children = new List<AssetDescriptor>(shops.Count);
        foreach (var shop in shops)
        {
            children.Add(new AssetDescriptor
            {
                Id = $"datatable:shop:{shop.Id}",
                Name = shop.Name,
                Category = AssetCategory.DataTables,
                Kind = AssetKind.ShopEntry,
                Offset = shop.TableOffset,
                Size = shop.CompressedWords * 2,
                Format = shop.Kind == ShopKind.DungeonShop ? "mapparam shop" : "gRandomItemsSets",
                Description = $"{shop.Items.Count} items",
                Metadata = new Dictionary<string, string>
                {
                    ["id"] = shop.Id.ToString(CultureInfo.InvariantCulture),
                    ["displayName"] = shop.Name,
                    ["table"] = "shop",
                    ["kind"] = shop.Kind.ToString(),
                },
            });
        }

        return new AssetDescriptor
        {
            Id = "datatable:shop",
            Name = "Shops",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.ShopTable,
            Offset = shops[0].TableOffset,
            Size = shops.Sum(s => s.CompressedWords * 2),
            Format = "shop inventories",
            Description = $"{children.Count} Kecleon inventories",
            Metadata = new Dictionary<string, string>
            {
                ["table"] = "shop",
                ["count"] = children.Count.ToString(CultureInfo.InvariantCulture),
            },
            Children = children,
        };
    }
}
