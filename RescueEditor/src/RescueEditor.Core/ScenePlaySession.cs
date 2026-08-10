namespace RescueEditor.Core;

/// <summary>Software ground play session: free roam and/or scripted cutscene playback.</summary>
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
    private GroundScriptVm? _script;
    private readonly Charmap? _charmap;
    private readonly RomProfile? _profile;
    private readonly PixelFont _font = PixelFont.Load();
    private int? _lastMusicId;
    private int _animTick;
    private RgbaImage? _cachedBg;
    private int _cachedBgGroup = int.MinValue;
    private int _cachedBgSector = int.MinValue;
    private RgbaImage? _workFull;
    private RgbaImage? _cameraBuf;

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

        _charmap = charmap;
        _profile = profile ?? RomProfile.Us10;
        var useScript = scripted ?? ScenePlayPresets.ShouldScriptPlay(scene, ActiveGroup, ActiveSector);
        _portraits = portraits ?? (useScript ? new PortraitAtlas(rom, repoRoot) : null);
        // Lazy-load emotion icons on first use — eager ROM decode in the ctor can hitch/crash.
        _effects = new EmotionEffectAtlas(repoRoot, rom);
        if (useScript)
        {
            IsScripted = true;
            _script = new GroundScriptVm(
                rom, scene, ActiveGroup, ActiveSector, charmap,
                profile: _profile,
                appearance: Appearance);
            AllowFreeRoam = false;
            // Emotion SIRO decode is lazy on first NOTICE/etc. — don't PrefetchCommon here.
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
    public Scene Scene => _scene;
    public int MapId => _scene.MapId;
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

    /// <summary>Rebuild the script VM and clear play state so the cutscene can run again.</summary>
    public void Restart()
    {
        _held.Clear();
        _pendingSfx.Clear();
        _lastMusicId = null;
        MusicId = null;
        _animTick = 0;
        _cachedBg = null;
        _cachedBgGroup = int.MinValue;
        _cachedBgSector = int.MinValue;

        if (IsScripted)
        {
            _script = new GroundScriptVm(
                _rom, _scene, ActiveGroup, ActiveSector, _charmap,
                profile: _profile ?? RomProfile.Us10,
                appearance: Appearance);
            AllowFreeRoam = false;
            SyncPlayerFromLive();
            UpdateCamera();
            return;
        }

        var sectorData = _scene.Groups.ElementAtOrDefault(ActiveGroup)?.Sectors.ElementAtOrDefault(ActiveSector);
        if (_playerLive is not null)
        {
            PlayerX = _playerLive.PixelX;
            PlayerY = _playerLive.PixelY;
        }
        BootstrapStation(sectorData);
        AllowFreeRoam = true;
        UpdateCamera();
    }

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
            else
                MusicId = null;
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

    /// <summary>
    /// Consume a pending BGM change. Returns true when playback should update.
    /// <paramref name="songId"/> is null when music should stop (BGM_STOP / FADEOUT).
    /// </summary>
    public bool TryConsumeMusicChange(out int? songId)
    {
        if (MusicId != _lastMusicId)
        {
            _lastMusicId = MusicId;
            songId = MusicId;
            return true;
        }
        songId = null;
        return false;
    }

    public byte[] RenderFrame() => RenderFrameImage().ToPng();

    public bool HasBackground => _cachedBg is not null;

    /// <summary>Compose and cache the map background (expensive). Safe to call after the window is shown.</summary>
    public void EnsureBackground() => EnsureBackgroundCore();

    /// <summary>
    /// Render one 240×160 frame. When <paramref name="composeBackground"/> is false and the
    /// map BG is not cached yet, returns a black camera frame immediately (instant Scene Play open).
    /// </summary>
    public RgbaImage RenderFrameImage(bool composeBackground = true)
    {
        if (_cachedBg is null)
        {
            if (!composeBackground)
                return BlackCamera();
            EnsureBackgroundCore();
        }

        var bg = _cachedBg ?? throw new InvalidOperationException("Scene background failed to compose.");
        EnsureWorkBuffers(bg.Width, bg.Height);
        var work = _workFull ?? throw new InvalidOperationException("Work buffer missing.");
        var camera = _cameraBuf ?? throw new InvalidOperationException("Camera buffer missing.");
        if (work.Pixels.Length != bg.Pixels.Length)
            EnsureWorkBuffers(bg.Width, bg.Height);
        Buffer.BlockCopy(bg.Pixels, 0, work.Pixels, 0, bg.Pixels.Length);

        DrawAnimatedLives(work);

        if (AllowFreeRoam)
            DrawPlayer(work);

        CropCameraInto(work, CameraX, CameraY, camera);

        // When faded to black with no dialogue yet, skip sprite work visually via fade.
        GbaDialogueHud.Draw(
            camera,
            _font,
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

        return camera;
    }

    private static RgbaImage BlackCamera()
    {
        var pixels = new byte[CameraWidth * CameraHeight * 4];
        return new RgbaImage(CameraWidth, CameraHeight, pixels);
    }

    private void EnsureBackgroundCore()
    {
        if (_cachedBg is not null &&
            _cachedBgGroup == ActiveGroup &&
            _cachedBgSector == ActiveSector)
            return;

        var full = SceneCompositor.ComposeSceneImage(
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

        _cachedBg = full;
        _cachedBgGroup = ActiveGroup;
        _cachedBgSector = ActiveSector;
        _workFull = null;
    }

    private void EnsureWorkBuffers(int mapW, int mapH)
    {
        if (_workFull is null || _workFull.Width != mapW || _workFull.Height != mapH)
            _workFull = new RgbaImage(mapW, mapH, new byte[checked(mapW * mapH * 4)]);
        if (_cameraBuf is null || _cameraBuf.Width != CameraWidth || _cameraBuf.Height != CameraHeight)
            _cameraBuf = new RgbaImage(CameraWidth, CameraHeight, new byte[CameraWidth * CameraHeight * 4]);
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

        // Live PixelX/Y is the foot/shadow anchor (not sprite top-left).
        var ix = (int)Math.Round(pixelX);
        var iy = (int)Math.Round(pixelY);
        GbaDialogueHud.DrawDropShadow(image, ix, iy);

        // Plant the sprite so its visual feet (not the sheet center) sit on the
        // shadow — AX frames are often off-center, and east facings flip them.
        if (!GbaChroma.TryGetFootAnchor(sprite, flip, out var footX, out var footY))
        {
            footX = sprite.Width / 2;
            footY = sprite.Height - 1;
        }
        var x = ix - footX;
        var y = iy - footY;
        // Sleep poses sit lower in the sheet; keep the body from clipping into the ground.
        if (anim == GroundScriptVm.AnimSleep)
            y = iy - Math.Max(10, (footY * 2) / 3);
        SceneCompositor.BlitSpritePublic(image, sprite, x, y, flip);

        // Sleep Z markers (AX sleep has no efob; draw light Zs like retail flavor).
        if (anim == GroundScriptVm.AnimSleep)
        {
            var top = y + Math.Max(0, GbaChroma.ContentTop(sprite));
            SceneCompositor.FillRectPublic(image, ix + (flip ? -10 : 6), top - 6, 3, 3, 0xE8, 0xE8, 0xFF, 220);
            SceneCompositor.FillRectPublic(image, ix + (flip ? -14 : 10), top - 10, 2, 2, 0xE8, 0xE8, 0xFF, 180);
        }

        if (_script is not null &&
            _effects is not null &&
            _script.TryGetActiveEffect(liveIndex, out var effectId, out var effectAge))
        {
            var frame = _effects.TryGetFrame(effectId, effectAge);
            if (frame is { } fx)
            {
                var contentTop = GbaChroma.ContentTop(sprite);
                if (contentTop < 0)
                    contentTop = 0;
                // Effect origin sits just above the sprite's content top (head).
                var headX = ix;
                var headY = y + contentTop + 2;
                var fxX = headX - fx.AnchorX;
                var fxY = headY - fx.AnchorY;
                SceneCompositor.BlitSpritePublic(image, fx.Image, fxX, fxY, flipH: false);
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
                case 0x44: // BGM_SWITCH
                case 0x45: // BGM_FADEIN
                case 0x46: // BGM_QUEUE
                    MusicId = command.Arg1;
                    break;
                case 0x47: // BGM_STOP
                case 0x48: // BGM_FADEOUT
                    MusicId = null;
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
        GbaDialogueHud.DrawDropShadow(image, drawX, drawY);
        if (sprite is not null)
        {
            if (!GbaChroma.TryGetFootAnchor(sprite, flipH: false, out var footX, out var footY))
            {
                footX = sprite.Width / 2;
                footY = sprite.Height - 1;
            }
            SceneCompositor.BlitSpritePublic(
                image, sprite, drawX - footX, drawY - footY);
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
        var dest = new RgbaImage(width, height, new byte[width * height * 4]);
        CropCameraInto(source, x, y, dest);
        return dest;
    }

    public static void CropCameraInto(RgbaImage source, int x, int y, RgbaImage dest)
    {
        var width = dest.Width;
        var height = dest.Height;
        var pixels = dest.Pixels;
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
    }
}
