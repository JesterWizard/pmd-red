using System.Buffers.Binary;
using System.Globalization;
using System.Text.RegularExpressions;

namespace RescueEditor.Core;

public sealed record SoundNoteEvent(int Track, int StartTick, int DurationTicks, int Key, int Velocity);

public sealed class SoundSequence
{
    public required string Name { get; init; }
    public int SongId { get; init; } = -1;
    public int TempoBpm { get; init; } = 120;
    public int TrackCount { get; init; }
    public int DurationTicks { get; init; }
    public IReadOnlyList<SoundNoteEvent> Notes { get; init; } = Array.Empty<SoundNoteEvent>();
    public string? Diagnostic { get; init; }

    public double DurationSeconds => TempoBpm <= 0
        ? 0
        : DurationTicks * 60.0 / (TempoBpm * SoundSequenceParser.TicksPerBeat);
}

public static class SoundSequenceParser
{
    public const int TicksPerBeat = 24;
    public const int RetailSongTableOffset = 0x1E866BC;
    public const int MaxSongTableEntries = 940;

    private static readonly byte[] WaitTable =
    [
        0,
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
        17, 18, 19, 20, 21, 22, 23, 24, 28, 30, 32, 36, 40, 42, 44, 48,
        52, 54, 56, 60, 64, 66, 68, 72, 76, 78, 80, 84, 88, 90, 92, 96,
    ];

    public static bool TryGetSongHeaderOffset(RomImage rom, int songId, out int headerOffset)
    {
        headerOffset = -1;
        if (songId < 0 || songId >= MaxSongTableEntries)
            return false;
        var entryOffset = RetailSongTableOffset + songId * 8;
        if (!rom.IsRangeValid(entryOffset, 8))
            return false;
        var pointer = rom.ReadUInt32(entryOffset);
        if (pointer == 0)
            return false;
        headerOffset = rom.PointerToOffset(pointer);
        return headerOffset >= 0 && rom.IsRangeValid(headerOffset, 8);
    }

    public static SoundSequence ParseFromRom(RomImage rom, int songId, string name, int maxLoops = 1)
    {
        if (!TryGetSongHeaderOffset(rom, songId, out var headerOffset))
        {
            return new SoundSequence
            {
                Name = name,
                SongId = songId,
                Diagnostic = "Song header was not found in this ROM's song table.",
            };
        }

        var trackCount = rom.ReadByte(headerOffset);
        if (trackCount == 0 || trackCount > 16)
        {
            return new SoundSequence
            {
                Name = name,
                SongId = songId,
                TrackCount = trackCount,
                Diagnostic = trackCount == 0 ? "This song has no tracks." : "Unexpected track count.",
            };
        }

        var trackPointersOffset = headerOffset + 8;
        if (!rom.IsRangeValid(trackPointersOffset, trackCount * 4))
        {
            return new SoundSequence
            {
                Name = name,
                SongId = songId,
                Diagnostic = "Track pointer table is out of range.",
            };
        }

        var notes = new List<SoundNoteEvent>();
        var tempo = 120;
        var duration = 0;
        for (var track = 0; track < trackCount; track++)
        {
            var trackPointer = rom.ReadUInt32(trackPointersOffset + track * 4);
            var trackOffset = rom.PointerToOffset(trackPointer);
            if (trackOffset < 0)
                continue;
            var (trackNotes, trackTempo, trackEnd) = DecodeTrack(rom, trackOffset, track, maxLoops);
            if (trackTempo is > 0)
                tempo = trackTempo.Value;
            notes.AddRange(trackNotes);
            duration = Math.Max(duration, trackEnd);
        }

        return new SoundSequence
        {
            Name = name,
            SongId = songId,
            TempoBpm = tempo,
            TrackCount = trackCount,
            DurationTicks = duration,
            Notes = notes
                .OrderBy(note => note.StartTick)
                .ThenBy(note => note.Track)
                .ToArray(),
        };
    }

