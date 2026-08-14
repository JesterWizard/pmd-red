using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorSessionSettingsTests
{
    [Fact]
    public void SaveAndLoad_RoundTripRecentListsAndExplorerBookmark()
    {
        var files = new MemoryEditorFileSystem();
        var path = Path.Combine("appdata", "RescueTemple", "session.json");
        var settings = new EditorSessionSettings
        {
            LastRomPath = "baserom.gba",
            LastProjectPath = "mod.rtproj",
            ExplorerCategory = nameof(AssetCategory.Dialogue),
            ExplorerAssetId = "dialogue-3",
            ExplorerSceneMapId = null,
        };
        settings.RecentRoms = RecentDocumentList.Remember(settings.RecentRoms, "baserom.gba");
        settings.RecentProjects = RecentDocumentList.Remember(settings.RecentProjects, "mod.rtproj");

        EditorSessionSettingsStore.Save(files, path, settings);
        var loaded = EditorSessionSettingsStore.LoadOrDefault(files, path);

        Assert.Equal("baserom.gba", loaded.LastRomPath);
        Assert.Equal("mod.rtproj", loaded.LastProjectPath);
        Assert.Equal(new[] { "baserom.gba" }, loaded.RecentRoms);
        Assert.Equal(new[] { "mod.rtproj" }, loaded.RecentProjects);
        Assert.Equal(nameof(AssetCategory.Dialogue), loaded.ExplorerCategory);
        Assert.Equal("dialogue-3", loaded.ExplorerAssetId);
    }

    [Fact]
    public void LoadOrDefault_MissingFile_ReturnsEmptySession()
    {
        var files = new MemoryEditorFileSystem();
        var loaded = EditorSessionSettingsStore.LoadOrDefault(files, "session.json");
        Assert.Empty(loaded.RecentRoms);
        Assert.Empty(loaded.RecentProjects);
        Assert.Null(loaded.LastRomPath);
    }
}

public sealed class MemoryEditorFileSystem : IEditorFileSystem
{
    private readonly Dictionary<string, string> _files = new(StringComparer.Ordinal);

    public bool FileExists(string path) => _files.ContainsKey(Normalize(path));

    public string ReadAllText(string path) => _files[Normalize(path)];

    public void WriteAllText(string path, string contents) => _files[Normalize(path)] = contents;

    private static string Normalize(string path) => path.Replace('\\', '/');
}
