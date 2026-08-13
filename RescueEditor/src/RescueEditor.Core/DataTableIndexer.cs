using System.Globalization;
using System.Text;

namespace RescueEditor.Core;

public sealed record DataTableLabels(
    NamedIdCatalog Monsters,
    NamedIdCatalog Moves,
    NamedIdCatalog Items,
    NamedIdCatalog Types,
    NamedIdCatalog Abilities,
    NamedIdCatalog FriendAreas)
{
    public static DataTableLabels Empty { get; } = new(
        new NamedIdCatalog([]), new NamedIdCatalog([]), new NamedIdCatalog([]),
        new NamedIdCatalog([]), new NamedIdCatalog([]), new NamedIdCatalog([]));
}

public static class DataTableIndexer
{
    public static DataTableLabels LoadLabels(string? repositoryRoot)
    {
        NamedIdCatalog Load(string relative, Func<string, NamedIdCatalog> parse)
        {
            if (string.IsNullOrWhiteSpace(repositoryRoot))
                return new NamedIdCatalog([]);
            var path = Path.Combine(repositoryRoot, relative);
            return File.Exists(path) ? parse(File.ReadAllText(path)) : new NamedIdCatalog([]);
        }

        return new DataTableLabels(
            Load(Path.Combine("include", "constants", "monster.h"), NamedIdCatalogs.ParseMonsterDefines),
            Load(Path.Combine("include", "constants", "move_id.h"), NamedIdCatalogs.ParseMoveDefines),
            Load(Path.Combine("include", "constants", "item.h"), NamedIdCatalogs.ParseItemDefines),
            Load(Path.Combine("include", "constants", "type.h"), NamedIdCatalogs.ParseTypeDefines),
            Load(Path.Combine("include", "constants", "ability.h"), NamedIdCatalogs.ParseAbilityDefines),
            Load(Path.Combine("include", "constants", "friend_area.h"), NamedIdCatalogs.ParseFriendAreaDefines));
    }

    public static IReadOnlyList<AssetDescriptor> Index(
        RomImage rom,
        Charmap charmap,
        string? repositoryRoot = null)
    {
        var tables = DataTableTables.TryLoad(rom);
        if (tables is null)
            return [];

        repositoryRoot ??= CatalogBuilder.FindRepositoryRoot(rom.Path);
        var labels = LoadLabels(repositoryRoot);
        return
        [
            BuildTable(AssetKind.MonsterTable, "Pokemon", "monspara",
                DataTableTables.MonsterCount, DataTableTables.MonsterEntrySize, tables.MonsterData,
                id => CreateMonsterAsset(rom, charmap, tables, labels, id)),
            BuildTable(AssetKind.MoveTable, "Moves", "wazapara",
                DataTableTables.MoveCount, DataTableTables.MoveEntrySize, tables.MoveData,
                id => CreateMoveAsset(rom, charmap, tables, labels, id)),
            BuildTable(AssetKind.ItemTable, "Items", "itempara",
                DataTableTables.ItemCount, DataTableTables.ItemEntrySize, tables.ItemData,
                id => CreateItemAsset(rom, charmap, tables, labels, id)),
        ];
    }

    private static AssetDescriptor BuildTable(
        AssetKind kind,
        string name,
        string format,
        int count,
        int entrySize,
        int offset,
        Func<int, AssetDescriptor?> create)
    {
        var children = new List<AssetDescriptor>(count);
        for (var id = 0; id < count; id++)
        {
            var child = create(id);
            if (child is not null)
                children.Add(child);
        }

        return new AssetDescriptor
        {
            Id = $"datatable:{format}",
            Name = name,
            Category = AssetCategory.DataTables,
            Kind = kind,
            Offset = offset,
            Size = count * entrySize,
            Format = format,
            Description = $"{children.Count} entries",
            Metadata = new Dictionary<string, string>
            {
                ["table"] = format,
                ["count"] = children.Count.ToString(CultureInfo.InvariantCulture),
            },
            Children = children,
        };
    }

