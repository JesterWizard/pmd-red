namespace RescueEditor.Core;

/// <summary>Line-comment toggle for the scene script editor (Ctrl+/).</summary>
public static class ScriptSourceComments
{
    public static string ToggleLines(string text, int startLine, int endLine)
    {
        var lines = text.Replace("\r\n", "\n").Replace('\r', '\n').Split('\n');
        if (lines.Length == 0)
            return text;

        startLine = Math.Clamp(startLine, 0, lines.Length - 1);
        endLine = Math.Clamp(endLine, startLine, lines.Length - 1);

        var selected = new List<int>();
        for (var i = startLine; i <= endLine; i++)
        {
            if (!string.IsNullOrWhiteSpace(lines[i]))
                selected.Add(i);
        }

        if (selected.Count == 0)
            return text;

        var uncomment = selected.All(i => IsCommentLine(lines[i]));
        foreach (var i in selected)
            lines[i] = uncomment ? Uncomment(lines[i]) : Comment(lines[i]);

        return string.Join('\n', lines);
    }

    private static bool IsCommentLine(string line)
    {
        var trimmed = line.TrimStart();
        return trimmed.StartsWith('#') || trimmed.StartsWith("//", StringComparison.Ordinal);
    }

    private static string Comment(string line)
    {
        if (IsCommentLine(line))
            return line;
        var indent = line.Length - line.TrimStart().Length;
        return string.Concat(line.AsSpan(0, indent), "# ", line.AsSpan(indent));
    }

    private static string Uncomment(string line)
    {
        var indent = line.Length - line.TrimStart().Length;
        var rest = line[indent..];
        if (rest.StartsWith("# ", StringComparison.Ordinal))
            return string.Concat(line.AsSpan(0, indent), rest.AsSpan(2));
        if (rest.StartsWith('#'))
            return string.Concat(line.AsSpan(0, indent), rest.AsSpan(1).TrimStart());
        if (rest.StartsWith("// ", StringComparison.Ordinal))
            return string.Concat(line.AsSpan(0, indent), rest.AsSpan(3));
        if (rest.StartsWith("//", StringComparison.Ordinal))
            return string.Concat(line.AsSpan(0, indent), rest.AsSpan(2).TrimStart());
        return line;
    }
}
