using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Layout;
using Avalonia.Media;

namespace RescueEditor.App;

/// <summary>
/// Compact desktop-editor design tokens.
/// Inspired by Unity / Visual Studio / Blender density — not web/SaaS UI.
/// </summary>
public static class EditorTheme
{
    public static readonly Color WindowBg = Color.FromRgb(0x1B, 0x1B, 0x1C);
    public static readonly Color MenuBg = Color.FromRgb(0x1F, 0x1F, 0x20);
    public static readonly Color ToolbarBg = Color.FromRgb(0x2A, 0x2A, 0x2C);
    public static readonly Color PanelBg = Color.FromRgb(0x24, 0x24, 0x25);
    public static readonly Color PanelBgRaised = Color.FromRgb(0x28, 0x28, 0x29);
    public static readonly Color PanelBgAlt = Color.FromRgb(0x28, 0x28, 0x29);
    public static readonly Color CanvasBg = Color.FromRgb(0x10, 0x10, 0x11);
    public static readonly Color ViewportWell = Color.FromRgb(0x0C, 0x0C, 0x0D);
    public static readonly Color InputBg = Color.FromRgb(0x1E, 0x1E, 0x1F);
    public static readonly Color Border = Color.FromRgb(0x3A, 0x3A, 0x3C);
    public static readonly Color BorderSubtle = Color.FromRgb(0x2E, 0x2E, 0x30);
    public static readonly Color Separator = Color.FromRgb(0x3A, 0x3A, 0x3C);

    public static readonly Color TextPrimary = Color.FromRgb(0xE8, 0xE8, 0xE8);
    public static readonly Color TextSecondary = Color.FromRgb(0xC0, 0xC0, 0xC0);
    public static readonly Color TextMuted = Color.FromRgb(0x96, 0x96, 0x96);
    public static readonly Color TextDim = Color.FromRgb(0x6E, 0x6E, 0x6E);

    public static readonly Color Accent = Color.FromRgb(0x0E, 0x63, 0x9C);
    public static readonly Color AccentHover = Color.FromRgb(0x11, 0x7A, 0xBD);
    public static readonly Color AccentSoft = Color.FromArgb(0x55, 0x0E, 0x63, 0x9C);
    public static readonly Color Selection = Color.FromRgb(0x09, 0x4E, 0x7A);
    public static readonly Color Danger = Color.FromRgb(0xC5, 0x42, 0x42);
    public static readonly Color Warning = Color.FromRgb(0xC9, 0xA2, 0x27);
    public static readonly Color Success = Color.FromRgb(0x3D, 0xA3, 0x5A);

    public static readonly Color ScriptHeader = Color.FromRgb(0x6C, 0xB3, 0xD8);
    public static readonly Color ScriptOpcode = Color.FromRgb(0x7E, 0xC8, 0xA3);
    public static readonly Color ScriptString = Color.FromRgb(0xD4, 0xA0, 0x6A);
    public static readonly Color ScriptNumber = Color.FromRgb(0xC9, 0xB8, 0x7A);

    public const double Space1 = 2;
    public const double Space2 = 4;
    public const double Space3 = 6;
    public const double Space4 = 8;
    public const double Space5 = 12;
    public const double Space6 = 16;

    public const double FontMeta = 10;
    public const double FontLabel = 11;
    public const double FontBody = 12;
    public const double FontPanel = 10.5;
    public const double FontToolbar = 11;
    public const double FontTitle = 13;

    public static readonly FontFamily UiFont = new("Segoe UI, Cantarell, Ubuntu, Noto Sans, sans-serif");
    public static readonly FontFamily MonoFont = new("Cascadia Mono, Consolas, monospace");

    public const double ControlHeight = 20;
    public const double ToolbarHeight = 26;
    public const double StatusHeight = 22;
    public const double PanelHeaderHeight = 22;
    public const double LabelColumnWidth = 88;
    public const double ExplorerWidth = 216;
    public const double InspectorWidth = 300;
    public const double AssetBrowserWidth = 220;
    public const double SceneInspectorWidth = 380;
    public const double SceneInspectorMinWidth = 320;
    public const double RulerSize = 18;

