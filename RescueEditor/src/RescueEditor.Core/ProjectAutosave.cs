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
    /// <summary>Build of the app that wrote this autosave; null for files written before this was recorded.</summary>
    public string? AppBuildId { get; set; }
    public ProjectDocument Project { get; set; } = new();

    [JsonIgnore]
    public string Path { get; set; } = string.Empty;
}

public sealed record AutosaveRestorePrompt(string Title, string Message, string ConfirmLabel, string DiscardLabel);

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

    /// <summary>Wording for the startup restore prompt: an app update when the build changed since the autosave, otherwise an unexpected close.</summary>
    public static AutosaveRestorePrompt DescribeRestore(AutosaveEnvelope envelope, string currentBuildId)
    {
        if (envelope.AppBuildId is not null && !string.Equals(envelope.AppBuildId, currentBuildId, StringComparison.Ordinal))
        {
            return new AutosaveRestorePrompt(
                Title: "RescueTemple was updated",
                Message: "RescueTemple was updated and restarted while you had unsaved changes. Restore the work from before the update?",
                ConfirmLabel: "Restore my changes",
                DiscardLabel: "Discard");
        }

        return new AutosaveRestorePrompt(
            Title: "Unsaved changes found",
            Message: "RescueTemple closed before your last changes were saved. Restore them?",
            ConfirmLabel: "Restore my changes",
            DiscardLabel: "Discard");
    }

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
