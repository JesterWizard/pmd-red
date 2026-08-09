using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Controls.Shapes;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

internal sealed class SoundPreviewPanel : UserControl, IDisposable
{
    private readonly TabControl _tabs;
    private readonly TextBlock _title;
    private readonly TextBlock _meta;
    private readonly TextBlock _status;
    private readonly Button _playButton;
    private readonly Button _stopButton;
    private readonly Slider _seek;
    private readonly Canvas _pianoRoll;
    private readonly Canvas _waveform;
    private readonly TextBox _codeBox;
    private readonly WavPlayer _player = new();
    private readonly DispatcherTimer _timer;
    private SoundSequence? _sequence;
    private WaveformPeaks.Peak[] _peaks = Array.Empty<WaveformPeaks.Peak>();
    private byte[] _wav = Array.Empty<byte>();
    private Line? _waveformPlayhead;
    private Line? _pianoPlayhead;
    private bool _seeking;
    private bool _disposed;
    private bool _waveformDirty = true;

    public SoundPreviewPanel()
    {
        _title = new TextBlock { FontSize = 18, FontWeight = FontWeight.SemiBold };
        _meta = new TextBlock
        {
            Foreground = Brushes.Gray,
            TextWrapping = TextWrapping.Wrap,
            FontSize = 12,
        };
        _status = new TextBlock
        {
            Foreground = Brushes.Gray,
            FontSize = 12,
            VerticalAlignment = VerticalAlignment.Center,
        };
        _playButton = new Button { Content = "Play", MinWidth = 72 };
        _stopButton = new Button { Content = "Stop", MinWidth = 72 };
        _playButton.Click += (_, _) => TogglePlay();
        _stopButton.Click += (_, _) =>
        {
            _player.Stop();
            _playButton.Content = "Play";
            UpdateVisuals();
        };

        _seek = new Slider
        {
            Minimum = 0,
            Maximum = 1,
            Value = 0,
            Margin = new Thickness(0, 8, 0, 0),
        };
        _seek.AddHandler(PointerPressedEvent, (_, _) => _seeking = true, handledEventsToo: true);
        _seek.AddHandler(PointerReleasedEvent, (_, _) =>
        {
            _player.Seek(_seek.Value);
            _seeking = false;
        }, handledEventsToo: true);

        _pianoRoll = new Canvas
        {
            Height = 140,
            Background = new SolidColorBrush(Color.FromRgb(18, 18, 22)),
            ClipToBounds = true,
        };
        _waveform = new Canvas
        {
            Height = 96,
            Background = new SolidColorBrush(Color.FromRgb(14, 14, 18)),
            ClipToBounds = true,
            Margin = new Thickness(0, 8, 0, 0),
        };
        _pianoRoll.SizeChanged += (_, _) => { _waveformDirty = true; DrawPianoRoll(); };
        _waveform.SizeChanged += (_, _) => { _waveformDirty = true; DrawWaveform(); };

        var playerContent = new ScrollViewer
        {
            HorizontalScrollBarVisibility = ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
            Content = new StackPanel
            {
                Margin = new Thickness(12),
                Spacing = 8,
                Children =
                {
                    _title,
                    _meta,
                    new StackPanel
                    {
                        Orientation = Orientation.Horizontal,
                        Spacing = 8,
                        Children = { _playButton, _stopButton, _status },
                    },
                    _seek,
                    new TextBlock
                    {
                        Text = "Waveform",
                        FontSize = 12,
                        Foreground = Brushes.Gray,
                        Margin = new Thickness(0, 8, 0, 0),
                    },
                    _waveform,
                    new TextBlock
                    {
                        Text = "Piano roll",
                        FontSize = 12,
                        Foreground = Brushes.Gray,
                    },
                    _pianoRoll,
                },
            },
        };

        _codeBox = new TextBox
        {
            IsReadOnly = true,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.NoWrap,
            FontFamily = new FontFamily("Cascadia Mono, Consolas, monospace"),
            FontSize = 13,
            BorderThickness = new Thickness(0),
        };

        _tabs = new TabControl();
        _tabs.Items.Add(new TabItem { Header = "Player", Content = playerContent });
        _tabs.Items.Add(new TabItem
        {
            Header = "Code",
            Content = new ScrollViewer
            {
                HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
                VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
                Content = _codeBox,
            },
        });

        Content = _tabs;
        _timer = new DispatcherTimer { Interval = TimeSpan.FromMilliseconds(33) };
        _timer.Tick += (_, _) => UpdateVisuals();
        _timer.Start();
    }

