using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using AvaloniaEdit;
using AvaloniaEdit.CodeCompletion;
using AvaloniaEdit.Document;
using AvaloniaEdit.Editing;
using AvaloniaEdit.Rendering;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Popup source editor for a scene's station scripts.</summary>
public sealed class SceneScriptWindow : Window
{
    private readonly Scene _scene;
    private readonly SceneDatabase? _database;
    private readonly ChangeService _changes;
    private readonly ScriptNamedDefinitions? _names;
    private readonly TextEditor _editor;
    private readonly ScriptColorizingTransformer _colorizer;
    private readonly TextBlock _status;
    private readonly TextBlock _counts;
    private IReadOnlyList<ScriptSourceError> _errors = [];
    private CompletionWindow? _completion;

    public event EventHandler? Applied;

    public SceneScriptWindow(
        Scene scene,
        ChangeService changes,
        SceneDatabase? database,
        int? focusGroup = null,
        int? focusSector = null,
        int? focusStationIndex = null,
        ScriptNamedDefinitions? names = null)
    {
        _scene = scene;
        _changes = changes;
        _database = database;
        _names = names;

        Title = string.IsNullOrWhiteSpace(scene.Name)
            ? "Script"
            : $"Script — {scene.Name}";
        Width = 760;
        Height = 560;
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

        _colorizer = new ScriptColorizingTransformer(() => _errors);
        _editor = new TextEditor
        {
            Document = new TextDocument(SceneScriptSource.Format(scene, database?.DialogueByOffset, names)),
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
            TextWrapping = TextWrapping.Wrap,
            VerticalAlignment = VerticalAlignment.Center,
            Text = _names is null
                ? "No named catalogs loaded (need include/constants/*.h beside the ROM). Numbers only · Ctrl+/ · Ctrl+S."
                : "Named MUS_/EMOTION_/MAP_/SE args · type or Ctrl+Space for lookup · hover red lines for errors · Ctrl+S Apply.",
        };

        var apply = EditorChrome.ToolButton("Apply", primary: true);
        apply.Click += (_, _) => Apply();
        var close = EditorChrome.ToolButton("Close");
        close.Click += (_, _) => Close();

        var title = new TextBlock
        {
            Text = "SCENE SCRIPT",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontPanel,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextMutedBrush,
            LetterSpacing = 0.6,
            VerticalAlignment = VerticalAlignment.Center,
        };
        DockPanel.SetDock(_counts, Dock.Right);
        var header = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Padding = new Thickness(EditorTheme.Space4, 0),
            Height = EditorTheme.ToolbarHeight,
            Child = new DockPanel { LastChildFill = true, Children = { _counts, title } },
        };

        var buttons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { apply, close },
        };
        DockPanel.SetDock(buttons, Dock.Right);
        var footer = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Padding = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
            Child = new DockPanel { LastChildFill = true, Children = { buttons, _status } },
        };

        var well = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            Child = _editor,
        };

        var root = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(header, Dock.Top);
        DockPanel.SetDock(footer, Dock.Bottom);
        root.Children.Add(header);
        root.Children.Add(footer);
        root.Children.Add(well);
        Content = root;

        RefreshCounts();
        RefreshHighlights();
        KeyDown += OnKeyDown;
        _editor.KeyDown += OnKeyDown;
        _editor.TextArea.KeyDown += OnKeyDown;

        if (focusGroup is int group && focusSector is int sector && focusStationIndex is int index)
            Opened += (_, _) => FocusStation(group, sector, index);
    }

    public void FocusStation(int group, int sector, int stationIndex)
    {
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

    private void Apply()
    {
        var source = _editor.Text ?? string.Empty;
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
        if (_errors.Count == 0)
        {
            ToolTip.SetTip(_editor, null);
            return;
        }

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
        ToolTip.SetTip(_editor, messages.Length == 0 ? null : string.Join("\n", messages));
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
