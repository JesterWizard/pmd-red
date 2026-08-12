using System.IO.Compression;
using System.Reflection;
using System.Security.Cryptography;
using System.Text;

namespace RescueEditor.Core;

/// <summary>
/// Shipped C Patch feature image (decomp code) packaged with RescueTemple.
/// Laypeople only supply retail <c>baserom.gba</c>; this bundle is applied on Install/Build.
/// </summary>
public sealed class CPatchFeatureBundle
{
    public const string ResourceFileName = "CPatchFeaturePayload.rcp";
    public const string EmbeddedName = "RescueEditor.Core.CPatchFeaturePayload.rcp";
    private static readonly byte[] Magic = "RCP1"u8.ToArray();

    private readonly byte[] _compressedRom;

    private CPatchFeatureBundle(
        string source,
        string expectedBaseromSha1,
        int configOffset,
        int configCapacity,
        int uncompressedLength,
        byte[] compressedRom)
    {
        Source = source;
        ExpectedBaseromSha1 = expectedBaseromSha1;
        ConfigOffset = configOffset;
        ConfigCapacity = configCapacity;
        UncompressedLength = uncompressedLength;
        _compressedRom = compressedRom;
    }

    public string Source { get; }
    public string ExpectedBaseromSha1 { get; }
    public int ConfigOffset { get; }
    public int ConfigCapacity { get; }
    public int UncompressedLength { get; }

    public static CPatchFeatureBundle FromStream(Stream stream, string source)
    {
        ArgumentNullException.ThrowIfNull(stream);
        using var reader = new BinaryReader(stream, Encoding.UTF8, leaveOpen: true);
        var magic = reader.ReadBytes(4);
        if (magic.Length != 4 || !magic.AsSpan().SequenceEqual(Magic))
            throw new InvalidDataException($"Not a C Patch feature bundle ({source}).");

        var version = reader.ReadUInt32();
        if (version != 1)
            throw new InvalidDataException($"Unsupported C Patch bundle version {version} ({source}).");

        var shaBytes = reader.ReadBytes(20);
        if (shaBytes.Length != 20)
            throw new InvalidDataException($"Truncated baserom SHA-1 in bundle ({source}).");

        var configOffset = checked((int)reader.ReadUInt32());
        var configCapacity = checked((int)reader.ReadUInt32());
        var uncompressedLength = checked((int)reader.ReadUInt32());
        if (configOffset < 0 || configCapacity <= 0 || uncompressedLength <= 0)
            throw new InvalidDataException($"Invalid config metadata in bundle ({source}).");
        if (configOffset + configCapacity > uncompressedLength)
            throw new InvalidDataException($"Config region exceeds feature image in bundle ({source}).");

        var compressed = ReadRemaining(stream);
        if (compressed.Length == 0)
            throw new InvalidDataException($"Empty feature payload in bundle ({source}).");

        return new CPatchFeatureBundle(
            source,
            Convert.ToHexString(shaBytes).ToLowerInvariant(),
            configOffset,
            configCapacity,
            uncompressedLength,
            compressed);
    }

    public static CPatchFeatureBundle Create(
        ReadOnlySpan<byte> baserom,
        ReadOnlySpan<byte> featureRom,
        int configOffset,
        int configCapacity,
        string source = "(memory)")
    {
        if (baserom.IsEmpty)
            throw new ArgumentException("Baserom is empty.", nameof(baserom));
        if (featureRom.IsEmpty)
            throw new ArgumentException("Feature ROM is empty.", nameof(featureRom));
        if (configOffset < 0 || configCapacity <= 0 || configOffset + configCapacity > featureRom.Length)
            throw new ArgumentOutOfRangeException(nameof(configOffset), "Invalid config region.");

        using var zlib = new MemoryStream();
        using (var deflate = new ZLibStream(zlib, CompressionLevel.Optimal, leaveOpen: true))
            deflate.Write(featureRom);

        return new CPatchFeatureBundle(
            source,
            Convert.ToHexString(SHA1.HashData(baserom)).ToLowerInvariant(),
            configOffset,
            configCapacity,
            featureRom.Length,
            zlib.ToArray());
    }

