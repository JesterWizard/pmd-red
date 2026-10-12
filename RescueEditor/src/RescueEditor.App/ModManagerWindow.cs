using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Platform.Storage;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Orders and toggles the project's mod stack. Works on copies, so Cancel changes nothing.</summary>
public sealed class ModManagerWindow : Window
{
    private readonly string? _baseRomSha1;
    private readonly List<(string Path, bool Enabled)> _original;
    private readonly List<ModStackEntryInfo> _infos = new();
    private List<ModConflict> _conflicts = new();
    private ModStackEntryInfo? _selected;
    private bool _rebuilding;

    private readonly ListBox _list;
    private readonly TextBlock _empty;
    private readonly StackPanel _details;
    private readonly Button _remove;
    private readonly Button _locate;
    private readonly Button _moveUp;
    private readonly Button _moveDown;
    private readonly Button _apply;

    public ModManagerWindow(IReadOnlyList<ProjectModEntry> mods, string? baseRomSha1)
    {
        ArgumentNullException.ThrowIfNull(mods);
        Title = "Mods";
        Width = 720;
        Height = 520;
        MinWidth = 560;
        MinHeight = 380;
        CanResize = true;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        EditorChrome.StyleDialogWindow(this);
        AppIcon.Apply(this);

        _baseRomSha1 = baseRomSha1;
        _original = mods.Select(mod => (mod.Path, mod.Enabled)).ToList();
        foreach (var mod in mods)
        {
            var copy = new ProjectModEntry { Path = mod.Path, Name = mod.Name, Enabled = mod.Enabled };
            _infos.Add(ModStack.Inspect(copy, baseRomSha1));
        }

        var header = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Margin = new Thickness(0, 0, 0, EditorTheme.Space4),
            Children =
            {
                EditorChrome.PaneTitle("Mods"),
                EditorChrome.MutedBody("Mods load top to bottom. Where two mods change the same thing, the lower one wins. Your own project edits always apply last."),
            },
        };
        DockPanel.SetDock(header, Dock.Top);

