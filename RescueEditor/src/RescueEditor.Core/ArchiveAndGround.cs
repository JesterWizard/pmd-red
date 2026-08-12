using System.Buffers.Binary;

namespace RescueEditor.Core;

public sealed class RomArchive
{
    public required int HeaderOffset { get; init; }
    public required int Count { get; init; }
    public required IReadOnlyList<RomArchiveEntry> Entries { get; init; }
    public string Name => $"pksdir0 @ 0x{HeaderOffset:X}";
}

public sealed class RomArchiveEntry
{
    public required string Name { get; init; }
    public required int Offset { get; init; }
    public required int Size { get; set; }
    public required int NamePointerOffset { get; init; }
}

public static class RomArchiveParser
{
    public static IReadOnlyList<RomArchive> FindArchives(RomImage rom)
    {
        var candidates = new List<(int Header, int Count, int Entries)>();
        foreach (var header in rom.FindAscii("pksdir0", includeTerminator: true))
        {
            if (!rom.IsRangeValid(header + 8, 8))
                continue;
            var count = rom.ReadInt32(header + 8);
            var entries = rom.ReadPointerOffset(header + 12);
            if (count is <= 0 or > 4096 || !rom.IsRangeValid(entries, checked(count * 8)))
                continue;
            candidates.Add((header, count, entries));
        }

        // Entry layout is { namePtr, dataPtr }; sizes come from the next data pointer.
        // Build a sorted unique pointer table once, then binary-search per entry.
        var dataPointers = candidates.SelectMany(candidate =>
                Enumerable.Range(0, candidate.Count)
                    .Select(index => SafeReadPointer(rom, candidate.Entries + index * 8 + 4)))
            .Where(offset => offset >= 0)
            .Distinct()
            .OrderBy(value => value)
            .ToArray();

        var result = new List<RomArchive>();
        var seenHeaders = new HashSet<int>();
        foreach (var candidate in candidates)
        {
            if (!seenHeaders.Add(candidate.Header))
                continue;

            var entries = new List<RomArchiveEntry>();
            for (var index = 0; index < candidate.Count; index++)
            {
                var namePointer = SafeReadPointer(rom, candidate.Entries + index * 8);
                var dataOffset = SafeReadPointer(rom, candidate.Entries + index * 8 + 4);
                if (namePointer < 0 || dataOffset < 0)
                    continue;

                var name = rom.ReadAscii(namePointer, 32);
                if (string.IsNullOrWhiteSpace(name) || name.Any(char.IsControl))
                    continue;

                var next = NextDataOffset(dataPointers, dataOffset, rom.Length);
                var size = next > dataOffset ? next - dataOffset : rom.Length - dataOffset;
                entries.Add(new RomArchiveEntry
                {
                    Name = name,
                    Offset = dataOffset,
                    Size = Math.Max(0, size),
                    NamePointerOffset = namePointer,
                });
            }

            if (entries.Count > 0)
            {
                result.Add(new RomArchive
                {
                    HeaderOffset = candidate.Header,
                    Count = candidate.Count,
                    Entries = entries,
                });
            }
        }

        return result;
    }

    /// <summary>First sorted data pointer strictly greater than <paramref name="dataOffset"/>.</summary>
    private static int NextDataOffset(int[] sortedPointers, int dataOffset, int romLength)
    {
        var idx = Array.BinarySearch(sortedPointers, dataOffset);
        if (idx >= 0)
            idx++;
        else
            idx = ~idx;
        return idx < sortedPointers.Length ? sortedPointers[idx] : romLength;
    }

    private static int SafeReadPointer(RomImage rom, int offset)
    {
        return rom.TryReadUInt32(offset, out var pointer) && rom.TryPointerToOffset(pointer, out var result)
            ? result
            : -1;
    }
}