    public static SoundSequence ParseFromSource(string path, string name, int songId = -1)
    {
        if (!File.Exists(path))
        {
            return new SoundSequence
            {
                Name = name,
                SongId = songId,
                Diagnostic = "Song source file is unavailable.",
            };
        }

        var notes = new List<SoundNoteEvent>();
        var tempo = 120;
        var tick = 0;
        var track = -1;
        var duration = 0;
        foreach (var rawLine in File.ReadLines(path))
        {
            var line = rawLine.Split('@', 2)[0].Trim();
            if (line.Length == 0)
                continue;

            var trackMatch = Regex.Match(line, @"^seq_\d+_(\d+)\s*:");
            if (trackMatch.Success)
            {
                duration = Math.Max(duration, tick);
                track = int.Parse(trackMatch.Groups[1].Value, CultureInfo.InvariantCulture);
                tick = 0;
                continue;
            }

            if (track < 0)
                continue;

            var tempoMatch = Regex.Match(line, @"TEMPO\s*,\s*(\d+)\s*/\s*2");
            if (tempoMatch.Success)
            {
                tempo = int.Parse(tempoMatch.Groups[1].Value, CultureInfo.InvariantCulture);
                continue;
            }

            var waitMatch = Regex.Match(line, @"\bW(\d+)\b");
            if (waitMatch.Success)
                tick += int.Parse(waitMatch.Groups[1].Value, CultureInfo.InvariantCulture);

            var noteMatch = Regex.Match(line,
                @"\b(?<kind>N(?<len>\d+)|TIE)\s*,\s*(?<key>[A-G][s]?(?:M2|M1|\d))\s*(?:,\s*v(?<vel>\d+))?");
            if (!noteMatch.Success || track < 0)
                continue;

            var key = NoteNameToKey(noteMatch.Groups["key"].Value);
            if (key < 0)
                continue;
            var velocity = noteMatch.Groups["vel"].Success
                ? int.Parse(noteMatch.Groups["vel"].Value, CultureInfo.InvariantCulture)
                : 100;
            var length = noteMatch.Groups["kind"].Value.StartsWith("N", StringComparison.Ordinal)
                ? int.Parse(noteMatch.Groups["len"].Value, CultureInfo.InvariantCulture)
                : 48;
            notes.Add(new SoundNoteEvent(track, tick, Math.Max(1, length), key, velocity));
        }

        duration = Math.Max(duration, tick);
        return new SoundSequence
        {
            Name = name,
            SongId = songId,
            TempoBpm = tempo,
            TrackCount = notes.Count == 0 ? 0 : notes.Max(note => note.Track) + 1,
            DurationTicks = duration,
            Notes = notes,
            Diagnostic = notes.Count == 0
                ? "No note events were recognized in the assembly source."
                : "Approximate preview from assembly (pattern calls are not expanded).",
        };
    }

    public static byte[] RenderWave(SoundSequence sequence, int sampleRate = 22_050, int maxSeconds = 90)
    {
        if (sequence.Notes.Count == 0 || sequence.TempoBpm <= 0 || sequence.DurationTicks <= 0)
            return Array.Empty<byte>();

        var seconds = Math.Min(sequence.DurationSeconds, maxSeconds);
        var sampleCount = Math.Max(1, (int)(seconds * sampleRate));
        var mix = new float[sampleCount];
        var ticksPerSecond = sequence.TempoBpm * TicksPerBeat / 60.0;

        foreach (var note in sequence.Notes)
        {
            var start = (int)(note.StartTick / ticksPerSecond * sampleRate);
            var length = Math.Max(1, (int)(note.DurationTicks / ticksPerSecond * sampleRate));
            if (start >= sampleCount)
                continue;
            length = Math.Min(length, sampleCount - start);
            var frequency = 440.0 * Math.Pow(2, (note.Key - 69) / 12.0);
            var amplitude = Math.Clamp(note.Velocity / 127.0 * 0.18, 0.02, 0.22);
            var phase = 0.0;
            var phaseStep = frequency / sampleRate;
            for (var i = 0; i < length; i++)
            {
                // Soft square-ish tone; envelope avoids clicks.
                var env = 1.0;
                var attack = Math.Min(64, length / 8);
                var release = Math.Min(128, length / 4);
                if (i < attack)
                    env = i / (double)attack;
                else if (i > length - release)
                    env = Math.Max(0, (length - i) / (double)release);
                var wave = phase % 1.0 < 0.5 ? 1.0 : -1.0;
                // Mild low-pass via averaging with previous sample.
                mix[start + i] += (float)(wave * amplitude * env);
                phase += phaseStep;
            }
        }

        var pcm = new short[sampleCount];
        for (var i = 0; i < sampleCount; i++)
        {
            var sample = Math.Clamp(mix[i], -1f, 1f);
            pcm[i] = (short)(sample * short.MaxValue);
        }

        return EncodeWav(pcm, sampleRate);
    }

