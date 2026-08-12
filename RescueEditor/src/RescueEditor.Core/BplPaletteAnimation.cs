using System.Buffers.Binary;

namespace RescueEditor.Core;

/// <summary>
/// Retail BPL palette animation (ground_bg <c>hasPalAnimations</c>).
/// Specs are <c>{ durationPerFrame, numFrames }</c>; each frame is 15 RGBX colors
/// replacing palette indices 1–15.
/// </summary>
public sealed class BplPaletteAnimation
{
    private readonly RgbaColor[][] _staticPalettes;
    private readonly short[] _durations;
    private readonly short[] _numFrames;
    private readonly RgbaColor[][][] _frames; // [palette][frame][15 colors for indices 1..15]

    private BplPaletteAnimation(
        RgbaColor[][] staticPalettes,
        short[] durations,
        short[] numFrames,
        RgbaColor[][][] frames)
    {
        _staticPalettes = staticPalettes;
        _durations = durations;
        _numFrames = numFrames;
        _frames = frames;
    }

    public int PaletteCount => _staticPalettes.Length;
    public bool HasAnimations => _numFrames.Any(n => n > 0);

    public int NumFrames(int paletteIndex) =>
        paletteIndex >= 0 && paletteIndex < _numFrames.Length ? _numFrames[paletteIndex] : 0;

    public int DurationPerFrame(int paletteIndex) =>
        paletteIndex >= 0 && paletteIndex < _durations.Length ? _durations[paletteIndex] : 0;

    /// <summary>
    /// Stable key for cache invalidation: packs each animated palette's current frame index.
    /// </summary>
    public int CacheKey(int animTick)
    {
        unchecked
        {
            var key = 0;
            for (var i = 0; i < _numFrames.Length; i++)
            {
                var nf = _numFrames[i];
                if (nf <= 0)
                    continue;
                var dur = Math.Max(1, (int)_durations[i]);
                var frame = (animTick / dur) % nf;
                key = (key * 31) + frame + 1;
            }

            return key;
        }
    }

    public IReadOnlyList<RgbaColor[]> ResolvePalettes(int animTick)
    {
        var result = new RgbaColor[_staticPalettes.Length][];
        for (var i = 0; i < _staticPalettes.Length; i++)
        {
            var palette = (RgbaColor[])_staticPalettes[i].Clone();
            var nf = _numFrames[i];
            if (nf > 0 && _frames[i].Length > 0)
            {
                var dur = Math.Max(1, (int)_durations[i]);
                var frame = (animTick / dur) % nf;
                frame = Math.Min(frame, _frames[i].Length - 1);
                var colors = _frames[i][frame];
                for (var c = 0; c < 15 && c < colors.Length; c++)
                    palette[c + 1] = colors[c];
            }

            result[i] = palette;
        }

        return result;
    }

    public static BplPaletteAnimation? TryParse(ReadOnlySpan<byte> bpl)
    {
        if (bpl.Length < 4)
            return null;

        var numPalettes = BinaryPrimitives.ReadInt16LittleEndian(bpl);
        var hasAnim = BinaryPrimitives.ReadInt16LittleEndian(bpl[2..]);
        if (numPalettes <= 0 || numPalettes > 16)
            return null;
        // 0x8B = 8bpp exact palette (not frame-animated).
        if (hasAnim == 0x8B)
            return null;

        var offset = 4;
        var staticPalettes = new RgbaColor[numPalettes][];
        for (var p = 0; p < numPalettes; p++)
        {
            if (offset + 60 > bpl.Length)
                return null;
            var colors = new RgbaColor[16];
            colors[0] = new RgbaColor(0, 0, 0, 0);
            for (var c = 1; c < 16; c++, offset += 4)
                colors[c] = new RgbaColor(bpl[offset], bpl[offset + 1], bpl[offset + 2], 255);
            staticPalettes[p] = colors;
        }

        if (hasAnim == 0)
        {
            return new BplPaletteAnimation(
                staticPalettes,
                new short[numPalettes],
                new short[numPalettes],
                Array.Empty<RgbaColor[][]>());
        }

        if (offset + numPalettes * 4 > bpl.Length)
            return null;

        var durations = new short[numPalettes];
        var numFrames = new short[numPalettes];
        for (var p = 0; p < numPalettes; p++, offset += 4)
        {
            durations[p] = BinaryPrimitives.ReadInt16LittleEndian(bpl[offset..]);
            numFrames[p] = BinaryPrimitives.ReadInt16LittleEndian(bpl[(offset + 2)..]);
        }

        var frames = new RgbaColor[numPalettes][][];
        for (var p = 0; p < numPalettes; p++)
        {
            var nf = Math.Max(0, (int)numFrames[p]);
            frames[p] = new RgbaColor[nf][];
            for (var f = 0; f < nf; f++)
            {
                if (offset + 60 > bpl.Length)
                    return null;
                var colors = new RgbaColor[15];
                for (var c = 0; c < 15; c++, offset += 4)
                    colors[c] = new RgbaColor(bpl[offset], bpl[offset + 1], bpl[offset + 2], 255);
                frames[p][f] = colors;
            }
        }

        return new BplPaletteAnimation(staticPalettes, durations, numFrames, frames);
    }
}
