namespace RescueEditor.Core;

public readonly record struct SceneExplorerItem(int MapId, string Title, Scene Scene);

public readonly record struct SceneExplorerGroup(
    string Key,
    string Title,
    IReadOnlyList<SceneExplorerItem> Items);

/// <summary>
/// Scene list for the project explorer, split into Story / Friend Areas / Post Game.
/// </summary>
public static class SceneExplorerLayout
{
    public const string Story = "story";
    public const string FriendAreas = "friend-areas";
    public const string PostGame = "post-game";

    public static IReadOnlyList<SceneExplorerGroup> Build(IEnumerable<Scene> scenes)
    {
        var buckets = new Dictionary<string, List<SceneExplorerItem>>(StringComparer.Ordinal)
        {
            [Story] = new(),
            [FriendAreas] = new(),
            [PostGame] = new(),
        };

        foreach (var scene in scenes.OrderBy(s => s.MapId))
            buckets[Classify(scene)].Add(new SceneExplorerItem(scene.MapId, FormatTitle(scene), scene));

        return
        [
            new SceneExplorerGroup(Story, "Story", buckets[Story]),
            new SceneExplorerGroup(FriendAreas, "Friend Areas", buckets[FriendAreas]),
            new SceneExplorerGroup(PostGame, "Post Game", buckets[PostGame]),
        ];
    }

    public static string Classify(Scene scene)
    {
        var bma = scene.Map?.BmaName;
        if (string.IsNullOrEmpty(bma))
            return Story;

        if (bma.StartsWith("H", StringComparison.OrdinalIgnoreCase))
            return FriendAreas;

        if (IsPostGameDungeon(bma) || IsSpindaCafe(bma))
            return PostGame;

        return Story;
    }

    public static string FormatTitle(Scene scene) => $"{scene.MapId}: {scene.Name}";

    private static bool IsSpindaCafe(string bma) =>
        bma.Equals("T01P08m", StringComparison.OrdinalIgnoreCase);

    private static bool IsPostGameDungeon(string bma)
    {
        if (bma.Length < 3 || (bma[0] != 'D' && bma[0] != 'd'))
            return false;

        var n = 0;
        var i = 1;
        while (i < bma.Length && char.IsDigit(bma[i]))
        {
            n = n * 10 + (bma[i] - '0');
            i++;
        }

        return i > 1 && n >= 14;
    }
}
