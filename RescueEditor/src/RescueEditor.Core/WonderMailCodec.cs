using System.Text;

namespace RescueEditor.Core;

/// <summary>Wonder Mail type byte; passwords use <see cref="Wonder"/> (same value as thank-you mail).</summary>
public static class WonderMailTypes
{
    public const byte Wonder = 5;
}

public enum WonderMailMissionType : byte
{
    RescueClient = 0,
    RescueTarget = 1,
    EscortClient = 2,
    FindItem = 3,
    DeliverItem = 4,
    OutlawHunt = 5,
}

public enum WonderMailRewardType : byte
{
    Money = 0,
    MoneyExtra = 1,
    Item = 2,
    ItemExtra = 3,
    Blank4 = 4,
    Money1 = 5,
    Money1Extra = 6,
    Item1 = 7,
    Item1Extra = 8,
    FriendArea = 9,
    EndRewards = 10,
}

public sealed record WonderMailMission
{
    public byte MailType { get; init; } = WonderMailTypes.Wonder;
    public WonderMailMissionType MissionType { get; init; }
    public byte Special { get; init; }
    public ushort ClientSpecies { get; init; }
    public ushort TargetSpecies { get; init; }
    public byte TargetItem { get; init; }
    public WonderMailRewardType RewardType { get; init; }
    public byte ItemReward { get; init; }
    public byte FriendAreaReward { get; init; }
    public uint Seed { get; init; }
    public byte DungeonId { get; init; }
    public byte Floor { get; init; }
}

public sealed record WonderMailValidation(bool IsValid, IReadOnlyList<string> Errors);

/// <summary>
/// Encode/decode Red Rescue Team Wonder Mail passwords
/// (<c>DecodeWonderMailPassword</c> / <c>sub_803D414</c> in <c>src/code_803D0D8.c</c>).
/// </summary>
public static class WonderMailCodec
{
    public const int PasswordLength = 24;

    /// <summary>32-symbol password alphabet in 5-bit index order (decomp <c>sUnknown_80F42D0</c>).</summary>
    public const string Alphabet = "?67NPR89F0+⋯STXY45MCHJ-K12!♀3Q♂W";

    private static readonly string[] AlphabetRunes = Alphabet.EnumerateRunes().Select(r => r.ToString()).ToArray();

    private static readonly Dictionary<string, int> AlphabetIndex = BuildIndex();

    // gUnknown_80F4426 — first 24 entries scramble packed symbols into the typed password.
    private static readonly byte[] Scramble =
    [
        0x0c, 0x06, 0x13, 0x08, 0x04, 0x0d, 0x0f, 0x09, 0x10, 0x02,
        0x14, 0x12, 0x00, 0x15, 0x0b, 0x05, 0x17, 0x03, 0x11,
        0x0a, 0x01, 0x0e, 0x16, 0x07,
    ];

    public static string FormatPassword(string password)
    {
        var compact = NormalizePassword(password);
        if (compact.Length == 0)
            return "";
        var parts = new List<string>();
        var runes = compact.EnumerateRunes().Select(r => r.ToString()).ToArray();
        for (var i = 0; i < runes.Length; i += 6)
            parts.Add(string.Concat(runes.Skip(i).Take(6)));
        return string.Join(" ", parts);
    }

    public static string NormalizePassword(string? password)
    {
        if (string.IsNullOrWhiteSpace(password))
            return "";

        var text = password.Replace("...", "⋯", StringComparison.Ordinal);
        var builder = new StringBuilder();
        foreach (var rune in text.EnumerateRunes())
        {
            var ch = rune.ToString();
            if (char.IsWhiteSpace(ch[0]) && rune.Utf16SequenceLength == 1)
                continue;
            if (ch == "*")
                ch = "⋯";
            else if (ch.Length == 1 && ch[0] is >= 'a' and <= 'z')
                ch = ch.ToUpperInvariant();
            builder.Append(ch);
        }

        return builder.ToString();
    }

