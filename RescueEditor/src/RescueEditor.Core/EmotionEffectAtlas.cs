namespace RescueEditor.Core;

public enum EmotionEffectSource
{
    Missing,
    Rom,
    PngStrip,
}

/// <summary>
/// Floating emotion overlays (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY).
/// Retail scripts pass effect-table indices (88/89/…) into <c>gUnknown_80B9CC4</c>,
/// which all resolve to shared bank <c>efob001</c> with different <c>animId</c> slots —
/// not <c>efob088</c> etc. Never substitutes hand-drawn placeholders.
/// </summary>
public sealed class EmotionEffectAtlas
{
    public const int NoticeId = 88;
    public const int QuestionId = 89;
    public const int ShockId = 91;
    public const int SweatId = 92;
    public const int SmileId = 93;
    public const int AngryId = 94;

    /// <summary>Shared overhead-emotion SIRO (<c>gUnknown_80B9CC4[].effectId</c> for type-2).</summary>
    public const string SharedEmotionBank = "efob001";

    private readonly string? _repositoryRoot;
    private readonly RomImage? _rom;
    private readonly Dictionary<int, EfoClip?> _clips = new();
    private readonly Dictionary<int, EmotionEffectSource> _sources = new();

    public EmotionEffectAtlas(string? repositoryRoot, RomImage? rom = null)
    {
        _repositoryRoot = ResolveEffectsRoot(repositoryRoot);
        _rom = rom;
    }

    public void ClearCache()
    {
        _clips.Clear();
        _sources.Clear();
    }

    public void PrefetchCommon()
    {
        foreach (var id in new[] { NoticeId, QuestionId, ShockId, SweatId, SmileId, AngryId })
            _ = TryGetClip(id);
    }

    public EmotionEffectSource TryGetSource(int effectId)
    {
        _ = TryGetClip(effectId);
        return _sources.TryGetValue(effectId, out var src) ? src : EmotionEffectSource.Missing;
    }

    /// <summary>Static first frame (compat).</summary>
    public RgbaImage? TryGet(int effectId) => TryGetFrame(effectId, 0)?.Image;

    /// <summary>Animated frame for <paramref name="tick"/> (game ticks since attach).</summary>
    public EmotionFrame? TryGetFrame(int effectId, int tick)
    {
        if (effectId <= 0)
            return null;
        var clip = TryGetClip(effectId);
        if (clip is null || clip.Frames.Count == 0)
            return null;

        var t = Math.Max(0, tick);
        if (clip.Loop)
            t %= clip.LoopLength;
        else if (t >= clip.LoopLength)
            t = clip.LoopLength - 1;

        var acc = 0;
        foreach (var frame in clip.Frames)
        {
            acc += frame.Duration;
            if (t < acc)
                return frame.Visual;
        }
        return clip.Frames[^1].Visual;
    }

    /// <summary>Duration / pose timeline for the inspector scrubber.</summary>
    public EffectAnimInfo? TryGetSequence(int effectId)
    {
        var clip = TryGetClip(effectId);
        if (clip is null || clip.Frames.Count == 0)
            return null;
        if (!TryGetSharedAnim(effectId, out var animId, out var loop))
            return null;

        var frames = new AxAnimSequence.Frame[clip.Frames.Count];
        for (var i = 0; i < clip.Frames.Count; i++)
        {
            var step = clip.Frames[i];
            frames[i] = new AxAnimSequence.Frame(step.Duration, step.PoseId, 0, 0);
        }

        return new EffectAnimInfo(effectId, animId, loop, AxAnimSequence.FromFrames(frames));
    }

    /// <summary>
    /// Map script effect id → anim slot in <see cref="SharedEmotionBank"/>
    /// (from <c>gUnknown_80B9CC4[id].animId</c> / <c>.loop</c>).
    /// </summary>
    public static bool TryGetSharedAnim(int scriptEffectId, out int animId, out bool loop)
    {
        switch (scriptEffectId)
        {
            case NoticeId: animId = 0; loop = false; return true;
            case QuestionId: animId = 1; loop = false; return true;
            case ShockId: animId = 3; loop = false; return true;
            case SweatId: animId = 4; loop = false; return true;
            case SmileId: animId = 5; loop = true; return true;
            case AngryId: animId = 6; loop = true; return true;
            default:
                animId = 0;
                loop = false;
                return false;
        }
    }

