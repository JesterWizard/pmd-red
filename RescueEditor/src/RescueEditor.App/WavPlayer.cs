using NAudio.Wave;
using NAudio.Wave.SampleProviders;

namespace RescueEditor.App;

internal sealed class WavPlayer : IDisposable
{
    private readonly object _gate = new();
    private WaveOutEvent? _output;
    private WaveStream? _reader;
    private byte[] _wav = Array.Empty<byte>();
    private bool _disposed;
    private bool _looping;

    public bool IsPlaying
    {
        get
        {
            lock (_gate)
                return _output?.PlaybackState == PlaybackState.Playing;
        }
    }

    public bool IsPaused
    {
        get
        {
            lock (_gate)
                return _output?.PlaybackState == PlaybackState.Paused;
        }
    }

    public TimeSpan CurrentTime
    {
        get
        {
            lock (_gate)
                return _reader?.CurrentTime ?? TimeSpan.Zero;
        }
    }

    public TimeSpan TotalTime
    {
        get
        {
            lock (_gate)
                return _reader?.TotalTime ?? TimeSpan.Zero;
        }
    }

    public void Load(byte[] wavBytes)
    {
        ArgumentNullException.ThrowIfNull(wavBytes);
        lock (_gate)
        {
            DisposeOutputLocked();
            _wav = wavBytes;
            if (_wav.Length < 44)
                return;

            var reader = new WaveFileReader(new MemoryStream(_wav, writable: false));
            _reader = reader;
            // -1 = WAVE_MAPPER (system default). Device 0 can be a silent/disabled endpoint.
            _output = new WaveOutEvent { DesiredLatency = 200, DeviceNumber = -1 };
            _output.Init(ToPcm16(reader));
            // Clear a stuck WaveOut mute left by older builds that set Volume = 0
            // (that writes the per-app Windows mixer entry for this process name).
            try { _output.Volume = 1f; } catch { /* ignore */ }
        }
    }

    public void Play()
    {
        lock (_gate)
        {
            DetachLoopHandlerLocked();
            if (_output is null || _reader is null)
                return;
            if (_reader.Position >= _reader.Length)
                _reader.Position = 0;
            try { _output.Volume = 1f; } catch { /* ignore */ }
            _output.Play();
        }
    }

    /// <summary>Play and restart from the beginning when the buffer ends (BGM).</summary>
    public void PlayLooping()
    {
        lock (_gate)
        {
            DetachLoopHandlerLocked();
            if (_output is null || _reader is null)
                return;
            if (_reader.Position >= _reader.Length)
                _reader.Position = 0;
            try { _output.Volume = 1f; } catch { /* ignore */ }
            _output.PlaybackStopped += OnLoopPlaybackStopped;
            _looping = true;
            _output.Play();
        }
    }

    public void Pause()
    {
        lock (_gate)
            _output?.Pause();
    }

    public void Stop()
    {
        lock (_gate)
        {
            DetachLoopHandlerLocked();
            try { _output?.Stop(); } catch { /* ignore */ }
            if (_reader is not null)
                _reader.Position = 0;
        }
    }

    public void Seek(double ratio)
    {
        lock (_gate)
        {
            if (_reader is null)
                return;
            ratio = Math.Clamp(ratio, 0, 1);
            _reader.Position = (long)(_reader.Length * ratio);
        }
    }

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        lock (_gate)
        {
            DisposeOutputLocked();
            _wav = Array.Empty<byte>();
        }
    }

    internal static WaveOutEvent CreateOutput() =>
        new() { DesiredLatency = 200, DeviceNumber = -1 };

    private static IWaveProvider ToPcm16(WaveStream reader)
    {
        if (reader.WaveFormat.Encoding == WaveFormatEncoding.Pcm &&
            reader.WaveFormat.BitsPerSample == 16)
            return reader;
        return new SampleToWaveProvider16(reader.ToSampleProvider());
    }

    private void DisposeOutputLocked()
    {
        DetachLoopHandlerLocked();
        try { _output?.Stop(); } catch { /* ignore */ }
        try { _output?.Dispose(); } catch { /* ignore */ }
        _output = null;
        try { _reader?.Dispose(); } catch { /* ignore */ }
        _reader = null;
    }

    private void DetachLoopHandlerLocked()
    {
        if (_output is not null && _looping)
        {
            try { _output.PlaybackStopped -= OnLoopPlaybackStopped; } catch { /* ignore */ }
        }
        _looping = false;
    }

    private void OnLoopPlaybackStopped(object? sender, StoppedEventArgs e)
    {
        lock (_gate)
        {
            if (!_looping || _output is null || _reader is null || _disposed)
                return;
            try
            {
                _reader.Position = 0;
                _output.Play();
            }
            catch
            {
                _looping = false;
            }
        }
    }
}
