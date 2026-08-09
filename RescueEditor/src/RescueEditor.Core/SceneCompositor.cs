namespace RescueEditor.Core;

public sealed class ScenePreviewState
{
    public int MapId { get; set; }
    public int Group { get; set; }
    public int Sector { get; set; }
    public int CommandIndex { get; set; }
    public CompactPos? Camera { get; set; }
    public string? Dialogue { get; set; }
    public int? PortraitSpeaker { get; set; }
    public int? PortraitEmotion { get; set; }
    public int? MusicId { get; set; }
    public List<SceneEntity> VisibleEntities { get; } = new();
    public List<string> Notes { get; } = new();
    public bool SimulationIncomplete { get; set; }
}

public static class SceneCompositor
{
    public static PreviewContent? RenderMapBackground(RomImage rom, Scene scene)
    {
        var asset = scene.Map?.GroundMapAsset;
        if (asset is null)
            return null;
        return GroundMapIndexer.Render(rom, asset);
    }

    public static byte[] ComposeScenePng(
        RomImage rom,
        Scene scene,
        int group = 0,
        int sector = 0,
        SceneEntity? selected = null,
        bool showLives = true,
        bool showObjects = true,
        bool showEffects = true,
        bool showEvents = true,
        bool showLinks = true,
        bool drawLabels = false,
        bool showGrid = false,
        string? hudDialogue = null,
        IReadOnlyCollection<int>? visibleSectors = null,
        ActorSpriteAtlas? actorSprites = null,
        ObjectSpriteAtlas? objectSprites = null,
        SceneEntity? excludeLive = null)
    {
        var background = RenderMapBackground(rom, scene);
        RgbaImage image;
        if (background?.Png is not null)
        {
            image = RgbaImage.FromPng(background.Png) ?? CreateFallbackCanvas(scene);
        }
        else
        {
            image = CreateFallbackCanvas(scene);
        }

        if (showGrid)
            DrawGrid(image);

        foreach (var sectorData in EnumerateVisibleSectors(scene, group, sector, visibleSectors))
        {
            if (showLives)
                DrawLives(image, rom, sectorData.Lives, selected, drawLabels, actorSprites, excludeLive);
            if (showObjects)
                DrawObjects(image, sectorData.Objects, selected, drawLabels, objectSprites);
            if (showEffects)
                DrawEntities(image, sectorData.Effects, selected, 0xC0, 0x60, 0xFF, drawLabels);
            if (showEvents)
                DrawEntities(image, sectorData.Events, selected, 0x40, 0xE0, 0x80, drawLabels);
        }

        if (showLinks)
        {
            foreach (var link in scene.Links)
                DrawRect(image, link.Position.PixelX, link.Position.PixelY,
                    Math.Max(8, link.Width * 8), Math.Max(8, link.Height * 8),
                    0xFF, 0x80, 0x80, selected: false, filled: false);
        }

        if (!string.IsNullOrWhiteSpace(hudDialogue))
            DrawHudBanner(image, Truncate(hudDialogue, 48));

        return image.ToPng();
    }