    /// <summary>
    /// OBJ palette bank from <c>gUnknown_80B9CC4[id].unk8</c> — indexes into the
    /// shared overworld <c>palet</c> / <c>graphics/ax/pal/N.pmdpal</c> table loaded by
    /// <c>sub_80A6460</c> (not the cyan chroma stored in efob001 itself).
    /// </summary>
    public static int SharedPaletteBank(int scriptEffectId) => scriptEffectId switch
    {
        NoticeId or QuestionId or SweatId => 0,
        ShockId => 3,
        SmileId or AngryId => 11,
        _ => 0,
    };

    private EfoClip? TryGetClip(int effectId)
    {
        if (_clips.TryGetValue(effectId, out var cached))
            return cached;

        EfoClip? clip = null;
        var source = EmotionEffectSource.Missing;
        try
        {
            clip = TryLoadFromRom(effectId);
            if (clip is not null)
                source = EmotionEffectSource.Rom;
        }
        catch
        {
            clip = null;
            source = EmotionEffectSource.Missing;
        }

        _clips[effectId] = clip;
        _sources[effectId] = source;
        return clip;
    }

    private static string? ResolveEffectsRoot(string? hint)
    {
        foreach (var start in new[] { hint, Environment.CurrentDirectory, AppContext.BaseDirectory })
        {
            if (string.IsNullOrWhiteSpace(start))
                continue;
            try
            {
                var current = new DirectoryInfo(Path.GetFullPath(start));
                while (current is not null)
                {
                    var effects = Path.Combine(current.FullName, "data", "effects");
                    if (Directory.Exists(effects) &&
                        File.Exists(Path.Combine(effects, "efob001.png")))
                        return current.FullName;
                    if (Directory.Exists(Path.Combine(current.FullName, "graphics", "ax", "mon")))
                        return current.FullName;
                    current = current.Parent;
                }
            }
            catch
            {
                // try next
            }
        }
        return hint;
    }

