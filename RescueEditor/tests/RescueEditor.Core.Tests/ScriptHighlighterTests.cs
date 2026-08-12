using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class ScriptHighlighterTests
{
    [Fact]
    public void HighlightsHeadersOpcodesStringsNumbersAndComments()
    {
        var text = """
            @station g0/s0 EVENT_TEST
            DIALOGUE(2, "Hello")
            # MOVE_TO_COORDS(2, 46, 92)
            WAIT(0x10)
            """;

        var spans = ScriptHighlighter.Highlight(text);

        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Header && Slice(text, span).Contains("@station"));
        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Opcode && Slice(text, span) == "DIALOGUE");
        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.String && Slice(text, span).Contains("Hello"));
        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Comment && Slice(text, span).Contains("MOVE_TO_COORDS"));
        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Number && Slice(text, span) == "0x10");
        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Opcode && Slice(text, span) == "WAIT");
    }

    [Fact]
    public void MarksParseErrorLines()
    {
        var text = "WAIT(1)\nNOT_A_COMMAND(\nRET()";
        var parsed = ScriptSource.Parse(text);
        Assert.False(parsed.Ok);

        var spans = ScriptHighlighter.Highlight(text, parsed.Errors);

        Assert.Contains(spans, span => span.Kind == ScriptHighlightKind.Error && Slice(text, span).Contains("NOT_A_COMMAND"));
    }

    private static string Slice(string text, ScriptHighlightSpan span) =>
        text.Substring(span.Start, span.Length);
}
