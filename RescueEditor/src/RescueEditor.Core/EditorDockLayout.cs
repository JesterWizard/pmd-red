namespace RescueEditor.Core;

public enum DockPanelId
{
    Explorer,
    Workspace,
    Inspector,
    Output,
}

public sealed record DockLayoutSnapshot(
    double ExplorerWidth,
    double InspectorWidth,
    double OutputHeight,
    bool ExplorerVisible,
    bool InspectorVisible,
    bool OutputVisible);

/// <summary>Pure docking layout state for the IDE shell (persistable, UI-agnostic).</summary>
public sealed class EditorDockLayout
{
    public const double DefaultExplorerWidth = 216;
    public const double DefaultInspectorWidth = 300;
    public const double DefaultOutputHeight = 140;
    public const double MinSideWidth = 140;
    public const double MinOutputHeight = 80;

    public double ExplorerWidth { get; private set; } = DefaultExplorerWidth;
    public double InspectorWidth { get; private set; } = DefaultInspectorWidth;
    public double OutputHeight { get; private set; } = DefaultOutputHeight;
    public bool ExplorerVisible { get; private set; } = true;
    public bool InspectorVisible { get; private set; } = true;
    public bool OutputVisible { get; private set; }

    public void SetWidth(DockPanelId panel, double width)
    {
        switch (panel)
        {
            case DockPanelId.Explorer:
                ExplorerWidth = Math.Max(MinSideWidth, width);
                break;
            case DockPanelId.Inspector:
                InspectorWidth = Math.Max(MinSideWidth, width);
                break;
            case DockPanelId.Output:
                OutputHeight = Math.Max(MinOutputHeight, width);
                break;
        }
    }

    public void SetVisible(DockPanelId panel, bool visible)
    {
        switch (panel)
        {
            case DockPanelId.Explorer:
                ExplorerVisible = visible;
                break;
            case DockPanelId.Inspector:
                InspectorVisible = visible;
                break;
            case DockPanelId.Output:
                OutputVisible = visible;
                break;
            case DockPanelId.Workspace:
                // Center workspace is always present.
                break;
        }
    }

    public void Toggle(DockPanelId panel)
    {
        switch (panel)
        {
            case DockPanelId.Explorer:
                ExplorerVisible = !ExplorerVisible;
                break;
            case DockPanelId.Inspector:
                InspectorVisible = !InspectorVisible;
                break;
            case DockPanelId.Output:
                OutputVisible = !OutputVisible;
                break;
        }
    }

    public DockLayoutSnapshot Capture() => new(
        ExplorerWidth,
        InspectorWidth,
        OutputHeight,
        ExplorerVisible,
        InspectorVisible,
        OutputVisible);

    public void Restore(DockLayoutSnapshot snapshot)
    {
        ExplorerWidth = Math.Max(MinSideWidth, snapshot.ExplorerWidth);
        InspectorWidth = Math.Max(MinSideWidth, snapshot.InspectorWidth);
        OutputHeight = Math.Max(MinOutputHeight, snapshot.OutputHeight);
        ExplorerVisible = snapshot.ExplorerVisible;
        InspectorVisible = snapshot.InspectorVisible;
        OutputVisible = snapshot.OutputVisible;
    }

    /// <summary>Effective column width for a side panel (0 when collapsed).</summary>
    public double EffectiveWidth(DockPanelId panel) => panel switch
    {
        DockPanelId.Explorer => ExplorerVisible ? ExplorerWidth : 0,
        DockPanelId.Inspector => InspectorVisible ? InspectorWidth : 0,
        DockPanelId.Output => OutputVisible ? OutputHeight : 0,
        _ => 0,
    };
}
