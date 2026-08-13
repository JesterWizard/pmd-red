namespace RescueEditor.Core;

/// <summary>Retail dungeon RNG (<c>dungeon_random.c</c>).</summary>
public sealed class DungeonRng
{
    private uint _state;

    public DungeonRng(uint seed) => _state = seed | 1;

    public int Rand16()
    {
        _state = unchecked(1566083941 * _state + 1);
        return (int)(_state >> 16);
    }

    public int RandInt(int cap)
    {
        if (cap <= 0)
            return 0;
        return ((Rand16() & 0xFFFF) * cap) >> 16 & 0xFFFF;
    }

    public int RandRange(int low, int high)
    {
        if (low == high)
            return low;
        return low < high ? RandInt(high - low) + low : RandInt(low - high) + high;
    }

    public bool Outcome(int percentChance) => RandInt(100) < percentChance;
}
