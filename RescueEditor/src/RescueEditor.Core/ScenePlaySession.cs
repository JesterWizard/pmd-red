namespace RescueEditor.Core;

/// <summary>Software ground play session: free roam and/or scripted cutscene (Tiny Woods intro).</summary>
public sealed class ScenePlaySession
{
    public const int CameraWidth = 240;
    public const int CameraHeight = 160;
    public const double MoveSpeedPixelsPerSecond = 64;

    private readonly RomImage _rom;
    private readonly Scene _scene;
    private readonly ActorSpriteAtlas? _actorSprites;
    private readonly ObjectSpriteAtlas? _objectSprites;
    private readonly PortraitAtlas? _portraits;
    private readonly EmotionEffectAtlas? _effects;
    private readonly GroundCollisionMap? _collision;
    private readonly SceneEntity? _playerLive;
    private readonly HashSet<GbaButton> _held = new();
    private readonly List<int> _pendingSfx = new();
    private readonly GroundScriptVm? _script;
    private int? _lastMusicId;
    private int _animTick;

    public ScenePlaySession(
        RomImage rom,
        Scene scene,
        int group,
        int sector,
        ActorSpriteAtlas? actorSprites = null,
        ObjectSpriteAtlas? objectSprites = null,
        GroundCollisionMap? collision = null,
        int? mapWidthPixels = null,
        int? mapHeightPixels = null,
        Charmap? charmap = null,
        PlayAppearance? appearance = null,
        bool? scripted = null,
        RomProfile? profile = null,
        PortraitAtlas? portraits = null)
    {
        _rom = rom;
        _scene = scene;
        _actorSprites = actorSprites;
        _objectSprites = objectSprites;
        var repoRoot = CatalogBuilder.FindRepositoryRoot(rom.Path);

        var (playGroup, playSector) = ScenePlayPresets.ResolvePlayTarget(scene, group, sector);
        ActiveGroup = playGroup;
        ActiveSector = playSector;

        Appearance = appearance ?? PlayAppearance.CharmanderAndBulbasaur;
        _actorSprites?.ApplyAppearance(Appearance);

        MapWidthPixels = ResolveMapWidth(rom, scene, mapWidthPixels, mapHeightPixels, out var height);
        MapHeightPixels = height;

        _collision = collision ?? TryLoadCollision(rom, scene);

        var sectorData = scene.Groups.ElementAtOrDefault(ActiveGroup)?.Sectors.ElementAtOrDefault(ActiveSector);
        _playerLive = sectorData?.Lives.FirstOrDefault(IsPlayerKind);
        if (_playerLive is not null)
        {
            PlayerX = _playerLive.PixelX;
            PlayerY = _playerLive.PixelY;
            PlayerTypeId = _playerLive.TypeId;
        }
        else
        {
            PlayerX = MapWidthPixels / 2.0;
            PlayerY = MapHeightPixels / 2.0;
            PlayerTypeId = 1;
        }

        PlayerSpecies = Appearance.TryResolveLiveType(PlayerTypeId) ?? Appearance.PlayerSpecies;
        PartnerSpecies = Appearance.PartnerSpecies;

        var useScript = scripted ?? ScenePlayPresets.IsTinyWoodsIntro(scene, ActiveGroup, ActiveSector);
        _portraits = portraits ?? (useScript ? new PortraitAtlas(rom, repoRoot) : null);
        _effects = useScript ? new EmotionEffectAtlas(repoRoot, rom) : null;
        if (useScript)
        {
            IsScripted = true;
            _script = new GroundScriptVm(
                rom, scene, ActiveGroup, ActiveSector, charmap,
                profile: profile ?? RomProfile.Us10,
                appearance: Appearance);
            AllowFreeRoam = false;
        }
        else
        {
            BootstrapStation(sectorData);
            AllowFreeRoam = true;
        }

        UpdateCamera();
        UpdateActiveLink();
    }

    public PlayAppearance Appearance { get; }
    public short PlayerSpecies { get; }
    public short PartnerSpecies { get; }
    public bool IsScripted { get; }
    public bool AllowFreeRoam { get; private set; }
    public GroundScriptVm? ScriptVm => _script;
    public int MapWidthPixels { get; }
    public int MapHeightPixels { get; }
    public double PlayerX { get; private set; }
    public double PlayerY { get; private set; }
    public byte PlayerTypeId { get; }
    public int CameraX { get; private set; }
    public int CameraY { get; private set; }
    public int ActiveGroup { get; private set; }
    public int ActiveSector { get; private set; }
    public int? MusicId { get; private set; }
    public string? Dialogue => _script?.Dialogue;