        var cancel = EditorChrome.ToolButton("Cancel");
        cancel.Click += (_, _) => Close();
        _apply = EditorChrome.ToolButton("Apply", primary: true);
        _apply.Click += (_, _) => ApplyChanges();
        var footerButtons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
            Children = { cancel, _apply },
        };
        DockPanel.SetDock(footerButtons, Dock.Right);
        var footerNote = EditorChrome.MutedBody("Apply reloads the ROM (a few seconds) and clears undo history.");
        footerNote.VerticalAlignment = VerticalAlignment.Center;
        var footer = new DockPanel
        {
            Margin = new Thickness(0, EditorTheme.Space4, 0, 0),
            Children = { footerButtons, footerNote },
        };
        DockPanel.SetDock(footer, Dock.Bottom);

        var add = EditorChrome.ToolButton("Add Mod…", tip: "Add a .rtmod package or a mod folder's manifest.json");
        add.Click += async (_, _) => await AddModsAsync();
        _remove = EditorChrome.ToolButton("Remove");
        _remove.Click += (_, _) => RemoveSelected();
        _locate = EditorChrome.ToolButton("Locate…", tip: "Point a missing mod at its new location");
        _locate.Click += async (_, _) => await LocateSelectedAsync();
        _moveUp = EditorChrome.ToolButton("Move Up");
        _moveUp.Click += (_, _) => MoveSelected(-1);
        _moveDown = EditorChrome.ToolButton("Move Down");
        _moveDown.Click += (_, _) => MoveSelected(1);
        var enableAll = EditorChrome.ToolButton("Enable All");
        enableAll.Click += (_, _) => SetAllEnabled(true);
        enableAll.Margin = new Thickness(0, EditorTheme.Space4, 0, 0);
        var disableAll = EditorChrome.ToolButton("Disable All");
        disableAll.Click += (_, _) => SetAllEnabled(false);
        foreach (var button in new[] { add, _remove, _locate, _moveUp, _moveDown, enableAll, disableAll })
            button.MinWidth = 110;
        var side = new StackPanel
        {
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
            Children = { add, _remove, _locate, _moveUp, _moveDown, enableAll, disableAll },
        };
        DockPanel.SetDock(side, Dock.Right);

        _list = new ListBox();
        EditorChrome.StyleList(_list);
        _list.SelectionChanged += (_, _) => OnSelectionChanged();
        _list.AddHandler(InputElement.KeyDownEvent, (_, e) => OnListKeyDown(e), RoutingStrategies.Tunnel);

        _empty = EditorChrome.MutedBody("No mods yet. Use Add Mod… to load a .rtmod package.");
        _empty.Margin = new Thickness(EditorTheme.Space4);

        _details = new StackPanel { Spacing = EditorTheme.Space1 };
        var detailsCard = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            CornerRadius = EditorTheme.CardRadius,
            Padding = new Thickness(EditorTheme.Space3),
            MinHeight = 96,
            Margin = new Thickness(0, EditorTheme.Space4, 0, 0),
            Child = _details,
        };
        var center = new Grid { RowDefinitions = new RowDefinitions("*,Auto") };
        center.Children.Add(_list);
        center.Children.Add(_empty);
        Grid.SetRow(detailsCard, 1);
        center.Children.Add(detailsCard);

        var root = new DockPanel
        {
            Margin = new Thickness(EditorTheme.Space5),
            Children = { header, footer, side, center },
        };
        Content = root;
        DragDrop.SetAllowDrop(this, true);
        DragDrop.AddDragOverHandler(this, OnDragOver);
        DragDrop.AddDropHandler(this, OnDrop);

        KeyDown += (_, e) =>
        {
            if (e.Key != Key.Escape)
                return;
            Close();
            e.Handled = true;
        };

        Refresh();
    }

    /// <summary>The edited mod list when the user pressed Apply; null when cancelled.</summary>
    public List<ProjectModEntry>? Result { get; private set; }

    private void Refresh()
    {
        _conflicts = ModStack.FindConflicts(_infos.Where(info => info.Entry.Enabled).ToList());

        _rebuilding = true;
        try
        {
            _list.ItemsSource = _infos.Select(BuildRow).ToList();
            _list.SelectedIndex = SelectedPosition();
        }
        finally
        {
            _rebuilding = false;
        }

        _list.IsVisible = _infos.Count > 0;
        _empty.IsVisible = _infos.Count == 0;
        UpdateButtons();
        UpdateDetails();
    }

    private Control BuildRow(ModStackEntryInfo info)
    {
        var entry = info.Entry;
        var check = new CheckBox { IsChecked = entry.Enabled };
        check.IsCheckedChanged += (_, _) =>
        {
            entry.Enabled = check.IsChecked == true;
            Refresh();
        };
        var toggle = new Border
        {
            Margin = new Thickness(0, 0, EditorTheme.Space3, 0),
            VerticalAlignment = VerticalAlignment.Top,
            Child = check,
        };
        // A checkbox press must not also select the row.
        toggle.AddHandler(InputElement.PointerPressedEvent, static (_, e) => e.Handled = true, RoutingStrategies.Bubble);

        var text = new StackPanel
        {
            Spacing = EditorTheme.Space1,
            Children =
            {
                new TextBlock
                {
                    Text = info.DisplayName,
                    FontWeight = FontWeight.SemiBold,
                    Foreground = entry.Enabled ? EditorTheme.TextPrimaryBrush : EditorTheme.TextMutedBrush,
                    TextTrimming = TextTrimming.CharacterEllipsis,
                },
                new TextBlock
                {
                    Text = info.Summary,
                    FontSize = EditorTheme.FontMeta,
                    Foreground = info.Error is null ? EditorTheme.TextMutedBrush : EditorTheme.DangerBrush,
                    TextWrapping = TextWrapping.Wrap,
                },
            },
        };
        var overlaps = entry.Enabled ? ConflictsInvolving(info.DisplayName) : new List<ModConflict>();
        if (overlaps.Count > 0)
        {
            var partners = OverlapPartners(info.DisplayName, overlaps);
            text.Children.Add(new TextBlock
            {
                Text = "⚠ Overlaps with " + string.Join(", ", partners),
                FontSize = EditorTheme.FontMeta,
                Foreground = EditorTheme.WarningBrush,
                TextWrapping = TextWrapping.Wrap,
            });
        }

        var row = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("Auto,*"),
            Margin = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
            Children = { toggle, text },
        };
        Grid.SetColumn(text, 1);
        return row;
    }

    private void UpdateButtons()
    {
        var position = SelectedPosition();
        SetButtonEnabled(_remove, position >= 0);
        SetButtonEnabled(_locate, _selected is not null && IsMissing(_selected.Entry.Path));
        SetButtonEnabled(_moveUp, position > 0);
        SetButtonEnabled(_moveDown, position >= 0 && position < _infos.Count - 1);
        SetButtonEnabled(_apply, IsDirty());
    }

    private void UpdateDetails()
    {
        _details.Children.Clear();
        if (_selected is not { } info)
        {
            _details.Children.Add(EditorChrome.MutedBody("Select a mod to see its details."));
            return;
        }

        _details.Children.Add(DetailLine($"File: {info.Entry.Path}", EditorTheme.TextSecondaryBrush, mono: true));
        if (info.Package is { } package)
        {
            _details.Children.Add(DetailLine($"Made for: {package.ProfileName}", EditorTheme.TextSecondaryBrush));
            foreach (var warning in package.Warnings)
                _details.Children.Add(DetailLine($"Warning: {warning}", EditorTheme.WarningBrush));
        }

        if (info.Error is not null)
            _details.Children.Add(DetailLine(info.Error, EditorTheme.DangerBrush));
        foreach (var conflict in ConflictsInvolving(info.DisplayName))
        {
            _details.Children.Add(DetailLine(
                $"{conflict.EarlierMod} → {conflict.LaterMod}: {conflict.Detail}",
                EditorTheme.WarningBrush));
        }
    }

    private void OnSelectionChanged()
    {
        if (_rebuilding)
            return;

        var index = _list.SelectedIndex;
        _selected = index >= 0 && index < _infos.Count ? _infos[index] : null;
        UpdateButtons();
        UpdateDetails();
    }

    private void OnListKeyDown(KeyEventArgs e)
    {
        var alt = e.KeyModifiers.HasFlag(KeyModifiers.Alt);
        if (e.Key == Key.Delete)
            RemoveSelected();
        else if (alt && e.Key == Key.Up)
            MoveSelected(-1);
        else if (alt && e.Key == Key.Down)
            MoveSelected(1);
        else
            return;
        e.Handled = true;
    }

    private async Task AddModsAsync()
    {
        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Add RescueTemple Mod Package",
            AllowMultiple = true,
            FileTypeFilter =
            [
                new FilePickerFileType("RescueTemple Mod Package") { Patterns = ["*.rtmod", "manifest.json"] },
                FilePickerFileTypes.All,
            ],
        });

        AddPaths(files.Select(file => file.Path.LocalPath).ToList());
    }

    /// <summary>Adds mod packages or mod folders (or their manifest.json) to the stack, then selects the last one added.</summary>
    private void AddPaths(IEnumerable<string> paths)
    {
        var known = _infos
            .Select(info => Path.GetFullPath(info.Entry.Path))
            .ToHashSet(StringComparer.OrdinalIgnoreCase);
        ModStackEntryInfo? added = null;
        foreach (var pickedPath in paths)
        {
            var path = pickedPath;
            if (path.EndsWith("manifest.json", StringComparison.OrdinalIgnoreCase))
                path = Path.GetDirectoryName(path) ?? path;

            var fullPath = Path.GetFullPath(path);
            if (!known.Add(fullPath))
                continue;

            var entry = new ProjectModEntry { Path = fullPath, Enabled = true };
            var info = ModStack.Inspect(entry, _baseRomSha1);
            entry.Name = info.DisplayName;
            entry.Enabled = info.Error is null;
            _infos.Add(info);
            added = info;
        }

        if (added is null)
            return;

        _selected = added;
        Refresh();
    }

    private void OnDragOver(object? sender, DragEventArgs e)
    {
        e.DragEffects = e.DataTransfer.TryGetFiles() is { Length: > 0 } ? DragDropEffects.Copy : DragDropEffects.None;
    }

    private void OnDrop(object? sender, DragEventArgs e)
    {
        e.Handled = true;
        var mods = (e.DataTransfer.TryGetFiles() ?? Array.Empty<IStorageItem>())
            .Select(item => item.TryGetLocalPath())
            .OfType<string>()
            .Where(path => DroppedFiles.Classify(path, Directory.Exists, File.Exists) == DroppedFileKind.Mod)
            .ToList();
        if (mods.Count > 0)
            AddPaths(mods);
    }

    /// <summary>Points the selected missing mod at a new package or folder. Its name and enabled state carry over.</summary>
    private async Task LocateSelectedAsync()
    {
        if (_selected is not { } old)
            return;

        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Locate RescueTemple Mod Package",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("RescueTemple Mod Package") { Patterns = ["*.rtmod", "manifest.json"] },
                FilePickerFileTypes.All,
            ],
        });
        if (files.Count == 0)
            return;

        // The picker is async, so find the entry again instead of reusing an index from before it opened.
        var index = _infos.IndexOf(old);
        if (index < 0)
            return;

        var path = files[0].Path.LocalPath;
        if (path.EndsWith("manifest.json", StringComparison.OrdinalIgnoreCase))
            path = Path.GetDirectoryName(path) ?? path;
        var fullPath = Path.GetFullPath(path);

        var alreadyListed = _infos.Any(other =>
            !ReferenceEquals(other, old) &&
            string.Equals(Path.GetFullPath(other.Entry.Path), fullPath, StringComparison.OrdinalIgnoreCase));
        if (alreadyListed)
            return;

        var relocated = new ProjectModEntry { Path = fullPath, Name = old.Entry.Name, Enabled = old.Entry.Enabled };
        var info = ModStack.Inspect(relocated, _baseRomSha1);
        if (info.Error is not null)
            relocated.Enabled = false;

        _infos[index] = info;
        _selected = info;
        Refresh();
    }

    private static bool IsMissing(string path) => !File.Exists(path) && !Directory.Exists(path);

    private void RemoveSelected()
    {
        var position = SelectedPosition();
        if (position < 0)
            return;

        _infos.RemoveAt(position);
        _selected = _infos.Count == 0 ? null : _infos[Math.Min(position, _infos.Count - 1)];
        Refresh();
    }

    private void MoveSelected(int delta)
    {
        var position = SelectedPosition();
        var target = position + delta;
        if (position < 0 || target < 0 || target >= _infos.Count)
            return;

        (_infos[position], _infos[target]) = (_infos[target], _infos[position]);
        Refresh();
    }

    private void SetAllEnabled(bool enabled)
    {
        foreach (var info in _infos)
        {
            // Broken or wrong-baserom mods stay off; the user can still tick them by hand.
            if (enabled && info.Error is not null)
                continue;
            info.Entry.Enabled = enabled;
        }
        Refresh();
    }

    private void ApplyChanges()
    {
        Result = _infos.Select(info => new ProjectModEntry
        {
            Path = info.Entry.Path,
            Name = info.Entry.Name,
            Enabled = info.Entry.Enabled,
        }).ToList();
        Close();
    }

    private bool IsDirty() =>
        !_infos.Select(info => (info.Entry.Path, info.Entry.Enabled)).SequenceEqual(_original);

    private int SelectedPosition() => _selected is null ? -1 : _infos.IndexOf(_selected);

    private List<ModConflict> ConflictsInvolving(string name) =>
        _conflicts.Where(conflict => conflict.EarlierMod == name || conflict.LaterMod == name).ToList();

    private static List<string> OverlapPartners(string name, IEnumerable<ModConflict> conflicts) =>
        conflicts
            .Select(conflict => conflict.EarlierMod == name ? conflict.LaterMod : conflict.EarlierMod)
            .Where(other => other != name)
            .Distinct(StringComparer.Ordinal)
            .ToList();

    private static TextBlock DetailLine(string text, IBrush brush, bool mono = false) => new()
    {
        Text = text,
        FontSize = EditorTheme.FontMeta,
        FontFamily = mono ? EditorTheme.MonoFont : EditorTheme.UiFont,
        Foreground = brush,
        TextWrapping = TextWrapping.Wrap,
    };

    private static void SetButtonEnabled(Button button, bool enabled)
    {
        button.IsEnabled = enabled;
        button.Opacity = enabled ? 1 : 0.45;
    }
}