    public static SolidColorBrush WindowBgBrush { get; } = Solid(WindowBg);
    public static SolidColorBrush MenuBgBrush { get; } = Solid(MenuBg);
    public static SolidColorBrush ToolbarBgBrush { get; } = Solid(ToolbarBg);
    public static SolidColorBrush PanelBgBrush { get; } = Solid(PanelBg);
    public static SolidColorBrush PanelBgRaisedBrush { get; } = Solid(PanelBgRaised);
    public static SolidColorBrush PanelBgAltBrush { get; } = Solid(PanelBgAlt);
    public static SolidColorBrush CanvasBgBrush { get; } = Solid(CanvasBg);
    public static SolidColorBrush ViewportWellBrush { get; } = Solid(ViewportWell);
    public static SolidColorBrush InputBgBrush { get; } = Solid(InputBg);
    public static SolidColorBrush BorderBrush { get; } = Solid(Border);
    public static SolidColorBrush BorderSubtleBrush { get; } = Solid(BorderSubtle);
    public static SolidColorBrush SeparatorBrush { get; } = Solid(Separator);
    public static SolidColorBrush TextPrimaryBrush { get; } = Solid(TextPrimary);
    public static SolidColorBrush TextSecondaryBrush { get; } = Solid(TextSecondary);
    public static SolidColorBrush TextMutedBrush { get; } = Solid(TextMuted);
    public static SolidColorBrush TextDimBrush { get; } = Solid(TextDim);
    public static SolidColorBrush AccentBrush { get; } = Solid(Accent);
    public static SolidColorBrush AccentSoftBrush { get; } = Solid(AccentSoft);
    public static SolidColorBrush SelectionBrush { get; } = Solid(Selection);
    public static SolidColorBrush DangerBrush { get; } = Solid(Danger);
    public static SolidColorBrush WarningBrush { get; } = Solid(Warning);
    public static SolidColorBrush SuccessBrush { get; } = Solid(Success);
    public static SolidColorBrush ScriptHeaderBrush { get; } = Solid(ScriptHeader);
    public static SolidColorBrush ScriptOpcodeBrush { get; } = Solid(ScriptOpcode);
    public static SolidColorBrush ScriptStringBrush { get; } = Solid(ScriptString);
    public static SolidColorBrush ScriptNumberBrush { get; } = Solid(ScriptNumber);

    private static SolidColorBrush Solid(Color color) => new(color);
}

/// <summary>Shared chrome builders for a consistent professional editor look.</summary>
public static class EditorChrome
{
    public static Border PanelHeader(string title)
    {
        var label = new TextBlock
        {
            Text = title.ToUpperInvariant(),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontPanel,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextMutedBrush,
            LetterSpacing = 0.6,
            VerticalAlignment = VerticalAlignment.Center,
        };
        return new Border
        {
            Height = EditorTheme.PanelHeaderHeight,
            Background = EditorTheme.PanelBgRaisedBrush,
            Padding = new Thickness(EditorTheme.Space4, 0),
            Child = label,
        };
    }

