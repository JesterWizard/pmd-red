namespace RescueEditor.Core;

public readonly record struct SceneExplorerItem(int MapId, string Title, Scene Scene);

/// <summary>Flat scene list ordered by map ID for the project explorer.</summary>
public static class SceneExplorerLayout
{
    public static IReadOnlyList<SceneExplorerItem> Build(IEnumerable<Scene> scenes) =>
        scenes
            .OrderBy(scene => scene.MapId)
            .Select(scene => new SceneExplorerItem(scene.MapId, FormatTitle(scene), scene))
            .ToArray();

    public static string FormatTitle(Scene scene) => $"{scene.MapId}: {scene.Name}";
}
