using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class PlayControlsKeymapTests
{
    [Theory]
    [InlineData("A", GbaButton.A)]
    [InlineData("B", GbaButton.B)]
    [InlineData("Up", GbaButton.Up)]
    [InlineData("Down", GbaButton.Down)]
    [InlineData("Left", GbaButton.Left)]
    [InlineData("Right", GbaButton.Right)]
    [InlineData("L", GbaButton.L)]
    [InlineData("R", GbaButton.R)]
    [InlineData("Return", GbaButton.Start)]
    [InlineData("P", GbaButton.Select)]
    public void CreateDefault_ResolvesExpectedBindings(string key, GbaButton button)
    {
        var map = PlayControlsKeymap.CreateDefault();
        Assert.True(map.TryResolve(new KeyChord(key, false, false, false), out var resolved));
        Assert.Equal(button, resolved);
        Assert.Equal(key, map.GetBinding(button).Key);
    }

    [Fact]
    public void Rebind_ReplacesChordAndClearsConflict()
    {
        var map = PlayControlsKeymap.CreateDefault();
        map.Rebind(GbaButton.A, new KeyChord("Q", false, false, false));
        Assert.True(map.TryResolve(new KeyChord("Q", false, false, false), out var a));
        Assert.Equal(GbaButton.A, a);
        Assert.False(map.TryResolve(new KeyChord("A", false, false, false), out _));

        // Rebinding Select onto Q should steal it from A (A becomes unbound).
        map.Rebind(GbaButton.Select, new KeyChord("Q", false, false, false));
        Assert.True(map.TryResolve(new KeyChord("Q", false, false, false), out var select));
        Assert.Equal(GbaButton.Select, select);
        Assert.Equal("", map.GetBinding(GbaButton.A).Key);
    }

    [Fact]
    public void Snapshot_RoundTripsBindings()
    {
        var map = PlayControlsKeymap.CreateDefault();
        map.Rebind(GbaButton.Start, new KeyChord("Space", false, false, false));
        var snapshot = map.ToSnapshot();
        var restored = PlayControlsKeymap.FromSnapshot(snapshot);
        Assert.True(restored.TryResolve(new KeyChord("Space", false, false, false), out var start));
        Assert.Equal(GbaButton.Start, start);
        Assert.Equal("Return", PlayControlsKeymap.CreateDefaultBinding(GbaButton.Start).Key);
    }
}
