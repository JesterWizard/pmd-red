namespace RescueEditor.Core;

public enum EditorFocusKind
{
    Shell,
    TextInput,
    SceneCanvas,
}

/// <summary>Focus-aware dispatch for editor shortcuts (pure; Avalonia maps focus → kind).</summary>
public static class EditorCommandRouter
{
    public static bool ShouldDispatch(EditorCommandId command, EditorFocusKind focus) => focus switch
    {
        EditorFocusKind.TextInput => command is
            EditorCommandId.Save or
            EditorCommandId.ToggleExplorer or
            EditorCommandId.ToggleInspector or
            EditorCommandId.ToggleOutput or
            EditorCommandId.GlobalSearch,
        EditorFocusKind.SceneCanvas => true,
        _ => !IsSceneOnly(command),
    };

    public static bool IsSceneOnly(EditorCommandId command) => command is
        EditorCommandId.DeleteSelection or
        EditorCommandId.ToggleGrid or
        EditorCommandId.SelectTool or
        EditorCommandId.PanTool;

    public static bool TryResolve(
        EditorKeymap map,
        KeyChord chord,
        EditorFocusKind focus,
        out EditorCommandId command)
    {
        if (!map.TryResolve(chord, out command))
            return false;
        if (!ShouldDispatch(command, focus))
        {
            command = default;
            return false;
        }
        return true;
    }
}
