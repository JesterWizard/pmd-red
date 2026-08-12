namespace RescueEditor.Core;

/// <summary>
/// Pure rules for project-explorer tree row clicks (full-row open/toggle).
/// </summary>
public static class ExplorerTreeBehavior
{
    /// <summary>
    /// Next <c>IsExpanded</c> after activating a row. Leaves stay unchanged;
    /// branches toggle so the whole row (not only the chevron) opens/closes.
    /// </summary>
    public static bool NextExpandedAfterRowClick(bool hasChildren, bool currentlyExpanded) =>
        hasChildren ? !currentlyExpanded : currentlyExpanded;
}