    public static byte[] EncodeWav(short[] pcm, int sampleRate)
    {
        using var output = new MemoryStream();
        using var writer = new BinaryWriter(output);
        var dataSize = pcm.Length * 2;
        writer.Write("RIFF"u8.ToArray());
        writer.Write(36 + dataSize);
        writer.Write("WAVE"u8.ToArray());
        writer.Write("fmt "u8.ToArray());
        writer.Write(16);
        writer.Write((short)1);
        writer.Write((short)1);
        writer.Write(sampleRate);
        writer.Write(sampleRate * 2);
        writer.Write((short)2);
        writer.Write((short)16);
        writer.Write("data"u8.ToArray());
        writer.Write(dataSize);
        foreach (var sample in pcm)
            writer.Write(sample);
        return output.ToArray();
    }

    private static (List<SoundNoteEvent> Notes, int? Tempo, int EndTick) DecodeTrack(
        RomImage rom,
        int startOffset,
        int track,
        int maxLoops)
    {
        var notes = new List<SoundNoteEvent>();
        var stack = new Stack<int>();
        var offset = startOffset;
        var tick = 0;
        var endTick = 0;
        var tempo = (int?)null;
        var velocity = 100;
        var keyShift = 0;
        var loopsLeft = Math.Max(1, maxLoops);
        var gotoCount = 0;
        var steps = 0;
        const int maxSteps = 200_000;

        while (steps++ < maxSteps && rom.IsRangeValid(offset, 1))
        {
            var command = rom.ReadByte(offset++);
            if (command <= 0x7F)
                continue;

            if (command <= 0xB0)
            {
                tick += WaitTicks(command - 0x80);
                endTick = Math.Max(endTick, tick);
                continue;
            }

            switch (command)
            {
                case 0xB1: // FINE
                    return (notes, tempo, Math.Max(endTick, tick));
                case 0xB2: // GOTO
                {
                    if (!rom.IsRangeValid(offset, 4))
                        return (notes, tempo, endTick);
                    var target = rom.PointerToOffset(rom.ReadUInt32(offset));
                    offset += 4;
                    if (target < 0)
                        return (notes, tempo, endTick);
                    gotoCount++;
                    if (gotoCount >= loopsLeft)
                        return (notes, tempo, Math.Max(endTick, tick));
                    offset = target;
                    break;
                }
                case 0xB3: // PATT
                {
                    if (!rom.IsRangeValid(offset, 4))
                        return (notes, tempo, endTick);
                    var target = rom.PointerToOffset(rom.ReadUInt32(offset));
                    offset += 4;
                    if (target < 0)
                        break;
                    if (stack.Count > 3)
                        break;
                    stack.Push(offset);
                    offset = target;
                    break;
                }
                case 0xB4: // PEND
                    if (stack.Count > 0)
                        offset = stack.Pop();
                    else
                        return (notes, tempo, Math.Max(endTick, tick));
                    break;
                case 0xB5: // REPT - treat as end for safety
                    return (notes, tempo, Math.Max(endTick, tick));
                case 0xBA: // PRIO
                    if (rom.IsRangeValid(offset, 1))
                        offset++;
                    break;
                case 0xBB: // TEMPO (stored as BPM/2)
                    if (rom.IsRangeValid(offset, 1))
                    {
                        tempo = rom.ReadByte(offset++) * 2;
                    }
                    break;
                case 0xBC: // KEYSH
                    if (rom.IsRangeValid(offset, 1))
                        keyShift = unchecked((sbyte)rom.ReadByte(offset++));
                    break;
                case 0xBD: // VOICE
                case 0xBE: // VOL
                case 0xBF: // PAN
                case 0xC0: // BEND
                case 0xC1: // BENDR
                case 0xC2: // LFOS
                case 0xC3: // LFODL
                case 0xC4: // MOD
                case 0xC5: // MODT
                case 0xC8: // TUNE
                    if (rom.IsRangeValid(offset, 1))
                        offset++;
                    break;
                case 0xCD: // XCMD
                    if (rom.IsRangeValid(offset, 2))
                        offset += 2;
                    break;
                case 0xCE: // EOT
                    if (rom.IsRangeValid(offset, 1) && rom.ReadByte(offset) <= 0x7F)
                        offset++;
                    break;
                case 0xCF: // TIE
                {
                    if (!rom.IsRangeValid(offset, 1))
                        return (notes, tempo, endTick);
                    var key = rom.ReadByte(offset++);
                    if (rom.IsRangeValid(offset, 1) && rom.ReadByte(offset) <= 0x7F)
                        velocity = rom.ReadByte(offset++);
                    notes.Add(new SoundNoteEvent(track, tick, 48, key + keyShift, velocity));
                    endTick = Math.Max(endTick, tick + 48);
                    break;
                }
                default:
                {
                    if (command < 0xD0)
                        break;
                    var length = WaitTicks(command - 0xCF);
                    if (!rom.IsRangeValid(offset, 1))
                        return (notes, tempo, endTick);
                    var key = rom.ReadByte(offset++);
                    if (rom.IsRangeValid(offset, 1) && rom.ReadByte(offset) <= 0x7F)
                        velocity = rom.ReadByte(offset++);
                    if (rom.IsRangeValid(offset, 1) && rom.ReadByte(offset) <= 0x7F)
                        offset++; // gate+
                    notes.Add(new SoundNoteEvent(track, tick, Math.Max(1, length), key + keyShift, velocity));
                    tick += length;
                    endTick = Math.Max(endTick, tick);
                    break;
                }
            }
        }

        return (notes, tempo, Math.Max(endTick, tick));
    }

