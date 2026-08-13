using System.Text;

namespace RescueEditor.Core;

public enum SceneDiffKind
{
    EntityAdded,
    EntityRemoved,
    EntityMoved,
    EntityChanged,
    CommandAdded,
    CommandRemoved,
    CommandChanged,
    StationAdded,
    StationRemoved,
}

public sealed record SceneDiffFilter(int? Group = null, int? Sector = null);

public sealed record SceneDiffEntry(
    SceneDiffKind Kind,
    string Path,
    string Summary,
    string? Baseline = null,
    string? Current = null);

public sealed class SceneDiffReport
{
    public SceneDiffReport(IReadOnlyList<SceneDiffEntry> entries)
    {
        Entries = entries;
    }

    public IReadOnlyList<SceneDiffEntry> Entries { get; }
    public bool HasChanges => Entries.Count > 0;

    public string FormatText()
    {
        if (Entries.Count == 0)
            return "";
        var builder = new StringBuilder();
        foreach (var entry in Entries)
        {
            builder.Append(entry.Path);
            builder.Append("  ");
            builder.AppendLine(entry.Summary);
            if (entry.Baseline is not null)
                builder.AppendLine("  - " + entry.Baseline);
            if (entry.Current is not null)
                builder.AppendLine("  + " + entry.Current);
        }

        return builder.ToString();
    }
}

/// <summary>Structured baserom vs project diff for a scene (entities, stations, commands).</summary>
public static class SceneDiffBuilder
{
    public static SceneDiffReport Compare(
        Scene baseline,
        Scene current,
        SceneDiffFilter? filter = null,
        IReadOnlyDictionary<int, DialogueString>? baselineDialogue = null,
        IReadOnlyDictionary<int, DialogueString>? currentDialogue = null)
    {
        var entries = new List<SceneDiffEntry>();
        var baselineSectors = IndexSectors(baseline, filter);
        var currentSectors = IndexSectors(current, filter);
        foreach (var key in baselineSectors.Keys.Union(currentSectors.Keys).OrderBy(k => k.Group).ThenBy(k => k.Sector))
        {
            baselineSectors.TryGetValue(key, out var left);
            currentSectors.TryGetValue(key, out var right);
            DiffSector(entries, key, left, right, baselineDialogue, currentDialogue);
        }

        return new SceneDiffReport(entries);
    }

    public static SceneDiffReport Compare(
        SceneDatabase baseline,
        SceneDatabase current,
        int mapId,
        SceneDiffFilter? filter = null)
    {
        var left = baseline.FindScene(mapId);
        var right = current.FindScene(mapId);
        if (left is null && right is null)
            return new SceneDiffReport([]);
        if (left is null)
            return new SceneDiffReport([
                new SceneDiffEntry(SceneDiffKind.EntityAdded, $"map {mapId}", "Scene added in project"),
            ]);
        if (right is null)
            return new SceneDiffReport([
                new SceneDiffEntry(SceneDiffKind.EntityRemoved, $"map {mapId}", "Scene missing from project"),
            ]);
        return Compare(left, right, filter, baseline.DialogueByOffset, current.DialogueByOffset);
    }

    private readonly record struct SectorKey(int Group, int Sector);

    private static Dictionary<SectorKey, SceneSector> IndexSectors(Scene scene, SceneDiffFilter? filter)
    {
        var result = new Dictionary<SectorKey, SceneSector>();
        foreach (var group in scene.Groups)
        {
            if (filter?.Group is int wantGroup && group.Index != wantGroup)
                continue;
            foreach (var sector in group.Sectors)
            {
                if (filter?.Sector is int wantSector && sector.Sector != wantSector)
                    continue;
                result[new SectorKey(group.Index, sector.Sector)] = sector;
            }
        }

        return result;
    }

    private static void DiffSector(
        List<SceneDiffEntry> entries,
        SectorKey key,
        SceneSector? baseline,
        SceneSector? current,
        IReadOnlyDictionary<int, DialogueString>? baselineDialogue,
        IReadOnlyDictionary<int, DialogueString>? currentDialogue)
    {
        DiffEntities(entries, key, "live", baseline?.Lives, current?.Lives);
        DiffEntities(entries, key, "object", baseline?.Objects, current?.Objects);
        DiffEntities(entries, key, "effect", baseline?.Effects, current?.Effects);
        DiffEntities(entries, key, "event", baseline?.Events, current?.Events);
        DiffStations(entries, key, baseline?.Stations, current?.Stations, baselineDialogue, currentDialogue);

        if (baseline is not null && current is not null)
        {
            foreach (var (left, right) in PairEntities(baseline.Lives, current.Lives))
            {
                if (left is null || right is null)
                    continue;
                DiffEntityScripts(entries, EntityPath(key, "live", right), left, right, baselineDialogue, currentDialogue);
            }

            foreach (var (left, right) in PairEntities(baseline.Events, current.Events))
            {
                if (left?.EventScript is null && right?.EventScript is null)
                    continue;
                DiffCommandList(
                    entries,
                    $"{EntityPath(key, "event", right ?? left!)} script",
                    left?.EventScript?.Commands ?? [],
                    right?.EventScript?.Commands ?? [],
                    baselineDialogue,
                    currentDialogue);
            }
        }
    }