    private EfoClip? TryLoadFromRom(int effectId)
    {
        if (_rom is null)
            return null;
        if (!TryGetSharedAnim(effectId, out var animId, out var loop))
            return null;

        var archiveOffset = ResolveEffectSiroOffset(_rom, SharedEmotionBank);
        if (archiveOffset < 0)
            return null;

        var magic = System.Text.Encoding.ASCII.GetString(_rom.Slice(archiveOffset, 4));
        if (magic is not "SIRO" and not "SIR0")
            return null;

        var dataOffset = _rom.ReadPointerOffset(archiveOffset + 4);
        if (dataOffset < 0 || !_rom.IsRangeValid(dataOffset, 0x20))
            return null;

        var posesPtr = _rom.ReadUInt32(dataOffset);
        var animsPtr = _rom.ReadUInt32(dataOffset + 4);
        var animCount = _rom.ReadInt32(dataOffset + 8);
        var charPtr = _rom.ReadUInt32(dataOffset + 0x14);
        var palPtr = _rom.ReadUInt32(dataOffset + 0x18);
        var charCount = _rom.ReadInt32(dataOffset + 0x1C);
        if (posesPtr == 0 || animsPtr == 0 || charPtr == 0 || palPtr == 0 || charCount <= 0 || animCount <= 0)
            return null;
        if (animId < 0 || animId >= animCount)
            return null;

        var charOff = _rom.PointerToOffset(charPtr);
        var palOff = _rom.PointerToOffset(palPtr);
        var posesOff = _rom.PointerToOffset(posesPtr);
        var animsOff = _rom.PointerToOffset(animsPtr);
        if (charOff < 0 || palOff < 0 || posesOff < 0 || animsOff < 0)
            return null;

        var tileBytes = checked(charCount * 32);
        if (!_rom.IsRangeValid(charOff, tileBytes) || !_rom.IsRangeValid(palOff, 64))
            return null;

        var tiles = _rom.Slice(charOff, tileBytes);
        // efob001.pmdpal is a cyan mask; ground mode paints these with overworld palet banks.
        var palette = ResolveEmotionPalette(effectId, palOff);

        // animations[animId] → 8 dirs → use dir 0 sequence
        if (!_rom.IsRangeValid(animsOff + animId * 4, 4))
            return null;
        var animTable = _rom.ReadPointerOffset(animsOff + animId * 4);
        if (animTable < 0)
            return null;
        var seqOff = _rom.ReadPointerOffset(animTable);
        if (seqOff < 0)
            return null;

        var steps = new List<(int Duration, int PoseId)>();
        for (var i = 0; i < 128; i++)
        {
            if (!_rom.IsRangeValid(seqOff + i * 12, 12))
                break;
            var frames = _rom.ReadByte(seqOff + i * 12);
            var poseId = _rom.ReadInt16(seqOff + i * 12 + 2);
            if (frames == 0)
                break;
            steps.Add((frames, poseId));
        }
        if (steps.Count == 0)
            return null;

        var maxPose = steps.Max(s => s.PoseId);
        var poseImages = new Dictionary<int, EmotionFrame>();
        for (var poseId = 0; poseId <= maxPose; poseId++)
        {
            if (!_rom.IsRangeValid(posesOff + poseId * 4, 4))
                break;
            var poseListOff = _rom.ReadPointerOffset(posesOff + poseId * 4);
            if (poseListOff < 0)
                continue;
            var composed = ComposePose(_rom, poseListOff, tiles, palette);
            if (composed is not null)
                poseImages[poseId] = composed.Value;
        }

        var framesOut = new List<EfoAnimFrame>();
        var loopLen = 0;
        foreach (var (duration, poseId) in steps)
        {
            if (!poseImages.TryGetValue(poseId, out var visual))
                continue;
            framesOut.Add(new EfoAnimFrame(duration, poseId, visual));
            loopLen += duration;
        }
        if (framesOut.Count == 0 || loopLen <= 0)
            return null;

        return new EfoClip(framesOut, loopLen, loop);
    }

    /// <summary>
    /// Locate <c>efobNNN</c> SIRO in the opened ROM via its File{name,data} entry.
    /// Built ROMs relocate effects — never rely on baserom RetailTables addresses alone.
    /// </summary>
    public static int ResolveEffectSiroOffset(RomImage rom, string name)
    {
        foreach (var nameOff in rom.FindAscii(name, includeTerminator: true, limit: 16))
        {
            var namePtr = RomImage.RomVirtualAddress + (uint)nameOff;
            var needle = BitConverter.GetBytes(namePtr);
            foreach (var hit in rom.FindAll(needle, limit: 32))
            {
                if (!rom.IsRangeValid(hit + 4, 4))
                    continue;
                var dataOff = rom.ReadPointerOffset(hit + 4);
                if (dataOff < 0 || !rom.IsRangeValid(dataOff, 8))
                    continue;
                var magic = System.Text.Encoding.ASCII.GetString(rom.Slice(dataOff, 4));
                if (magic is "SIRO" or "SIR0")
                    return dataOff;
            }
        }

        // Matching baserom / unmoved builds: retail VA table.
        foreach (var e in RetailTables.Effects)
        {
            if (!e.Name.Equals(name, StringComparison.OrdinalIgnoreCase))
                continue;
            var archiveOffset = rom.PointerToOffset(e.VirtualAddress);
            if (archiveOffset < 0 || !rom.IsRangeValid(archiveOffset, 8))
                continue;
            var magic = System.Text.Encoding.ASCII.GetString(rom.Slice(archiveOffset, 4));
            if (magic is "SIRO" or "SIR0")
                return archiveOffset;
        }

        return -1;
    }

