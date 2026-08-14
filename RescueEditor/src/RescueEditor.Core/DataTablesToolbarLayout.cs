namespace RescueEditor.Core;

/// <summary>
/// Data Tables chrome: identity/actions on row 0, table tabs on row 1 so
/// filter/status never collide with Pokemon / Types / Shops labels.
/// </summary>
public static class DataTablesToolbarLayout
{
    public const int RowCount = 2;
    public const string Title = "Data Tables";

    public static readonly string[] TableTabs =
    [
        "Pokemon",
        "Moves",
        "Items",
        "Friend Areas",
        "Types",
        "Exclusives",
        "Shops",
    ];

    public static IReadOnlyList<string> TabsOnRow(int row) =>
        row == 1 ? TableTabs : [];

    public static double HostHeight(double rowHeight) => RowCount * rowHeight;

    public static bool TabFitsBesideFilter(int tabCount, double tabWidth, double filterClusterWidth, double toolbarWidth) =>
        tabCount * tabWidth + filterClusterWidth <= toolbarWidth;
}
