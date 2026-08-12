using System.Text.Json;
using System.Text.Json.Serialization;

namespace RescueEditor.Core;

/// <summary>User-level shell preferences (dock layout). Path chosen by the App host.</summary>
public sealed class EditorShellSettings
{
    public double ExplorerWidth { get; set; } = EditorDockLayout.DefaultExplorerWidth;
    public double InspectorWidth { get; set; } = EditorDockLayout.DefaultInspectorWidth;
    public double OutputHeight { get; set; } = EditorDockLayout.DefaultOutputHeight;
    public bool ExplorerVisible { get; set; } = true;
    public bool InspectorVisible { get; set; } = true;
    public bool OutputVisible { get; set; }

    public static EditorShellSettings FromDock(EditorDockLayout layout)
    {
        var snap = layout.Capture();
        return new EditorShellSettings
        {
            ExplorerWidth = snap.ExplorerWidth,
            InspectorWidth = snap.InspectorWidth,
            OutputHeight = snap.OutputHeight,
            ExplorerVisible = snap.ExplorerVisible,
            InspectorVisible = snap.InspectorVisible,
            OutputVisible = snap.OutputVisible,
        };
    }

    public void ApplyTo(EditorDockLayout layout) =>
        layout.Restore(new DockLayoutSnapshot(
            ExplorerWidth,
            InspectorWidth,
            OutputHeight,
            ExplorerVisible,
            InspectorVisible,
            OutputVisible));

    public string ToJson() => JsonSerializer.Serialize(this, SerializerOptions);

    public static EditorShellSettings FromJson(string json) =>
        JsonSerializer.Deserialize<EditorShellSettings>(json, SerializerOptions)
        ?? new EditorShellSettings();

    private static readonly JsonSerializerOptions SerializerOptions = new()
    {
        WriteIndented = true,
        PropertyNamingPolicy = JsonNamingPolicy.CamelCase,
        DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull,
    };
}

public static class EditorShellSettingsStore
{
    public static void Save(string path, EditorShellSettings settings)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(Path.GetFullPath(path))!);
        File.WriteAllText(path, settings.ToJson());
    }

    public static EditorShellSettings LoadOrDefault(string path)
    {
        if (!File.Exists(path))
            return new EditorShellSettings();
        try
        {
            return EditorShellSettings.FromJson(File.ReadAllText(path));
        }
        catch (JsonException)
        {
            return new EditorShellSettings();
        }
        catch (IOException)
        {
            return new EditorShellSettings();
        }
    }
}
