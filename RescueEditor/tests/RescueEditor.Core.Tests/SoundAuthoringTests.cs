using System.Buffers.Binary;
using RescueEditor.Core;
using Xunit;

namespace RescueEditor.Core.Tests;

public sealed class SoundAuthoringTests
{
    [Fact]
    public void Validate_RejectsMoreThanTwoChannels()
    {
        var wav = PcmWav(rate: 8000, samples: [0, 1000, 0, -1000], channels: 3);
        var error = SoundAuthoring.Validate(wav, "tone.wav");
        Assert.NotNull(error);
        Assert.Contains("channel", error, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void EncodeWav_MixesStereoToSignedPcm8WaveData()
    {
        // Left = +32767, Right = -32767 → mix ≈ 0.
        var wav = PcmWav(rate: 8000, samples: [short.MaxValue, short.MinValue], channels: 2);
        var encoded = SoundAuthoring.Encode(wav, "beep.wav");
        Assert.Equal(SoundImportKind.WaveData, encoded.Kind);
        Assert.Equal(1, encoded.TrackCount);
        Assert.Equal(8000, encoded.SampleRate);
        Assert.Equal(1, encoded.SampleCount);
        Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(encoded.Payload));
        var freq = BinaryPrimitives.ReadUInt32LittleEndian(encoded.Payload.AsSpan(4));
        Assert.Equal((uint)(8000 << 10), freq);
        var size = BinaryPrimitives.ReadUInt32LittleEndian(encoded.Payload.AsSpan(12));
        Assert.Equal(1u, size);
        Assert.InRange(unchecked((sbyte)encoded.Payload[16]), -2, 2);
        Assert.True(encoded.PreviewWav.Length > 44);
    }

    [Fact]
    public void EncodeAiff_WritesWaveDataFromSignedPcm16()
    {
        var aiff = PcmAiff(rate: 11025, samples: [16_000, -16_000, 0]);
        var encoded = SoundAuthoring.Encode(aiff, "click.aiff");
        Assert.Equal(11025, encoded.SampleRate);
        Assert.Equal(3, encoded.SampleCount);
        Assert.True(unchecked((sbyte)encoded.Payload[16]) > 0);
        Assert.True(unchecked((sbyte)encoded.Payload[17]) < 0);
    }

    [Fact]
    public void Encode_WrapsPcmAsOneTrackDirectSoundSong()
    {
        var wav = PcmWav(rate: 4000, samples: [2000, -2000, 4000, -4000]);
        var encoded = SoundAuthoring.EncodeSong(wav, "fanfare.wav");
        Assert.Equal(SoundImportKind.Song, encoded.Kind);
        Assert.Equal(1, encoded.TrackCount);
        Assert.Equal(1, encoded.Payload[0]); // track count
        Assert.True(encoded.PointerFields.Length >= 3);
        foreach (var field in encoded.PointerFields)
        {
            var rel = BinaryPrimitives.ReadUInt32LittleEndian(encoded.Payload.AsSpan(field));
            Assert.True(rel < (uint)encoded.Payload.Length);
        }
    }

    [Fact]
    public void TryWriteWave_FitsExistingSlotWithoutRelocating()
    {
        var wav = PcmWav(rate: 2000, samples: [100, -100]);
        var encoded = SoundAuthoring.Encode(wav, "slot.wav");
        var rom = MutableRom.From(RomImage.FromBytes("/tmp/wave-slot.gba", new byte[0x200]));
        var asset = WaveAsset(offset: 0x40, size: 0x80);
        var dirty = new List<RomSpan>();
        var error = SoundAuthoring.TryWrite(rom, asset, encoded, dirty);
        Assert.Null(error);
        Assert.Contains(dirty, span => span.Offset == 0x40);
        Assert.DoesNotContain(dirty, span => span.Offset != 0x40);
        Assert.Equal(encoded.Payload, rom.Copy(0x40, encoded.Payload.Length));
    }

    [Fact]
    public void TryWriteWave_RelocatesWhenLargerThanSlotAndPatchesPointers()
    {
        var samples = new short[64];
        for (var i = 0; i < samples.Length; i++)
            samples[i] = (short)(i * 400);
        var encoded = SoundAuthoring.Encode(PcmWav(8000, samples), "big.wav");
        var bytes = new byte[0x400];
        bytes.AsSpan().Fill(0xFF);
        var oldOffset = 0x20;
        BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(0x10), RomImage.RomVirtualAddress + (uint)oldOffset);
        var rom = MutableRom.From(RomImage.FromBytes("/tmp/wave-reloc.gba", bytes));
        var asset = WaveAsset(offset: oldOffset, size: 20);
        var dirty = new List<RomSpan>();
        var error = SoundAuthoring.TryWrite(rom, asset, encoded, dirty);
        Assert.Null(error);
        var dest = dirty.First(span => span.Length == encoded.Payload.Length).Offset;
        Assert.NotEqual(oldOffset, dest);
        Assert.Equal(RomImage.RomVirtualAddress + (uint)dest, rom.ReadUInt32(0x10));
        Assert.Equal(encoded.Payload, rom.Copy(dest, encoded.Payload.Length));
    }

