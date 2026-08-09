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
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
            Foreground = EditorTheme.TextMutedBrush,
        };
        Content = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Height = 22,
            Padding = new Thickness(EditorTheme.Space4, 0),
            Child = _path,
        };
    }

    public void SetPath(params string[] segments)
    {
        var parts = segments.Where(s => !string.IsNullOrWhiteSpace(s)).ToArray();
        _path.Text = parts.Length == 0 ? "RescueTemple" : string.Join(" › ", parts);
        _path.Foreground = parts.Length <= 1
            ? EditorTheme.TextMutedBrush
            : EditorTheme.TextSecondaryBrush;
    }
}
