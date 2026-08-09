using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>
/// Background-renders music/SFX into the agbplay WAV cache so later clicks are instant.
/// </summary>
internal sealed class SoundCacheWarmer : IDisposable
{
    private CancellationTokenSource? _cts;
    private Task? _task;
    private readonly ManualResetEventSlim _idle = new(true);
    private bool _disposed;

    public void Pause() => _idle.Reset();

    public void Resume() => _idle.Set();

    public void Start(RomImage rom, AssetCatalog catalog)
    {
        Stop();
        if (!AgbplayRenderer.IsAvailable())
            return;

        var songs = catalog.Assets
            .Where(asset => asset.Kind == AssetKind.SoundSong)
            .Select(asset =>
            {
                if (!asset.Metadata.TryGetValue("songId", out var text) ||
                    !int.TryParse(text, out var songId))
                    return (SongId: -1, MaxLoops: 0);
                var maxLoops = songId >= SoundIndexer.SoundEffectsStartIndex ? 0 : 1;
                return (SongId: songId, MaxLoops: maxLoops);
            })
            .Where(entry => entry.SongId >= 0)
            .Distinct()
            .OrderBy(entry => entry.SongId)
            .ToArray();

        _cts = new CancellationTokenSource();
        var token = _cts.Token;
        _idle.Set();
        _task = Task.Run(() =>
        {
            foreach (var (songId, maxLoops) in songs)
            {
                if (token.IsCancellationRequested)
                    break;
                _idle.Wait(token);
                if (AgbplayRenderer.TryGetCachedWav(rom.Path, songId, maxLoops, out _, out _))
                    continue;
                try
                {
                    AgbplayRenderer.RenderSong(rom.Path, songId, maxLoops);
                }
                catch
                {
                    // Best-effort warm-up; ignore individual failures.
                }
            }
        }, token);
    }

    public void Stop()
    {
        _idle.Set();
        try { _cts?.Cancel(); } catch { /* ignore */ }
        try { _task?.Wait(100); } catch { /* ignore */ }
        _cts?.Dispose();
        _cts = null;
        _task = null;
    }

    public void Dispose()
    {
        if (_disposed)
            return;
        _disposed = true;
        Stop();
        _idle.Dispose();
    }
}
