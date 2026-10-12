namespace RescueEditor.Core;

/// <summary>One user byte edit: the bytes at <see cref="Offset"/> before and after it.</summary>
public sealed record RomByteChange(int Offset, byte[] Before, byte[] After);

public sealed class RomBytesChangedEventArgs(IReadOnlyList<RomByteChange> changes) : EventArgs
{
    public IReadOnlyList<RomByteChange> Changes { get; } = changes;
}

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
    private readonly List<(int Offset, byte[] Data)> _modOverlays = [];

    /// <summary>True after <see cref="Adopt"/> resized or rebuilt the image; those edits cannot be captured as patches.</summary>
    public bool HasStructuralEdits { get; private set; }

    /// <summary>Bumped by every resizing <see cref="Adopt"/>; offsets recorded before a bump no longer match the image.</summary>
    public int StructuralVersion { get; private set; }

    /// <summary>Counts user byte edits (<see cref="Overlay"/>, including <see cref="Commit"/>) and <see cref="Adopt"/>. Mod overlays and <see cref="Sync"/> do not count.</summary>
    public int UserEditVersion { get; private set; }

    /// <summary>Raised after each counted user edit, on the thread that made it.</summary>
    public event EventHandler? UserEdited;

    /// <summary>Raised for user byte edits that can be undone (Overlay/Commit and same-length Adopt). Not raised for mod overlays, Sync, resizing Adopt, or RestoreBytes.</summary>
    public event EventHandler<RomBytesChangedEventArgs>? UserBytesChanged;

    /// <summary>User patches captured just before the first resizing <see cref="Adopt"/>, in baserom layout.</summary>
    public List<ProjectRomPatch> PreResizePatches { get; private set; } = [];

    /// <summary>The view right after mods were applied (see <see cref="MarkModBaseline"/>); null when no mods are loaded.</summary>
    public RomImage? ModBaseline { get; private set; }

    public void MarkModBaseline() => ModBaseline = View;

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

    /// <summary>
    /// Patch the working copy (and re-apply after scene Sync). Does not write the source file.
    /// <paramref name="recordHistory"/> false applies the bytes without raising <see cref="UserBytesChanged"/>.
    /// </summary>
    public void Overlay(int offset, ReadOnlySpan<byte> data, bool recordHistory = true)
    {
        var copy = data.ToArray();
        var before = View.IsRangeValid(offset, data.Length) ? View.Copy(offset, data.Length) : null;
        _overlays.Add((offset, copy));
        var buffer = MutableRom.From(View);
        buffer.WriteBytes(offset, copy);
        View = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
        UserEditVersion++;
        UserEdited?.Invoke(this, EventArgs.Empty);

        if (recordHistory && before is not null && !before.AsSpan().SequenceEqual(copy))
            UserBytesChanged?.Invoke(this, new RomBytesChangedEventArgs([new RomByteChange(offset, before, copy)]));
    }

    /// <summary>Patch the working copy on behalf of a mod package. Mod bytes apply before user overlays.</summary>
    public void OverlayMod(int offset, ReadOnlySpan<byte> data)
    {
        var copy = data.ToArray();
        _modOverlays.Add((offset, copy));
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

    /// <summary>
    /// Replace the working image after an edit. A same-length buffer is recorded as byte overlays (runs that differ
    /// from the current view), so mod-layer bytes and the user's own patches stay capturable. A length-changing
    /// buffer is structural: it becomes the new seed and clears byte overlays.
    /// </summary>
    public void Adopt(MutableRom buffer)
    {
        if (buffer.Length == View.Length)
        {
            var edited = buffer.Bytes;
            var current = View.Bytes;
            var changes = new List<RomByteChange>();
            var i = 0;
            while (i < edited.Length)
            {
                if (edited[i] == current[i])
                {
                    i++;
                    continue;
                }

                var start = i;
                while (i < edited.Length && edited[i] != current[i])
                    i++;
                var after = edited.Slice(start, i - start).ToArray();
                _overlays.Add((start, after));
                changes.Add(new RomByteChange(start, current.Slice(start, i - start).ToArray(), after));
            }

            View = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
            UserEditVersion++;
            UserEdited?.Invoke(this, EventArgs.Empty);
            if (changes.Count > 0)
                UserBytesChanged?.Invoke(this, new RomBytesChangedEventArgs(changes));
            return;
        }

        // Only the first resize snapshots: later seeds are no longer in baserom layout.
        if (!HasStructuralEdits)
            PreResizePatches = CaptureUserPatches();
        _seed = RomImage.FromBytes(Source.Path, buffer.Copy(0, buffer.Length));
        View = _seed;
        _overlays.Clear();
        _modOverlays.Clear();
        HasStructuralEdits = true;
        StructuralVersion++;
        UserEditVersion++;
        UserEdited?.Invoke(this, EventArgs.Empty);
    }

    /// <summary>Writes back recorded edits without reporting them (used by undo/redo). <paramref name="useAfter"/> false restores the before bytes (undo), true the after bytes (redo).</summary>
    public void RestoreBytes(IReadOnlyList<RomByteChange> changes, bool useAfter)
    {
        ArgumentNullException.ThrowIfNull(changes);

        if (useAfter)
        {
            foreach (var change in changes)
                Overlay(change.Offset, change.After, recordHistory: false);
            return;
        }

        for (var i = changes.Count - 1; i >= 0; i--)
            Overlay(changes[i].Offset, changes[i].Before, recordHistory: false);
    }

    /// <summary>
    /// The user's own overlay bytes (from <see cref="Overlay"/>/<see cref="Commit"/>), coalesced into runs.
    /// Only bytes that differ from the seed plus mod overlays are kept, so a disabled mod's bytes never leak in.
    /// </summary>
    public List<ProjectRomPatch> CaptureUserPatches()
    {
        var reference = MutableRom.From(_seed);
        foreach (var (offset, data) in _modOverlays)
            reference.WriteBytes(offset, data);

        var final = new SortedDictionary<int, byte>();
        foreach (var (offset, data) in _overlays)
            for (var i = 0; i < data.Length; i++)
                final[offset + i] = data[i];

        var patches = new List<ProjectRomPatch>();
        List<byte>? run = null;
        var runStart = 0;
        var previous = -2;
        foreach (var (position, value) in final)
        {
            if (position >= reference.Length || value == reference.ReadByte(position))
                continue;

            if (run is null || position != previous + 1)
            {
                if (run is not null)
                    patches.Add(new ProjectRomPatch { Offset = runStart, Data = run.ToArray() });
                run = new List<byte>();
                runStart = position;
            }

            run.Add(value);
            previous = position;
        }

        if (run is not null)
            patches.Add(new ProjectRomPatch { Offset = runStart, Data = run.ToArray() });
        return patches;
    }

    private void ApplyOverlays(MutableRom buffer)
    {
        foreach (var (offset, data) in _modOverlays)
            buffer.WriteBytes(offset, data);
        foreach (var (offset, data) in _overlays)
            buffer.WriteBytes(offset, data);
    }
}
