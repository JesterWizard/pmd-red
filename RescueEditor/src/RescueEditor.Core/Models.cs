using System.Collections.ObjectModel;

namespace RescueEditor.Core;

public enum AssetCategory
{
    Dialogue,
    Scripts,
    Portraits,
    Backgrounds,
    Effects,
    GroundMaps,
    Sound,
    RawArchives,
}

public enum AssetKind
{
    Raw,
    KaoPortrait,
    TitleBackground,
    Effect,
    GroundFile,
    GroundMap,
    Dialogue,
    Script,
    SoundWave,
    SoundSong,
}

public sealed class AssetDescriptor
{
    public required string Id { get; init; }
    public required string Name { get; init; }
    public required AssetCategory Category { get; init; }
    public required AssetKind Kind { get; init; }
    public int Offset { get; init; } = -1;
    public int Size { get; init; }
    public int AuxiliaryOffset { get; init; } = -1;
    public int AuxiliarySize { get; init; }
    public string Format { get; init; } = "raw";
    public string? SourcePath { get; init; }
    public string? Description { get; init; }
    public IReadOnlyDictionary<string, string> Metadata { get; init; } =
        new ReadOnlyDictionary<string, string>(new Dictionary<string, string>());

    public bool HasRomRange => Offset >= 0 && Size > 0;

    public string DisplayName => Kind switch
    {
        AssetKind.Dialogue => Name,
        AssetKind.Script when !string.IsNullOrWhiteSpace(Description) =>
            $"{Name}: {Truncate(Description!, 80)}",
        _ => Name,
    };

    public string ListSubtitle => Kind switch
    {
        AssetKind.Dialogue when !string.IsNullOrWhiteSpace(Description) =>
            Truncate(Description!, 96),
        _ => Description ?? Format,
    };

    public override string ToString() => DisplayName;

    private static string Truncate(string text, int max)
    {
        text = text.Replace('\n', ' ').Trim();
        return text.Length <= max ? text : text[..(max - 1)] + "…";
    }
}

public sealed class AssetCatalog
{
    private readonly List<AssetDescriptor> _assets = new();

    public IReadOnlyList<AssetDescriptor> Assets => _assets;
    public IReadOnlyList<string> Diagnostics { get; private set; } = Array.Empty<string>();

    public void Add(AssetDescriptor asset)
    {
        _assets.Add(asset);
    }

    public void AddRange(IEnumerable<AssetDescriptor> assets)
    {
        _assets.AddRange(assets);
    }

    public IReadOnlyList<AssetDescriptor> ForCategory(AssetCategory category)
    {
        var items = _assets.Where(asset => asset.Category == category);
        return category switch
        {
            AssetCategory.Dialogue or AssetCategory.Scripts =>
                items.OrderBy(asset => asset.Offset).ThenBy(asset => asset.Name).ToArray(),
            AssetCategory.Portraits =>
                items.OrderBy(asset => asset.Metadata.GetValueOrDefault("species", asset.Name),
                        StringComparer.OrdinalIgnoreCase)
                    .ThenBy(asset => asset.Metadata.GetValueOrDefault("emotion", asset.Name),
                        StringComparer.OrdinalIgnoreCase)
                    .ToArray(),
            AssetCategory.GroundMaps =>
                items.OrderBy(asset => asset.Name, StringComparer.OrdinalIgnoreCase)
                    .ThenBy(asset => asset.Metadata.GetValueOrDefault("romName", asset.Name),
                        StringComparer.OrdinalIgnoreCase)
                    .ToArray(),
            _ => items.OrderBy(asset => asset.Name, StringComparer.OrdinalIgnoreCase).ToArray(),
        };
    }

    public void SetDiagnostics(IEnumerable<string> diagnostics)
    {
        Diagnostics = diagnostics.ToArray();
    }
}

public sealed record PreviewContent(
    string Title,
    string? Text = null,
    byte[]? Png = null,
    string? MimeType = null)
{
    public bool IsImage => Png is not null;
}

public sealed record RomInfo(
    string Path,
    int Length,
    string Sha1,
    bool IsKnownRetailRom);
