namespace RescueEditor.Core;

/// <summary>Which center workspace a project category opens.</summary>
public enum CategoryWorkspaceKind
{
    /// <summary>Generic list/grid + preview (<see cref="AssetCategory"/> except Scenes/C Patches).</summary>
    AssetBrowser,

    /// <summary>Scenes are opened from the Project explorer tree only — no duplicate list pane.</summary>
    SceneExplorer,

    /// <summary>Dedicated RuntimeConfig / C Patches workspace.</summary>
    CPatches,
}

/// <summary>Routes project categories to the correct workspace surface.</summary>
public static class CategoryWorkspace
{
    public static CategoryWorkspaceKind Resolve(AssetCategory category) => category switch
    {
        AssetCategory.Scenes => CategoryWorkspaceKind.SceneExplorer,
        AssetCategory.CPatches => CategoryWorkspaceKind.CPatches,
        _ => CategoryWorkspaceKind.AssetBrowser,
    };

    public static bool UsesAssetBrowser(AssetCategory category) =>
        Resolve(category) == CategoryWorkspaceKind.AssetBrowser;
}
