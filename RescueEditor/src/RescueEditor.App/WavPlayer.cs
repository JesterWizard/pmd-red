using NAudio.Wave;

namespace RescueEditor.App;

internal sealed class WavPlayer : IDisposable
{
    private readonly object _gate = new();
    private WaveOutEvent? _output;
    private WaveFileReader? _reader;
    private byte[] _wav = Array.Empty<byte>();
    private bool _disposed;

    public bool IsPlaying
    {
        get
        {
            lock (_gate)
                return _output?.PlaybackState == PlaybackState.Playing;
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

    public int PositionBytes
    {
        get
        {
            lock (_gate)
                return _reader is null ? 0 : (int)Math.Max(0, _reader.Position);
        }
    }

    public byte[] WavBytes
    {
        get
        {
            lock (_gate)
                return _wav;
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

            _reader = new WaveFileReader(new MemoryStream(_wav, writable: false));
            _output = new WaveOutEvent();
            _output.Init(_reader);
        }
    }

    public void Play()
    {
        lock (_gate)
        {
            if (_output is null || _reader is null)
                return;
            if (_reader.Position >= _reader.Length)
                _reader.Position = 0;
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
            _output?.Stop();
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

    private void DisposeOutputLocked()
    {
        _output?.Stop();
        _output?.Dispose();
        _output = null;
        _reader?.Dispose();
        _reader = null;
    }
}