    public static string Encode(WonderMailMission mail)
    {
        var packed = new byte[15];
        var writer = new BitPacker(packed, offset: 1);
        WriteMail(writer, mail);

        byte checksum = 0;
        for (var i = 1; i < 15; i++)
            checksum += (byte)(packed[i] + i);
        packed[0] = checksum;

        var symbols = new int[PasswordLength];
        var reader = new BitPacker(packed);
        for (var i = 0; i < PasswordLength; i++)
            symbols[i] = (int)reader.Read(5);

        var scrambled = new string[PasswordLength];
        for (var i = 0; i < PasswordLength; i++)
            scrambled[Scramble[i]] = AlphabetRunes[symbols[i]];
        return string.Concat(scrambled);
    }

    public static bool TryDecode(string? password, out WonderMailMission mail)
    {
        mail = new WonderMailMission();
        var compact = NormalizePassword(password);
        var runes = compact.EnumerateRunes().Select(r => r.ToString()).ToArray();
        if (runes.Length != PasswordLength)
            return false;

        var unscrambled = new int[PasswordLength];
        for (var i = 0; i < PasswordLength; i++)
        {
            if (!AlphabetIndex.TryGetValue(runes[Scramble[i]], out var value))
                return false;
            unscrambled[i] = value;
        }

        var packed = new byte[15];
        var writer = new BitPacker(packed);
        for (var i = 0; i < PasswordLength; i++)
            writer.Write((uint)unscrambled[i], 5);

        byte checksum = 0;
        for (var i = 1; i < 15; i++)
            checksum += (byte)(packed[i] + i);
        if (packed[0] != checksum)
            return false;

        var reader = new BitPacker(packed, offset: 1);
        mail = ReadMail(reader);
        return true;
    }

    private static void WriteMail(BitPacker bits, WonderMailMission mail)
    {
        bits.Write(mail.MailType, 4);
        bits.Write((byte)mail.MissionType, 3);
        bits.Write(mail.Special, 4);
        bits.Write(mail.ClientSpecies, 9);
        bits.Write(mail.TargetSpecies, 9);
        bits.Write(mail.TargetItem, 8);
        bits.Write((byte)mail.RewardType, 4);
        bits.Write(mail.ItemReward, 8);
        bits.Write(mail.FriendAreaReward, 6);
        bits.Write(mail.Seed & 0xFFFFFF, 24);
        bits.Write(mail.DungeonId, 7);
        bits.Write(mail.Floor, 7);
    }

    private static WonderMailMission ReadMail(BitPacker bits) => new()
    {
        MailType = (byte)bits.Read(4),
        MissionType = (WonderMailMissionType)bits.Read(3),
        Special = (byte)bits.Read(4),
        ClientSpecies = (ushort)bits.Read(9),
        TargetSpecies = (ushort)bits.Read(9),
        TargetItem = (byte)bits.Read(8),
        RewardType = (WonderMailRewardType)bits.Read(4),
        ItemReward = (byte)bits.Read(8),
        FriendAreaReward = (byte)bits.Read(6),
        Seed = bits.Read(24),
        DungeonId = (byte)bits.Read(7),
        Floor = (byte)bits.Read(7),
    };

    private static Dictionary<string, int> BuildIndex()
    {
        var map = new Dictionary<string, int>(StringComparer.Ordinal);
        for (var i = 0; i < AlphabetRunes.Length; i++)
            map[AlphabetRunes[i]] = i;
        return map;
    }

    /// <summary>LSB-first bit packer matching <c>WriteBits</c>/<c>ReadBits</c> in <c>src/data_serializer.c</c>.</summary>
    private sealed class BitPacker
    {
        private readonly byte[] _buffer;
        private int _byteIndex;
        private int _bitIndex;

        public BitPacker(byte[] buffer, int offset = 0)
        {
            _buffer = buffer;
            _byteIndex = offset;
        }

        public void Write(uint value, int bitCount)
        {
            for (var bit = 0; bit < bitCount; bit++)
            {
                if (((value >> bit) & 1) != 0)
                    _buffer[_byteIndex] |= (byte)(1 << _bitIndex);
                Advance();
            }
        }

        public uint Read(int bitCount)
        {
            uint value = 0;
            for (var bit = 0; bit < bitCount; bit++)
            {
                if (((_buffer[_byteIndex] >> _bitIndex) & 1) != 0)
                    value |= 1u << bit;
                Advance();
            }

            return value;
        }

