using Avalonia.Threading;
using NAudio.Wave;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>
/// Cached WAV playback via <see cref="WavPlayer"/>, otherwise PCM stream from agbplay-stream.
/// </summary>
internal sealed class AgbplayStreamPlayer : IDisposable, AgbplayStreamHost.IPcmSink
{
    private const int StartBufferMilliseconds = 100;
    private readonly object _gate = new();
    private readonly AgbplayStreamHost _host;
    private readonly WavPlayer _wavPlayer = new();
    private WaveOutEvent? _streamOut;
    private BufferedWaveProvider? _streamBuffer;
    private WaveFormat? _streamFormat;
    private CancellationTokenSource? _cts;
    private Task? _streamTask;
    private readonly MemoryStream _pcmCapture = new();
    private bool _disposed;
    private bool _streamStarted;
    private bool _streaming;
    private bool _streamComplete;
    private int _session;
    private long _bytesPlayedEstimate;
    private long _lastProgressBytes;

    public AgbplayStreamPlayer(AgbplayStreamHost host) => _host = host;

    public event Action? PlaybackStarted;
    public event Action<string>? Failed;
    public event Action<byte[]>? CompletedWav;
    public event Action? BufferProgress;

    public bool IsPlaying
    {
        get
        {
            lock (_gate)
                return _streaming
                    ? _streamOut?.PlaybackState == PlaybackState.Playing
                    : _wavPlayer.IsPlaying;
        }
    }

    public bool IsPaused
    {
        get
        {
            lock (_gate)
                return _streaming
                    ? _streamOut?.PlaybackState == PlaybackState.Paused
                    : _wavPlayer.IsPaused;
        }
    }

    public bool CanSeek
    {
        get
        {
            lock (_gate)
                return _streaming
                    ? _streamComplete && _pcmCapture.Length > 0
                    : _wavPlayer.TotalTime > TimeSpan.Zero;
        }
    }

    public TimeSpan CurrentTime
    {
        get
        {
            lock (_gate)
            {
                if (!_streaming)
                    return _wavPlayer.CurrentTime;
                if (_streamFormat is null || _streamFormat.AverageBytesPerSecond <= 0)
                    return TimeSpan.Zero;
                return TimeSpan.FromSeconds(_bytesPlayedEstimate / (double)_streamFormat.AverageBytesPerSecond);
            }
        }
    }

    public TimeSpan Duration
    {
        get
        {
            lock (_gate)
            {
                if (!_streaming)
                    return _wavPlayer.TotalTime;
                if (!_streamComplete || _streamFormat is null || _streamFormat.AverageBytesPerSecond <= 0)
                    return TimeSpan.Zero;
                return TimeSpan.FromSeconds(_pcmCapture.Length / (double)_streamFormat.AverageBytesPerSecond);
            }
        }
    }

    public TimeSpan CapturedDuration
    {
        get
        {
            lock (_gate)
            {
                if (!_streaming)
                    return _wavPlayer.TotalTime;
                if (_streamFormat is null || _streamFormat.AverageBytesPerSecond <= 0)
                    return TimeSpan.Zero;
                return TimeSpan.FromSeconds(_pcmCapture.Length / (double)_streamFormat.AverageBytesPerSecond);
            }
        }
    }

    public TimeSpan BufferedDuration => CapturedDuration;

    public bool IsLiveStreaming
    {
        get { lock (_gate) return _streaming && !_streamComplete; }
    }

    public bool IsStreamComplete
    {
        get { lock (_gate) return !_streaming || _streamComplete; }
    }

    public bool TryBuildCapturedPeaks(int bucketCount, out WaveformPeaks.Peak[] peaks, out long bytesUsed)
    {
        byte[] pcm;
        int channels;
        lock (_gate)
        {
            if (!_streaming || _streamFormat is null || _pcmCapture.Length < 4096)
            {
                peaks = Array.Empty<WaveformPeaks.Peak>();
                bytesUsed = 0;
                return false;
            }

            pcm = _pcmCapture.ToArray();
            channels = _streamFormat.Channels;
            bytesUsed = pcm.Length;
        }

        peaks = WaveformPeaks.BuildPcm16(pcm, channels, bucketCount);
        return true;
    }

    public void PlayCached(byte[] wavBytes)
    {
        if (wavBytes.Length < 44)
        {
            Failed?.Invoke("Cached audio is empty.");
            return;
        }

        Stop();
        try
        {
            lock (_gate)
            {
                _streaming = false;
                _streamComplete = true;
            }

            _wavPlayer.Load(wavBytes);
            _wavPlayer.Play();
            if (!_wavPlayer.IsPlaying)
            {
                Failed?.Invoke("WaveOut did not enter Playing state.");
                return;
            }

            PlaybackStarted?.Invoke();
        }
        catch (Exception exception)
        {
            Failed?.Invoke("Playback failed: " + exception.Message);
        }
    }

