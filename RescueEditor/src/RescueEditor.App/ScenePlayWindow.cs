using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Modal Scene Play popup: integer-scaled GBA 240×160 view matching retail layout.</summary>
public sealed class ScenePlayWindow : Window
{
    private const int ViewScale = 3;

    private readonly ScenePlaySession _session;
    private readonly PlayControlsKeymap _keymap;
    private readonly Image _view;
    private readonly TextBlock _status;
    private readonly Button _controlsButton;
    private readonly DispatcherTimer _timer;
    private readonly WavPlayer _sfxPlayer = new();
    private readonly string? _romPath;
    private GbaButton? _captureTarget;
    private DateTime _lastTick = DateTime.UtcNow;

    public ScenePlayWindow(
        ScenePlaySession session,
        PlayControlsKeymap? keymap = null,
        string? romPath = null)
    {
        _session = session;
        _keymap = keymap ?? PlayControlsKeymap.CreateDefault();
        _romPath = romPath;

        Title = _session.IsScripted
            ? $"Scene Play — {_session.PlayerSpecies}/{_session.PartnerSpecies}"
            : "Scene Play";

        Width = ScenePlaySession.CameraWidth * ViewScale + 48;
        Height = ScenePlaySession.CameraHeight * ViewScale + 100;
        CanResize = true;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        Background = EditorTheme.WindowBgBrush;

        _view = new Image
        {
            Width = ScenePlaySession.CameraWidth * ViewScale,
            Height = ScenePlaySession.CameraHeight * ViewScale,
            Stretch = Stretch.Fill,
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
        };
        RenderOptions.SetBitmapInterpolationMode(_view, BitmapInterpolationMode.None);

        _status = new TextBlock
        {
            Margin = new Thickness(EditorTheme.Space3, EditorTheme.Space2),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            Text = _session.IsScripted
                ? "Cutscene · A advances text · Esc closes"
                : "Arrows move · Esc closes · Controls to rebind",
        };

        _controlsButton = new Button
        {
            Content = "Controls",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Padding = new Thickness(10, 4),
            Background = EditorTheme.PanelBgRaisedBrush,
            Foreground = EditorTheme.TextPrimaryBrush,
            BorderBrush = EditorTheme.BorderBrush,
            BorderThickness = new Thickness(1),
            Flyout = new MenuFlyout(),
        };
        RebuildControlsMenu();

        var closeButton = EditorChrome.ToolButton("Close");
        closeButton.Click += (_, _) => Close();

        var toolbar = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(EditorTheme.Space3),
            Children = { _controlsButton, closeButton },
        };

        var stage = new Border
        {
            Background = Brushes.Black,
            BorderBrush = EditorTheme.BorderBrush,
            BorderThickness = new Thickness(1),
            Margin = new Thickness(EditorTheme.Space3, 0),
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
            Child = _view,
        };

        var root = new DockPanel();
        DockPanel.SetDock(toolbar, Dock.Top);
        DockPanel.SetDock(_status, Dock.Bottom);
        root.Children.Add(toolbar);
        root.Children.Add(_status);
        root.Children.Add(stage);
        Content = root;

        _timer = new DispatcherTimer { Interval = TimeSpan.FromMilliseconds(16) };
        _timer.Tick += OnTick;

        KeyDown += OnKeyDown;
        KeyUp += OnKeyUp;
        Closed += (_, _) =>
        {
            _timer.Stop();
            _sfxPlayer.Dispose();
        };

