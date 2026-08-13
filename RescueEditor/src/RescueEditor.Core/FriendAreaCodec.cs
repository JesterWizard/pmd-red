using System.Globalization;

namespace RescueEditor.Core;

public enum FriendAreaUnlock
{
    ShopStory = 0,
    ShopPostGame = 1,
    WonderMail = 2,
    LegendaryRequest = 3,
}

public sealed class FriendAreaTables
{
    public const int DefaultCount = 58; // FRIEND_AREA_COUNT
    public const int SettingsEntrySize = 8;
    public const int LocationCount = 32; // NUM_FRIEND_AREA_LOCATIONS
    public const int LocationEntrySize = 32;
    public const int AreasPerLocation = 8;
    public const int NoAreaId = 63; // FRIEND_AREA_COUNT + 5

    public required int Settings { get; set; }
    public required int Locations { get; set; }
    public int Count { get; set; } = DefaultCount;
    public List<string> Names { get; } = [.. DataTableEnums.FriendAreas];

    public static FriendAreaTables? TryLoad(RomImage rom)
    {
        var settings = IndexOf(rom.Bytes, SettingsNeedle);
        var locationPayload = IndexOf(rom.Bytes, LocationNeedle);
        if (settings < 8 || locationPayload < 4)
            return null;

        return new FriendAreaTables
        {
            Settings = settings - 8,
            Locations = locationPayload - 4,
        };
    }

    public int SettingsOffset(int id) => Settings + id * SettingsEntrySize;
    public int LocationOffset(int locationId) => Locations + locationId * LocationEntrySize;

    public string NameOf(int id) =>
        (uint)id < (uint)Names.Count ? Names[id] : DataTableEnums.FriendAreaName(id);

    // Bountiful Sea + Treasure Sea (ids 1–2).
    private static readonly byte[] SettingsNeedle =
    [
        0x09, 0x00, 0x01, 0x00, 0x7C, 0x15, 0x00, 0x00,
        0x0A, 0x00, 0x01, 0x00, 0x94, 0x11, 0x00, 0x00,
    ];

    // Mountain Range pos + area ids (after the name pointer).
    private static readonly byte[] LocationNeedle =
    [
        0xC5, 0x01, 0x71, 0x00, 0x08, 0x09, 0x0A, 0x27, 0x2F, 0x0B, 0x3F, 0x3F,
    ];

    private static int IndexOf(ReadOnlySpan<byte> haystack, ReadOnlySpan<byte> needle)
    {
        if (needle.IsEmpty || haystack.Length < needle.Length)
            return -1;
        var last = haystack.Length - needle.Length;
        for (var i = 0; i <= last; i += 4)
        {
            if (haystack.Slice(i, needle.Length).SequenceEqual(needle))
                return i;
        }

        return -1;
    }
}

public sealed record FriendAreaEntry(
    int Id,
    string Name,
    int Capacity,
    FriendAreaUnlock Unlock,
    uint Price,
    int LocationId,
    string LocationName,
    int MapX,
    int MapY,
    string SceneBma);

public sealed record FriendAreaSettingsPatch(int Capacity, FriendAreaUnlock Unlock, uint Price);

public static class FriendAreaCodec
{
    public static readonly string[] LocationNames =
    [
        "Mountain Range", "Glacier", "Plains", "South Plains", "Badlands",
        "Eastern Forest", "Western Forest", "River", "Eastern Ponds", "Pond",
        "Northern Lakes", "Eastern Lakes", "Marsh", "Cave", "Jungle",
        "Ruins", "Volcano", "Desert", "Relics", "Sky",
        "Northern Isles", "Southern Isles", "Southwest Isles", "Western Isles",
        "Northern Sea", "Southern Sea", "Beach", "Team Base",
        "Unused 28", "Unused 29", "Unused 30", "Unused 31",
    ];

    public static IReadOnlyList<DataTablePick> UnlockPicks { get; } =
    [
        new((int)FriendAreaUnlock.ShopStory, UnlockName(FriendAreaUnlock.ShopStory)),
        new((int)FriendAreaUnlock.ShopPostGame, UnlockName(FriendAreaUnlock.ShopPostGame)),
        new((int)FriendAreaUnlock.WonderMail, UnlockName(FriendAreaUnlock.WonderMail)),
        new((int)FriendAreaUnlock.LegendaryRequest, UnlockName(FriendAreaUnlock.LegendaryRequest)),
    ];

    public static IReadOnlyList<DataTablePick> LocationPicks { get; } =
        LocationNames.Select((name, id) => new DataTablePick(id, name)).ToArray();

    public static string UnlockName(FriendAreaUnlock unlock) => unlock switch
    {
        FriendAreaUnlock.ShopStory => "Shop (story)",
        FriendAreaUnlock.ShopPostGame => "Shop (post-game)",
        FriendAreaUnlock.WonderMail => "Wonder Mail",
        FriendAreaUnlock.LegendaryRequest => "Legendary request",
        _ => ((int)unlock).ToString(CultureInfo.InvariantCulture),
    };

    public static int LocationIdNamed(string name)
    {
        for (var i = 0; i < LocationNames.Length; i++)
        {
            if (string.Equals(LocationNames[i], name, StringComparison.OrdinalIgnoreCase))
                return i;
        }

        return -1;
    }

