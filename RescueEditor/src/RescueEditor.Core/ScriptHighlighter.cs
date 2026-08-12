using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public enum ScriptHighlightKind
{
    Text,
    Header,
    Opcode,
    String,
    Number,
    Comment,
    Error,
}

public readonly record struct ScriptHighlightSpan(int Start, int Length, ScriptHighlightKind Kind);

/// <summary>Token spans for the scene script editor. UI maps kinds onto editor colors.</summary>
public static class ScriptHighlighter
{
    private static readonly Regex Identifier = new(@"^[A-Za-z_][A-Za-z0-9_]*", RegexOptions.CultureInvariant);

    public static IReadOnlyList<ScriptHighlightSpan> Highlight(
        string text,
        IReadOnlyList<ScriptSourceError>? errors = null)
    {
        var spans = new List<ScriptHighlightSpan>();
        var errorLines = errors is null
            ? null
            : errors.Select(error => error.Line).ToHashSet();

        var offset = 0;
        var lineNumber = 1;
        while (offset <= text.Length)
        {
            var newline = text.IndexOf('\n', offset);
            var lineEnd = newline < 0 ? text.Length : newline;
            var line = text[offset..lineEnd];
            if (line.EndsWith('\r'))
                line = line[..^1];

            HighlightLine(offset, line, spans);
            if (errorLines is not null && errorLines.Contains(lineNumber) && line.Length > 0)
                spans.Add(new ScriptHighlightSpan(offset, line.Length, ScriptHighlightKind.Error));

            if (newline < 0)
                break;
            offset = newline + 1;
            lineNumber++;
        }

        return spans;
    }

    private static void HighlightLine(int lineStart, string line, List<ScriptHighlightSpan> spans)
    {
        var commentAt = FindCommentStart(line);
        var codeLength = commentAt < 0 ? line.Length : commentAt;
        var code = line[..codeLength];
        var trimmedStart = 0;
        while (trimmedStart < code.Length && char.IsWhiteSpace(code[trimmedStart]))
            trimmedStart++;

        if (trimmedStart < code.Length && code[trimmedStart] == '@')
        {
            var headerLength = code.Length - trimmedStart;
            if (headerLength > 0)
                spans.Add(new ScriptHighlightSpan(lineStart + trimmedStart, headerLength, ScriptHighlightKind.Header));
        }
        else
        {
            TokenizeCode(lineStart, code, spans);
        }

        if (commentAt >= 0 && commentAt < line.Length)
            spans.Add(new ScriptHighlightSpan(lineStart + commentAt, line.Length - commentAt, ScriptHighlightKind.Comment));
    }

    private static void TokenizeCode(int lineStart, string code, List<ScriptHighlightSpan> spans)
    {
        var i = 0;
        while (i < code.Length)
        {
            var ch = code[i];
            if (char.IsWhiteSpace(ch) || ch is '(' or ')' or ',')
            {
                i++;
                continue;
            }

            if (ch == '"')
            {
                var end = i + 1;
                var escape = false;
                while (end < code.Length)
                {
                    var next = code[end];
                    if (escape)
                    {
                        escape = false;
                        end++;
                        continue;
                    }
                    if (next == '\\')
                    {
                        escape = true;
                        end++;
                        continue;
                    }
                    end++;
                    if (next == '"')
                        break;
                }

                spans.Add(new ScriptHighlightSpan(lineStart + i, end - i, ScriptHighlightKind.String));
                i = end;
                continue;
            }

            if (ch is '0' && i + 1 < code.Length && code[i + 1] is 'x' or 'X')
            {
                var end = i + 2;
                while (end < code.Length && IsHex(code[end]))
                    end++;
                spans.Add(new ScriptHighlightSpan(lineStart + i, end - i, ScriptHighlightKind.Number));
                i = end;
                continue;
            }

            if (ch is '-' || char.IsDigit(ch))
            {
                var end = i + (ch == '-' ? 1 : 0);
                if (end < code.Length && char.IsDigit(code[end]))
                {
                    while (end < code.Length && char.IsDigit(code[end]))
                        end++;
                    spans.Add(new ScriptHighlightSpan(lineStart + i, end - i, ScriptHighlightKind.Number));
                    i = end;
                    continue;
                }
            }

            var ident = Identifier.Match(code[i..]);
            if (ident.Success)
            {
                var name = ident.Value;
                if (ScriptOpcodeNames.TryGetOp(name, out _))
                    spans.Add(new ScriptHighlightSpan(lineStart + i, name.Length, ScriptHighlightKind.Opcode));
                i += name.Length;
                continue;
            }

            i++;
        }
    }

    private static int FindCommentStart(string line)
    {
        var inString = false;
        var escape = false;
        for (var i = 0; i < line.Length; i++)
        {
            var ch = line[i];
            if (inString)
            {
                if (escape)
                {
                    escape = false;
                    continue;
                }
                if (ch == '\\')
                {
                    escape = true;
                    continue;
                }
                if (ch == '"')
                    inString = false;
                continue;
            }

            if (ch == '"')
            {
                inString = true;
                continue;
            }

            if (ch == '#' || (ch == '/' && i + 1 < line.Length && line[i + 1] == '/'))
                return i;
        }

        return -1;
    }

    private static bool IsHex(char ch) =>
        char.IsDigit(ch) ||
        (ch >= 'a' && ch <= 'f') ||
        (ch >= 'A' && ch <= 'F');
}
