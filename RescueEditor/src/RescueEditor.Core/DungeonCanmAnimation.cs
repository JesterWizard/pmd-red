using System.Buffers.Binary;

namespace RescueEditor.Core;

/// <summary>
/// Dungeon tileset color animation (<c>bXXcanm</c>) — drives lava / water palette
/// slots starting at BG index 160 (<c>UpdateAnimatedColors(..., 0xA0, 0x20, ...)</c>).
/// </summary>
public sealed class DungeonCanmAnimation
{
    public const int PaletteBaseIndex = 0xA0;
    public const int SlotCountMax = 32;

    private readonly Slot[] _slots;

    private DungeonCanmAnimation(Slot[] slots) => _slots = slots;

    public int SlotCount => _slots.Length;
    public bool HasAnimations => _slots.Any(s => s.Colors.Length > 1);

    public int CacheKey(int animTick)
    {
        unchecked
        {
            var key = 0;
            foreach (var slot in _slots)
            {
                if (slot.Colors.Length <= 1)
                    continue;
                var dur = Math.Max(1, slot.Duration);
                key = (key * 31) + ((animTick / dur) % slot.Colors.Length) + 1;
            }

            return key;
        }
    }

    /// <summary>Apply animated colors onto a flat RGBX dungeon palette (index = bank*16+color).</summary>
    public void ApplyTo(RgbaColor[] palette, int animTick)
    {
        for (var i = 0; i < _slots.Length; i++)
        {
            var slot = _slots[i];
            if (slot.Colors.Length == 0)
                continue;
            var dest = PaletteBaseIndex + i;
            if ((uint)dest >= (uint)palette.Length)
                continue;
            var frame = 0;
            if (slot.Colors.Length > 1)
            {
                var dur = Math.Max(1, slot.Duration);
                frame = (Math.Max(0, animTick) / dur) % slot.Colors.Length;
            }

            palette[dest] = slot.Colors[frame];
        }
    }

    public static DungeonCanmAnimation? TryLoad(RomImage rom, int tileset)
    {
        if (tileset < 0 || tileset > 99)
            return null;

        var name = $"b{tileset:D2}canm";
        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            var entry = archive.Entries.FirstOrDefault(e =>
                e.Name.Equals(name, StringComparison.Ordinal));
            if (entry is null)
                continue;

            try
            {
                var raw = rom.Copy(entry.Offset, entry.Size);
                return TryParseSir0(raw, entry.Offset);
            }
            catch
            {
                return null;
            }
        }

        return null;
    }

    private static DungeonCanmAnimation? TryParseSir0(byte[] raw, int fileRomOffset)
    {
        if (raw.Length < 16 || raw[0] != (byte)'S' || raw[1] != (byte)'I')
            return null;

        var dataGba = BinaryPrimitives.ReadInt32LittleEndian(raw.AsSpan(4));
        var dataRom = dataGba & 0x1FFFFFF;
        var dataOff = dataRom - fileRomOffset;
        if (dataOff < 0 || dataOff + SlotCountMax * 4 > raw.Length)
            return null;

        var slots = new Slot[SlotCountMax];
        for (var i = 0; i < SlotCountMax; i++)
        {
            var ptr = BinaryPrimitives.ReadInt32LittleEndian(raw.AsSpan(dataOff + i * 4));
            var off = (ptr & 0x1FFFFFF) - fileRomOffset;
            if ((uint)off + 4 > (uint)raw.Length)
            {
                slots[i] = new Slot(0, Array.Empty<RgbaColor>());
                continue;
            }

            var count = BinaryPrimitives.ReadInt16LittleEndian(raw.AsSpan(off));
            var dur = BinaryPrimitives.ReadInt16LittleEndian(raw.AsSpan(off + 2));
            if (count <= 0 || off + 4 + count * 4 > raw.Length)
            {
                slots[i] = new Slot(0, Array.Empty<RgbaColor>());
                continue;
            }

            var colors = new RgbaColor[count];
            for (var c = 0; c < count; c++)
            {
                var o = off + 4 + c * 4;
                colors[c] = new RgbaColor(raw[o], raw[o + 1], raw[o + 2], 255);
            }

            slots[i] = new Slot(Math.Max(1, (int)dur), colors);
        }

        return new DungeonCanmAnimation(slots);
    }

    private readonly record struct Slot(int Duration, RgbaColor[] Colors);
}