        private void Advance()
        {
            _bitIndex++;
            if (_bitIndex != 8)
                return;
            _bitIndex = 0;
            _byteIndex++;
        }
    }
}

/// <summary>Mirrors <c>IsValidWonderMail</c> / <c>ValidateWonderMail</c> using decomp tables shipped in Core.</summary>
public static class WonderMailValidator
{
    public const int MonsterMax = 424; // MONSTER_RAYQUAZA_CUTSCENE + 1
    public const int ItemCount = 240; // NUMBER_OF_ITEM_IDS
    public const int FriendAreaFinalIsland = 57;
    public const int DungeonOutOnRescue = 63;

    private static readonly byte[] InvalidDungeons =
    [
        24, 25, 30, 39, 49, 50, 51, 54, 55, 61,
    ];

    private static readonly byte[] InvalidItems =
    [
        237, 238, 239, 177, 233, 36, 216, 210, 176, 220, 50, 51, 52, 194, 236,
    ];

    private static readonly byte[] WonderMailFriendAreas = [10, 14, 35, 36];

    public static WonderMailValidation Validate(WonderMailMission mail)
    {
        var errors = new List<string>();

        if (mail.MailType != WonderMailTypes.Wonder)
            errors.Add("Mail type must be Wonder Mail (5).");

        if ((byte)mail.MissionType > (byte)WonderMailMissionType.DeliverItem)
            errors.Add("Mission type cannot be Outlaw Hunt or higher (Wonder Mail passwords reject type > Deliver).");

        if (mail.Special > 9)
            errors.Add("Special field must be 0–9.");

        if (mail.DungeonId >= DungeonOutOnRescue || InvalidDungeons.Contains(mail.DungeonId))
            errors.Add("Dungeon is not valid for Wonder Mail.");
        else if (mail.DungeonId < DungeonBuiltinNames.Dungeons.Length)
        {
            var floors = DungeonBuiltinNames.Dungeons[mail.DungeonId].FloorCount;
            if (mail.Floor >= floors)
                errors.Add($"Floor {mail.Floor} is past {DungeonBuiltinNames.Dungeons[mail.DungeonId].DisplayName} ({floors} floors).");
        }

        if (mail.ClientSpecies == 0)
            errors.Add("Client species cannot be none.");
        if (mail.ClientSpecies >= MonsterMax)
            errors.Add("Client species is out of range.");
        if (mail.TargetSpecies >= MonsterMax)
            errors.Add("Target species is out of range.");

        var mission = (byte)mail.MissionType;
        if (unchecked((byte)(mission - 1)) > (byte)WonderMailMissionType.RescueTarget
            && mail.TargetSpecies != mail.ClientSpecies)
            errors.Add("Client and target species must match for this mission type.");

        IsBadItem(mail.TargetItem, "Target item", errors);
        if (IsThrownItem(mail.TargetItem))
            errors.Add("Target item cannot be a thrown item.");

        if (mail.RewardType is WonderMailRewardType.Blank4 or WonderMailRewardType.EndRewards
            || (byte)mail.RewardType > (byte)WonderMailRewardType.EndRewards)
            errors.Add("Reward type is unused or out of range.");

        IsBadItem(mail.ItemReward, "Item reward", errors);

        if (mail.FriendAreaReward > FriendAreaFinalIsland)
            errors.Add("Friend Area reward is out of range.");

        if (mail.RewardType == WonderMailRewardType.FriendArea
            && !WonderMailFriendAreas.Contains(mail.FriendAreaReward))
            errors.Add("Friend Area reward must be a Wonder Mail unlock area.");

        return new WonderMailValidation(errors.Count == 0, errors);
    }

    private static bool IsThrownItem(byte id) => id is >= 1 and <= 8;

    private static bool IsBadItem(byte id, string label, List<string> errors)
    {
        var bad = false;
        if (id >= ItemCount || InvalidItems.Contains(id))
        {
            errors.Add($"{label} is not a valid reward item.");
            bad = true;
        }

        if (id is 0 or 105 or 124)
        {
            errors.Add($"{label} cannot be nothing, Poké, or a used TM.");
            bad = true;
        }

        return bad;
    }
}
