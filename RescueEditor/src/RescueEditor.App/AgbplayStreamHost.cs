using System.Collections.Concurrent;
using System.Diagnostics;
using System.Globalization;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>
/// Keeps a long-lived <c>agbplay-stream --server</c> process with the ROM loaded
/// so track changes only pay for song start, not ROM/profile load.
/// </summary>
internal sealed class AgbplayStreamHost : IDisposable
{
    private readonly object _gate = new();
    private readonly object _playGate = new();
    private Process? _process;
    private StreamWriter? _stdin;
    private CancellationTokenSource? _pumpCts;
    private Task? _stderrTask;
    private Task? _stdoutTask;
    private readonly ConcurrentQueue<string> _control = new();
    private readonly AutoResetEvent _controlSignal = new(false);
    private IPcmSink? _pcmSink;
    private string? _romPath;
    private int _sampleRate = 48000;
    private int _playEpoch;
    private bool _ready;
    private bool _disposed;

    public interface IPcmSink
    {
        void OnPcm(byte[] data, int count);
    }

    public bool IsReady
    {
        get { lock (_gate) return _ready; }
    }

    public int SampleRate
    {
        get { lock (_gate) return _sampleRate; }
    }

    public void EnsureStarted(string romPath)
    {
        ArgumentException.ThrowIfNullOrWhiteSpace(romPath);
        lock (_gate)
        {
            if (_disposed)
                throw new ObjectDisposedException(nameof(AgbplayStreamHost));
            if (_ready && string.Equals(_romPath, romPath, StringComparison.Ordinal))
                return;
        }

        StopProcess();
        StartProcess(romPath);
    }

    public bool WaitUntilReady(TimeSpan timeout)
    {
        var deadline = DateTime.UtcNow + timeout;
        while (DateTime.UtcNow < deadline)
        {
            if (IsReady)
                return true;
            if (_controlSignal.WaitOne(50) && IsReady)
                return true;
        }

        return IsReady;
    }

    /// <summary>
    /// Interrupt any current song and start streaming <paramref name="songId"/>.
    /// PCM is delivered to <paramref name="sink"/> until <see cref="WaitForEnd"/>.
    /// </summary>
    public WaveFormatInfo BeginPlay(int songId, int maxLoops, IPcmSink sink)
    {
        lock (_playGate)
        {
            var epoch = Interlocked.Increment(ref _playEpoch);

            lock (_gate)
            {
                if (!_ready || _process is null || _stdin is null)
                    throw new InvalidOperationException("agbplay-stream server is not ready.");

                _pcmSink = null;
                _stdin.WriteLine("STOP");
                _stdin.Flush();
            }

            WaitForControlLine("END", TimeSpan.FromMilliseconds(150));
            ClearControl();

            if (epoch != Volatile.Read(ref _playEpoch))
                throw new OperationCanceledException("Play superseded.");

            lock (_gate)
            {
                if (_stdin is null)
                    throw new InvalidOperationException("agbplay-stream server exited.");
                _pcmSink = sink;
                _stdin.WriteLine(string.Create(CultureInfo.InvariantCulture,
                    $"PLAY {songId} {maxLoops}"));
                _stdin.Flush();
            }

            var apcm = WaitForControlLine("APCM", TimeSpan.FromSeconds(3));
            if (epoch != Volatile.Read(ref _playEpoch))
            {
                lock (_gate)
                {
                    if (ReferenceEquals(_pcmSink, sink))
                        _pcmSink = null;
                }
                throw new OperationCanceledException("Play superseded.");
            }

            if (apcm is null)
                throw new TimeoutException("Timed out waiting for APCM from agbplay-stream.");

            var parts = apcm.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            if (parts.Length < 3 ||
                !int.TryParse(parts[1], NumberStyles.Integer, CultureInfo.InvariantCulture, out var rate) ||
                !int.TryParse(parts[2], NumberStyles.Integer, CultureInfo.InvariantCulture, out var channels))
                throw new InvalidDataException("Invalid APCM header: " + apcm);

            lock (_gate)
                _sampleRate = rate;

            return new WaveFormatInfo(rate, channels);
        }
    }

    public bool WaitForEnd(TimeSpan timeout) =>
        WaitForControlLine("END", timeout) is not null;

    public void StopPlay()
    {
        Interlocked.Increment(ref _playEpoch);
        lock (_gate)
        {
            _pcmSink = null;
            try
            {
                _stdin?.WriteLine("STOP");
                _stdin?.Flush();
            }
            catch { /* ignore */ }
        }

        try { _controlSignal.Set(); } catch { /* ignore */ }
    }

