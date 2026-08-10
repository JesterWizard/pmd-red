using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Optional Back/Next scene factory for the end-of-cutscene menu.</summary>
public sealed class ScenePlayNavigator
{
    public Func<bool>? CanGoBack { get; init; }
    public Func<bool>? CanGoNext { get; init; }
    public Func<ScenePlaySession?>? CreatePrevious { get; init; }
    public Func<ScenePlaySession?>? CreateNext { get; init; }
}

/// <summary>Modal Scene Play popup: integer-scaled GBA 240×160 view matching retail layout.</summary>
public sealed class ScenePlayWindow : Window
{
    private const int ViewScale = 3;
    private const double TargetFps = 60;
    private static readonly TimeSpan FrameDt = TimeSpan.FromSeconds(1.0 / TargetFps);

    private ScenePlaySession _session;
    private readonly PlayControlsKeymap _keymap;
    private readonly ScenePlayNavigator? _navigator;
    private readonly Image _view;
    private readonly TextBlock _status;
    private readonly Button _controlsButton;
    private readonly Border _endOverlay;
    private readonly Button _backButton;
    private readonly Button _nextButton;
    private readonly Slider _speedSlider;
    private readonly TextBlock _speedLabel;
    private readonly DispatcherTimer _timer;
    private readonly WavPlayer _bgmPlayer = new();
    private readonly WavPlayer _sfxPlayer = new();
    private readonly AgbplayStreamHost _bgmHost = new();
    private readonly AgbplayStreamPlayer _bgmStream;
    private readonly string? _romPath;
    private GbaButton? _captureTarget;
    private DateTime _lastTick = DateTime.UtcNow;
    private double _simAccum;
    private bool _endMenuShown;
    private double _speed = 1;
    private int? _playingSongId;

    public ScenePlayWindow(
        ScenePlaySession session,
        PlayControlsKeymap? keymap = null,
        string? romPath = null,
        ScenePlayNavigator? navigator = null)
    {
        _session = session;
        _keymap = keymap ?? PlayControlsKeymap.CreateDefault();
        _romPath = romPath;
        _navigator = navigator;
        _bgmStream = new AgbplayStreamPlayer(_bgmHost);

        Title = TitleFor(_session);
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
        _view.PointerPressed += (_, e) =>
        {
            Focus();
            if (_session.WaitingForAdvance)
            {
                _session.AdvanceDialogue();
                e.Handled = true;
            }
        };

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

        _speedLabel = new TextBlock
        {
            Text = "1×",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            MinWidth = 28,
        };
        _speedSlider = new Slider
        {
            Minimum = 1,
            Maximum = 10,
            TickFrequency = 1,
            IsSnapToTickEnabled = true,
            Width = 120,
            Value = 1,
            VerticalAlignment = VerticalAlignment.Center,
        };
        _speedSlider.PropertyChanged += (_, e) =>
        {
            if (e.Property != Slider.ValueProperty)
                return;
            _speed = Math.Clamp(_speedSlider.Value, 1, 10);
            _speedLabel.Text = $"{(int)_speed}×";
        };

        var toolbar = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(EditorTheme.Space3),
            Children =
            {
                _controlsButton,
                closeButton,
                new TextBlock
                {
                    Text = "Speed",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontMeta,
                    Foreground = EditorTheme.TextMutedBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                    Margin = new Thickness(EditorTheme.Space3, 0, 0, 0),
                },
                _speedSlider,
                _speedLabel,
            },
        };

        _backButton = MenuButton("Back");
        var replayButton = MenuButton("Replay");
        _nextButton = MenuButton("Next");
        var exitButton = MenuButton("Exit");
        _backButton.Click += (_, _) => Navigate(-1);
        replayButton.Click += (_, _) => Replay();
        _nextButton.Click += (_, _) => Navigate(+1);
        exitButton.Click += (_, _) => Close();

