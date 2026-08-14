namespace RescueEditor.Core;

/// <summary>
/// Timeline for AX poses / ground-effect clips. Scrubbing walks source frames;
/// <see cref="ScenePlayTick"/> applies retail hold/loop rules used by Scene Play.
/// </summary>
public sealed class AnimScrubber
{
    private AnimScrubber(AnimMapping mapping, AxAnimSequence sequence, int direction)
    {
        Mapping = mapping;
        Sequence = sequence;
        Direction = direction & 7;
    }

    public AnimMapping Mapping { get; }
    public AxAnimSequence Sequence { get; }
    public int Direction { get; }
    public int Tick { get; private set; }

    public int MaxTick => Math.Max(0, Sequence.TotalDurationFrames - 1);
    public int FrameIndex => Sequence.FrameIndexAtTick(Tick);
    public AxAnimSequence.Frame Current => Sequence.FrameAtTick(Tick);
    public int ScenePlayTick => Mapping.Kind == AnimScrubKind.Actor
        ? GroundAnimMapping.EffectiveTick(Mapping.ScriptAnimId, Tick, Sequence.TotalDurationFrames)
        : Mapping.Loops
            ? Tick % Math.Max(1, Sequence.TotalDurationFrames)
            : Math.Clamp(Tick, 0, MaxTick);
    public AxAnimSequence.Frame ScenePlayFrame => Sequence.FrameAtTick(ScenePlayTick);

    public void SetTick(int tick) => Tick = Math.Clamp(tick, 0, MaxTick);

    public void SetFrameIndex(int index) => SetTick(Sequence.TickAtFrameIndex(index));

    public static AnimScrubber ForActor(int scriptAnim, AxAnimSequence sequence, int direction, NamedIdCatalog? names = null) =>
        new(GroundAnimMapping.Describe(scriptAnim, names), sequence, direction);

    public static AnimScrubber ForEffect(int effectId, EffectAnimInfo info, NamedIdCatalog? names = null)
    {
        EmotionEffectAtlas.TryGetSharedAnim(effectId, out var animId, out var loop);
        var constant = names?.TryGetName(effectId, out var n) == true ? n! : effectId.ToString();
        var mapping = new AnimMapping(
            AnimScrubKind.Effect,
            effectId,
            constant,
            animId,
            loop,
            HoldFirstFrame: false,
            PlaybackMode: loop ? "loop" : "play once",
            SelectAnimationLabel: $"EMOTION_EFFECT({constant})");
        return new AnimScrubber(mapping, info.Sequence, direction: 0);
    }

    public static AnimScrubber? TryLoadActor(
        string repositoryRoot,
        string folder,
        int scriptAnim,
        int direction,
        NamedIdCatalog? names = null)
    {
        var ax = GroundAnimMapping.ToAxAnimIndex(scriptAnim);
        var seq = AxAnimSequence.TryLoad(repositoryRoot, folder, ax, direction);
        return seq is null ? null : ForActor(scriptAnim, seq, direction, names);
    }
}

public readonly record struct EffectAnimInfo(int EffectId, int SharedAnimId, bool Loop, AxAnimSequence Sequence)
{
    public IReadOnlyList<AxAnimSequence.Frame> Frames => Sequence.Frames;
    public int TotalDuration => Sequence.TotalDurationFrames;
}