    public byte[] WriteBytes()
    {
        using var stream = new MemoryStream();
        using (var writer = new BinaryWriter(stream, Encoding.UTF8, leaveOpen: true))
        {
            writer.Write(Magic);
            writer.Write((uint)1);
            writer.Write(Convert.FromHexString(ExpectedBaseromSha1));
            writer.Write((uint)ConfigOffset);
            writer.Write((uint)ConfigCapacity);
            writer.Write((uint)UncompressedLength);
            writer.Write(_compressedRom);
        }

        return stream.ToArray();
    }

    public byte[] DecompressFeatureRom()
    {
        using var input = new MemoryStream(_compressedRom, writable: false);
        using var zlib = new ZLibStream(input, CompressionMode.Decompress);
        var output = new byte[UncompressedLength];
        var read = 0;
        while (read < output.Length)
        {
            var n = zlib.Read(output, read, output.Length - read);
            if (n == 0)
                throw new InvalidDataException($"Feature bundle decompressed short ({Source}).");
            read += n;
        }

        return output;
    }

    /// <summary>
    /// Apply bundled decomp features for the caller's retail ROM.
    /// Returns a feature image ready for C Patch Install/Build.
    /// </summary>
    public RomImage ApplyToRetail(RomImage retail)
    {
        ArgumentNullException.ThrowIfNull(retail);
        if (!retail.Info.IsKnownRetailRom)
        {
            throw new InvalidOperationException(
                "C Patches apply bundled feature code to a known US 1.0 baserom.gba.");
        }

        var bytes = DecompressFeatureRom();
        return RomImage.FromBytes("(bundled-c-patch-features)", bytes);
    }

    public RuntimeConfigState LoadConfig(RomImage featureRom) =>
        RuntimeConfigCodec.Read(featureRom, ConfigOffset, ConfigCapacity);

    private static byte[] ReadRemaining(Stream stream)
    {
        using var buffer = new MemoryStream();
        stream.CopyTo(buffer);
        return buffer.ToArray();
    }
}

/// <summary>
/// Locates the C Patch feature bundle shipped with the editor (never requires a decomp repo).
/// </summary>
public static class CPatchFeaturePayload
{
    private static CPatchFeatureBundle? _testBundle;
    private static RomImage? _testFeatureRom;
    private static RomImage? _cachedFeatureRom;
    private static string? _cachedBundleSource;

    public static void InstallTestBundle(CPatchFeatureBundle bundle, RomImage? featureRom = null)
    {
        ArgumentNullException.ThrowIfNull(bundle);
        _testBundle = bundle;
        _testFeatureRom = featureRom;
        _cachedFeatureRom = null;
        _cachedBundleSource = null;
    }

    public static void ClearTestBundle()
    {
        _testBundle = null;
        _testFeatureRom = null;
        _cachedFeatureRom = null;
        _cachedBundleSource = null;
    }

    public static CPatchFeatureBundle? TryLoadBundle(string? editorDirectory = null)
    {
        if (_testBundle is not null)
            return _testBundle;

        var embedded = TryOpenEmbedded();
        if (embedded is not null)
            return embedded;

        foreach (var path in CandidateFiles(editorDirectory))
        {
            if (!File.Exists(path))
                continue;
            try
            {
                using var stream = File.OpenRead(path);
                return CPatchFeatureBundle.FromStream(stream, path);
            }
            catch (IOException)
            {
            }
            catch (InvalidDataException)
            {
            }
        }

        return null;
    }

