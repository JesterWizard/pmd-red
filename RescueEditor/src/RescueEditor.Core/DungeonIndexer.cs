using System.Globalization;
using System.Text;
using System.Text.Json;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public static class DungeonIndexer
{
    public const int LastStoryDungeonId = 62; // DUNGEON_PURITY_FOREST

    private static readonly Regex DisplayNameEntry = new(
        @"\[(?<id>DUNGEON_[A-Z0-9_]+)\]\s*=\s*\{\s*_\(""(?<name>[^""]+)""\)",
        RegexOptions.Compiled);

    private static readonly Regex FloorCountEntry = new(
        @"\[(?<id>DUNGEON_[A-Z0-9_]+)\]\s*=\s*(?<n>\d+)\s*,",
        RegexOptions.Compiled);

    public static IReadOnlyList<AssetDescriptor> Index(RomImage rom, string? repositoryRoot = null)
    {
        var tables = DungeonMapParamTables.TryLoad(rom);
        if (tables is null)
            return [];

        repositoryRoot ??= CatalogBuilder.FindRepositoryRoot(rom.Path);
        var names = LoadDisplayNames(repositoryRoot);
        var ids = LoadDungeonIds(repositoryRoot);
        var floorCounts = LoadFloorCounts(repositoryRoot, ids);
        var stairUp = LoadStairDirection(repositoryRoot);
        var labels = LoadLabels(repositoryRoot);

        var assets = new List<AssetDescriptor>();
        for (var dungeonId = 0; dungeonId <= LastStoryDungeonId; dungeonId++)
        {
            var array = tables.TryGetFloorArray(rom, dungeonId);
            if (array < 0)
                continue;

            var rawCount = DungeonBuiltinNames.TryGetDungeon(dungeonId, out var info)
                ? info.FloorCount
                : floorCounts.GetValueOrDefault(dungeonId, tables.CountFloors(rom, dungeonId));
            if (rawCount <= 1)
                continue;

            var symbol = info?.Symbol
                ?? (ids.TryGetName(dungeonId, out var enumName) ? enumName : $"DUNGEON_{dungeonId}");
            var display = info?.DisplayName
                ?? names.GetValueOrDefault(symbol, Pretty(symbol, "DUNGEON_"));
            var up = info?.StairDirectionUp ?? stairUp.GetValueOrDefault(dungeonId, false);
            var floors = new List<AssetDescriptor>();
            for (var floor = 1; floor < rawCount; floor++)
            {
                var record = tables.TryReadFloor(rom, dungeonId, floor);
                if (record is null)
                    continue;
                floors.Add(CreateFloorAsset(dungeonId, display, up, record, labels, array));
            }

            if (floors.Count == 0)
                continue;

            var first = floors[0].Metadata;
            var lastLabel = FloorLabel(up, floors.Count);
            assets.Add(new AssetDescriptor
            {
                Id = $"dungeon:{dungeonId}",
                Name = $"{dungeonId:D3}: {display}",
                Category = AssetCategory.Dungeons,
                Kind = AssetKind.Dungeon,
                Offset = array,
                Size = rawCount * DungeonMapParamTables.FloorParamSize,
                Format = "mapparam",
                Description = $"{floors.Count} floors ({FloorLabel(up, 1)}–{lastLabel})",
                Metadata = new Dictionary<string, string>
                {
                    ["dungeonId"] = dungeonId.ToString(CultureInfo.InvariantCulture),
                    ["floorCount"] = floors.Count.ToString(CultureInfo.InvariantCulture),
                    ["symbol"] = symbol,
                    ["tileset"] = first.GetValueOrDefault("tileset") ?? "",
                    ["music"] = first.GetValueOrDefault("music") ?? "",
                },
                Children = floors,
            });
        }

        return assets;
    }

    private static AssetDescriptor CreateFloorAsset(
        int dungeonId,
        string dungeonName,
        bool stairUp,
        DungeonFloorRecord record,
        DungeonLabels labels,
        int arrayOffset)
    {
        var label = FloorLabel(stairUp, record.Floor);
        var musicName = ResolveMusic(record.Properties.BgMusic, labels);
        var musicPretty = musicName.StartsWith("DUNGEON_MUS_", StringComparison.Ordinal)
            ? Pretty(musicName, "DUNGEON_MUS_")
            : Pretty(musicName, "MUS_");
        var musicMeta = $"{musicName} ({musicPretty})";
        var layoutName = ResolveLayout(record.Properties.Layout, labels);
        var layoutMeta = $"{layoutName} ({Pretty(layoutName, "LAYOUT_")})";
        var wild = record.Monsters.Where(m => m.Weight != 0).ToArray();
        var spawnText = string.Join(", ", wild.Take(8).Select(m =>
            $"{PrettyMonster(m.Species, labels)} Lv.{m.Level}"));
        var trapText = string.Join(", ", record.Traps.Where(t => t.Threshold != 0).Select(t => PrettyTrap(t.TrapId, labels)));
        var description = new StringBuilder();
        if (spawnText.Length > 0)
            description.Append("Spawns: ").Append(spawnText);
        if (trapText.Length > 0)
        {
            if (description.Length > 0)
                description.Append(". ");
            description.Append("Traps: ").Append(trapText);
        }

        return new AssetDescriptor
        {
            Id = $"dungeon:{dungeonId}:floor:{record.Floor}",
            Name = $"{dungeonName} {label}",
            Category = AssetCategory.Dungeons,
            Kind = AssetKind.DungeonFloor,
            Offset = arrayOffset + record.Floor * DungeonMapParamTables.FloorParamSize,
            Size = DungeonMapParamTables.FloorParamSize,
            Format = "DungeonMapParam1",
            Description = description.ToString(),
            Metadata = new Dictionary<string, string>
            {
                ["dungeonId"] = dungeonId.ToString(CultureInfo.InvariantCulture),
                ["floor"] = record.Floor.ToString(CultureInfo.InvariantCulture),
                ["floorLabel"] = label,
                ["tileset"] = record.Properties.Tileset.ToString(CultureInfo.InvariantCulture),
                ["bgMusic"] = record.Properties.BgMusic.ToString(CultureInfo.InvariantCulture),
                ["music"] = musicMeta,
                ["weather"] = PrettyWeather(record.Properties.Weather, labels),
                ["itemDensity"] = record.Properties.ItemDensity.ToString(CultureInfo.InvariantCulture),
                ["trapDensity"] = record.Properties.TrapDensity.ToString(CultureInfo.InvariantCulture),
                ["layout"] = layoutMeta,
                ["darkness"] = PrettyDarkness(record.Properties.VisibilityRange),
            },
        };
    }

    public static string FloorLabel(bool stairDirectionUp, int floor) =>
        stairDirectionUp ? $"{floor}F" : $"B{floor}F";

    public static string ResolveMusic(int dungeonMusicId, DungeonLabels labels)
    {
        if ((uint)dungeonMusicId < (uint)labels.DungeonMusicToSong.Count)
        {
            var song = labels.DungeonMusicToSong[dungeonMusicId];
            if (!string.IsNullOrEmpty(song))
                return song;
        }

        return labels.DungeonMusic.TryGetName(dungeonMusicId, out var name)
            ? name
            : $"DUNGEON_MUS_{dungeonMusicId}";
    }

    public static string PrettyMonster(int species, DungeonLabels labels)
    {
        if (labels.Monsters.TryGetName(species, out var name))
            return Pretty(name, "MONSTER_");
        return DungeonBuiltinNames.Species(species);
    }

    public static string PrettyTrap(int trapId, DungeonLabels labels)
    {
        if (labels.Traps.TryGetName(trapId, out var name))
            return Pretty(name, "TRAP_");
        return DungeonBuiltinNames.Trap(trapId);
    }

    public static string PrettyWeather(int weather, DungeonLabels labels)
    {
        if (labels.Weather.TryGetName(weather, out var name))
            return Pretty(name, "WEATHER_");
        return DungeonBuiltinNames.WeatherName(weather);
    }

    public static string ResolveLayout(int layout, DungeonLabels labels) =>
        labels.Layouts.TryGetName(layout, out var name) ? name : DungeonBuiltinNames.LayoutSymbol(layout);

    public static string PrettyLayout(int layout, DungeonLabels labels)
    {
        if (labels.Layouts.TryGetName(layout, out var name))
            return Pretty(name, "LAYOUT_");
        return DungeonBuiltinNames.LayoutName(layout);
    }

    public static string PrettyDarkness(int visibilityRange) =>
        DungeonBuiltinNames.DarknessName(visibilityRange & 3);

    public static string PrettyItem(int itemId, DungeonLabels labels) =>
        labels.Items.TryGetName(itemId, out var name)
            ? Pretty(name, "ITEM_")
            : DungeonBuiltinNames.Item(itemId);

    public static DungeonLabels LoadLabels(string? repositoryRoot)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot))
            return DungeonLabels.Empty;

        NamedIdCatalog Load(string relative, Func<string, NamedIdCatalog> parse)
        {
            var path = Path.Combine(repositoryRoot, relative);
            return File.Exists(path) ? parse(File.ReadAllText(path)) : new NamedIdCatalog([]);
        }

        var dungeonMusic = Load(Path.Combine("include", "constants", "bg_music.h"),
            NamedIdCatalogs.ParseDungeonMusicEnum);
        var layouts = Load(Path.Combine("include", "dungeon_generation.h"),
            NamedIdCatalogs.ParseFloorLayoutEnum);
        var map = ParseDungeonMusicMap(Path.Combine(repositoryRoot, "src", "dungeon_config.c"));

        return new DungeonLabels(
            Load(Path.Combine("include", "constants", "monster.h"), NamedIdCatalogs.ParseMonsterDefines),
            Load(Path.Combine("include", "constants", "trap.h"), NamedIdCatalogs.ParseTrapEnum),
            Load(Path.Combine("include", "constants", "item.h"), NamedIdCatalogs.ParseItemDefines),
            Load(Path.Combine("include", "constants", "weather.h"), NamedIdCatalogs.ParseWeatherEnum),
            dungeonMusic,
            layouts,
            map);
    }

    public static string Pretty(string symbol, string prefix)
    {
        var rest = symbol.StartsWith(prefix, StringComparison.Ordinal) ? symbol[prefix.Length..] : symbol;
        var parts = rest.Split('_', StringSplitOptions.RemoveEmptyEntries);
        for (var i = 0; i < parts.Length; i++)
        {
            var w = parts[i];
            parts[i] = w.Length == 1
                ? w.ToUpperInvariant()
                : char.ToUpperInvariant(w[0]) + w[1..].ToLowerInvariant();
        }

        return string.Join(' ', parts);
    }

    private static Dictionary<string, string> LoadDisplayNames(string? root)
    {
        var names = new Dictionary<string, string>(StringComparer.Ordinal);
        if (string.IsNullOrWhiteSpace(root))
            return names;
        var path = Path.Combine(root, "src", "strings.c");
        if (!File.Exists(path))
            return names;
        foreach (Match match in DisplayNameEntry.Matches(File.ReadAllText(path)))
            names[match.Groups["id"].Value] = match.Groups["name"].Value;
        return names;
    }

    private static NamedIdCatalog LoadDungeonIds(string? root)
    {
        if (string.IsNullOrWhiteSpace(root))
            return new NamedIdCatalog([]);
        var path = Path.Combine(root, "include", "constants", "dungeon.h");
        return File.Exists(path)
            ? NamedIdCatalogs.ParseDungeonEnum(File.ReadAllText(path))
            : new NamedIdCatalog([]);
    }

    private static Dictionary<int, int> LoadFloorCounts(string? root, NamedIdCatalog ids)
    {
        var counts = new Dictionary<int, int>();
        if (string.IsNullOrWhiteSpace(root))
            return counts;
        var path = Path.Combine(root, "src", "dungeon_info.c");
        if (!File.Exists(path))
            return counts;

        var text = File.ReadAllText(path);
        var start = text.IndexOf("sDungeonFloorCount[]", StringComparison.Ordinal);
        if (start < 0)
            return counts;
        var block = text[start..];
        var end = block.IndexOf("};", StringComparison.Ordinal);
        if (end > 0)
            block = block[..end];

        foreach (Match match in FloorCountEntry.Matches(block))
        {
            if (!ids.TryGetId(match.Groups["id"].Value, out var dungeonId))
                continue;
            counts[dungeonId] = int.Parse(match.Groups["n"].Value, CultureInfo.InvariantCulture);
        }

        return counts;
    }

    private static Dictionary<int, bool> LoadStairDirection(string? root)
    {
        var map = new Dictionary<int, bool>();
        if (string.IsNullOrWhiteSpace(root))
            return map;
        var path = Path.Combine(root, "data", "dungeon", "dungeon_data.json");
        if (!File.Exists(path))
            return map;

        try
        {
            using var doc = JsonDocument.Parse(File.ReadAllText(path));
            var i = 0;
            foreach (var entry in doc.RootElement.EnumerateArray())
            {
                if (entry.TryGetProperty("stairDirectionUp", out var flag))
                    map[i] = flag.GetBoolean();
                i++;
            }
        }
        catch (JsonException)
        {
            // Leave empty; floors default to B#F.
        }

        return map;
    }

    private static IReadOnlyList<string> ParseDungeonMusicMap(string path)
    {
        var songs = new List<string>();
        if (!File.Exists(path))
            return songs;

        var text = File.ReadAllText(path);
        var start = text.IndexOf("gDungeonMusic[", StringComparison.Ordinal);
        if (start < 0)
            return songs;
        var block = text[start..];
        var end = block.IndexOf("};", StringComparison.Ordinal);
        if (end > 0)
            block = block[..end];

        foreach (Match match in Regex.Matches(block, @"MUS_[A-Z0-9_]+"))
            songs.Add(match.Value);
        return songs;
    }
}

public sealed record DungeonLabels(
    NamedIdCatalog Monsters,
    NamedIdCatalog Traps,
    NamedIdCatalog Items,
    NamedIdCatalog Weather,
    NamedIdCatalog DungeonMusic,
    NamedIdCatalog Layouts,
    IReadOnlyList<string> DungeonMusicToSong)
{
    public static DungeonLabels Empty { get; } = new(
        new NamedIdCatalog([]),
        new NamedIdCatalog([]),
        new NamedIdCatalog([]),
        new NamedIdCatalog([]),
        new NamedIdCatalog([]),
        new NamedIdCatalog([]),
        []);
}
