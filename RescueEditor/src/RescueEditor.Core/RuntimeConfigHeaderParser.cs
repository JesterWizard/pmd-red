using System.Text;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>One <c>u8</c> member of <c>RuntimeConfig</c> from <c>include/runtime.h</c>.</summary>
public sealed record RuntimeConfigHeaderField(string Id, string Comment, int Offset);

/// <summary>
/// Parses <c>typedef struct { ... } RuntimeConfig</c> from <c>include/runtime.h</c>.
/// Field order here is the binary layout RescueTemple must mirror.
/// </summary>
public static class RuntimeConfigHeaderParser
{
    private static readonly Regex StructBlockRegex = new(
        @"typedef\s+struct\s*\{(?<body>.*?)\}\s*RuntimeConfig\s*;",
        RegexOptions.Compiled | RegexOptions.Singleline);

    private static readonly Regex FieldRegex = new(
        @"^\s*u8\s+(?<id>[A-Za-z_][A-Za-z0-9_]*)\s*;\s*(?:/\*\s*(?<inline>.*?)\s*\*/)?\s*$",
        RegexOptions.Compiled | RegexOptions.Multiline);

    public const string RelativePath = "include/runtime.h";

    public static IReadOnlyList<RuntimeConfigHeaderField> Parse(string headerText)
    {
        ArgumentNullException.ThrowIfNull(headerText);
        var match = StructBlockRegex.Match(headerText);
        if (!match.Success)
            throw new InvalidDataException("Could not find typedef struct RuntimeConfig in header text.");

        var body = match.Groups["body"].Value;
        var fields = new List<RuntimeConfigHeaderField>();
        var pendingComment = new StringBuilder();

        foreach (var rawLine in body.Split('\n'))
        {
            var line = rawLine.TrimEnd('\r');
            var trimmed = line.Trim();
            if (trimmed.Length == 0)
                continue;

            if (trimmed.StartsWith("/*", StringComparison.Ordinal))
            {
                AppendCommentLine(pendingComment, trimmed);
                continue;
            }

            if (trimmed.StartsWith("*", StringComparison.Ordinal) && !trimmed.StartsWith("*/", StringComparison.Ordinal))
            {
                AppendCommentLine(pendingComment, trimmed);
                if (trimmed.Contains("*/", StringComparison.Ordinal))
                    continue;
                continue;
            }

            var fieldMatch = FieldRegex.Match(line);
            if (!fieldMatch.Success)
            {
                if (trimmed.StartsWith("//", StringComparison.Ordinal))
                    continue;
                pendingComment.Clear();
                continue;
            }

            var id = fieldMatch.Groups["id"].Value;
            var inline = fieldMatch.Groups["inline"].Success
                ? CleanComment(fieldMatch.Groups["inline"].Value)
                : string.Empty;
            var block = CleanComment(pendingComment.ToString());
            pendingComment.Clear();

            var comment = inline.Length > 0 ? inline : block;
            fields.Add(new RuntimeConfigHeaderField(id, comment, fields.Count));
        }

        if (fields.Count == 0)
            throw new InvalidDataException("RuntimeConfig struct contained no u8 fields.");

        return fields;
    }

    public static IReadOnlyList<RuntimeConfigHeaderField> ParseFile(string path) =>
        Parse(File.ReadAllText(path));

    public static string? TryFindHeaderPath(string? startDirectory = null)
    {
        foreach (var start in CandidateRoots(startDirectory))
        {
            var dir = new DirectoryInfo(start);
            while (dir is not null)
            {
                var candidate = Path.Combine(dir.FullName, RelativePath);
                if (File.Exists(candidate))
                    return candidate;
                dir = dir.Parent;
            }
        }

        return null;
    }

    public static RuntimeConfigSchemaSyncResult CompareToSchema(
        IReadOnlyList<RuntimeConfigHeaderField> headerFields,
        IReadOnlyList<RuntimeConfigFieldDef> schemaFields)
    {
        ArgumentNullException.ThrowIfNull(headerFields);
        ArgumentNullException.ThrowIfNull(schemaFields);

        var headerIds = headerFields.Select(f => f.Id).ToArray();
        var schemaIds = schemaFields.Select(f => f.Id).ToArray();
        var missingInSchema = headerIds.Except(schemaIds, StringComparer.Ordinal).ToArray();
        var extraInSchema = schemaIds.Except(headerIds, StringComparer.Ordinal).ToArray();
        var orderMatch = headerIds.SequenceEqual(schemaIds, StringComparer.Ordinal);

        return new RuntimeConfigSchemaSyncResult(
            InSync: missingInSchema.Length == 0 && extraInSchema.Length == 0 && orderMatch,
            HeaderIds: headerIds,
            SchemaIds: schemaIds,
            MissingInSchema: missingInSchema,
            ExtraInSchema: extraInSchema,
            OrderMatches: orderMatch);
    }

    private static IEnumerable<string> CandidateRoots(string? startDirectory)
    {
        if (!string.IsNullOrWhiteSpace(startDirectory))
            yield return startDirectory;
        yield return AppContext.BaseDirectory;
        yield return Directory.GetCurrentDirectory();
        yield return "/home/username/Github/pmd-red";
    }

    private static void AppendCommentLine(StringBuilder sink, string trimmed)
    {
        var text = trimmed;
        if (text.StartsWith("/*", StringComparison.Ordinal))
            text = text[2..];
        if (text.StartsWith("*", StringComparison.Ordinal))
            text = text[1..];
        if (text.EndsWith("*/", StringComparison.Ordinal))
            text = text[..^2];
        text = text.Trim();
        if (text.Length == 0)
            return;
        if (sink.Length > 0)
            sink.Append(' ');
        sink.Append(text);
    }

    private static string CleanComment(string comment) =>
        Regex.Replace(comment, @"\s+", " ").Trim();
}

public sealed record RuntimeConfigSchemaSyncResult(
    bool InSync,
    IReadOnlyList<string> HeaderIds,
    IReadOnlyList<string> SchemaIds,
    IReadOnlyList<string> MissingInSchema,
    IReadOnlyList<string> ExtraInSchema,
    bool OrderMatches)
{
    public string FormatError()
    {
        if (InSync)
            return "RuntimeConfigSchema matches include/runtime.h.";

        var sb = new StringBuilder();
        sb.AppendLine("RescueTemple RuntimeConfigSchema drifted from include/runtime.h.");
        if (MissingInSchema.Count > 0)
            sb.AppendLine("Missing in schema (add metadata or re-run gen): " + string.Join(", ", MissingInSchema));
        if (ExtraInSchema.Count > 0)
            sb.AppendLine("Extra in schema (removed from header): " + string.Join(", ", ExtraInSchema));
        if (!OrderMatches && MissingInSchema.Count == 0 && ExtraInSchema.Count == 0)
            sb.AppendLine("Field order differs. Header order is authoritative.");
        sb.AppendLine("Run: python3 tools/gen_runtime_config_schema.py");
        return sb.ToString().TrimEnd();
    }
}