    private static AssetDescriptor? CreateMonsterAsset(
        RomImage rom, Charmap charmap, DataTableTables tables, DataTableLabels _, int id)
    {
        var entry = DataTableCodec.ReadMonster(rom, tables, id, charmap);
        if (entry is null)
            return null;
        var display = string.IsNullOrWhiteSpace(entry.Name)
            ? DungeonBuiltinNames.Species(id)
            : entry.Name;
        var types = JoinTypes(entry.Type1, entry.Type2);
        var abilities = JoinAbilities(entry.Ability1, entry.Ability2);
        var learnset = string.Join(", ", entry.LevelUpMoves.Select(m =>
            $"Lv.{m.Level} {DataTableCodec.MoveDisplayName(rom, tables, m.MoveId, charmap)}"));
        return new AssetDescriptor
        {
            Id = $"datatable:monster:{id}",
            Name = $"{id:D3}  {display}",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.MonsterEntry,
            Offset = tables.MonsterData + id * DataTableTables.MonsterEntrySize,
            Size = DataTableTables.MonsterEntrySize,
            Format = "MonsterDataEntry",
            Description = $"{display} — HP {entry.BaseHp}",
            Metadata = new Dictionary<string, string>
            {
                ["id"] = id.ToString(CultureInfo.InvariantCulture),
                ["symbol"] = display,
                ["displayName"] = entry.Name,
                ["category"] = entry.Category,
                ["baseHp"] = entry.BaseHp.ToString(CultureInfo.InvariantCulture),
                ["expYield"] = entry.ExpYield.ToString(CultureInfo.InvariantCulture),
                ["types"] = types,
                ["abilities"] = abilities,
                ["friendArea"] = DataTableEnums.FriendAreaName(entry.FriendArea),
                ["atk"] = $"{entry.BaseAtk}/{entry.BaseSpAtk}",
                ["def"] = $"{entry.BaseDef}/{entry.BaseSpDef}",
                ["recruitRate"] = entry.RecruitRate.ToString(CultureInfo.InvariantCulture),
                ["learnset"] = learnset,
            },
        };
    }

    private static AssetDescriptor? CreateMoveAsset(
        RomImage rom, Charmap charmap, DataTableTables tables, DataTableLabels _, int id)
    {
        var entry = DataTableCodec.ReadMove(rom, tables, id, charmap);
        if (entry is null)
            return null;
        var display = string.IsNullOrWhiteSpace(entry.Name) ? DataTableEnums.PrettyMoveFallback(id) : entry.Name;
        return new AssetDescriptor
        {
            Id = $"datatable:move:{id}",
            Name = $"{id:D3}  {display}",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.MoveEntry,
            Offset = tables.MoveData + id * DataTableTables.MoveEntrySize,
            Size = DataTableTables.MoveEntrySize,
            Format = "MoveDataEntry",
            Description = $"{display}  Pow {entry.BasePower}  PP {entry.BasePp}",
            Metadata = new Dictionary<string, string>
            {
                ["id"] = id.ToString(CultureInfo.InvariantCulture),
                ["symbol"] = display,
                ["displayName"] = entry.Name,
                ["basePower"] = entry.BasePower.ToString(CultureInfo.InvariantCulture),
                ["basePp"] = entry.BasePp.ToString(CultureInfo.InvariantCulture),
                ["type"] = DataTableEnums.TypeName(entry.Type),
                ["category"] = MoveCategoryName(entry.Category),
                ["accuracy"] = $"{entry.Accuracy1}/{entry.Accuracy2}",
                ["critChance"] = entry.CritChance.ToString(CultureInfo.InvariantCulture),
                ["description"] = entry.Description,
            },
        };
    }

    private static AssetDescriptor? CreateItemAsset(
        RomImage rom, Charmap charmap, DataTableTables tables, DataTableLabels _, int id)
    {
        var entry = DataTableCodec.ReadItem(rom, tables, id, charmap);
        if (entry is null)
            return null;
        var display = string.IsNullOrWhiteSpace(entry.Name)
            ? DungeonBuiltinNames.Item(id)
            : entry.Name;
        return new AssetDescriptor
        {
            Id = $"datatable:item:{id}",
            Name = $"{id:D3}  {display}",
            Category = AssetCategory.DataTables,
            Kind = AssetKind.ItemEntry,
            Offset = tables.ItemData + id * DataTableTables.ItemEntrySize,
            Size = DataTableTables.ItemEntrySize,
            Format = "ItemDataEntry",
            Description = $"{display}  Buy {entry.BuyPrice}  Sell {entry.SellPrice}",
            Metadata = new Dictionary<string, string>
            {
                ["id"] = id.ToString(CultureInfo.InvariantCulture),
                ["symbol"] = display,
                ["displayName"] = entry.Name,
                ["buyPrice"] = entry.BuyPrice.ToString(CultureInfo.InvariantCulture),
                ["sellPrice"] = entry.SellPrice.ToString(CultureInfo.InvariantCulture),
                ["category"] = DataTableIndexer.ItemCategoryName(entry.Category),
                ["moveId"] = entry.MoveId == 0 ? "" : DataTableCodec.MoveDisplayName(rom, tables, entry.MoveId, charmap),
                ["description"] = entry.Description,
            },
        };
    }

    private static string JoinTypes(int a, int b)
    {
        var first = DataTableEnums.TypeName(a);
        return b == 0 ? first : $"{first} / {DataTableEnums.TypeName(b)}";
    }

    private static string JoinAbilities(int a, int b)
    {
        var first = DataTableEnums.AbilityName(a);
        return b == 0 ? first : $"{first} / {DataTableEnums.AbilityName(b)}";
    }

    public static string MoveCategoryName(int category) => category switch
    {
        0 => "Physical",
        1 => "Special",
        2 => "Status",
        _ => category.ToString(CultureInfo.InvariantCulture),
    };

