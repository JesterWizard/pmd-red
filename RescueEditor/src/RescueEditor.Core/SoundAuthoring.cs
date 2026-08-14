using System.Buffers.Binary;
using System.Globalization;
using System.Text;

namespace RescueEditor.Core;

public enum SoundImportKind
{
    WaveData,
    Song,
}

public readonly record struct EncodedSound(
    SoundImportKind Kind,
    byte[] Payload,
    int[] PointerFields,
    byte[] PreviewWav,
    int TrackCount,
    int SampleRate,
    int SampleCount);

/// <summary>
/// Import WAV/AIFF (or a relocatable M4A song blob) onto a Music / SFX catalog slot.
/// </summary>
public static class SoundAuthoring
{
    public const int MinSampleRate = 1_000;
    public const int MaxSampleRate = 48_000;
    public const int MaxSampleCount = 2 * 1024 * 1024;
    public const int EncodeTempoBpm = 150;
    public const int ToneDataSize = 12;

    public static string RestrictionsText =>
        "WAV/AIFF (mono or stereo PCM) or a relocatable M4A sequence. " +
        "Stereo is mixed down. Larger samples relocate into free space.";

    public static string? Validate(ReadOnlySpan<byte> fileBytes, string fileName)
    {
        try
        {
            Encode(fileBytes, fileName);
            return null;
        }
        catch (Exception exception) when (exception is InvalidDataException or ArgumentException)
        {
            return exception.Message;
        }
    }

    public static EncodedSound Encode(ReadOnlySpan<byte> fileBytes, string fileName)
    {
        if (LooksLikeWaveFile(fileBytes) || LooksLikeAiffFile(fileBytes))
            return EncodePcm(fileBytes, fileName, wrapAsSong: false);
        if (TryParseRelocatableSong(fileBytes, out var song))
            return song;
        if (LooksLikeWaveData(fileBytes))
            return FromWaveData(fileBytes.ToArray());
        throw new InvalidDataException(
            "Expected a WAV/AIFF PCM file or a relocatable M4A/Sappy sequence blob.");
    }

    public static EncodedSound EncodeSong(ReadOnlySpan<byte> fileBytes, string fileName)
    {
        if (LooksLikeWaveFile(fileBytes) || LooksLikeAiffFile(fileBytes))
            return EncodePcm(fileBytes, fileName, wrapAsSong: true);
        if (TryParseRelocatableSong(fileBytes, out var song))
            return song;
        throw new InvalidDataException(
            "Expected a WAV/AIFF PCM file or a relocatable M4A/Sappy sequence blob.");
    }

    public static string? TryWrite(
        MutableRom rom,
        AssetDescriptor asset,
        EncodedSound encoded,
        ICollection<RomSpan>? dirty = null)
    {
        if (asset.Kind == AssetKind.SoundWave)
            return TryWriteWave(rom, asset, encoded, dirty);
        if (asset.Kind == AssetKind.SoundSong)
            return TryWriteSong(rom, asset, encoded, dirty);
        return "This asset is not a Music or Sound Effects catalog entry.";
    }