    public static ScenePreviewState BuildPreviewState(
        RomImage rom,
        Scene scene,
        Charmap? charmap,
        int group,
        int sector,
        int commandIndex,
        ScriptRefData? stationOverride = null)
    {
        var state = new ScenePreviewState
        {
            MapId = scene.MapId,
            Group = group,
            Sector = sector,
            CommandIndex = Math.Max(0, commandIndex),
        };

        var sectorData = scene.Groups.ElementAtOrDefault(group)?.Sectors.ElementAtOrDefault(sector);
        if (sectorData is null)
        {
            state.Notes.Add("Sector is empty or missing.");
            return state;
        }

        state.VisibleEntities.AddRange(sectorData.Lives);
        state.VisibleEntities.AddRange(sectorData.Objects);
        state.VisibleEntities.AddRange(sectorData.Effects);

        var station = stationOverride ?? sectorData.Stations.FirstOrDefault();
        if (station is null)
        {
            state.Notes.Add("No station script in this sector.");
            return state;
        }

        var limit = Math.Min(state.CommandIndex + 1, station.Commands.Count);
        for (var i = 0; i < limit; i++)
        {
            var command = station.Commands[i];
            switch (command.Op)
            {
                case 0x08:
                    state.Notes.Add($"SELECT_MAP {command.Arg1}");
                    break;
                case 0x0C:
                    state.Notes.Add($"SELECT_ENTITIES group={command.ArgShort} sector={command.ArgByte}");
                    break;
                case 0x2E:
                    state.PortraitSpeaker = command.ArgShort;
                    state.PortraitEmotion = command.Arg1;
                    break;
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x37:
                case 0x38:
                case 0x39:
                    if (rom.TryPointerToOffset(command.ArgPtr, out var textOffset) && charmap is not null)
                        state.Dialogue = charmap.DecodeRomString(rom, textOffset, 768);
                    break;
                case 0x46:
                    state.MusicId = command.Arg1;
                    break;
                case 0x86:
                case 0x98:
                    state.Camera = new CompactPos((byte)Math.Clamp(command.Arg1, 0, 255),
                        (byte)Math.Clamp(command.Arg2, 0, 255), 0, 0);
                    break;
                case 0xB3:
                case 0xB4:
                case 0xB8:
                case 0xB9:
                case 0xBA:
                case 0xBB:
                case 0xBC:
                    state.SimulationIncomplete = true;
                    state.Notes.Add($"Branch {ScriptOpcodeNames.GetName(command.Op)} requires runtime state.");
                    break;
                case 0x6A:
                case 0x6B:
                case 0x7A:
                    state.Notes.Add($"{ScriptOpcodeNames.GetName(command.Op)} movement is summarized only.");
                    break;
            }
        }

        return state;
    }

    /// <summary>
    /// Sectors whose actors should appear on the map. When <paramref name="visibleSectors"/>
    /// is null, only <paramref name="sector"/> is returned (legacy single-sector preview).
    /// </summary>
    public static IEnumerable<SceneSector> EnumerateVisibleSectors(
        Scene scene,
        int group,
        int sector,
        IReadOnlyCollection<int>? visibleSectors)
    {
        var groupData = scene.Groups.ElementAtOrDefault(group);
        if (groupData is null)
            yield break;

        if (visibleSectors is null)
        {
            var single = groupData.Sectors.ElementAtOrDefault(sector);
            if (single is not null)
                yield return single;
            yield break;
        }

        foreach (var candidate in groupData.Sectors)
        {
            if (visibleSectors.Contains(candidate.Sector))
                yield return candidate;
        }
    }

    public static IEnumerable<SceneEntity> EnumerateVisibleEntities(
        Scene scene,
        int group,
        int sector,
        IReadOnlyCollection<int>? visibleSectors,
        bool showLives = true,
        bool showObjects = true,
        bool showEffects = true,
        bool showEvents = true)
    {
        foreach (var sectorData in EnumerateVisibleSectors(scene, group, sector, visibleSectors))
        {
            if (showEvents) foreach (var e in sectorData.Events) yield return e;
            if (showEffects) foreach (var e in sectorData.Effects) yield return e;
            if (showObjects) foreach (var e in sectorData.Objects) yield return e;
            if (showLives) foreach (var e in sectorData.Lives) yield return e;
        }
    }

    private static RgbaImage CreateFallbackCanvas(Scene scene)
    {
        var width = 240;
        var height = 160;
        var pixels = new byte[width * height * 4];
        for (var i = 0; i < pixels.Length; i += 4)
        {
            pixels[i] = 0x30;
            pixels[i + 1] = 0x30;
            pixels[i + 2] = 0x38;
            pixels[i + 3] = 255;
        }
        return new RgbaImage(width, height, pixels);
    }

    private static void DrawGrid(RgbaImage image)
    {
        for (var x = 0; x < image.Width; x += 8)
            DrawVLine(image, x, 0x50, 0x50, 0x58, 90);
        for (var y = 0; y < image.Height; y += 8)
            DrawHLine(image, y, 0x50, 0x50, 0x58, 90);
    }

    private static void DrawVLine(RgbaImage image, int x, byte r, byte g, byte b, byte a)
    {
        if (x < 0 || x >= image.Width) return;
        for (var y = 0; y < image.Height; y++)
        {
            var offset = (y * image.Width + x) * 4;
            Blend(image.Pixels, offset, r, g, b, a);
        }
    }