        Opened += (_, _) =>
        {
            Focus();
            PlayQueuedSfx();
            RefreshFrame();
            _lastTick = DateTime.UtcNow;
            _timer.Start();
        };
    }

    private void RebuildControlsMenu()
    {
        var flyout = new MenuFlyout();
        foreach (GbaButton button in Enum.GetValues<GbaButton>())
        {
            var local = button;
            var binding = _keymap.GetBinding(local);
            var item = new MenuItem { Header = $"{local}: {Describe(binding)}" };
            item.Click += (_, _) => BeginCapture(local);
            flyout.Items.Add(item);
        }
        _controlsButton.Flyout = flyout;
    }

    private void BeginCapture(GbaButton button)
    {
        _captureTarget = button;
        _status.Text = $"Rebind {button}: press a key (Esc cancels)";
        Focus();
    }

    private void OnKeyDown(object? sender, KeyEventArgs e)
    {
        if (e.Key == Key.Escape)
        {
            if (_captureTarget is not null)
            {
                _captureTarget = null;
                _status.Text = "Rebind cancelled";
                e.Handled = true;
                return;
            }

            Close();
            e.Handled = true;
            return;
        }

        var chord = ToChord(e);
        if (_captureTarget is GbaButton target)
        {
            _keymap.Rebind(target, chord);
            _captureTarget = null;
            RebuildControlsMenu();
            _status.Text = $"Bound {target} → {Describe(chord)}";
            e.Handled = true;
            return;
        }

        if (_keymap.TryResolve(chord, out var button))
        {
            _session.SetButton(button, true);
            e.Handled = true;
        }
    }

    private void OnKeyUp(object? sender, KeyEventArgs e)
    {
        if (_captureTarget is not null)
            return;
        var chord = ToChord(e);
        if (_keymap.TryResolve(chord, out var button))
        {
            _session.SetButton(button, false);
            e.Handled = true;
        }
    }

    private void OnTick(object? sender, EventArgs e)
    {
        var now = DateTime.UtcNow;
        var dt = (now - _lastTick).TotalSeconds;
        _lastTick = now;
        if (dt > 0.1) dt = 0.1;
        _session.Tick(dt);
        RefreshFrame();
        PlayQueuedSfx();
        PlayMusicIfChanged();

        if (_captureTarget is not null)
            return;

        if (_session.IsScripted && !_session.ScriptFinished)
            _status.Text = _session.WaitingForAdvance ? "A to continue…" : "Playing cutscene…";
        else if (_session.AllowFreeRoam)
            _status.Text = $"Free roam · 240×160 · sp.{_session.PlayerSpecies}/{_session.PartnerSpecies}";
    }

    private void RefreshFrame()
    {
        var png = _session.RenderFrame();
        using var stream = new MemoryStream(png);
        _view.Source = new Bitmap(stream);
    }

    private void PlayQueuedSfx()
    {
        if (string.IsNullOrWhiteSpace(_romPath) || !File.Exists(_romPath))
            return;
        if (!AgbplayRenderer.IsAvailable())
            return;

        foreach (var id in _session.DrainPendingSfx())
        {
            try
            {
                var result = AgbplayRenderer.RenderSong(_romPath, id, maxLoops: 0);
                _sfxPlayer.Load(result.WavBytes);
                _sfxPlayer.Play();
            }
            catch
            {
                // SFX is best-effort in play preview.
            }
        }
    }

    private void PlayMusicIfChanged()
    {
        if (string.IsNullOrWhiteSpace(_romPath) || !File.Exists(_romPath))
            return;
        if (!AgbplayRenderer.IsAvailable())
            return;
        if (!_session.TryConsumeMusicChange(out var songId))
            return;
        try
        {
            var result = AgbplayRenderer.RenderSong(_romPath, songId, maxLoops: 0);
            _sfxPlayer.Load(result.WavBytes);
            _sfxPlayer.Play();
        }
        catch
        {
            // Music is best-effort in play preview.
        }
    }

    private static KeyChord ToChord(KeyEventArgs e) =>
        new(e.Key.ToString(),
            e.KeyModifiers.HasFlag(KeyModifiers.Control),
            e.KeyModifiers.HasFlag(KeyModifiers.Shift),
            e.KeyModifiers.HasFlag(KeyModifiers.Alt));

    private static string Describe(KeyChord chord)
    {
        if (string.IsNullOrEmpty(chord.Key))
            return "(unbound)";
        var parts = new List<string>();
        if (chord.Ctrl) parts.Add("Ctrl");
        if (chord.Shift) parts.Add("Shift");
        if (chord.Alt) parts.Add("Alt");
        parts.Add(chord.Key);
        return string.Join("+", parts);
    }
}
