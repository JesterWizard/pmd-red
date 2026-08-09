namespace RescueEditor.Core;

public readonly record struct PlayPortraitSlot(
    int NpcId,
    int Placement,
    int Emotion,
    bool Flip,
    short Species);

/// <summary>
/// Multi-actor ground script runner for Scene Play cutscenes.
/// Supports CALL_SCRIPT call-stacks, portraits, animations, and frame-accurate waits.
/// </summary>
public sealed class GroundScriptVm
{
    public const double FramesPerSecond = 60;
    public const int AnimSleep = 6;
    public const int AnimIdle = 2;

    // Mirrors include/constants/direction.h
    public const int DirSouth = 0;
    public const int DirEast = 2;
    public const int DirNorth = 4;
    public const int DirWest = 6;

    private static readonly string[] EmotionNames =
    [
        "Normal", "Happy", "Pained", "Angry", "Worried", "Sad", "Crying",
        "Shouting", "TearyEye", "Determined", "Joyous", "Inspired", "Surprised",
    ];

    private readonly RomImage? _rom;
    private readonly RomProfile? _profile;
    private readonly Charmap? _charmap;
    private readonly Scene? _scene;
    private readonly PlayAppearance? _appearance;
    private readonly List<ScriptActor> _actors = new();
    private readonly Dictionary<int, List<ScriptCommandData>> _functionCache = new();
    private readonly HashSet<int> _cues = new();
    private readonly List<int> _pendingSfx = new();
    private readonly Dictionary<int, int> _animations = new(); // actor slot / npc -> anim
    private readonly Dictionary<int, PlayPortraitSlot> _portraits = new(); // npc id
    private readonly Dictionary<int, (int Placement, bool Flip)> _portraitPlacementMemory = new();
    private readonly Dictionary<int, (double X, double Y)> _livePositions = new();
    private readonly Dictionary<int, short> _liveSpecies = new();
    private readonly Dictionary<int, int> _directions = new(); // DIRECTION_* 0..7
    private readonly Dictionary<int, (int EffectId, int FramesLeft)> _effects = new();
    private bool _livesSpawned;
    private int _dialogueHoldFrames;
    private IReadOnlyList<string> _dialoguePages = Array.Empty<string>();
    private int _dialoguePageIndex;
    private int _fadeMainTarget; // 0 clear, 255 black (FADE_IN/OUT)
    private int _fadeMainCurrent;
    private int _fade2Target; // secondary channel (FADE2_*); must not clear main black
    private int _fade2Current;

    public GroundScriptVm(
        RomImage rom,
        Scene scene,
        int group,
        int sector,
        Charmap? charmap = null,
        RomProfile? profile = null,
        PlayAppearance? appearance = null)
    {
        _rom = rom;
        _scene = scene;
        _charmap = charmap;
        _profile = profile ?? RomProfile.Us10;
        _appearance = appearance;
        ActiveGroup = group;
        ActiveSector = sector;

        var station = scene.Groups.ElementAtOrDefault(group)?
            .Sectors.ElementAtOrDefault(sector)?
            .Stations.FirstOrDefault();
        if (station?.Commands is { Count: > 0 })
            _actors.Add(new ScriptActor("station", station.Commands, npcId: -1));
    }

    /// <summary>Test helper: run a bare command list as a single actor.</summary>
    public static GroundScriptVm FromCommands(
        IReadOnlyList<ScriptCommandData> commands,
        RomImage? rom = null,
        RomProfile? profile = null)
    {
        var vm = new GroundScriptVm(rom, profile);
        vm._actors.Add(new ScriptActor("test", commands, npcId: 0));
        return vm;
    }

    private GroundScriptVm(RomImage? rom, RomProfile? profile)
    {
        _rom = rom;
        _profile = profile ?? (rom is null ? null : RomProfile.Us10);
    }

