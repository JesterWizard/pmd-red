using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;

namespace RescueEditor.App;

public sealed class BreadcrumbBar : UserControl
{
    private readonly TextBlock _path;

    public BreadcrumbBar()
    {
        _path = new TextBlock
        {
            Text = "RescueTemple",
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
            Foreground = EditorTheme.TextPrimaryBrush,
            FontSize = 13,
        };
        Content = new Border
        {
            Background = EditorTheme.ToolbarBgBrush,
            BorderBrush = EditorTheme.BorderBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(12, 6),
            Child = _path,
        };
    }

    public void SetPath(params string[] segments)
    {
        var parts = segments.Where(s => !string.IsNullOrWhiteSpace(s)).ToArray();
        _path.Text = parts.Length == 0 ? "RescueTemple" : string.Join("  >  ", parts);
    }
}
