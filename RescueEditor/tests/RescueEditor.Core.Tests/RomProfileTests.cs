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

    [Fact]
    public void VerifiedNonUsProfileParsesScenesFromItsOwnAnchors()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var candidate = RomLayoutProbe.Probe(rom).ToCandidateProfile(rom, "eu-test", "EU test", "B24P");

        var database = SceneGraphParser.Parse(rom, candidate, parallel: false);

        Assert.Same(candidate, database.Profile);
        Assert.NotEmpty(database.Scenes);
        Assert.DoesNotContain(database.Diagnostics, line =>
            line.Contains("verified", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void VerifiedButWriteLockedProfileStaysBlockedInLint()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var candidate = RomLayoutProbe.Probe(rom).ToCandidateProfile(rom, "eu-test", "EU test", "B24P");
        Assert.False(candidate.AllowWrites);

        var database = SceneGraphParser.Parse(rom, candidate, parallel: false);
        var lint = SceneLint.Validate(rom, database);

        Assert.Contains(lint.Errors, error => error.Contains("browse-only", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void VerifiedWritableProfileClearsBrowseOnlyLintGate()
    {
        var baserom = FindUpwards("baserom.gba");
        if (baserom is null) return;

        var rom = RomImage.Open(baserom);
        var candidate = RomLayoutProbe.Probe(rom).ToCandidateProfile(rom, "eu-test", "EU test", "B24P");
        var writable = new RomProfile
        {
            Id = candidate.Id,
            Name = candidate.Name,
            GameCode = candidate.GameCode,
            ExpectedSha1 = rom.Sha1,
            ExpectedSize = rom.Length,
            Anchors = candidate.Anchors,
            MapCount = candidate.MapCount,
            MapFileCount = candidate.MapFileCount,
            FunctionScriptCount = candidate.FunctionScriptCount,
            LayoutVerified = candidate.LayoutVerified,
            AllowWrites = true,
        };

        var database = SceneGraphParser.Parse(rom, writable, parallel: false);
        var lint = SceneLint.Validate(rom, database);

        Assert.DoesNotContain(lint.Errors, error => error.Contains("browse-only", StringComparison.OrdinalIgnoreCase));
        Assert.DoesNotContain(lint.Errors, error => error.Contains("does not match the writable", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void BrowseOnlyProfilesHaveNoAnchors()
    {
        foreach (var profile in new[] { RomProfile.Eu10, RomProfile.Jp10, RomProfile.BlueUs })
        {
            Assert.True(profile.Anchors.Count == 0,
                $"{profile.Id} must not carry anchors until its layout is probed and verified.");
            Assert.True(profile.MapCount == 0,
                $"{profile.Id} must not carry a map count until its layout is probed and verified.");
        }
    }

    private static string? FindUpwards(string fileName)
    {
        var directory = new DirectoryInfo(AppContext.BaseDirectory);
        while (directory is not null)
        {
            var candidate = Path.Combine(directory.FullName, fileName);
            if (File.Exists(candidate))
                return candidate;
            directory = directory.Parent;
        }
        return null;
    }
}