    public static Control SectionHeader(string title)
    {
        var label = new TextBlock
        {
            Text = title.ToUpperInvariant(),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextDimBrush,
            LetterSpacing = 0.55,
            VerticalAlignment = VerticalAlignment.Center,
        };
        var rule = new Border
        {
            Height = 1,
            Background = EditorTheme.BorderSubtleBrush,
            Margin = new Thickness(0, EditorTheme.Space1, 0, 0),
            Opacity = 0.9,
        };
        return new StackPanel
        {
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space3, EditorTheme.Space4, EditorTheme.Space1),
            Children = { label, rule },
        };
    }

    public static Control PropertyRow(string label, Control editor)
    {
        editor.HorizontalAlignment = HorizontalAlignment.Stretch;
        StyleEditor(editor);

        var grid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.LabelColumnWidth},*"),
            Margin = new Thickness(EditorTheme.Space4, 0),
            Height = EditorTheme.ControlHeight + 2,
        };
        var labelBlock = new TextBlock
        {
            Text = label,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
            Margin = new Thickness(0, 0, EditorTheme.Space2, 0),
        };
        grid.Children.Add(labelBlock);
        grid.Children.Add(editor);
        Grid.SetColumn(editor, 1);
        return grid;
    }

    public static void StyleEditor(Control editor)
    {
        if (editor is NumericUpDown nud)
        {
            nud.Height = EditorTheme.ControlHeight;
            nud.MinHeight = EditorTheme.ControlHeight;
            nud.FontSize = EditorTheme.FontLabel;
            nud.FontFamily = EditorTheme.MonoFont;
            nud.MinWidth = 0;
            nud.Width = double.NaN;
            nud.Padding = new Thickness(4, 0);
            nud.CornerRadius = new CornerRadius(0);
            nud.BorderThickness = new Thickness(1);
            nud.BorderBrush = EditorTheme.BorderSubtleBrush;
            nud.Background = EditorTheme.InputBgBrush;
            nud.ShowButtonSpinner = true;
            nud.ButtonSpinnerLocation = Location.Right;
        }
        else if (editor is TextBox tb)
        {
            tb.MinHeight = EditorTheme.ControlHeight;
            tb.Height = EditorTheme.ControlHeight;
            tb.FontSize = EditorTheme.FontLabel;
            tb.FontFamily = EditorTheme.MonoFont;
            tb.Padding = new Thickness(4, 0);
            tb.CornerRadius = new CornerRadius(0);
            tb.BorderThickness = new Thickness(1);
            tb.BorderBrush = EditorTheme.BorderSubtleBrush;
            tb.Background = EditorTheme.InputBgBrush;
        }
        else if (editor is ComboBox cb)
        {
            // InstantComboBox already sizes itself; don't clamp it back to ControlHeight (clips text).
            if (cb is not InstantComboBox)
            {
                cb.Height = EditorTheme.ControlHeight + 2;
                cb.MinHeight = EditorTheme.ControlHeight + 2;
                cb.FontSize = EditorTheme.FontLabel;
                cb.Padding = new Thickness(4, 0);
                cb.VerticalContentAlignment = VerticalAlignment.Center;
            }
        cb.FontFamily = EditorTheme.UiFont;
            if (cb is not InstantComboBox)
            {
                cb.MinWidth = 0;
                cb.Width = double.NaN;
                cb.HorizontalAlignment = HorizontalAlignment.Stretch;
            }
            cb.CornerRadius = new CornerRadius(0);
            if (cb is not InstantComboBox)
            {
                cb.AddHandler(
                    InputElement.PointerPressedEvent,
                    static (s, e) =>
                    {
                        if (s is not ComboBox box || box.IsDropDownOpen)
                            return;
                        if (!e.GetCurrentPoint(box).Properties.IsLeftButtonPressed)
                            return;
                        box.IsDropDownOpen = true;
                        e.Handled = true;
                    },
                    RoutingStrategies.Tunnel);
            }
        }
        else if (editor is CompactSpinBox spin)
        {
            if (double.IsNaN(spin.Width))
                editor.HorizontalAlignment = HorizontalAlignment.Stretch;
        }
    }

    public static Border ToolbarSeparator() => new()
    {
        Width = 1,
        Height = 14,
        Background = EditorTheme.SeparatorBrush,
        Margin = new Thickness(EditorTheme.Space3, 0),
        VerticalAlignment = VerticalAlignment.Center,
        Opacity = 0.7,
    };

    public static Button ToolButton(string text, bool primary = false)
    {
        var button = new Button
        {
            Content = text,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontToolbar,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            Padding = new Thickness(EditorTheme.Space2 + 1, 0),
            Margin = new Thickness(0, 0, 1, 0),
            VerticalContentAlignment = VerticalAlignment.Center,
            HorizontalContentAlignment = HorizontalAlignment.Center,
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(0),
        };
        if (primary)
        {
            button.Background = EditorTheme.AccentBrush;
            button.Foreground = EditorTheme.TextPrimaryBrush;
        }
        else
        {
            button.Background = Brushes.Transparent;
            button.Foreground = EditorTheme.TextSecondaryBrush;
        }
        return button;
    }

    public static ToggleButton ToolToggle(string text, bool isChecked = false)
    {
        var button = new ToggleButton
        {
            Content = text,
            IsChecked = isChecked,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            Padding = new Thickness(EditorTheme.Space2 + 1, 0),
            Margin = new Thickness(0, 0, 1, 0),
            VerticalContentAlignment = VerticalAlignment.Center,
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(0),
            Background = Brushes.Transparent,
            Foreground = EditorTheme.TextSecondaryBrush,
        };
        button.Classes.Add("rt-tool");
        return button;
    }

    public static ToggleButton WorkspaceTab(string text, bool isChecked = false)
    {
        var button = new ToggleButton
        {
            Content = text,
            IsChecked = isChecked,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            FontWeight = FontWeight.SemiBold,
            Height = 22,
            MinHeight = 22,
            Padding = new Thickness(EditorTheme.Space4, 0),
            Margin = new Thickness(0),
            VerticalContentAlignment = VerticalAlignment.Center,
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(0, 0, 0, 1),
            BorderBrush = Brushes.Transparent,
            Background = Brushes.Transparent,
            Foreground = EditorTheme.TextMutedBrush,
        };
        button.Classes.Add("rt-workspace-tab");
        return button;
    }

    public static Button IconButton(string text, double width = 20, string? tip = null)
    {
        var button = new Button
        {
            Content = text,
            Width = width,
            Height = EditorTheme.ControlHeight,
            MinWidth = width,
            MinHeight = EditorTheme.ControlHeight,
            Padding = new Thickness(0),
            Margin = new Thickness(0, 0, 1, 0),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            VerticalContentAlignment = VerticalAlignment.Center,
            HorizontalContentAlignment = HorizontalAlignment.Center,
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(0),
            Background = Brushes.Transparent,
            Foreground = EditorTheme.TextSecondaryBrush,
        };
        if (!string.IsNullOrWhiteSpace(tip))
            ToolTip.SetTip(button, tip);
        return button;
    }

    public static CheckBox ToolCheck(string text, bool isChecked = true)
    {
        return new CheckBox
        {
            Content = text,
            IsChecked = isChecked,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            Margin = new Thickness(EditorTheme.Space2, 0, 0, 0),
            VerticalAlignment = VerticalAlignment.Center,
            Foreground = EditorTheme.TextSecondaryBrush,
        };
    }

    public static TextBlock ToolbarLabel(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontLabel,
        Foreground = EditorTheme.TextMutedBrush,
        VerticalAlignment = VerticalAlignment.Center,
        Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space1, 0),
    };

    public static CompactSpinBox CompactNumeric(decimal min, decimal max, double? width = null)
    {
        var box = new CompactSpinBox { Minimum = min, Maximum = max };
        if (width is double w)
            box.Width = w;
        return box;
    }

    public static Border ToolbarHost(Control content) => new()
    {
        Background = EditorTheme.ToolbarBgBrush,
        Height = EditorTheme.ToolbarHeight,
        Padding = new Thickness(EditorTheme.Space3, 0),
        Child = content,
    };

    public static Border StatusHost(Control content) => new()
    {
        Background = EditorTheme.ToolbarBgBrush,
        Height = EditorTheme.StatusHeight,
        Padding = new Thickness(EditorTheme.Space4, 0),
        BorderBrush = EditorTheme.BorderSubtleBrush,
        BorderThickness = new Thickness(0, 1, 0, 0),
        Child = content,
    };

    /// <summary>Narrow transparent hit-target; panes supply the hairline edges.</summary>
    public static GridSplitter ColumnSplitter() => new()
    {
        Width = 3,
        MinWidth = 3,
        Background = Brushes.Transparent,
        ResizeDirection = GridResizeDirection.Columns,
    };

    public static GridSplitter RowSplitter() => new()
    {
        Height = 3,
        MinHeight = 3,
        Background = Brushes.Transparent,
        ResizeDirection = GridResizeDirection.Rows,
    };

    public static void StyleDialogWindow(Window dialog)
    {
        dialog.Background = EditorTheme.WindowBgBrush;
        dialog.FontFamily = EditorTheme.UiFont;
        dialog.FontSize = EditorTheme.FontBody;
    }

    public static TextBlock PaneTitle(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontTitle,
        FontWeight = FontWeight.SemiBold,
        Foreground = EditorTheme.TextPrimaryBrush,
    };

    public static TextBlock MutedBody(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontBody,
        Foreground = EditorTheme.TextMutedBrush,
        TextWrapping = TextWrapping.Wrap,
    };

    public static void StyleList(ListBox list)
    {
        list.FontFamily = EditorTheme.UiFont;
        list.FontSize = EditorTheme.FontBody;
        list.Margin = new Thickness(0);
        list.Background = Brushes.Transparent;
        list.BorderThickness = new Thickness(0);
    }

    public static void StyleTree(TreeView tree)
    {
        tree.FontFamily = EditorTheme.UiFont;
        tree.FontSize = EditorTheme.FontBody;
        tree.Margin = new Thickness(0);
        tree.Background = Brushes.Transparent;
        tree.BorderThickness = new Thickness(0);
    }

    public static Border VerticalPane(Control child, bool rightEdge = false, bool leftEdge = false)
    {
        // Prefer surface contrast over hard outlines; keep a single hairline only when needed.
        var left = leftEdge ? 1 : 0;
        var right = rightEdge ? 1 : 0;
        return new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(left, 0, right, 0),
            Child = child,
        };
    }

    public static StackPanel InspectorSection(string title, params Control[] rows)
    {
        var panel = new StackPanel { Spacing = 0 };
        panel.Children.Add(SectionHeader(title));
        foreach (var row in rows)
            panel.Children.Add(row);
        return panel;
    }

    public static ToggleButton InspectorTab(string text, bool isChecked = false)
    {
        var button = new ToggleButton
        {
            Content = text,
            IsChecked = isChecked,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Height = 20,
            MinHeight = 20,
            Padding = new Thickness(EditorTheme.Space3, 0),
            Margin = new Thickness(0),
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(0, 0, 0, 1),
            BorderBrush = Brushes.Transparent,
            Background = Brushes.Transparent,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalContentAlignment = VerticalAlignment.Center,
        };
        button.Classes.Add("rt-workspace-tab");
        return button;
    }
}