    public int ActiveGroup { get; private set; }
    public int ActiveSector { get; private set; }
    public string? Dialogue { get; private set; }
    public string? DialoguePage { get; private set; }
    public PlayDialogueMode DialogueMode { get; private set; }
    public int DialogueSpeakerId { get; private set; } = -1;
    public string? DialogueSpeakerLabel { get; private set; }
    public bool DialogueUsesSpeechIcon { get; private set; }
    public bool WaitingForAdvance { get; private set; }
    public int? MusicId { get; private set; }
    public bool Finished { get; private set; }
    public bool HasActors => _actors.Count > 0;
    public IReadOnlyCollection<PlayPortraitSlot> Portraits => _portraits.Values;

    /// <summary>
    /// Portraits that should be drawn with the current line (game passes only the speaker
    /// portrait into the dialogue box via <c>GetSpeakerPortrait</c>).
    /// </summary>
    public IEnumerable<PlayPortraitSlot> VisiblePortraits
    {
        get
        {
            if (DialogueMode is PlayDialogueMode.None or PlayDialogueMode.OnBackground)
                yield break;
            if (DialogueSpeakerId < 0)
                yield break;
            if (_portraits.TryGetValue(DialogueSpeakerId, out var slot))
                yield return slot;
        }
    }
    /// <summary>0 = fully visible, 255 = fully black.</summary>
    public byte FadeAlpha => (byte)Math.Clamp(Math.Max(_fadeMainCurrent, _fade2Current), 0, 255);

    /// <summary>True while either fade channel is still interpolating.</summary>
    public bool FadeBusy => _fadeMainCurrent != _fadeMainTarget || _fade2Current != _fade2Target;

    public int GetAnimation(int npcId) =>
        _animations.TryGetValue(npcId, out var anim) ? anim : AnimIdle;

    public int GetDirection(int npcId) =>
        _directions.TryGetValue(npcId, out var dir) ? dir & 7 : DirSouth;

    /// <summary>True when facing west-ish so sprites should flip horizontally.</summary>
    public static bool ShouldFlipHorizontal(int direction) =>
        (direction & 7) is 5 or 6 or 7; // NW, W, SW

    public bool TryGetActiveEffect(int npcId, out int effectId)
    {
        if (_effects.TryGetValue(npcId, out var fx) && fx.EffectId > 0 && fx.FramesLeft != 0)
        {
            effectId = fx.EffectId;
            return true;
        }
        effectId = 0;
        return false;
    }

    public bool IsLiveMoving(int liveIndex) =>
        _actors.Any(a => a.NpcId == liveIndex && a.WalkActive);

    public bool TryGetLivePixelPos(int liveIndex, out double x, out double y)
    {
        if (_livePositions.TryGetValue(liveIndex, out var pos))
        {
            x = pos.X;
            y = pos.Y;
            return true;
        }
        x = y = 0;
        return false;
    }

    public IReadOnlyDictionary<int, short> LiveSpecies => _liveSpecies;

    public IEnumerable<int> LiveIndices => _livePositions.Keys;

    public IReadOnlyList<int> DrainPendingSfx()
    {
        var copy = _pendingSfx.ToArray();
        _pendingSfx.Clear();
        return copy;
    }

    public void AdvanceDialogue()
    {
        if (!WaitingForAdvance)
            return;

        if (_dialoguePageIndex + 1 < _dialoguePages.Count)
        {
            _dialoguePageIndex++;
            DialoguePage = _dialoguePages[_dialoguePageIndex];
            _dialogueHoldFrames = DialogueMode == PlayDialogueMode.OnBackground ? 96 : 0;
            return;
        }

        WaitingForAdvance = false;
        Dialogue = null;
        DialoguePage = null;
        DialogueMode = PlayDialogueMode.None;
        DialogueSpeakerLabel = null;
        DialogueUsesSpeechIcon = false;
        _dialoguePages = Array.Empty<string>();
        _dialoguePageIndex = 0;
        _dialogueHoldFrames = 0;
    }

    public void Tick(double dtSeconds)
    {
        var frames = Math.Max(1, (int)Math.Round(dtSeconds * FramesPerSecond));
        TickFrames(frames);
    }

