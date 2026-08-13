using System.Text;

namespace RescueEditor.Core;

public static class DungeonPreview
{
    public static PreviewContent Create(RomImage rom, AssetDescriptor asset, string? repositoryRoot = null)
    {
        repositoryRoot ??= CatalogBuilder.FindRepositoryRoot(rom.Path);
        var labels = DungeonIndexer.LoadLabels(repositoryRoot);
        var tables = DungeonMapParamTables.TryLoad(rom);
        var text = BuildText(rom, asset, tables, labels);
        DungeonFloorRecord? floor = null;
        if (int.TryParse(asset.Metadata.GetValueOrDefault("dungeonId"), out var dungeonId) &&
            tables is not null)
        {
            var floorNum = asset.Kind == AssetKind.DungeonFloor &&
                           int.TryParse(asset.Metadata.GetValueOrDefault("floor"), out var f)
                ? f
                : 1;
            floor = tables.TryReadFloor(rom, dungeonId, floorNum);
        }

        byte[]? png = null;
        if (floor is not null)
        {
            try
            {
                png = DungeonFloorRenderer.Render(rom, floor).Png;
            }
            catch
            {
                var tileset = floor.Properties.Tileset;
                png = DungeonShellPreview.TryRenderTileset(rom, tileset)?.Png;
            }
        }

        return new PreviewContent(asset.Name, Text: text, Png: png, MimeType: png is null ? null : "image/png");
    }

    private static string BuildText(
        RomImage rom,
        AssetDescriptor asset,
        DungeonMapParamTables? tables,
        DungeonLabels labels)
    {
        var builder = new StringBuilder();
        builder.AppendLine(asset.Name);
        if (!string.IsNullOrWhiteSpace(asset.Description))
            builder.AppendLine(asset.Description);
        builder.AppendLine();

        var floors = asset.Kind == AssetKind.Dungeon ? asset.Children : new[] { asset };
        foreach (var floorAsset in floors)
        {
            if (!int.TryParse(floorAsset.Metadata.GetValueOrDefault("dungeonId"), out var dungeonId) ||
                !int.TryParse(floorAsset.Metadata.GetValueOrDefault("floor"), out var floor) ||
                tables is null)
            {
                builder.AppendLine(floorAsset.Name);
                builder.AppendLine(floorAsset.Description ?? "");
                continue;
            }

            var record = tables.TryReadFloor(rom, dungeonId, floor);
            if (record is null)
                continue;

            var props = record.Properties;
            builder.AppendLine(floorAsset.Name);
            builder.AppendLine(
                $"  Tileset {props.Tileset} · Music {DungeonIndexer.ResolveMusic(props.BgMusic, labels)} · Weather {DungeonIndexer.PrettyWeather(props.Weather, labels)}");
            builder.AppendLine(
                $"  Layout {props.Layout} · Item density {props.ItemDensity} · Trap density {props.TrapDensity}");

            var wild = record.Monsters.Where(m => m.Weight != 0).ToArray();
            if (wild.Length > 0)
            {
                builder.Append("  Spawns: ");
                builder.AppendLine(string.Join(", ",
                    wild.Select(m => $"{DungeonIndexer.PrettyMonster(m.Species, labels)} Lv.{m.Level}")));
            }

            if (record.Traps.Any(t => t.Threshold != 0))
            {
                builder.Append("  Traps: ");
                builder.AppendLine(string.Join(", ",
                    record.Traps.Where(t => t.Threshold != 0).Select(t => DungeonIndexer.PrettyTrap(t.TrapId, labels))));
            }

            var items = record.Items.OrderByDescending(i => i.Weight).Take(8).ToArray();
            if (items.Length > 0)
            {
                builder.Append("  Items: ");
                builder.AppendLine(string.Join(", ",
                    items.Select(i => DungeonIndexer.PrettyItem(i.ItemId, labels))));
            }

            builder.AppendLine();
        }

        return builder.ToString().TrimEnd();
    }
}
