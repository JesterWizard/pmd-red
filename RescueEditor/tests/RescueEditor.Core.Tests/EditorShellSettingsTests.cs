using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class EditorShellSettingsTests
{
    [Fact]
    public void RoundTripJsonPreservesDockLayout()
    {
        var layout = new EditorDockLayout();
        layout.SetWidth(DockPanelId.Explorer, 250);
        layout.SetWidth(DockPanelId.Inspector, 340);
        layout.SetWidth(DockPanelId.Output, 160);
        layout.SetVisible(DockPanelId.Output, true);
        layout.SetVisible(DockPanelId.Explorer, false);

        var settings = EditorShellSettings.FromDock(layout);
        var json = settings.ToJson();
        var loaded = EditorShellSettings.FromJson(json);
        var restored = new EditorDockLayout();
        loaded.ApplyTo(restored);

        Assert.Equal(250, restored.ExplorerWidth);
        Assert.Equal(340, restored.InspectorWidth);
        Assert.Equal(160, restored.OutputHeight);
        Assert.True(restored.OutputVisible);
        Assert.False(restored.ExplorerVisible);
        Assert.True(restored.InspectorVisible);
    }

    [Fact]
    public void LoadOrDefault_MissingFile_ReturnsDefaults()
    {
        var path = Path.Combine(Path.GetTempPath(), $"rescue-temple-shell-{Guid.NewGuid():N}.json");
        try
        {
            var settings = EditorShellSettingsStore.LoadOrDefault(path);
            var layout = new EditorDockLayout();
            settings.ApplyTo(layout);
            Assert.Equal(EditorDockLayout.DefaultExplorerWidth, layout.ExplorerWidth);
            Assert.False(layout.OutputVisible);
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }

    [Fact]
    public void SaveAndLoad_RoundTripFile()
    {
        var path = Path.Combine(Path.GetTempPath(), $"rescue-temple-shell-{Guid.NewGuid():N}.json");
        try
        {
            var layout = new EditorDockLayout();
            layout.SetVisible(DockPanelId.Output, true);
            layout.SetWidth(DockPanelId.Output, 200);
            EditorShellSettingsStore.Save(path, EditorShellSettings.FromDock(layout));

            var loaded = EditorShellSettingsStore.LoadOrDefault(path);
            var restored = new EditorDockLayout();
            loaded.ApplyTo(restored);
            Assert.True(restored.OutputVisible);
            Assert.Equal(200, restored.OutputHeight);
        }
        finally
        {
            if (File.Exists(path))
                File.Delete(path);
        }
    }
}