/// <summary>Dense spinbox: editable value + compact up/down, Unity/VS style.</summary>
public sealed class CompactSpinBox : UserControl
{
    private readonly TextBox _text;
    private decimal _value;
    private bool _suppress;

    public event EventHandler? ValueChanged;

    public decimal Minimum { get; set; }
    public decimal Maximum { get; set; } = 100;
    public decimal? Value
    {
        get => _value;
        set
        {
            var next = Math.Clamp(value ?? 0, Minimum, Maximum);
            if (next == _value)
                return;
            _value = next;
            if (!_suppress)
            {
                _suppress = true;
                _text.Text = Format(_value);
                _suppress = false;
            }
            ValueChanged?.Invoke(this, EventArgs.Empty);
        }
    }

    public CompactSpinBox()
    {
        _text = new TextBox
        {
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            MinWidth = 0,
            MaxWidth = double.PositiveInfinity,
            Padding = new Thickness(3, 0),
            VerticalContentAlignment = VerticalAlignment.Center,
            BorderThickness = new Thickness(0),
            Background = Brushes.Transparent,
            CornerRadius = new CornerRadius(0),
            HorizontalAlignment = HorizontalAlignment.Stretch,
        };
        _text.LostFocus += (_, _) => CommitText();
        _text.KeyDown += (_, e) =>
        {
            if (e.Key == Key.Enter)
            {
                CommitText();
                e.Handled = true;
            }
        };

        var up = MakeSpinner("▴", +1);
        var down = MakeSpinner("▾", -1);
        var spinners = new StackPanel
        {
            Width = 14,
            Spacing = 0,
            Children = { up, down },
        };

        var shell = new Border
        {
            Background = EditorTheme.InputBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            CornerRadius = new CornerRadius(0),
            MinWidth = 0,
            Height = EditorTheme.ControlHeight,
            Child = new DockPanel
            {
                LastChildFill = true,
                Children = { spinners, _text },
            },
        };
        DockPanel.SetDock(spinners, Dock.Right);
        Content = shell;
        ClipToBounds = true;
        HorizontalAlignment = HorizontalAlignment.Left;
        Height = EditorTheme.ControlHeight;
        MinHeight = EditorTheme.ControlHeight;
        _text.Text = "0";
    }

    private Button MakeSpinner(string glyph, int delta)
    {
        var button = new Button
        {
            Content = glyph,
            Height = EditorTheme.ControlHeight / 2,
            MinHeight = 0,
            Padding = new Thickness(0),
            FontSize = 8,
            BorderThickness = new Thickness(0),
            Background = Brushes.Transparent,
            Foreground = EditorTheme.TextMutedBrush,
            CornerRadius = new CornerRadius(0),
            HorizontalContentAlignment = HorizontalAlignment.Center,
            VerticalContentAlignment = VerticalAlignment.Center,
        };
        button.Click += (_, _) =>
        {
            Value = _value + delta;
        };
        return button;
    }

    private void CommitText()
    {
        if (decimal.TryParse(_text.Text, out var parsed))
            Value = parsed;
        else
            _text.Text = Format(_value);
    }

    private static string Format(decimal value) =>
        value == decimal.Truncate(value) ? ((long)value).ToString() : value.ToString("G");
}
