namespace RescueEditor.Core;

public enum EditorCommandId
{
    Undo,
    Redo,
    Save,
    DeleteSelection,
    SelectTool,
    PanTool,
    ToggleGrid,
    ToggleExplorer,
    ToggleInspector,
    ToggleOutput,
    GlobalSearch,
    PlayInEmulator,
    ManageMods,
    SaveProjectAs,
    ShowHome,
}

public readonly record struct KeyChord(string Key, bool Ctrl, bool Shift, bool Alt)
{
    public KeyChord Normalize() =>
        new(Key, Ctrl, Shift, Alt);
}

/// <summary>Pure keymap for desktop editor shortcuts (Avalonia maps Key → string).</summary>
public sealed class EditorKeymap
{
    private readonly Dictionary<KeyChord, EditorCommandId> _bindings;

    public EditorKeymap(IEnumerable<KeyValuePair<KeyChord, EditorCommandId>> bindings)
    {
        _bindings = new Dictionary<KeyChord, EditorCommandId>(bindings);
    }

    public static EditorKeymap CreateDefault() => new(
    [
        new(new KeyChord("Z", Ctrl: true, Shift: false, Alt: false), EditorCommandId.Undo),
        new(new KeyChord("Y", Ctrl: true, Shift: false, Alt: false), EditorCommandId.Redo),
        new(new KeyChord("Z", Ctrl: true, Shift: true, Alt: false), EditorCommandId.Redo),
        new(new KeyChord("S", Ctrl: true, Shift: false, Alt: false), EditorCommandId.Save),
        new(new KeyChord("Delete", Ctrl: false, Shift: false, Alt: false), EditorCommandId.DeleteSelection),
        new(new KeyChord("V", Ctrl: false, Shift: false, Alt: false), EditorCommandId.SelectTool),
        new(new KeyChord("H", Ctrl: false, Shift: false, Alt: false), EditorCommandId.PanTool),
        new(new KeyChord("G", Ctrl: false, Shift: false, Alt: false), EditorCommandId.ToggleGrid),
        new(new KeyChord("OemOpenBrackets", Ctrl: true, Shift: false, Alt: false), EditorCommandId.ToggleExplorer),
        new(new KeyChord("OemCloseBrackets", Ctrl: true, Shift: false, Alt: false), EditorCommandId.ToggleInspector),
        new(new KeyChord("U", Ctrl: true, Shift: true, Alt: false), EditorCommandId.ToggleOutput),
        new(new KeyChord("P", Ctrl: true, Shift: false, Alt: false), EditorCommandId.GlobalSearch),
        new(new KeyChord("F5", Ctrl: false, Shift: false, Alt: false), EditorCommandId.PlayInEmulator),
        new(new KeyChord("M", Ctrl: true, Shift: true, Alt: false), EditorCommandId.ManageMods),
        new(new KeyChord("S", Ctrl: true, Shift: true, Alt: false), EditorCommandId.SaveProjectAs),
        new(new KeyChord("Home", Ctrl: false, Shift: false, Alt: true), EditorCommandId.ShowHome),
    ]);

    public bool TryResolve(KeyChord chord, out EditorCommandId command) =>
        _bindings.TryGetValue(chord.Normalize(), out command!);
}
