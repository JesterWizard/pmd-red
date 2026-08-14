namespace RescueEditor.Core;

public static class Compression
{
    public static byte[] DecompressGbaLz(ReadOnlySpan<byte> source)
    {
        if (source.Length < 4 || source[0] != 0x10)
            throw new InvalidDataException("Expected a BIOS LZ77 stream.");

        var outputLength = source[1] | (source[2] << 8) | (source[3] << 16);
        var output = new byte[outputLength];
        var sourceIndex = 4;
        var outputIndex = 0;

        while (outputIndex < output.Length)
        {
            if (sourceIndex >= source.Length)
                throw new InvalidDataException("LZ77 stream ended before its output was complete.");

            var flags = source[sourceIndex++];
            for (var bit = 7; bit >= 0 && outputIndex < output.Length; bit--)
            {
                if ((flags & (1 << bit)) == 0)
                {
                    if (sourceIndex >= source.Length)
                        throw new InvalidDataException("LZ77 literal is missing.");
                    output[outputIndex++] = source[sourceIndex++];
                    continue;
                }

                if (sourceIndex + 1 >= source.Length)
                    throw new InvalidDataException("LZ77 back-reference is missing.");

                var first = source[sourceIndex++];
                var second = source[sourceIndex++];
                var length = (first >> 4) + 3;
                var displacement = ((first & 0xF) << 8 | second) + 1;
                if (displacement > outputIndex)
                    throw new InvalidDataException("LZ77 back-reference points before the output.");

                for (var i = 0; i < length && outputIndex < output.Length; i++)
                {
                    output[outputIndex] = output[outputIndex - displacement];
                    outputIndex++;
                }
            }
        }

        return output;
    }

    public static byte[] DecompressGmlz(ReadOnlySpan<byte> source)
    {
        if (source.Length < 5 || !source[..4].SequenceEqual("GMLZ"u8))
            return source.ToArray();
        return DecompressGbaLz(source[4..]);
    }

