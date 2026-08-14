
using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Controls.Templates;
using Avalonia.Media.Imaging;
using Avalonia.Input;
using Avalonia.Input.Platform;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Platform.Storage;
using Avalonia.Styling;
using AvaloniaEdit;
using AvaloniaEdit.CodeCompletion;
using AvaloniaEdit.Document;
using AvaloniaEdit.Editing;
using AvaloniaEdit.Rendering;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Popup source / high-level event editor for a scene's station scripts.</summary>
public sealed class SceneScriptWindow : Window
{
    private readonly Scene _scene;
    private readonly SceneDatabase? _database;
    private readonly ChangeService _changes;
    private readonly ScriptNamedDefinitions? _names;
    private readonly ScriptSceneCast _cast;
    private readonly PortraitAtlas? _portraits;
    private readonly ActorSpriteAtlas? _actors;
    private readonly RomImage? _rom;
    private readonly string? _repoRoot;
    private readonly Action<ScriptEditorKind>? _kindChanged;
    private readonly TextEditor _editor;
    private readonly ScriptColorizingTransformer _colorizer;
    private readonly TextBlock _status;
    private readonly TextBlock _counts;
    private readonly TextBlock _commandTip;
    private readonly TextBlock _castRoster;
    private readonly InstantComboBox _commandInfo;
    private readonly InstantComboBox _exportScope;
    private readonly InstantComboBox _scriptPicker;
    private readonly InstantComboBox _insertOp;
    private readonly ListBox _eventList;
    private readonly StackPanel _eventParams;
    private readonly Border _scriptWell;
    private readonly Border _eventHost;
    private readonly ToggleButton _scriptKindToggle;
    private readonly ToggleButton _eventKindToggle;
    private readonly TextBlock _title;
    private IReadOnlyList<ScriptSourceError> _errors = [];
    private CompletionWindow? _completion;
    private ScriptEditorKind _kind;
    private ScriptSourceParseResult _eventParsed = new();
    private int _eventSectionIndex;
    private bool _suppressKindToggle;
    private bool _suppressEventSelect;
    private bool _suppressParamEvents;
    private bool _suppressScriptPicker;
    private readonly Dictionary<(EventEditorVisualKind Kind, int Id, int Extra, int Species), WriteableBitmap?> _visualBitmaps = new();

    public event EventHandler? Applied;

    public SceneScriptWindow(
        Scene scene,
        ChangeService changes,
        SceneDatabase? database,
        int? focusGroup = null,
        int? focusSector = null,
        int? focusStationIndex = null,
        ScriptNamedDefinitions? names = null,
        RomImage? rom = null,
        string? repositoryRoot = null,
        ScriptAssetHit? focusHit = null,
        NamedIdCatalog? monsters = null,
        ScriptEditorKind initialKind = ScriptEditorKind.Script,
        Action<ScriptEditorKind>? kindChanged = null,
        PortraitAtlas? portraits = null,
        ActorSpriteAtlas? actors = null)
    {
        _scene = scene;
        _changes = changes;
        _database = database;
        _names = names;
        _kindChanged = kindChanged;
        _portraits = portraits;
        _actors = actors;
        _rom = rom;
        _kind = initialKind;

        var repoRoot = repositoryRoot;
        if (string.IsNullOrWhiteSpace(repoRoot) && rom is not null)
            repoRoot = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _repoRoot = repoRoot;
        if (monsters is null && !string.IsNullOrWhiteSpace(repoRoot))
        {
            var monsterPath = Path.Combine(repoRoot, "include", "constants", "monster.h");
            if (File.Exists(monsterPath))
                monsters = NamedIdCatalogs.ParseMonsterDefines(File.ReadAllText(monsterPath));
        }

        ScriptSceneCast cast;
        try
        {
            cast = ScriptSceneCast.BuildFromRom(
                scene,
                rom,
                RomProfile.Us10,
                monsters,
                repoRoot,
                focusGroup ?? focusHit?.Group ?? -1,
                focusSector ?? focusHit?.Sector ?? -1);
        }
        catch
        {
            cast = ScriptSceneCast.Empty;
        }

        _cast = cast;

        Title = string.IsNullOrWhiteSpace(scene.Name)
            ? "Script"
            : $"Script — {scene.Name}";
        Width = 820;
        Height = 600;
        MinWidth = 480;
        MinHeight = 320;
        CanResize = true;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        EditorChrome.StyleDialogWindow(this);
        AppIcon.Apply(this);

        _counts = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
        };