    public static FriendAreaEntry? Read(RomImage rom, FriendAreaTables tables, int id)
    {
        if ((uint)id >= (uint)tables.Count)
            return null;
        var off = tables.SettingsOffset(id);
        if (!rom.IsRangeValid(off, FriendAreaTables.SettingsEntrySize))
            return null;

        var capacity = rom.ReadInt16(off);
        var unlock = (FriendAreaUnlock)rom.ReadUInt16(off + 2);
        var price = rom.ReadUInt32(off + 4);
        var locationId = FindLocation(rom, tables, id);
        var (mapX, mapY) = locationId >= 0 ? ReadPin(rom, tables, locationId) : (0, 0);
        var name = tables.NameOf(id);
        return new FriendAreaEntry(
            Id: id,
            Name: name,
            Capacity: capacity,
            Unlock: unlock,
            Price: price,
            LocationId: locationId,
            LocationName: locationId >= 0 ? LocationName(locationId) : "",
            MapX: mapX,
            MapY: mapY,
            SceneBma: GroundMapNames.BmaForDisplayName(name) ?? "");
    }

    public static bool WriteSettings(
        MutableRom rom,
        FriendAreaTables tables,
        int id,
        FriendAreaSettingsPatch patch,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)id >= (uint)tables.Count)
            return false;
        var off = tables.SettingsOffset(id);
        if (!rom.IsRangeValid(off, FriendAreaTables.SettingsEntrySize))
            return false;

        rom.WriteInt16(off, (short)Math.Clamp(patch.Capacity, 0, short.MaxValue));
        rom.WriteUInt16(off + 2, (ushort)patch.Unlock);
        rom.WriteUInt32(off + 4, patch.Price);
        dirty?.Add(new RomSpan(off, FriendAreaTables.SettingsEntrySize));
        return true;
    }

    public static bool WriteMapPin(
        MutableRom rom,
        FriendAreaTables tables,
        int areaId,
        int mapX,
        int mapY,
        ICollection<RomSpan>? dirty = null)
    {
        var locationId = FindLocation(rom, tables, areaId);
        if (locationId < 0)
            return false;
        return WritePin(rom, tables, locationId, mapX, mapY, dirty);
    }

    public static bool WriteLocation(
        MutableRom rom,
        FriendAreaTables tables,
        int areaId,
        int locationId,
        ICollection<RomSpan>? dirty = null)
    {
        if ((uint)areaId >= (uint)tables.Count ||
            (uint)locationId >= FriendAreaTables.LocationCount)
            return false;

        var current = FindLocation(rom, tables, areaId);
        if (current == locationId)
            return true;

        if (!HasFreeSlot(rom, tables, locationId))
            return false;

        if (current >= 0)
            RemoveArea(rom, tables, current, areaId, dirty);
        AddArea(rom, tables, locationId, areaId, dirty);
        return true;
    }

    public static string LocationName(int locationId) =>
        (uint)locationId < (uint)LocationNames.Length
            ? LocationNames[locationId]
            : locationId.ToString(CultureInfo.InvariantCulture);

    internal static int FindLocation(RomImage rom, FriendAreaTables tables, int areaId) =>
        FindLocation(offset => rom.ReadByte(offset), tables, areaId);

    internal static int FindLocation(MutableRom rom, FriendAreaTables tables, int areaId) =>
        FindLocation(offset => rom.ReadByte(offset), tables, areaId);

    private static int FindLocation(Func<int, byte> readByte, FriendAreaTables tables, int areaId)
    {
        for (var loc = 0; loc < FriendAreaTables.LocationCount; loc++)
        {
            var slots = tables.LocationOffset(loc) + 8;
            for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
            {
                if (readByte(slots + i) == areaId)
                    return loc;
            }
        }

        return -1;
    }

    private static (int X, int Y) ReadPin(RomImage rom, FriendAreaTables tables, int locationId)
    {
        var off = tables.LocationOffset(locationId) + 4;
        return (rom.ReadInt16(off), rom.ReadInt16(off + 2));
    }

    private static bool WritePin(
        MutableRom rom, FriendAreaTables tables, int locationId, int mapX, int mapY, ICollection<RomSpan>? dirty)
    {
        var off = tables.LocationOffset(locationId) + 4;
        if (!rom.IsRangeValid(off, 4))
            return false;
        rom.WriteInt16(off, (short)Math.Clamp(mapX, short.MinValue, short.MaxValue));
        rom.WriteInt16(off + 2, (short)Math.Clamp(mapY, short.MinValue, short.MaxValue));
        dirty?.Add(new RomSpan(off, 4));
        return true;
    }

    private static bool HasFreeSlot(MutableRom rom, FriendAreaTables tables, int locationId)
    {
        var slots = tables.LocationOffset(locationId) + 8;
        for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
        {
            if (rom.ReadByte(slots + i) == FriendAreaTables.NoAreaId)
                return true;
        }

        return false;
    }

    private static void RemoveArea(
        MutableRom rom, FriendAreaTables tables, int locationId, int areaId, ICollection<RomSpan>? dirty)
    {
        var slots = tables.LocationOffset(locationId) + 8;
        var kept = new List<byte>(FriendAreaTables.AreasPerLocation);
        for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
        {
            var id = rom.ReadByte(slots + i);
            if (id != areaId && id != FriendAreaTables.NoAreaId)
                kept.Add(id);
        }

        for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
            rom.WriteByte(slots + i, i < kept.Count ? kept[i] : (byte)FriendAreaTables.NoAreaId);
        dirty?.Add(new RomSpan(slots, FriendAreaTables.AreasPerLocation));
    }

    private static void AddArea(
        MutableRom rom, FriendAreaTables tables, int locationId, int areaId, ICollection<RomSpan>? dirty)
    {
        var slots = tables.LocationOffset(locationId) + 8;
        for (var i = 0; i < FriendAreaTables.AreasPerLocation; i++)
        {
            if (rom.ReadByte(slots + i) != FriendAreaTables.NoAreaId)
                continue;
            rom.WriteByte(slots + i, (byte)areaId);
            dirty?.Add(new RomSpan(slots, FriendAreaTables.AreasPerLocation));
            return;
        }
    }
}
