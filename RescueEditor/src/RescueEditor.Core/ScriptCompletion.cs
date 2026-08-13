using System.Text.RegularExpressions;

namespace RescueEditor.Core;

/// <summary>Caret-scoped completion query for named script arguments.</summary>
public sealed record ScriptCompletionQuery(
    byte Op,
    int ArgIndex,
    string Prefix,
    int ReplacementStart,
    int ReplacementLength);

public static class ScriptCompletion
{
    private static readonly Regex Identifier = new(
        @"^[A-Za-z_][A-Za-z0-9_]*$",
        RegexOptions.Compiled);

    /// <summary>
    /// Inspects a single source line and caret column (0-based) to find a named-arg
    /// context. Returns null when the caret is not inside a known named argument slot.
    /// </summary>
    public static ScriptCompletionQuery? TryGetQuery(string line, int caretColumn)
    {
        if (line is null || caretColumn < 0)
            return null;
        caretColumn = Math.Min(caretColumn, line.Length);

        var open = line.IndexOf('(');
        if (open < 0 || caretColumn <= open)
            return null;

        var close = line.LastIndexOf(')');
        if (close >= 0 && caretColumn > close)
            return null;

        var name = line[..open].Trim();
        if (!ScriptOpcodeNames.TryGetOp(name, out var op))
            return null;

        var argsEnd = close >= open ? close : line.Length;
        if (caretColumn > argsEnd)
            return null;

        var inner = line[(open + 1)..argsEnd];
        var caretInInner = caretColumn - (open + 1);
        if (caretInInner < 0)
            return null;

        var (argIndex, tokenStart, tokenLength, prefix) = LocateArg(inner, caretInInner);
        if (argIndex < 0)
            return null;

        return new ScriptCompletionQuery(op, argIndex, prefix, open + 1 + tokenStart, tokenLength);
    }

    public static IReadOnlyList<NamedIdEntry> Suggest(
        ScriptNamedDefinitions names,
        string line,
        int caretColumn,
        int limit = 20)
    {
        var query = TryGetQuery(line, caretColumn);
        if (query is null)
            return Array.Empty<NamedIdEntry>();
        return names.Suggest(query.Op, query.ArgIndex, query.Prefix, limit);
    }

    private static (int ArgIndex, int TokenStart, int TokenLength, string Prefix) LocateArg(
        string inner,
        int caretInInner)
    {
        var argIndex = 0;
        var tokenStart = 0;
        var inString = false;
        var escape = false;
        for (var i = 0; i < inner.Length; i++)
        {
            var ch = inner[i];
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

            if (ch == ',')
            {
                if (caretInInner <= i)
                    return Finish(inner, argIndex, tokenStart, caretInInner);
                argIndex++;
                tokenStart = i + 1;
                while (tokenStart < inner.Length && char.IsWhiteSpace(inner[tokenStart]))
                    tokenStart++;
            }
        }

        if (caretInInner > inner.Length)
            return (-1, 0, 0, string.Empty);
        return Finish(inner, argIndex, tokenStart, caretInInner);
    }

    private static (int ArgIndex, int TokenStart, int TokenLength, string Prefix) Finish(
        string inner,
        int argIndex,
        int tokenStart,
        int caretInInner)
    {
        while (tokenStart < inner.Length && char.IsWhiteSpace(inner[tokenStart]))
            tokenStart++;

        var tokenEnd = tokenStart;
        while (tokenEnd < inner.Length && !char.IsWhiteSpace(inner[tokenEnd]) && inner[tokenEnd] != ',')
            tokenEnd++;

        if (caretInInner < tokenStart)
            return (argIndex, caretInInner, 0, string.Empty);

        if (caretInInner > tokenEnd)
        {
            // Caret in trailing whitespace of this arg — still this arg, empty/new prefix.
            return (argIndex, caretInInner, 0, string.Empty);
        }

        var token = inner[tokenStart..tokenEnd];
        var prefix = inner[tokenStart..caretInInner];
        if (token.Length > 0 && !Identifier.IsMatch(token) && !LooksLikePartialIdentifier(prefix))
            return (-1, 0, 0, string.Empty);

        return (argIndex, tokenStart, tokenEnd - tokenStart, prefix);
    }

    private static bool LooksLikePartialIdentifier(string prefix) =>
        prefix.Length == 0 || Identifier.IsMatch(prefix);
}
