namespace RescueEditor.Core;

public enum SceneToolbarBand
{
    Tools,
    View,
    Placement,
    Overlays,
    Actions,
}

public readonly record struct SceneToolbarCluster(string Caption, SceneToolbarBand Band);

/// <summary>Short map-desk labels for the scene toolbar (full names live in tooltips).</summary>
public static class SceneToolbarCopy
{
    public const string Tool = "Tool";
    public const string View = "View";
    public const string Place = "Place";
    public const string Show = "Show";
    public const string Edit = "Edit";

    public const string Select = "Select";
    public const string Pan = "Pan";
    public const string DrawLink = "Link";
    public const string DrawEvent = "Event";
    public const string PaintCollision = "Paint";
    public const string EraseCollision = "Erase";
    public const string DrawLinkTip = "Draw and edit GroundLink volumes";
    public const string DrawEventTip = "Draw and edit event trigger volumes";
    public const string PaintCollisionTip = "Paint solid collision tiles";
    public const string EraseCollisionTip = "Erase collision tiles";
}

/// <summary>Scene map chrome is two stacked strips so overlays/actions are not clipped.</summary>
public static class SceneToolbarLayout
{
    public const int RowCount = 2;

    private static readonly SceneToolbarCluster[] Clusters =
    [
        new(SceneToolbarCopy.Tool, SceneToolbarBand.Tools),
        new(SceneToolbarCopy.View, SceneToolbarBand.View),
        new(SceneToolbarCopy.Place, SceneToolbarBand.Placement),
        new(SceneToolbarCopy.Show, SceneToolbarBand.Overlays),
        new(SceneToolbarCopy.Edit, SceneToolbarBand.Actions),
    ];

    public static int RowOf(SceneToolbarBand band) => band switch
    {
        SceneToolbarBand.Tools => 0,
        SceneToolbarBand.View => 0,
        SceneToolbarBand.Placement => 0,
        SceneToolbarBand.Overlays => 1,
        SceneToolbarBand.Actions => 1,
        _ => 0,
    };

    public static IReadOnlyList<SceneToolbarBand> BandsOnRow(int row) =>
        ClustersOnRow(row).Select(cluster => cluster.Band).ToArray();

    public static IReadOnlyList<SceneToolbarCluster> ClustersOnRow(int row)
    {
        if (row < 0 || row >= RowCount)
            return [];
        return Clusters.Where(cluster => RowOf(cluster.Band) == row).ToArray();
    }

    public static double HostHeight(double rowHeight) => RowCount * rowHeight;
}
