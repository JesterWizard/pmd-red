using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;

namespace RescueEditor.App;

public sealed class BreadcrumbBar : UserControl
{
    private readonly StackPanel _segments;
    private readonly Button _modsBadge;
    private readonly TextBlock _status;

    public event EventHandler? ModsBadgeClicked;

    public BreadcrumbBar()
    {
        _segments = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 0,
            VerticalAlignment = VerticalAlignment.Center,
        };
        _modsBadge = EditorChrome.ToolButton("", tip: "Manage mods (Ctrl+Shift+M)");
        _modsBadge.IsVisible = false;
        _modsBadge.Margin = new Thickness(EditorTheme.Space3, 0, 0, 0);
        _modsBadge.Height = EditorTheme.ControlHeight - 4;
        _modsBadge.MinHeight = EditorTheme.ControlHeight - 4;
        _modsBadge.VerticalAlignment = VerticalAlignment.Center;
        _modsBadge.FontSize = EditorTheme.FontMeta;
        _modsBadge.Click += (_, _) => ModsBadgeClicked?.Invoke(this, EventArgs.Empty);

        _status = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
            MaxWidth = 560,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
        };
        var row = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,Auto,Auto"),
            Children = { _segments, _modsBadge, _status },
        };
        Grid.SetColumn(_segments, 0);
        Grid.SetColumn(_modsBadge, 1);
        Grid.SetColumn(_status, 2);
        Content = new Border
        {
            Background = EditorTheme.ToolbarBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Height = EditorTheme.ToolbarHeight,
            Padding = new Thickness(EditorTheme.Space4, 0),
            Child = row,
        };
        SetPath("RescueTemple");
    }

    public void SetStatus(string text)
    {
        _status.Text = text;
        ToolTip.SetTip(_status, string.IsNullOrWhiteSpace(text) ? null : text);
    }

    public void SetModsBadge(int enabled, int total)
    {
        if (total == 0)
        {
            _modsBadge.IsVisible = false;
            return;
        }
        _modsBadge.Content = total == enabled ? $"Mods: {enabled}" : $"Mods: {enabled}/{total}";
        _modsBadge.IsVisible = true;
    }

    public void SetPath(params string[] segments)
    {
        _segments.Children.Clear();
        var parts = segments.Where(s => !string.IsNullOrWhiteSpace(s)).ToArray();
        if (parts.Length == 0)
            parts = ["RescueTemple"];

        for (var i = 0; i < parts.Length; i++)
        {
            if (i > 0)
            {
                _segments.Children.Add(new TextBlock
                {
                    Text = " › ",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontLabel,
                    Foreground = EditorTheme.TextDimBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                });
            }

            var isLast = i == parts.Length - 1;
            _segments.Children.Add(new TextBlock
            {
                Text = parts[i],
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                FontWeight = isLast ? FontWeight.SemiBold : FontWeight.Normal,
                Foreground = isLast ? EditorTheme.TextPrimaryBrush : EditorTheme.TextMutedBrush,
                VerticalAlignment = VerticalAlignment.Center,
                TextTrimming = TextTrimming.CharacterEllipsis,
                MaxWidth = isLast ? 420 : 220,
            });
        }
    }
}
