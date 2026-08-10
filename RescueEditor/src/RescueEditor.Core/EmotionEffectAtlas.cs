namespace RescueEditor.Core;

/// <summary>
/// Floating emotion overlays (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY).
/// Loads retail <c>efob</c> SIRO object effects and plays <c>ax_anim</c> with OAM pose compose.
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
        try
        {
            clip = TryLoadFromRom(effectId) ?? TryLoadStripFallback(effectId) ?? TryDrawFallbackClip(effectId);
        }
        catch
        {
            clip = TryDrawFallbackClip(effectId);
        }

        _clips[effectId] = clip;
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

        RetailTables.EffectEntry? entry = null;
        foreach (var e in RetailTables.Effects)
        {
            if (e.Name.Equals($"efob{effectId:D3}", StringComparison.OrdinalIgnoreCase))
            {
                entry = e;
                break;
            }
        }
        if (entry is null)
            return null;

        var archiveOffset = _rom.PointerToOffset(entry.Value.VirtualAddress);
        if (archiveOffset < 0 || !_rom.IsRangeValid(archiveOffset, 8))
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

    /// <summary>PNG vertical tile strip without anim metadata — 2 ticks per tile.</summary>
    private EfoClip? TryLoadStripFallback(int effectId)
    {
        if (string.IsNullOrWhiteSpace(_repositoryRoot))
            return null;
        var path = Path.Combine(_repositoryRoot, "data", "effects", $"efob{effectId:D3}.png");
        if (!File.Exists(path))
            return null;
        try
        {
            var sheet = RgbaImage.FromPng(File.ReadAllBytes(path));
            if (sheet is null || sheet.Width < 8 || sheet.Height < 8)
                return null;

            var frames = new List<EfoAnimFrame>();
            var frameCount = Math.Max(1, sheet.Height / 8);
            // Prefer denser tiles (skip empty padding).
            for (var f = 0; f < frameCount; f++)
            {
                var tile = CropTile(sheet, 0, f * 8);
                if (tile is null || CountOpaque(tile) < 4)
                    continue;
                KeyChroma(tile);
                frames.Add(new EfoAnimFrame(2, new EmotionFrame(tile, tile.Width / 2, tile.Height)));
            }
            if (frames.Count == 0)
                return null;
            var len = frames.Sum(f => f.Duration);
            return new EfoClip(frames, len, loop: effectId is SmileId or AngryId or QuestionId);
        }
        catch
        {
            return null;
        }
    }

    private static RgbaImage? CropTile(RgbaImage sheet, int x0, int y0)
    {
        if (x0 < 0 || y0 < 0 || x0 + 8 > sheet.Width || y0 + 8 > sheet.Height)
            return null;
        var pixels = new byte[8 * 8 * 4];
        for (var row = 0; row < 8; row++)
        for (var col = 0; col < 8; col++)
        {
            var src = ((y0 + row) * sheet.Width + (x0 + col)) * 4;
            var dst = (row * 8 + col) * 4;
            pixels[dst] = sheet.Pixels[src];
            pixels[dst + 1] = sheet.Pixels[src + 1];
            pixels[dst + 2] = sheet.Pixels[src + 2];
            pixels[dst + 3] = sheet.Pixels[src + 3];
        }
        return new RgbaImage(8, 8, pixels);
    }

    private static void KeyChroma(RgbaImage tile)
    {
        for (var i = 0; i < tile.Pixels.Length; i += 4)
        {
            if (GbaChroma.IsChromaKey(tile.Pixels[i], tile.Pixels[i + 1], tile.Pixels[i + 2], tile.Pixels[i + 3]))
                tile.Pixels[i + 3] = 0;
        }
    }

    private static int CountOpaque(RgbaImage img)
    {
        var n = 0;
        for (var i = 3; i < img.Pixels.Length; i += 4)
        {
            if (img.Pixels[i] > 16)
                n++;
        }
        return n;
    }

    private static EfoClip? TryDrawFallbackClip(int effectId)
    {
        var img = effectId switch
        {
            NoticeId => DrawBang(),
            QuestionId => DrawQuestion(),
            SweatId => DrawSweat(),
            ShockId => DrawShock(),
            SmileId => DrawSmile(),
            AngryId => DrawAngry(),
            _ => null,
        };
        if (img is null)
            return null;
        var frame = new EmotionFrame(img, img.Width / 2, img.Height);
        return new EfoClip([new EfoAnimFrame(8, frame)], 8, loop: effectId is SmileId or AngryId);
    }

    private static RgbaImage DrawBang()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 5, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawQuestion()
    {
        var img = New(8, 8);
        Fill(img, 2, 0, 4, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 5, 2, 2, 2, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 4, 2, 1, 0xF8, 0xF8, 0xF8);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF8, 0xF8);
        return img;
    }

    private static RgbaImage DrawSweat()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 2, 0x70, 0xD0, 0xF8);
        Fill(img, 2, 2, 4, 3, 0x70, 0xD0, 0xF8);
        Fill(img, 3, 5, 2, 2, 0x70, 0xD0, 0xF8);
        return img;
    }

    private static RgbaImage DrawShock()
    {
        var img = New(8, 8);
        Fill(img, 3, 0, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 0, 3, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 6, 3, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 3, 6, 2, 2, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawSmile()
    {
        var img = New(8, 8);
        Fill(img, 1, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 5, 2, 2, 2, 0xF8, 0xF0, 0x40);
        Fill(img, 2, 5, 4, 2, 0xF8, 0xF0, 0x40);
        return img;
    }

    private static RgbaImage DrawAngry()
    {
        var img = New(8, 8);
        Fill(img, 0, 1, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 5, 1, 3, 2, 0xF8, 0x40, 0x40);
        Fill(img, 1, 5, 6, 2, 0xF8, 0x40, 0x40);
        return img;
    }

    private static RgbaImage New(int w, int h) => new(w, h, new byte[w * h * 4]);

    private static void Fill(RgbaImage img, int x, int y, int w, int h, byte r, byte g, byte b)
    {
        for (var row = 0; row < h; row++)
        for (var col = 0; col < w; col++)
        {
            var px = x + col;
            var py = y + row;
            if (px < 0 || py < 0 || px >= img.Width || py >= img.Height)
                continue;
            var o = (py * img.Width + px) * 4;
            img.Pixels[o] = r;
            img.Pixels[o + 1] = g;
            img.Pixels[o + 2] = b;
            img.Pixels[o + 3] = 255;
        }
    }

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