    public void TickFrames(int frames)
    {
        for (var f = 0; f < frames; f++)
            TickOneFrame();
    }

    private void TickOneFrame()
    {
        if (_actors.Count == 0)
        {
            Finished = true;
            return;
        }

        // Interpolate fade channels toward targets (~palette fade).
        StepFade(ref _fadeMainCurrent, _fadeMainTarget);
        StepFade(ref _fade2Current, _fade2Target);

        TickEffects();

        if (WaitingForAdvance)
        {
            // MSG_ON_BG_AUTO may auto-close; normal textboxes wait for A.
            if (_dialogueHoldFrames > 0)
            {
                _dialogueHoldFrames--;
                if (_dialogueHoldFrames <= 0 && DialogueMode == PlayDialogueMode.OnBackground)
                    AdvanceDialogue();
            }
            return;
        }

        var progressed = true;
        var guard = 0;
        while (progressed && guard++ < 64 && !WaitingForAdvance)
        {
            progressed = false;
            foreach (var actor in _actors.ToArray())
            {
                if (actor.Done)
                    continue;
                if (StepActor(actor))
                    progressed = true;
            }
        }

        Finished = _actors.All(a => a.Done);
    }

    private bool StepActor(ScriptActor actor)
    {
        if (actor.WalkActive)
            return TickWalk(actor);

        if (actor.WaitFrames > 0)
        {
            actor.WaitFrames--;
            if (actor.WaitFrames > 0)
                return false;
            // Wait elapsed — fall through and run the next opcode this frame.
        }

        if (actor.AwaitCueId is int cue)
        {
            if (_cues.Contains(cue))
            {
                _cues.Remove(cue);
                actor.AwaitCueId = null;
                actor.Index++;
                return true;
            }
            return false;
        }

        if (actor.Index < 0 || actor.Index >= actor.Commands.Count)
        {
            if (TryReturnFromCall(actor))
                return true;
            actor.Done = true;
            return false;
        }

        var cmd = actor.Commands[actor.Index];
        switch (cmd.Op)
        {
            case 0xDB: // WAIT
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgShort);
                actor.Index++;
                return actor.WaitFrames == 0;

            case 0x8B: // SET_DIR_WAIT(direction, frames) — ArgByte=frames, ArgShort=dir
            {
                var key = LiveKey(actor);
                if (cmd.ArgShort >= 0)
                    _directions[key] = cmd.ArgShort & 7;
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgByte);
                actor.Index++;
                return actor.WaitFrames == 0;
            }

            case 0x39: // MSG_ON_BG_AUTO
            case 0x37:
            case 0x38:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
                ShowText(cmd);
                actor.Index++;
                return false;

            case 0xCF: // MSG_VAR(textType, var, speaker)
            {
                var textType = cmd.ArgByte;
                var speaker = cmd.Arg1;
                actor.Index++;
                ConsumeVariantDefault(actor, speaker, textType);
                return true;
            }

            case 0xD0:
            case 0xD1:
                actor.Index++;
                return true;

            case 0x30: // TEXTBOX_CLEAR
                Dialogue = null;
                DialoguePage = null;
                DialogueMode = PlayDialogueMode.None;
                WaitingForAdvance = false;
                _dialoguePages = Array.Empty<string>();
                actor.Index++;
                return true;

            case 0x2E: // PORTRAIT(place, id, emotion)
                ApplyPortrait(cmd.ArgByte, cmd.ArgShort, cmd.Arg1);
                actor.Index++;
                return true;

            case 0x54: // SELECT_ANIMATION
            {
                var anim = cmd.ArgShort;
                var key = actor.NpcId >= 0 ? actor.NpcId : 0;
                _animations[key] = anim;
                actor.Index++;
                return true;
            }

