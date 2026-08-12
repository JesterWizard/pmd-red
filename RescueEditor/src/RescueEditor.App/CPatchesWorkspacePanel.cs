using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class CPatchesWorkspacePanel : UserControl
{
    private readonly TextBlock _status;
    private readonly TextBox _filterBox;
    private readonly Button _resetButton;
    private readonly StackPanel _listHost;
    private readonly Dictionary<string, Control> _rows = new(StringComparer.Ordinal);

    private ChangeService? _changes;
    private RuntimeConfigState? _state;
    private WorkingRom? _workingRom;
    private SceneDatabase? _scenes;
    private Charmap? _charmap;
    private string? _focusFieldId;
    private bool _suppress;

    private string _hostMode = "";

    public event EventHandler? DirtyChanged;

    public CPatchesWorkspacePanel()
    {
        _status = new TextBlock
        {
            Text = "C Patch offerings",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };

        _resetButton = EditorChrome.ToolButton("Reset");
        _resetButton.Click += (_, _) => ResetToRom();

        _filterBox = new TextBox
        {
            PlaceholderText = "Filter offerings…",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            Width = 180,
        };
        EditorChrome.StyleEditor(_filterBox);
        _filterBox.TextChanged += (_, _) => ApplyFilter();

        var toolbarInner = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                new TextBlock
                {
                    Text = "C Patches",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontToolbar,
                    FontWeight = FontWeight.SemiBold,
                    Foreground = EditorTheme.TextPrimaryBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                    Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space3, 0),
                },
                _filterBox,
                EditorChrome.ToolbarSeparator(),
                _resetButton,
                _status,
            },
        };
        var toolbar = EditorChrome.ToolbarHost(toolbarInner);

        _listHost = new StackPanel { Spacing = EditorTheme.Space1 };
        var scroller = new ScrollViewer
        {
            Name = "CPatchScroller",
            Content = new Border
            {
                Padding = new Thickness(EditorTheme.Space4, EditorTheme.Space3),
                Child = _listHost,
            },
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
        };

        var body = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(toolbar, Dock.Top);
        body.Children.Add(toolbar);
        body.Children.Add(scroller);
        Content = body;
    }

    public void Load(
        RuntimeConfigState state,
        ChangeService changes,
        WorkingRom? workingRom,
        SceneDatabase? scenes,
        Charmap? charmap,
        string? focusFieldId = null,
        string? hostMode = null)
    {
        _state = state;
        _changes = changes;
        _workingRom = workingRom;
        _scenes = scenes;
        _charmap = charmap;
        _focusFieldId = focusFieldId;
        _hostMode = hostMode ?? string.Empty;
        RebuildList();
        RefreshFromState();
    }

    public void FocusField(string? fieldId)
    {
        _focusFieldId = fieldId;
        RefreshFromState();
    }

    public void RefreshFromExternal()
    {
        if (_state is null)
            return;
        RefreshFromState();
    }

    private void RebuildList()
    {
        _listHost.Children.Clear();
        _rows.Clear();
        if (_state is null)
            return;

        foreach (var group in RuntimeConfigSchema.Fields.GroupBy(f => f.Group))
        {
            var groupHeader = EditorChrome.SectionHeader(group.Key);
            groupHeader.Tag = "group:" + group.Key;
            _listHost.Children.Add(groupHeader);

            foreach (var field in group)
            {
                var row = BuildOfferingRow(field);
                row.Tag = field.Id;
                _listHost.Children.Add(row);
                _rows[field.Id] = row;
            }
        }
    }

    private Control BuildOfferingRow(RuntimeConfigFieldDef field)
    {
        var title = new TextBlock
        {
            Text = field.DisplayName,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextPrimaryBrush,
            VerticalAlignment = VerticalAlignment.Center,
        };
        var desc = new TextBlock
        {
            Text = field.Description,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            TextWrapping = TextWrapping.Wrap,
            Margin = new Thickness(0, EditorTheme.Space1, 0, 0),
        };

        var statusIcon = new TextBlock
        {
            Name = "StatusIcon",
            Text = "○",
            FontFamily = EditorTheme.UiFont,
            FontSize = 14,
            FontWeight = FontWeight.Bold,
            Width = 18,
            TextAlignment = TextAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
            Foreground = EditorTheme.TextDimBrush,
        };
        var badge = new TextBlock
        {
            Name = "Badge",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space3, 0),
        };

        var install = EditorChrome.ToolButton("Install", primary: true);
        install.Name = "Install";
        install.Click += (_, _) =>
        {
            if (_suppress || _state is null || _changes is null)
                return;
            RuntimeConfigEditing.Install(_changes, _state, field.Id);
            AfterEdit();
        };

        var uninstall = EditorChrome.ToolButton("Uninstall");
        uninstall.Name = "Uninstall";
        uninstall.Click += (_, _) =>
        {
            if (_suppress || _state is null || _changes is null)
                return;
            RuntimeConfigEditing.Uninstall(_changes, _state, field.Id);
            AfterEdit();
        };

        Control? valueEditor = null;
        if (field.Kind == RuntimeConfigFieldKind.U8)
        {
            var spin = new CompactSpinBox
            {
                Name = "Value",
                Minimum = field.Min,
                Maximum = field.Max,
                Width = 72,
            };
            spin.ValueChanged += (_, _) =>
            {
                if (_suppress || _state is null || _changes is null || spin.Value is null)
                    return;
                RuntimeConfigEditing.SetField(_changes, _state, field.Id, (byte)spin.Value.Value);
                AfterEdit();
            };
            valueEditor = spin;
        }

        var actions = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { install, uninstall },
        };
        if (valueEditor is not null)
            actions.Children.Insert(0, valueEditor);

        var status = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 0,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { statusIcon, badge },
        };

        var header = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,Auto"),
            Children =
            {
                title,
                new StackPanel
                {
                    Orientation = Orientation.Horizontal,
                    Children = { status, actions },
                    [Grid.ColumnProperty] = 1,
                },
            },
        };

        return new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space3, EditorTheme.Space2),
            Child = new StackPanel
            {
                Spacing = 0,
                Children = { header, desc },
            },
        };
    }

    private void RefreshFromState()
    {
        if (_state is null)
            return;

        _suppress = true;
        try
        {
            _resetButton.IsEnabled = _state.IsDirty;
            var mode = !string.IsNullOrEmpty(_hostMode)
                ? _hostMode
                : !_state.HasRomBacking
                ? "will insert on Build"
                : _state.WasInserted
                    ? "inserted"
                    : _state.RomCapacity < RuntimeConfigSchema.ByteLength
                        ? $"bound ({_state.RomCapacity} byte section)"
                        : "bound";
            var installed = RuntimeConfigSchema.Fields.Count(f => RuntimeConfigEditing.IsInstalled(_state, f.Id));
            _status.Text = $"{_state.StatusMessage}  ·  {mode}  ·  {installed}/{RuntimeConfigSchema.Fields.Count} installed"
                + (_state.IsDirty ? "  ·  dirty" : string.Empty);

            foreach (var field in RuntimeConfigSchema.Fields)
            {
                if (!_rows.TryGetValue(field.Id, out var row))
                    continue;

                var isInstalled = RuntimeConfigEditing.IsInstalled(_state, field.Id);
                var writable = _state.IsFieldWritable(field.Id) || !_state.HasRomBacking;
                var focused = string.Equals(_focusFieldId, field.Id, StringComparison.Ordinal);
                row.Opacity = focused || _focusFieldId is null ? 1.0 : 0.72;
                if (row is Border border)
                    border.BorderBrush = focused ? EditorTheme.AccentBrush : EditorTheme.BorderSubtleBrush;

                if (FindNamed<TextBlock>(row, "StatusIcon") is { } statusIcon &&
                    FindNamed<TextBlock>(row, "Badge") is { } badge)
                {
                    if (_state.HasRomBacking && !_state.IsFieldWritable(field.Id))
                    {
                        statusIcon.Text = "!";
                        statusIcon.Foreground = EditorTheme.WarningBrush;
                        badge.Text = "Needs rebuild";
                        badge.Foreground = EditorTheme.WarningBrush;
                    }
                    else if (isInstalled)
                    {
                        statusIcon.Text = "✓";
                        statusIcon.Foreground = EditorTheme.SuccessBrush;
                        badge.Text = "Installed";
                        badge.Foreground = EditorTheme.SuccessBrush;
                    }
                    else
                    {
                        statusIcon.Text = "○";
                        statusIcon.Foreground = EditorTheme.TextDimBrush;
                        badge.Text = "Available";
                        badge.Foreground = EditorTheme.TextDimBrush;
                    }
                }

                if (FindNamed<Button>(row, "Install") is { } install)
                    install.IsEnabled = writable && (!isInstalled || field.Kind == RuntimeConfigFieldKind.U8);
                if (FindNamed<Button>(row, "Uninstall") is { } uninstall)
                    uninstall.IsEnabled = writable && isInstalled;
                if (field.Kind == RuntimeConfigFieldKind.U8 &&
                    FindNamed<CompactSpinBox>(row, "Value") is { } spin)
                {
                    spin.Value = _state.Get(field.Id);
                    spin.IsEnabled = writable;
                }
            }
        }
        finally
        {
            _suppress = false;
        }

        ApplyFilter();
    }

    private void AfterEdit()
    {
        if (_workingRom is not null && _scenes is not null && _state is not null)
            _workingRom.Sync(_scenes, _charmap, _state);
        RefreshFromState();
        DirtyChanged?.Invoke(this, EventArgs.Empty);
    }

    private void ResetToRom()
    {
        if (_state is null || _changes is null)
            return;
        RuntimeConfigEditing.ResetToSource(_changes, _state);
        AfterEdit();
    }

    private void ApplyFilter()
    {
        var filter = _filterBox.Text?.Trim() ?? string.Empty;
        var hasFilter = filter.Length > 0;

        foreach (var child in _listHost.Children.OfType<Control>())
        {
            if (child.Tag is string tag && tag.StartsWith("group:", StringComparison.Ordinal))
            {
                var groupName = tag["group:".Length..];
                child.IsVisible = !hasFilter || RuntimeConfigSchema.Fields.Any(f =>
                    f.Group == groupName && FieldMatches(f, filter));
                continue;
            }

            if (child.Tag is string fieldId)
            {
                var field = RuntimeConfigSchema.Find(fieldId);
                child.IsVisible = field is null || !hasFilter || FieldMatches(field, filter);
            }
        }
    }

    private static bool FieldMatches(RuntimeConfigFieldDef field, string filter) =>
        field.Id.Contains(filter, StringComparison.OrdinalIgnoreCase) ||
        field.DisplayName.Contains(filter, StringComparison.OrdinalIgnoreCase) ||
        field.Description.Contains(filter, StringComparison.OrdinalIgnoreCase) ||
        field.Group.Contains(filter, StringComparison.OrdinalIgnoreCase);

    private static T? FindNamed<T>(Control root, string name) where T : Control
    {
        if (root is T match && string.Equals(root.Name, name, StringComparison.Ordinal))
            return match;
        if (root is Panel panel)
        {
            foreach (var child in panel.Children.OfType<Control>())
            {
                var found = FindNamed<T>(child, name);
                if (found is not null)
                    return found;
            }
        }
        else if (root is Decorator decorator && decorator.Child is Control child)
        {
            return FindNamed<T>(child, name);
        }
        else if (root is ContentControl content && content.Content is Control contentChild)
        {
            return FindNamed<T>(contentChild, name);
        }

        return null;
    }
}