    /// <summary>
    /// Bind C Patch state for the ROM the user opened.
    /// Retail → apply shipped feature bundle; decomp/custom → use that image when it has config.
    /// </summary>
    public static CPatchBinding Bind(
        RomImage opened,
        string? repositoryRoot = null,
        string? editorDirectory = null)
    {
        ArgumentNullException.ThrowIfNull(opened);

        if (!opened.Info.IsKnownRetailRom)
        {
            var local = RuntimeConfigCodec.TryLoad(opened, repositoryRoot);
            return new CPatchBinding(
                FeatureRom: opened,
                Config: local,
                UsesPayload: false,
                Status: local.HasRomBacking
                    ? $"C Patches ready on {Path.GetFileName(opened.Path)}"
                    : local.StatusMessage);
        }

        var bundle = TryLoadBundle(editorDirectory)
            ?? throw new InvalidOperationException(
                "This RescueTemple build is missing the C Patch feature bundle. " +
                "Reinstall or update RescueTemple — the editor ships the feature code; you only need baserom.gba.");

        var featureRom = MaterializeFeatureRom(opened, bundle);
        var config = bundle.LoadConfig(featureRom);
        // Decomp ROM defaults are Install targets — offerings start uninstalled for laypeople.
        config.RestoreValues(RuntimeConfigSchema.CreateVanillaBytes());
        config.CaptureSourceFromCurrent();
        return new CPatchBinding(
            FeatureRom: featureRom,
            Config: config,
            UsesPayload: true,
            Status: "C Patches will apply bundled decomp features to your retail baserom on Build");
    }

    /// <summary>Apply bundled features to retail and return the feature host for Build.</summary>
    public static RomImage? TryApplyToRetail(RomImage retail, string? editorDirectory = null)
    {
        ArgumentNullException.ThrowIfNull(retail);
        if (!retail.Info.IsKnownRetailRom)
            return null;
        var bundle = TryLoadBundle(editorDirectory);
        return bundle is null ? null : MaterializeFeatureRom(retail, bundle);
    }

    private static RomImage MaterializeFeatureRom(RomImage retail, CPatchFeatureBundle bundle)
    {
        if (_testFeatureRom is not null)
            return _testFeatureRom;

        if (_cachedFeatureRom is not null &&
            string.Equals(_cachedBundleSource, bundle.Source, StringComparison.Ordinal))
            return _cachedFeatureRom;

        _cachedFeatureRom = bundle.ApplyToRetail(retail);
        _cachedBundleSource = bundle.Source;
        return _cachedFeatureRom;
    }

    private static CPatchFeatureBundle? TryOpenEmbedded()
    {
        var assembly = typeof(CPatchFeaturePayload).Assembly;
        foreach (var name in assembly.GetManifestResourceNames())
        {
            if (!name.EndsWith(CPatchFeatureBundle.ResourceFileName, StringComparison.Ordinal) &&
                !string.Equals(name, CPatchFeatureBundle.EmbeddedName, StringComparison.Ordinal))
                continue;
            using var stream = assembly.GetManifestResourceStream(name);
            if (stream is null)
                continue;
            return CPatchFeatureBundle.FromStream(stream, name);
        }

        return null;
    }

    private static IEnumerable<string> CandidateFiles(string? editorDirectory)
    {
        if (!string.IsNullOrWhiteSpace(editorDirectory))
            yield return Path.Combine(editorDirectory, CPatchFeatureBundle.ResourceFileName);

        var asmDir = Path.GetDirectoryName(typeof(CPatchFeaturePayload).Assembly.Location);
        if (!string.IsNullOrEmpty(asmDir))
            yield return Path.Combine(asmDir, CPatchFeatureBundle.ResourceFileName);

        yield return Path.Combine(AppContext.BaseDirectory, CPatchFeatureBundle.ResourceFileName);
    }
}

public sealed record CPatchBinding(
    RomImage FeatureRom,
    RuntimeConfigState Config,
    bool UsesPayload,
    string Status);

/// <summary>Obsolete name — use <see cref="CPatchFeaturePayload"/>.</summary>
public static class DecompRomLocator
{
    public static (RomImage Host, string Status, bool RedirectedFromRetail) ResolveCPatchHost(
        RomImage opened,
        string? repositoryRoot = null)
    {
        var binding = CPatchFeaturePayload.Bind(opened, repositoryRoot);
        return (binding.FeatureRom, binding.Status, binding.UsesPayload);
    }
}