            case 0x0C: // SELECT_ENTITIES
            {
                var group = cmd.ArgShort < 0 ? ActiveGroup : cmd.ArgShort;
                ActiveGroup = group;
                ActiveSector = cmd.ArgByte;
                SpawnLivesIfNeeded(force: true);
                actor.Index++;
                return true;
            }

            case 0x0D: // SELECT_LIVES
            {
                ActiveGroup = cmd.ArgShort < 0 ? ActiveGroup : cmd.ArgShort;
                ActiveSector = cmd.ArgByte;
                SpawnLivesIfNeeded(force: true);
                actor.Index++;
                return true;
            }

            case 0x44: // BGM_SWITCH
            case 0x45: // BGM_FADEIN
            case 0x46: // BGM_QUEUE
                MusicId = cmd.Arg1;
                actor.Index++;
                return true;

            case 0x47:
                MusicId = null;
                actor.Index++;
                return true;

            case 0x49:
            case 0x4C:
                if (cmd.Arg1 > 0)
                    _pendingSfx.Add(cmd.Arg1);
                actor.Index++;
                return true;

            case 0xE1: // WAIT_FANFARE1
            case 0xE2: // WAIT_FANFARE2
                actor.WaitFrames = 30;
                actor.Index++;
                return false;

            case 0xE3: // AWAIT_CUE
                actor.AwaitCueId = cmd.ArgShort;
                return false;

            case 0xE4: // ALERT_CUE
                _cues.Add(cmd.ArgShort);
                actor.Index++;
                return true;

            case 0xE8: // CALL_SCRIPT
                return CallScript(actor, cmd.ArgShort);

            case 0xE9: // JUMP_SCRIPT
                return JumpScript(actor, cmd.ArgShort);