    /// <summary>
    /// Prefer <c>graphics/ax/pal/{unk8}.pmdpal</c> (same table as ground <c>palet</c>).
    /// Fall back to ROM <c>palet</c> blob, then to the cyan efob mask if nothing else is available.
    /// Index 0 is always transparent (GBA OBJ rule).
    /// </summary>
    private RgbaColor[] ResolveEmotionPalette(int effectId, int efobPalOff)
    {
        var bank = SharedPaletteBank(effectId);
        if (_repositoryRoot is not null)
        {
            var path = Path.Combine(_repositoryRoot, "graphics", "ax", "pal", $"{bank}.pmdpal");
            if (File.Exists(path))
                return ReadPmdPalFile(path);
        }

        if (_rom is not null)
        {
            var paletOff = ResolvePaletOffset(_rom);
            if (paletOff >= 0)
            {
                var off = paletOff + bank * 64;
                if (_rom.IsRangeValid(off, 64))
                    return GraphicsRenderers.ReadRgbPalette(_rom, off, 64, transparentFirst: true);
            }
        }

        return GraphicsRenderers.ReadRgbPalette(_rom!, efobPalOff, 64, transparentFirst: true);
    }

    private static RgbaColor[] ReadPmdPalFile(string path)
    {
        var bytes = File.ReadAllBytes(path);
        var count = Math.Min(16, bytes.Length / 4);
        var colors = new RgbaColor[16];
        for (var i = 0; i < 16; i++)
        {
            if (i >= count || i == 0)
            {
                colors[i] = new RgbaColor(0, 0, 0, 0);
                continue;
            }

            var o = i * 4;
            colors[i] = new RgbaColor(bytes[o], bytes[o + 1], bytes[o + 2], 255);
        }

        return colors;
    }

    /// <summary>Locate the raw <c>palet</c> RGB blob in the monster file table.</summary>
    public static int ResolvePaletOffset(RomImage rom)
    {
        foreach (var nameOff in rom.FindAscii("palet", includeTerminator: true, limit: 16))
        {
            var namePtr = RomImage.RomVirtualAddress + (uint)nameOff;
            var needle = BitConverter.GetBytes(namePtr);
            foreach (var hit in rom.FindAll(needle, limit: 32))
            {
                if (!rom.IsRangeValid(hit + 4, 4))
                    continue;
                var dataOff = rom.ReadPointerOffset(hit + 4);
                // 14 banks × 64 bytes; first color of bank 0 is teal #007F97.
                if (dataOff < 0 || !rom.IsRangeValid(dataOff, 14 * 64))
                    continue;
                if (rom.ReadByte(dataOff) == 0x00 &&
                    rom.ReadByte(dataOff + 1) == 0x7F &&
                    rom.ReadByte(dataOff + 2) == 0x97)
                    return dataOff;
            }
        }

        return -1;
    }

    private static EmotionFrame? ComposePose(
        RomImage rom,
        int poseListOffset,
        ReadOnlySpan<byte> tiles,
        RgbaColor[] palette)
    {
        var parts = new List<(int X, int Y, int W, int H, int Tile, bool FlipH, bool FlipV)>();
        for (var i = 0; i < 32; i++)
        {
            var off = poseListOffset + i * 10;
            if (!rom.IsRangeValid(off, 10))
                break;
            var sprite = rom.ReadInt16(off);
            var unk2 = rom.ReadUInt16(off + 2);
            var flags1 = rom.ReadUInt16(off + 4);
            var flags2 = rom.ReadUInt16(off + 6);
            var flags3 = rom.ReadUInt16(off + 8);
            // Retail terminator: sprite == -1 && unk2 == 0xFFFF (see sub_800533C).
            if ((ushort)sprite == 0xFFFF && unk2 == 0xFFFF)
                break;

            var y = unchecked((sbyte)(flags1 & 0xFF));
            var shape = (flags1 >> 14) & 3;
            var size = (flags2 >> 14) & 3;
            // PMD AX pose X is stored in the low 8 bits as signed (not full 9-bit OAM).
            // Using 9-bit sign-extension scatters smile/question particles across the map.
            var x = unchecked((sbyte)(byte)(flags2 & 0xFF));

            var (w, h) = OamDims(shape, size);
            var tile = flags3 & 0x3FF;
            var flipH = ((flags2 >> 12) & 1) != 0;
            var flipV = ((flags2 >> 13) & 1) != 0;
            parts.Add((x, y, w, h, tile, flipH, flipV));
        }

        if (parts.Count == 0)
            return null;

        var minX = parts.Min(p => p.X);
        var minY = parts.Min(p => p.Y);
        var maxX = parts.Max(p => p.X + p.W);
        var maxY = parts.Max(p => p.Y + p.H);
        var width = Math.Max(1, maxX - minX);
        var height = Math.Max(1, maxY - minY);
        var pixels = new byte[width * height * 4];

        foreach (var part in parts)
        {
            var destX = part.X - minX;
            var destY = part.Y - minY;
            BlitOamSprite(tiles, palette, pixels, width, destX, destY, part.W, part.H, part.Tile, part.FlipH, part.FlipV);
        }

        var image = new RgbaImage(width, height, pixels);
        GbaChroma.KeyOut(image);
        return new EmotionFrame(image, -minX, -minY);
    }