public static class GroundMapIndexer
{
    public static IEnumerable<AssetDescriptor> Index(RomImage rom, IEnumerable<RomArchive> archives)
    {
        foreach (var archive in archives)
        {
            // Case-sensitive: Team Base variants use both "B12P02c" (shared BPC)
            // and "B12P02C" (palette), which must not collapse together.
            var entries = archive.Entries
                .Where(entry => IsGroundName(entry.Name))
                .GroupBy(entry => entry.Name, StringComparer.Ordinal)
                .ToDictionary(group => group.Key, group => group.First(),
                    StringComparer.Ordinal);
            foreach (var bma in entries.Values.Where(entry => entry.Name.EndsWith('m')))
            {
                var mapBase = bma.Name[..^1];
                var bpl = FindBpl(entries, mapBase);
                var bpc = FindBpc(entries, mapBase);
                if (bpl is null || bpc is null)
                    continue;

                var displayName = GroundMapNames.FormatListName(bma.Name);
                var metadata = new Dictionary<string, string>
                {
                    ["romName"] = bma.Name,
                    ["bplName"] = bpl.Name,
                    ["bplOffset"] = bpl.Offset.ToString(),
                    ["bplSize"] = bpl.Size.ToString(),
                    ["bpcName"] = bpc.Name,
                    ["bpcOffset"] = bpc.Offset.ToString(),
                    ["bpcSize"] = bpc.Size.ToString(),
                    ["archive"] = archive.Name,
                };

                // BPA animation sheets, when present, supply tiles past the BPC tile count.
                for (var slot = 1; slot <= 4; slot++)
                {
                    var bpaName = bpl.Name + slot;
                    if (!entries.TryGetValue(bpaName, out var bpa))
                        continue;
                    metadata[$"bpa{slot}Name"] = bpa.Name;
                    metadata[$"bpa{slot}Offset"] = bpa.Offset.ToString();
                    metadata[$"bpa{slot}Size"] = bpa.Size.ToString();
                }

                yield return new AssetDescriptor
                {
                    Id = $"ground-map:{bma.Name}:{bma.Offset:X}",
                    Name = displayName,
                    Category = AssetCategory.GroundMaps,
                    Kind = AssetKind.GroundMap,
                    Offset = bma.Offset,
                    Size = bma.Size,
                    Format = "BPL/BPC/BMA",
                    Description = $"{GroundMapNames.GetDisplayName(bma.Name) ?? bma.Name} — {bpl.Name} + {bpc.Name} + {bma.Name}",
                    Metadata = metadata,
                };
            }
        }
    }

    public static PreviewContent Render(RomImage rom, AssetDescriptor asset, int animTick = 0)
    {
        var bpl = ReadPart(rom, asset.Metadata, "bplOffset", "bplSize");
        var bpc = Compression.DecompressGmlz(
            ReadPart(rom, asset.Metadata, "bpcOffset", "bpcSize"));
        var bma = Compression.DecompressGmlz(rom.Copy(asset.Offset, asset.Size));
        var bpaFrames = new List<byte[]>();
        for (var slot = 1; slot <= 4; slot++)
        {
            if (!asset.Metadata.ContainsKey($"bpa{slot}Offset"))
                continue;
            var bpa = Compression.DecompressGmlz(ReadPart(rom, asset.Metadata,
                $"bpa{slot}Offset", $"bpa{slot}Size"));
            bpaFrames.Add(BpaFrame0Tiles(bpa));
        }

        return GroundMapRenderer.Render(asset.Name, bpl, bpc, bma, bpaFrames, animTick);
    }

    /// <summary>
    /// First dungeon-shell fallback for empty mid/end maps (<c>DxxP03m</c> → mid, else entry).
    /// </summary>
    public static GroundMapDefinition? TryDungeonEntryFallback(GroundMapDefinition? map) =>
        EnumerateDungeonShellFallbacks(map).FirstOrDefault();