        var row = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            HorizontalAlignment = HorizontalAlignment.Center,
            Children = { _backButton, replayButton, _nextButton },
        };
        var menu = new StackPanel
        {
            Orientation = Orientation.Vertical,
            Spacing = EditorTheme.Space2,
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                new TextBlock
                {
                    Text = "Scene complete",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontPanel,
                    Foreground = EditorTheme.TextPrimaryBrush,
                    HorizontalAlignment = HorizontalAlignment.Center,
                    Margin = new Thickness(0, 0, 0, EditorTheme.Space2),
                },
                row,
                exitButton,
            },
        };

        _endOverlay = new Border
        {
            Background = new SolidColorBrush(Color.FromArgb(0xC0, 0x10, 0x10, 0x14)),
            IsVisible = false,
            Child = menu,
        };

        var stageHost = new Grid
        {
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
            Children =
            {
                new Border
                {
                    Background = Brushes.Black,
                    BorderBrush = EditorTheme.BorderBrush,
                    BorderThickness = new Thickness(1),
                    Child = _view,
                },
                _endOverlay,
            },
        };

        var root = new DockPanel();
        DockPanel.SetDock(toolbar, Dock.Top);
        DockPanel.SetDock(_status, Dock.Bottom);
        root.Children.Add(toolbar);
        root.Children.Add(_status);
        root.Children.Add(new Border
        {
            Margin = new Thickness(EditorTheme.Space3, 0),
            Child = stageHost,
        });
        Content = root;

        _timer = new DispatcherTimer(FrameDt, DispatcherPriority.Render, OnTick);

        KeyDown += OnKeyDown;
        KeyUp += OnKeyUp;
        Closed += (_, _) =>
        {
            _timer.Stop();
            try { _bgmStream.Stop(); } catch { /* ignore */ }
            try { _bgmHost.Dispose(); } catch { /* ignore */ }
            _bgmStream.Dispose();
            _bgmPlayer.Dispose();
            _sfxPlayer.Dispose();
        };

        Opened += (_, _) =>
        {
            Focus();
            // Paint a black frame immediately so the window appears before map compose.
            RefreshFrame(composeBackground: false);
            Dispatcher.UIThread.Post(() =>
            {
                try
                {
                    _session.EnsureBackground();
                    PrimeScript();
                    PlayQueuedSfx();
                    RefreshFrame(composeBackground: true);
                }
                catch
                {
                    // Keep black frame if compose fails; timer still runs.
                }
                _lastTick = DateTime.UtcNow;
                _simAccum = 0;
                _timer.Start();
            }, DispatcherPriority.Background);
        };
    }

    private void PrimeScript()
    {
        if (!_session.IsScripted)
            return;
        for (var i = 0; i < 8 && _session.DialogueMode == PlayDialogueMode.None; i++)
            _session.Tick(1.0 / TargetFps);
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
        if (_endMenuShown)
        {
            if (e.Key == Key.Escape)
            {
                Close();
                e.Handled = true;
            }
            return;
        }

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
        if (_captureTarget is not null || _endMenuShown)
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
        if (dt < 0) dt = 0;

        if (!_endMenuShown)
        {
            _simAccum += dt * Math.Max(1.0, _speed);
            var steps = 0;
            var stepCap = Math.Max(4, (int)(4 * _speed));
            while (_simAccum >= FrameDt.TotalSeconds && steps < stepCap)
            {
                _session.Tick(FrameDt.TotalSeconds);
                _simAccum -= FrameDt.TotalSeconds;
                steps++;
            }
            if (_simAccum > FrameDt.TotalSeconds * 2 * _speed)
                _simAccum = 0;

            RefreshFrame();
            PlayQueuedSfx();
            PlayMusicIfChanged();
        }

        if (_captureTarget is not null)
            return;

        if (_session.IsScripted && _session.ScriptFinished)
        {
            ShowEndMenu();
            _status.Text = "Scene complete";
        }
        else if (_session.IsScripted)
            _status.Text = _session.WaitingForAdvance ? "A to continue…" : "Playing cutscene…";
        else if (_session.AllowFreeRoam)
            _status.Text = $"Free roam · 240×160 · sp.{_session.PlayerSpecies}/{_session.PartnerSpecies}";
    }

    private void ShowEndMenu()
    {
        if (_endMenuShown)
            return;
        _endMenuShown = true;
        _backButton.IsEnabled = _navigator?.CanGoBack?.Invoke() == true;
        _nextButton.IsEnabled = _navigator?.CanGoNext?.Invoke() == true;
        _endOverlay.IsVisible = true;
        try { StopBgm(); } catch { /* ignore */ }
        try { _sfxPlayer.Stop(); } catch { /* ignore */ }
    }

    private void HideEndMenu()
    {
        _endMenuShown = false;
        _endOverlay.IsVisible = false;
    }

    private void Replay()
    {
        HideEndMenu();
        _session.Restart();
        _playingSongId = null;
        Title = TitleFor(_session);
        _simAccum = 0;
        _lastTick = DateTime.UtcNow;
        PrimeScript();
        RefreshFrame();
        Focus();
    }

    private void Navigate(int delta)
    {
        ScenePlaySession? next = null;
        if (delta < 0)
            next = _navigator?.CreatePrevious?.Invoke();
        else if (delta > 0)
            next = _navigator?.CreateNext?.Invoke();
        if (next is null)
            return;

        HideEndMenu();
        _session = next;
        _frameBitmap = null;
        _playingSongId = null;
        Title = TitleFor(_session);
        _simAccum = 0;
        _lastTick = DateTime.UtcNow;
        try { _bgmPlayer.Stop(); } catch { /* ignore */ }
        try { _sfxPlayer.Stop(); } catch { /* ignore */ }
        RefreshFrame(composeBackground: false);
        Dispatcher.UIThread.Post(() =>
        {
            try
            {
                _session.EnsureBackground();
                PrimeScript();
                RefreshFrame(composeBackground: true);
            }
            catch { /* keep black */ }
            Focus();
        }, DispatcherPriority.Background);
    }

    private WriteableBitmap? _frameBitmap;

    private void RefreshFrame(bool composeBackground = true)
    {
        try
        {
            var frame = _session.RenderFrameImage(composeBackground);
            if (_frameBitmap is null ||
                _frameBitmap.PixelSize.Width != frame.Width ||
                _frameBitmap.PixelSize.Height != frame.Height)
            {
                _frameBitmap = new WriteableBitmap(
                    new PixelSize(frame.Width, frame.Height),
                    new Vector(96, 96),
                    PixelFormat.Rgba8888,
                    AlphaFormat.Unpremul);
            }

            using (var fb = _frameBitmap.Lock())
            {
                var src = frame.Pixels;
                var dstStride = fb.RowBytes;
                var srcStride = frame.Width * 4;
                if (dstStride == srcStride)
                {
                    System.Runtime.InteropServices.Marshal.Copy(src, 0, fb.Address, src.Length);
                }
                else
                {
                    for (var y = 0; y < frame.Height; y++)
                    {
                        System.Runtime.InteropServices.Marshal.Copy(
                            src, y * srcStride,
                            fb.Address + y * dstStride,
                            srcStride);
                    }
                }
            }

            _view.Source = _frameBitmap;
            _view.InvalidateVisual();
        }
        catch (Exception ex)
        {
            _status.Text = $"Render error: {ex.GetType().Name}";
        }
    }

    private void PlayQueuedSfx()
    {
        if (string.IsNullOrWhiteSpace(_romPath) || !File.Exists(_romPath))
            return;
        if (!AgbplayRenderer.IsAvailable())
            return;

        foreach (var id in _session.DrainPendingSfx())
        {
            if (!AgbplayRenderer.TryGetCachedWav(_romPath, id, maxLoops: 0, out var wav, out _))
                continue;
            try
            {
                _sfxPlayer.Load(wav);
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
        if (!_session.TryConsumeMusicChange(out var songId))
            return;

        if (songId is null)
        {
            StopBgm();
            return;
        }

        if (_playingSongId == songId && (_bgmStream.IsPlaying || _bgmPlayer.IsPlaying))
            return;

        // Prefer live stream (same path as Sound Preview) so BGM_SWITCH after FADEOUT
        // does not depend on a blocking WAV render that can fail silently.
        if (AgbplayRenderer.IsStreamAvailable())
        {
            try
            {
                _bgmPlayer.Stop();
                _bgmHost.EnsureStarted(_romPath);
                // 0 = keep looping while the cutscene needs the track.
                _bgmStream.StartStream(_romPath, songId.Value, maxLoops: 0);
                _playingSongId = songId;
                return;
            }
            catch
            {
                // Fall through to cached/rendered WAV.
            }
        }

        if (!AgbplayRenderer.IsAvailable())
            return;

        const int bgmLoops = 1;
        byte[] wav;
        try
        {
            if (!AgbplayRenderer.TryGetCachedWav(_romPath, songId.Value, bgmLoops, out wav, out _) &&
                !AgbplayRenderer.TryGetCachedWav(_romPath, songId.Value, maxLoops: 0, out wav, out _))
            {
                wav = AgbplayRenderer.RenderSong(_romPath, songId.Value, bgmLoops).WavBytes;
            }
        }
        catch
        {
            return;
        }

        try
        {
            try { _bgmStream.Stop(); } catch { /* ignore */ }
            _bgmPlayer.Load(wav);
            _bgmPlayer.PlayLooping();
            _playingSongId = songId;
        }
        catch
        {
            // Music is best-effort in play preview.
        }
    }

    private void StopBgm()
    {
        _playingSongId = null;
        try { _bgmStream.Stop(); } catch { /* ignore */ }
        try { _bgmPlayer.Stop(); } catch { /* ignore */ }
    }

    private static Button MenuButton(string label) =>
        new()
        {
            Content = label,
            MinWidth = 88,
            Padding = new Thickness(14, 8),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Background = EditorTheme.PanelBgRaisedBrush,
            Foreground = EditorTheme.TextPrimaryBrush,
            BorderBrush = EditorTheme.BorderBrush,
            BorderThickness = new Thickness(1),
            HorizontalAlignment = HorizontalAlignment.Center,
        };

    private static string TitleFor(ScenePlaySession session) =>
        session.IsScripted
            ? $"Scene Play — {session.PlayerSpecies}/{session.PartnerSpecies}"
            : "Scene Play";

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
