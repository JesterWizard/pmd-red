namespace RescueEditor.Core;

public enum NamedCatalogDeltaKind
{
    Added,
    Removed,
    Renamed,
    ValueChanged,
}

public sealed record NamedCatalogDelta(
    string Catalog,
    NamedCatalogDeltaKind Kind,
    int Id,
    string? EditorName,
    string? HeaderName);

/// <summary>Compare an in-memory editor catalog against names parsed from current decomp headers.</summary>
public static class NamedCatalogDiff
{
    public static IReadOnlyList<NamedCatalogDelta> Compare(
        string catalog,
        NamedIdCatalog editor,
        NamedIdCatalog header,
        bool includeAdded = true,
        bool includeRemoved = true)
    {
        var deltas = new List<NamedCatalogDelta>();
        foreach (var entry in editor.Entries)
        {
            if (header.TryGetId(entry.Name, out var headerId))
            {
                if (headerId != entry.Id)
                {
                    deltas.Add(new NamedCatalogDelta(
                        catalog, NamedCatalogDeltaKind.ValueChanged, headerId, entry.Name, entry.Name));
                }

                continue;
            }

            if (header.TryGetName(entry.Id, out var headerName))
            {
                deltas.Add(new NamedCatalogDelta(
                    catalog, NamedCatalogDeltaKind.Renamed, entry.Id, entry.Name, headerName));
                continue;
            }

            if (includeRemoved)
            {
                deltas.Add(new NamedCatalogDelta(
                    catalog, NamedCatalogDeltaKind.Removed, entry.Id, entry.Name, null));
            }
        }

        if (!includeAdded)
            return deltas;

        foreach (var entry in header.Entries)
        {
            if (editor.TryGetId(entry.Name, out _))
                continue;
            if (editor.TryGetName(entry.Id, out _))
                continue;
            deltas.Add(new NamedCatalogDelta(
                catalog, NamedCatalogDeltaKind.Added, entry.Id, null, entry.Name));
        }

        return deltas;
    }
}