    [Fact]
    public void TryWriteSong_PatchesSongTableAndRoundTripsHeader()
    {
        var wav = PcmWav(rate: 8000, samples: [8000, -8000, 4000, -4000, 0, 0]);
        var encoded = SoundAuthoring.EncodeSong(wav, "sfx.wav");
        var table = SoundSequenceParser.RetailSongTableOffset;
        const int songId = 301;
        var entry = table + songId * 8;
        var bytes = new byte[entry + 8];
        bytes.AsSpan().Fill(0xFF);
        BinaryPrimitives.WriteUInt32LittleEndian(bytes.AsSpan(entry), RomImage.RomVirtualAddress + 0x200u);
        BinaryPrimitives.WriteUInt16LittleEndian(bytes.AsSpan(entry + 4), 0);
        BinaryPrimitives.WriteUInt16LittleEndian(bytes.AsSpan(entry + 6), 0);

        var rom = MutableRom.From(RomImage.FromBytes("/tmp/song-write.gba", bytes));
        var asset = SongAsset(songId, player: 2);
        var dirty = new List<RomSpan>();
        var error = SoundAuthoring.TryWrite(rom, asset, encoded, dirty);
        Assert.Null(error);

        var view = RomImage.FromBytes(rom.SourcePath, rom.Copy(0, rom.Length));
        Assert.True(SoundSequenceParser.TryGetSongHeaderOffset(view, songId, out var header));
        Assert.Equal(1, view.ReadByte(header));
        var parsed = SoundSequenceParser.ParseFromRom(view, songId, "sfx");
        Assert.Equal(1, parsed.TrackCount);
        Assert.Null(parsed.Diagnostic);
    }

    [Fact]
    public void TryWriteSong_RejectsTrackCountAbovePlayerLimit()
    {
        var payload = new byte[16];
        payload[0] = 4; // four tracks; SFX player 2 allows 1
        var encoded = new EncodedSound(
            Kind: SoundImportKind.Song,
            Payload: payload,
            PointerFields: [],
            PreviewWav: PcmWav(8000, [0]),
            TrackCount: 4,
            SampleRate: 8000,
            SampleCount: 1);
        var rom = MutableRom.From(RomImage.FromBytes("/tmp/song-tracks.gba", new byte[0x100]));
        var error = SoundAuthoring.TryWrite(rom, SongAsset(301, player: 2), encoded, new List<RomSpan>());
        Assert.NotNull(error);
        Assert.Contains("track", error, StringComparison.OrdinalIgnoreCase);
    }

    [Fact]
    public void TryWrite_RoundTripsThroughWorkingRomAndModPackageOverlay()
    {
        var wav = PcmWav(rate: 4000, samples: [12_000, -12_000, 8000]);
        var encoded = SoundAuthoring.Encode(wav, "pack.wav");
        var sourceBytes = new byte[0x300];
        sourceBytes.AsSpan().Fill(0xAA);
        var source = RomImage.FromBytes("/tmp/sound-mod.gba", sourceBytes);
        var working = new WorkingRom(source);
        var buffer = working.BeginMutate();
        var dirty = new List<RomSpan>();
        var error = SoundAuthoring.TryWrite(buffer, WaveAsset(0x40, 0x100), encoded, dirty);
        Assert.Null(error);
        working.CommitDirty(buffer, dirty);

        var written = working.View.Copy(0x40, encoded.Payload.Length);
        Assert.Equal(encoded.Payload, written);

        var package = ModPackage.Collect(working, new ProjectDocument { Name = "sfx" });
        Assert.Contains(package.Overlays, overlay =>
            overlay.Offset <= 0x40 && overlay.Offset + overlay.Size >= 0x40 + encoded.Payload.Length);
    }

