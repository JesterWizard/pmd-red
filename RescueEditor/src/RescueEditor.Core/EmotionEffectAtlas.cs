namespace RescueEditor.Core;

public enum EmotionEffectSource
{
    Missing,
    Rom,
    PngStrip,
}

/// <summary>
/// Floating emotion overlays (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY).
/// Loads retail <c>efob</c> SIRO object effects and plays <c>ax_anim</c> with OAM pose compose.
/// Never substitutes hand-drawn placeholders — missing assets stay missing.
/// </summary>
public sealed class EmotionEffectAtlas
{
    public const int NoticeId = 88;
    public const int QuestionId = 89;
    public const int ShockId = 91;
    public const int SweatId = 92;
    public const int SmileId = 93;
    public const int AngryId = 94;

    private readonly string? _repositoryRoot;
    private readonly RomImage? _rom;
    private readonly Dictionary<int, EfoClip?> _clips = new();
    private readonly Dictionary<int, EmotionEffectSource> _sources = new();

    public EmotionEffectAtlas(string? repositoryRoot, RomImage? rom = null)
    {
        _repositoryRoot = ResolveEffectsRoot(repositoryRoot);
        _rom = rom;
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

    private EfoClip? TryGetClip(int effectId)
    {
        if (_clips.TryGetValue(effectId, out var cached))
            return cached;

        EfoClip? clip = null;
        var source = EmotionEffectSource.Missing;
        try
        {
            // Only ROM SIRO compose — data/effects PNG strips are raw 8px tiles and look wrong in-game.
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
                        File.Exists(Path.Combine(effects, "efob088.png")))
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

        var name = $"efob{effectId:D3}";
        var archiveOffset = ResolveEffectSiroOffset(_rom, name);
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
        var palette = ReadEffectPalette(_rom, palOff, effectId);

        // animations[0] → 8 dirs → use dir 0 sequence
        var anim0Table = _rom.ReadPointerOffset(animsOff);
        if (anim0Table < 0)
            return null;
        var seqOff = _rom.ReadPointerOffset(anim0Table);
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
            framesOut.Add(new EfoAnimFrame(duration, visual));
            loopLen += duration;
        }
        if (framesOut.Count == 0 || loopLen <= 0)
            return null;

        // Oneshots (NOTICE/SHOCK/SWEAT) play once; sticky smile/angry loop.
        var loop = effectId is SmileId or AngryId or QuestionId;
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
    /// Effect palettes use RGB_Struct (4 bytes). Index 0 is transparent.
    /// NOTICE (efob088) stores a pure cyan chroma ramp — remap nonzero indices to ink.
    /// </summary>
    private static RgbaColor[] ReadEffectPalette(RomImage rom, int palOff, int effectId)
    {
        var raw = GraphicsRenderers.ReadRgbPalette(rom, palOff, 64, transparentFirst: true);
        var allCyan = true;
        for (var i = 1; i < raw.Length; i++)
        {
            if (raw[i].R > 8 || raw[i].G < 250 || raw[i].B < 250)
            {
                allCyan = false;
                break;
            }
        }

        if (!allCyan)
        {
            // Force opaque for non-transparent entries (ROM often stores A=0x80).
            for (var i = 1; i < raw.Length; i++)
            {
                if (raw[i].A > 0)
                    raw[i] = new RgbaColor(raw[i].R, raw[i].G, raw[i].B, 255);
            }
            return raw;
        }

        var (inkR, inkG, inkB) = effectId switch
        {
            NoticeId or QuestionId => ((byte)0xF8, (byte)0xF8, (byte)0xF8),
            SweatId => ((byte)0x70, (byte)0xD0, (byte)0xF8),
            ShockId or SmileId => ((byte)0xF8, (byte)0xF0, (byte)0x40),
            AngryId => ((byte)0xF8, (byte)0x40, (byte)0x40),
            _ => ((byte)0xF8, (byte)0xF8, (byte)0xF8),
        };
        for (var i = 1; i < raw.Length; i++)
            raw[i] = new RgbaColor(inkR, inkG, inkB, 255);
        return raw;
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
            var flags1 = rom.ReadUInt16(off + 4);
            var flags2 = rom.ReadUInt16(off + 6);
            var flags3 = rom.ReadUInt16(off + 8);
            if (sprite == -1 && flags1 == 0xFFFF && flags2 == 0xFFFF && flags3 == 0xFFFF)
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

        return new EmotionFrame(new RgbaImage(width, height, pixels), -minX, -minY);
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

    private readonly record struct EfoAnimFrame(int Duration, EmotionFrame Visual);
}

/// <summary>Composed emotion sprite with origin (effect attach point) inside the image.</summary>
public readonly record struct EmotionFrame(RgbaImage Image, int AnchorX, int AnchorY);
