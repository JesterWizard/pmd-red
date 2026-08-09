using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class GroundMapNamesTests
{
    [Theory]
    [InlineData("H18P01m", "Power Plant")]
    [InlineData("H01P01m", "Bountiful Sea")]
    [InlineData("H01P01Wm", "Bountiful Sea")]
    [InlineData("H07P04Wm", "Energetic Forest")]
    [InlineData("H21P02m", "Aged Chamber O?")]
    [InlineData("H29P04m", "Final Island")]
    [InlineData("T01P01m", "Pokémon Square")]
    [InlineData("B01P01Am", "Pikachu Team Base (Basic)")]
    [InlineData("B01P01Bm", "Pikachu Team Base (Construction)")]
    [InlineData("B01P01Cm", "Pikachu Team Base")]
    [InlineData("B01P02Am", "Pikachu Team Base Inside (Basic)")]
    [InlineData("B01P02Cm", "Pikachu Team Base Inside")]
    [InlineData("B02P01Cm", "Meowth Team Base")]
    [InlineData("B05P01Am", "Squirtle Team Base (Basic)")]
    [InlineData("B07P01Cm", "Mudkip Team Base")]
    [InlineData("B10P01Cm", "Torchic Team Base")]
    [InlineData("B14P02Bm", "Bulbasaur Team Base Inside (Construction)")]
    [InlineData("B16P01Cm", "Treecko Team Base")]
    [InlineData("S06m", "Team Base Wall Map")]
    [InlineData("A01P01m", "Personality Test")]
    [InlineData("A02P01m", "Fugitives Fissure")]
    [InlineData("A02P02m", "Fugitives Fire")]
    [InlineData("A02P03m", "Fugitives Lapis Cave")]
    [InlineData("A02P04m", "Fugitives Volcano")]
    [InlineData("A03P01m", "Fugitives Snow Road")]
    [InlineData("A03P03m", "Fugitives Blizzard Road")]
    [InlineData("A04P02m", "Sky Tower")]
    [InlineData("A04P03m", "Comet")]
    [InlineData("A04P04m", "Nightmare")]
    [InlineData("A05P01m", "Night Sky 1")]
    [InlineData("A05P02m", "Night Sky 2")]
    [InlineData("A05P03m", "The End")]
    public void GetDisplayName_UsesCanonicalPlaceNames(string romMapName, string expected)
    {
        Assert.Equal(expected, GroundMapNames.GetDisplayName(romMapName));
    }

    [Fact]
    public void FormatListName_IncludesRomId()
    {
        Assert.Equal("Power Plant (H18P01m)", GroundMapNames.FormatListName("H18P01m"));
    }
}