    private static int WaitTicks(int index)
    {
        if ((uint)index >= (uint)WaitTable.Length)
            return 0;
        return WaitTable[index];
    }

    private static int NoteNameToKey(string name)
    {
        // Matches MPlayDef.s: Cn3 = 60
        var match = Regex.Match(name, @"^(?<note>[A-G])(?<sharp>s)?(?<oct>M2|M1|\d)$");
        if (!match.Success)
            return -1;
        var note = match.Groups["note"].Value[0] switch
        {
            'C' => 0,
            'D' => 2,
            'E' => 4,
            'F' => 5,
            'G' => 7,
            'A' => 9,
            'B' => 11,
            _ => -1,
        };
        if (note < 0)
            return -1;
        if (match.Groups["sharp"].Success)
            note++;
        var octText = match.Groups["oct"].Value;
        var octave = octText switch
        {
            "M2" => -2,
            "M1" => -1,
            _ => int.Parse(octText, CultureInfo.InvariantCulture),
        };
        return (octave + 2) * 12 + note;
    }
}

public static class SoundPcm
{
    public static float[] GetAmplitudeBuckets(byte[] wav, int positionBytes, int bucketCount, int windowBytes = 4096)
    {
        var buckets = new float[Math.Max(1, bucketCount)];
        if (wav.Length < 44)
            return buckets;

        var dataStart = 44;
        var dataLength = wav.Length - dataStart;
        if (dataLength <= 0)
            return buckets;

        // Prefer 16-bit mono; fall back to 8-bit mono for DirectSound exports.
        var bitsPerSample = wav.Length >= 34 ? BinaryPrimitives.ReadInt16LittleEndian(wav.AsSpan(34)) : (short)16;
        var bytesPerSample = bitsPerSample == 8 ? 1 : 2;
        positionBytes = Math.Clamp(positionBytes, 0, Math.Max(0, dataLength - bytesPerSample));
        var window = Math.Min(windowBytes, dataLength - positionBytes);
        if (window <= 0)
            return buckets;

        var start = dataStart + positionBytes;
        var samples = window / bytesPerSample;
        var samplesPerBucket = Math.Max(1, samples / buckets.Length);
        for (var bucket = 0; bucket < buckets.Length; bucket++)
        {
            var bucketStart = start + bucket * samplesPerBucket * bytesPerSample;
            double sum = 0;
            var count = 0;
            for (var i = 0; i < samplesPerBucket; i++)
            {
                var sampleOffset = bucketStart + i * bytesPerSample;
                if (sampleOffset + bytesPerSample > wav.Length)
                    break;
                double sample = bytesPerSample == 1
                    ? (wav[sampleOffset] - 128) / 128.0
                    : BinaryPrimitives.ReadInt16LittleEndian(wav.AsSpan(sampleOffset)) / 32768.0;
                sum += Math.Abs(sample);
                count++;
            }
            buckets[bucket] = count == 0 ? 0 : (float)Math.Min(1.0, sum / count * 2.5);
        }

        return buckets;
    }
}