    /// <summary>
    /// Dungeon mid/end shells (<c>DxxP02m</c>/<c>DxxP03m</c>) → nearer shells first
    /// (boss ends prefer mid/peak staging maps that share dimensions, then entry).
    /// </summary>
    public static IEnumerable<GroundMapDefinition> EnumerateDungeonShellFallbacks(GroundMapDefinition? map)
    {
        if (map?.BmaName is null)
            yield break;

        var m = System.Text.RegularExpressions.Regex.Match(
            map.BmaName, @"^(D\d{2})P0([2-9])m$", System.Text.RegularExpressions.RegexOptions.CultureInvariant);
        if (!m.Success)
            yield break;

        var prefix = m.Groups[1].Value; // D09
        if (!int.TryParse(m.Groups[2].Value, out var part) || part < 2)
            yield break;

        for (var p = part - 1; p >= 1; p--)
        {
            var shellBase = prefix + "P0" + p;
            yield return new GroundMapDefinition
            {
                MapId = map.MapId,
                Name = map.Name,
                RenderMode = map.RenderMode,
                GroundPlaceId = map.GroundPlaceId,
                MapFileTableId = map.MapFileTableId,
                Unk6 = map.Unk6,
                Label = map.Label,
                BplName = shellBase,
                BpcName = shellBase + "c",
                BmaName = shellBase + "m",
                BpaNames = map.BpaNames,
                GroundMapAsset = null,
            };
        }
    }

    /// <summary>
    /// Render a ground map from conversion-table names when the catalog asset link is missing.
    /// </summary>
    public static PreviewContent? TryRenderFromMap(RomImage rom, GroundMapDefinition? map, int animTick = 0)
    {
        if (map?.BmaName is null || map.BplName is null || map.BpcName is null)
            return null;

        foreach (var archive in RomArchiveParser.FindArchives(rom))
        {
            var entries = archive.Entries
                .GroupBy(entry => entry.Name, StringComparer.Ordinal)
                .ToDictionary(group => group.Key, group => group.First(), StringComparer.Ordinal);
            if (!entries.TryGetValue(map.BmaName, out var bma))
                continue;
            if (!entries.TryGetValue(map.BplName, out var bpl))
                continue;
            if (!entries.TryGetValue(map.BpcName, out var bpc) || !LooksLikeBpc(bpc))
            {
                var found = FindBpc(entries, map.BmaName[..^1]);
                if (found is null)
                    continue;
                bpc = found;
            }

            var metadata = new Dictionary<string, string>
            {
                ["romName"] = bma.Name,
                ["bplOffset"] = bpl.Offset.ToString(),
                ["bplSize"] = bpl.Size.ToString(),
                ["bpcOffset"] = bpc.Offset.ToString(),
                ["bpcSize"] = bpc.Size.ToString(),
            };
            for (var slot = 1; slot <= 4; slot++)
            {
                var bpaName = bpl.Name + slot;
                if (!entries.TryGetValue(bpaName, out var bpa))
                    continue;
                metadata[$"bpa{slot}Offset"] = bpa.Offset.ToString();
                metadata[$"bpa{slot}Size"] = bpa.Size.ToString();
            }

            var asset = new AssetDescriptor
            {
                Id = $"ground-map-fallback:{bma.Name}",
                Name = GroundMapNames.FormatListName(bma.Name),
                Category = AssetCategory.GroundMaps,
                Kind = AssetKind.GroundMap,
                Offset = bma.Offset,
                Size = bma.Size,
                Format = "BPL/BPC/BMA",
                Description = bma.Name,
                Metadata = metadata,
            };
            try
            {
                return Render(rom, asset, animTick);
            }
            catch
            {
                return null;
            }
        }

        return null;
    }

    private static byte[] BpaFrame0Tiles(ReadOnlySpan<byte> bpa)
    {
        if (bpa.Length < 4)
            return [];
        var numTiles = bpa[0];
        var numFrames = BinaryPrimitives.ReadInt16LittleEndian(bpa[2..]);
        if (numTiles <= 0 || numFrames <= 0)
            return [];
        var tilesStart = 4 + numFrames * 4;
        var tileBytes = 32;
        var frameStride = numTiles * tileBytes;
        if (tilesStart + frameStride > bpa.Length)
            return [];
        // Stored as [frame][tile][32]; take frame 0 for a static preview.
        return bpa.Slice(tilesStart, frameStride).ToArray();
    }

    private static bool IsGroundName(string name)
    {
        return name.Length >= 3 &&
            (name.EndsWith('c') || name.EndsWith('m') ||
             name.Contains('P', StringComparison.OrdinalIgnoreCase));
    }

