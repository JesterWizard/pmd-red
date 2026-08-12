using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.VisualTree;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Maps Avalonia focus to Core <see cref="EditorFocusKind"/>.</summary>
internal static class EditorShellFocus
{
    public static EditorFocusKind Resolve(Visual root, bool sceneCanvasFocused)
    {
        var focused = TopLevel.GetTopLevel(root)?.FocusManager?.GetFocusedElement() as Visual;
        if (IsTextEditing(focused))
            return EditorFocusKind.TextInput;
        if (sceneCanvasFocused)
            return EditorFocusKind.SceneCanvas;
        return EditorFocusKind.Shell;
    }

    public static bool IsTextEditing(Visual? visual)
    {
        for (var current = visual; current is not null; current = current.GetVisualParent())
        {
            if (current is TextBox)
                return true;
        }
        return false;
    }
}