    private static void DrawHLine(RgbaImage image, int y, byte r, byte g, byte b, byte a)
    {
        if (y < 0 || y >= image.Height) return;
        for (var x = 0; x < image.Width; x++)
        {
            var offset = (y * image.Width + x) * 4;
            Blend(image.Pixels, offset, r, g, b, a);
        }
    }

    private static void Blend(byte[] pixels, int offset, byte r, byte g, byte b, byte a)
    {
        var inv = 255 - a;
        pixels[offset] = (byte)((pixels[offset] * inv + r * a) / 255);
        pixels[offset + 1] = (byte)((pixels[offset + 1] * inv + g * a) / 255);
        pixels[offset + 2] = (byte)((pixels[offset + 2] * inv + b * a) / 255);
        pixels[offset + 3] = 255;
    }

    private static void DrawLives(
        RgbaImage image,
        RomImage rom,
        IEnumerable<SceneEntity> entities,
        SceneEntity? selected,
        bool drawLabels,
        ActorSpriteAtlas? actorSprites,
        SceneEntity? excludeLive = null)
    {
        foreach (var entity in entities)
        {
            if (excludeLive is not null && ReferenceEquals(excludeLive, entity))
                continue;
            var selectedMatch = IsSelected(selected, entity);
            var sprite = actorSprites?.TryGetForLive(rom, null, entity.TypeId);
            if (sprite is not null)
                DrawSpriteEntity(image, entity, sprite, selectedMatch, drawLabels);
            else
                DrawPlaceholder(image, entity, selectedMatch, drawLabels, 0x40, 0xC0, 0xFF);
        }
    }

    /// <summary>Public blit for Scene Play (player sprite redraw).</summary>
    public static void BlitSpritePublic(RgbaImage destination, RgbaImage sprite, int x, int y, bool flipH = false) =>
        BlitSprite(destination, sprite, x, y, flipH);

    /// <summary>Nearest-neighbor scaled blit (emotion overlays).</summary>
    public static void BlitSpriteScaledPublic(
        RgbaImage destination, RgbaImage sprite, int x, int y, int scale, bool flipH = false)
    {
        if (scale <= 1)
        {
            BlitSprite(destination, sprite, x, y, flipH);
            return;
        }

        for (var row = 0; row < sprite.Height; row++)
        for (var col = 0; col < sprite.Width; col++)
        {
            var srcCol = flipH ? sprite.Width - 1 - col : col;
            var src = (row * sprite.Width + srcCol) * 4;
            var a = sprite.Pixels[src + 3];
            if (a < 8) continue;
            var r = sprite.Pixels[src];
            var g = sprite.Pixels[src + 1];
            var b = sprite.Pixels[src + 2];
            var dx0 = x + col * scale;
            var dy0 = y + row * scale;
            for (var sy = 0; sy < scale; sy++)
            for (var sx = 0; sx < scale; sx++)
            {
                var px = dx0 + sx;
                var py = dy0 + sy;
                if (px < 0 || py < 0 || px >= destination.Width || py >= destination.Height)
                    continue;
                Blend(destination.Pixels, (py * destination.Width + px) * 4, r, g, b, a);
            }
        }
    }

    /// <summary>Public filled rect for Scene Play fallback player marker.</summary>
    public static void FillRectPublic(
        RgbaImage image, int x, int y, int w, int h, byte r, byte g, byte b, byte a)
    {
        for (var py = y; py < y + h; py++)
        for (var px = x; px < x + w; px++)
        {
            if (px < 0 || py < 0 || px >= image.Width || py >= image.Height)
                continue;
            Blend(image.Pixels, (py * image.Width + px) * 4, r, g, b, a);
        }
    }

    private static void DrawObjects(
        RgbaImage image,
        IEnumerable<SceneEntity> entities,
        SceneEntity? selected,
        bool drawLabels,
        ObjectSpriteAtlas? objectSprites)
    {
        foreach (var entity in entities)
        {
            var selectedMatch = IsSelected(selected, entity);
            var sprite = objectSprites?.TryGetForObject(entity.TypeId);
            if (sprite is not null)
                DrawSpriteEntity(image, entity, sprite, selectedMatch, drawLabels);
            else
                DrawPlaceholder(image, entity, selectedMatch, drawLabels, 0xF0, 0xC0, 0x40);
        }
    }