    public void Reset() => StopProcess();

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        StopProcess();
        _controlSignal.Dispose();
    }

    public readonly record struct WaveFormatInfo(int SampleRate, int Channels);

    private void StartProcess(string romPath)
    {
        var launcher = AgbplayRenderer.CreateStreamLauncher()
            ?? throw new InvalidOperationException("agbplay-stream was not found.");

        var start = new ProcessStartInfo
        {
            FileName = launcher.Command,
            Arguments = launcher.BuildServerArgs(launcher.TranslatePath(romPath)),
            RedirectStandardInput = true,
            RedirectStandardOutput = true,
            RedirectStandardError = true,
            UseShellExecute = false,
            CreateNoWindow = true,
        };
        foreach (var (key, value) in launcher.Environment)
            start.Environment[key] = value;

        var process = Process.Start(start)
            ?? throw new InvalidOperationException("Failed to start agbplay-stream --server.");

        process.StandardInput.NewLine = "\n";

        var cts = new CancellationTokenSource();
        lock (_gate)
        {
            _process = process;
            _stdin = process.StandardInput;
            _romPath = romPath;
            _ready = false;
            _pumpCts = cts;
            ClearControl();
            _stderrTask = Task.Run(() => PumpStderr(process, cts.Token));
            _stdoutTask = Task.Run(() => PumpStdout(process, cts.Token));
        }

        var ready = WaitForControlLine("READY", TimeSpan.FromSeconds(30));
        if (ready is null)
        {
            StopProcess();
            throw new TimeoutException("agbplay-stream server failed to become READY.");
        }

        var parts = ready.Split(' ', StringSplitOptions.RemoveEmptyEntries);
        if (parts.Length >= 2 &&
            int.TryParse(parts[1], NumberStyles.Integer, CultureInfo.InvariantCulture, out var rate))
            _sampleRate = rate;

        lock (_gate)
            _ready = true;
    }

    private void StopProcess()
    {
        Process? process;
        StreamWriter? stdin;
        CancellationTokenSource? cts;
        Task? stderrTask;
        Task? stdoutTask;
        lock (_gate)
        {
            process = _process;
            stdin = _stdin;
            cts = _pumpCts;
            stderrTask = _stderrTask;
            stdoutTask = _stdoutTask;
            _process = null;
            _stdin = null;
            _pumpCts = null;
            _stderrTask = null;
            _stdoutTask = null;
            _pcmSink = null;
            _ready = false;
            _romPath = null;
        }

        try
        {
            stdin?.WriteLine("QUIT");
            stdin?.Flush();
        }
        catch { /* ignore */ }

        try { cts?.Cancel(); } catch { /* ignore */ }
        try
        {
            if (process is { HasExited: false })
                process.Kill(entireProcessTree: true);
        }
        catch { /* ignore */ }

        try { stderrTask?.Wait(500); } catch { /* ignore */ }
        try { stdoutTask?.Wait(500); } catch { /* ignore */ }
        try { process?.Dispose(); } catch { /* ignore */ }
        try { cts?.Dispose(); } catch { /* ignore */ }
        ClearControl();
    }

    private void PumpStderr(Process process, CancellationToken token)
    {
        try
        {
            while (!token.IsCancellationRequested)
            {
                var line = process.StandardError.ReadLine();
                if (line is null)
                    break;
                _control.Enqueue(line);
                _controlSignal.Set();
            }
        }
        catch (Exception exception) when (exception is IOException or ObjectDisposedException)
        {
            // process ended
        }
    }

    private void PumpStdout(Process process, CancellationToken token)
    {
        var buffer = new byte[8192];
        var stdout = process.StandardOutput.BaseStream;
        try
        {
            while (!token.IsCancellationRequested)
            {
                int read;
                try
                {
                    read = stdout.Read(buffer, 0, buffer.Length);
                }
                catch (Exception exception) when (exception is IOException or ObjectDisposedException)
                {
                    break;
                }

                if (read <= 0)
                    break;

                // Copy bytes — the read buffer is reused on the next loop.
                var packet = new byte[read];
                Buffer.BlockCopy(buffer, 0, packet, 0, read);

                IPcmSink? sink;
                lock (_gate)
                    sink = _pcmSink;
                sink?.OnPcm(packet, read);
            }
        }
        catch (Exception exception) when (exception is IOException or ObjectDisposedException)
        {
            // process ended
        }
    }

    private string? WaitForControlLine(string prefix, TimeSpan timeout)
    {
        var deadline = DateTime.UtcNow + timeout;
        while (DateTime.UtcNow < deadline)
        {
            while (_control.TryDequeue(out var line))
            {
                if (line.StartsWith(prefix, StringComparison.Ordinal))
                    return line;
                if (line.StartsWith("ERR", StringComparison.Ordinal))
                    throw new InvalidDataException(line);
                // Discard unrelated chatter (stale END from STOP, etc.).
            }

            var remaining = deadline - DateTime.UtcNow;
            if (remaining <= TimeSpan.Zero)
                break;
            _controlSignal.WaitOne(remaining > TimeSpan.FromMilliseconds(100)
                ? TimeSpan.FromMilliseconds(100)
                : remaining);
        }

        while (_control.TryDequeue(out var late))
        {
            if (late.StartsWith(prefix, StringComparison.Ordinal))
                return late;
        }

        return null;
    }

    private void ClearControl()
    {
        while (_control.TryDequeue(out _)) { }
    }
}
