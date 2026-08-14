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
    private readonly TextBlock _timeStart;
    private readonly TextBlock _timeEnd;
    private readonly Button _playButton;
    private readonly Button _stopButton;
    private readonly Button _importButton;
    private readonly Button _applyButton;
    private readonly Slider _seek;
    private readonly Canvas _waveform;
    private readonly TextBox _codeBox;
    private readonly AgbplayStreamPlayer _streamPlayer;
    private readonly SoundCacheWarmer? _cacheWarmer;
    private readonly DispatcherTimer _timer;
    private WaveformPeaks.Peak[] _peaks = Array.Empty<WaveformPeaks.Peak>();
    private byte[] _wav = Array.Empty<byte>();
    private RomImage? _rom;
    private AssetDescriptor? _asset;
    private int _songId = -1;
    private int _maxLoops = 1;
    private bool _disposed;
    private bool _waveformDirty = true;
    private bool _seekDragging;
    private Line? _waveformPlayhead;
    private DateTime _playRequestUtc;
    private TimeSpan _knownDuration;
    private TimeSpan _estimatedDuration;
    private long _lastWaveformBytes;
    private CancellationTokenSource? _loadCts;
    private int _waveformUpdatePending; // 0 = idle, 1 = queued/running
    private Polyline? _waveformShape;

    public event Func<Task>? ImportRequested;
    public event Action? ApplyRequested;

    public SoundPreviewPanel(AgbplayStreamHost streamHost, SoundCacheWarmer? cacheWarmer = null)
    {
        _cacheWarmer = cacheWarmer;
        _streamPlayer = new AgbplayStreamPlayer(streamHost);
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
        _timeStart = new TextBlock
        {
            Text = "0:00",
            FontSize = 12,
            Foreground = Brushes.Gray,
            VerticalAlignment = VerticalAlignment.Center,
            MinWidth = 40,
        };
        _timeEnd = new TextBlock
        {
            Text = "0:00",
            FontSize = 12,
            Foreground = Brushes.Gray,
            VerticalAlignment = VerticalAlignment.Center,
            MinWidth = 40,
            TextAlignment = TextAlignment.Right,
        };
        _playButton = new Button { Content = "Play", MinWidth = 72 };
        _stopButton = new Button { Content = "Stop", MinWidth = 72 };
        _importButton = new Button { Content = "Import audio…", MinWidth = 108 };
        _applyButton = new Button { Content = "Apply", MinWidth = 72, IsEnabled = false };

        _seek = new Slider
        {
            Minimum = 0,
            Maximum = 1,
            Value = 0,
            IsEnabled = false,
            VerticalAlignment = VerticalAlignment.Center,
        };

        _playButton.Click += (_, _) =>
        {
            if (_streamPlayer.IsPlaying)
            {
                _streamPlayer.Pause();
                _playButton.Content = "Play";
                return;
            }

            if (_streamPlayer.IsPaused ||
                (Equals(_playButton.Content, "Play") && _streamPlayer.BufferedDuration > TimeSpan.Zero))
            {
                _streamPlayer.Resume();
                _playButton.Content = "Pause";
                return;
            }

            StartPlayback();
        };
        _stopButton.Click += (_, _) =>
        {
            _loadCts?.Cancel();
            _streamPlayer.Stop();
            _cacheWarmer?.Resume();
            _playButton.Content = "Play";
            _seek.Value = 0;
            _timeStart.Text = "0:00";
            UpdateVisuals();
        };
        _importButton.Click += async (_, _) =>
        {
            if (ImportRequested is null)
                return;
            await ImportRequested();
        };
        _applyButton.Click += (_, _) => ApplyRequested?.Invoke();

        _seek.AddHandler(InputElement.PointerPressedEvent, (_, _) => _seekDragging = true,
            handledEventsToo: true);
        _seek.AddHandler(InputElement.PointerReleasedEvent, (_, _) =>
        {
            if (!_seekDragging)
                return;
            _seekDragging = false;
            ApplySeek(_seek.Value);
        }, handledEventsToo: true);
        _seek.AddHandler(InputElement.PointerCaptureLostEvent, (_, _) =>
        {
            if (!_seekDragging)
                return;
            _seekDragging = false;
            ApplySeek(_seek.Value);
        }, handledEventsToo: true);
        _seek.PropertyChanged += (_, args) =>
        {
            if (args.Property != RangeBase.ValueProperty || !_seekDragging)
                return;
            _timeStart.Text = FormatTime(TimeSpan.FromSeconds(_seek.Value));
        };

        _waveform = new Canvas
        {
            Background = new SolidColorBrush(Color.FromRgb(14, 14, 18)),
            ClipToBounds = true,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            VerticalAlignment = VerticalAlignment.Stretch,
        };
        _waveform.SizeChanged += (_, _) =>
        {
            _waveform.Children.Clear();
            _waveformShape = null;
            _waveformPlayhead = null;
            _waveformDirty = true;
            DrawWaveform();
        };
        _waveform.PointerPressed += OnWaveformPointerPressed;

        var seekRow = new Grid
        {
            Margin = new Thickness(0, 8, 0, 0),
            ColumnDefinitions = ColumnDefinitions.Parse("Auto,*,Auto"),
            Children =
            {
                _timeStart,
                _seek,
                _timeEnd,
            },
        };
        Grid.SetColumn(_timeStart, 0);
        Grid.SetColumn(_seek, 1);
        Grid.SetColumn(_timeEnd, 2);
        _seek.Margin = new Thickness(10, 0);

        var playerGrid = new Grid
        {
            Margin = new Thickness(12),
            RowDefinitions = RowDefinitions.Parse("Auto,Auto,Auto,Auto,*"),
        };
        playerGrid.Children.Add(_title);
        Grid.SetRow(_title, 0);
        playerGrid.Children.Add(_meta);
        Grid.SetRow(_meta, 1);
        _meta.Margin = new Thickness(0, 4, 0, 0);

        var controls = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 8,
            Margin = new Thickness(0, 8, 0, 0),
            Children = { _playButton, _stopButton, _importButton, _applyButton, _status },
        };
        playerGrid.Children.Add(controls);
        Grid.SetRow(controls, 2);

        playerGrid.Children.Add(seekRow);
        Grid.SetRow(seekRow, 3);

        var waveHost = new Grid
        {
            Margin = new Thickness(0, 10, 0, 0),
            RowDefinitions = RowDefinitions.Parse("Auto,*"),
            Children =
            {
                new TextBlock
                {
                    Text = "Waveform",
                    FontSize = 12,
                    Foreground = Brushes.Gray,
                    Margin = new Thickness(0, 0, 0, 4),
                },
                _waveform,
            },
        };
        Grid.SetRow(waveHost.Children[0], 0);
        Grid.SetRow(_waveform, 1);
        playerGrid.Children.Add(waveHost);
        Grid.SetRow(waveHost, 4);

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
        _tabs.Items.Add(new TabItem { Header = "Player", Content = playerGrid });
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

        _streamPlayer.PlaybackStarted += () => Dispatcher.UIThread.Post(() =>
        {
            var ms = (DateTime.UtcNow - _playRequestUtc).TotalMilliseconds;
            _playButton.Content = "Pause";
            _status.Text = ms > 0 && ms < 5000 ? $"Playing (started in {ms:0} ms)" : "Playing";
            RefreshDurationUi();
        });
        _streamPlayer.Failed += message => Dispatcher.UIThread.Post(() =>
        {
            _cacheWarmer?.Resume();
            _status.Text = message;
            _playButton.Content = "Play";
        });
        _streamPlayer.CompletedWav += wav =>
        {
            var songId = _songId;
            var maxLoops = _maxLoops;
            var romPath = _rom?.Path;
            var cts = _loadCts;
            _ = Task.Run(() =>
            {
                var peaks = WaveformPeaks.Build(wav, bucketCount: 640);
                var duration = TimeSpan.FromSeconds(GuessWavDurationSeconds(wav));
                if (romPath is not null && songId >= 0)
                {
                    try { AgbplayRenderer.SaveCachedWav(romPath, songId, maxLoops, wav); }
                    catch { /* ignore */ }
                }

                Dispatcher.UIThread.Post(() =>
                {
                    if (_disposed || cts?.IsCancellationRequested == true)
                        return;
                    _wav = wav;
                    _peaks = peaks;
                    _waveformDirty = true;
                    _knownDuration = duration;
                    _lastWaveformBytes = Math.Max(0, wav.Length - 44);
                    DrawWaveform();
                    RefreshDurationUi();
                    _status.Text = _streamPlayer.IsPlaying ? "Playing" : "Ready";
                    if (!_streamPlayer.IsPlaying)
                        _cacheWarmer?.Resume();
                });
            });
        };
        _streamPlayer.BufferProgress += RequestStreamingWaveformUpdate;
    }

    public async Task LoadAsync(
        RomImage rom,
        AssetDescriptor asset,
        string codeText,
        CancellationToken token = default,
        byte[]? stagedWav = null,
        string? stagedNote = null)
    {
        _loadCts?.Cancel();
        var cts = CancellationTokenSource.CreateLinkedTokenSource(token);
        _loadCts = cts;
        var loadToken = cts.Token;

        _streamPlayer.Stop();
        _cacheWarmer?.Resume();
        _rom = rom;
        _asset = asset;
        _playButton.Content = "Play";
        _title.Text = asset.Name;
        _codeBox.Text = codeText;
        _status.Text = "Preparing…";
        _seek.Value = 0;
        _seek.IsEnabled = false;
        _knownDuration = TimeSpan.Zero;
        _estimatedDuration = TimeSpan.Zero;
        _lastWaveformBytes = 0;
        _waveformUpdatePending = 0;
        _timeStart.Text = "0:00";
        _timeEnd.Text = "--:--";
        _peaks = Array.Empty<WaveformPeaks.Peak>();
        _wav = Array.Empty<byte>();
        _waveformDirty = true;
        _songId = -1;

        try
        {
            var prepared = await Task.Run(() => PreparePreview(rom, asset), loadToken);
            if (loadToken.IsCancellationRequested || _disposed)
                return;

            _songId = prepared.SongId;
            _maxLoops = prepared.MaxLoops;
            _meta.Text = string.IsNullOrWhiteSpace(stagedNote)
                ? prepared.Meta
                : stagedNote + "\n" + prepared.Meta;
            _estimatedDuration = prepared.EstimatedDuration;
            DrawWaveform();
            RefreshDurationUi();

            var previewWav = stagedWav is { Length: > 44 } ? stagedWav : prepared.CachedWav;
            if (previewWav.Length > 44)
            {
                _wav = previewWav;
                _peaks = WaveformPeaks.Build(_wav, bucketCount: DesiredBucketCount());
                _knownDuration = TimeSpan.FromSeconds(GuessWavDurationSeconds(_wav));
                _waveformDirty = true;
                DrawWaveform();
                RefreshDurationUi();
                _status.Text = stagedWav is { Length: > 44 } ? "Ready (import preview)" : "Ready (cached)";
            }
            else
            {
                _status.Text = AgbplayRenderer.IsStreamAvailable()
                    ? "Starting stream…"
                    : "agbplay-stream missing — cannot play quickly";
            }

            if (loadToken.IsCancellationRequested || _disposed)
                return;
            StartPlayback();
        }
        catch (OperationCanceledException)
        {
            // switched tracks
        }
    }

    /// <summary>Immediate silence without tearing down the panel.</summary>
    public void StopAudio()
    {
        _loadCts?.Cancel();
        _streamPlayer.Stop();
        _cacheWarmer?.Resume();
        _playButton.Content = "Play";
        _status.Text = "Preparing…";
    }

    public void SetApplyEnabled(bool enabled) => _applyButton.IsEnabled = enabled;

    public void SetStatus(string text, bool warn = false)
    {
        _status.Text = text;
        _status.Foreground = warn ? EditorTheme.WarningBrush : Brushes.Gray;
    }

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        _loadCts?.Cancel();
        _timer.Stop();
        _streamPlayer.Dispose();
    }

    private void StartPlayback()
    {
        if (_disposed || _rom is null || _asset is null)
            return;

        var rom = _rom;
        var asset = _asset;
        var songId = _songId;
        var maxLoops = _maxLoops;
        var wav = _wav;

        _playRequestUtc = DateTime.UtcNow;

        if (asset.Kind == AssetKind.SoundWave)
        {
            if (wav.Length < 44 && asset.HasRomRange)
            {
                try { wav = SoundWaveCodec.ToWave(rom, asset); }
                catch (Exception exception) when (exception is InvalidDataException or ArgumentException)
                {
                    _status.Text = exception.Message;
                    return;
                }
                _wav = wav;
                _peaks = WaveformPeaks.Build(wav);
                _knownDuration = TimeSpan.FromSeconds(GuessWavDurationSeconds(wav));
                _waveformDirty = true;
                DrawWaveform();
                RefreshDurationUi();
            }
            if (wav.Length < 44)
            {
                _status.Text = "No playable sample data.";
                return;
            }
            _streamPlayer.PlayCached(wav);
            return;
        }

        if (songId < 0)
        {
            _status.Text = "Song ID unavailable.";
            return;
        }

        if (wav.Length >= 44)
        {
            _streamPlayer.PlayCached(wav);
            return;
        }

        if (AgbplayRenderer.TryGetCachedWav(rom.Path, songId, maxLoops, out var cached, out _))
        {
            _wav = cached;
            _peaks = WaveformPeaks.Build(cached);
            _knownDuration = TimeSpan.FromSeconds(GuessWavDurationSeconds(cached));
            _waveformDirty = true;
            DrawWaveform();
            RefreshDurationUi();
            _streamPlayer.PlayCached(cached);
            return;
        }

        if (!AgbplayRenderer.IsStreamAvailable())
        {
            _status.Text = "agbplay-stream not found under tools/agbplay.";
            return;
        }

        _status.Text = "Buffering…";
        _cacheWarmer?.Pause();
        _streamPlayer.StartStream(rom.Path, songId, maxLoops);
    }

    private void ApplySeek(double seconds)
    {
        var target = TimeSpan.FromSeconds(Math.Max(0, seconds));
        if (_wav.Length > 44 && !_streamPlayer.CanSeek)
        {
            // Prefer full-file seek: restart from cache at the requested position.
            var wasPlaying = _streamPlayer.IsPlaying || _streamPlayer.IsPaused;
            _streamPlayer.PlayCached(_wav);
            _streamPlayer.Seek(target);
            if (!wasPlaying)
                _streamPlayer.Pause();
            _playButton.Content = wasPlaying ? "Pause" : "Play";
            RefreshDurationUi();
            return;
        }

        if (!_streamPlayer.Seek(target))
            return;

        _timeStart.Text = FormatTime(target);
        UpdatePlayhead();
    }

    private void OnWaveformPointerPressed(object? sender, PointerPressedEventArgs e)
    {
        if (!_seek.IsEnabled || _seek.Maximum <= 0)
            return;
        var x = e.GetPosition(_waveform).X;
        var width = _waveform.Bounds.Width;
        if (width <= 1)
            return;
        var seconds = Math.Clamp(x / width, 0, 1) * _seek.Maximum;
        _seek.Value = seconds;
        ApplySeek(seconds);
    }

    private void RefreshDurationUi()
    {
        // Prefer final rendered/cached length. While still streaming, use the sequence
        // estimate — never the live capture length (agbplay fills far faster than realtime).
        var duration = _streamPlayer.Duration;
        if (duration <= TimeSpan.Zero)
            duration = _knownDuration;
        if (duration <= TimeSpan.Zero && _wav.Length > 44)
            duration = TimeSpan.FromSeconds(GuessWavDurationSeconds(_wav));

        var hasFinal = duration > TimeSpan.Zero;
        if (hasFinal)
            _knownDuration = duration;

        var display = hasFinal
            ? duration
            : _estimatedDuration;

        if (display > TimeSpan.Zero)
        {
            _timeEnd.Text = hasFinal ? FormatTime(display) : "~" + FormatTime(display);
            var seekMax = display.TotalSeconds;
            // Allow seeking through whatever has already been buffered even if estimate is short.
            if (_streamPlayer.IsLiveStreaming)
                seekMax = Math.Max(seekMax, _streamPlayer.CapturedDuration.TotalSeconds);
            _seek.Maximum = Math.Max(0.001, seekMax);
            _seek.IsEnabled = _streamPlayer.CanSeek || _wav.Length > 44 || _streamPlayer.IsLiveStreaming;
        }
        else
        {
            _timeEnd.Text = "--:--";
            var captured = _streamPlayer.CapturedDuration.TotalSeconds;
            _seek.Maximum = Math.Max(0.001, captured > 0 ? captured : 1);
            _seek.IsEnabled = _streamPlayer.CanSeek || captured > 0.25;
        }
    }

    private void RequestStreamingWaveformUpdate()
    {
        if (_disposed || _wav.Length > 44 || _streamPlayer.IsStreamComplete)
            return;
        if (Interlocked.CompareExchange(ref _waveformUpdatePending, 1, 0) != 0)
            return;

        var cts = _loadCts;
        var estimated = _estimatedDuration;
        var bucketCount = DesiredBucketCount();
        _ = Task.Run(() =>
        {
            try
            {
                if (_disposed || cts?.IsCancellationRequested == true)
                    return;
                if (!_streamPlayer.TryBuildCapturedPeaks(bucketCount, out var peaks, out var bytesUsed))
                    return;
                if (bytesUsed < 8192 || bytesUsed == _lastWaveformBytes)
                    return;

                // Left-align rendered audio within the estimated total length when known.
                if (estimated > TimeSpan.Zero)
                {
                    var capturedSeconds = bytesUsed / 192000.0; // fallback; refined below if possible
                    var captured = _streamPlayer.CapturedDuration;
                    if (captured > TimeSpan.Zero)
                        capturedSeconds = captured.TotalSeconds;
                    var ratio = Math.Clamp(capturedSeconds / estimated.TotalSeconds, 0.02, 1.0);
                    var filled = Math.Max(1, (int)(peaks.Length * ratio));
                    if (filled < peaks.Length)
                    {
                        var padded = new WaveformPeaks.Peak[peaks.Length];
                        for (var i = 0; i < filled; i++)
                        {
                            var src = i * peaks.Length / filled;
                            padded[i] = peaks[Math.Min(src, peaks.Length - 1)];
                        }
                        peaks = padded;
                    }
                }

                Dispatcher.UIThread.Post(() =>
                {
                    if (_disposed || cts?.IsCancellationRequested == true)
                        return;
                    _lastWaveformBytes = bytesUsed;
                    _peaks = peaks;
                    _waveformDirty = true;
                    DrawWaveform();
                    RefreshDurationUi();
                });
            }
            finally
            {
                Interlocked.Exchange(ref _waveformUpdatePending, 0);
            }
        });
    }

    private int DesiredBucketCount()
    {
        var width = _waveform.Bounds.Width;
        if (width <= 1)
            return 480;
        return Math.Clamp((int)width, 160, 720);
    }

    private void UpdateVisuals()
    {
        if (_disposed)
            return;

        if (_streamPlayer.IsPlaying)
        {
            _playButton.Content = "Pause";
            var current = _streamPlayer.CurrentTime;
            _status.Text = $"Playing  {FormatTime(current)}";
        }
        else if (_streamPlayer.IsPaused)
        {
            _playButton.Content = "Play";
        }
        else if (Equals(_playButton.Content, "Pause"))
        {
            _playButton.Content = "Play";
        }

        RefreshDurationUi();

        if (!_seekDragging && _seek.IsEnabled)
        {
            var current = _streamPlayer.CurrentTime.TotalSeconds;
            if (current >= 0 && current <= _seek.Maximum)
                _seek.Value = current;
            _timeStart.Text = FormatTime(_streamPlayer.CurrentTime);
        }
        else if (_seekDragging)
        {
            _timeStart.Text = FormatTime(TimeSpan.FromSeconds(_seek.Value));
        }

        if (_waveformDirty)
        {
            DrawWaveform();
            _waveformDirty = false;
        }
        else
        {
            UpdatePlayhead();
        }
    }

    private void DrawWaveform()
    {
        var width = _waveform.Bounds.Width;
        var height = _waveform.Bounds.Height;
        if (width <= 1 || height <= 1)
            return;

        if (_waveform.Children.Count == 0 || _waveformShape is null)
        {
            _waveform.Children.Clear();
            _waveformPlayhead = null;
            _waveformShape = null;
            var mid = height * 0.5;
            _waveform.Children.Add(new Line
            {
                StartPoint = new Point(0, mid),
                EndPoint = new Point(width, mid),
                Stroke = new SolidColorBrush(Color.FromArgb(60, 255, 255, 255)),
                StrokeThickness = 1,
            });
        }

        if (_peaks.Length == 0)
        {
            if (_waveformShape is not null)
            {
                _waveform.Children.Remove(_waveformShape);
                _waveformShape = null;
            }
            UpdatePlayhead();
            return;
        }

        var midY = height * 0.5;
        var points = new List<Point>(_peaks.Length * 2);
        var step = width / Math.Max(1, _peaks.Length);
        for (var i = 0; i < _peaks.Length; i++)
        {
            var x = i * step + step * 0.5;
            var top = midY - Math.Abs(_peaks[i].Max) * (midY - 2);
            points.Add(new Point(x, top));
        }
        for (var i = _peaks.Length - 1; i >= 0; i--)
        {
            var x = i * step + step * 0.5;
            var bottom = midY + Math.Abs(_peaks[i].Min) * (midY - 2);
            points.Add(new Point(x, bottom));
        }

        if (_waveformShape is null)
        {
            _waveformShape = new Polyline
            {
                Stroke = new SolidColorBrush(Color.FromRgb(70, 170, 255)),
                StrokeThickness = 1.2,
                Fill = new SolidColorBrush(Color.FromArgb(160, 70, 170, 255)),
                Opacity = 0.95,
            };
            _waveform.Children.Insert(1, _waveformShape);
        }

        _waveformShape.Points = points;
        UpdatePlayhead();
    }

    private void UpdatePlayhead()
    {
        var width = _waveform.Bounds.Width;
        var height = _waveform.Bounds.Height;
        if (width <= 1 || height <= 1)
            return;

        var total = _seek.Maximum > 0
            ? _seek.Maximum
            : _knownDuration.TotalSeconds;
        if (total <= 0)
            total = GuessWavDurationSeconds(_wav);
        double ratio = 0;
        if (total > 0)
        {
            var current = _seekDragging ? _seek.Value : _streamPlayer.CurrentTime.TotalSeconds;
            ratio = Math.Clamp(current / total, 0, 1);
        }

        var x = ratio * width;
        if (_waveformPlayhead is null)
        {
            _waveformPlayhead = new Line
            {
                Stroke = Brushes.White,
                StrokeThickness = 1.5,
                Opacity = 0.9,
            };
            _waveform.Children.Add(_waveformPlayhead);
        }

        _waveformPlayhead.StartPoint = new Point(x, 0);
        _waveformPlayhead.EndPoint = new Point(x, height);
    }

    private static (int SongId, int MaxLoops, byte[] CachedWav, string Meta, TimeSpan EstimatedDuration)
        PreparePreview(RomImage rom, AssetDescriptor asset)
    {
        if (asset.Kind == AssetKind.SoundWave)
        {
            byte[] wav = Array.Empty<byte>();
            try
            {
                if (asset.HasRomRange)
                    wav = SoundWaveCodec.ToWave(rom, asset);
            }
            catch (Exception exception) when (exception is InvalidDataException or ArgumentException)
            {
                return (-1, 0, Array.Empty<byte>(), exception.Message, TimeSpan.Zero);
            }

            var waveDuration = TimeSpan.FromSeconds(GuessWavDurationSeconds(wav));
            return (-1, 0, wav, asset.Description ?? asset.Format, waveDuration);
        }

        if (!asset.Metadata.TryGetValue("songId", out var songIdText) ||
            !int.TryParse(songIdText, out var songId))
            songId = -1;

        var maxLoops = songId >= SoundIndexer.SoundEffectsStartIndex ? 0 : 1;
        var sequence = songId >= 0
            ? SoundSequenceParser.ParseFromRom(rom, songId, asset.Name, maxLoops: 1)
            : SoundSequenceParser.ParseFromSource(asset.SourcePath ?? string.Empty, asset.Name, songId);
        if (sequence.Notes.Count == 0 && asset.SourcePath is not null)
            sequence = SoundSequenceParser.ParseFromSource(asset.SourcePath, asset.Name, songId);

        AgbplayRenderer.TryGetCachedWav(rom.Path, songId, maxLoops, out var cached, out _);
        var estimated = sequence.DurationSeconds > 0.5
            ? TimeSpan.FromSeconds(sequence.DurationSeconds)
            : TimeSpan.Zero;
        var meta =
            $"{asset.Description}\n" +
            $"Tracks: {sequence.TrackCount}  ·  Notes: {sequence.Notes.Count:N0}  ·  " +
            (cached.Length > 44 ? "Cache: hit" : "Cache: miss (streaming)");
        return (songId, maxLoops, cached, meta, estimated);
    }

    private static double GuessWavDurationSeconds(byte[] wav)
    {
        if (wav.Length < 44)
            return 0;
        var channels = BitConverter.ToInt16(wav, 22);
        var rate = BitConverter.ToInt32(wav, 24);
        var bits = BitConverter.ToInt16(wav, 34);
        if (channels <= 0 || rate <= 0 || bits <= 0)
            return 0;
        var dataOffset = WaveformPeaks.FindDataChunkOffset(wav);
        if (dataOffset < 0)
            dataOffset = 44;
        var data = Math.Max(0, wav.Length - dataOffset);
        var bytesPerSec = rate * channels * (bits / 8);
        return bytesPerSec <= 0 ? 0 : data / (double)bytesPerSec;
    }

    private static string FormatTime(TimeSpan value)
    {
        if (value < TimeSpan.Zero)
            value = TimeSpan.Zero;
        return value.TotalHours >= 1
            ? $"{(int)value.TotalHours}:{value.Minutes:00}:{value.Seconds:00}"
            : $"{(int)value.TotalMinutes}:{value.Seconds:00}";
    }
}