            case 0x22: // FADE_IN — primary black overlay
                _fadeMainTarget = 0;
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgShort);
                if (actor.WaitFrames == 0)
                    _fadeMainCurrent = 0;
                actor.Index++;
                return actor.WaitFrames == 0;

            case 0x23: // FADE_OUT
                _fadeMainTarget = 255;
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgShort);
                if (actor.WaitFrames == 0)
                    _fadeMainCurrent = 255;
                actor.Index++;
                return actor.WaitFrames == 0;

            case 0x25: // FADE2_IN — secondary only; Tiny Woods keeps main black for MSG_NPC
                _fade2Target = 0;
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgShort);
                if (actor.WaitFrames == 0)
                    _fade2Current = 0;
                actor.Index++;
                return actor.WaitFrames == 0;

            case 0x26: // FADE2_OUT
                _fade2Target = 255;
                actor.WaitFrames = Math.Max(0, (int)cmd.ArgShort);
                if (actor.WaitFrames == 0)
                    _fade2Current = 255;
                actor.Index++;
                return actor.WaitFrames == 0;

            case 0xDF: // wait until palette fade finishes (sub_8099B94)
                if (FadeBusy)
                    return false;
                actor.Index++;
                return true;

            case 0x2D: // format-buffer / lives id setup — skip for preview
                actor.Index++;
                return true;

            case 0x56: // Attach emotion effect (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY)
            {
                var key = LiveKey(actor);
                var effectId = cmd.Arg1;
                if (effectId <= 0)
                    _effects.Remove(key);
                else
                    // Sticky until cleared, or until 0xDE starts a oneshot countdown
                    // (NOTICE/QUESTION/SWEAT/SHOCK). SMILE/ANGRY stay until *_END.
                    _effects[key] = (effectId, -1);
                actor.Index++;
                return true;
            }

            case 0xDE: // wait until live emotion effect finishes
            {
                var key = LiveKey(actor);
                if (_effects.TryGetValue(key, out var fx) && fx.EffectId > 0)
                {
                    if (fx.FramesLeft < 0)
                        _effects[key] = (fx.EffectId, 48); // ~0.8s oneshot wait
                    return false;
                }
                actor.Index++;
                return true;
            }

            case 0xEE: // RET_DIRECT — return from CALL_SCRIPT
                if (TryReturnFromCall(actor))
                    return true;
                actor.Done = true;
                return false;

            case 0xEF: // RET
            case 0xF0: // HALT
            case 0xF1: // END_DELETE
                actor.CallStack.Clear();
                actor.Done = true;
                return false;

            case 0x6A: // WALK_RELATIVE(spd, dx, dy) — dx/dy in pixels
                StartWalk(actor,
                    GetLiveX(actor) + cmd.Arg1,
                    GetLiveY(actor) + cmd.Arg2,
                    cmd.ArgShort);
                return false;

            case 0x6B: // WALK_GRID(spd, waypoint)
            {
                var (tx, ty) = ResolveLinkPixel(cmd.Arg1);
                StartWalk(actor, tx, ty, cmd.ArgShort);
                return false;
            }

            case 0x7A: // WALK_DIRECT — treat like relative/absolute pixel target
                StartWalk(actor, cmd.Arg1, cmd.Arg2, Math.Max(1, (int)cmd.ArgShort));
                return false;

            case 0x91: // ROTATE_TO(spd, transform, targetDir)
            case 0x92:
            {
                var key = LiveKey(actor);
                // Preview: snap to target direction (Arg1). Full DIR_TRANS stepping can come later.
                if (cmd.Arg1 >= 0)
                    _directions[key] = cmd.Arg1 & 7;
                actor.WaitFrames = Math.Max(1, (int)cmd.ArgByte);
                actor.Index++;
                return false;
            }

            case 0xF6: // DEBUGINFO
            default:
                actor.Index++;
                return true;
        }
    }

    private bool CallScript(ScriptActor actor, int scriptId)
    {
        var body = LoadFunctionCommands(scriptId);
        if (body is null || body.Count == 0)
        {
            actor.Index++;
            return true;
        }

        actor.CallStack.Push((actor.Commands, actor.Index + 1));
        actor.Commands = body;
        actor.Index = 0;
        return true;
    }

    private bool JumpScript(ScriptActor actor, int scriptId)
    {
        var body = LoadFunctionCommands(scriptId);
        if (body is null || body.Count == 0)
        {
            actor.Index++;
            return true;
        }

        actor.CallStack.Clear();
        actor.Commands = body;
        actor.Index = 0;
        return true;
    }

    private bool TryReturnFromCall(ScriptActor actor)
    {
        if (actor.CallStack.Count == 0)
            return false;
        var (commands, index) = actor.CallStack.Pop();
        actor.Commands = commands;
        actor.Index = index;
        return true;
    }

    private List<ScriptCommandData>? LoadFunctionCommands(int scriptId)
    {
        if (_rom is null || _profile is null)
            return null;
        if (_functionCache.TryGetValue(scriptId, out var cached))
            return cached;
        if (scriptId < 0 || scriptId >= _profile.FunctionScriptCount)
            return null;
        if (!_profile.Anchors.TryGetValue("gFunctionScriptTable", out var table))
            return null;

        var data = ScriptRefData.Read(_rom, table + scriptId * ScriptRefData.Size, loadCommands: true);
        _functionCache[scriptId] = data.Commands;
        return data.Commands;
    }

    private void ApplyPortrait(int placement, int npcId, int emotion)
    {
        var flip = false;
        var place = placement;
        if (placement == 21) // PLACEMENT_KEEP
        {
            if (_portraitPlacementMemory.TryGetValue(npcId, out var mem))
            {
                place = mem.Placement;
                flip = mem.Flip;
            }
            else
            {
                place = 0;
            }
        }
        else
        {
            flip = IsFlipPlacement(place);
            _portraitPlacementMemory[npcId] = (place, flip);
        }

        var species = ResolveNpcSpecies(npcId);
        _portraits[npcId] = new PlayPortraitSlot(npcId, place, emotion, flip, species);
    }

    private short ResolveNpcSpecies(int npcId)
    {
        if (_liveSpecies.TryGetValue(npcId, out var known) && known > 0)
            return known;
        if (_appearance is not null)
        {
            if (npcId == 0) return _appearance.PlayerSpecies;
            if (npcId == 1) return _appearance.PartnerSpecies;
        }

        var sector = _scene?.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector);
        var live = sector?.Lives.ElementAtOrDefault(npcId);
        if (live is null || _rom is null || _profile is null)
            return _appearance?.PlayerSpecies ?? 1;
        if (_appearance?.TryResolveLiveType(live.TypeId) is short over)
            return over;
        return GroundLivesTypes.ResolvePreviewSpecies(_rom, _profile, live.TypeId);
    }

    private static bool IsFlipPlacement(int placement) => placement is
        3 or 5 or 6 or 7 or 9 or 13 or 15 or 16 or 17 or 19;

    private void ConsumeVariantDefault(ScriptActor actor, int speakerId, int textType)
    {
        // Skip non-matching VARIANT arms; take the first VARIANT_DEFAULT (retail default path).
        while (actor.Index < actor.Commands.Count)
        {
            var cmd = actor.Commands[actor.Index];
            if (cmd.Op == 0xD0)
            {
                actor.Index++;
                continue;
            }
            if (cmd.Op == 0xD1)
            {
                ShowText(cmd, speakerOverride: speakerId, textTypeOverride: textType);
                actor.Index++;
                // Leave subsequent VARIANT_DEFAULT lines queued as raw D1 — convert them into
                // follow-up pages by absorbing consecutive D1s into WAIT_PRESS pages.
                while (actor.Index < actor.Commands.Count && actor.Commands[actor.Index].Op == 0xD1)
                {
                    var next = actor.Commands[actor.Index];
                    actor.Index++;
                    if (_charmap is not null && _rom is not null &&
                        _rom.TryPointerToOffset(next.ArgPtr, out var off))
                    {
                        var more = _charmap.DecodeRomString(_rom, off, 768);
                        Dialogue = (Dialogue ?? "") + "{WAIT_PRESS}" + more;
                    }
                }
                // Rebuild pages now that extras were appended.
                _dialoguePages = DialogueFormatter.SplitPages(
                    Dialogue,
                    _appearance?.PlayerSpecies ?? 0,
                    _appearance?.PartnerSpecies ?? 0);
                _dialoguePageIndex = 0;
                DialoguePage = _dialoguePages.Count > 0 ? _dialoguePages[0] : string.Empty;
                return;
            }
            break;
        }
    }

    private void ShowText(ScriptCommandData cmd, int? speakerOverride = null, int? textTypeOverride = null)
    {
        string? raw;
        if (_charmap is not null && _rom is not null &&
            _rom.TryPointerToOffset(cmd.ArgPtr, out var textOffset))
        {
            raw = _charmap.DecodeRomString(_rom, textOffset, 768);
        }
        else
        {
            raw = $"[{ScriptOpcodeNames.GetName(cmd.Op)}]";
        }

        Dialogue = raw;
        DialogueSpeakerId = speakerOverride ?? cmd.ArgShort;

        var type = textTypeOverride ?? cmd.Op switch
        {
            0x32 => 0, // INSTANT
            0x33 => 1, // QUIET
            0x34 => 2, // NPC
            0x35 => 3, // LETTER
            0x36 => 4, // OVERHEARD
            0x37 or 0x38 or 0x39 => -1, // ON_BG
            _ => 2,
        };

        DialogueMode = type switch
        {
            -1 => PlayDialogueMode.OnBackground,
            1 => PlayDialogueMode.Quiet,
            _ when cmd.Op is 0x37 or 0x38 or 0x39 => PlayDialogueMode.OnBackground,
            _ => PlayDialogueMode.Box,
        };

        DialogueUsesSpeechIcon = DialogueMode == PlayDialogueMode.Box && DialogueSpeakerId < 0;
        DialogueSpeakerLabel = null;
        if (DialogueMode == PlayDialogueMode.Box && DialogueSpeakerId >= 0)
            DialogueSpeakerLabel = ResolveSpeakerLabel(DialogueSpeakerId);
        if (DialogueMode == PlayDialogueMode.Quiet)
        {
            DialogueUsesSpeechIcon = false;
            DialogueSpeakerLabel = null;
        }

        _dialoguePages = DialogueFormatter.SplitPages(
            raw,
            _appearance?.PlayerSpecies ?? 0,
            _appearance?.PartnerSpecies ?? 0);
        _dialoguePageIndex = 0;
        DialoguePage = _dialoguePages.Count > 0 ? _dialoguePages[0] : string.Empty;

        WaitingForAdvance = true;
        _dialogueHoldFrames = DialogueMode == PlayDialogueMode.OnBackground ? 96 : 0;
    }

    private string ResolveSpeakerLabel(int speakerId)
    {
        if (speakerId == 0 && _appearance is not null)
            return DialogueFormatter.PrettySpeciesName(_appearance.PlayerSpecies);
        if (speakerId == 1 && _appearance is not null)
            return DialogueFormatter.PrettySpeciesName(_appearance.PartnerSpecies);

        if (_rom is not null && _scene is not null && _profile is not null)
        {
            var live = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
                .Sectors.ElementAtOrDefault(ActiveSector)?
                .Lives.ElementAtOrDefault(speakerId);
            if (live is not null)
            {
                var species = _appearance?.TryResolveLiveType(live.TypeId)
                    ?? GroundLivesTypes.ResolvePreviewSpecies(_rom, _profile, live.TypeId);
                if (species > 0)
                    return DialogueFormatter.PrettySpeciesName(species);
            }
        }

        return $"NPC{speakerId}";
    }

    private void SpawnLivesIfNeeded(bool force = false)
    {
        if (_rom is null || _scene is null)
            return;

        var sector = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector);
        if (sector is null)
            return;

        if (_livesSpawned && !force)
            return;

        // First spawn uses indices 0..n; later SELECT_LIVES/ENTITIES appends new slots
        // (matches NPC_PLAYER=0, NPC_PARTNER=1, NPC_BUTTERFREE=2 in Tiny Woods).
        var startIndex = 0;
        if (_livesSpawned)
            startIndex = _livePositions.Count == 0 ? 0 : _livePositions.Keys.Max() + 1;

        for (var i = 0; i < sector.Lives.Count; i++)
        {
            var live = sector.Lives[i];
            var id = startIndex + i;
            _livePositions[id] = (live.PixelX, live.PixelY);
            _directions[id] = live.DirectionOrFlags & 7;

            var species = _appearance?.TryResolveLiveType(live.TypeId)
                ?? GroundLivesTypes.ResolvePreviewSpecies(_rom, _profile!, live.TypeId);
            _liveSpecies[id] = species;

            if (_actors.Any(a => a.NpcId == id && a.Name.StartsWith("live", StringComparison.Ordinal)))
                continue;

            var offset = live.ScriptOffsets.ElementAtOrDefault(0);
            if (offset <= 0)
                continue;
            var commands = ScriptCodec.ReadScript(_rom, offset);
            if (commands.Count == 0)
                continue;
            _actors.Add(new ScriptActor($"live{id}", commands, npcId: id));
            if (!_animations.ContainsKey(id))
                _animations[id] = AnimIdle;
        }

        _livesSpawned = true;
    }

    private void StartWalk(ScriptActor actor, double targetX, double targetY, int speed)
    {
        EnsureLivePos(actor);
        actor.WalkTargetX = targetX;
        actor.WalkTargetY = targetY;
        // Game uses 24.8 fixed-point speed; 256 ≈ 1px/frame.
        actor.WalkSpeedPerFrame = Math.Max(0.25, speed / 256.0);
        actor.WalkActive = true;
    }

    private bool TickWalk(ScriptActor actor)
    {
        EnsureLivePos(actor);
        var key = LiveKey(actor);
        var (x, y) = _livePositions[key];
        var tx = actor.WalkTargetX ?? x;
        var ty = actor.WalkTargetY ?? y;
        var dx = tx - x;
        var dy = ty - y;
        var dist = Math.Sqrt(dx * dx + dy * dy);
        var step = actor.WalkSpeedPerFrame;
        if (dist > 0.01)
            _directions[key] = DirectionFromDelta(dx, dy);

        if (dist <= step || dist < 0.01)
        {
            _livePositions[key] = (tx, ty);
            actor.WalkActive = false;
            actor.Index++;
            return true;
        }

        _livePositions[key] = (x + dx / dist * step, y + dy / dist * step);
        return false;
    }

    private static int DirectionFromDelta(double dx, double dy)
    {
        // Approximate 8-way facing from movement vector.
        if (Math.Abs(dx) < 0.01 && Math.Abs(dy) < 0.01)
            return DirSouth;
        var angle = Math.Atan2(dx, dy); // 0 = south-ish in screen space? dy>0 is down/south
        // Screen: +x east, +y south. atan2(dx, dy): 0 south, +π/2 east, ±π north, -π/2 west.
        var oct = (int)Math.Round(angle / (Math.PI / 4.0));
        // Map to DIRECTION_*: S=0, SE=1, E=2, NE=3, N=4, NW=5, W=6, SW=7
        return ((oct % 8) + 8) % 8;
    }

    private static void StepFade(ref int current, int target)
    {
        if (current < target)
            current = Math.Min(target, current + 8);
        else if (current > target)
            current = Math.Max(target, current - 8);
    }

    private void TickEffects()
    {
        if (_effects.Count == 0)
            return;
        foreach (var key in _effects.Keys.ToArray())
        {
            var fx = _effects[key];
            if (fx.FramesLeft < 0)
                continue; // sticky (SMILE/ANGRY until cleared)
            var left = fx.FramesLeft - 1;
            if (left <= 0)
                _effects.Remove(key);
            else
                _effects[key] = (fx.EffectId, left);
        }
    }

    private double GetLiveX(ScriptActor actor)
    {
        EnsureLivePos(actor);
        return _livePositions[LiveKey(actor)].X;
    }

    private double GetLiveY(ScriptActor actor)
    {
        EnsureLivePos(actor);
        return _livePositions[LiveKey(actor)].Y;
    }

    private void EnsureLivePos(ScriptActor actor)
    {
        var key = LiveKey(actor);
        if (_livePositions.ContainsKey(key))
            return;
        var live = _scene?.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector)?
            .Lives.ElementAtOrDefault(key);
        _livePositions[key] = live is null ? (0, 0) : (live.PixelX, live.PixelY);
    }

    private static int LiveKey(ScriptActor actor) => actor.NpcId >= 0 ? actor.NpcId : 0;

    private (double X, double Y) ResolveLinkPixel(int linkIndex)
    {
        if (_scene is null || linkIndex < 0 || linkIndex >= _scene.Links.Count)
            return (0, 0);
        var link = _scene.Links[linkIndex];
        return (link.Position.PixelX, link.Position.PixelY);
    }

    public static string EmotionName(int emotion) =>
        emotion >= 0 && emotion < EmotionNames.Length ? EmotionNames[emotion] : "Normal";

    private sealed class ScriptActor
    {
        public ScriptActor(string name, IReadOnlyList<ScriptCommandData> commands, int npcId)
        {
            Name = name;
            Commands = commands;
            NpcId = npcId;
        }

        public string Name { get; }
        public IReadOnlyList<ScriptCommandData> Commands { get; set; }
        public int NpcId { get; }
        public int Index { get; set; }
        public int WaitFrames { get; set; }
        public int? AwaitCueId { get; set; }
        public bool Done { get; set; }
        public bool WalkActive { get; set; }
        public double? WalkTargetX { get; set; }
        public double? WalkTargetY { get; set; }
        public double WalkSpeedPerFrame { get; set; }
        public Stack<(IReadOnlyList<ScriptCommandData> Commands, int Index)> CallStack { get; } = new();
    }
}