    private static RomArchiveEntry? FindBpl(
        IReadOnlyDictionary<string, RomArchiveEntry> entries,
        string mapBase)
    {
        if (entries.TryGetValue(mapBase, out var exact) && !LooksLikeBpc(exact))
            return exact;
        return entries.TryGetValue(mapBase.TrimEnd('A', 'B', 'C') + "A", out var alternate) &&
               !LooksLikeBpc(alternate)
            ? alternate
            : null;
    }

    private static RomArchiveEntry? FindBpc(
        IReadOnlyDictionary<string, RomArchiveEntry> entries,
        string mapBase)
    {
        var root = mapBase.TrimEnd('A', 'B', 'C');
        // Prefer exact "…c" (shared tileset) over palette names like "…C".
        var candidates = new[] { mapBase + "c", root + "c", mapBase + "C", root + "C" };
        foreach (var candidate in candidates)
        {
            if (entries.TryGetValue(candidate, out var entry) && LooksLikeBpc(entry))
                return entry;
        }

        return null;
    }

    private static bool LooksLikeBpc(RomArchiveEntry entry)
    {
        // BPC headers start with chunk width/height of 2 or 3.
        if (entry.Size < 16)
            return false;
        // Name heuristic: tile sheets end with lowercase 'c'.
        return entry.Name.EndsWith('c');
    }

    private static byte[] ReadPart(
        RomImage rom,
        IReadOnlyDictionary<string, string> metadata,
        string offsetKey,
        string sizeKey)
    {
        if (!metadata.TryGetValue(offsetKey, out var offsetText) ||
            !metadata.TryGetValue(sizeKey, out var sizeText) ||
            !int.TryParse(offsetText, out var offset) ||
            !int.TryParse(sizeText, out var size))
            throw new InvalidDataException($"Ground map is missing {offsetKey}/{sizeKey} metadata.");
        return rom.Copy(offset, size);
    }
}

public static class GroundMapRenderer
{
    public static PreviewContent Render(string name, ReadOnlySpan<byte> bpl, ReadOnlySpan<byte> bpc,
        ReadOnlySpan<byte> bma, IReadOnlyList<byte[]>? bpaFrame0Tiles = null, int animTick = 0)
    {
        if (bpl.Length < 4 || bma.Length < 12 || bpc.Length < 14)
            throw new InvalidDataException("Ground map component is too short.");

        var palettes = ResolvePalettes(bpl, animTick);
        var width = bma[0];
        var height = bma[1];
        var chunkWidth = Math.Clamp((int)bma[2], 1, 8);
        var chunkHeight = Math.Clamp((int)bma[3], 1, 8);
        var widthChunks = bma[4];
        var heightChunks = bma[5];
        // numLayers is a u8 at offset 6 (followed by padding).
        var layers = Math.Clamp((int)bma[6], 1, 2);

        var bpcHeader = ReadBpcHeader(bpc);
        var tileStride = palettes.Count > 16 ||
            BinaryPrimitives.ReadUInt16LittleEndian(bpl[2..]) == 0x8B
            ? 64
            : 32;
        // LayerSpecs: 8×s16 (chunkW/H, numTiles, 4×BPA, numChunks) then tile bytes.
        const int tileDataStart = 16;
        var tileDataLength = Math.Max(0, (bpcHeader.NumTiles - 1) * tileStride);
        if (tileDataStart + tileDataLength > bpc.Length)
            throw new InvalidDataException("Ground BPC tile data is truncated.");

        // Concatenate BPC tiles + BPA frame-0 tiles so high tile indices resolve.
        var bpaExtra = 0;
        if (bpaFrame0Tiles is not null)
        {
            foreach (var frame in bpaFrame0Tiles)
                bpaExtra += frame.Length;
        }

        var tileData = new byte[tileDataLength + bpaExtra];
        bpc.Slice(tileDataStart, tileDataLength).CopyTo(tileData);
        var bpaWrite = tileDataLength;
        if (bpaFrame0Tiles is not null)
        {
            foreach (var frame in bpaFrame0Tiles)
            {
                frame.CopyTo(tileData.AsSpan(bpaWrite));
                bpaWrite += frame.Length;
            }
        }

        var mappingStart = tileDataStart + tileDataLength;
        var chunkArea = chunkWidth * chunkHeight;
        var chunkCount = Math.Max(1, bpcHeader.NumChunks - 1);
        if (chunkArea <= 0 || mappingStart + (chunkCount - 1) * chunkArea * 2 > bpc.Length)
            throw new InvalidDataException("Ground BPC chunk mapping is truncated.");
        var chunkMappings = new ushort[Math.Max(1, bpcHeader.NumChunks) * chunkArea];
        for (var chunk = 1; chunk < bpcHeader.NumChunks; chunk++)
        {
            for (var cell = 0; cell < chunkArea; cell++)
            {
                var sourceOffset = mappingStart + ((chunk - 1) * chunkArea + cell) * 2;
                if (sourceOffset + 2 > bpc.Length)
                    break;
                var value = BinaryPrimitives.ReadUInt16LittleEndian(bpc.Slice(sourceOffset, 2));
                chunkMappings[chunk * chunkArea + cell] = value;
            }
        }

        var layerMaps = DecodeBmaLayers(bma[12..], widthChunks, heightChunks, layers);
        var imageWidth = Math.Max(1, width * 8);
        var imageHeight = Math.Max(1, height * 8);
        if (imageWidth > 2048 || imageHeight > 2048)
            throw new InvalidDataException($"Ground map {name} is too large to preview ({width}x{height} tiles).");
        var pixels = new byte[checked(imageWidth * imageHeight * 4)];
        // Opaque backdrop so transparent tiles don't look like a blank preview.
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = 0x20;
            pixels[i + 1] = 0x20;
            pixels[i + 2] = 0x20;
            pixels[i + 3] = 255;
        }

