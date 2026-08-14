namespace RescueEditor.Core;

public sealed record DungeonContentRow(
    string Kind,
    int Id,
    string Name,
    int Level,
    int Weight,
    int RomOffset,
    int TableWords = 0);

public sealed class DungeonFloorContents
{
    public required IReadOnlyList<DungeonContentRow> Pokemon { get; init; }
    public required IReadOnlyList<DungeonContentRow> Items { get; init; }
    public required IReadOnlyList<DungeonContentRow> Traps { get; init; }
    public required string Music { get; init; }
    public required string Weather { get; init; }
    public required string Layout { get; init; }
    public required string Darkness { get; init; }
    public required int Tileset { get; init; }
    public required FloorPropertiesRecord Properties { get; init; }
    public int PropertiesOffset { get; init; }
    public int MonsterListOffset { get; init; }
    public int ItemListOffset { get; init; }
    public int ItemCompressedWords { get; init; }
    public int TrapListOffset { get; init; }

    public static DungeonFloorContents From(DungeonFloorRecord floor, DungeonLabels? labels = null)
    {
        labels ??= DungeonLabels.Empty;
        var pokemon = floor.Monsters
            .Where(m => m.Species > 0 && m.Weight != 0)
            .Select(m => new DungeonContentRow(
                "pokemon", m.Species, DungeonIndexer.PrettyMonster(m.Species, labels), m.Level, m.Weight, m.RomOffset))
            .ToArray();
        var items = floor.Items
            .Where(i => i.Weight != 0)
            .OrderByDescending(i => i.Weight)
            .Select(i => new DungeonContentRow(
                "item", i.ItemId, DungeonIndexer.PrettyItem(i.ItemId, labels), 0, i.Weight, i.TableOffset, i.CompressedWords))
            .ToArray();
        var traps = floor.Traps
            .Where(t => t.Threshold != 0)
            .Select(t => new DungeonContentRow(
                "trap", t.TrapId, DungeonIndexer.PrettyTrap(t.TrapId, labels), 0, t.Threshold, t.RomOffset))
            .ToArray();
        return new DungeonFloorContents
        {
            Pokemon = pokemon,
            Items = items,
            Traps = traps,
            Music = DungeonIndexer.ResolveMusic(floor.Properties.BgMusic, labels),
            Weather = DungeonIndexer.PrettyWeather(floor.Properties.Weather, labels),
            Layout = DungeonIndexer.PrettyLayout(floor.Properties.Layout, labels),
            Darkness = DungeonIndexer.PrettyDarkness(floor.Properties.VisibilityRange),
            Tileset = floor.Properties.Tileset,
            Properties = floor.Properties,
            PropertiesOffset = floor.PropertiesOffset,
            MonsterListOffset = floor.MonsterListOffset,
            ItemListOffset = floor.ItemListOffset,
            ItemCompressedWords = floor.ItemCompressedWords,
            TrapListOffset = floor.TrapListOffset,
        };
    }
}