    public static byte[] DecompressAt(ReadOnlySpan<byte> source, int expectedLength = 0)
    {
        if (source.Length < 7)
            throw new InvalidDataException("AT buffer is too short.");

        var isAt4 = source[..4].SequenceEqual("AT4P"u8);
        var isAt3 = source[..4].SequenceEqual("AT3P"u8);
        if (!isAt4 && !isAt3)
            throw new InvalidDataException("Expected an AT3P or AT4P stream.");

        var destinationLength = isAt4
            ? source[0x10] | (source[0x11] << 8)
            : expectedLength;
        if (expectedLength != 0 && destinationLength != 0 && expectedLength != destinationLength)
            throw new InvalidDataException(
                $"AT output size mismatch: expected 0x{expectedLength:X}, header says 0x{destinationLength:X}.");

        var index = isAt4 ? 0x12 : 0x10;
        var compressedLength = source[5] | (source[6] << 8);
        if (compressedLength > source.Length)
            compressedLength = source.Length;

        if (source[4] == (byte)'N')
            return source.Slice(7, Math.Min(compressedLength, source.Length - 7)).ToArray();

        if (source.Length < 0x10)
            throw new InvalidDataException("Compressed AT stream has no command table.");

        var flags = new int[9];
        for (var i = 0; i < flags.Length; i++)
            flags[i] = source[0x07 + i] + 3;

        var output = new List<byte>(destinationLength > 0 ? destinationLength : compressedLength * 2);
        var commandByte = 0;
        var commandBit = 8;

        while (index < compressedLength)
        {
            if (destinationLength != 0 && output.Count >= destinationLength)
                throw new InvalidDataException("AT stream wrote beyond its declared output size.");

            if (commandBit == 8)
            {
                commandByte = source[index++];
                commandBit = 0;
            }

            if ((commandByte & 0x80) == 0)
            {
                if (index >= compressedLength)
                    throw new InvalidDataException("AT command is missing its operand.");

                var command = (source[index] >> 4) + 3;
                var packed = (source[index] & 0xF) << 8;
                for (var i = 0; i < flags.Length; i++)
                {
                    if (command == flags[i])
                    {
                        command = 0x1F - i;
                        break;
                    }
                }

                var nibble = source[index] & 0xF;
                switch (command)
                {
                    // Four-nibble PX patterns (SkyTemple/kaomado): high nibble of each
                    // byte is ns[even], low nibble is ns[odd]. Indices 1/5 also shift the
                    // base before adjusting one slot — cases 0x1E/0x1C/0x18 were wrong.
                    case 0x1F: // idx 0: [n,n,n,n]
                        index++;
                        AddPair(output, (nibble << 4) | nibble, (nibble << 4) | nibble);
                        break;
                    case 0x1E: // idx 1: [n, n+1, n+1, n+1]
                        index++;
                        AddPair(output,
                            (nibble << 4) | ((nibble + 1) & 0xF),
                            ((nibble + 1) & 0xF) * 0x11);
                        break;
                    case 0x1D: // idx 2: [n, n-1, n, n]
                        index++;
                        AddPair(output, (nibble << 4) | ((nibble - 1) & 0xF), (nibble << 4) | nibble);
                        break;
                    case 0x1C: // idx 3: [n, n, n-1, n]
                        index++;
                        AddPair(output, (nibble << 4) | nibble, (((nibble - 1) & 0xF) << 4) | nibble);
                        break;
                    case 0x1B: // idx 4: [n, n, n, n-1]
                        index++;
                        AddPair(output, (nibble << 4) | nibble, (nibble << 4) | ((nibble - 1) & 0xF));
                        break;
                    case 0x1A: // idx 5: [n, n-1, n-1, n-1]
                        index++;
                        AddPair(output,
                            (nibble << 4) | ((nibble - 1) & 0xF),
                            ((nibble - 1) & 0xF) * 0x11);
                        break;
                    case 0x19: // idx 6: [n, n+1, n, n]
                        index++;
                        AddPair(output, (nibble << 4) | ((nibble + 1) & 0xF), (nibble << 4) | nibble);
                        break;
                    case 0x18: // idx 7: [n, n, n+1, n]
                        index++;
                        AddPair(output, (nibble << 4) | nibble, (((nibble + 1) & 0xF) << 4) | nibble);
                        break;
                    case 0x17: // idx 8: [n, n, n, n+1]
                        index++;
                        AddPair(output, (nibble << 4) | nibble, (nibble << 4) | ((nibble + 1) & 0xF));
                        break;
                    default:
                        index++;
                        if (index >= compressedLength)
                            throw new InvalidDataException("AT copy command is missing its distance.");
                        packed += source[index++];
                        packed += output.Count - 0x1000;
                        for (var i = 0; i < command; i++)
                        {
                            if (packed < 0 || packed >= output.Count)
                                throw new InvalidDataException("AT copy command points outside the output.");
                            output.Add(output[packed++]);
                        }
                        break;
                }
            }
            else
            {
                if (index >= compressedLength)
                    throw new InvalidDataException("AT literal command is missing its byte.");
                output.Add(source[index++]);
            }

            commandBit++;
            commandByte = (commandByte << 1) & 0xFF;
        }

        if (destinationLength != 0 && output.Count != destinationLength)
            throw new InvalidDataException(
                $"AT output size mismatch: got 0x{output.Count:X}, expected 0x{destinationLength:X}.");
        return output.ToArray();
    }