        // Draw back → front. Upper layers (e.g. Silent Chasm clouds) store filler as
        // RGB(0,0,0) in non-zero palette indices; retail blends that to show the cliff.
        for (var layer = layers - 1; layer >= 0; layer--)
        {
            var knockoutBlack = layer < layers - 1;
            var layerMap = layerMaps[layer];
            for (var chunkY = 0; chunkY < heightChunks; chunkY++)
            {
                for (var chunkX = 0; chunkX < widthChunks; chunkX++)
                {
                    var mapIndex = chunkY * 64 + chunkX;
                    if (mapIndex < 0 || mapIndex >= layerMap.Length)
                        continue;
                    var chunkId = layerMap[mapIndex];
                    if (chunkId == 0 || chunkId >= bpcHeader.NumChunks)
                        continue;
                    var chunkOffset = chunkId * chunkArea;
                    for (var tileY = 0; tileY < chunkHeight; tileY++)
                    {
                        for (var tileX = 0; tileX < chunkWidth; tileX++)
                        {
                            var mapX = chunkX * chunkWidth + tileX;
                            var mapY = chunkY * chunkHeight + tileY;
                            if (mapX * 8 >= imageWidth || mapY * 8 >= imageHeight)
                                continue;
                            var entryIndex = chunkOffset + tileY * chunkWidth + tileX;
                            if (entryIndex < 0 || entryIndex >= chunkMappings.Length)
                                continue;
                            var entry = chunkMappings[entryIndex];
                            RenderTile(tileData, palettes, entry, tileStride, pixels, imageWidth,
                                mapX * 8, mapY * 8, knockoutBlack);
                        }
                    }
                }
            }
        }

