namespace RescueEditor.Core;

/// <summary>Pure gate for navigation that would discard unsaved editor state.</summary>
public static class UnsavedChangesGate
{
    public static bool RequiresConfirmation(bool projectDirty, bool changeDirty) =>
        projectDirty || changeDirty;
}
