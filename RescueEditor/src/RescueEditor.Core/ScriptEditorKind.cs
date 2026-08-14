namespace RescueEditor.Core;

public enum ScriptEditorKind
{
    Script,
    Event,
}

public static class ScriptEditorKindCodec
{
    public const string ScriptToken = "script";
    public const string EventToken = "event";

    public static string ToToken(ScriptEditorKind kind) =>
        kind == ScriptEditorKind.Event ? EventToken : ScriptToken;

    public static ScriptEditorKind Parse(string? token) =>
        string.Equals(token, EventToken, StringComparison.OrdinalIgnoreCase)
            ? ScriptEditorKind.Event
            : ScriptEditorKind.Script;

    public static ScriptEditorKind Toggle(ScriptEditorKind kind) =>
        kind == ScriptEditorKind.Event ? ScriptEditorKind.Script : ScriptEditorKind.Event;
}
