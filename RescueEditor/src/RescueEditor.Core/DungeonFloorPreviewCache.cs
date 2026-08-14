using System.Text.Json;

namespace RescueEditor.Core;

public sealed class DungeonFloorCacheEntry
{
    public required string Fingerprint { get; init; }
    public required int Width { get; init; }
    public required int Height { get; init; }
    public required int FloorTileCount { get; init; }
    public required int RoomCount { get; init; }
}

/// <summary>Stable on-disk dungeon map previews keyed by generation inputs, not ROM SHA-1.</summary>
public static class DungeonFloorPreviewCache
{
    public const string ShippedFolderName = "dungeon-floors";

    private static readonly JsonSerializerOptions JsonOptions = new() { WriteIndented = false };

    public static string Fingerprint(DungeonFloorRecord floor, uint seed = DungeonFloorRenderer.DefaultSeed)
    {
        var p = floor.Properties;
        return string.Join(':',
            floor.DungeonId, floor.Floor, seed, p.Layout, p.RoomDensity, p.Tileset,
            p.FloorConnectivity, p.AllowDeadEnds ? 1 : 0, p.RoomFlags,
            p.KecleonShopChance, p.MazeRoomChance, p.NumExtraHallways, p.MonsterHouseChance);
    }

    public static string FileStem(DungeonFloorRecord floor, uint seed = DungeonFloorRenderer.DefaultSeed) =>
        $"{floor.DungeonId:D3}_{floor.Floor:D3}_s{seed}";

    public static string ShippedDirectory() =>
        Path.Combine(AppContext.BaseDirectory, ShippedFolderName);

    public static bool TryLoad(
        string directory,
        DungeonFloorRecord floor,
        uint seed,
        out DungeonFloorRenderResult? result)
    {
        result = null;
        if (string.IsNullOrWhiteSpace(directory))
            return false;
        var stem = Path.Combine(directory, FileStem(floor, seed));
        var pngPath = stem + ".png";
        var metaPath = stem + ".json";
        if (!File.Exists(pngPath) || !File.Exists(metaPath))
            return false;

        DungeonFloorCacheEntry? meta;
        try
        {
            meta = JsonSerializer.Deserialize<DungeonFloorCacheEntry>(File.ReadAllText(metaPath));
        }
        catch (JsonException)
        {
            return false;
        }

        if (meta is null || meta.Fingerprint != Fingerprint(floor, seed))
            return false;

        result = new DungeonFloorRenderResult
        {
            Png = File.ReadAllBytes(pngPath),
            Width = meta.Width,
            Height = meta.Height,
            FloorTileCount = meta.FloorTileCount,
            RoomCount = meta.RoomCount,
        };
        return true;
    }

    public static void Save(
        string directory,
        DungeonFloorRecord floor,
        uint seed,
        DungeonFloorRenderResult rendered)
    {
        Directory.CreateDirectory(directory);
        var stem = Path.Combine(directory, FileStem(floor, seed));
        File.WriteAllBytes(stem + ".png", rendered.Png);
        var meta = new DungeonFloorCacheEntry
        {
            Fingerprint = Fingerprint(floor, seed),
            Width = rendered.Width,
            Height = rendered.Height,
            FloorTileCount = rendered.FloorTileCount,
            RoomCount = rendered.RoomCount,
        };
        File.WriteAllText(stem + ".json", JsonSerializer.Serialize(meta, JsonOptions));
    }
}
