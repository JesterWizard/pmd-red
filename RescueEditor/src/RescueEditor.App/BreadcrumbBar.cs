using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;

namespace RescueEditor.App;

public sealed class BreadcrumbBar : UserControl
{
    private readonly StackPanel _segments;

    public BreadcrumbBar()
    {
        _segments = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 0,
            VerticalAlignment = VerticalAlignment.Center,
        };
        Content = new Border
        {
            Background = EditorTheme.ToolbarBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Height = EditorTheme.ToolbarHeight,
            Padding = new Thickness(EditorTheme.Space4, 0),
            Child = _segments,
        };
        SetPath("RescueTemple");
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
