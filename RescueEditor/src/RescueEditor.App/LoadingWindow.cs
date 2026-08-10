using System.Diagnostics;
using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Threading;

namespace RescueEditor.App;

public sealed class LoadingWindow : Window
{
    private readonly TextBlock _stage;
    private readonly TextBlock _elapsed;
    private readonly ProgressBar _bar;
    private readonly DispatcherTimer _timer;
    private readonly Stopwatch _stopwatch = Stopwatch.StartNew();

    public LoadingWindow(string romName)
    {
        Title = "Loading ROM";
        Width = 480;
        Height = 180;
        CanResize = false;
        ShowInTaskbar = false;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        WindowDecorations = WindowDecorations.Full;
        AppIcon.Apply(this);

        _stage = new TextBlock
        {
            Text = $"Opening {romName}…",
            TextWrapping = TextWrapping.Wrap,
            FontSize = 14,
        };
        _elapsed = new TextBlock
        {
            Text = "Elapsed: 0.0s",
            Foreground = Brushes.Gray,
            Margin = new Thickness(0, 8, 0, 0),
        };
        _bar = new ProgressBar
        {
            IsIndeterminate = true,
            Height = 8,
            Margin = new Thickness(0, 18, 0, 0),
        };

        Content = new Border
        {
            Padding = new Thickness(24),
            Child = new StackPanel
            {
                Spacing = 4,
                VerticalAlignment = VerticalAlignment.Center,
                Children =
                {
                    new TextBlock
                    {
                        Text = "Indexing ROM assets",
                        FontSize = 18,
                        FontWeight = FontWeight.SemiBold,
                    },
                    _stage,
                    _elapsed,
                    _bar,
                },
            },
        };

        _timer = new DispatcherTimer
        {
            Interval = TimeSpan.FromMilliseconds(100),
        };
        _timer.Tick += (_, _) =>
            _elapsed.Text = $"Elapsed: {_stopwatch.Elapsed.TotalSeconds:0.0}s";
        _timer.Start();
        Closed += (_, _) => _timer.Stop();
    }

    public void SetStage(string stage)
    {
        _stage.Text = stage;
    }

    public TimeSpan Elapsed => _stopwatch.Elapsed;
}