    /// <summary>
    /// Greedy AT4PX encoder (PX nibble patterns + short LZ copies + literals).
    /// Header bytes 5–6 are the end offset of the command stream (absolute file size).
    /// </summary>
    public static byte[] CompressAt4px(ReadOnlySpan<byte> data)
    {
        var ops = new List<(bool Literal, byte[] Payload)>();
        var i = 0;
        while (i < data.Length)
        {
            byte px = 0;
            var hasPx = i + 2 <= data.Length && TryPx(data, i, out px);
            var hasCopy = TryCopy(data, i, out var copyPayload, out var copyLen);

            if (hasCopy && copyLen >= 4)
            {
                ops.Add((false, copyPayload));
                i += copyLen;
                continue;
            }

            if (hasPx)
            {
                ops.Add((false, [px]));
                i += 2;
                continue;
            }

            if (hasCopy)
            {
                ops.Add((false, copyPayload));
                i += copyLen;
                continue;
            }

            ops.Add((true, [data[i]]));
            i++;
        }

        var stream = new List<byte>();
        for (var op = 0; op < ops.Count; )
        {
            byte flags = 0;
            var group = Math.Min(8, ops.Count - op);
            for (var bit = 0; bit < group; bit++)
            {
                if (ops[op + bit].Literal)
                    flags |= (byte)(0x80 >> bit);
            }

            stream.Add(flags);
            for (var bit = 0; bit < group; bit++)
                stream.AddRange(ops[op + bit].Payload);
            op += group;
        }

        var total = 0x12 + stream.Count;
        var output = new byte[total];
        "AT4PX"u8.CopyTo(output);
        output[5] = (byte)total;
        output[6] = (byte)(total >> 8);
        // High nibble is 4 bits. Reserve 0x7–0xF for the 9 PX patterns; 0x0–0x6 are LZ lengths 3–9.
        for (var f = 0; f < 9; f++)
            output[7 + f] = (byte)(0x07 + f);
        output[0x10] = (byte)data.Length;
        output[0x11] = (byte)(data.Length >> 8);
        stream.CopyTo(output, 0x12);
        return output;
    }

    private static bool TryPx(ReadOnlySpan<byte> data, int i, out byte encoded)
    {
        encoded = 0;
        var n0 = data[i] >> 4;
        var n1 = data[i] & 0xF;
        var n2 = data[i + 1] >> 4;
        var n3 = data[i + 1] & 0xF;
        var n = n0;
        int pattern;
        if (n1 == n && n2 == n && n3 == n)
            pattern = 0; // [n,n,n,n]
        else if (n1 == ((n + 1) & 0xF) && n2 == ((n + 1) & 0xF) && n3 == ((n + 1) & 0xF))
            pattern = 1;
        else if (n1 == ((n - 1) & 0xF) && n2 == n && n3 == n)
            pattern = 2;
        else if (n1 == n && n2 == ((n - 1) & 0xF) && n3 == n)
            pattern = 3;
        else if (n1 == n && n2 == n && n3 == ((n - 1) & 0xF))
            pattern = 4;
        else if (n1 == ((n - 1) & 0xF) && n2 == ((n - 1) & 0xF) && n3 == ((n - 1) & 0xF))
            pattern = 5;
        else if (n1 == ((n + 1) & 0xF) && n2 == n && n3 == n)
            pattern = 6;
        else if (n1 == n && n2 == ((n + 1) & 0xF) && n3 == n)
            pattern = 7;
        else if (n1 == n && n2 == n && n3 == ((n + 1) & 0xF))
            pattern = 8;
        else
            return false;

        encoded = (byte)(((0x07 + pattern) << 4) | n);
        return true;
    }

    private static bool TryCopy(ReadOnlySpan<byte> data, int i, out byte[] payload, out int length)
    {
        payload = [];
        length = 0;
        const int minLen = 3;
        const int maxLen = 9; // high nibble 0–6; 0x7–0xF are PX
        var remaining = data.Length - i;
        if (remaining < minLen || i < minLen)
            return false;

        var window = Math.Min(i, 0x1000);
        var bestLen = 0;
        var bestSrc = 0;
        for (var src = i - window; src < i; src++)
        {
            var n = 0;
            var cap = Math.Min(maxLen, remaining);
            while (n < cap && data[src + n] == data[i + n])
                n++;
            if (n > bestLen)
            {
                bestLen = n;
                bestSrc = src;
            }
        }

        if (bestLen < minLen)
            return false;

        var packed = bestSrc - i + 0x1000;
        var high = (byte)(bestLen - 3);
        payload = [(byte)((high << 4) | ((packed >> 8) & 0xF)), (byte)packed];
        length = bestLen;
        return true;
    }

    private static void AddPair(List<byte> output, int first, int second)
    {
        output.Add((byte)first);
        output.Add((byte)second);
    }
}
