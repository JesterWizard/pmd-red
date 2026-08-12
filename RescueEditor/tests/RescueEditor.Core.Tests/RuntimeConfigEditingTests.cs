using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class RuntimeConfigEditingTests
{
    [Fact]
    public void SetFieldIsUndoableAndMarksDirty()
    {
        var state = CreateState(alwaysRun: 0);
        var changes = new ChangeService();
        changes.Attach(ProjectDocument.Create(
            RomImage.FromBytes("/tmp/rtcfg-edit.gba", new byte[0x80]),
            RomProfile.Us10), new SceneDatabase { Profile = RomProfile.Us10 });

        RuntimeConfigEditing.SetField(changes, state, "always_run", 1);

        Assert.Equal(1, state.Get("always_run"));
        Assert.True(state.IsDirty);
        Assert.True(changes.IsDirty);

        changes.Undo();
        Assert.Equal(0, state.Get("always_run"));
        Assert.False(state.IsDirty);
    }

    [Fact]
    public void ResetToSourceRestoresOpenedRomSnapshot()
    {
        var state = CreateState(alwaysRun: 0);
        var changes = new ChangeService();
        RuntimeConfigEditing.SetField(changes, state, "always_run", 1);
        RuntimeConfigEditing.SetField(changes, state, "exp_multiplier", 4);
        Assert.True(state.IsDirty);

        RuntimeConfigEditing.ResetToSource(changes, state);

        Assert.Equal(0, state.Get("always_run"));
        Assert.Equal(1, state.Get("exp_multiplier"));
        Assert.False(state.IsDirty);
    }

    [Fact]
    public void WriteWorkingCopyAppliesRuntimeConfigBytes()
    {
        const int offset = 0x40;
        var bytes = new byte[0x80];
        bytes[offset + 2] = 1; // exp_multiplier
        var source = RomImage.FromBytes("/tmp/rtcfg-working.gba", bytes);
        var state = RuntimeConfigCodec.Read(source, offset);
        var changes = new ChangeService();
        RuntimeConfigEditing.SetField(changes, state, "always_run", 1);
        RuntimeConfigEditing.SetField(changes, state, "exp_multiplier", 4);

        var working = new WorkingRom(source);
        var report = working.Sync(new SceneDatabase { Profile = RomProfile.Us10 }, runtimeConfig: state);

        Assert.True(report.Success, string.Join("; ", report.Errors));
        Assert.Equal(1, working.View.ReadByte(offset));
        Assert.Equal(4, working.View.ReadByte(offset + 2));
        Assert.Equal(0, source.ReadByte(offset));
    }

    [Fact]
    public void BuildWritesRuntimeConfigOnCustomRomWithoutRetailProfile()
    {
        const int offset = 0x40;
        var dir = Path.Combine(Path.GetTempPath(), $"rtcfg-build-{Guid.NewGuid():N}");
        Directory.CreateDirectory(dir);
        try
        {
            var bytes = new byte[0x100];
            bytes[offset + 2] = 1;
            var romPath = Path.Combine(dir, "custom.gba");
            File.WriteAllBytes(romPath, bytes);
            var source = RomImage.Open(romPath);
            var state = RuntimeConfigCodec.Read(source, offset);
            var changes = new ChangeService();
            RuntimeConfigEditing.SetField(changes, state, "always_run", 1);

            var output = Path.Combine(dir, "out.gba");
            var project = ProjectDocument.Create(source, RomProfile.Us10);
            var report = RomBuilder.Build(
                source,
                new SceneDatabase { Profile = RomProfile.Us10 },
                project,
                output,
                runtimeConfig: state);

            Assert.True(report.Success, string.Join("; ", report.Errors));
            var rebuilt = RomImage.Open(output);
            Assert.Equal(1, rebuilt.ReadByte(offset));
            Assert.Equal(1, rebuilt.ReadByte(offset + 2));
        }
        finally
        {
            Directory.Delete(dir, recursive: true);
        }
    }

    private static RuntimeConfigState CreateState(byte alwaysRun)
    {
        var bytes = new byte[0x80];
        const int offset = 0x10;
        bytes[offset] = alwaysRun;
        bytes[offset + 2] = 1; // exp_multiplier default
        return RuntimeConfigCodec.Read(RomImage.FromBytes("/tmp/rtcfg-state.gba", bytes), offset);
    }
}
