using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Baserom vs project diff for the current scene/sector.</summary>
public sealed class SceneDiffWindow : Window
{
    private readonly SceneDatabase _baseline;
    private readonly SceneDatabase _current;
    private readonly int _mapId;
    private readonly SceneDiffFilter? _sectorFilter;
    private readonly TextBlock _header;
    private readonly TextBox _body;
    private readonly InstantComboBox _scopeBox;

    public SceneDiffWindow(
        SceneDatabase baseline,
        SceneDatabase current,
        int mapId,
        string sceneName,
        SceneDiffFilter? sectorFilter)
    {
        _baseline = baseline;
        _current = current;
        _mapId = mapId;
        _sectorFilter = sectorFilter;

        Title = string.IsNullOrWhiteSpace(sceneName)
            ? "Diff — baserom vs project"
            : $"Diff — {sceneName}";
        Width = 720;
        Height = 520;
        MinWidth = 480;
        MinHeight = 280;
        CanResize = true;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        EditorChrome.StyleDialogWindow(this);
        AppIcon.Apply(this);

        _scopeBox = new InstantComboBox { Width = 140 };
        _scopeBox.Items.Add("Current sector");
        _scopeBox.Items.Add("Whole scene");
        _scopeBox.SelectedIndex = sectorFilter is null ? 1 : 0;
        _scopeBox.SelectionChanged += (_, _) => Render();

        _header = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            Foreground = EditorTheme.TextSecondaryBrush,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
            VerticalAlignment = VerticalAlignment.Center,
            TextWrapping = TextWrapping.Wrap,
        };

        _body = new TextBox
        {
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextPrimaryBrush,
            Background = EditorTheme.InputBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            IsReadOnly = true,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.NoWrap,
            CaretBrush = EditorTheme.TextPrimaryBrush,
        };

        var close = EditorChrome.ToolButton("Close", primary: true);
        close.Click += (_, _) => Close();

        var top = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(0, 0, 0, EditorTheme.Space3),
            Children =
            {
                EditorChrome.ToolbarLabel("Scope"),
                _scopeBox,
                _header,
            },
        };

        var toolbar = EditorChrome.ToolbarHost(new StackPanel
        {
            Orientation = Orientation.Horizontal,
            HorizontalAlignment = HorizontalAlignment.Right,
            Children = { close },
        });

        var root = new DockPanel { LastChildFill = true, Margin = new Thickness(EditorTheme.Space4) };
        DockPanel.SetDock(toolbar, Dock.Bottom);
        DockPanel.SetDock(top, Dock.Top);
        root.Children.Add(toolbar);
        root.Children.Add(top);
        root.Children.Add(_body);
        Content = root;
        Render();
    }

    private void Render()
    {
        var filter = _scopeBox.SelectedIndex == 0 ? _sectorFilter : null;
        var report = SceneDiffBuilder.Compare(_baseline, _current, _mapId, filter);
        var scope = filter is { Group: int group, Sector: int sector }
            ? $"g{group}/s{sector}"
            : "whole scene";
        _header.Text = report.HasChanges
            ? $"{report.Entries.Count} change{(report.Entries.Count == 1 ? "" : "s")} vs baserom · {scope}"
            : $"No changes vs baserom · {scope}";
        _body.Text = report.HasChanges ? report.FormatText() : "(no differences)";
    }
}