    public static string ItemCategoryName(int category) => category switch
    {
        0 => "Thrown (line)",
        1 => "Thrown (arc)",
        2 => "Berries / seeds / vitamins",
        3 => "Food / gummies",
        4 => "Held items",
        5 => "TMs / HMs",
        6 => "Poké",
        8 => "Other",
        9 => "Orbs",
        10 => "Link Box",
        11 => "Used TM",
        _ => category.ToString(CultureInfo.InvariantCulture),
    };
}

public static class DataTablePreview
{
    public static PreviewContent Create(RomImage rom, AssetDescriptor asset, Charmap charmap)
    {
        var tables = DataTableTables.TryLoad(rom);
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        var labels = DataTableIndexer.LoadLabels(root);
        var text = Build(rom, asset, tables, labels, charmap);
        return new PreviewContent(asset.Name, Text: text);
    }

    private static string Build(
        RomImage rom,
        AssetDescriptor asset,
        DataTableTables? tables,
        DataTableLabels labels,
        Charmap charmap)
    {
        var builder = new StringBuilder();
        builder.AppendLine(asset.Name);
        if (!string.IsNullOrWhiteSpace(asset.Description))
            builder.AppendLine(asset.Description);
        builder.AppendLine();

        if (tables is null || !int.TryParse(asset.Metadata.GetValueOrDefault("id"), out var id))
        {
            builder.AppendLine(asset.Kind switch
            {
                AssetKind.MonsterTable => $"{asset.Children.Count} Pokemon entries (monspara).",
                AssetKind.MoveTable => $"{asset.Children.Count} move entries (wazapara).",
                AssetKind.ItemTable => $"{asset.Children.Count} item entries (itempara).",
                _ => asset.Description ?? "",
            });
            return builder.ToString();
        }

        switch (asset.Kind)
        {
            case AssetKind.MonsterEntry:
            {
                var entry = DataTableCodec.ReadMonster(rom, tables, id, charmap);
                if (entry is null)
                    break;
                builder.AppendLine($"Name: {entry.Name}");
                builder.AppendLine($"Category: {entry.Category}");
                builder.AppendLine($"Types: {DataTableEnums.TypeName(entry.Type1)} / {DataTableEnums.TypeName(entry.Type2)}");
                builder.AppendLine($"Abilities: {DataTableEnums.AbilityName(entry.Ability1)} / {DataTableEnums.AbilityName(entry.Ability2)}");
                builder.AppendLine($"Friend area: {DataTableEnums.FriendAreaName(entry.FriendArea)}");
                builder.AppendLine($"HP {entry.BaseHp}  Exp {entry.ExpYield}  Recruit {entry.RecruitRate}");
                builder.AppendLine($"Atk/SpAtk {entry.BaseAtk}/{entry.BaseSpAtk}  Def/SpDef {entry.BaseDef}/{entry.BaseSpDef}");
                builder.AppendLine($"Weight {entry.Weight}  Size {entry.Size}  Body {entry.BodySize}");
                if (entry.LevelUpMoves.Count > 0)
                {
                    builder.AppendLine();
                    builder.AppendLine("Level-up:");
                    foreach (var move in entry.LevelUpMoves)
                        builder.AppendLine($"  Lv.{move.Level}  {DataTableCodec.MoveDisplayName(rom, tables, move.MoveId, charmap)}");
                }

                break;
            }
            case AssetKind.MoveEntry:
            {
                var entry = DataTableCodec.ReadMove(rom, tables, id, charmap);
                if (entry is null)
                    break;
                builder.AppendLine($"Name: {entry.Name}");
                builder.AppendLine($"Type: {DataTableEnums.TypeName(entry.Type)}  {DataTableIndexer.MoveCategoryName(entry.Category)}");
                builder.AppendLine($"Power {entry.BasePower}  PP {entry.BasePp}  Crit {entry.CritChance}");
                builder.AppendLine($"Accuracy {entry.Accuracy1}/{entry.Accuracy2} (AI {entry.AccuracyAi})");
                if (!string.IsNullOrWhiteSpace(entry.Description))
                {
                    builder.AppendLine();
                    builder.AppendLine(entry.Description);
                }

                break;
            }
            case AssetKind.ItemEntry:
            {
                var entry = DataTableCodec.ReadItem(rom, tables, id, charmap);
                if (entry is null)
                    break;
                builder.AppendLine($"Name: {entry.Name}");
                builder.AppendLine($"Buy {entry.BuyPrice}  Sell {entry.SellPrice}");
                builder.AppendLine($"Category: {DataTableIndexer.ItemCategoryName(entry.Category)}");
                if (entry.MoveId != 0)
                    builder.AppendLine($"Move: {DataTableCodec.MoveDisplayName(rom, tables, entry.MoveId, charmap)}");
                if (!string.IsNullOrWhiteSpace(entry.Description))
                {
                    builder.AppendLine();
                    builder.AppendLine(entry.Description);
                }

                break;
            }
        }

        return builder.ToString();
    }
}