    public void StartStream(string romPath, int songId, int maxLoops = 1)
    {
        var session = StopInternal();
        var cts = new CancellationTokenSource();
        lock (_gate)
        {
            _cts = cts;
            _streaming = true;
            _streamComplete = false;
            _streamStarted = false;
            _pcmCapture.SetLength(0);
            _bytesPlayedEstimate = 0;
            _lastProgressBytes = 0;
        }

        _streamTask = Task.Run(() => RunStream(session, romPath, songId, maxLoops, cts.Token), cts.Token);
    }

    public bool Seek(TimeSpan position)
    {
        lock (_gate)
        {
            if (!_streaming)
            {
                var total = _wavPlayer.TotalTime.TotalSeconds;
                if (total <= 0)
                    return false;
                _wavPlayer.Seek(Math.Clamp(position.TotalSeconds / total, 0, 1));
                return true;
            }

            if (!_streamComplete || _streamFormat is null || _streamBuffer is null)
                return false;

            var totalBytes = _pcmCapture.Length;
            if (totalBytes <= 0)
                return false;
            var bytePos = (long)(position.TotalSeconds * _streamFormat.AverageBytesPerSecond);
            bytePos -= bytePos % Math.Max(1, _streamFormat.BlockAlign);
            bytePos = Math.Clamp(bytePos, 0, Math.Max(0, totalBytes - _streamFormat.BlockAlign));
            var all = _pcmCapture.ToArray();
            _streamBuffer.ClearBuffer();
            var remaining = (int)(all.Length - bytePos);
            if (remaining > 0)
                _streamBuffer.AddSamples(all, (int)bytePos, remaining);
            _bytesPlayedEstimate = bytePos;
            _streamOut?.Play();
            return true;
        }
    }

    public void Pause()
    {
        lock (_gate)
        {
            if (_streaming)
                _streamOut?.Pause();
            else
                _wavPlayer.Pause();
        }
    }

    public void Resume()
    {
        lock (_gate)
        {
            if (_streaming)
                _streamOut?.Play();
            else
                _wavPlayer.Play();
        }
    }

