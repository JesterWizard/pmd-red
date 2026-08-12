using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RuntimeConfigCodecTests
{
    [Fact]
    public void ParseMapSymbolReturnsFileOffset()
    {
        const string map = """
            .runtime_config
                            0x09791dec       0x38
             configs/runtime.o(.runtime_config)
                            0x09791dec                gRuntimeConfigRom
            """;
        var offset = RuntimeConfigCodec.TryParseMapSymbol(map, "gRuntimeConfigRom");
        Assert.Equal(0x01791DEC, offset);
    }

    [Fact]
    public void RoundTripReadWritePreservesAllFields()
    {
        var size = RuntimeConfigSchema.ByteLength;
        var bytes = new byte[0x200];
        const int offset = 0x40;
        for (var i = 0; i < size; i++)
            bytes[offset + i] = (byte)((i * 3) & 0xFF);
        bytes[offset + RuntimeConfigSchema.Find("exp_multiplier")!.Offset] = 2;
        bytes[offset + RuntimeConfigSchema.Find("bank_interest_percent")!.Offset] = 10;

        var rom = RomImage.FromBytes("/tmp/runtime-config-roundtrip.gba", bytes);
        var state = RuntimeConfigCodec.Read(rom, offset);
        Assert.Equal(2, state.Get("exp_multiplier"));
        Assert.Equal(10, state.Get("bank_interest_percent"));

        state.Set("always_run", 1);
        state.Set("exp_multiplier", 4);

        var mutable = MutableRom.From(rom);
        RuntimeConfigCodec.Write(mutable, state);
        var reread = RuntimeConfigCodec.Read(
            RomImage.FromBytes(rom.Path, mutable.Copy(0, mutable.Length)), offset);
        Assert.Equal(1, reread.Get("always_run"));
        Assert.Equal(4, reread.Get("exp_multiplier"));
        Assert.Equal(10, reread.Get("bank_interest_percent"));
    }

    [Fact]
    public void TryLoadUsesMapBesideRom()
    {
        var dir = Path.Combine(Path.GetTempPath(), $"rtcfg-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            const int offset = 0x100;
            var romBytes = new byte[0x200];
            for (var i = 0; i < RuntimeConfigSchema.ByteLength; i++)
                romBytes[offset + i] = (byte)(i == 2 ? 1 : 0);
            var romPath = Path.Combine(dir, "pmd_red.gba");
            File.WriteAllBytes(romPath, romBytes);
            File.WriteAllText(Path.Combine(dir, "pmd_red.map"), $"""
                .runtime_config
                                0x{RomImage.RomVirtualAddress + offset:x8}       0x39
                                0x{RomImage.RomVirtualAddress + offset:x8}                gRuntimeConfigRom
                """);

            var rom = RomImage.Open(romPath);
            var state = RuntimeConfigCodec.TryLoad(rom, dir);
            Assert.NotNull(state);
            Assert.Equal(offset, state!.RomOffset);
            Assert.Equal(1, state.Get("exp_multiplier"));
            Assert.True(state.IsAvailable);
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void TryLoadReturnsStandaloneWhenSectionMissing()
    {
        var rom = RomImage.FromBytes("/tmp/no-runtime-config.gba", new byte[0x100]);
        var state = RuntimeConfigCodec.TryLoad(rom, repositoryRoot: null);
        Assert.NotNull(state);
        Assert.True(state!.IsStandalone);
        Assert.False(state.HasRomBacking);
        Assert.False(string.IsNullOrWhiteSpace(state.StatusMessage));
    }

    [Fact]
    public void TryLoadBindsSmallerMapSectionWithReducedCapacity()
    {
        var dir = Path.Combine(Path.GetTempPath(), $"rtcfg-stale-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            const int offset = 0x100;
            var romBytes = new byte[0x200];
            romBytes[offset] = 1; // always_run already on in ROM
            var romPath = Path.Combine(dir, "pmd_red.gba");
            File.WriteAllBytes(romPath, romBytes);
            File.WriteAllText(Path.Combine(dir, "pmd_red.map"), $"""
                .runtime_config
                                0x{RomImage.RomVirtualAddress + offset:x8}       0x38
                                0x{RomImage.RomVirtualAddress + offset:x8}                gRuntimeConfigRom
                """);

            var state = RuntimeConfigCodec.TryLoad(RomImage.Open(romPath), dir);
            Assert.NotNull(state);
            Assert.False(state!.IsStandalone);
            Assert.True(state.HasRomBacking);
            Assert.Equal(offset, state.RomOffset);
            Assert.Equal(0x38, state.RomCapacity);
            Assert.Equal(1, state.Get("always_run"));
            Assert.True(state.IsFieldWritable("always_run"));
            Assert.False(state.IsFieldWritable("thought_bubbles")); // past capacity
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    [Fact]
    public void WriteUpdatesBytesAtBoundGRuntimeConfigRom()
    {
        var dir = Path.Combine(Path.GetTempPath(), $"rtcfg-write-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            const int offset = 0x100;
            var romBytes = new byte[0x200];
            var romPath = Path.Combine(dir, "pmd_red.gba");
            File.WriteAllBytes(romPath, romBytes);
            File.WriteAllText(Path.Combine(dir, "pmd_red.map"), $"""
                .runtime_config
                                0x{RomImage.RomVirtualAddress + offset:x8}       0x38
                                0x{RomImage.RomVirtualAddress + offset:x8}                gRuntimeConfigRom
                """);

            var source = RomImage.Open(romPath);
            var state = RuntimeConfigCodec.TryLoad(source, dir);
            var changes = new ChangeService();
            RuntimeConfigEditing.Install(changes, state, "always_run");
            RuntimeConfigEditing.Install(changes, state, "damage_preview");

            var output = Path.Combine(dir, "out.gba");
            var report = RomBuilder.Build(
                source,
                new SceneDatabase { Profile = RomProfile.Us10 },
                ProjectDocument.Create(source, RomProfile.Us10),
                output,
                runtimeConfig: state);

            Assert.True(report.Success, string.Join("; ", report.Errors.Concat(report.Warnings)));
            var rebuilt = RomImage.Open(output);
            Assert.Equal(1, rebuilt.ReadByte(offset)); // always_run
            Assert.Equal(1, rebuilt.ReadByte(offset + RuntimeConfigSchema.Find("damage_preview")!.Offset));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }
}
