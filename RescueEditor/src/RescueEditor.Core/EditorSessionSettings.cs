using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

public sealed class EditorSessionSettings
{
    public List<string> RecentRoms { get; set; } = new();
    public List<string> RecentProjects { get; set; } = new();
    public string? LastRomPath { get; set; }
    public string? LastProjectPath { get; set; }
    public string? ScriptEditorKind { get; set; }
    public string? ExplorerCategory { get; set; }
    public string? ExplorerAssetId { get; set; }
    public int? ExplorerSceneMapId { get; set; }
    /// <summary>Emulator executable chosen with Emulator → Set Emulator…; null = auto-detect mGBA.</summary>
    public string? EmulatorPath { get; set; }
    /// <summary>Output path of the last successful Build ROM (source of the playtest copy).</summary>
    public string? LastBuiltRomPath { get; set; }
    /// <summary>Relaunch an emulator RescueTemple started after each successful Build ROM.</summary>
    public bool RestartEmulatorAfterBuild { get; set; } = true;

    public string ToJson() => JsonSerializer.Serialize(this, SerializerOptions);

    public static EditorSessionSettings FromJson(string json) =>
        JsonSerializer.Deserialize<EditorSessionSettings>(json, SerializerOptions)
        ?? new EditorSessionSettings();

    internal static readonly JsonSerializerOptions SerializerOptions = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
        DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull,
    };
}

public static class EditorSessionSettingsStore
{
    public static void Save(IEditorFileSystem files, string path, EditorSessionSettings settings) =>
        files.WriteAllText(path, settings.ToJson());

    public static EditorSessionSettings LoadOrDefault(IEditorFileSystem files, string path)
    {
        if (!files.FileExists(path))
            return new EditorSessionSettings();
        try
        {
            return EditorSessionSettings.FromJson(files.ReadAllText(path));
        }
        catch (JsonException)
        {
            return new EditorSessionSettings();
        }
        catch (IOException)
        {
            return new EditorSessionSettings();
        }
    }
}