    private static string? TryWriteWave(
        MutableRom rom,
        AssetDescriptor asset,
        EncodedSound encoded,
        ICollection<RomSpan>? dirty)
    {
        if (encoded.Kind != SoundImportKind.WaveData)
            return "Import a WAV/AIFF sample to replace a DirectSound wave.";
        if (!asset.HasRomRange)
            return "Could not find this wave in the ROM, so it cannot be replaced.";
        if (asset.Metadata.TryGetValue("waveKind", out var kind) &&
            string.Equals(kind, "gb", StringComparison.OrdinalIgnoreCase))
        {
            return "GB wave patterns cannot be replaced from PCM. Pick a DirectSound wave or a sequence.";
        }

        var payload = encoded.Payload;
        var dest = asset.Offset;
        var inPlace = asset.HasRomRange && payload.Length <= asset.Size && rom.IsRangeValid(dest, payload.Length);
        if (!inPlace)
        {
            try
            {
                dest = Allocate(rom, payload.Length);
            }
            catch (InvalidOperationException exception)
            {
                return exception.Message;
            }
        }

        if (!rom.IsRangeValid(dest, payload.Length))
            return "Wave destination is outside the ROM.";

        if (inPlace && payload.Length < asset.Size)
            rom.Fill(dest, asset.Size, 0);
        rom.WriteBytes(dest, payload);
        dirty?.Add(new RomSpan(dest, inPlace ? Math.Max(payload.Length, asset.Size) : payload.Length));

        if (!inPlace && asset.HasRomRange && dest != asset.Offset)
            RetargetPointers(rom, asset.Offset, dest, dirty);

        if (!string.IsNullOrWhiteSpace(asset.SourcePath))
            SoundWaveCodec.RememberResolved(rom.SourcePath, asset.SourcePath, dest, payload.Length, encoded.SampleRate);

        return null;
    }

    private static string? TryWriteSong(
        MutableRom rom,
        AssetDescriptor asset,
        EncodedSound encoded,
        ICollection<RomSpan>? dirty)
    {
        if (encoded.Kind != SoundImportKind.Song)
            return "Import WAV/AIFF or a relocatable M4A sequence to replace this song.";
        if (!asset.Metadata.TryGetValue("songId", out var songIdText) ||
            !int.TryParse(songIdText, NumberStyles.Integer, CultureInfo.InvariantCulture, out var songId) ||
            songId < 0 || songId >= SoundSequenceParser.MaxSongTableEntries)
        {
            return "This catalog entry has no song table id.";
        }

        var player = 0;
        if (asset.Metadata.TryGetValue("player", out var playerText))
            _ = int.TryParse(playerText, NumberStyles.Integer, CultureInfo.InvariantCulture, out player);
        var maxTracks = SoundIndexer.MaxTracksForPlayer(player);
        if (encoded.TrackCount > maxTracks)
        {
            return $"This player allows {maxTracks} M4A track(s); the import has {encoded.TrackCount}.";
        }

        var table = SoundSequenceParser.RetailSongTableOffset;
        var entry = table + songId * 8;
        if (!rom.IsRangeValid(entry, 8))
            return "Song table is outside this ROM.";

        int dest;
        try
        {
            dest = Allocate(rom, encoded.Payload.Length);
        }
        catch (InvalidOperationException exception)
        {
            return exception.Message;
        }

        var payload = RebasePointers(encoded.Payload, encoded.PointerFields, dest);
        rom.WriteBytes(dest, payload);
        rom.WritePointer(entry, dest);
        dirty?.Add(new RomSpan(dest, payload.Length));
        dirty?.Add(new RomSpan(entry, 4));
        return null;
    }

    private static int Allocate(MutableRom rom, int size)
    {
        try
        {
            return FreeSpaceAllocator.FindFreeSpace(rom, size, alignment: 4);
        }
        catch (InvalidOperationException)
        {
            rom.ExtendTo(rom.Length + Math.Max(0x20000, size + 0x1000));
            return FreeSpaceAllocator.FindFreeSpace(rom, size, alignment: 4);
        }
    }

    private static void RetargetPointers(MutableRom rom, int oldOffset, int newOffset, ICollection<RomSpan>? dirty)
    {
        var oldPointer = RomImage.RomVirtualAddress + (uint)oldOffset;
        var newPointer = RomImage.RomVirtualAddress + (uint)newOffset;
        var limit = rom.Length - 3;
        for (var i = 0; i <= limit; i += 4)
        {
            if (rom.ReadUInt32(i) != oldPointer)
                continue;
            rom.WriteUInt32(i, newPointer);
            dirty?.Add(new RomSpan(i, 4));
        }
    }

