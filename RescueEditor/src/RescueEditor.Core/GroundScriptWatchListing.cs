using System.Runtime.CompilerServices;
using System.Text;

namespace RescueEditor.Core;

/// <summary>Readable Scene Play watch dump: header (live waits/cues) plus full command listings.</summary>
public sealed class GroundScriptWatchDocument
{
    public required string Header { get; init; }
    public required string Body { get; init; }
    public required string HeaderKey { get; init; }
    public required string BodyKey { get; init; }
    public IReadOnlyList<int> HighlightLines { get; init; } = [];
    public int ScrollLine { get; init; } = 1;
}

public static class GroundScriptWatchListing
{
    public static string FormatHeader(GroundScriptWatchState watch)
    {
        var headerLines = new List<string>
        {
            watch.Paused ? "paused" : "running",
        };
        if (watch.CurrentActor is { } cur)
            headerLines.Add($"current {cur.Name} npc={cur.NpcId} idx={cur.Index} {cur.OpcodeName}");
        if (watch.Cues.Count > 0)
            headerLines.Add("cues [" + string.Join(',', watch.Cues) + "]");
        if (watch.Locals.Count > 0)
            headerLines.Add("locals " + string.Join(' ', watch.Locals.Select(kv => $"{kv.Key}={kv.Value}")));
        if (!string.IsNullOrEmpty(watch.LastTransfer))
            headerLines.Add("last " + watch.LastTransfer);
        foreach (var actor in watch.Actors)
        {
            var done = actor.Done ? " done" : "";
            headerLines.Add(
                $"{actor.Name}  wait={actor.WaitFrames} await={actor.AwaitCueId?.ToString() ?? "-"} depth={actor.CallDepth}{done}");
        }

        return string.Join('\n', headerLines);
    }

    public static string BodyKey(GroundScriptWatchState watch)
    {
        var key = new StringBuilder();
        foreach (var actor in watch.Actors)
        {
            key.Append('|').Append(actor.Name).Append(':').Append(actor.Index)
                .Append(':').Append(actor.Done ? 1 : 0)
                .Append(':').Append(actor.Commands.Count)
                .Append(':').Append(RuntimeHelpers.GetHashCode(actor.Commands));
        }

        return key.ToString();
    }

    public static GroundScriptWatchDocument Build(GroundScriptWatchState watch)
    {
        var headerText = FormatHeader(watch);
        var bodyLines = new List<string>();
        var highlights = new List<int>();
        var scrollLine = 1;
        var currentName = watch.CurrentActor?.Name;

        for (var a = 0; a < watch.Actors.Count; a++)
        {
            var actor = watch.Actors[a];
            if (a > 0)
                bodyLines.Add(string.Empty);

            var header = $"@{actor.Name}  npc={actor.NpcId}";
            if (actor.BranchKind is not null)
                header += $"  {actor.BranchKind}→{actor.BranchTargetIndex?.ToString() ?? "?"}";
            bodyLines.Add(header);

            for (var i = 0; i < actor.Commands.Count; i++)
            {
                var current = i == actor.Index && !actor.Done;
                var marker = current ? '>' : ' ';
                if (current)
                {
                    var line = bodyLines.Count + 1;
                    highlights.Add(line);
                    if (currentName is null ||
                        string.Equals(currentName, actor.Name, StringComparison.Ordinal))
                        scrollLine = line;
                }

                bodyLines.Add($"{marker}{i,3}  {ScriptSource.FormatCommand(actor.Commands[i])}");
            }

            if (actor.Done || actor.Index >= actor.Commands.Count)
            {
                bodyLines.Add(">eof");
                highlights.Add(bodyLines.Count);
            }
        }

        return new GroundScriptWatchDocument
        {
            Header = headerText,
            Body = string.Join('\n', bodyLines),
            HeaderKey = headerText,
            BodyKey = BodyKey(watch),
            HighlightLines = highlights,
            ScrollLine = Math.Max(1, scrollLine),
        };
    }
}
