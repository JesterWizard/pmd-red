using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class DecompRomLocatorTests : IDisposable
{
    public DecompRomLocatorTests() => CPatchFeaturePayload.ClearTestBundle();

    public void Dispose() => CPatchFeaturePayload.ClearTestBundle();

    [Fact]
    public void BindKeepsNonRetailRomAsFeatureImage()
    {
        var rom = RomImage.FromBytes("/tmp/custom.gba", new byte[0x20000]);
        var binding = CPatchFeaturePayload.Bind(rom, repositoryRoot: null);
        Assert.Same(rom, binding.FeatureRom);
        Assert.False(binding.UsesPayload);
    }

    [Fact]
    public void BundleRoundTripsAndBindsRetailWithoutDiskDecompRom()
    {
        var baseromPath = FindUpwards("baserom.gba");
        if (baseromPath is null)
            return;

        const int offset = 0x100;
        var featureBytes = new byte[0x200];
        featureBytes[offset] = 1; // always_run
        var retail = RomImage.Open(baseromPath);
        var bundle = CPatchFeatureBundle.Create(retail.Bytes, featureBytes, offset, configCapacity: 0x39);
        var featureRom = RomImage.FromBytes("(test-features)", featureBytes);
        CPatchFeaturePayload.InstallTestBundle(bundle, featureRom);

        var binding = CPatchFeaturePayload.Bind(retail);
        Assert.True(binding.UsesPayload);
        Assert.True(binding.Config.HasRomBacking);
        Assert.Equal(offset, binding.Config.RomOffset);
        // Bundled decomp defaults are not pre-installed — offerings start vanilla.
        Assert.Equal(0, binding.Config.Get("always_run"));
        Assert.All(RuntimeConfigSchema.Fields, f =>
            Assert.False(RuntimeConfigEditing.IsInstalled(binding.Config, f.Id)));
        Assert.False(binding.Config.IsDirty);
        Assert.DoesNotContain("pmd_red", binding.Status, StringComparison.OrdinalIgnoreCase);
        Assert.DoesNotContain("`make`", binding.Status, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void BuildAppliesBundledFeaturesWhenBuildingFromRetailWorkflow()
    {
        const int offset = 0x100;
        var featureBytes = new byte[0x200];
        featureBytes[offset + 2] = 1;
        var bundle = CPatchFeatureBundle.Create(new byte[0x40], featureBytes, offset, 0x39);
        var host = RomImage.FromBytes("(test-features)", featureBytes);
        CPatchFeaturePayload.InstallTestBundle(bundle, host);

        var state = bundle.LoadConfig(host);
        RuntimeConfigEditing.Install(new ChangeService(), state, "always_run");

        var dir = Path.Combine(Path.GetTempPath(), $"cpatch-build-host-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            var baseromPath = FindUpwards("baserom.gba");
            RomImage retail;
            RomBuildReport report;
            var output = Path.Combine(dir, "out.gba");
            if (baseromPath is not null)
            {
                retail = RomImage.Open(baseromPath);
                report = RomBuilder.Build(
                    retail,
                    new SceneDatabase { Profile = RomProfile.Us10 },
                    ProjectDocument.Create(retail, RomProfile.Us10),
                    output,
                    runtimeConfig: state);
            }
            else
            {
                retail = RomImage.FromBytes(Path.Combine(dir, "baserom.gba"), new byte[0x400]);
                report = RomBuilder.Build(
                    retail,
                    new SceneDatabase { Profile = RomProfile.Us10 },
                    ProjectDocument.Create(retail, RomProfile.Us10),
                    output,
                    runtimeConfig: state,
                    cPatchHost: host);
            }

            Assert.True(report.Success, string.Join("; ", report.Errors));
            Assert.Contains(report.Changes, c => c.Contains("bundled", StringComparison.OrdinalIgnoreCase)
                || c.Contains("playable", StringComparison.OrdinalIgnoreCase));
            Assert.Equal(1, RomImage.Open(output).ReadByte(offset));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void BundleSerializeRoundTrip()
    {
        const int offset = 0x80;
        var feature = new byte[0x100];
        feature[offset] = 7;
        var bundle = CPatchFeatureBundle.Create(new byte[] { 1, 2, 3 }, feature, offset, 8);
        var bytes = bundle.WriteBytes();
        using var stream = new MemoryStream(bytes);
        var loaded = CPatchFeatureBundle.FromStream(stream, "(roundtrip)");
        Assert.Equal(offset, loaded.ConfigOffset);
        Assert.Equal(8, loaded.ConfigCapacity);
        Assert.Equal(feature, loaded.DecompressFeatureRom());
    }

    private static string? FindUpwards(string fileName)
    {
        foreach (var start in new[]
                 {
                     AppContext.BaseDirectory,
                     Directory.GetCurrentDirectory(),
                     "/home/username/Github/pmd-red",
                 })
        {
            var dir = new DirectoryInfo(start);
            while (dir is not null)
            {
                var candidate = Path.Combine(dir.FullName, fileName);
                if (File.Exists(candidate))
                    return candidate;
                dir = dir.Parent;
            }
        }

        return null;
    }
}
