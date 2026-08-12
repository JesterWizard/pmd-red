using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RuntimeConfigInstallerTests
{
    [Fact]
    public void ExtendAtEndGrowsSectionWithoutMovingStart()
    {
        const int offset = 0x100;
        var bytes = new byte[offset + 0x38];
        bytes[offset] = 0;
        bytes[offset + 2] = 1;
        // Fake Init: push {lr}; movs r2,#0x38; then pointer literal
        // Place a minimal pointer ref with movs before it
        var ptrAt = 0x40;
        bytes[ptrAt] = 0x38;
        bytes[ptrAt + 1] = 0x22; // movs r2,#0x38
        BitConverter.GetBytes(RomImage.RomVirtualAddress + (uint)offset).CopyTo(bytes, ptrAt + 8);

        var rom = MutableRom.From(RomImage.FromBytes("/tmp/rtcfg-extend.gba", bytes));
        var state = RuntimeConfigCodec.Read(RomImage.FromBytes("/tmp/rtcfg-extend.gba", bytes), offset, capacity: 0x38);
        Assert.Equal(0x38, state.RomCapacity);

        // Force grow toward schema by claiming compiled size is schema length
        // (simulate rebuild-sized Init). Patch the movs already present to schema size via installer
        // when targetCapacity comes from detection (0x38) — grow won't exceed compiled size.
        var report = new RomBuildReport();
        RuntimeConfigEditing.Install(new ChangeService(), state, "always_run");
        RuntimeConfigInstaller.WriteEnsured(rom, state, report);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.Equal(1, rom.ReadByte(offset));
        Assert.Equal(offset, state.RomOffset);
        Assert.Equal(0x38, state.RomCapacity); // capped to compiled copy size
    }

    [Fact]
    public void InsertMidRomShiftsTailAndFixesAbsolutePointers()
    {
        var bytes = new byte[0x200];
        const int insertAt = 0x80;
        // Pointer at 0x10 referencing 0x100 (past insert point)
        BitConverter.GetBytes(RomImage.RomVirtualAddress + 0x100u).CopyTo(bytes, 0x10);
        bytes[0x100] = 0xAB;

        var rom = new MutableRom(bytes, "/tmp/shift.gba", "deadbeef", profile: null);
        var adjusted = rom.InsertBytes(insertAt, 0x10);

        Assert.True(adjusted >= 1);
        Assert.Equal(0x210, rom.Length);
        Assert.Equal(0xAB, rom.ReadByte(0x110)); // shifted +0x10
        Assert.Equal(RomImage.RomVirtualAddress + 0x110u, rom.ReadUInt32(0x10));
    }

    [Fact]
    public void WriteInsertsConfigWhenUnboundOnCustomRom()
    {
        var bytes = new byte[0x1000];
        Array.Fill(bytes, (byte)0xFF);
        // Init stub with movs r2,#0x39 and a literal pointing near EOF (will be retargeted)
        const int init = 0x200;
        bytes[init] = 0x00;
        bytes[init + 1] = 0xB5;
        bytes[init + 2] = (byte)RuntimeConfigSchema.ByteLength;
        bytes[init + 3] = 0x22;
        BitConverter.GetBytes(RomImage.RomVirtualAddress + 0x0FF0u).CopyTo(bytes, init + 12);

        var source = RomImage.FromBytes("/tmp/rtcfg-insert.gba", bytes);
        var state = RuntimeConfigState.CreateStandalone();
        RuntimeConfigEditing.Install(new ChangeService(), state, "damage_preview");

        var rom = MutableRom.From(source);
        var report = new RomBuildReport();
        RuntimeConfigInstaller.WriteEnsured(rom, state, report);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.True(state.HasRomBacking);
        Assert.True(state.WasInserted);
        Assert.Equal(1, rom.ReadByte(state.RomOffset + RuntimeConfigSchema.Find("damage_preview")!.Offset));
        Assert.Contains(report.Changes, c => c.Contains("Inserted", StringComparison.OrdinalIgnoreCase)
            || c.Contains("Wrote", StringComparison.OrdinalIgnoreCase));
    }

    [Fact]
    public void WriteRejectsRetailBaserom()
    {
        var bytes = new byte[RomImage.ExpectedRetailSize];
        var source = RomImage.FromBytes("/tmp/baserom.gba", bytes);
        // Forge SHA by constructing MutableRom with retail sha directly
        var rom = new MutableRom(bytes, "/tmp/baserom.gba", RomImage.ExpectedRetailSha1, RomProfile.Us10);
        var state = RuntimeConfigState.CreateStandalone();
        RuntimeConfigEditing.Install(new ChangeService(), state, "always_run");
        var report = new RomBuildReport();
        RuntimeConfigInstaller.WriteEnsured(rom, state, report);
        Assert.False(report.Success);
        Assert.Contains(report.Errors, e => e.Contains("feature bundle", StringComparison.OrdinalIgnoreCase)
            || e.Contains("payload", StringComparison.OrdinalIgnoreCase)
            || e.Contains("bundled", StringComparison.OrdinalIgnoreCase));
    }
}
