using System.Globalization;
using System.Text;

namespace RescueEditor.Core;

public sealed class NamedConstantResyncResult
{
    public bool Ok { get; init; }
    public string? Error { get; init; }
    public string RepositoryRoot { get; init; } = "";
    public IReadOnlyList<string> LoadedSources { get; init; } = [];
    public IReadOnlyList<string> MissingSources { get; init; } = [];
    public ScriptNamedDefinitions? Names { get; init; }
    public DataTableLabels Tables { get; init; } = DataTableLabels.Empty;
    public NamedIdCatalog Opcodes { get; init; } = new([]);
    public IReadOnlyList<NamedCatalogDelta> Deltas { get; init; } = [];
    public string Summary { get; init; } = "";
}

/// <summary>
/// Reloads <see cref="NamedIdCatalog"/> tables from decomp headers and reports stale editor names.
/// </summary>
public static class NamedConstantResync
{
    public static string? TryFindRepositoryRoot(string? preferredRoot = null)
    {
        foreach (var root in ScriptNamedDefinitions.CandidateRepositoryRoots(preferredRoot))
        {
            if (File.Exists(NamedConstantSources.Combine(root, NamedConstantSources.BgMusic)) ||
                File.Exists(NamedConstantSources.Combine(root, NamedConstantSources.DataScript)))
                return root;
        }

        return null;
    }

    public static NamedConstantResyncResult Run(
        string? repositoryRoot,
        ScriptNamedDefinitions? previous = null)
    {
        if (string.IsNullOrWhiteSpace(repositoryRoot) || !Directory.Exists(repositoryRoot))
        {
            return new NamedConstantResyncResult
            {
                Ok = false,
                Error = "Repository root was not found.",
                Summary = "Resync failed: repository root was not found.",
            };
        }

        var loaded = new List<string>();
        var missing = new List<string>();
        foreach (var relative in NamedConstantSources.All)
        {
            if (File.Exists(NamedConstantSources.Combine(repositoryRoot, relative)))
                loaded.Add(relative);
            else
                missing.Add(relative);
        }

        var names = ScriptNamedDefinitions.TryLoadFromRepository(repositoryRoot);
        var tables = DataTableIndexer.LoadLabels(repositoryRoot);
        var opcodes = names?.Opcodes ?? new NamedIdCatalog([]);
        var previousNames = previous ?? EmptyNames();
        var deltas = new List<NamedCatalogDelta>();
        deltas.AddRange(NamedCatalogDiff.Compare("Music", previousNames.Music, names?.Music ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("Fanfare", previousNames.Fanfare, names?.Fanfare ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("Map", previousNames.Map, names?.Map ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("Emotion", previousNames.Emotion, names?.Emotion ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("UpdateName", previousNames.UpdateName, names?.UpdateName ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("ObjFlag", previousNames.ObjFlag, names?.ObjFlag ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("EmotionEffect", previousNames.EmotionEffect, names?.EmotionEffect ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("Direction", previousNames.Direction, names?.Direction ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("DirTrans", previousNames.DirTrans, names?.DirTrans ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("Placement", previousNames.Placement, names?.Placement ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("GroundAnim", previousNames.GroundAnim, names?.GroundAnim ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("ScriptId", previousNames.ScriptId, names?.ScriptId ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare("PaletteUtil", previousNames.PaletteUtil, names?.PaletteUtil ?? EmptyCatalog()));
        deltas.AddRange(NamedCatalogDiff.Compare(
            "Opcode",
            ScriptOpcodeNames.BuiltInCatalog,
            opcodes,
            includeAdded: false,
            includeRemoved: false));
        deltas.AddRange(DiffOpcodeDocs(opcodes));

        var summary = BuildSummary(repositoryRoot, loaded.Count, deltas);
        return new NamedConstantResyncResult
        {
            Ok = true,
            RepositoryRoot = repositoryRoot,
            LoadedSources = loaded,
            MissingSources = missing,
            Names = names,
            Tables = tables,
            Opcodes = opcodes,
            Deltas = deltas,
            Summary = summary,
        };
    }

    private static IReadOnlyList<NamedCatalogDelta> DiffOpcodeDocs(NamedIdCatalog header)
    {
        var deltas = new List<NamedCatalogDelta>();
        foreach (var op in ScriptOpcodeNames.NamedOpcodes)
        {
            if (!header.TryGetName(op, out var headerName))
                continue;
            if (!ScriptCommandDocs.TryGet(op, out var doc))
                continue;
            if (doc.Name.Equals(headerName, StringComparison.OrdinalIgnoreCase))
                continue;
            deltas.Add(new NamedCatalogDelta(
                "OpcodeDocs", NamedCatalogDeltaKind.Renamed, op, doc.Name, headerName));
        }

        return deltas;
    }

    private static string BuildSummary(
        string repositoryRoot,
        int loadedCount,
        IReadOnlyList<NamedCatalogDelta> deltas)
    {
        var builder = new StringBuilder();
        builder.Append("Resynced ")
            .Append(loadedCount.ToString(CultureInfo.InvariantCulture))
            .Append(" source(s) from ")
            .Append(repositoryRoot)
            .Append('.');
        if (deltas.Count == 0)
        {
            builder.Append(" Catalogs match headers.");
            return builder.ToString();
        }

        var renamed = 0;
        var added = 0;
        var removed = 0;
        var valueChanged = 0;
        foreach (var delta in deltas)
        {
            switch (delta.Kind)
            {
                case NamedCatalogDeltaKind.Renamed: renamed++; break;
                case NamedCatalogDeltaKind.Added: added++; break;
                case NamedCatalogDeltaKind.Removed: removed++; break;
                case NamedCatalogDeltaKind.ValueChanged: valueChanged++; break;
            }
        }

        builder.Append(' ')
            .Append(deltas.Count.ToString(CultureInfo.InvariantCulture))
            .Append(" catalog change(s) (");
        var parts = new List<string>();
        if (renamed > 0)
            parts.Add($"{renamed} renamed");
        if (added > 0)
            parts.Add($"{added} added");
        if (removed > 0)
            parts.Add($"{removed} removed");
        if (valueChanged > 0)
            parts.Add($"{valueChanged} value-changed");
        builder.Append(string.Join(", ", parts)).Append(").");
        return builder.ToString();
    }

    private static NamedIdCatalog EmptyCatalog() => new([]);

    private static ScriptNamedDefinitions EmptyNames() => new()
    {
        Music = EmptyCatalog(),
        Fanfare = EmptyCatalog(),
        Map = EmptyCatalog(),
        Emotion = EmptyCatalog(),
        UpdateName = EmptyCatalog(),
        ObjFlag = EmptyCatalog(),
        EmotionEffect = EmptyCatalog(),
        Direction = EmptyCatalog(),
        DirTrans = EmptyCatalog(),
        Placement = EmptyCatalog(),
        GroundAnim = EmptyCatalog(),
        ScriptId = EmptyCatalog(),
        PaletteUtil = EmptyCatalog(),
        Opcodes = EmptyCatalog(),
    };
}
