using System.Text;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ParallelCatalogBuildTests
{
    [Fact]
    public void ParallelBuildMatchesSequentialBuild()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;
        var rom = RomImage.Open(baserom);

        var seq = CatalogBuilder.Build(rom, parallel: false);
        var par = CatalogBuilder.Build(rom, parallel: true);

        Assert.Equal(Fingerprint(seq.Catalog, seq.Scenes), Fingerprint(par.Catalog, par.Scenes));
    }

    [Fact]
    public void ParallelSceneParseMatchesSequential()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;
        var rom = RomImage.Open(baserom);

        var seq = SceneGraphParser.Parse(rom, RomProfile.Us10, parallel: false);
        var par = SceneGraphParser.Parse(rom, RomProfile.Us10, parallel: true);

        Assert.Equal(Fingerprint(new AssetCatalog(), seq), Fingerprint(new AssetCatalog(), par));
    }

    private static string Fingerprint(AssetCatalog catalog, SceneDatabase scenes)
    {
        var builder = new StringBuilder();

        foreach (var a in catalog.Assets)
        {
            builder.Append($"{a.Id}|{a.Name}|{a.Category}|{a.Kind}|{a.Offset}|{a.Size}|{a.Description}|");
            builder.Append(string.Join(",", a.Metadata
                .OrderBy(kv => kv.Key, StringComparer.Ordinal)
                .Select(kv => kv.Key + "=" + kv.Value)));
            builder.Append('\n');
        }

        foreach (var scene in scenes.Scenes)
        {
            builder.Append($"{scene.MapId}|{scene.HeaderOffset}|{scene.Groups.Count}|{scene.Links.Count}|");
            foreach (var group in scene.Groups)
            {
                foreach (var sector in group.Sectors)
                {
                    var stationCommands = sector.Stations.Sum(station => station.Commands.Count);
                    builder.Append(
                        $"[{sector.Lives.Count},{sector.Objects.Count},{sector.Effects.Count}," +
                        $"{sector.Events.Count},{sector.Stations.Count},{stationCommands}]");
                }
            }
            builder.Append('\n');
        }

        foreach (var kv in scenes.DialogueByOffset.OrderBy(kv => kv.Key))
        {
            builder.Append(
                $"{kv.Key}|{kv.Value.Size}|{kv.Value.Text}|{string.Join(",", kv.Value.ReferencedByCommands)}");
            builder.Append('\n');
        }

        foreach (var line in scenes.Diagnostics)
            builder.Append(line).Append('\n');
        foreach (var line in catalog.Diagnostics)
            builder.Append(line).Append('\n');

        return builder.ToString();
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