    public async Task LoadAsync(RomImage rom, AssetDescriptor asset, string codeText)
    {
        _player.Stop();
        _playButton.Content = "Play";
        _title.Text = asset.Name;
        _codeBox.Text = codeText;
        _status.Text = "Rendering with agbplay…";
        _seek.Value = 0;
        _peaks = Array.Empty<WaveformPeaks.Peak>();
        _wav = Array.Empty<byte>();
        _waveformDirty = true;

        var built = await Task.Run(() => BuildPreview(rom, asset));
        _sequence = built.Sequence;
        _wav = built.Wav;
        _peaks = built.Peaks;
        _meta.Text = built.Meta;
        _status.Text = built.Status;
        if (_wav.Length >= 44)
            _player.Load(_wav);
        _waveformDirty = true;
        DrawPianoRoll();
        DrawWaveform();
    }

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        _timer.Stop();
        _player.Dispose();
    }

    private void TogglePlay()
    {
        if (_wav.Length < 44)
            return;
        if (_player.IsPlaying)
        {
            _player.Pause();
            _playButton.Content = "Play";
        }
        else
        {
            _player.Play();
            _playButton.Content = "Pause";
        }
    }

    private void UpdateVisuals()
    {
        if (_disposed)
            return;
        var total = _player.TotalTime.TotalSeconds;
        if (!_seeking && total > 0)
            _seek.Value = _player.CurrentTime.TotalSeconds / total;
        if (total > 0)
            _status.Text = $"{FormatTime(_player.CurrentTime)} / {FormatTime(_player.TotalTime)}";
        if (!_player.IsPlaying && Equals(_playButton.Content, "Pause"))
            _playButton.Content = "Play";
        if (_waveformDirty)
        {
            DrawWaveform();
            DrawPianoRoll();
            _waveformDirty = false;
        }
        else
        {
            UpdatePlayhead(_waveform, ref _waveformPlayhead);
            UpdatePlayhead(_pianoRoll, ref _pianoPlayhead);
        }
    }

    private void DrawPianoRoll()
    {
        _pianoRoll.Children.Clear();
        var width = _pianoRoll.Bounds.Width;
        var height = _pianoRoll.Bounds.Height;
        if (width <= 1 || height <= 1 || _sequence is null || _sequence.DurationTicks <= 0)
            return;

        var notes = _sequence.Notes;
        if (notes.Count == 0)
            return;

        var minKey = notes.Min(note => note.Key);
        var maxKey = notes.Max(note => note.Key);
        var keySpan = Math.Max(1, maxKey - minKey + 1);
        var colors = new[]
        {
            Color.FromRgb(80, 160, 255),
            Color.FromRgb(120, 220, 160),
            Color.FromRgb(255, 180, 90),
            Color.FromRgb(220, 120, 200),
            Color.FromRgb(140, 200, 255),
            Color.FromRgb(255, 140, 140),
        };

        foreach (var note in notes)
        {
            var x = note.StartTick / (double)_sequence.DurationTicks * width;
            var w = Math.Max(2, note.DurationTicks / (double)_sequence.DurationTicks * width);
            var y = (maxKey - note.Key) / (double)keySpan * (height - 4);
            var h = Math.Max(3, height / keySpan);
            var rect = new Rectangle
            {
                Width = w,
                Height = h,
                Fill = new SolidColorBrush(colors[Math.Abs(note.Track) % colors.Length]),
                Opacity = 0.85,
            };
            Canvas.SetLeft(rect, x);
            Canvas.SetTop(rect, y);
            _pianoRoll.Children.Add(rect);
        }

        _pianoPlayhead = null;
        UpdatePlayhead(_pianoRoll, ref _pianoPlayhead);
    }

    private void DrawWaveform()
    {
        _waveform.Children.Clear();
        _waveformPlayhead = null;
        var width = _waveform.Bounds.Width;
        var height = _waveform.Bounds.Height;
        if (width <= 1 || height <= 1 || _peaks.Length == 0)
            return;

        var mid = height * 0.5;
        var brush = new SolidColorBrush(Color.FromRgb(70, 170, 255));
        var step = width / _peaks.Length;
        for (var i = 0; i < _peaks.Length; i++)
        {
            var peak = _peaks[i];
            var top = mid - Math.Abs(peak.Max) * (mid - 2);
            var bottom = mid + Math.Abs(peak.Min) * (mid - 2);
            if (bottom < top)
                (top, bottom) = (bottom, top);
            var barHeight = Math.Max(1.5, bottom - top);
            var rect = new Rectangle
            {
                Width = Math.Max(1, step),
                Height = barHeight,
                Fill = brush,
                Opacity = 0.95,
            };
            Canvas.SetLeft(rect, i * step);
            Canvas.SetTop(rect, top);
            _waveform.Children.Add(rect);
        }

        _waveform.Children.Add(new Line
        {
            StartPoint = new Point(0, mid),
            EndPoint = new Point(width, mid),
            Stroke = new SolidColorBrush(Color.FromArgb(60, 255, 255, 255)),
            StrokeThickness = 1,
        });

        UpdatePlayhead(_waveform, ref _waveformPlayhead);
    }

    private void UpdatePlayhead(Canvas canvas, ref Line? playhead)
    {
        var width = canvas.Bounds.Width;
        var height = canvas.Bounds.Height;
        if (width <= 1 || height <= 1)
            return;
        var x = _seek.Value * width;
        if (playhead is null)
        {
            playhead = new Line
            {
                Stroke = Brushes.White,
                StrokeThickness = 1.5,
                Opacity = 0.9,
            };
            canvas.Children.Add(playhead);
        }
        playhead.StartPoint = new Point(x, 0);
        playhead.EndPoint = new Point(x, height);
    }

    private static (SoundSequence Sequence, byte[] Wav, WaveformPeaks.Peak[] Peaks, string Meta, string Status)
        BuildPreview(RomImage rom, AssetDescriptor asset)
    {
        if (asset.Kind == AssetKind.SoundWave)
        {
            try
            {
                var waveBytes = asset.HasRomRange
                    ? SoundWaveCodec.ToWave(rom, asset)
                    : Array.Empty<byte>();
                var peaks = WaveformPeaks.Build(waveBytes);
                var waveSequence = new SoundSequence
                {
                    Name = asset.Name,
                    Notes = Array.Empty<SoundNoteEvent>(),
                    Diagnostic = waveBytes.Length == 0
                        ? "Wave preview requires a ROM-matched DirectSound sample."
                        : null,
                };
                return (waveSequence, waveBytes, peaks,
                    asset.Description ?? asset.Format,
                    waveBytes.Length == 0 ? waveSequence.Diagnostic! : "Ready (DirectSound sample)");
            }
            catch (Exception exception) when (exception is InvalidDataException or ArgumentException)
            {
                return (new SoundSequence { Name = asset.Name, Diagnostic = exception.Message },
                    Array.Empty<byte>(), Array.Empty<WaveformPeaks.Peak>(),
                    asset.Description ?? asset.Format, exception.Message);
            }
        }

        if (!asset.Metadata.TryGetValue("songId", out var songIdText) ||
            !int.TryParse(songIdText, out var songId))
            songId = -1;

        var sequence = songId >= 0
            ? SoundSequenceParser.ParseFromRom(rom, songId, asset.Name, maxLoops: 1)
            : SoundSequenceParser.ParseFromSource(asset.SourcePath ?? string.Empty, asset.Name, songId);
        if (sequence.Notes.Count == 0 && asset.SourcePath is not null)
            sequence = SoundSequenceParser.ParseFromSource(asset.SourcePath, asset.Name, songId);

        byte[] wav;
        string engine;
        try
        {
            if (songId < 0)
                throw new InvalidOperationException("Song ID is unavailable.");
            if (!AgbplayRenderer.IsAvailable())
                throw new InvalidOperationException(
                    "agbplay-cli not found under RescueEditor/tools/agbplay.");
            var rendered = AgbplayRenderer.RenderSong(rom.Path, songId, maxLoops: 1);
            wav = rendered.WavBytes;
            engine = rendered.Engine;
        }
        catch (Exception exception) when (exception is InvalidOperationException or InvalidDataException or
                                           TimeoutException or IOException)
        {
            // Keep piano-roll useful even when render fails.
            return (sequence, Array.Empty<byte>(), Array.Empty<WaveformPeaks.Peak>(),
                $"{asset.Description}\n\n{exception.Message}",
                "Playback unavailable — " + exception.Message);
        }

        var peaksBuilt = WaveformPeaks.Build(wav);
        var meta =
            $"{asset.Description}\n" +
            $"Engine: {engine} (mp2k/m4a)  ·  Tracks: {sequence.TrackCount}  ·  " +
            $"Notes: {sequence.Notes.Count:N0}  ·  Audio: {wav.Length / 1024.0:0} KiB";
        return (sequence, wav, peaksBuilt, meta, "Ready");
    }

    private static string FormatTime(TimeSpan value) =>
        $"{(int)value.TotalMinutes}:{value.Seconds:00}";
}
