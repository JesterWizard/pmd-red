namespace RescueEditor.Core;

/// <summary>
/// Maps ground-script <c>SELECT_ANIMATION</c> ids to AX animation table indices
/// via retail <c>gUnknown_8117F64</c> (<c>ground_lives.c</c>).
/// Low byte of each entry is the AX anim index passed to <c>AxResInit</c>.
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

    /// <summary>AX <c>animations[index]</c> for a script animation id.</summary>
    public static int ToAxAnimIndex(int scriptAnim)
    {
        if (scriptAnim < 0 || scriptAnim >= Table.Length)
            return Math.Max(0, scriptAnim - 1);

        var encoded = Table[scriptAnim];
        if (encoded < 0)
            return 0;
        return encoded & 0xFF;
    }
}