    /// <summary>Dialogue cleaned for on-screen textbox (tags stripped, current WAIT_PRESS page).</summary>
    public string DisplayDialogue =>
        _script?.DialoguePage
        ?? DialogueFormatter.ForTextbox(Dialogue, PlayerSpecies, PartnerSpecies);

    public PlayDialogueMode DialogueMode => _script?.DialogueMode ?? PlayDialogueMode.None;
    public string? DialogueSpeakerLabel => _script?.DialogueSpeakerLabel;
    public bool DialogueUsesSpeechIcon => _script?.DialogueUsesSpeechIcon == true;
    public byte FadeAlpha => _script?.FadeAlpha ?? 0;

    public bool WaitingForAdvance => _script?.WaitingForAdvance == true;
    public bool ScriptFinished => _script?.Finished == true;
    public SceneLink? ActiveLink { get; private set; }
    public GroundCollisionMap? Collision => _collision;

    public void SetButton(GbaButton button, bool down)
    {
        if (down) _held.Add(button);
        else _held.Remove(button);

        if (down && button == GbaButton.A && WaitingForAdvance)
            _script?.AdvanceDialogue();
    }

    public void AdvanceDialogue() => _script?.AdvanceDialogue();

    public void Tick(double dtSeconds)
    {
        if (dtSeconds <= 0)
            return;

        if (_script is not null && !_script.Finished)
        {
            _script.Tick(dtSeconds);
            _animTick += Math.Max(1, (int)Math.Round(dtSeconds * 60));
            ActiveGroup = _script.ActiveGroup;
            ActiveSector = _script.ActiveSector;
            if (_script.MusicId is int song)
                MusicId = song;
            foreach (var id in _script.DrainPendingSfx())
                _pendingSfx.Add(id);

            SyncPlayerFromLive();
            UpdateCamera();
            if (_script.Finished)
                AllowFreeRoam = true;
            return;
        }

        if (!AllowFreeRoam)
            return;

        _animTick += Math.Max(1, (int)Math.Round(dtSeconds * 60));

        var dx = 0.0;
        var dy = 0.0;
        if (_held.Contains(GbaButton.Left)) dx -= 1;
        if (_held.Contains(GbaButton.Right)) dx += 1;
        if (_held.Contains(GbaButton.Up)) dy -= 1;
        if (_held.Contains(GbaButton.Down)) dy += 1;

        if (dx != 0 || dy != 0)
        {
            var len = Math.Sqrt(dx * dx + dy * dy);
            dx = dx / len * MoveSpeedPixelsPerSecond * dtSeconds;
            dy = dy / len * MoveSpeedPixelsPerSecond * dtSeconds;
            TryMove(dx, dy);
        }

        UpdateCamera();
        UpdateActiveLink();
    }

    public IReadOnlyList<int> DrainPendingSfx()
    {
        var copy = _pendingSfx.ToArray();
        _pendingSfx.Clear();
        return copy;
    }

    public bool TryConsumeMusicChange(out int songId)
    {
        if (MusicId is int id && id != _lastMusicId)
        {
            _lastMusicId = id;
            songId = id;
            return true;
        }
        songId = 0;
        return false;
    }

    public byte[] RenderFrame()
    {
        var repoRoot = CatalogBuilder.FindRepositoryRoot(_rom.Path);
        var font = PixelFont.Load(repoRoot);

        // Full map background + objects; lives drawn animated below.
        var fullPng = SceneCompositor.ComposeScenePng(
            _rom,
            _scene,
            group: ActiveGroup,
            sector: ActiveSector,
            showLives: false,
            showObjects: true,
            showEffects: false,
            showEvents: false,
            showLinks: false,
            excludeLive: null,
            hudDialogue: null,
            actorSprites: _actorSprites,
            objectSprites: _objectSprites);

        var full = RgbaImage.FromPng(fullPng) ?? new RgbaImage(
            Math.Max(CameraWidth, MapWidthPixels),
            Math.Max(CameraHeight, MapHeightPixels),
            new byte[Math.Max(CameraWidth, MapWidthPixels) * Math.Max(CameraHeight, MapHeightPixels) * 4]);

        DrawAnimatedLives(full);

        if (AllowFreeRoam)
            DrawPlayer(full);

        // Game view is the GBA camera window, not the full map.
        var camera = CropCamera(full, CameraX, CameraY, CameraWidth, CameraHeight);

        GbaDialogueHud.Draw(
            camera,
            font,
            DialogueMode,
            string.IsNullOrWhiteSpace(DisplayDialogue) ? null : DisplayDialogue,
            DialogueSpeakerLabel,
            DialogueUsesSpeechIcon,
            quietIcon: DialogueMode == PlayDialogueMode.Quiet,
            WaitingForAdvance,
            _animTick,
            _script?.VisiblePortraits,
            _portraits,
            FadeAlpha);

        return camera.ToPng();
    }

