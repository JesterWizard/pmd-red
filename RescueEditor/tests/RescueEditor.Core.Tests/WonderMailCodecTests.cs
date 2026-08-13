using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class WonderMailCodecTests
{
    private static WonderMailMission Sample() => new()
    {
        MailType = WonderMailTypes.Wonder,
        MissionType = WonderMailMissionType.RescueClient,
        Special = 0,
        ClientSpecies = 1, // Bulbasaur
        TargetSpecies = 1,
        TargetItem = 82, // Apple
        RewardType = WonderMailRewardType.Item,
        ItemReward = 55, // Oran Berry
        FriendAreaReward = 0,
        Seed = 0x00C0FFEE,
        DungeonId = 0, // Tiny Woods
        Floor = 3,
    };

    [Fact]
    public void Encode_Produces24CharacterPasswordFromGameAlphabet()
    {
        var password = WonderMailCodec.Encode(Sample());
        var compact = WonderMailCodec.NormalizePassword(password);
        Assert.Equal(24, compact.Length);
        Assert.All(compact.EnumerateRunes(), rune =>
            Assert.Contains(rune.ToString(), WonderMailCodec.Alphabet));
    }

    [Fact]
    public void RoundTrip_SampleRescueMail()
    {
        var mail = Sample();
        var password = WonderMailCodec.Encode(mail);
        Assert.True(WonderMailCodec.TryDecode(password, out var decoded));
        Assert.Equal(mail, decoded);
    }

    [Fact]
    public void RoundTrip_FindItemMail_WithGroupedAndLowercasePassword()
    {
        var mail = Sample() with
        {
            MissionType = WonderMailMissionType.FindItem,
            TargetItem = 55,
        };
        var password = WonderMailCodec.Encode(mail);
        var grouped = WonderMailCodec.FormatPassword(password).ToLowerInvariant();
        Assert.True(WonderMailCodec.TryDecode(grouped, out var decoded));
        Assert.Equal(mail, decoded);
    }

    [Fact]
    public void Decode_RejectsWrongChecksum()
    {
        var password = WonderMailCodec.Encode(Sample()).ToCharArray();
        var compact = WonderMailCodec.NormalizePassword(new string(password)).ToCharArray();
        compact[0] = compact[0] == '?' ? '6' : '?';
        Assert.False(WonderMailCodec.TryDecode(new string(compact), out _));
    }

    [Fact]
    public void Decode_RejectsInvalidAlphabet()
    {
        Assert.False(WonderMailCodec.TryDecode("AAAAAAAAAAAAAAAAAAAAAAAA", out _));
    }

    [Fact]
    public void Decode_KnownSamplePassword()
    {
        const string password = "4?MN?YF?4F6WHF??+4?6♀♀??";
        Assert.Equal(password, WonderMailCodec.NormalizePassword(WonderMailCodec.Encode(Sample())));
        Assert.True(WonderMailCodec.TryDecode(password, out var decoded));
        Assert.Equal(Sample(), decoded);
    }

    [Fact]
    public void Validate_AcceptsSampleWonderMail()
    {
        var result = WonderMailValidator.Validate(Sample());
        Assert.True(result.IsValid, string.Join("; ", result.Errors));
    }

    [Fact]
    public void Validate_RejectsNonWonderMailType()
    {
        var result = WonderMailValidator.Validate(Sample() with { MailType = 4 });
        Assert.False(result.IsValid);
        Assert.Contains(result.Errors, e => e.Contains("mail type", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void Validate_RejectsOutlawHuntPasswords()
    {
        var result = WonderMailValidator.Validate(Sample() with
        {
            MissionType = WonderMailMissionType.OutlawHunt,
        });
        Assert.False(result.IsValid);
        Assert.Contains(result.Errors, e => e.Contains("mission type", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void Validate_RejectsInvalidDungeonAndFloor()
    {
        var boss = WonderMailValidator.Validate(Sample() with { DungeonId = 24 }); // DUNGEON_BOSS_3
        Assert.False(boss.IsValid);

        var floor = WonderMailValidator.Validate(Sample() with { Floor = 99 });
        Assert.False(floor.IsValid);
    }

    [Fact]
    public void Validate_RescueClientRequiresMatchingSpecies()
    {
        var result = WonderMailValidator.Validate(Sample() with { TargetSpecies = 25 });
        Assert.False(result.IsValid);
    }

    [Fact]
    public void Validate_RejectsThrownAndNothingItems()
    {
        var nothing = WonderMailValidator.Validate(Sample() with { TargetItem = 0 });
        Assert.False(nothing.IsValid);

        var thrown = WonderMailValidator.Validate(Sample() with { TargetItem = 1 }); // Stick
        Assert.False(thrown.IsValid);

        var poke = WonderMailValidator.Validate(Sample() with { ItemReward = 105 });
        Assert.False(poke.IsValid);
    }

    [Fact]
    public void Validate_RejectsBlankAndEndRewardTypes()
    {
        Assert.False(WonderMailValidator.Validate(Sample() with { RewardType = WonderMailRewardType.Blank4 }).IsValid);
        Assert.False(WonderMailValidator.Validate(Sample() with { RewardType = WonderMailRewardType.EndRewards }).IsValid);
    }

    [Fact]
    public void Validate_FriendAreaRewardMustBeWonderMailUnlock()
    {
        var ok = WonderMailValidator.Validate(Sample() with
        {
            RewardType = WonderMailRewardType.FriendArea,
            FriendAreaReward = 10, // Mt. Moonview
        });
        Assert.True(ok.IsValid, string.Join("; ", ok.Errors));

        var shop = WonderMailValidator.Validate(Sample() with
        {
            RewardType = WonderMailRewardType.FriendArea,
            FriendAreaReward = 1, // Bountiful Sea (shop)
        });
        Assert.False(shop.IsValid);
    }
}