    private static bool IsSelected(SceneEntity? selected, SceneEntity entity) =>
        selected is not null &&
        selected.RomOffset == entity.RomOffset &&
        selected.Index == entity.Index &&
        selected.Kind == entity.Kind;

    private static void DrawSpriteEntity(
        RgbaImage image,
        SceneEntity entity,
        RgbaImage sprite,
        bool selectedMatch,
        bool drawLabels)
    {
        var hitW = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
        var hitH = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
        var cx = entity.PixelX + hitW / 2;
        var cy = entity.PixelY + hitH / 2;
        var drawX = cx - sprite.Width / 2;
        var drawY = cy - sprite.Height / 2;
        BlitSprite(image, sprite, drawX, drawY, flipH: false);
        if (selectedMatch)
            DrawRect(image, drawX - 1, drawY - 1, sprite.Width + 2, sprite.Height + 2,
                0xFF, 0xFF, 0xFF, selected: true, filled: false);
        if (drawLabels)
            DrawIndexLabel(image, drawX + 1, drawY + 1, entity.Index, selectedMatch);
    }

    private static void DrawPlaceholder(
        RgbaImage image,
        SceneEntity entity,
        bool selectedMatch,
        bool drawLabels,
        byte r, byte g, byte b)
    {
        var size = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
        var height = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
        DrawRect(image, entity.PixelX, entity.PixelY, size, height, r, g, b,
            selectedMatch, filled: true);
        if (drawLabels)
            DrawIndexLabel(image, entity.PixelX + 1, entity.PixelY + 1, entity.Index, selectedMatch);
    }

    private static void BlitSprite(RgbaImage destination, RgbaImage sprite, int x, int y, bool flipH)
    {
        for (var row = 0; row < sprite.Height; row++)
        {
            for (var col = 0; col < sprite.Width; col++)
            {
                var srcCol = flipH ? sprite.Width - 1 - col : col;
                var src = (row * sprite.Width + srcCol) * 4;
                var a = sprite.Pixels[src + 3];
                if (a == 0)
                    continue;
                var px = x + col;
                var py = y + row;
                if (px < 0 || py < 0 || px >= destination.Width || py >= destination.Height)
                    continue;
                var dst = (py * destination.Width + px) * 4;
                if (a == 255)
                {
                    destination.Pixels[dst] = sprite.Pixels[src];
                    destination.Pixels[dst + 1] = sprite.Pixels[src + 1];
                    destination.Pixels[dst + 2] = sprite.Pixels[src + 2];
                    destination.Pixels[dst + 3] = 255;
                }
                else
                {
                    Blend(destination.Pixels, dst,
                        sprite.Pixels[src], sprite.Pixels[src + 1], sprite.Pixels[src + 2], a);
                }
            }
        }
    }

    private static void DrawEntities(
        RgbaImage image,
        IEnumerable<SceneEntity> entities,
        SceneEntity? selected,
        byte r, byte g, byte b,
        bool drawLabels)
    {
        foreach (var entity in entities)
        {
            var selectedMatch = selected is not null &&
                selected.RomOffset == entity.RomOffset &&
                selected.Index == entity.Index &&
                selected.Kind == entity.Kind;
            var size = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
            var height = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
            DrawRect(image, entity.PixelX, entity.PixelY, size, height, r, g, b,
                selectedMatch, filled: true);
            if (drawLabels)
                DrawIndexLabel(image, entity.PixelX + 1, entity.PixelY + 1, entity.Index, selectedMatch);
        }
    }

    private static void DrawIndexLabel(RgbaImage image, int x, int y, int index, bool selected)
    {
        var text = index.ToString("00");
        // Simple 3x5 digit stamps for 0-9.
        var colorR = selected ? (byte)255 : (byte)255;
        var colorG = selected ? (byte)255 : (byte)255;
        var colorB = selected ? (byte)255 : (byte)255;
        var cursor = x;
        foreach (var ch in text)
        {
            if (ch is < '0' or > '9')
                continue;
            StampDigit(image, cursor, y, ch - '0', colorR, colorG, colorB);
            cursor += 4;
        }
    }

