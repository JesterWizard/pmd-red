namespace RescueEditor.Core;

/// <summary>
/// Mutable working copy of the opened ROM. Apply / undo rebuild it from the scene graph.
/// Never writes the source path; Build ROM remains the export path.
/// </summary>
public sealed class WorkingRom
{
    public WorkingRom(RomImage source)
    {
        Source = source;
        _seed = source;
        // RomImage is immutable; every mutation below builds a new image, so sharing is safe.
        View = source;
    }

    public RomImage Source { get; }
    public RomImage View { get; private set; }
    private RomImage _seed;
    public RuntimeConfigState? RuntimeConfig { get; set; }
    private readonly List<(int Offset, byte[] Data)> _overlays = [];
    private SceneDatabase? _baseline;
    private readonly object _baselineLock = new();

    /// <summary>Immutable parse of the source baserom, taken before project edits.</summary>
    public SceneDatabase? Baseline
    {
        get
        {
            lock (_baselineLock)
                return _baseline ??= BaselineFactory?.Invoke();
        }
        set
        {
            lock (_baselineLock)
                _baseline = value;
        }
    }

    /// <summary>Builds <see cref="Baseline"/> on first read when it was not set explicitly.</summary>
    public Func<SceneDatabase>? BaselineFactory { get; set; }

    public RomBuildReport Sync(
        SceneDatabase database,
        Charmap? charmap = null,
        RuntimeConfigState? runtimeConfig = null)
    {
        var dirty = database.DialogueByOffset.Values
            .Select(dialogue => (Dialogue: dialogue, dialogue.Dirty))
            .ToList();
        var buffer = MutableRom.From(_seed);
        var report = new RomBuildReport();
        RomBuilder.WriteWorkingCopy(
            buffer, database, report, charmap, runtimeConfig ?? RuntimeConfig);
        foreach (var (dialogue, wasDirty) in dirty)
            dialogue.Dirty = wasDirty;
        ApplyOverlays(buffer);
        View = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
        return report;
    }

    /// <summary>Patch the working copy (and re-apply after scene Sync). Does not write the source file.</summary>
    public void Overlay(int offset, ReadOnlySpan<byte> data)
    {
        var copy = data.ToArray();
        _overlays.Add((offset, copy));
        var buffer = MutableRom.From(View);
        buffer.WriteBytes(offset, copy);
        View = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
    }

    public MutableRom BeginMutate() => MutableRom.From(View);

    public void Commit(MutableRom buffer, int offset, int length) =>
        Overlay(offset, buffer.Copy(offset, length));

    public void CommitDirty(MutableRom buffer, IEnumerable<RomSpan> dirty)
    {
        if (buffer.Length != View.Length)
        {
            Adopt(buffer);
            return;
        }

        foreach (var span in dirty)
            Commit(buffer, span.Offset, span.Length);
    }

    /// <summary>Replace the working image after a structural insert/delete. Clears byte overlays.</summary>
    public void Adopt(MutableRom buffer)
    {
        _seed = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
        View = _seed;
        _overlays.Clear();
    }

    private void ApplyOverlays(MutableRom buffer)
    {
        foreach (var (offset, data) in _overlays)
            buffer.WriteBytes(offset, data);
    }
}
