using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class CPatchCatalogTests
{
    [Fact]
    public void BuildOfferingsListsEveryRuntimeConfigField()
    {
        var offerings = CPatchCatalog.BuildOfferings();
        Assert.Equal(RuntimeConfigSchema.Fields.Count, offerings.Count);
        Assert.All(offerings, asset =>
        {
            Assert.Equal(AssetCategory.CPatches, asset.Category);
            Assert.Equal(AssetKind.RuntimeConfig, asset.Kind);
            Assert.True(asset.Metadata.ContainsKey("fieldId"));
            Assert.False(string.IsNullOrWhiteSpace(asset.Description));
        });
        Assert.Contains(offerings, a => a.Metadata["fieldId"] == "always_run");
        Assert.Contains(offerings, a => a.Name == "Always Run");
    }

    [Fact]
    public void TryLoadFallsBackToStandaloneOfferingsWhenSectionMissing()
    {
        var rom = RomImage.FromBytes("/tmp/cpatch-standalone.gba", new byte[0x20000]);
        var state = RuntimeConfigCodec.TryLoad(rom, repositoryRoot: null);
        Assert.True(state.IsStandalone);
        Assert.False(state.HasRomBacking);
        Assert.Equal(0, state.Get("always_run"));
        Assert.Equal(1, state.Get("exp_multiplier"));
    }

    [Fact]
    public void InstallAndUninstallToggleOffering()
    {
        var state = RuntimeConfigCodec.TryLoad(
            RomImage.FromBytes("/tmp/cpatch-install.gba", new byte[0x20000]), null);
        var changes = new ChangeService();

        Assert.False(RuntimeConfigEditing.IsInstalled(state, "always_run"));
        RuntimeConfigEditing.Install(changes, state, "always_run");
        Assert.True(RuntimeConfigEditing.IsInstalled(state, "always_run"));
        Assert.Equal(1, state.Get("always_run"));

        RuntimeConfigEditing.Uninstall(changes, state, "always_run");
        Assert.False(RuntimeConfigEditing.IsInstalled(state, "always_run"));
        Assert.Equal(0, state.Get("always_run"));
    }

    [Fact]
    public void InstallUsesRecommendedValueForNumericOfferings()
    {
        var state = RuntimeConfigCodec.TryLoad(
            RomImage.FromBytes("/tmp/cpatch-bank.gba", new byte[0x20000]), null);
        var changes = new ChangeService();
        RuntimeConfigEditing.Install(changes, state, "bank_interest_percent");
        Assert.Equal(5, state.Get("bank_interest_percent"));
        Assert.True(RuntimeConfigEditing.IsInstalled(state, "bank_interest_percent"));
    }

    [Fact]
    public void WritePatchesBoundSymbolInPlace()
    {
        const int offset = 0x100;
        var bytes = new byte[0x200];
        bytes[offset + 2] = 1;
        var source = RomImage.FromBytes("/tmp/cpatch-bound.gba", bytes);
        var state = RuntimeConfigCodec.Read(source, offset, capacity: RuntimeConfigSchema.ByteLength);
        var changes = new ChangeService();
        RuntimeConfigEditing.Install(changes, state, "always_run");

        var mutable = MutableRom.From(source);
        var report = new RomBuildReport();
        RomBuilder.WriteRuntimeConfig(mutable, state, report);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.Equal(1, mutable.ReadByte(offset));
        Assert.Contains(report.Changes, c => c.Contains("0x100", StringComparison.OrdinalIgnoreCase));
    }
}
