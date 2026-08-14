using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

public sealed class EditorSessionSettings
{
    public List<string> RecentRoms { get; set; } = new();
    public List<string> RecentProjects { get; set; } = new();
    public string? LastRomPath { get; set; }
    public string? LastProjectPath { get; set; }
    public string? ExplorerCategory { get; set; }
    public string? ExplorerAssetId { get; set; }
    public int? ExplorerSceneMapId { get; set; }

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
