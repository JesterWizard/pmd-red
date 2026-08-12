namespace RescueEditor.Core;

/// <summary>
/// Collapses per-emotion KAO portraits into one catalog entry per Pokémon (emotion sheet).
/// </summary>
public static class PortraitSheetGrouping
{
    public static IReadOnlyList<AssetDescriptor> GroupBySpecies(IEnumerable<AssetDescriptor> portraits)
    {
        return portraits
            .Where(p => p.Kind == AssetKind.KaoPortrait)
            .GroupBy(
                p => p.Metadata.GetValueOrDefault("species", p.Name),
                StringComparer.OrdinalIgnoreCase)
            .OrderBy(g => g.Key, StringComparer.OrdinalIgnoreCase)
            .Select(CreateSheet)
            .ToArray();
    }

    private static AssetDescriptor CreateSheet(IGrouping<string, AssetDescriptor> group)
    {
        var emotions = group.ToArray();
        var first = emotions[0];
        var species = group.Key;
        return new AssetDescriptor
        {
            Id = $"portrait-sheet:{species}",
            Name = species,
            Category = AssetCategory.Portraits,
            Kind = AssetKind.KaoPortraitSheet,
            Offset = first.Offset,
            Size = first.Size,
            AuxiliaryOffset = first.AuxiliaryOffset,
            AuxiliarySize = first.AuxiliarySize,
            Format = "KAO emotion sheet",
            SourcePath = first.SourcePath,
            Description = $"{emotions.Length} emotion{(emotions.Length == 1 ? "" : "s")}",
            Children = emotions,
            Metadata = new Dictionary<string, string>
            {
                ["species"] = species,
                ["emotionCount"] = emotions.Length.ToString(),
            },
        };
    }
}