    public void Stop() => StopInternal();

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        StopInternal();
        _wavPlayer.Dispose();
        _pcmCapture.Dispose();
    }

    void AgbplayStreamHost.IPcmSink.OnPcm(byte[] data, int count)
    {
        BufferedWaveProvider? provider;
        bool notify;
        int session;
        lock (_gate)
        {
            if (!_streaming || _streamBuffer is null)
                return;
            session = _session;
            _pcmCapture.Write(data, 0, count);
            provider = _streamBuffer;
            var stride = _streamFormat?.AverageBytesPerSecond / 10 ?? 19200;
            notify = _pcmCapture.Length - _lastProgressBytes >= stride;
            if (notify)
                _lastProgressBytes = _pcmCapture.Length;
        }

        try { provider?.AddSamples(data, 0, count); }
        catch { /* ignore */ }

        MaybeStartOutput(session);
        if (notify)
            BufferProgress?.Invoke();
    }

    private void RunStream(int session, string romPath, int songId, int maxLoops, CancellationToken token)
    {
        try
        {
            _host.EnsureStarted(romPath);
            if (!_host.WaitUntilReady(TimeSpan.FromSeconds(30)))
                throw new TimeoutException("agbplay-stream server is not ready.");
            if (token.IsCancellationRequested || !IsSession(session))
                return;

            var format = new WaveFormat(_host.SampleRate > 0 ? _host.SampleRate : 48000, 16, 2);
            lock (_gate)
            {
                if (session != _session)
                    return;
                _streamFormat = format;
                _streamBuffer = new BufferedWaveProvider(format)
                {
                    BufferDuration = TimeSpan.FromMinutes(15),
                    DiscardOnBufferOverflow = false,
                };
            }

            var info = _host.BeginPlay(songId, maxLoops, this);
            if (token.IsCancellationRequested || !IsSession(session))
            {
                _host.StopPlay();
                return;
            }

            if (info.SampleRate != format.SampleRate || info.Channels != format.Channels)
            {
                format = new WaveFormat(info.SampleRate, 16, info.Channels);
                lock (_gate)
                {
                    if (session != _session)
                        return;
                    _streamFormat = format;
                    _streamBuffer = new BufferedWaveProvider(format)
                    {
                        BufferDuration = TimeSpan.FromMinutes(15),
                        DiscardOnBufferOverflow = false,
                    };
                    if (_pcmCapture.Length > 0)
                        _streamBuffer.AddSamples(_pcmCapture.ToArray(), 0, (int)_pcmCapture.Length);
                }
            }

            while (!token.IsCancellationRequested && IsSession(session))
            {
                if (_host.WaitForEnd(TimeSpan.FromMilliseconds(40)))
                    break;
                MaybeStartOutput(session);
                UpdatePlayhead(session);
            }

            if (token.IsCancellationRequested || !IsSession(session))
                return;

            MaybeStartOutput(session);

            byte[] wav;
            lock (_gate)
            {
                if (session != _session)
                    return;
                _streamComplete = true;
                wav = ToWav(_pcmCapture.ToArray(), format);
            }

            if (wav.Length > 44)
                CompletedWav?.Invoke(wav);

            while (!token.IsCancellationRequested && IsSession(session))
            {
                PlaybackState state;
                int buffered;
                lock (_gate)
                {
                    if (_streamOut is null)
                        break;
                    state = _streamOut.PlaybackState;
                    buffered = _streamBuffer?.BufferedBytes ?? 0;
                }

                if (state != PlaybackState.Playing && state != PlaybackState.Paused && buffered <= 0)
                    break;
                UpdatePlayhead(session);
                Thread.Sleep(30);
            }
        }
        catch (OperationCanceledException)
        {
            // switched away
        }
        catch (Exception exception) when (exception is IOException or InvalidOperationException or
                                           InvalidDataException or TimeoutException or
                                           ObjectDisposedException)
        {
            if (!token.IsCancellationRequested && IsSession(session))
                Failed?.Invoke(exception.Message);
        }
    }

    private int StopInternal()
    {
        CancellationTokenSource? cts;
        Task? task;
        WaveOutEvent? output;
        int session;
        lock (_gate)
        {
            _session++;
            session = _session;
            cts = _cts;
            task = _streamTask;
            _cts = null;
            _streamTask = null;
            output = _streamOut;
            _streamOut = null;
            _streamBuffer = null;
            _streamStarted = false;
            _streaming = false;
            _streamComplete = false;
            _bytesPlayedEstimate = 0;
            _lastProgressBytes = 0;
        }

        try { _wavPlayer.Stop(); } catch { /* ignore */ }
        try { cts?.Cancel(); } catch { /* ignore */ }
        try { _host.StopPlay(); } catch { /* ignore */ }

        if (output is not null)
        {
            void Kill()
            {
                try { output.Stop(); } catch { /* ignore */ }
                try { output.Dispose(); } catch { /* ignore */ }
            }

            if (Dispatcher.UIThread.CheckAccess())
                Kill();
            else
                Dispatcher.UIThread.Post(Kill);
        }

        if (task is not null)
        {
            _ = task.ContinueWith(static t =>
            {
                try { t.GetAwaiter().GetResult(); } catch { /* ignore */ }
            }, TaskScheduler.Default);
        }

        try { cts?.Dispose(); } catch { /* ignore */ }
        return session;
    }

    private void MaybeStartOutput(int session)
    {
        if (!Dispatcher.UIThread.CheckAccess())
        {
            Dispatcher.UIThread.Post(() => MaybeStartOutput(session));
            return;
        }

        lock (_gate)
        {
            if (session != _session || !_streaming || _streamStarted ||
                _streamBuffer is null || _streamFormat is null)
                return;

            var need = _streamFormat.AverageBytesPerSecond * StartBufferMilliseconds / 1000;
            if (_streamBuffer.BufferedBytes < Math.Min(need, 4096))
                return;

            try
            {
                _streamOut = WavPlayer.CreateOutput();
                _streamOut.Init(_streamBuffer);
                try { _streamOut.Volume = 1f; } catch { /* ignore */ }
                _streamOut.Play();
                _streamStarted = true;
            }
            catch (Exception exception)
            {
                Failed?.Invoke("Audio output failed: " + exception.Message);
                return;
            }
        }

        PlaybackStarted?.Invoke();
    }

    private void UpdatePlayhead(int session)
    {
        lock (_gate)
        {
            if (session != _session || _streamFormat is null || _streamBuffer is null)
                return;
            _bytesPlayedEstimate = Math.Max(0, _pcmCapture.Length - _streamBuffer.BufferedBytes);
        }
    }

    private bool IsSession(int session)
    {
        lock (_gate)
            return session == _session;
    }

    private static byte[] ToWav(byte[] pcm, WaveFormat format)
    {
        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        writer.Write("RIFF"u8.ToArray());
        writer.Write(36 + pcm.Length);
        writer.Write("WAVE"u8.ToArray());
        writer.Write("fmt "u8.ToArray());
        writer.Write(16);
        writer.Write((short)1);
        writer.Write((short)format.Channels);
        writer.Write(format.SampleRate);
        writer.Write(format.AverageBytesPerSecond);
        writer.Write((short)format.BlockAlign);
        writer.Write((short)format.BitsPerSample);
        writer.Write("data"u8.ToArray());
        writer.Write(pcm.Length);
        writer.Write(pcm);
        return output.ToArray();
    }
}