    private static void BlitOamSprite(
        ReadOnlySpan<byte> tiles,
        RgbaColor[] palette,
        byte[] pixels,
        int stride,
        int destX,
        int destY,
        int spriteW,
        int spriteH,
        int baseTile,
        bool flipH,
        bool flipV)
    {
        var tilesX = spriteW / 8;
        var tilesY = spriteH / 8;
        for (var ty = 0; ty < tilesY; ty++)
        for (var tx = 0; tx < tilesX; tx++)
        {
            var srcTx = flipH ? tilesX - 1 - tx : tx;
            var srcTy = flipV ? tilesY - 1 - ty : ty;
            var tileIndex = baseTile + srcTy * tilesX + srcTx;
            var tileOff = tileIndex * 32;
            if (tileOff < 0 || tileOff + 32 > tiles.Length)
                continue;
            BlitTile(tiles.Slice(tileOff, 32), palette, pixels, stride,
                destX + tx * 8, destY + ty * 8, flipH, flipV);
        }
    }

    private static void BlitTile(
        ReadOnlySpan<byte> tile,
        RgbaColor[] palette,
        byte[] pixels,
        int stride,
        int destX,
        int destY,
        bool flipH,
        bool flipV)
    {
        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var sx = flipH ? 7 - col : col;
            var sy = flipV ? 7 - row : row;
            var packed = tile[sy * 4 + sx / 2];
            var index = (sx & 1) == 0 ? packed & 0xF : packed >> 4;
            if (index == 0 || index >= palette.Length)
                continue;
            var x = destX + col;
            var y = destY + row;
            if ((uint)x >= (uint)stride || y < 0 || y * stride + x >= pixels.Length / 4)
                continue;
            var color = palette[index];
            if (color.A == 0)
                continue;
            var o = (y * stride + x) * 4;
            pixels[o] = color.R;
            pixels[o + 1] = color.G;
            pixels[o + 2] = color.B;
            pixels[o + 3] = color.A;
        }
    }

    private static (int W, int H) OamDims(int shape, int size) => (shape, size) switch
    {
        (0, 0) => (8, 8),
        (0, 1) => (16, 16),
        (0, 2) => (32, 32),
        (0, 3) => (64, 64),
        (1, 0) => (16, 8),
        (1, 1) => (32, 8),
        (1, 2) => (32, 16),
        (1, 3) => (64, 32),
        (2, 0) => (8, 16),
        (2, 1) => (8, 32),
        (2, 2) => (16, 32),
        (2, 3) => (32, 64),
        _ => (8, 8),
    };

    private sealed class EfoClip(IReadOnlyList<EfoAnimFrame> frames, int loopLength, bool loop)
    {
        public IReadOnlyList<EfoAnimFrame> Frames { get; } = frames;
        public int LoopLength { get; } = loopLength;
        public bool Loop { get; } = loop;
    }

    private readonly record struct EfoAnimFrame(int Duration, int PoseId, EmotionFrame Visual);
}

/// <summary>Composed emotion sprite with origin (effect attach point) inside the image.</summary>
public readonly record struct EmotionFrame(RgbaImage Image, int AnchorX, int AnchorY);