    private static readonly byte[] DigitGlyphs =
    [
        // 0
        0b111, 0b101, 0b101, 0b101, 0b111,
        // 1
        0b010, 0b110, 0b010, 0b010, 0b111,
        // 2
        0b111, 0b001, 0b111, 0b100, 0b111,
        // 3
        0b111, 0b001, 0b111, 0b001, 0b111,
        // 4
        0b101, 0b101, 0b111, 0b001, 0b001,
        // 5
        0b111, 0b100, 0b111, 0b001, 0b111,
        // 6
        0b111, 0b100, 0b111, 0b101, 0b111,
        // 7
        0b111, 0b001, 0b001, 0b001, 0b001,
        // 8
        0b111, 0b101, 0b111, 0b101, 0b111,
        // 9
        0b111, 0b101, 0b111, 0b001, 0b111,
    ];

    private static void StampDigit(RgbaImage image, int x, int y, int digit, byte r, byte g, byte b)
    {
        var baseIndex = digit * 5;
        for (var row = 0; row < 5; row++)
        {
            var bits = DigitGlyphs[baseIndex + row];
            for (var col = 0; col < 3; col++)
            {
                if ((bits & (1 << (2 - col))) == 0)
                    continue;
                var px = x + col;
                var py = y + row;
                if (px < 0 || py < 0 || px >= image.Width || py >= image.Height)
                    continue;
                var offset = (py * image.Width + px) * 4;
                image.Pixels[offset] = r;
                image.Pixels[offset + 1] = g;
                image.Pixels[offset + 2] = b;
                image.Pixels[offset + 3] = 255;
            }
        }
    }

    private static void DrawHudBanner(RgbaImage image, string text)
    {
        var height = 14;
        var y0 = Math.Max(0, image.Height - height);
        for (var y = y0; y < image.Height; y++)
        {
            for (var x = 0; x < image.Width; x++)
            {
                var offset = (y * image.Width + x) * 4;
                Blend(image.Pixels, offset, 0x10, 0x10, 0x18, 180);
            }
        }
        var cursor = 4;
        foreach (var ch in text.ToUpperInvariant())
        {
            if (ch is >= '0' and <= '9')
            {
                StampDigit(image, cursor, y0 + 4, ch - '0', 0xE0, 0xE0, 0xFF);
                cursor += 4;
            }
            else if (ch == ' ')
            {
                cursor += 3;
            }
            else
            {
                // Mark non-digit with a dot
                var offset = ((y0 + 8) * image.Width + cursor) * 4;
                if (cursor < image.Width)
                {
                    image.Pixels[offset] = 0xE0;
                    image.Pixels[offset + 1] = 0xE0;
                    image.Pixels[offset + 2] = 0xFF;
                    image.Pixels[offset + 3] = 255;
                }
                cursor += 3;
            }
            if (cursor >= image.Width - 4)
                break;
        }
    }

    private static void DrawRect(
        RgbaImage image,
        int x,
        int y,
        int width,
        int height,
        byte r, byte g, byte b,
        bool selected,
        bool filled)
    {
        var alpha = selected ? (byte)220 : (byte)160;
        for (var row = 0; row < height; row++)
        {
            for (var col = 0; col < width; col++)
            {
                var px = x + col;
                var py = y + row;
                if (px < 0 || py < 0 || px >= image.Width || py >= image.Height)
                    continue;
                var edge = row == 0 || col == 0 || row == height - 1 || col == width - 1;
                if (!filled && !edge)
                    continue;
                var offset = (py * image.Width + px) * 4;
                image.Pixels[offset] = selected && edge ? (byte)255 : r;
                image.Pixels[offset + 1] = selected && edge ? (byte)255 : g;
                image.Pixels[offset + 2] = selected && edge ? (byte)255 : b;
                image.Pixels[offset + 3] = edge || selected ? (byte)255 : alpha;
            }
        }
    }

    private static string Truncate(string text, int max) =>
        text.Length <= max ? text : text[..(max - 1)] + "…";
}
