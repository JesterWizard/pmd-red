using System.Diagnostics;
using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Threading;

namespace RescueEditor.App;

public sealed class LoadingWindow : Window
{
    private readonly TextBlock _stage;
    private readonly TextBlock _elapsed;
    private readonly DispatcherTimer _timer;
    private readonly Stopwatch _stopwatch = Stopwatch.StartNew();

    public LoadingWindow(string romName)
    {
        Title = "Loading ROM";
        Width = 420;
        Height = 160;
        CanResize = false;
        ShowInTaskbar = false;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        WindowDecorations = WindowDecorations.Full;
        AppIcon.Apply(this);
        EditorChrome.StyleDialogWindow(this);

        _stage = EditorChrome.MutedBody($"Opening {romName}…");
        _elapsed = new TextBlock
        {
            Text = "Elapsed: 0.0s",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextDimBrush,
            Margin = new Thickness(0, EditorTheme.Space2, 0, 0),
        };

        Content = new Border
        {
            Padding = new Thickness(EditorTheme.Space5),
            Child = new StackPanel
            {
                Spacing = EditorTheme.Space1,
                VerticalAlignment = VerticalAlignment.Center,
                Children =
                {
                    EditorChrome.PaneTitle("Indexing ROM assets"),
                    _stage,
                    _elapsed,
                    new ProgressBar
                    {
                        IsIndeterminate = true,
                        Height = 2,
                        Margin = new Thickness(0, EditorTheme.Space3, 0, 0),
                    },
                },
            },
        };

        _timer = new DispatcherTimer { Interval = TimeSpan.FromMilliseconds(100) };
        _timer.Tick += (_, _) =>
            _elapsed.Text = $"Elapsed: {_stopwatch.Elapsed.TotalSeconds:0.0}s";
        _timer.Start();
        Closed += (_, _) => _timer.Stop();
    }

    public void SetStage(string stage) => _stage.Text = stage;
}