        return new PreviewContent(name, Png: new RgbaImage(imageWidth, imageHeight, pixels).ToPng(),
            MimeType: "image/png");
    }

    private static BpcHeader ReadBpcHeader(ReadOnlySpan<byte> bpc)
    {
        if (bpc.Length < 16)
            throw new InvalidDataException("Ground BPC header is too short.");
        return new BpcHeader(
            BinaryPrimitives.ReadInt16LittleEndian(bpc),
            BinaryPrimitives.ReadInt16LittleEndian(bpc[2..]),
            BinaryPrimitives.ReadInt16LittleEndian(bpc[4..]),
            // bytes 6..13 = four BPA slot tile counts; numChunks is the 8th s16.
            BinaryPrimitives.ReadInt16LittleEndian(bpc[14..]));
    }

    private static IReadOnlyList<RgbaColor[]> ResolvePalettes(ReadOnlySpan<byte> bpl, int animTick)
    {
        var anim = BplPaletteAnimation.TryParse(bpl);
        if (anim is not null && anim.HasAnimations)
            return anim.ResolvePalettes(Math.Max(0, animTick));

        return ReadStaticPalettes(bpl);
    }

    private static List<RgbaColor[]> ReadStaticPalettes(ReadOnlySpan<byte> bpl)
    {
        var count = BinaryPrimitives.ReadUInt16LittleEndian(bpl);
        var eightBpp = BinaryPrimitives.ReadUInt16LittleEndian(bpl[2..]) == 0x8B;
        var result = new List<RgbaColor[]>();
        var offset = 4;
        if (eightBpp)
        {
            count = Math.Min(count, (ushort)256);
            var colors = new RgbaColor[count];
            for (var i = 0; i < count && offset + 4 <= bpl.Length; i++, offset += 4)
                colors[i] = new RgbaColor(bpl[offset], bpl[offset + 1], bpl[offset + 2],
                    i == 0 ? (byte)0 : (byte)255);
            result.Add(colors);
            return result;
        }

        count = Math.Min(count, (ushort)16);
        for (var palette = 0; palette < count; palette++)
        {
            var colors = new RgbaColor[16];
            colors[0] = new RgbaColor(0, 0, 0, 0);
            for (var color = 1; color < 16 && offset + 4 <= bpl.Length; color++, offset += 4)
                colors[color] = new RgbaColor(bpl[offset], bpl[offset + 1], bpl[offset + 2], 255);
            result.Add(colors);
        }

        if (result.Count == 0)
            result.Add(Enumerable.Repeat(new RgbaColor(0, 0, 0, 0), 16).ToArray());
        return result;
    }

    private static List<ushort[]> DecodeBmaLayers(
        ReadOnlySpan<byte> source,
        int widthChunks,
        int heightChunks,
        int layerCount)
    {
        var result = new List<ushort[]>();
        var index = 0;
        for (var layer = 0; layer < layerCount; layer++)
        {
            var map = new ushort[Math.Max(1, heightChunks) * 64];
            var previousRow = new ushort[64];
            for (var row = 0; row < heightChunks; row++)
            {
                var output = map.AsSpan(row * 64, 64);
                var column = 0;
                while (column < widthChunks)
                {
                    if (index >= source.Length)
                        throw new InvalidDataException("BMA layer data is truncated.");
                    var command = source[index++];
                    // Match BmaLayerNrlDecompressor in ground_bg.c:
                    //  >=0xC0: literal pairs (new 3-byte value each pair)
                    //  >=0x80: repeat one 3-byte value
                    //  else:   zeros / copy-from-previous
                    if (command >= 0xC0)
                    {
                        var pairCount = command - 0xBF;
                        for (var pair = 0; pair < pairCount && column < widthChunks; pair++)
                        {
                            if (index + 3 > source.Length)
                                throw new InvalidDataException("BMA chunk command is truncated.");
                            var value = source[index] | source[index + 1] << 8 | source[index + 2] << 16;
                            index += 3;
                            WriteChunkPair(output, previousRow, ref column, widthChunks, row > 0,
                                (ushort)(value & 0xFFF), (ushort)((value >> 12) & 0xFFF), xor: row > 0);
                        }
                    }
                    else if (command >= 0x80)
                    {
                        var pairCount = command - 0x7F;
                        if (index + 3 > source.Length)
                            throw new InvalidDataException("BMA chunk command is truncated.");
                        var value = source[index] | source[index + 1] << 8 | source[index + 2] << 16;
                        index += 3;
                        var packedA = (ushort)(value & 0xFFF);
                        var packedB = (ushort)((value >> 12) & 0xFFF);
                        for (var pair = 0; pair < pairCount && column < widthChunks; pair++)
                        {
                            WriteChunkPair(output, previousRow, ref column, widthChunks, row > 0,
                                packedA, packedB, xor: row > 0);
                        }
                    }
                    else
                    {
                        var pairCount = command + 1;
                        for (var pair = 0; pair < pairCount && column < widthChunks; pair++)
                        {
                            // Row 0: zeros. Later rows: copy previous (xor with 0).
                            WriteChunkPair(output, previousRow, ref column, widthChunks, row > 0,
                                0, 0, xor: row > 0);
                        }
                    }
                }

                // Pad remainder of the 64-wide row with zeros like the game.
                for (var pad = column; pad < 64; pad++)
                    output[pad] = 0;
                output.CopyTo(previousRow);
            }
            result.Add(map);
        }

        return result;
    }

    private static void WriteChunkPair(
        Span<ushort> output,
        ReadOnlySpan<ushort> previousRow,
        ref int column,
        int widthChunks,
        bool hasPrevious,
        ushort packedA,
        ushort packedB,
        bool xor)
    {
        var first = packedA;
        var second = packedB;
        if (xor && hasPrevious)
        {
            first = (ushort)(previousRow[column] ^ first);
            if (column + 1 < 64)
                second = (ushort)(previousRow[column + 1] ^ second);
        }

        output[column++] = first;
        if (column < widthChunks)
            output[column++] = second;
        else if (column < 64)
            output[column++] = second;
    }

    private static void RenderTile(
        ReadOnlySpan<byte> tileData,
        IReadOnlyList<RgbaColor[]> palettes,
        ushort entry,
        int tileStride,
        byte[] pixels,
        int width,
        int destinationX,
        int destinationY,
        bool knockoutBlack = false)
    {
        var tileIndex = entry & 0x3FF;
        // Tile 0 is the implied empty tile and is not stored in the BPC blob.
        if (tileIndex == 0)
            return;
        var tileOffset = (tileIndex - 1) * tileStride;
        if (tileOffset < 0 || tileOffset + tileStride > tileData.Length)
            return;
        var paletteBank = (entry >> 12) & 0xF;
        var palette = palettes.Count == 1 && paletteBank * 16 + 16 <= palettes[0].Length
            ? palettes[0].AsSpan(paletteBank * 16, 16).ToArray()
            : palettes[Math.Min(paletteBank, palettes.Count - 1)];
        var hFlip = (entry & 0x400) != 0;
        var vFlip = (entry & 0x800) != 0;
        var bpp8 = tileStride == 64;

        for (var row = 0; row < 8; row++)
        {
            for (var column = 0; column < 8; column++)
            {
                var sourceX = hFlip ? 7 - column : column;
                var sourceY = vFlip ? 7 - row : row;
                var index = bpp8
                    ? tileData[tileOffset + sourceY * 8 + sourceX]
                    : Read4Bpp(tileData, tileOffset, sourceX, sourceY);
                if (index >= palette.Length || index == 0)
                    continue;
                var color = palette[index];
                // Dual-layer maps: non-zero palette blacks on the front layer are
                // transparent under retail BLDCNT blending (see Silent Chasm clouds).
                if (knockoutBlack && color.R == 0 && color.G == 0 && color.B == 0)
                    continue;
                var pixelOffset = ((destinationY + row) * width + destinationX + column) * 4;
                pixels[pixelOffset] = color.R;
                pixels[pixelOffset + 1] = color.G;
                pixels[pixelOffset + 2] = color.B;
                pixels[pixelOffset + 3] = color.A;
            }
        }
    }

    private static int Read4Bpp(ReadOnlySpan<byte> data, int tileOffset, int x, int y)
    {
        var packed = data[tileOffset + y * 4 + x / 2];
        return (x & 1) == 0 ? packed & 0xF : packed >> 4;
    }

    private readonly record struct BpcHeader(int ChunkWidth, int ChunkHeight, int NumTiles, int NumChunks);
}