    private static void DiffEntities(
        List<SceneDiffEntry> entries,
        SectorKey key,
        string kind,
        IReadOnlyList<SceneEntity>? baseline,
        IReadOnlyList<SceneEntity>? current)
    {
        foreach (var (left, right) in PairEntities(baseline, current))
        {
            if (left is null && right is not null)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.EntityAdded,
                    EntityPath(key, kind, right),
                    $"added {DescribeEntity(right)} at {FormatPos(right.Position)}"));
                continue;
            }

            if (left is not null && right is null)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.EntityRemoved,
                    EntityPath(key, kind, left),
                    $"removed {DescribeEntity(left)} at {FormatPos(left.Position)}"));
                continue;
            }

            if (left is null || right is null)
                continue;

            var path = EntityPath(key, kind, right);
            if (left.Position != right.Position)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.EntityMoved,
                    path,
                    $"{DescribeEntity(right)} moved {FormatPos(left.Position)} → {FormatPos(right.Position)}",
                    FormatPos(left.Position),
                    FormatPos(right.Position)));
            }

            if (left.TypeId != right.TypeId ||
                left.DirectionOrFlags != right.DirectionOrFlags ||
                left.Width != right.Width ||
                left.Height != right.Height)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.EntityChanged,
                    path,
                    $"{DescribeEntity(left)} → {DescribeEntity(right)}",
                    DescribeEntity(left),
                    DescribeEntity(right)));
            }
        }
    }

    private static void DiffEntityScripts(
        List<SceneDiffEntry> entries,
        string entityPath,
        SceneEntity baseline,
        SceneEntity current,
        IReadOnlyDictionary<int, DialogueString>? baselineDialogue,
        IReadOnlyDictionary<int, DialogueString>? currentDialogue)
    {
        var slots = Math.Max(baseline.Scripts.Count, current.Scripts.Count);
        for (var slot = 0; slot < slots; slot++)
        {
            var left = slot < baseline.Scripts.Count ? baseline.Scripts[slot].Commands : [];
            var right = slot < current.Scripts.Count ? current.Scripts[slot].Commands : [];
            DiffCommandList(
                entries,
                $"{entityPath} dlg{slot}",
                left,
                right,
                baselineDialogue,
                currentDialogue);
        }
    }

    private static void DiffStations(
        List<SceneDiffEntry> entries,
        SectorKey key,
        IReadOnlyList<ScriptRefData>? baseline,
        IReadOnlyList<ScriptRefData>? current,
        IReadOnlyDictionary<int, DialogueString>? baselineDialogue,
        IReadOnlyDictionary<int, DialogueString>? currentDialogue)
    {
        var leftCount = baseline?.Count ?? 0;
        var rightCount = current?.Count ?? 0;
        var count = Math.Max(leftCount, rightCount);
        for (var i = 0; i < count; i++)
        {
            var left = i < leftCount ? baseline![i] : null;
            var right = i < rightCount ? current![i] : null;
            var path = StationPath(key, i, right ?? left);
            if (left is null && right is not null)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.StationAdded,
                    path,
                    $"station added ({right.Commands.Count} cmds)"));
                DiffCommandList(entries, path, [], right.Commands, baselineDialogue, currentDialogue);
                continue;
            }

            if (left is not null && right is null)
            {
                entries.Add(new SceneDiffEntry(
                    SceneDiffKind.StationRemoved,
                    path,
                    $"station removed ({left.Commands.Count} cmds)"));
                continue;
            }

            if (left is null || right is null)
                continue;
            DiffCommandList(entries, path, left.Commands, right.Commands, baselineDialogue, currentDialogue);
        }
    }

    private static void DiffCommandList(
        List<SceneDiffEntry> entries,
        string path,
        IReadOnlyList<ScriptCommandData> baseline,
        IReadOnlyList<ScriptCommandData> current,
        IReadOnlyDictionary<int, DialogueString>? baselineDialogue,
        IReadOnlyDictionary<int, DialogueString>? currentDialogue)
    {
        var left = baseline.Select(c => ScriptSource.FormatCommand(c, baselineDialogue)).ToArray();
        var right = current.Select(c => ScriptSource.FormatCommand(c, currentDialogue)).ToArray();
        if (left.SequenceEqual(right, StringComparer.Ordinal))
            return;

        var ops = LineDiff(left, right);
        foreach (var op in ops)
        {
            switch (op.Kind)
            {
                case SceneDiffKind.CommandChanged:
                    entries.Add(new SceneDiffEntry(
                        SceneDiffKind.CommandChanged,
                        path,
                        $"cmd[{op.Index}] {op.Left} → {op.Right}",
                        op.Left,
                        op.Right));
                    break;
                case SceneDiffKind.CommandAdded:
                    entries.Add(new SceneDiffEntry(
                        SceneDiffKind.CommandAdded,
                        path,
                        $"cmd[{op.Index}] + {op.Right}",
                        Current: op.Right));
                    break;
                case SceneDiffKind.CommandRemoved:
                    entries.Add(new SceneDiffEntry(
                        SceneDiffKind.CommandRemoved,
                        path,
                        $"cmd[{op.Index}] - {op.Left}",
                        Baseline: op.Left));
                    break;
            }
        }
    }

    private readonly record struct LineOp(SceneDiffKind Kind, int Index, string? Left, string? Right);

    private static List<LineOp> LineDiff(IReadOnlyList<string> left, IReadOnlyList<string> right)
    {
        var n = left.Count;
        var m = right.Count;
        var lcs = new int[n + 1, m + 1];
        for (var i = n - 1; i >= 0; i--)
        {
            for (var j = m - 1; j >= 0; j--)
            {
                lcs[i, j] = left[i] == right[j]
                    ? lcs[i + 1, j + 1] + 1
                    : Math.Max(lcs[i + 1, j], lcs[i, j + 1]);
            }
        }

        var ops = new List<LineOp>();
        var a = 0;
        var b = 0;
        while (a < n && b < m)
        {
            if (left[a] == right[b])
            {
                a++;
                b++;
                continue;
            }

            if (lcs[a + 1, b] >= lcs[a, b + 1])
            {
                if (a + 1 < n && left[a + 1] != right[b] && lcs[a, b + 1] == lcs[a + 1, b])
                {
                    ops.Add(new LineOp(SceneDiffKind.CommandChanged, b, left[a], right[b]));
                    a++;
                    b++;
                }
                else
                {
                    ops.Add(new LineOp(SceneDiffKind.CommandRemoved, a, left[a], null));
                    a++;
                }
            }
            else
            {
                ops.Add(new LineOp(SceneDiffKind.CommandAdded, b, null, right[b]));
                b++;
            }
        }

        while (a < n)
        {
            ops.Add(new LineOp(SceneDiffKind.CommandRemoved, a, left[a], null));
            a++;
        }

        while (b < m)
        {
            ops.Add(new LineOp(SceneDiffKind.CommandAdded, b, null, right[b]));
            b++;
        }

        return ops;
    }

    private static List<(SceneEntity? Left, SceneEntity? Right)> PairEntities(
        IReadOnlyList<SceneEntity>? baseline,
        IReadOnlyList<SceneEntity>? current)
    {
        var left = (baseline ?? []).ToList();
        var right = (current ?? []).ToList();
        var pairs = new List<(SceneEntity?, SceneEntity?)>();
        var usedRight = new bool[right.Count];

        for (var i = 0; i < left.Count; i++)
        {
            var match = -1;
            if (left[i].RomOffset >= 0)
            {
                for (var j = 0; j < right.Count; j++)
                {
                    if (!usedRight[j] && right[j].RomOffset == left[i].RomOffset)
                    {
                        match = j;
                        break;
                    }
                }
            }

            if (match < 0 && left[i].RomOffset < 0)
            {
                for (var j = 0; j < right.Count; j++)
                {
                    if (!usedRight[j] && right[j].RomOffset < 0 && right[j].Index == left[i].Index)
                    {
                        match = j;
                        break;
                    }
                }
            }

            if (match >= 0)
            {
                usedRight[match] = true;
                pairs.Add((left[i], right[match]));
            }
            else
            {
                pairs.Add((left[i], null));
            }
        }

        for (var j = 0; j < right.Count; j++)
        {
            if (!usedRight[j])
                pairs.Add((null, right[j]));
        }

        return pairs;
    }

    private static string EntityPath(SectorKey key, string kind, SceneEntity entity) =>
        $"g{key.Group}/s{key.Sector} {kind}[{entity.Index}]";

    private static string StationPath(SectorKey key, int index, ScriptRefData? station)
    {
        var name = station is { Name.Length: > 0 } ? $" {station.Name}" : "";
        return $"@station g{key.Group}/s{key.Sector}.{index}{name}";
    }

    private static string DescribeEntity(SceneEntity entity)
    {
        if (!string.IsNullOrWhiteSpace(entity.DisplayName))
            return entity.DisplayName;
        return $"{entity.Kind} {entity.TypeId}";
    }

    private static string FormatPos(CompactPos pos) => $"({pos.XTiles},{pos.YTiles})";
}