        _commandTip = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextSecondaryBrush,
            TextWrapping = TextWrapping.Wrap,
            MaxHeight = 96,
        };

        _commandInfo = new InstantComboBox
        {
            Width = 200,
            PlaceholderText = "Command info…",
        };
        foreach (var name in ScriptCommandDocs.AlphabeticalCommandNames)
        {
            var item = new ComboBoxItem { Content = name };
            if (ScriptCommandDocs.TryGetByName(name, out var doc))
                ToolTip.SetTip(item, ScriptCommandDocs.FormatTooltip(doc, _names, _cast));
            _commandInfo.Items.Add(item);
        }

        _commandInfo.SelectionChanged += (_, _) =>
        {
            if (_commandInfo.SelectedItem is ComboBoxItem { Content: string name } &&
                ScriptCommandDocs.TryGetByName(name, out var doc))
                _commandTip.Text = ScriptCommandDocs.FormatTooltip(doc, _names, _cast);
            else
                _commandTip.Text = string.Empty;
        };

        _castRoster = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextSecondaryBrush,
            TextWrapping = TextWrapping.Wrap,
            Text = _cast.RosterText(),
        };

        _colorizer = new ScriptColorizingTransformer(() => _errors);
        _editor = new TextEditor
        {
            Document = new TextDocument(SceneScriptSource.Format(scene, database?.DialogueByOffset, names, _cast)),
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontBody,
            Foreground = EditorTheme.TextPrimaryBrush,
            Background = EditorTheme.InputBgBrush,
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            WordWrap = false,
            ShowLineNumbers = true,
        };
        _editor.Options.ConvertTabsToSpaces = true;
        _editor.Options.EnableHyperlinks = false;
        _editor.Options.EnableEmailHyperlinks = false;
        _editor.TextArea.SelectionBrush = EditorTheme.SelectionBrush;
        _editor.TextArea.TextView.LinkTextForegroundBrush = EditorTheme.AccentBrush;
        _editor.TextArea.TextView.LineTransformers.Add(_colorizer);
        _editor.LineNumbersForeground = EditorTheme.TextDimBrush;
        _editor.TextChanged += (_, _) => RefreshHighlights();
        _editor.TextArea.TextEntered += OnTextEntered;
        _editor.TextArea.KeyDown += OnEditorKeyDown;
        _editor.TextArea.TextView.PointerMoved += OnPointerMoved;
        _editor.TextArea.TextView.PointerExited += (_, _) => ToolTip.SetTip(_editor, null);

        _status = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            TextWrapping = TextWrapping.NoWrap,
            TextTrimming = TextTrimming.CharacterEllipsis,
            VerticalAlignment = VerticalAlignment.Center,
            MinWidth = 0,
            Text = "Hover over commands for details",
        };

        var apply = EditorChrome.ToolButton("Apply", primary: true);
        apply.Click += (_, _) => Apply();
        var copyC = EditorChrome.ToolButton("Copy code");
        copyC.Click += async (_, _) => await CopyCAsync();
        var saveC = EditorChrome.ToolButton("Download code");
        saveC.Click += async (_, _) => await SaveCAsync();
        var close = EditorChrome.ToolButton("Close");
        close.Click += (_, _) => Close();

        _exportScope = new InstantComboBox { Width = 132 };
        _exportScope.Items.Add(new ComboBoxItem { Content = "This script", Tag = DecompScriptExportScope.CurrentScript });
        _exportScope.Items.Add(new ComboBoxItem { Content = "This sector", Tag = DecompScriptExportScope.CurrentSector });
        _exportScope.Items.Add(new ComboBoxItem { Content = "Whole scene", Tag = DecompScriptExportScope.WholeScene });
        _exportScope.SelectedIndex = 0;

        _scriptPicker = new InstantComboBox { Width = 240, MinWidth = 180, IsVisible = false };
        _scriptPicker.SelectionChanged += (_, _) => OnScriptPickerChanged();

        _title = new TextBlock
        {
            Text = "SCENE SCRIPT",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontPanel,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextMutedBrush,
            LetterSpacing = 0.6,
            VerticalAlignment = VerticalAlignment.Center,
        };
        _scriptKindToggle = EditorChrome.ToolToggle("Script", isChecked: true, tip: "Opcode source editor");
        _eventKindToggle = EditorChrome.ToolToggle("Event", tip: "High-level event list");
        var helpToggle = EditorChrome.ToolToggle("Help", tip: "Scene cast — lives in this sector");
        helpToggle.IsVisible = _cast.Members.Count > 0;
        _scriptKindToggle.IsCheckedChanged += (_, _) =>
        {
            if (_suppressKindToggle || _scriptKindToggle.IsChecked != true)
                return;
            TrySetKind(ScriptEditorKind.Script);
        };
        _eventKindToggle.IsCheckedChanged += (_, _) =>
        {
            if (_suppressKindToggle || _eventKindToggle.IsChecked != true)
                return;
            TrySetKind(ScriptEditorKind.Event);
        };
        var commandLabel = new TextBlock
        {
            Text = "Info",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextDimBrush,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(0, 0, EditorTheme.Space2, 0),
        };
        var headerRight = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { _scriptKindToggle, _eventKindToggle, helpToggle, commandLabel, _commandInfo, _counts },
        };
        DockPanel.SetDock(headerRight, Dock.Right);
        var header = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space4, 0),
            Height = EditorTheme.ToolbarHeight,
            Child = new DockPanel { LastChildFill = true, Children = { headerRight, _title } },
        };

        var tipPanel = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
            Child = _commandTip,
            IsVisible = false,
        };
        _commandTip.PropertyChanged += (_, e) =>
        {
            if (e.Property == TextBlock.TextProperty)
                tipPanel.IsVisible = !string.IsNullOrWhiteSpace(_commandTip.Text);
        };

        var castPanel = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
            Child = _castRoster,
            IsVisible = false,
        };
        helpToggle.IsCheckedChanged += (_, _) =>
        {
            castPanel.IsVisible = helpToggle.IsChecked == true && _cast.Members.Count > 0;
        };

        var buttons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Right,
            Children = { _scriptPicker, _exportScope, copyC, saveC, apply, close },
        };
        DockPanel.SetDock(buttons, Dock.Right);
        var footer = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Padding = new Thickness(EditorTheme.Space4, 0),
            Height = EditorTheme.ToolbarHeight,
            Child = new DockPanel { LastChildFill = true, Children = { buttons, _status } },
        };

        _scriptWell = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            Child = _editor,
        };

        _eventList = new ListBox();
        EditorChrome.StyleList(_eventList);
        _eventList.Styles.Add(new Style(x => x.OfType<ListBoxItem>())
        {
            Setters =
            {
                new Setter(ListBoxItem.PaddingProperty, new Thickness(EditorTheme.Space2, EditorTheme.Space1)),
                new Setter(ListBoxItem.MinHeightProperty, EventEditorVisuals.RowHeight + EditorTheme.Space1 * 2),
                new Setter(ListBoxItem.HorizontalContentAlignmentProperty, HorizontalAlignment.Stretch),
            },
        });
        _eventList.ItemTemplate = new FuncDataTemplate<EventEditorRow>((row, _) => BuildEventRow(row), true);
        _eventList.SelectionChanged += (_, _) => OnEventRowSelected();
        _eventList.DoubleTapped += (_, _) => FocusEventParams();
        _eventList.KeyDown += OnEventListKeyDown;

        _insertOp = new InstantComboBox { Width = 160, PlaceholderText = "Insert…" };
        foreach (var op in EventEditorList.InsertableOpcodes)
        {
            _insertOp.Items.Add(new ComboBoxItem
            {
                Content = ScriptOpcodeNames.GetName(op),
                Tag = op,
            });
        }
        _insertOp.SelectedIndex = 0;

        var insert = EditorChrome.ToolButton("Insert");
        insert.Click += (_, _) => InsertEventCommand();
        var delete = EditorChrome.ToolButton("Delete");
        delete.Click += (_, _) => DeleteEventCommand();
        var up = EditorChrome.IconButton("↑", tip: "Move up");
        up.Click += (_, _) => MoveEventCommand(-1);
        var down = EditorChrome.IconButton("↓", tip: "Move down");
        down.Click += (_, _) => MoveEventCommand(1);

        _eventParams = new StackPanel { Spacing = EditorTheme.Space2 };
        var eventToolbar = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space2, EditorTheme.Space1),
            Child = new StackPanel
            {
                Orientation = Orientation.Horizontal,
                Spacing = EditorTheme.Space2,
                Children = { _insertOp, insert, delete, up, down },
            },
        };
        var eventParamsHost = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Padding = new Thickness(0, EditorTheme.Space3, 0, EditorTheme.Space3),
            Child = new ScrollViewer
            {
                MaxHeight = 260,
                VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
                HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Disabled,
                Content = _eventParams,
            },
        };
        var eventBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(eventToolbar, Dock.Top);
        DockPanel.SetDock(eventParamsHost, Dock.Bottom);
        eventBody.Children.Add(eventToolbar);
        eventBody.Children.Add(eventParamsHost);
        eventBody.Children.Add(_eventList);
        _eventHost = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            Child = eventBody,
            IsVisible = false,
        };

        var well = new Panel { Children = { _scriptWell, _eventHost } };

        var root = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(header, Dock.Top);
        DockPanel.SetDock(castPanel, Dock.Top);
        DockPanel.SetDock(tipPanel, Dock.Top);
        DockPanel.SetDock(footer, Dock.Bottom);
        root.Children.Add(header);
        root.Children.Add(castPanel);
        root.Children.Add(tipPanel);
        root.Children.Add(footer);
        root.Children.Add(well);
        Content = root;

        RefreshCounts();
        RefreshHighlights();
        KeyDown += OnKeyDown;
        _editor.KeyDown += OnKeyDown;
        _editor.TextArea.KeyDown += OnKeyDown;

        if (_kind == ScriptEditorKind.Event)
            TrySetKind(ScriptEditorKind.Event, force: true);
        else
            SyncKindToggles();

        if (focusHit is { } hit)
            Opened += (_, _) => FocusHit(hit);
        else if (focusGroup is int group && focusSector is int sector && focusStationIndex is int index)
            Opened += (_, _) => FocusStation(group, sector, index);
    }

    public void FocusHit(ScriptAssetHit hit)
    {
        if (_kind == ScriptEditorKind.Event)
        {
            var kind = hit.Site switch
            {
                ScriptSiteKind.Station => "station",
                ScriptSiteKind.Live => "live",
                ScriptSiteKind.Object => "object",
                ScriptSiteKind.Effect => "effect",
                ScriptSiteKind.Event => "event",
                _ => "station",
            };
            SelectEventRow(kind, hit.Group, hit.Sector, hit.SiteIndex, 0);
            return;
        }

        var selection = ScriptAssetIndex.FindSourceSelection(_editor.Text ?? string.Empty, hit);
        if (selection.Line < 1)
        {
            if (hit.Site == ScriptSiteKind.Station)
                FocusStation(hit.Group, hit.Sector, hit.SiteIndex);
            return;
        }

        var documentLine = _editor.Document.GetLineByNumber(Math.Min(selection.Line, _editor.Document.LineCount));
        var start = Math.Clamp(documentLine.Offset + Math.Max(0, selection.Column), 0, _editor.Document.TextLength);
        var length = Math.Clamp(selection.Length, 1, Math.Max(1, documentLine.EndOffset - start));
        _editor.CaretOffset = start;
        _editor.Select(start, length);
        _editor.ScrollToLine(selection.Line);
        _editor.TextArea.Focus();
    }

    public void FocusStation(int group, int sector, int stationIndex)
    {
        if (_kind == ScriptEditorKind.Event)
        {
            SelectEventRow("station", group, sector, stationIndex, 0);
            return;
        }

        var line = SceneStations.FindStationHeaderLine(_editor.Text ?? string.Empty, group, sector, stationIndex);
        if (line < 1)
            return;
        var documentLine = _editor.Document.GetLineByNumber(Math.Min(line, _editor.Document.LineCount));
        _editor.CaretOffset = documentLine.Offset;
        _editor.ScrollToLine(line);
        _editor.TextArea.Focus();
    }

    private void OnKeyDown(object? sender, KeyEventArgs e)
    {
        if (e.Key == Key.S && e.KeyModifiers.HasFlag(KeyModifiers.Control))
        {
            Apply();
            e.Handled = true;
            return;
        }

        if (e.KeyModifiers.HasFlag(KeyModifiers.Control) &&
            e.Key is Key.Oem2 or Key.OemQuestion or Key.Divide)
        {
            ToggleComments();
            e.Handled = true;
        }
    }

    private void ToggleComments()
    {
        var document = _editor.Document;
        var start = _editor.SelectionStart;
        var length = Math.Max(0, _editor.SelectionLength);
        var end = start + length;
        if (end < start)
            (start, end) = (end, start);

        var startLine = document.GetLineByOffset(start);
        var endLine = document.GetLineByOffset(Math.Clamp(end, 0, document.TextLength));
        var startIndex = startLine.LineNumber - 1;
        var endIndex = endLine.LineNumber - 1;
        if (length > 0 && end == endLine.Offset && endIndex > startIndex)
            endIndex--;

        var caret = _editor.CaretOffset;
        document.Text = ScriptSourceComments.ToggleLines(document.Text, startIndex, endIndex);
        _editor.CaretOffset = Math.Clamp(caret, 0, document.TextLength);
    }

    private DecompScriptExportScope SelectedExportScope() =>
        _exportScope.SelectedItem is ComboBoxItem { Tag: DecompScriptExportScope scope }
            ? scope
            : DecompScriptExportScope.CurrentScript;

    private string BuildCExport()
    {
        var source = CurrentSource();
        var line = _kind == ScriptEditorKind.Event
            ? SelectedEventSourceLine()
            : _editor.TextArea.Caret.Line;
        var current = DecompScriptExport.FilterFromSourceLine(source, line);
        var filter = DecompScriptExport.FilterForScope(SelectedExportScope(), current);
        var parsed = SceneScriptSource.Parse(source, _database?.DialogueByOffset, _names);
        if (parsed.Ok && parsed.Sections.Count > 0)
            return DecompScriptExport.Format(_scene.MapId, parsed.Sections, filter, _names);
        return DecompScriptExport.Format(_scene, filter, _database?.DialogueByOffset, _names);
    }

    private async Task CopyCAsync()
    {
        var text = BuildCExport();
        if (string.IsNullOrWhiteSpace(text))
        {
            _status.Foreground = EditorTheme.DangerBrush;
            _status.Text = "Nothing to export for this scope.";
            return;
        }

        var clipboard = TopLevel.GetTopLevel(this)?.Clipboard;
        if (clipboard is null)
        {
            _status.Foreground = EditorTheme.DangerBrush;
            _status.Text = "Clipboard is not available.";
            return;
        }

        await clipboard.SetTextAsync(text);
        _status.Foreground = EditorTheme.TextMutedBrush;
        _status.Text = "Copied code to clipboard.";
    }

    private async Task SaveCAsync()
    {
        var text = BuildCExport();
        if (string.IsNullOrWhiteSpace(text))
        {
            _status.Foreground = EditorTheme.DangerBrush;
            _status.Text = "Nothing to export for this scope.";
            return;
        }

        var file = await StorageProvider.SaveFilePickerAsync(new FilePickerSaveOptions
        {
            Title = "Download code",
            SuggestedFileName = DecompScriptExport.SuggestedFileName(_scene),
            FileTypeChoices =
            [
                new FilePickerFileType("C header") { Patterns = ["*.h", "*.c"] },
            ],
        });
        if (file is null)
            return;

        await File.WriteAllTextAsync(file.Path.LocalPath, text);
        _status.Foreground = EditorTheme.TextMutedBrush;
        _status.Text = $"Wrote {file.Path.LocalPath}";
    }

    private void Apply()
    {
        var source = CurrentSource();
        var parsed = SceneScriptSource.Parse(source, _database?.DialogueByOffset, _names);
        _errors = parsed.Errors;
        _editor.TextArea.TextView.Redraw();
        if (!parsed.Ok)
        {
            _status.Foreground = EditorTheme.DangerBrush;
            _status.Text = string.Join(
                "\n",
                parsed.Errors.Take(8).Select(error => $"Line {error.Line}: {error.Message}"));
            return;
        }

        try
        {
            SceneEditing.ApplySceneScriptSource(_changes, _scene, parsed, _database, source);
        }
        catch (InvalidOperationException exception)
        {
            _status.Foreground = EditorTheme.DangerBrush;
            _status.Text = exception.Message;
            return;
        }

        _status.Foreground = EditorTheme.TextMutedBrush;
        _status.Text = "Applied to scene and working ROM. Ctrl+S applies again.";
        RefreshCounts();
        if (_kind == ScriptEditorKind.Event)
            RefreshEventList(keepSelection: true);
        Applied?.Invoke(this, EventArgs.Empty);
    }

    private void RefreshHighlights()
    {
        var parsed = SceneScriptSource.Parse(_editor.Text ?? string.Empty, _database?.DialogueByOffset, _names);
        _errors = parsed.Errors;
        _editor.TextArea.TextView.Redraw();
    }

    private void OnTextEntered(object? sender, TextInputEventArgs e)
    {
        if (_names is null || e.Text is null || e.Text.Length == 0)
            return;
        var ch = e.Text[0];
        if (ch is '(' or ',' || char.IsLetterOrDigit(ch) || ch == '_')
            ShowCompletion();
    }

    private void OnEditorKeyDown(object? sender, KeyEventArgs e)
    {
        if (e.Key == Key.Escape && _completion is not null)
        {
            _completion.Hide();
            e.Handled = true;
            return;
        }

        if (_names is not null &&
            e.Key == Key.Space &&
            e.KeyModifiers.HasFlag(KeyModifiers.Control))
        {
            ShowCompletion(force: true);
            e.Handled = true;
        }
    }

    private void OnPointerMoved(object? sender, PointerEventArgs e)
    {
        var view = _editor.TextArea.TextView;
        var pos = e.GetPosition(view);
        pos += view.ScrollOffset;
        var line = view.GetDocumentLineByVisualTop(pos.Y);
        if (line is null)
        {
            ToolTip.SetTip(_editor, null);
            return;
        }

        var messages = _errors
            .Where(error => error.Line == line.LineNumber)
            .Select(error => error.Message)
            .Distinct()
            .ToArray();
        if (messages.Length > 0)
        {
            ToolTip.SetTip(_editor, string.Join("\n", messages));
            return;
        }

        var lineText = _editor.Document.GetText(line);
        var column = 0;
        if (view.GetPosition(pos) is { } textPos && textPos.Location.Line == line.LineNumber)
            column = Math.Max(0, textPos.Location.Column - 1);
        ToolTip.SetTip(_editor, ScriptCommandDocs.TooltipAtColumn(lineText, column, _cast, _names));
    }

    private void ShowCompletion(bool force = false)
    {
        if (_names is null)
            return;

        var document = _editor.Document;
        var offset = _editor.CaretOffset;
        var line = document.GetLineByOffset(offset);
        var lineText = document.GetText(line);
        var column = offset - line.Offset;
        var query = ScriptCompletion.TryGetQuery(lineText, column);
        if (query is null || _names.KindFor(query.Op, query.ArgIndex) == ScriptNamedArgKind.None)
        {
            _completion?.Hide();
            return;
        }

        var hits = _names.Suggest(query.Op, query.ArgIndex, query.Prefix);
        if (hits.Count == 0 && !force)
        {
            _completion?.Hide();
            return;
        }

        if (hits.Count == 0)
            hits = _names.Suggest(query.Op, query.ArgIndex, string.Empty);

        if (hits.Count == 0)
        {
            _completion?.Hide();
            return;
        }

        _completion?.Hide();
        _completion = new CompletionWindow(_editor.TextArea);
        _completion.Closed += (_, _) => _completion = null;
        var data = _completion.CompletionList.CompletionData;
        foreach (var hit in hits)
            data.Add(new NamedIdCompletionData(hit.Name, hit.Id));

        var start = line.Offset + query.ReplacementStart;
        var length = query.ReplacementLength;
        _completion.StartOffset = start;
        _completion.EndOffset = start + length;
        _completion.Show();
    }

    private string CurrentSource() =>
        _kind == ScriptEditorKind.Event
            ? EventEditorList.FormatSource(_eventParsed, _database?.DialogueByOffset, _names, _cast)
            : _editor.Text ?? string.Empty;

    private bool TrySetKind(ScriptEditorKind kind, bool force = false)
    {
        if (!force && kind == _kind)
        {
            SyncKindToggles();
            return true;
        }

        if (kind == ScriptEditorKind.Event)
        {
            if (!EventEditorList.TryBuild(
                    _editor.Text ?? string.Empty,
                    _database?.DialogueByOffset,
                    _names,
                    _cast,
                    out var rows,
                    out var parsed,
                    _scene,
                    ResolveTypeSpecies,
                    PrettySpecies))
            {
                _status.Foreground = EditorTheme.DangerBrush;
                _status.Text = parsed.Errors.Count == 0
                    ? "Cannot open the event editor until the script parses."
                    : string.Join("  ", parsed.Errors.Take(4).Select(error => $"Line {error.Line}: {error.Message}"));
                SyncKindToggles();
                return false;
            }

            var caretLine = _editor.TextArea.Caret.Line;
            _eventParsed = parsed;
            _kind = ScriptEditorKind.Event;
            var caretRow = EventEditorList.FindRowIndexForSourceLine(rows, caretLine);
            _eventSectionIndex = caretRow >= 0 ? rows[caretRow].SectionIndex : EventEditorList.FindSectionIndex(parsed, "station", 0, 0, 0);
            if (_eventSectionIndex < 0)
                _eventSectionIndex = 0;
            PopulateScriptPicker();
            var visible = EventEditorList.ForSection(rows, _eventSectionIndex);
            BindEventRows(visible);
            var row = EventEditorList.FindRowIndexForSourceLine(visible, caretLine);
            if (row >= 0)
                SelectEventIndex(row);
        }
        else
        {
            var selected = SelectedEventRow();
            _editor.Document.Text = EventEditorList.FormatSource(
                _eventParsed, _database?.DialogueByOffset, _names, _cast);
            _kind = ScriptEditorKind.Script;
            if (selected is { } row)
            {
                var line = SceneStations.FindStationHeaderLine(
                    _editor.Text ?? string.Empty, row.Group, row.Sector, row.SiteIndex);
                if (row.SourceLine > 0)
                    line = row.SourceLine;
                if (line > 0)
                {
                    var documentLine = _editor.Document.GetLineByNumber(Math.Min(line, _editor.Document.LineCount));
                    _editor.CaretOffset = documentLine.Offset;
                    _editor.ScrollToLine(line);
                }
            }

            RefreshHighlights();
        }

        ApplyKindVisibility();
        SyncKindToggles();
        _kindChanged?.Invoke(_kind);
        _status.Foreground = EditorTheme.TextMutedBrush;
        _status.Text = _kind == ScriptEditorKind.Event
            ? "Event list — insert, delete, or edit the selected command. Ctrl+S applies."
            : "Hover over commands for details";
        return true;
    }

    private void ApplyKindVisibility()
    {
        var eventMode = _kind == ScriptEditorKind.Event;
        _eventHost.IsVisible = eventMode;
        _scriptWell.IsVisible = !eventMode;
        _scriptPicker.IsVisible = eventMode;
        _exportScope.IsVisible = !eventMode;
        _title.Text = eventMode ? "SCENE EVENTS" : "SCENE SCRIPT";
        Title = string.IsNullOrWhiteSpace(_scene.Name)
            ? (eventMode ? "Events" : "Script")
            : $"{(eventMode ? "Events" : "Script")} — {_scene.Name}";
    }

    private void SyncKindToggles()
    {
        _suppressKindToggle = true;
        _scriptKindToggle.IsChecked = _kind == ScriptEditorKind.Script;
        _eventKindToggle.IsChecked = _kind == ScriptEditorKind.Event;
        _suppressKindToggle = false;
    }

    private Control BuildEventRow(EventEditorRow row)
    {
        var text = new TextBlock
        {
            Text = row.DisplayLine,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextPrimaryBrush,
            TextWrapping = TextWrapping.NoWrap,
            TextTrimming = TextTrimming.CharacterEllipsis,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(0, 0, EditorTheme.Space2, 0),
        };
        var host = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(EditorTheme.Space2, 0),
            Height = EventEditorVisuals.RowHeight,
            MinHeight = EventEditorVisuals.RowHeight,
            Children = { text },
        };
        var thumb = TryVisual(row);
        if (thumb is not null)
            host.Children.Add(thumb);
        return host;
    }

    private Control? TryVisual(EventEditorRow row)
    {
        var image = ResolveVisual(row);
        if (image is null)
            return null;
        var maxW = row.Visual.Kind == EventEditorVisualKind.Map
            ? EventEditorVisuals.MapWidth
            : row.Visual.Kind is EventEditorVisualKind.Portrait or EventEditorVisualKind.Actor
                ? EventEditorVisuals.PortraitSize
                : EventEditorVisuals.IconSize;
        var maxH = row.Visual.Kind == EventEditorVisualKind.Map
            ? EventEditorVisuals.MapHeight
            : maxW;
        return new Image
        {
            Source = image,
            Width = maxW,
            Height = maxH,
            Stretch = Stretch.Uniform,
            VerticalAlignment = VerticalAlignment.Center,
        };
    }

    private WriteableBitmap? ResolveVisual(EventEditorRow row)
    {
        var visual = row.Visual;
        if (visual.Kind == EventEditorVisualKind.None)
            return null;
        var species = ResolveSpecies(row, visual);
        var key = (visual.Kind, visual.Id, visual.Extra, species);
        if (_visualBitmaps.TryGetValue(key, out var cached))
            return cached;

        var rgba = visual.Kind switch
        {
            EventEditorVisualKind.Map => TryRenderMap(visual.Id) ?? EventEditorVisuals.RenderIcon(visual.Kind),
            EventEditorVisualKind.Portrait => TryRenderPortrait(visual.Id, visual.Extra, species)
                ?? EventEditorVisuals.RenderIcon(visual.Kind),
            EventEditorVisualKind.Actor => TryRenderActor(species) ?? EventEditorVisuals.RenderIcon(visual.Kind),
            EventEditorVisualKind.Music or EventEditorVisualKind.Fade
                or EventEditorVisualKind.Jump or EventEditorVisualKind.Wait =>
                EventEditorVisuals.RenderIcon(visual.Kind),
            _ => null,
        };
        if (rgba is not null)
        {
            var maxW = visual.Kind switch
            {
                EventEditorVisualKind.Map => EventEditorVisuals.MapWidth,
                EventEditorVisualKind.Portrait or EventEditorVisualKind.Actor => EventEditorVisuals.PortraitSize,
                _ => EventEditorVisuals.IconSize,
            };
            var maxH = visual.Kind == EventEditorVisualKind.Map ? EventEditorVisuals.MapHeight : maxW;
            rgba = rgba.ScaleToFit(maxW, maxH);
        }

        WriteableBitmap? bitmap = null;
        try
        {
            if (rgba is not null)
                bitmap = RgbaBitmap.ToWriteable(rgba);
        }
        catch
        {
            bitmap = null;
        }

        _visualBitmaps[key] = bitmap;
        return bitmap;
    }

    private int ResolveSpecies(EventEditorRow row, EventEditorVisual visual)
    {
        if (visual.Kind == EventEditorVisualKind.Actor)
        {
            if (row.SectionKind == "live" && _cast.TryGet(row.SiteIndex, out var actor))
                return actor.SpeciesId;
            if (_cast.Members.Count > 0)
                return _cast.Members[0].SpeciesId;
            return 0;
        }

        if (visual.Kind != EventEditorVisualKind.Portrait)
            return 0;
        if (row.ResolvedSpeciesId > 0)
            return row.ResolvedSpeciesId;
        if (row.ResolvedLiveIndex is int bound && _cast.TryGet(bound, out var member))
            return member.SpeciesId;
        return 0;
    }

    private RgbaImage? TryRenderPortrait(int liveIndex, int emotion, int species)
    {
        if (_portraits is not null && species > 0)
        {
            var face = DialoguePortraitPreview.TryRender(_portraits, (short)species, emotion, scale: 1)
                ?? _portraits.TryGet((short)species, emotion);
            if (face is not null)
                return face;
        }

        return TryRenderActor(species);
    }

    private RgbaImage? TryRenderActor(int species)
    {
        if (_actors is null || species <= 0)
            return null;
        return _actors.TryGetStandingThumbnail(species) ?? _actors.TryGetSpeciesSprite(species);
    }

    private RgbaImage? TryRenderMap(int mapId)
    {
        if (_rom is null || _database is null)
            return null;
        var scene = mapId == _scene.MapId ? _scene : _database.FindScene(mapId);
        if (scene is null)
            return null;
        try
        {
            var preview = SceneCompositor.RenderMapBackground(_rom, scene);
            if (preview?.Png is not { Length: > 0 } png)
                return null;
            return RgbaImage.FromPng(png);
        }
        catch
        {
            return null;
        }
    }

    private void BindEventRows(IReadOnlyList<EventEditorRow> rows, int? selectIndex = null, bool rebuildParams = true)
    {
        int keep;
        if (selectIndex is int explicitIndex)
            keep = explicitIndex;
        else if (_eventList.SelectedItem is EventEditorRow selected)
            keep = EventEditorList.VisibleIndexOf(rows, selected);
        else
            keep = -1;
        _suppressEventSelect = true;
        _eventList.ItemsSource = rows;
        _suppressEventSelect = false;
        if (keep >= 0 && keep < rows.Count)
            SelectEventIndex(keep, rebuildParams);
        else if (rebuildParams)
            RebuildEventParams(null);
    }

    private IReadOnlyList<EventEditorRow> BuildAllEventRows() =>
        EventEditorList.Build(
            _eventParsed,
            _database?.DialogueByOffset,
            _names,
            _cast,
            _scene,
            ResolveTypeSpecies,
            PrettySpecies);

    private IReadOnlyList<EventEditorRow> VisibleEventRows() =>
        EventEditorList.ForSection(BuildAllEventRows(), _eventSectionIndex);

    private short ResolveTypeSpecies(int typeId)
    {
        if (_rom is null)
            return 0;
        return GroundLivesTypes.ResolvePlaySpecies(
            _rom, RomProfile.Us10, typeId, PlayAppearance.CharmanderAndBulbasaur);
    }

    private string PrettySpecies(short species) =>
        DialogueFormatter.PrettySpeciesName(species, _repoRoot);

    private void PopulateScriptPicker()
    {
        _suppressScriptPicker = true;
        _scriptPicker.Items.Clear();
        ComboBoxItem? selected = null;
        foreach (var choice in EventEditorList.ListScripts(_eventParsed, _cast))
        {
            var item = new ComboBoxItem { Content = choice.Label, Tag = choice.SectionIndex };
            _scriptPicker.Items.Add(item);
            if (choice.SectionIndex == _eventSectionIndex)
                selected = item;
        }

        _scriptPicker.SelectedItem = selected;
        if (_scriptPicker.SelectedItem is null && _scriptPicker.Items.Count > 0)
            _scriptPicker.SelectedIndex = 0;
        _suppressScriptPicker = false;
    }

    private void OnScriptPickerChanged()
    {
        if (_suppressScriptPicker || _kind != ScriptEditorKind.Event)
            return;
        if (_scriptPicker.SelectedItem is not ComboBoxItem { Tag: int section })
            return;
        _eventSectionIndex = section;
        BindEventRows(VisibleEventRows(), 0);
    }

    private void RefreshEventList(bool keepSelection, bool rebuildParams = true)
    {
        BindEventRows(VisibleEventRows(), keepSelection ? null : 0, rebuildParams);
    }

    private EventEditorRow? SelectedEventRow() =>
        _eventList.SelectedItem as EventEditorRow;

    private int SelectedEventSourceLine() => SelectedEventRow()?.SourceLine ?? 1;

    private void SelectEventIndex(int index, bool rebuildParams = true)
    {
        if (_eventList.ItemsSource is not IReadOnlyList<EventEditorRow> rows)
            return;
        if (index < 0 || index >= rows.Count)
            return;
        _suppressEventSelect = true;
        _eventList.SelectedItem = rows[index];
        _suppressEventSelect = false;
        _eventList.ScrollIntoView(_eventList.SelectedItem);
        if (rebuildParams)
            RebuildEventParams(rows[index]);
    }

    private void SelectEventRow(string kind, int group, int sector, int siteIndex, int commandIndex)
    {
        var section = EventEditorList.FindSectionIndex(_eventParsed, kind, group, sector, siteIndex);
        if (section >= 0 && section != _eventSectionIndex)
        {
            _eventSectionIndex = section;
            PopulateScriptPicker();
            BindEventRows(VisibleEventRows(), 0, rebuildParams: false);
        }

        if (_eventList.ItemsSource is not IReadOnlyList<EventEditorRow> rows)
        {
            RefreshEventList(keepSelection: false);
            rows = _eventList.ItemsSource as IReadOnlyList<EventEditorRow> ?? [];
        }

        var index = EventEditorList.FindRowIndex(rows, kind, group, sector, siteIndex, commandIndex);
        if (index >= 0)
            SelectEventIndex(index);
    }

    private void OnEventRowSelected()
    {
        if (_suppressEventSelect)
            return;
        RebuildEventParams(SelectedEventRow());
    }

    private void FocusEventParams()
    {
        if (_eventParams.Children.Count > 0)
            _eventParams.Children[0].Focus();
    }

    private void OnEventListKeyDown(object? sender, KeyEventArgs e)
    {
        if (e.Key == Key.Delete)
        {
            DeleteEventCommand();
            e.Handled = true;
        }
        else if (e.Key == Key.Enter)
        {
            FocusEventParams();
            e.Handled = true;
        }
    }

    private byte SelectedInsertOp() =>
        _insertOp.SelectedItem is ComboBoxItem { Tag: byte op } ? op : (byte)0xDB;

    private void InsertEventCommand()
    {
        var stub = EventEditorList.CreateStub(SelectedInsertOp());
        var after = SelectedEventRow();
        if (after is { } row)
            EventEditorList.InsertAfter(_eventParsed, row, stub);
        else if (_eventSectionIndex >= 0 && _eventSectionIndex < _eventParsed.Sections.Count)
            EventEditorList.InsertAt(
                _eventParsed,
                _eventSectionIndex,
                _eventParsed.Sections[_eventSectionIndex].Commands.Count,
                stub);
        else
            return;

        var target = after is { } current ? current.CommandIndex + 1 : int.MaxValue;
        var rows = VisibleEventRows();
        BindEventRows(rows, 0, rebuildParams: false);
        var index = -1;
        for (var i = 0; i < rows.Count; i++)
        {
            if (rows[i].CommandIndex == target)
            {
                index = i;
                break;
            }
        }

        SelectEventIndex(index >= 0 ? index : Math.Max(0, rows.Count - 1));
    }

    private void DeleteEventCommand()
    {
        if (SelectedEventRow() is not { } row)
            return;
        var keep = Math.Max(0, EventEditorList.VisibleIndexOf(VisibleEventRows(), row) - 1);
        EventEditorList.Remove(_eventParsed, row);
        var rows = VisibleEventRows();
        BindEventRows(rows, rows.Count == 0 ? null : Math.Min(keep, rows.Count - 1));
    }

    private void MoveEventCommand(int delta)
    {
        if (SelectedEventRow() is not { } row)
            return;
        EventEditorList.Move(_eventParsed, row, delta);
        var rows = VisibleEventRows();
        var next = EventEditorList.FindRowIndex(
            rows, row.SectionKind, row.Group, row.Sector, row.SiteIndex, row.CommandIndex + delta);
        BindEventRows(rows, next >= 0 ? next : EventEditorList.VisibleIndexOf(rows, row));
    }

    private void RebuildEventParams(EventEditorRow? row)
    {
        _eventParams.Children.Clear();
        if (row is null)
            return;
        _suppressParamEvents = true;
        var preview = TryVisual(row);
        if (preview is not null)
        {
            preview.HorizontalAlignment = HorizontalAlignment.Left;
            preview.Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, EditorTheme.Space4, EditorTheme.Space1);
            _eventParams.Children.Add(preview);
        }
        var fields = ScriptCommandSchema.GetSemanticFields(row.Op);
        if (fields is not null)
        {
            foreach (var binding in fields)
            {
                if (binding.Field == ScriptArgField.ArgPtr)
                    continue;
                var spin = binding.Field switch
                {
                    ScriptArgField.ArgByte => EditorChrome.CompactNumeric(0, 255),
                    ScriptArgField.ArgShort => EditorChrome.CompactNumeric(short.MinValue, short.MaxValue),
                    _ => EditorChrome.CompactNumeric(int.MinValue, int.MaxValue),
                };
                spin.Value = ScriptCommandSchema.Read(row.Command, binding.Field);
                var captured = binding;
                spin.ValueChanged += (_, _) =>
                {
                    if (_suppressParamEvents || SelectedEventRow() is not { } current)
                        return;
                    EventEditorList.SetParam(
                        _eventParsed, current, captured.Field, (int)(spin.Value ?? 0));
                    RefreshEventList(keepSelection: true, rebuildParams: false);
                };
                _eventParams.Children.Add(EditorChrome.PropertyRow(binding.Label, spin));
            }
        }

        if (row.DialogueSnippet is not null ||
            row.Op is 0x32 or 0x33 or 0x34 or 0x35 or 0x36 or 0x37 or 0x38 or 0x39 or 0xD0 or 0xD1)
        {
            var caption = new TextBlock
            {
                Text = "Text",
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                Foreground = EditorTheme.TextMutedBrush,
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space1),
            };
            var box = CreateDialogueEditor(row.DialogueSnippet ?? string.Empty);
            box.LostFocus += (_, _) =>
            {
                if (SelectedEventRow() is not { } current)
                    return;
                EventEditorList.SetDialogue(_eventParsed, current, box.Text);
                RefreshEventList(keepSelection: true, rebuildParams: false);
            };
            _eventParams.Children.Add(caption);
            _eventParams.Children.Add(box);
        }

        _suppressParamEvents = false;
    }

    private static TextBox CreateDialogueEditor(string text)
    {
        var lines = Math.Max(1, text.Split('\n').Length);
        var wrapped = Math.Max(lines, (int)Math.Ceiling(Math.Max(text.Length, 1) / 52.0));
        var height = Math.Clamp(14 + wrapped * 16, 72, 160);
        return new TextBox
        {
            Text = text,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.Wrap,
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextPrimaryBrush,
            Background = EditorTheme.InputBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            CornerRadius = new CornerRadius(0),
            Padding = new Thickness(EditorTheme.Space2, EditorTheme.Space2),
            MinHeight = height,
            MaxHeight = 160,
            Height = double.NaN,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            Margin = new Thickness(EditorTheme.Space4, 0, EditorTheme.Space4, EditorTheme.Space2),
        };
    }

    private void RefreshCounts()
    {
        _counts.Text = SceneStations.Summarize(_scene);
    }

    private sealed class NamedIdCompletionData(string text, int id) : ICompletionData
    {
        public string Text { get; } = text;
        public object Content => Text;
        public object Description => $"{Text} = {id}";
        public double Priority => 0;
        public Avalonia.Media.IImage? Image => null;

        public void Complete(TextArea textArea, ISegment completionSegment, EventArgs insertionRequestEventArgs)
        {
            textArea.Document.Replace(completionSegment, Text);
        }
    }

    private sealed class ScriptColorizingTransformer : DocumentColorizingTransformer
    {
        private readonly Func<IReadOnlyList<ScriptSourceError>> _errors;

        public ScriptColorizingTransformer(Func<IReadOnlyList<ScriptSourceError>> errors)
        {
            _errors = errors;
        }

        protected override void ColorizeLine(DocumentLine line)
        {
            var document = CurrentContext.Document;
            var text = document.GetText(line);
            var lineErrors = _errors().Where(error => error.Line == line.LineNumber).ToList();
            var spans = ScriptHighlighter.Highlight(text, lineErrors);
            foreach (var span in spans)
            {
                if (span.Length <= 0 || span.Kind == ScriptHighlightKind.Error)
                    continue;
                var start = line.Offset + span.Start;
                var end = Math.Min(line.Offset + span.Start + span.Length, line.EndOffset);
                if (end <= start)
                    continue;
                var brush = BrushFor(span.Kind);
                if (brush is null)
                    continue;
                ChangeLinePart(start, end, element => element.TextRunProperties.SetForegroundBrush(brush));
            }

            if (lineErrors.Count == 0 || line.Length == 0)
                return;
            ChangeLinePart(line.Offset, line.EndOffset, element =>
            {
                element.TextRunProperties.SetTextDecorations(TextDecorations.Underline);
                element.TextRunProperties.SetForegroundBrush(EditorTheme.DangerBrush);
            });
        }

        private static IBrush? BrushFor(ScriptHighlightKind kind) => kind switch
        {
            ScriptHighlightKind.Header => EditorTheme.ScriptHeaderBrush,
            ScriptHighlightKind.Opcode => EditorTheme.ScriptOpcodeBrush,
            ScriptHighlightKind.String => EditorTheme.ScriptStringBrush,
            ScriptHighlightKind.Number => EditorTheme.ScriptNumberBrush,
            ScriptHighlightKind.Comment => EditorTheme.TextDimBrush,
            _ => null,
        };
    }
}
