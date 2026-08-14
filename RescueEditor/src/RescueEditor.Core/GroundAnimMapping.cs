namespace RescueEditor.Core;

/// <summary>
/// Maps ground-script <c>SELECT_ANIMATION</c> ids to AX animation table indices
/// via retail <c>gUnknown_8117F64</c> (<c>ground_lives.c</c>).
/// Low byte of each entry is the AX anim index passed to <c>AxResInit</c>.
/// Bit <c>0x800</c> → loop (<c>AxResInit</c> a6). Bit <c>0x1000</c> → re-init
/// every frame (<c>ground_lives.c</c>), which freezes on the first AX frame.
/// </summary>
public static class GroundAnimMapping
{
    // Copied from src/ground_lives.c gUnknown_8117F64.
    private static readonly short[] Table =
    [
        -1, 0x800, 0x300, 0x300, 0x807, 0x800, 0x805, 0x302,
        0x306, 0x80B, 0x307, 0x1006, 0x1002, 0x1001, 0x1008,
        0x100C, 0x1009, 0x100A, 0x1003, 0x1004, 0x803, 0x804,
        0x100D, 0x100E, 0x100F, 0x1010, 0x1011, 0x1012, 0x1013,
        0x1014, 0x80D, 0x80E, 0x80F, 0x810, 0x811, 0x812, 0x813,
        0x814, 0x80D, 0x100E, 0x100F, 0x1010, 0x1011, 0x812,
        0x1013, 0x1014, 0x1015, 0x1016, 0x1017, 0x818, 0x1019, 0x81A, 0x81B,
    ];

    /// <summary>Raw <c>gUnknown_8117F64</c> entry (or synthetic encoding).</summary>
    public static int Encode(int scriptAnim)
    {
        if (scriptAnim < 0 || scriptAnim >= Table.Length)
            return Math.Max(0, scriptAnim - 1);

        var encoded = Table[scriptAnim];
        return encoded < 0 ? 0 : encoded;
    }

    /// <summary>AX <c>animations[index]</c> for a script animation id.</summary>
    public static int ToAxAnimIndex(int scriptAnim) => Encode(scriptAnim) & 0xFF;

    /// <summary>Retail <c>AxResInit(..., loop=bit0x800)</c>.</summary>
    public static bool Loops(int scriptAnim) => (Encode(scriptAnim) & 0x800) != 0;

    /// <summary>
    /// Retail re-inits the AX anim every frame when bit <c>0x1000</c> is set,
    /// freezing playback on the first frame (e.g. Moltres SELECT_ANIMATION(22)).
    /// </summary>
    public static bool HoldFirstFrame(int scriptAnim) => (Encode(scriptAnim) & 0x1000) != 0;

    /// <summary>Effective tick for AX frame sampling under retail loop/hold rules.</summary>
    public static int EffectiveTick(int scriptAnim, int tickFrames, int sequenceDurationFrames)
    {
        var dur = Math.Max(1, sequenceDurationFrames);
        if (HoldFirstFrame(scriptAnim))
            return 0;
        if (Loops(scriptAnim))
            return Math.Max(0, tickFrames) % dur;
        // Play once, then hold the last frame (axdata flags&0x2000 finished).
        return Math.Clamp(tickFrames, 0, dur - 1);
    }

    public static string PlaybackMode(int scriptAnim)
    {
        if (HoldFirstFrame(scriptAnim))
            return "hold first";
        if (Loops(scriptAnim))
            return "loop";
        return "play once";
    }

    public static AnimMapping Describe(int scriptAnim, NamedIdCatalog? names = null)
    {
        names ??= ScriptNamedDefinitions.BuiltInGroundAnim;
        var constant = names.TryGetName(scriptAnim, out var n) ? n : scriptAnim.ToString();
        return new AnimMapping(
            Kind: AnimScrubKind.Actor,
            ScriptAnimId: scriptAnim,
            ConstantName: constant,
            AxAnimIndex: ToAxAnimIndex(scriptAnim),
            Loops: Loops(scriptAnim),
            HoldFirstFrame: HoldFirstFrame(scriptAnim),
            PlaybackMode: PlaybackMode(scriptAnim),
            SelectAnimationLabel: $"SELECT_ANIMATION({constant})");
    }

    public static IReadOnlyList<AnimMapping> List(NamedIdCatalog? names = null)
    {
        names ??= ScriptNamedDefinitions.BuiltInGroundAnim;
        return names.Entries
            .OrderBy(e => e.Id)
            .Select(e => Describe(e.Id, names))
            .ToArray();
    }
}

public enum AnimScrubKind
{
    Actor,
    Effect,
}

public readonly record struct AnimMapping(
    AnimScrubKind Kind,
    int ScriptAnimId,
    string ConstantName,
    int AxAnimIndex,
    bool Loops,
    bool HoldFirstFrame,
    string PlaybackMode,
    string SelectAnimationLabel);