    [Fact]
    public void Encode_ReadsRelocatableM4ABlob()
    {
        var inner = SoundAuthoring.EncodeSong(PcmWav(8000, [1000, -1000, 2000]), "inner.wav");
        var again = SoundAuthoring.Encode(inner.Payload, "seq.bin");
        Assert.Equal(SoundImportKind.Song, again.Kind);
        Assert.Equal(inner.TrackCount, again.TrackCount);
        Assert.Equal(inner.Payload, again.Payload);
    }

    private static AssetDescriptor WaveAsset(int offset, int size) => new()
    {
        Id = "sound-wave:wave_test",
        Name = "wave_test",
        Category = AssetCategory.SoundEffects,
        Kind = AssetKind.SoundWave,
        Offset = offset,
        Size = size,
        Format = "GBA DirectSound / PCM8",
        Metadata = new Dictionary<string, string> { ["waveKind"] = "directsound" },
    };

    private static AssetDescriptor SongAsset(int songId, int player) => new()
    {
        Id = $"sound-song:seq_{songId}",
        Name = $"seq_{songId}",
        Category = AssetCategory.SoundEffects,
        Kind = AssetKind.SoundSong,
        Offset = -1,
        Size = 0,
        Format = "M4A sound effect",
        Metadata = new Dictionary<string, string>
        {
            ["songId"] = songId.ToString(),
            ["player"] = player.ToString(),
        },
    };

    private static byte[] PcmWav(int rate, short[] samples, int channels = 1)
    {
        var dataBytes = samples.Length * 2;
        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        writer.Write("RIFF"u8.ToArray());
        writer.Write(36 + dataBytes);
        writer.Write("WAVE"u8.ToArray());
        writer.Write("fmt "u8.ToArray());
        writer.Write(16);
        writer.Write((short)1);
        writer.Write((short)channels);
        writer.Write(rate);
        writer.Write(rate * channels * 2);
        writer.Write((short)(channels * 2));
        writer.Write((short)16);
        writer.Write("data"u8.ToArray());
        writer.Write(dataBytes);
        foreach (var sample in samples)
            writer.Write(sample);
        return output.ToArray();
    }

    private static byte[] PcmAiff(int rate, short[] samples)
    {
        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        writer.Write("FORM"u8.ToArray());
        writer.Write(Swap32(4 + 8 + 18 + 8 + 8 + samples.Length * 2));
        writer.Write("AIFF"u8.ToArray());
        writer.Write("COMM"u8.ToArray());
        writer.Write(Swap32(18));
        writer.Write(Swap16(1));
        writer.Write(Swap32(samples.Length));
        writer.Write(Swap16(16));
        writer.Write(ToIeee80(rate));
        writer.Write("SSND"u8.ToArray());
        writer.Write(Swap32(8 + samples.Length * 2));
        writer.Write(Swap32(0));
        writer.Write(Swap32(0));
        foreach (var sample in samples)
            writer.Write(Swap16(sample));
        return output.ToArray();
    }

    private static int Swap32(int value) =>
        BinaryPrimitives.ReverseEndianness(value);

    private static short Swap16(int value) =>
        BinaryPrimitives.ReverseEndianness((short)value);

    private static byte[] ToIeee80(int rate)
    {
        // Positive integer sample rate as an 80-bit IEEE-754 extended value (big-endian).
        var bytes = new byte[10];
        var exponent = 16383 + 63;
        ulong mantissa = (uint)rate;
        while ((mantissa & (1UL << 63)) == 0)
        {
            mantissa <<= 1;
            exponent--;
        }

        bytes[0] = (byte)(exponent >> 8);
        bytes[1] = (byte)exponent;
        for (var i = 0; i < 8; i++)
            bytes[9 - i] = (byte)(mantissa >> (i * 8));
        return bytes;
    }
}
