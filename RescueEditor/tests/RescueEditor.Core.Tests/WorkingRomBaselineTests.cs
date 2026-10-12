using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class WorkingRomBaselineTests
{
    [Fact]
    public void ViewSharesSourceUntilMutated()
    {
        var rom = RomImage.FromBytes("test.gba", new byte[256]);

        var working = new WorkingRom(rom);
        Assert.Same(rom, working.View);

        working.Overlay(4, new byte[] { 0xAB });

        Assert.NotSame(rom, working.View);
        Assert.Equal(0xAB, working.View.ReadByte(4));
        Assert.Equal(0, rom.ReadByte(4));
    }

    [Fact]
    public void BaselineFactoryRunsOnceOnFirstRead()
    {
        var rom = RomImage.FromBytes("test.gba", new byte[256]);
        var calls = 0;
        var db = new SceneDatabase();
        var working = new WorkingRom(rom)
        {
            BaselineFactory = () =>
            {
                calls++;
                return db;
            },
        };

        Assert.Equal(0, calls);
        Assert.Same(db, working.Baseline);
        Assert.Same(db, working.Baseline);
        Assert.Equal(1, calls);
    }

    [Fact]
    public void BaselineSetterWinsOverFactory()
    {
        var rom = RomImage.FromBytes("test.gba", new byte[256]);
        var set = new SceneDatabase();
        var working = new WorkingRom(rom)
        {
            BaselineFactory = () => throw new InvalidOperationException("factory must not run"),
        };

        working.Baseline = set;

        Assert.Same(set, working.Baseline);
    }
}