    private static byte[] RebasePointers(byte[] payload, int[] pointerFields, int dest)
    {
        var copy = payload.ToArray();
        foreach (var field in pointerFields)
        {
            if (field < 0 || field + 4 > copy.Length)
                continue;
            var relative = BinaryPrimitives.ReadUInt32LittleEndian(copy.AsSpan(field));
            if (relative >= (uint)copy.Length)
                continue;
            BinaryPrimitives.WriteUInt32LittleEndian(
                copy.AsSpan(field),
                RomImage.RomVirtualAddress + (uint)dest + relative);
        }

        return copy;
    }

    private static EncodedSound EncodePcm(ReadOnlySpan<byte> fileBytes, string fileName, bool wrapAsSong)
    {
        var pcm = DecodePcm(fileBytes, fileName);
        if (pcm.Channels < 1)
            throw new InvalidDataException("This audio file has no channels.");
        if (pcm.Channels > 2)
            throw new InvalidDataException($"GBA DirectSound is mono (got {pcm.Channels} channels).");
        if (pcm.SampleRate < MinSampleRate || pcm.SampleRate > MaxSampleRate)
        {
            throw new InvalidDataException(
                $"Sample rate must be {MinSampleRate:N0}–{MaxSampleRate:N0} Hz (got {pcm.SampleRate:N0}).");
        }

        var mono = MixToMono(pcm.Samples, pcm.Channels);
        if (mono.Length == 0)
            throw new InvalidDataException("This audio file has no samples.");
        if (mono.Length > MaxSampleCount)
        {
            throw new InvalidDataException(
                $"Sample is {mono.Length:N0} frames; the limit is {MaxSampleCount:N0}.");
        }

        var pcm8 = ToSignedPcm8(mono);
        var wave = PackWaveData(pcm.SampleRate, pcm8);
        var preview = SoundWaveCodec.ToWave(wave);
        if (!wrapAsSong)
        {
            return new EncodedSound(
                SoundImportKind.WaveData, wave, [], preview, 1, pcm.SampleRate, pcm8.Length);
        }

        return WrapWaveAsSong(wave, preview, pcm.SampleRate, pcm8.Length);
    }

    private static EncodedSound WrapWaveAsSong(byte[] wave, byte[] preview, int sampleRate, int sampleCount)
    {
        var track = new List<byte>
        {
            0xBC, 0x00, // KEYSH 0
            0xBB, EncodeTempoBpm / 2, // TEMPO (engine doubles this)
            0xBD, 0x00, // VOICE 0
            0xBE, 0x7F, // VOL
            0xBF, 0x40, // PAN center
            0xCF, 60, 0x7F, // TIE C4
        };
        var ticks = Math.Max(2, (int)Math.Round(sampleCount * (double)EncodeTempoBpm * SoundSequenceParser.TicksPerBeat
            / (sampleRate * 60.0)));
        SoundSequenceParser.AppendWaits(track, ticks);
        track.Add(0xCE); // EOT
        track.Add(0xB1); // FINE

        var headerSize = 8 + 4; // header + one track pointer
        var toneOffset = Align4(headerSize);
        var trackOffset = Align4(toneOffset + ToneDataSize);
        var waveOffset = Align4(trackOffset + track.Count);
        var payload = new byte[Align4(waveOffset + wave.Length)];

        payload[0] = 1;
        payload[1] = 0;
        payload[2] = 0;
        payload[3] = 0;
        WriteU32(payload, 4, (uint)toneOffset);
        WriteU32(payload, 8, (uint)trackOffset);

        payload[toneOffset] = 0x08; // DirectSound + FIX
        payload[toneOffset + 1] = 60;
        WriteU32(payload, toneOffset + 4, (uint)waveOffset);
        payload[toneOffset + 8] = 255;
        payload[toneOffset + 9] = 0;
        payload[toneOffset + 10] = 255;
        payload[toneOffset + 11] = 0;

        track.CopyTo(payload, trackOffset);
        wave.CopyTo(payload, waveOffset);

        return new EncodedSound(
            SoundImportKind.Song,
            payload,
            [4, 8, toneOffset + 4],
            preview,
            TrackCount: 1,
            sampleRate,
            sampleCount);
    }

