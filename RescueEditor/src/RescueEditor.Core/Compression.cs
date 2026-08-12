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

    private static void AddPair(List<byte> output, int first, int second)
    {
        output.Add((byte)first);
        output.Add((byte)second);
    }
}
