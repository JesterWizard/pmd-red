using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>
/// Home dashboard: a grid of clickable section tiles shown when no workspace is open.
/// </summary>
public sealed class HomeDashboardPanel : UserControl
{
    public event EventHandler<AssetCategory>? TileChosen;

    public void Show(string romName, IReadOnlyList<HomeTile> tiles)
    {
        var grid = new WrapPanel { Orientation = Orientation.Horizontal };
        foreach (var tile in tiles)
            grid.Children.Add(CreateTile(tile));

        Content = new ScrollViewer
        {
            Background = EditorTheme.CanvasBgBrush,
            Content = new StackPanel
            {
                Margin = new Thickness(EditorTheme.Space6 * 2),
                Spacing = EditorTheme.Space5,
                Children =
                {
                    EditorChrome.PaneTitle(romName),
                    EditorChrome.MutedBody("Jump straight to a section. Alt+Home or the Home button brings you back here."),
                    grid,
                },
            },
        };
    }

    private Button CreateTile(HomeTile tile)
    {
        var category = tile.Category;
        var button = new Button
        {
            Width = 208,
            Height = 116,
            Margin = new Thickness(0, 0, EditorTheme.Space5, EditorTheme.Space5),
            Padding = new Thickness(14),
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            CornerRadius = EditorTheme.CardRadius,
            HorizontalContentAlignment = HorizontalAlignment.Stretch,
            VerticalContentAlignment = VerticalAlignment.Stretch,
            Cursor = new Cursor(StandardCursorType.Hand),
            Content = new StackPanel
            {
                Spacing = EditorTheme.Space2,
                Children =
                {
                    new TextBlock
                    {
                        Text = tile.Glyph,
                        FontSize = 22,
                    },
                    new TextBlock
                    {
                        Text = tile.Title,
                        FontFamily = EditorTheme.UiFont,
                        FontSize = EditorTheme.FontTitle,
                        FontWeight = FontWeight.SemiBold,
                        Foreground = EditorTheme.TextPrimaryBrush,
                    },
                    new TextBlock
                    {
                        Text = tile.Subtitle,
                        FontFamily = EditorTheme.UiFont,
                        FontSize = EditorTheme.FontMeta,
                        Foreground = EditorTheme.TextMutedBrush,
                        TextTrimming = TextTrimming.CharacterEllipsis,
                    },
                    new TextBlock
                    {
                        Text = tile.Count == 1 ? "1 item" : $"{tile.Count:N0} items",
                        FontFamily = EditorTheme.UiFont,
                        FontSize = EditorTheme.FontMeta,
                        Foreground = EditorTheme.TextSecondaryBrush,
                    },
                },
            },
        };
        ToolTip.SetTip(button, $"Open {tile.Title}");
        button.Click += (_, _) => TileChosen?.Invoke(this, category);
        return button;
    }
}
