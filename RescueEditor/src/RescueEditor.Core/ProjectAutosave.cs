using System.Security.Cryptography;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

public sealed class AutosaveEnvelope
{
    public DateTimeOffset AutosavedAt { get; set; }
    public DateTimeOffset? LastExplicitSaveAt { get; set; }
    public string? ExplicitSavePath { get; set; }
    public string RomPath { get; set; } = string.Empty;
    public string? ExplorerCategory { get; set; }
    public string? ExplorerAssetId { get; set; }
    public int? ExplorerSceneMapId { get; set; }
    public ProjectDocument Project { get; set; } = new();

    [JsonIgnore]
    public string Path { get; set; } = string.Empty;
}

public static class ProjectAutosave
{
    public const string DirectoryName = "autosave";

    public static string GetPath(string appDataDirectory, string key)
    {
        var hash = Convert.ToHexString(SHA1.HashData(Encoding.UTF8.GetBytes(key))).ToLowerInvariant();
        return Path.Combine(appDataDirectory, DirectoryName, hash + ".rtproj");
    }

    public static bool ShouldPrompt(DateTimeOffset autosavedAt, DateTimeOffset? lastExplicitSaveAt) =>
        lastExplicitSaveAt is null || autosavedAt > lastExplicitSaveAt;

    public static AutosaveEnvelope Write(
        IEditorFileSystem files,
        string appDataDirectory,
        string key,
        AutosaveEnvelope envelope)
    {
        envelope.Path = GetPath(appDataDirectory, key);
        files.WriteAllText(envelope.Path, JsonSerializer.Serialize(envelope, SerializerOptions));
        return envelope;
    }

    public static AutosaveEnvelope? TryLoad(IEditorFileSystem files, string appDataDirectory, string key)
    {
        var path = GetPath(appDataDirectory, key);
        if (!files.FileExists(path))
            return null;
        try
        {
            var loaded = JsonSerializer.Deserialize<AutosaveEnvelope>(files.ReadAllText(path), SerializerOptions);
            if (loaded is null)
                return null;
            loaded.Path = path;
            loaded.Project.IsDirty = true;
            return loaded;
        }
        catch (JsonException)
        {
            return null;
        }
        catch (IOException)
        {
            return null;
        }
    }

    private static readonly JsonSerializerOptions SerializerOptions = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
        DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull,
    };
}