    private void DrawAnimatedLives(RgbaImage image)
    {
        if (_actorSprites is null)
            return;

        if (_script is not null && _script.LiveIndices.Any())
        {
            foreach (var i in _script.LiveIndices.OrderBy(x => x))
            {
                if (!_script.TryGetLivePixelPos(i, out var px, out var py))
                    continue;
                var species = _script.LiveSpecies.TryGetValue(i, out var sp) ? sp : (short)0;
                if (species <= 0)
                    continue;
                DrawLiveSprite(image, i, species, px, py);
            }
            return;
        }

        var sector = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector);
        if (sector is null)
            return;

        for (var i = 0; i < sector.Lives.Count; i++)
        {
            var live = sector.Lives[i];
            var species = Appearance.TryResolveLiveType(live.TypeId)
                ?? GroundLivesTypes.ResolvePreviewSpecies(_rom, RomProfile.Us10, live.TypeId);
            if (species <= 0)
                continue;
            DrawLiveSprite(image, i, species, live.PixelX, live.PixelY);
        }
    }

    private void DrawLiveSprite(RgbaImage image, int liveIndex, short species, double pixelX, double pixelY)
    {
        if (_actorSprites is null)
            return;

        var anim = _script?.GetAnimation(liveIndex) ?? GroundScriptVm.AnimIdle;
        var moving = _script?.IsLiveMoving(liveIndex) == true;
        var dir = _script?.GetDirection(liveIndex) ?? GroundScriptVm.DirSouth;
        var drawn = _actorSprites.TryGetAnimatedSprite(species, anim, dir, _animTick, moving);
        var sprite = drawn?.Image ?? _actorSprites.TryGetSpeciesSprite(species);
        if (sprite is null)
            return;

        var flip = drawn?.FlipH ?? GroundScriptVm.ShouldFlipHorizontal(dir);

        var ix = (int)Math.Round(pixelX);
        var iy = (int)Math.Round(pixelY);
        GbaDialogueHud.DrawDropShadow(image, ix + 4, iy + 2);

        var x = ix - sprite.Width / 2 + 4;
        var y = iy - sprite.Height + 8;
        if (anim == GroundScriptVm.AnimSleep)
            y = iy - sprite.Height / 3;
        SceneCompositor.BlitSpritePublic(image, sprite, x, y, flip);

        // Sleep Z markers (AX sleep has no efob; draw light Zs like retail flavor).
        if (anim == GroundScriptVm.AnimSleep)
        {
            SceneCompositor.FillRectPublic(image, ix + (flip ? -10 : 6), iy - 14, 3, 3, 0xE8, 0xE8, 0xFF, 220);
            SceneCompositor.FillRectPublic(image, ix + (flip ? -14 : 10), iy - 18, 2, 2, 0xE8, 0xE8, 0xFF, 180);
        }

        if (_script is not null &&
            _effects is not null &&
            _script.TryGetActiveEffect(liveIndex, out var effectId))
        {
            var fx = _effects.TryGet(effectId);
            if (fx is not null)
            {
                var fxX = ix + 4 - fx.Width / 2 + (flip ? -6 : 6);
                var fxY = y - fx.Height - 2;
                SceneCompositor.BlitSpritePublic(image, fx, fxX, fxY);
            }
        }
    }

    private void SyncPlayerFromLive()
    {
        if (_script is not null && _script.TryGetLivePixelPos(0, out var px, out var py))
        {
            PlayerX = px;
            PlayerY = py;
            return;
        }

        var live = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector)?
            .Lives.FirstOrDefault(IsPlayerKind);
        if (live is null)
            return;
        PlayerX = live.PixelX;
        PlayerY = live.PixelY;
    }

    private void TryMove(double dx, double dy)
    {
        var nextX = Clamp(PlayerX + dx, 0, Math.Max(0, MapWidthPixels - 1));
        var nextY = Clamp(PlayerY + dy, 0, Math.Max(0, MapHeightPixels - 1));

        if (!IsBlocked(nextX, PlayerY))
            PlayerX = nextX;
        if (!IsBlocked(PlayerX, nextY))
            PlayerY = nextY;
    }

    private bool IsBlocked(double x, double y) =>
        _collision is not null && _collision.IsSolidPixel(x + 4, y + 4);

    private void UpdateCamera()
    {
        var targetX = (int)Math.Round(PlayerX + 4 - CameraWidth / 2.0);
        var targetY = (int)Math.Round(PlayerY + 4 - CameraHeight / 2.0);
        CameraX = (int)Clamp(targetX, 0, Math.Max(0, MapWidthPixels - CameraWidth));
        CameraY = (int)Clamp(targetY, 0, Math.Max(0, MapHeightPixels - CameraHeight));
    }

    private void UpdateActiveLink()
    {
        ActiveLink = null;
        foreach (var link in _scene.Links)
        {
            var x = link.Position.PixelX;
            var y = link.Position.PixelY;
            var w = Math.Max(8, link.Width * 8);
            var h = Math.Max(8, link.Height * 8);
            if (PlayerX + 4 >= x && PlayerX + 4 < x + w &&
                PlayerY + 4 >= y && PlayerY + 4 < y + h)
            {
                ActiveLink = link;
                break;
            }
        }
    }

    private void BootstrapStation(SceneSector? sectorData)
    {
        var station = sectorData?.Stations.FirstOrDefault();
        if (station?.Commands is null || station.Commands.Count == 0)
            return;

        foreach (var command in station.Commands)
        {
            switch (command.Op)
            {
                case 0x0C:
                    ActiveGroup = command.ArgShort < 0 ? ActiveGroup : command.ArgShort;
                    ActiveSector = command.ArgByte;
                    break;
                case 0x45:
                case 0x46:
                    MusicId = command.Arg1;
                    break;
                case 0x49:
                case 0x4C:
                    if (command.Arg1 > 0)
                        _pendingSfx.Add(command.Arg1);
                    break;
            }
        }
    }

    private void DrawPlayer(RgbaImage image)
    {
        var sprite = _actorSprites?.TryGetSpeciesSprite(PlayerSpecies)
            ?? _actorSprites?.TryGetForLive(_rom, null, PlayerTypeId);
        var drawX = (int)Math.Round(PlayerX);
        var drawY = (int)Math.Round(PlayerY);
        GbaDialogueHud.DrawDropShadow(image, drawX + 4, drawY + 2);
        if (sprite is not null)
        {
            SceneCompositor.BlitSpritePublic(
                image, sprite, drawX - sprite.Width / 2 + 4, drawY - sprite.Height + 8);
            return;
        }

        SceneCompositor.FillRectPublic(image, drawX, drawY, 8, 8, 0x40, 0xC0, 0xFF, 200);
    }

    private static int ResolveMapWidth(
        RomImage rom,
        Scene scene,
        int? mapWidthPixels,
        int? mapHeightPixels,
        out int height)
    {
        if (mapWidthPixels is int mw && mapHeightPixels is int mh && mw > 0 && mh > 0)
        {
            height = mh;
            return mw;
        }

        foreach (var note in scene.Diagnostics)
        {
            const string prefix = "playMapTiles:";
            if (!note.StartsWith(prefix, StringComparison.Ordinal))
                continue;
            var parts = note[prefix.Length..].Split('x');
            if (parts.Length == 2 &&
                int.TryParse(parts[0], out var tw) &&
                int.TryParse(parts[1], out var th) &&
                tw > 0 && th > 0)
            {
                height = th * 8;
                return tw * 8;
            }
        }

        var background = SceneCompositor.RenderMapBackground(rom, scene);
        if (background?.Png is not null)
        {
            var image = RgbaImage.FromPng(background.Png);
            if (image is not null)
            {
                height = image.Height;
                return image.Width;
            }
        }

        height = CameraHeight;
        return CameraWidth;
    }

    private static GroundCollisionMap? TryLoadCollision(RomImage rom, Scene scene)
    {
        var asset = scene.Map?.GroundMapAsset;
        if (asset is null)
            return null;
        try
        {
            var bma = Compression.DecompressGmlz(rom.Copy(asset.Offset, asset.Size));
            return BmaCollisionDecoder.TryDecode(bma);
        }
        catch
        {
            return null;
        }
    }

    private static bool IsPlayerKind(SceneEntity live) =>
        live.TypeId is 0 or 1 or 3 or 33 or 35;

    private static double Clamp(double value, double min, double max) =>
        value < min ? min : value > max ? max : value;

    public static RgbaImage CropCamera(RgbaImage source, int x, int y, int width, int height)
    {
        var pixels = new byte[width * height * 4];
        for (var row = 0; row < height; row++)
        {
            var srcY = y + row;
            for (var col = 0; col < width; col++)
            {
                var srcX = x + col;
                var dst = (row * width + col) * 4;
                if (srcX < 0 || srcY < 0 || srcX >= source.Width || srcY >= source.Height)
                {
                    pixels[dst] = 0x10;
                    pixels[dst + 1] = 0x10;
                    pixels[dst + 2] = 0x12;
                    pixels[dst + 3] = 255;
                    continue;
                }

                var src = (srcY * source.Width + srcX) * 4;
                pixels[dst] = source.Pixels[src];
                pixels[dst + 1] = source.Pixels[src + 1];
                pixels[dst + 2] = source.Pixels[src + 2];
                pixels[dst + 3] = source.Pixels[src + 3];
            }
        }
        return new RgbaImage(width, height, pixels);
    }
}
