namespace RescueEditor.Core;

public readonly record struct PlayPortraitSlot(
    int NpcId,
    int Placement,
    int Emotion,
    bool Flip,
    short Species,
    bool Hidden = false);

public readonly record struct SpawnedMapEffect(byte Kind, double X, double Y, int Direction);

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
    private readonly HashSet<int> _cuesConsumedThisFrame = new();
    private readonly List<int> _pendingSfx = new();
    private readonly Dictionary<int, int> _animations = new(); // actor slot / npc -> anim
    private readonly Dictionary<int, PlayPortraitSlot> _portraits = new(); // npc id
    private readonly Dictionary<int, (int Placement, bool Flip)> _portraitPlacementMemory = new();
    /// <summary>CMD_BYTE_2D name/portrait slot → live actor index.</summary>
    private readonly Dictionary<int, int> _nameSlotToLive = new();
    /// <summary>CMD_BYTE_2D mode 9/6/3 binds by live <em>type id</em> when no spawned live matches.</summary>
    private readonly Dictionary<int, short> _nameSlotSpecies = new();
    private readonly Dictionary<int, (double X, double Y)> _livePositions = new();
    private readonly Dictionary<int, short> _liveSpecies = new();
    private readonly Dictionary<int, int> _directions = new(); // DIRECTION_* 0..7
    private readonly Dictionary<int, (int EffectId, int FramesLeft, int Age)> _effects = new();
    private readonly List<SpawnedMapEffect> _spawnedMapEffects = new();
    private bool _livesSpawned;
    private int _dialogueHoldFrames;
    private int _autoDismissHoldFrames;
    private bool _autoDismissDialogue;
    private IReadOnlyList<string> _dialoguePages = Array.Empty<string>();
    private int _dialoguePageIndex;
    private int _fadeMainTarget; // 0 clear, 255 black (FADE_IN/OUT)
    private int _fadeMainCurrent;
    private int _fade2Target; // secondary channel (FADE2_*); must not clear main black
    private int _fade2Current;
    private int _flashTarget; // 0 clear, 255 full RGB flash
    private int _flashCurrent;
    private int _flashStep = 8;
    private byte _flashR = 255;
    private byte _flashG = 255;
    private byte _flashB = 255;
    private bool _cameraPanActive;
    private double _cameraFocusX;
    private double _cameraFocusY;
    private double _cameraPanTargetX;
    private double _cameraPanTargetY;
    private double _cameraPanSpeed = 2.0; // pixels/frame
    private int _weatherId; // WEATHER_* from SELECT_WEATHER
    /// <summary>Actor that opened the current textbox; only this actor pauses for A.</summary>
    private ScriptActor? _dialogueOwner;
    private readonly List<DialogueChoice> _pendingChoices = new();
    private int _choiceIndex;
    private ScriptActor? _choiceOwner;

    public readonly record struct DialogueChoice(int LabelId, string Text);

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

        // Seed type-id name binds from this map's scripts up through the current group
        // (e.g. g31 binds Xatu to slot 9; g32 reuses that telepathy slot).
        SeedTypeIdBindsFromMap();

        // Only start black when the station opens with FADE_OUT; cutscenes that
        // continue an already-visible map (g32 calamity) never call FADE_IN.
        if (StationOpensWithFadeOut(station?.Commands))
        {
            _fadeMainCurrent = 255;
            _fadeMainTarget = 255;
        }
        else
        {
            _fadeMainCurrent = 0;
            _fadeMainTarget = 0;
        }
    }

    private static bool StationOpensWithFadeOut(IReadOnlyList<ScriptCommandData>? commands)
    {
        if (commands is null)
            return false;
        foreach (var cmd in commands)
        {
            if (cmd.Op == 0xF6) // DEBUGINFO
                continue;
            return cmd.Op == 0x23; // FADE_OUT
        }
        return false;
    }

    /// <summary>Test helper: run a bare command list as a single actor.</summary>
    public static GroundScriptVm FromCommands(
        IReadOnlyList<ScriptCommandData> commands,
        RomImage? rom = null,
        RomProfile? profile = null,
        int group = 0,
        int sector = 0)
    {
        var vm = new GroundScriptVm(rom, profile);
        vm.ActiveGroup = group;
        vm.ActiveSector = sector;
        vm._actors.Add(new ScriptActor("test", commands, npcId: 0));
        return vm;
    }

    /// <summary>Test helper: multiple named actors (cue handshake scenarios).</summary>
    public static GroundScriptVm FromActors(
        IReadOnlyList<(string Name, IReadOnlyList<ScriptCommandData> Commands, int NpcId)> actors,
        RomImage? rom = null,
        RomProfile? profile = null)
    {
        var vm = new GroundScriptVm(rom, profile);
        foreach (var (name, commands, npcId) in actors)
            vm._actors.Add(new ScriptActor(name, commands, npcId));
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
    /// <summary>True while an ASK menu is open (↑↓ select, A confirms).</summary>
    public bool WaitingForChoice => _pendingChoices.Count > 0 && WaitingForAdvance &&
        _dialoguePageIndex + 1 >= _dialoguePages.Count;
    public IReadOnlyList<DialogueChoice> Choices => _pendingChoices;
    public int ChoiceIndex => _choiceIndex;
    public int? MusicId { get; private set; }
    public bool Finished { get; private set; }
    public bool HasActors => _actors.Count > 0;

    /// <summary>Debug: per-actor PC / wait / cue state for stall diagnosis.</summary>
    public IReadOnlyList<string> DescribeActors()
    {
        var lines = new List<string>(_actors.Count);
        foreach (var a in _actors)
        {
            var op = a.Index >= 0 && a.Index < a.Commands.Count
                ? $"op=0x{a.Commands[a.Index].Op:X2}"
                : "op=EOF";
            lines.Add(
                $"{a.Name} npc={a.NpcId} idx={a.Index} {op} wait={a.WaitFrames} " +
                $"await={a.AwaitCueId?.ToString() ?? "-"} e5={a.E5WaitingCue?.ToString() ?? "-"} " +
                $"walk={a.WalkActive} done={a.Done} idle={a.LoopingIdle} cues=[{string.Join(',', _cues)}]");
        }
        return lines;
    }
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
            if (_portraits.TryGetValue(DialogueSpeakerId, out var slot) && !slot.Hidden)
                yield return slot;
        }
    }
    /// <summary>0 = fully visible, 255 = fully black.</summary>
    public byte FadeAlpha => (byte)Math.Clamp(Math.Max(_fadeMainCurrent, _fade2Current), 0, 255);

    /// <summary>RGB flash overlay strength (FLASH_TO/FROM), 0 = none, 255 = solid.</summary>
    public byte FlashAlpha => (byte)Math.Clamp(_flashCurrent, 0, 255);
    public byte FlashR => _flashR;
    public byte FlashG => _flashG;
    public byte FlashB => _flashB;

    /// <summary>True after CAMERA_INIT_PAN until CAMERA_END_PAN.</summary>
    public bool CameraPanActive => _cameraPanActive;

    /// <summary>Current ground weather id (WEATHER_CLEAR=0 … WEATHER_SNOW=7).</summary>
    public int WeatherId => _weatherId;

    public bool TryGetCameraFocus(out double x, out double y)
    {
        if (!_cameraPanActive)
        {
            x = 0;
            y = 0;
            return false;
        }
        x = _cameraFocusX;
        y = _cameraFocusY;
        return true;
    }

    /// <summary>True while either fade channel or flash is still interpolating.</summary>
    public bool FadeBusy =>
        _fadeMainCurrent != _fadeMainTarget ||
        _fade2Current != _fade2Target ||
        _flashCurrent != _flashTarget;

    public int GetAnimation(int npcId) =>
        _animations.TryGetValue(npcId, out var anim) ? anim : AnimIdle;

    public int GetDirection(int npcId) =>
        _directions.TryGetValue(npcId, out var dir) ? dir & 7 : DirSouth;

    /// <summary>True when facing west-ish so sprites should flip horizontally.</summary>
    public static bool ShouldFlipHorizontal(int direction) =>
        (direction & 7) is 5 or 6 or 7; // NW, W, SW

    public bool TryGetActiveEffect(int npcId, out int effectId, out int age)
    {
        if (_effects.TryGetValue(npcId, out var fx) && fx.EffectId > 0 && fx.FramesLeft != 0)
        {
            effectId = fx.EffectId;
            age = fx.Age;
            return true;
        }
        effectId = 0;
        age = 0;
        return false;
    }

    /// <summary>Compat: effect id only.</summary>
    public bool TryGetActiveEffect(int npcId, out int effectId) =>
        TryGetActiveEffect(npcId, out effectId, out _);

    /// <summary>Map-placed sector effects plus SPAWN_EFFECT instances.</summary>
    public IReadOnlyList<SpawnedMapEffect> MapEffects
    {
        get
        {
            var list = new List<SpawnedMapEffect>(_spawnedMapEffects);
            if (_scene is not null)
            {
                var sector = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
                    .Sectors.ElementAtOrDefault(ActiveSector);
                if (sector is not null)
                {
                    foreach (var e in sector.Effects)
                    {
                        if (!GroundEffectAtlas.ShouldPreviewSectorEffect(e.TypeId))
                            continue;
                        list.Add(new SpawnedMapEffect(
                            e.TypeId, e.PixelX, e.PixelY, e.DirectionOrFlags & 7));
                    }
                }
            }
            return list;
        }
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
            // Only the final page of MSG_ON_BG_AUTO may auto-dismiss; WAIT_PRESS pages need A.
            _dialogueHoldFrames = _autoDismissDialogue && _dialoguePageIndex == _dialoguePages.Count - 1
                ? _autoDismissHoldFrames
                : 0;
            return;
        }

        // Last page of an ASK: A confirms the highlighted choice (retail menu+textbox).
        if (_pendingChoices.Count > 0)
        {
            ConfirmChoice(_choiceIndex);
            return;
        }

        ClearDialogueState();
    }

    /// <summary>Move the ASK menu highlight (wraps).</summary>
    public void MoveChoice(int delta)
    {
        if (_pendingChoices.Count == 0 || !WaitingForChoice)
            return;
        var n = _pendingChoices.Count;
        _choiceIndex = ((_choiceIndex + delta) % n + n) % n;
    }

    /// <summary>Jump to the LABEL id stored on the selected CHOICE (decomp <c>FindLabel</c>).</summary>
    public void ConfirmChoice(int index)
    {
        if (_pendingChoices.Count == 0)
            return;
        if (index < 0 || index >= _pendingChoices.Count)
            index = _choiceIndex;
        var labelId = _pendingChoices[index].LabelId;
        var owner = _choiceOwner;
        ClearDialogueState();
        if (owner is null || owner.Done)
            return;
        var target = FindLabelIndex(owner.Commands, labelId);
        if (target >= 0)
            owner.Index = target;
    }

    private void ClearDialogueState()
    {
        WaitingForAdvance = false;
        _dialogueOwner = null;
        _choiceOwner = null;
        _pendingChoices.Clear();
        _choiceIndex = 0;
        Dialogue = null;
        DialoguePage = null;
        DialogueMode = PlayDialogueMode.None;
        DialogueSpeakerLabel = null;
        DialogueUsesSpeechIcon = false;
        _dialoguePages = Array.Empty<string>();
        _dialoguePageIndex = 0;
        _dialogueHoldFrames = 0;
        _autoDismissDialogue = false;
        _autoDismissHoldFrames = 0;
    }

    /// <summary>Test helper: replace the current dialogue pages (WAIT_PRESS / AUTO coverage).</summary>
    public void SetDialoguePagesForTests(IReadOnlyList<string> pages, bool autoDismiss)
    {
        _dialoguePages = pages;
        _dialoguePageIndex = 0;
        DialoguePage = pages.Count > 0 ? pages[0] : string.Empty;
        DialogueMode = PlayDialogueMode.OnBackground;
        WaitingForAdvance = true;
        _autoDismissDialogue = autoDismiss;
        _autoDismissHoldFrames = 120;
        _dialogueHoldFrames = autoDismiss && pages.Count <= 1 ? _autoDismissHoldFrames : 0;
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
        StepFlash();
        StepCameraPan();

        TickEffects();

        // MSG_ON_BG_AUTO may auto-close its (final) page; MSG_ON_BG / WAIT_PRESS wait for A.
        // Other actors keep running (retail cue/walk timing depends on this).
        if (WaitingForAdvance && _autoDismissDialogue && _dialogueHoldFrames > 0)
        {
            _dialogueHoldFrames--;
            if (_dialogueHoldFrames <= 0)
                AdvanceDialogue();
        }

        var progressed = true;
        var guard = 0;
        while (progressed && guard++ < 64)
        {
            progressed = false;
            _cuesConsumedThisFrame.Clear();
            foreach (var actor in _actors.ToArray())
            {
                if (actor.Done)
                    continue;
                if (StepActor(actor))
                    progressed = true;
            }

            // Retail ALERT wakes every waiter on that cue in one unlock pass.
            foreach (var cue in _cuesConsumedThisFrame)
                _cues.Remove(cue);
        }

        Finished = IsSceneComplete();
    }

    /// <summary>
    /// Station HALT/RET ends the playable cutscene even if ambient NPCs (Butterfree)
    /// keep spinning on JUMP_LABEL idle loops.
    /// </summary>
    private bool IsSceneComplete()
    {
        if (_actors.Count == 0)
            return true;
        var station = _actors.FirstOrDefault(a => a.Name == "station");
        if (station is not null)
            return station.Done;
        return _actors.All(a => a.Done || a.LoopingIdle);
    }

    private bool StepActor(ScriptActor actor)
    {
        // Only the speaker is frozen while a textbox waits for A (other lives still cue/walk).
        if (WaitingForAdvance && ReferenceEquals(actor, _dialogueOwner))
            return false;

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
                // Defer remove so every waiter on this cue can wake this pass.
                _cuesConsumedThisFrame.Add(cue);
                actor.AwaitCueId = null;
                actor.Index++;
                return true;
            }
            return false;
        }

        // CMD_UNK_E5: signal cue then wait until a waiter consumes it (GroundScriptLockCond).
        if (actor.E5WaitingCue is int e5Cue)
        {
            if (WakeCueWaiters(e5Cue))
            {
                _cues.Remove(e5Cue);
                actor.E5WaitingCue = null;
                return true;
            }
            if (_cues.Contains(e5Cue))
                return false; // still outstanding
            actor.E5WaitingCue = null;
            // Fall through and run the next opcode.
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
                if (WaitingForAdvance && _dialogueOwner is not null && !ReferenceEquals(_dialogueOwner, actor))
                    return false;
                ShowText(cmd, actor);
                actor.Index++;
                return false;

            case 0xCF: // MSG_VAR(textType, var, speaker)
            {
                if (WaitingForAdvance && _dialogueOwner is not null && !ReferenceEquals(_dialogueOwner, actor))
                    return false;
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
                ClearDialogueState();
                actor.Index++;
                return true;

            case 0xD2: // ASK_DEBUG / ASK1 / ASK2 / ASK3 (+ VAR forms)
            case 0xD3:
            case 0xD4:
            case 0xD5:
            case 0xD6:
            case 0xD7:
            case 0xD8:
            {
                if (WaitingForAdvance && _dialogueOwner is not null && !ReferenceEquals(_dialogueOwner, actor))
                    return false;
                BeginAsk(cmd, actor);
                return false;
            }

            case 0xD9: // CHOICE — consumed by ASK; orphans are skipped
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
                // Retail SectorValueOrDefault: argByte as s8; negative keeps current sector.
                ActiveSector = unchecked((sbyte)cmd.ArgByte) < 0 ? ActiveSector : cmd.ArgByte;
                SpawnLivesIfNeeded(force: true);
                actor.Index++;
                return true;
            }

            case 0x0B: // SELECT_WEATHER
                _weatherId = Math.Max(0, (int)cmd.Arg1);
                actor.Index++;
                return true;

            case 0x0D: // SELECT_LIVES
            {
                ActiveGroup = cmd.ArgShort < 0 ? ActiveGroup : cmd.ArgShort;
                ActiveSector = unchecked((sbyte)cmd.ArgByte) < 0 ? ActiveSector : cmd.ArgByte;
                SpawnLivesIfNeeded(force: true);
                actor.Index++;
                return true;
            }

            case 0x1A: // SPAWN_EFFECT(kind=Arg2, scriptId=Arg1, group=ArgShort, sector=ArgByte)
            {
                var kind = (byte)Math.Clamp(cmd.Arg2, 0, 255);
                var x = GetLiveX(actor);
                var y = GetLiveY(actor);
                _spawnedMapEffects.Add(new SpawnedMapEffect(kind, x, y, GetDirection(LiveKey(actor))));
                actor.Index++;
                return true;
            }

            case 0x44: // BGM_SWITCH
            case 0x45: // BGM_FADEIN
            case 0x46: // BGM_QUEUE
                MusicId = cmd.Arg1;
                actor.Index++;
                // One music change per frame so the play window can consume switches.
                return false;

            case 0x47: // BGM_STOP
            case 0x48: // BGM_FADEOUT
            case 0x42: // MUSIC_STOP_ALL
            case 0x43: // MUSIC_FADEOUT_ALL
                MusicId = null;
                actor.Index++;
                return false;

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
            {
                var cueId = cmd.ArgShort;
                if (_cues.Contains(cueId))
                {
                    _cuesConsumedThisFrame.Add(cueId);
                    actor.Index++;
                    return true;
                }
                actor.AwaitCueId = cueId;
                return false;
            }

            case 0xE4: // ALERT_CUE
            {
                var cueId = cmd.ArgShort;
                if (WakeCueWaiters(cueId))
                    _cues.Remove(cueId);
                else
                    _cues.Add(cueId);
                actor.Index++;
                return true;
            }

            case 0xE5: // CMD_UNK_E5 — GroundScriptLockCond: alert cue + wait for a waiter
            {
                // Butterfree uses this after arriving to unblock the player's AWAIT_CUE(5).
                var cueId = cmd.ArgShort;
                actor.Index++;
                _cues.Add(cueId);
                if (WakeCueWaiters(cueId))
                {
                    _cues.Remove(cueId);
                    return true; // waiter was already present — LockCond satisfied
                }
                actor.E5WaitingCue = cueId;
                return false;
            }

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

            case 0x24: // brightness blend — approximate as gray flash toward Arg2 level
            {
                if (!actor.FlashArmed)
                {
                    var level = (int)Math.Clamp(cmd.Arg2, 0, 255);
                    BeginFlash(level, packedRgb: 0x808080, durationFrames: (int)cmd.Arg1);
                    actor.FlashArmed = true;
                }
                if (cmd.ArgByte != 0 && FadeBusy)
                    return false;
                actor.FlashArmed = false;
                actor.Index++;
                // Yield so a wait-style flash peak is observable before the next op.
                return cmd.ArgByte == 0;
            }

            case 0x27: // FLASH_FROM — blend RGB out
            case 0x28: // FLASH_TO — blend RGB in
            {
                if (!actor.FlashArmed)
                {
                    var target = cmd.Op == 0x28 ? 255 : 0;
                    BeginFlash(target, packedRgb: cmd.Arg2, durationFrames: (int)cmd.Arg1);
                    actor.FlashArmed = true;
                }
                if (cmd.ArgByte != 0 && FadeBusy)
                    return false;
                actor.FlashArmed = false;
                actor.Index++;
                return cmd.ArgByte == 0;
            }

            case 0xDF: // wait until palette fade finishes (sub_8099B94)
                if (FadeBusy)
                    return false;
                actor.Index++;
                return true;

            case 0x2D: // Portrait/name slot bind (textbox.c / ground_script case 7…)
            {
                // argByte selects bind mode; argShort is the portrait/name slot.
                var mode = cmd.ArgByte;
                var slot = cmd.ArgShort;
                if (mode is 7 or 8 or 1 or 2 or 4 or 5)
                {
                    // Bind slot to the current live actor's identity.
                    var liveId = actor.NpcId >= 0 ? actor.NpcId : 0;
                    BindNamePortraitSlot(slot, liveId, emotion: 0);
                }
                else if (mode is 3 or 6 or 9)
                {
                    // arg1 is a live *type id* (sub_80A7AE8 / sub_80A2598 fallback).
                    BindNamePortraitSlotByType(slot, (int)cmd.Arg1, emotion: 0);
                }
                actor.Index++;
                return true;
            }

            case 0x56: // Attach emotion effect (NOTICE/QUESTION/SHOCK/SWEAT/SMILE/ANGRY)
            {
                var key = LiveKey(actor);
                var effectId = cmd.Arg1;
                if (effectId <= 0)
                    _effects.Remove(key);
                else
                    // Sticky until cleared, or until 0xDE starts a oneshot countdown
                    // (NOTICE/QUESTION/SWEAT/SHOCK). SMILE/ANGRY stay until *_END.
                    _effects[key] = (effectId, -1, 0);
                actor.Index++;
                return true;
            }

            case 0xDE: // wait until live emotion effect finishes
            {
                var key = LiveKey(actor);
                if (_effects.TryGetValue(key, out var fx) && fx.EffectId > 0)
                {
                    if (fx.FramesLeft < 0)
                        _effects[key] = (fx.EffectId, 48, fx.Age); // ~0.8s oneshot wait
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

            case 0x86: // CAMERA_PAN — move focus toward GroundLink(Arg1)
            {
                if (!_cameraPanActive)
                    EnsureCameraPanSeeded(actor);
                var (tx, ty) = ResolveLinkPixel((int)cmd.Arg1);
                _cameraPanTargetX = tx;
                _cameraPanTargetY = ty;
                // Retail uses hypot for duration; keep a steady preview pan rate.
                _cameraPanSpeed = 4.0;
                actor.Index++;
                return true;
            }

            case 0x98: // CAMERA_INIT_PAN
                EnsureCameraPanSeeded(actor);
                _cameraPanActive = true;
                actor.Index++;
                return true;

            case 0x99: // CAMERA_END_PAN
                _cameraPanActive = false;
                actor.Index++;
                return true;

            case 0x7A: // WALK_DIRECT — treat like relative/absolute pixel target
                StartWalk(actor, cmd.Arg1, cmd.Arg2, Math.Max(1, (int)cmd.ArgShort));
                return false;

            case 0x91: // ROTATE_TO(spd, transform, targetDir)
            case 0x92:
            {
                var key = LiveKey(actor);
                var target = (int)cmd.Arg1 & 7;
                var transform = (int)cmd.ArgShort;
                var frames = Math.Max(1, (int)cmd.ArgByte);
                if (!actor.RotateArmed)
                {
                    var current = GetDirection(key);
                    // FLIP / random / none: snap. Spin styles: step shortest way.
                    if (transform is 0 or 5 or >= 6) // NONE, FLIP, RAND*
                    {
                        _directions[key] = transform == 5 ? (current + 4) & 7 : target;
                        actor.WaitFrames = frames;
                        actor.Index++;
                        return actor.WaitFrames == 0;
                    }

                    actor.RotateArmed = true;
                    actor.RotateTarget = target;
                    actor.RotateStepsLeft = ShortestTurnSteps(current, target);
                    actor.RotateWaitPerStep = Math.Max(1, frames / Math.Max(1, actor.RotateStepsLeft));
                    actor.WaitFrames = actor.RotateWaitPerStep;
                    return false;
                }

                if (actor.WaitFrames > 0)
                    return false;

                if (actor.RotateStepsLeft > 0)
                {
                    var cur = GetDirection(key);
                    var delta = SignedTurnDelta(cur, actor.RotateTarget);
                    var step = delta == 0 ? 0 : (delta > 0 ? 1 : -1);
                    _directions[key] = (cur + step + 8) & 7;
                    actor.RotateStepsLeft--;
                    if (actor.RotateStepsLeft > 0)
                    {
                        actor.WaitFrames = actor.RotateWaitPerStep;
                        return false;
                    }
                }

                _directions[key] = actor.RotateTarget;
                actor.RotateArmed = false;
                actor.Index++;
                return true;
            }

            case 0x5B: // WARP_WAYPOINT — teleport live to GroundLink(Arg1)
            {
                var (tx, ty) = ResolveLinkPixel((int)cmd.Arg1);
                _livePositions[LiveKey(actor)] = (tx, ty);
                actor.WalkActive = false;
                actor.Index++;
                return true;
            }

            case 0xF6: // DEBUGINFO
            case 0xF4: // LABEL marker
                actor.Index++;
                return true;

            case 0xE6: // CALL_LABEL
            case 0xE7: // JUMP_LABEL
            {
                var labelId = cmd.ArgShort;
                var target = FindLabelIndex(actor.Commands, labelId);
                if (target < 0)
                {
                    actor.Index++;
                    return true;
                }

                if (cmd.Op == 0xE6)
                    actor.CallStack.Push((actor.Commands, actor.Index + 1));

                // Butterfree idle spin: JUMP_LABEL(0) forever — mark looping so the
                // station can still complete the scene.
                if (cmd.Op == 0xE7 && target <= actor.Index)
                {
                    actor.LabelLoopCount++;
                    if (actor.LabelLoopCount >= 2)
                    {
                        actor.LoopingIdle = true;
                        actor.Index = target;
                        return false; // yield a frame so the pose animates
                    }
                }

                actor.Index = target;
                return true;
            }

            default:
                actor.Index++;
                return true;
        }
    }

    private static int FindLabelIndex(IReadOnlyList<ScriptCommandData> commands, int labelId)
    {
        for (var i = 0; i < commands.Count; i++)
        {
            if (commands[i].Op == 0xF4 && commands[i].ArgShort == labelId)
                return i;
        }
        return -1;
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
        if (_functionCache.TryGetValue(scriptId, out var cached))
            return cached;

        List<ScriptCommandData>? body = null;
        if (_rom is not null && _profile is not null &&
            scriptId >= 0 && scriptId < _profile.FunctionScriptCount &&
            _profile.Anchors.TryGetValue("gFunctionScriptTable", out var table))
        {
            try
            {
                var data = ScriptRefData.Read(_rom, table + scriptId * ScriptRefData.Size, loadCommands: true);
                body = data.Commands;
            }
            catch
            {
                body = null;
            }
        }

        if (body is null || body.Count == 0)
            body = BuiltinEmotionScript(scriptId);

        if (body is not null)
            _functionCache[scriptId] = body;
        return body;
    }

    /// <summary>
    /// NOTICE/QUESTION/SWEAT/SHOCK/SMILE/ANGRY when ROM function-table lookup fails.
    /// IDs match <c>include/asm/constants/script_func_constants.inc</c>.
    /// </summary>
    private static List<ScriptCommandData>? BuiltinEmotionScript(int scriptId) =>
        scriptId switch
        {
            0x28 => // NOTICE_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.NoticeId },
                new() { Op = 0xDE },
                new() { Op = 0xEE },
            ],
            0x29 => // QUESTION_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.QuestionId },
                new() { Op = 0xDE },
                new() { Op = 0xEE },
            ],
            0x2A => // SWEAT_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.SweatId },
                new() { Op = 0xDE },
                new() { Op = 0xEE },
            ],
            0x2B => // SHOCK_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.ShockId },
                new() { Op = 0xDE },
                new() { Op = 0xEE },
            ],
            0x2E => // SMILE_START_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.SmileId },
                new() { Op = 0xEE },
            ],
            0x2F => // SMILE_END_FUNC
            [
                new() { Op = 0x56, Arg1 = 0 },
                new() { Op = 0xEE },
            ],
            0x30 => // ANGRY_START_FUNC
            [
                new() { Op = 0x56, Arg1 = EmotionEffectAtlas.AngryId },
                new() { Op = 0xEE },
            ],
            0x31 => // ANGRY_END_FUNC
            [
                new() { Op = 0x56, Arg1 = 0 },
                new() { Op = 0xEE },
            ],
            _ => null,
        };

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

        // Emotion -2: telepathy / no face file (ScriptSetPortraitInfo spriteId == -2).
        var hidden = emotion == -2;
        var species = ResolveNpcSpecies(npcId);
        _portraits[npcId] = new PlayPortraitSlot(npcId, place, hidden ? 0 : emotion, flip, species, hidden);
    }

    /// <summary>
    /// CMD_BYTE_2D bind: retail <c>sub_80A2558</c> wires a textbox name/portrait slot to a live.
    /// </summary>
    private void BindNamePortraitSlot(int slot, int liveId, int emotion)
    {
        if (slot < 0)
            return;

        _nameSlotToLive[slot] = liveId;
        _nameSlotSpecies.Remove(slot);
        var species = ResolveLiveIndexSpecies(liveId);
        UpsertPortraitSpecies(slot, species, emotion, hidden: false);
    }

    /// <summary>
    /// Mode 9/6/3: bind by live type id. Prefer a spawned live of that type; else ROM species.
    /// </summary>
    private void BindNamePortraitSlotByType(int slot, int typeId, int emotion)
    {
        if (slot < 0)
            return;

        // Find spawned live whose TypeId matches.
        if (_scene is not null)
        {
            var sector = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
                .Sectors.ElementAtOrDefault(ActiveSector);
            if (sector is not null)
            {
                for (var i = 0; i < sector.Lives.Count; i++)
                {
                    if (sector.Lives[i].TypeId != typeId)
                        continue;
                    BindNamePortraitSlot(slot, i, emotion);
                    if (_rom is not null && _profile is not null)
                    {
                        var sp = GroundLivesTypes.ResolvePlaySpecies(
                            _rom, _profile, typeId, _appearance);
                        if (sp > 0)
                            _nameSlotSpecies[slot] = sp;
                    }
                    return;
                }
            }
        }

        if (_rom is null || _profile is null)
            return;
        var species = GroundLivesTypes.ResolvePlaySpecies(_rom, _profile, typeId, _appearance);
        if (species <= 0)
            return;
        _nameSlotToLive.Remove(slot);
        _nameSlotSpecies[slot] = species;
        UpsertPortraitSpecies(slot, species, emotion, hidden: false);
    }

    private void UpsertPortraitSpecies(int slot, short species, int emotion, bool hidden)
    {
        var place = 0;
        var flip = false;
        if (_portraitPlacementMemory.TryGetValue(slot, out var mem))
        {
            place = mem.Placement;
            flip = mem.Flip;
        }

        if (_portraits.TryGetValue(slot, out var existing))
        {
            place = existing.Placement;
            flip = existing.Flip;
            if (existing.Hidden)
                hidden = true;
            if (existing.Emotion != 0 && emotion == 0)
                emotion = existing.Emotion;
        }

        _portraits[slot] = new PlayPortraitSlot(slot, place, emotion, flip, species, hidden);
    }

    private void EnsureSpeakerPortrait(int speakerId)
    {
        if (speakerId < 0)
            return;
        if (_portraits.TryGetValue(speakerId, out var existing))
        {
            // Telepathy / already configured — keep species from type binds.
            if (existing.Hidden || existing.Species > 0)
                return;
        }

        if (_nameSlotSpecies.TryGetValue(speakerId, out var fromType) && fromType > 0)
        {
            UpsertPortraitSpecies(speakerId, fromType, emotion: 0, hidden: false);
            return;
        }

        var liveId = _nameSlotToLive.TryGetValue(speakerId, out var bound) ? bound : speakerId;
        BindNamePortraitSlot(speakerId, liveId, emotion: 0);
    }

    private short ResolveNpcSpecies(int npcId)
    {
        if (_nameSlotSpecies.TryGetValue(npcId, out var fromType) && fromType > 0)
            return fromType;
        if (_nameSlotToLive.TryGetValue(npcId, out var boundLive))
            return ResolveLiveIndexSpecies(boundLive);
        return ResolveLiveIndexSpecies(npcId);
    }

    private short ResolveLiveIndexSpecies(int liveId)
    {
        if (_liveSpecies.TryGetValue(liveId, out var known) && known > 0)
            return known;
        if (_appearance is not null)
        {
            if (liveId == 0) return _appearance.PlayerSpecies;
            if (liveId == 1) return _appearance.PartnerSpecies;
        }

        var sector = _scene?.Groups.ElementAtOrDefault(ActiveGroup)?
            .Sectors.ElementAtOrDefault(ActiveSector);
        var live = sector?.Lives.ElementAtOrDefault(liveId);
        if (live is null || _rom is null || _profile is null)
            return _appearance?.PlayerSpecies ?? 1;
        return GroundLivesTypes.ResolvePlaySpecies(_rom, _profile, live.TypeId, _appearance);
    }

    /// <summary>
    /// Apply mode-9/6/3 type-id name binds from earlier (and current) groups on this map
    /// so telepathy slots like Xatu persist when Scene Play opens mid-story.
    /// </summary>
    private void SeedTypeIdBindsFromMap()
    {
        if (_scene is null || _rom is null)
            return;

        foreach (var group in _scene.Groups.OrderBy(g => g.Index))
        {
            if (group.Index > ActiveGroup)
                break;
            foreach (var sector in group.Sectors)
            {
                foreach (var station in sector.Stations)
                    SeedTypeIdBindsFromCommands(station.Commands);
                foreach (var live in sector.Lives)
                {
                    foreach (var offset in live.ScriptOffsets.Where(o => o > 0))
                    {
                        try
                        {
                            SeedTypeIdBindsFromCommands(ScriptCodec.ReadScript(_rom, offset));
                        }
                        catch
                        {
                            // Ignore unreadable script slots.
                        }
                    }
                }
            }
        }
    }

    private void SeedTypeIdBindsFromCommands(IReadOnlyList<ScriptCommandData>? commands)
    {
        if (commands is null)
            return;
        foreach (var cmd in commands)
        {
            if (cmd.Op != 0x2D)
                continue;
            if (cmd.ArgByte is not (3 or 6 or 9))
                continue;
            BindNamePortraitSlotByType(cmd.ArgShort, (int)cmd.Arg1, emotion: 0);
        }
    }

    private static bool IsFlipPlacement(int placement) => placement is
        3 or 5 or 6 or 7 or 9 or 13 or 15 or 16 or 17 or 19;

    private bool WakeCueWaiters(int cueId)
    {
        var woke = false;
        foreach (var other in _actors)
        {
            if (other.AwaitCueId != cueId)
                continue;
            other.AwaitCueId = null;
            other.Index++;
            woke = true;
        }
        return woke;
    }

    private void BeginAsk(ScriptCommandData ask, ScriptActor actor)
    {
        // Text type matches ground_script.c → SCRIPT_TEXT_TYPE_*.
        var textType = ask.Op switch
        {
            0xD2 or 0xD3 or 0xD6 => 0, // INSTANT
            0xD4 or 0xD7 => 1,         // QUIET
            _ => 2,                    // NPC (ASK3 / ASK3_VAR)
        };
        // ASK(b, default, speaker, text): speaker is Arg1, default highlight is ArgShort.
        ShowText(ask, actor, speakerOverride: (int)ask.Arg1, textTypeOverride: textType);

        _pendingChoices.Clear();
        _choiceOwner = actor;
        _choiceIndex = 0;
        actor.Index++; // past ASK

        // Optional VARIANT / VARIANT_DEFAULT arms (ASK*_VAR) — skip; keep ASK text.
        while (actor.Index < actor.Commands.Count)
        {
            var op = actor.Commands[actor.Index].Op;
            if (op is 0xD0 or 0xD1)
            {
                actor.Index++;
                continue;
            }
            break;
        }

        var starredIndex = -1;
        while (actor.Index < actor.Commands.Count && actor.Commands[actor.Index].Op == 0xD9)
        {
            var choice = actor.Commands[actor.Index];
            actor.Index++;
            var raw = DecodeCommandText(choice) ?? string.Empty;
            var text = DialogueFormatter.ForTextbox(raw, BuildFormatContext()).Trim();
            var starred = text.StartsWith('*');
            if (starred)
                text = text[1..].TrimStart();
            if (string.IsNullOrWhiteSpace(text))
                text = $"Choice {_pendingChoices.Count + 1}";
            _pendingChoices.Add(new DialogueChoice(choice.ArgShort, text));
            if (starred && starredIndex < 0)
                starredIndex = _pendingChoices.Count - 1;
        }

        if (_pendingChoices.Count == 0)
            return;

        // Default highlight: ASK.argShort when in range, else first '*'-marked, else 0.
        var def = ask.ArgShort;
        if (def >= 0 && def < _pendingChoices.Count)
            _choiceIndex = def;
        else if (starredIndex >= 0)
            _choiceIndex = starredIndex;
        else
            _choiceIndex = 0;
    }

    private string? DecodeCommandText(ScriptCommandData cmd)
    {
        if (_charmap is not null && _rom is not null &&
            _rom.TryPointerToOffset(cmd.ArgPtr, out var textOffset))
            return _charmap.DecodeRomString(_rom, textOffset, 768);
        return null;
    }

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
                ShowText(cmd, actor, speakerOverride: speakerId, textTypeOverride: textType);
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
                _dialoguePages = DialogueFormatter.SplitPages(Dialogue, BuildFormatContext());
                _dialoguePageIndex = 0;
                DialoguePage = _dialoguePages.Count > 0 ? _dialoguePages[0] : string.Empty;
                return;
            }
            break;
        }
    }

    private void ShowText(
        ScriptCommandData cmd,
        ScriptActor owner,
        int? speakerOverride = null,
        int? textTypeOverride = null)
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

        // A normal MSG replaces any prior ASK menu.
        if (cmd.Op is not (0xD2 or 0xD3 or 0xD4 or 0xD5 or 0xD6 or 0xD7 or 0xD8))
        {
            _pendingChoices.Clear();
            _choiceOwner = null;
            _choiceIndex = 0;
        }

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
        {
            EnsureSpeakerPortrait(DialogueSpeakerId);
            DialogueSpeakerLabel = ResolveSpeakerLabel(DialogueSpeakerId);
        }
        if (DialogueMode == PlayDialogueMode.Quiet)
        {
            DialogueUsesSpeechIcon = false;
            DialogueSpeakerLabel = null;
        }

        _dialoguePages = DialogueFormatter.SplitPages(raw, BuildFormatContext());
        _dialoguePageIndex = 0;
        DialoguePage = _dialoguePages.Count > 0 ? _dialoguePages[0] : string.Empty;

        WaitingForAdvance = true;
        _dialogueOwner = owner;
        // Scene Play always waits for A on black-screen narration (including MSG_ON_BG_AUTO),
        // so WAIT_PRESS and every narration beat stay viewer-controlled.
        _autoDismissDialogue = false;
        _autoDismissHoldFrames = 0;
        _dialogueHoldFrames = 0;
    }

    private DialogueFormatContext BuildFormatContext()
    {
        var names = new string?[10];
        var speciesNames = new string?[10];

        var player = _appearance?.PlayerSpecies ?? 0;
        var partner = _appearance?.PartnerSpecies ?? 0;
        if (player > 0)
        {
            names[0] = DialogueFormatter.PrettySpeciesName(player);
            speciesNames[0] = names[0];
        }
        if (partner > 0)
        {
            names[1] = DialogueFormatter.PrettySpeciesName(partner);
            speciesNames[1] = names[1];
        }

        // Prefer CMD_BYTE_2D bindings, then runtime live species, else sector lives.
        foreach (var (slot, species) in _nameSlotSpecies)
        {
            if (slot is < 0 or > 9 || species <= 0)
                continue;
            var label = DialogueFormatter.PrettySpeciesName(species);
            names[slot] = label;
            speciesNames[slot] = label;
        }

        foreach (var (slot, liveId) in _nameSlotToLive)
        {
            if (slot is < 0 or > 9 || _nameSlotSpecies.ContainsKey(slot))
                continue;
            var species = ResolveLiveIndexSpecies(liveId);
            if (species <= 0)
                continue;
            var label = DialogueFormatter.PrettySpeciesName(species);
            names[slot] = label;
            speciesNames[slot] = label;
        }

        if (_liveSpecies.Count > 0)
        {
            foreach (var (id, species) in _liveSpecies)
            {
                if (id < 0 || id > 9 || species <= 0)
                    continue;
                if (_nameSlotToLive.ContainsKey(id) || _nameSlotSpecies.ContainsKey(id))
                    continue;
                var label = DialogueFormatter.PrettySpeciesName(species);
                names[id] ??= label;
                speciesNames[id] ??= label;
            }
        }
        else if (_scene is not null)
        {
            var sector = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
                .Sectors.ElementAtOrDefault(ActiveSector);
            if (sector is not null)
            {
                for (var i = 0; i < sector.Lives.Count && i <= 9; i++)
                {
                    if (_nameSlotToLive.ContainsKey(i) || _nameSlotSpecies.ContainsKey(i))
                        continue;
                    var live = sector.Lives[i];
                    var species = (_rom is not null && _profile is not null)
                        ? GroundLivesTypes.ResolvePlaySpecies(
                            _rom, _profile, live.TypeId, _appearance)
                        : (short)0;
                    if (species <= 0)
                        continue;
                    var label = DialogueFormatter.PrettySpeciesName(species);
                    names[i] ??= label;
                    speciesNames[i] ??= label;
                }
            }
        }

        return new DialogueFormatContext(player, partner, names, speciesNames);
    }

    private string ResolveSpeakerLabel(int speakerId)
    {
        if (_nameSlotSpecies.TryGetValue(speakerId, out var typed) && typed > 0)
            return DialogueFormatter.PrettySpeciesName(typed);

        if (_nameSlotToLive.TryGetValue(speakerId, out var liveBound))
            return DialogueFormatter.PrettySpeciesName(ResolveLiveIndexSpecies(liveBound));

        if (speakerId == 0 && _appearance is not null)
            return DialogueFormatter.PrettySpeciesName(_appearance.PlayerSpecies);
        if (speakerId == 1 && _appearance is not null)
            return DialogueFormatter.PrettySpeciesName(_appearance.PartnerSpecies);

        if (_liveSpecies.TryGetValue(speakerId, out var liveSpecies) && liveSpecies > 0)
            return DialogueFormatter.PrettySpeciesName(liveSpecies);

        if (_rom is not null && _scene is not null && _profile is not null)
        {
            var live = _scene.Groups.ElementAtOrDefault(ActiveGroup)?
                .Sectors.ElementAtOrDefault(ActiveSector)?
                .Lives.ElementAtOrDefault(speakerId);
            if (live is not null)
            {
                var species = GroundLivesTypes.ResolvePlaySpecies(
                    _rom, _profile, live.TypeId, _appearance);
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

            var species = GroundLivesTypes.ResolvePlaySpecies(
                _rom, _profile!, live.TypeId, _appearance);
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

    private void StepFlash()
    {
        if (_flashCurrent < _flashTarget)
            _flashCurrent = Math.Min(_flashTarget, _flashCurrent + _flashStep);
        else if (_flashCurrent > _flashTarget)
            _flashCurrent = Math.Max(_flashTarget, _flashCurrent - _flashStep);
    }

    private void StepCameraPan()
    {
        if (!_cameraPanActive)
            return;
        var dx = _cameraPanTargetX - _cameraFocusX;
        var dy = _cameraPanTargetY - _cameraFocusY;
        var dist = Math.Sqrt(dx * dx + dy * dy);
        if (dist <= _cameraPanSpeed || dist < 0.5)
        {
            _cameraFocusX = _cameraPanTargetX;
            _cameraFocusY = _cameraPanTargetY;
            return;
        }
        _cameraFocusX += dx / dist * _cameraPanSpeed;
        _cameraFocusY += dy / dist * _cameraPanSpeed;
    }

    private void EnsureCameraPanSeeded(ScriptActor actor)
    {
        if (_cameraPanActive)
            return;
        // Prefer this actor's live, else live 0, else keep prior focus (0,0).
        if (_livePositions.TryGetValue(LiveKey(actor), out var pos))
        {
            _cameraFocusX = pos.X;
            _cameraFocusY = pos.Y;
        }
        else if (_livePositions.TryGetValue(0, out var p0))
        {
            _cameraFocusX = p0.X;
            _cameraFocusY = p0.Y;
        }
        _cameraPanTargetX = _cameraFocusX;
        _cameraPanTargetY = _cameraFocusY;
        _cameraPanActive = true;
    }

    private void BeginFlash(int targetAlpha, int packedRgb, int durationFrames)
    {
        _flashR = (byte)((packedRgb >> 16) & 0xFF);
        _flashG = (byte)((packedRgb >> 8) & 0xFF);
        _flashB = (byte)(packedRgb & 0xFF);
        _flashTarget = Math.Clamp(targetAlpha, 0, 255);
        if (durationFrames <= 0)
        {
            _flashCurrent = _flashTarget;
            _flashStep = 8;
            return;
        }

        var delta = Math.Abs(_flashTarget - _flashCurrent);
        _flashStep = Math.Max(1, (delta + durationFrames - 1) / durationFrames);
        // Apply one step immediately so the overlay is visible the arming frame
        // (TickOneFrame steps flash before actors).
        StepFlash();
    }

    private void TickEffects()
    {
        if (_effects.Count == 0)
            return;
        foreach (var key in _effects.Keys.ToArray())
        {
            var fx = _effects[key];
            var age = fx.Age + 1;
            if (fx.FramesLeft < 0)
            {
                _effects[key] = (fx.EffectId, -1, age); // sticky
                continue;
            }
            var left = fx.FramesLeft - 1;
            if (left <= 0)
                _effects.Remove(key);
            else
                _effects[key] = (fx.EffectId, left, age);
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

    private static int SignedTurnDelta(int from, int to)
    {
        var delta = ((to - from) + 8) % 8;
        if (delta > 4)
            delta -= 8;
        return delta;
    }

    private static int ShortestTurnSteps(int from, int to)
    {
        var delta = Math.Abs(SignedTurnDelta(from, to));
        return Math.Max(1, delta);
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
        /// <summary>Cue id signaled by CMD_UNK_E5; cleared once a waiter consumes it.</summary>
        public int? E5WaitingCue { get; set; }
        /// <summary>FLASH_*/brightness op armed until wait completes.</summary>
        public bool FlashArmed { get; set; }
        public bool RotateArmed { get; set; }
        public int RotateTarget { get; set; }
        public int RotateStepsLeft { get; set; }
        public int RotateWaitPerStep { get; set; }
        public bool Done { get; set; }
        public bool WalkActive { get; set; }
        public bool LoopingIdle { get; set; }
        public int LabelLoopCount { get; set; }
        public double? WalkTargetX { get; set; }
        public double? WalkTargetY { get; set; }
        public double WalkSpeedPerFrame { get; set; }
        public Stack<(IReadOnlyList<ScriptCommandData> Commands, int Index)> CallStack { get; } = new();
    }
}