    private static bool TryParseRelocatableSong(ReadOnlySpan<byte> bytes, out EncodedSound encoded)
    {
        encoded = default;
        if (bytes.Length < 12)
            return false;
        var trackCount = bytes[0];
        if (trackCount is 0 or > 16)
            return false;
        var headerSize = 8 + trackCount * 4;
        if (bytes.Length < headerSize)
            return false;

        var pointers = new List<int> { 4 };
        var toneRel = BinaryPrimitives.ReadUInt32LittleEndian(bytes[4..]);
        if (toneRel >= (uint)bytes.Length)
            return false;
        for (var i = 0; i < trackCount; i++)
        {
            var field = 8 + i * 4;
            var rel = BinaryPrimitives.ReadUInt32LittleEndian(bytes[field..]);
            if (rel >= (uint)bytes.Length)
                return false;
            pointers.Add(field);
        }

        var toneType = bytes[(int)toneRel];
        if ((toneType & 0xC0) != 0)
            return false;
        var wavField = (int)toneRel + 4;
        if (wavField + 4 <= bytes.Length)
        {
            var wavRel = BinaryPrimitives.ReadUInt32LittleEndian(bytes[wavField..]);
            if (wavRel < (uint)bytes.Length)
                pointers.Add(wavField);
        }

        var payload = bytes.ToArray();
        byte[] preview = [];
        var sampleRate = 0;
        var sampleCount = 0;
        if (wavField + 4 <= bytes.Length)
        {
            var wavRel = (int)BinaryPrimitives.ReadUInt32LittleEndian(bytes[wavField..]);
            if (wavRel >= 0 && wavRel + 16 <= bytes.Length)
            {
                try
                {
                    preview = SoundWaveCodec.ToWave(bytes[wavRel..]);
                    sampleRate = Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(bytes[(wavRel + 4)..]) >> 10));
                    sampleCount = (int)BinaryPrimitives.ReadUInt32LittleEndian(bytes[(wavRel + 12)..]);
                }
                catch (InvalidDataException)
                {
                    preview = [];
                }
            }
        }

        encoded = new EncodedSound(
            SoundImportKind.Song, payload, pointers.ToArray(), preview, trackCount, sampleRate, sampleCount);
        return true;
    }

    private static EncodedSound FromWaveData(byte[] wave)
    {
        var sampleRate = Math.Max(1, (int)(BinaryPrimitives.ReadUInt32LittleEndian(wave.AsSpan(4)) >> 10));
        var sampleCount = (int)BinaryPrimitives.ReadUInt32LittleEndian(wave.AsSpan(12));
        return new EncodedSound(
            SoundImportKind.WaveData, wave, [], SoundWaveCodec.ToWave(wave), 1, sampleRate, sampleCount);
    }

    private static bool LooksLikeWaveFile(ReadOnlySpan<byte> bytes) =>
        bytes.Length >= 12 && bytes[..4].SequenceEqual("RIFF"u8) && bytes.Slice(8, 4).SequenceEqual("WAVE"u8);

    private static bool LooksLikeAiffFile(ReadOnlySpan<byte> bytes) =>
        bytes.Length >= 12 && bytes[..4].SequenceEqual("FORM"u8) &&
        (bytes.Slice(8, 4).SequenceEqual("AIFF"u8) || bytes.Slice(8, 4).SequenceEqual("AIFC"u8));

    private static bool LooksLikeWaveData(ReadOnlySpan<byte> bytes)
    {
        if (bytes.Length < 16)
            return false;
        var type = BinaryPrimitives.ReadUInt16LittleEndian(bytes);
        if (type != 0)
            return false;
        var freq = BinaryPrimitives.ReadUInt32LittleEndian(bytes[4..]);
        var size = BinaryPrimitives.ReadUInt32LittleEndian(bytes[12..]);
        var rate = freq >> 10;
        return rate is >= MinSampleRate and <= MaxSampleRate &&
               size > 0 && size <= MaxSampleCount &&
               bytes.Length >= 16 + (int)size;
    }

    private readonly record struct DecodedPcm(int SampleRate, int Channels, float[] Samples);

    private static DecodedPcm DecodePcm(ReadOnlySpan<byte> bytes, string fileName)
    {
        if (LooksLikeWaveFile(bytes))
            return DecodeWav(bytes);
        if (LooksLikeAiffFile(bytes))
            return DecodeAiff(bytes);
        throw new InvalidDataException($"Cannot decode audio from {fileName}.");
    }

    private static DecodedPcm DecodeWav(ReadOnlySpan<byte> bytes)
    {
        short format = 0, channels = 0, bits = 0;
        var rate = 0;
        byte[]? data = null;
        var offset = 12;
        while (offset + 8 <= bytes.Length)
        {
            var id = Encoding.ASCII.GetString(bytes.Slice(offset, 4));
            var size = BinaryPrimitives.ReadInt32LittleEndian(bytes[(offset + 4)..]);
            if (size < 0 || offset + 8 + size > bytes.Length)
                break;
            var body = bytes.Slice(offset + 8, size);
            if (id == "fmt ")
            {
                if (body.Length < 16)
                    throw new InvalidDataException("WAV fmt chunk is truncated.");
                format = BinaryPrimitives.ReadInt16LittleEndian(body);
                channels = BinaryPrimitives.ReadInt16LittleEndian(body[2..]);
                rate = BinaryPrimitives.ReadInt32LittleEndian(body[4..]);
                bits = BinaryPrimitives.ReadInt16LittleEndian(body[14..]);
            }
            else if (id == "data")
                data = body.ToArray();

            offset += 8 + size;
            if ((size & 1) != 0)
                offset++;
        }

        if (data is null || channels <= 0 || rate <= 0)
            throw new InvalidDataException("WAV file is missing a PCM data chunk.");
        if (format != 1 && format != 3)
            throw new InvalidDataException("Only PCM and IEEE-float WAV files are supported.");
        return new DecodedPcm(rate, channels, UnpackPcm(data, channels, bits, format == 3));
    }

    private static DecodedPcm DecodeAiff(ReadOnlySpan<byte> bytes)
    {
        short channels = 0, bits = 0;
        var frames = 0;
        var rate = 0;
        byte[]? data = null;
        var offset = 12;
        while (offset + 8 <= bytes.Length)
        {
            var id = Encoding.ASCII.GetString(bytes.Slice(offset, 4));
            var size = BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt32LittleEndian(bytes[(offset + 4)..]));
            if (size < 0 || offset + 8 + size > bytes.Length)
                break;
            var body = bytes.Slice(offset + 8, size);
            if (id == "COMM" && body.Length >= 18)
            {
                channels = BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt16LittleEndian(body));
                frames = BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt32LittleEndian(body[2..]));
                bits = BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt16LittleEndian(body[6..]));
                rate = (int)Math.Round(FromIeee80(body.Slice(8, 10)));
            }
            else if (id == "SSND" && body.Length >= 8)
            {
                var ssndOffset = BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt32LittleEndian(body));
                var start = 8 + ssndOffset;
                if (start < body.Length)
                    data = body[start..].ToArray();
            }

            offset += 8 + size;
            if ((size & 1) != 0)
                offset++;
        }

        if (data is null || channels <= 0 || rate <= 0)
            throw new InvalidDataException("AIFF file is missing COMM/SSND chunks.");
        var samples = UnpackPcm(data, channels, bits, ieeeFloat: false, bigEndian: true);
        if (frames > 0)
            samples = samples.AsSpan(0, Math.Min(samples.Length, frames * channels)).ToArray();
        return new DecodedPcm(rate, channels, samples);
    }

    private static float[] UnpackPcm(byte[] data, int channels, int bits, bool ieeeFloat, bool bigEndian = false)
    {
        if (ieeeFloat && bits == 32)
        {
            var count = data.Length / 4;
            var samples = new float[count];
            for (var i = 0; i < count; i++)
            {
                var bits32 = bigEndian
                    ? BinaryPrimitives.ReverseEndianness(BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(i * 4)))
                    : BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(i * 4));
                samples[i] = BitConverter.Int32BitsToSingle(bits32);
            }

            return samples;
        }

        var width = bits / 8;
        if (width <= 0)
            throw new InvalidDataException($"Unsupported PCM bit depth ({bits}).");
        var frames = data.Length / width;
        var output = new float[frames];
        for (var i = 0; i < frames; i++)
        {
            var at = i * width;
            int raw;
            if (bits == 8 && !bigEndian)
                raw = data[at] - 128;
            else if (bits == 8)
                raw = unchecked((sbyte)data[at]);
            else if (bits == 16)
            {
                var value = BinaryPrimitives.ReadInt16LittleEndian(data.AsSpan(at));
                raw = bigEndian ? BinaryPrimitives.ReverseEndianness(value) : value;
            }
            else if (bits == 24)
            {
                var b0 = data[at];
                var b1 = data[at + 1];
                var b2 = data[at + 2];
                raw = bigEndian
                    ? (sbyte)b0 << 16 | b1 << 8 | b2
                    : (sbyte)b2 << 16 | b1 << 8 | b0;
            }
            else if (bits == 32)
            {
                var value = BinaryPrimitives.ReadInt32LittleEndian(data.AsSpan(at));
                raw = bigEndian ? BinaryPrimitives.ReverseEndianness(value) : value;
            }
            else
                throw new InvalidDataException($"Unsupported PCM bit depth ({bits}).");

            var denom = bits == 8 ? 127f : bits == 16 ? 32767f : bits == 24 ? 8388607f : 2147483647f;
            output[i] = Math.Clamp(raw / denom, -1f, 1f);
        }

        _ = channels;
        return output;
    }

    private static float[] MixToMono(float[] interleaved, int channels)
    {
        if (channels <= 1)
            return interleaved;
        var frames = interleaved.Length / channels;
        var mono = new float[frames];
        for (var i = 0; i < frames; i++)
        {
            var sum = 0f;
            for (var c = 0; c < channels; c++)
                sum += interleaved[i * channels + c];
            mono[i] = sum / channels;
        }

        return mono;
    }

    private static byte[] ToSignedPcm8(float[] samples)
    {
        var pcm = new byte[samples.Length];
        for (var i = 0; i < samples.Length; i++)
        {
            var scaled = Math.Clamp(samples[i], -1f, 1f) * 127f;
            pcm[i] = unchecked((byte)(sbyte)Math.Round(scaled));
        }

        return pcm;
    }

    private static byte[] PackWaveData(int sampleRate, byte[] pcm8)
    {
        var payload = new byte[16 + pcm8.Length];
        BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan(0), 0);
        BinaryPrimitives.WriteUInt16LittleEndian(payload.AsSpan(2), 0);
        BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(4), (uint)sampleRate << 10);
        BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(8), 0);
        BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(12), (uint)pcm8.Length);
        pcm8.CopyTo(payload, 16);
        return payload;
    }

    private static double FromIeee80(ReadOnlySpan<byte> bytes)
    {
        var exponent = ((bytes[0] & 0x7F) << 8) | bytes[1];
        ulong mantissa = 0;
        for (var i = 0; i < 8; i++)
            mantissa = (mantissa << 8) | bytes[2 + i];
        if (exponent == 0 && mantissa == 0)
            return 0;
        var value = mantissa / (double)(1UL << 63) * Math.Pow(2, exponent - 16383);
        return (bytes[0] & 0x80) != 0 ? -value : value;
    }

    private static int Align4(int value) => (value + 3) & ~3;

    private static void WriteU32(byte[] dest, int offset, uint value) =>
        BinaryPrimitives.WriteUInt32LittleEndian(dest.AsSpan(offset), value);
}
