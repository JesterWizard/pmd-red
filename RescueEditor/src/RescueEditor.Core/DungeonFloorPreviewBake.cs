using System.Text.Json;

namespace RescueEditor.Core;

public sealed record DungeonFloorBakeResult(int Generated, int Skipped, int Total, int Failed = 0);

/// <summary>Compile-time / incremental bake of dungeon floor preview PNGs.</summary>
public static class DungeonFloorPreviewBake
{
    public static DungeonFloorBakeResult Run(
        RomImage rom,
        string outputDirectory,
        uint seed = DungeonFloorRenderer.DefaultSeed,
        IReadOnlyList<int>? dungeonIds = null)
    {
        Directory.CreateDirectory(outputDirectory);
        var tables = DungeonMapParamTables.TryLoad(rom);
        if (tables is null)
            return new DungeonFloorBakeResult(0, 0, 0);

        var floors = new List<DungeonFloorRecord>();
        var ids = dungeonIds ?? Enumerable.Range(0, DungeonIndexer.LastStoryDungeonId + 1);
        foreach (var dungeonId in ids)
        {
            var rawCount = DungeonBuiltinNames.TryGetDungeon(dungeonId, out var info)
                ? info.FloorCount
                : tables.CountFloors(rom, dungeonId);
            for (var floor = 1; floor < rawCount; floor++)
            {
                var record = tables.TryReadFloor(rom, dungeonId, floor);
                if (record is not null)
                    floors.Add(record);
            }
        }

        var generated = 0;
        var skipped = 0;
        var failed = 0;
        foreach (var record in floors)
        {
            if (DungeonFloorPreviewCache.TryLoad(outputDirectory, record, seed, out _))
            {
                skipped++;
                continue;
            }

            try
            {
                DungeonFloorRenderer.Render(rom, record, cacheDirectory: outputDirectory, seed, searchShipped: false);
                generated++;
            }
            catch (Exception)
            {
                failed++;
            }
        }

        var total = generated + skipped;
        var manifest = JsonSerializer.Serialize(new
        {
            floorCount = total,
            generated,
            skipped,
            failed,
            seed,
        });
        File.WriteAllText(Path.Combine(outputDirectory, "manifest.json"), manifest);
        return new DungeonFloorBakeResult(generated, skipped, total, failed);
    }
}
