using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Templates;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Ctrl+P overlay: search dialogue text and script opcodes / defines.</summary>
public sealed class GlobalSearchPalette : Border
{
    private readonly TextBox _query;
    private readonly ListBox _list;
    private readonly TextBlock _hint;
    private ProjectSearchIndex _index = ProjectSearchIndex.Empty;

    public event EventHandler<ProjectSearchHit>? ResultChosen;
    public event EventHandler? Dismissed;

    public GlobalSearchPalette()
    {
        IsVisible = false;
        Background = new SolidColorBrush(Color.FromArgb(160, 0x10, 0x10, 0x11));
        ZIndex = 20;
        Focusable = true;

        _query = new TextBox
        {
            PlaceholderText = "Dialogue, opcode, or define",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
        };
        EditorChrome.StyleEditor(_query);
        _query.Height = 24;
        _query.MinHeight = 24;
        _query.FontFamily = EditorTheme.UiFont;
        _query.TextChanged += (_, _) => RefreshResults();
        _query.KeyDown += QueryOnKeyDown;

        _list = new ListBox { MaxHeight = 280 };
        EditorChrome.StyleList(_list);
        _list.ItemTemplate = new FuncDataTemplate<SearchRow>((row, _) => BuildRow(row), true);
        _list.DoubleTapped += (_, _) => AcceptSelected();
        _list.PointerReleased += (_, e) =>
        {
            if (e.InitialPressMouseButton == MouseButton.Left && _list.SelectedItem is SearchRow)
                AcceptSelected();
        };
        _list.KeyDown += (_, e) =>
        {
            if (e.Key == Key.Enter)
            {
                AcceptSelected();
                e.Handled = true;
            }
        };

        _hint = new TextBlock
        {
            Text = "Type to search dialogue and ground scripts.",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextDimBrush,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, EditorTheme.Space3),
        };

        var panel = new Border
        {
            Width = 520,
            Margin = new Thickness(0, 48, 0, 0),
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Top,
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.AccentBrush,
            BorderThickness = new Thickness(1, 1, 1, 1),
            Child = new StackPanel
            {
                Children =
                {
                    new Border
                    {
                        Background = EditorTheme.PanelBgRaisedBrush,
                        BorderBrush = EditorTheme.BorderSubtleBrush,
                        BorderThickness = new Thickness(0, 0, 0, 1),
                        Padding = new Thickness(EditorTheme.Space3),
                        Child = _query,
                    },
                    _hint,
                    _list,
                },
            },
        };
        panel.PointerPressed += (_, e) => e.Handled = true;

        Child = panel;
        PointerPressed += (_, _) => Dismiss();
        AddHandler(KeyDownEvent, OverlayOnKeyDown, handledEventsToo: true);
    }

    public void Show(ProjectSearchIndex index)
    {
        _index = index;
        IsVisible = true;
        _query.Text = string.Empty;
        RefreshResults();
        _query.Focus();
    }

    public void UpdateIndex(ProjectSearchIndex index)
    {
        _index = index;
        if (IsVisible)
            RefreshResults();
    }

    public void Dismiss()
    {
        if (!IsVisible)
            return;
        IsVisible = false;
        Dismissed?.Invoke(this, EventArgs.Empty);
    }

    private void OverlayOnKeyDown(object? sender, KeyEventArgs e)
    {
        if (!IsVisible)
            return;
        if (e.Key == Key.Escape)
        {
            Dismiss();
            e.Handled = true;
        }
    }

    private void QueryOnKeyDown(object? sender, KeyEventArgs e)
    {
        if (e.Key == Key.Down)
        {
            if (_list.ItemCount > 0)
            {
                _list.SelectedIndex = 0;
                _list.Focus();
            }
            e.Handled = true;
            return;
        }

        if (e.Key == Key.Enter)
        {
            AcceptSelected();
            e.Handled = true;
        }
    }

    private void RefreshResults()
    {
        var query = _query.Text ?? string.Empty;
        if (string.IsNullOrWhiteSpace(query))
        {
            _list.ItemsSource = Array.Empty<SearchRow>();
            _hint.Text = _index.DocumentCount == 0
                ? "Indexing dialogue and scripts…"
                : "Type to search dialogue and ground scripts.";
            return;
        }

        var hits = _index.Search(query);
        _list.ItemsSource = hits.Select(h => new SearchRow(h)).ToArray();
        _list.SelectedIndex = hits.Count > 0 ? 0 : -1;
        _hint.Text = hits.Count == 0
            ? "No matches."
            : $"{hits.Count} match{(hits.Count == 1 ? "" : "es")}  ·  Enter to open";
    }

    private void AcceptSelected()
    {
        if (_list.SelectedItem is not SearchRow row)
            return;
        Dismiss();
        ResultChosen?.Invoke(this, row.Hit);
    }

    private static Control BuildRow(SearchRow row)
    {
        var hit = row.Hit;
        var kindColor = hit.Kind == ProjectSearchKind.Dialogue
            ? EditorTheme.ScriptStringBrush
            : EditorTheme.ScriptOpcodeBrush;
        var kind = new TextBlock
        {
            Text = hit.Kind == ProjectSearchKind.Dialogue ? "DLG" : "SCR",
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = kindColor,
            Width = 28,
            VerticalAlignment = VerticalAlignment.Center,
        };
        var title = new TextBlock
        {
            Text = hit.Title,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextPrimaryBrush,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };
        var snippet = new TextBlock
        {
            Text = hit.Snippet,
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };
        var body = new StackPanel { Spacing = 0, Children = { title, snippet } };
        var rowGrid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("Auto,*"),
            Margin = new Thickness(EditorTheme.Space3, EditorTheme.Space2),
            Children = { kind, body },
        };
        Grid.SetColumn(body, 1);
        return rowGrid;
    }

    private sealed record SearchRow(ProjectSearchHit Hit);
}
