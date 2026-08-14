using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RomProfileTests
{
    [Theory]
    [InlineData(RomImage.ExpectedRetailSha1, RomImage.ExpectedRetailSize, "us10")]
    [InlineData("afee3b060dd5fd4a68afb1b003456aef3a2af073", RomImage.ExpectedRetailSize, "eu10")]
    [InlineData("4bc9370edebb3da5bdf768eeced689fda3f8b77b", RomImage.ExpectedRetailSize, "jp10")]
    [InlineData("503edef4fe6088bca00616efcac3b13da90cd105", RomImage.ExpectedRetailSize, "blue-us")]
    public void TryMatchSelectsProfileBySha1AndSize(string sha1, int size, string id)
    {
        var profile = RomProfile.TryMatch(sha1, size);
        Assert.NotNull(profile);
        Assert.Equal(id, profile!.Id);
        Assert.True(profile.Matches(sha1, size));
    }

    [Fact]
    public void TryMatchRejectsUnknownSha1()
    {
        Assert.Null(RomProfile.TryMatch("ffffffffffffffffffffffffffffffffffffffff", RomImage.ExpectedRetailSize));
        Assert.Null(RomProfile.TryMatch(RomImage.ExpectedRetailSha1, 16));
    }

    [Fact]
    public void KnownNonUsProfilesAreBrowseOnlyUntilVerified()
    {
        Assert.True(RomProfile.Us10.AllowWrites);
        Assert.True(RomProfile.Us10.LayoutVerified);
        Assert.False(RomProfile.Eu10.AllowWrites);
        Assert.False(RomProfile.Eu10.LayoutVerified);
        Assert.False(RomProfile.Jp10.AllowWrites);
        Assert.False(RomProfile.Jp10.LayoutVerified);
        Assert.False(RomProfile.BlueUs.AllowWrites);
        Assert.False(RomProfile.BlueUs.LayoutVerified);
    }

    [Fact]
    public void RequireWritableRejectsBrowseOnlyProfiles()
    {
        var error = Assert.Throws<InvalidOperationException>(() => RomProfile.RequireWritable(RomProfile.Eu10));
        Assert.Contains("browse-only", error.Message, StringComparison.OrdinalIgnoreCase);
        Assert.Same(RomProfile.Us10, RomProfile.RequireWritable(RomProfile.Us10));
    }

    [Fact]
    public void SceneGraphParserDoesNotThrowForUnverifiedProfile()
    {
        var rom = RomImage.FromBytes("eu.gba", new byte[64]);
        var database = SceneGraphParser.Parse(rom, RomProfile.Eu10);
        Assert.Same(RomProfile.Eu10, database.Profile);
        Assert.Empty(database.Scenes);
        Assert.Contains(database.Diagnostics, line =>
            line.Contains("verified", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void SceneLintRejectsBrowseOnlyProfileWrites()
    {
        var rom = RomImage.FromBytes("eu.gba", new byte[64]);
        var lint = SceneLint.Validate(rom, new SceneDatabase { Profile = RomProfile.Eu10 });
        Assert.Contains(lint.Errors, error => error.Contains("browse-only", StringComparison.OrdinalIgnoreCase));
    }
}
