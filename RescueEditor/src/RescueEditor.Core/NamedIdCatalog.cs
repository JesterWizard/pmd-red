using System.Globalization;

namespace RescueEditor.Core;

public sealed record NamedIdEntry(int Id, string Name);

/// <summary>Bidirectional id ↔ symbol catalog with prefix/substring search for autocomplete.</summary>
public sealed class NamedIdCatalog
{
    private readonly Dictionary<int, string> _idToName;
    private readonly Dictionary<string, int> _nameToId;
    private readonly List<NamedIdEntry> _entries;

    public NamedIdCatalog(IEnumerable<(int Id, string Name)> entries)
    {
        _idToName = new Dictionary<int, string>();
        _nameToId = new Dictionary<string, int>(StringComparer.OrdinalIgnoreCase);
        _entries = new List<NamedIdEntry>();
        foreach (var (id, name) in entries)
        {
            if (string.IsNullOrWhiteSpace(name))
                continue;
            _idToName.TryAdd(id, name);
            _nameToId[name] = id;
            _entries.Add(new NamedIdEntry(id, name));
        }

        _entries.Sort((a, b) =>
        {
            var byName = string.Compare(a.Name, b.Name, StringComparison.OrdinalIgnoreCase);
            return byName != 0 ? byName : a.Id.CompareTo(b.Id);
        });
    }

    public IReadOnlyList<NamedIdEntry> Entries => _entries;

    public bool TryGetName(int id, out string name) => _idToName.TryGetValue(id, out name!);

    public bool TryGetId(string name, out int id)
    {
        id = 0;
        return !string.IsNullOrWhiteSpace(name) && _nameToId.TryGetValue(name.Trim(), out id);
    }

    /// <summary>
    /// Returns matches ordered: exact (case-insensitive), then prefix, then substring.
    /// Empty/whitespace query returns the first <paramref name="limit"/> entries.
    /// </summary>
    public IReadOnlyList<NamedIdEntry> Search(string query, int limit = 20)
    {
        if (limit <= 0)
            return Array.Empty<NamedIdEntry>();

        if (string.IsNullOrWhiteSpace(query))
            return _entries.Take(limit).ToArray();

        var needle = query.Trim();
        var exact = new List<NamedIdEntry>();
        var prefix = new List<NamedIdEntry>();
        var substring = new List<NamedIdEntry>();
        foreach (var entry in _entries)
        {
            if (entry.Name.Equals(needle, StringComparison.OrdinalIgnoreCase))
                exact.Add(entry);
            else if (entry.Name.StartsWith(needle, StringComparison.OrdinalIgnoreCase))
                prefix.Add(entry);
            else if (entry.Name.Contains(needle, StringComparison.OrdinalIgnoreCase))
                substring.Add(entry);
        }

        return exact.Concat(prefix).Concat(substring).Take(limit).ToArray();
    }

    public string Format(int id) =>
        TryGetName(id, out var name) ? name : id.ToString(CultureInfo.InvariantCulture);
}
