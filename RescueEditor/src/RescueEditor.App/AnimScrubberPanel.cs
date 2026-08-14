using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Inspector timeline for AX poses and emotion/ground-effect clips.</summary>
internal sealed class AnimScrubberPanel : UserControl
{
    private readonly InstantComboBox _animBox = new() { HorizontalAlignment = HorizontalAlignment.Stretch };
    private readonly TextBlock _mapLabel;
    private readonly Image _preview;
    private readonly Slider _slider;
    private readonly TextBlock _empty;
    private bool _suppress;
    private AnimScrubber? _scrub;
    private ActorSpriteAtlas? _actors;
    private EmotionEffectAtlas? _effects;
    private int _speciesId;

    public event Action<int>? ActorAnimChosen;
    public event Action<int>? EffectIdChosen;

    public AnimScrubberPanel()
    {
        _mapLabel = new TextBlock
        {
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextSecondaryBrush,
            TextWrapping = TextWrapping.Wrap,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space1),
        };
        _preview = new Image
        {
            Stretch = Stretch.Uniform,
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
            MaxHeight = 96,
            MaxWidth = 160,
        };
        RenderOptions.SetBitmapInterpolationMode(_preview, BitmapInterpolationMode.None);
        _slider = new Slider
        {
            Minimum = 0,
            Maximum = 0,
            Height = 16,
            Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space2, EditorTheme.Space1),
        };
        _empty = new TextBlock
        {
            Text = "Select a live, SELECT_ANIMATION, or EMOTION_EFFECT to scrub frames.",
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextDimBrush,
            TextWrapping = TextWrapping.Wrap,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2),
        };

        _animBox.SelectionChanged += (_, _) => OnAnimPicked();
        _slider.PropertyChanged += (_, e) =>
        {
            if (e.Property == RangeBase.ValueProperty && !_suppress)
            {
                _scrub?.SetTick((int)_slider.Value);
                PaintPreview();
            }
        };

        var wellBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(_slider, Dock.Bottom);
        wellBody.Children.Add(_slider);
        wellBody.Children.Add(_preview);

        var well = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space2),
            Height = 120,
            Child = wellBody,
        };

        Content = EditorChrome.InspectorSection("Animation",
            EditorChrome.PropertyRow("Id", _animBox),
            _mapLabel,
            well,
            _empty);
    }

    public void Clear()
    {
        _scrub = null;
        _actors = null;
        _effects = null;
        _preview.Source = null;
        _mapLabel.Text = "";
        _empty.IsVisible = true;
        _slider.IsEnabled = false;
        _animBox.IsEnabled = false;
    }

    public void BindActor(
        string? assetsRoot,
        ActorSpriteAtlas? atlas,
        int speciesId,
        int scriptAnim,
        int direction,
        NamedIdCatalog names)
    {
        _actors = atlas;
        _effects = null;
        _speciesId = speciesId;
        FillCombo(GroundAnimMapping.List(names), scriptAnim, actor: true);
        AnimScrubber? scrub = null;
        if (!string.IsNullOrEmpty(assetsRoot) && speciesId > 0)
        {
            var folder = MonsterSpriteFolders.ForSpecies(speciesId, MonsterSpriteFolders.Load(assetsRoot));
            if (folder is not null)
                scrub = AnimScrubber.TryLoadActor(assetsRoot, folder, scriptAnim, direction, names);
        }

        if (scrub is null)
            scrub = AnimScrubber.ForActor(
                scriptAnim,
                AxAnimSequence.FromFrames([]),
                direction,
                names);
        ApplyScrub(scrub, emptyHint: speciesId <= 0
            ? "Select a live on the map to preview this animation."
            : "No AX sequence for this species / facing.");
    }

    public void BindEffect(EmotionEffectAtlas? atlas, int effectId, NamedIdCatalog names)
    {
        _actors = null;
        _effects = atlas;
        _speciesId = 0;
        var picks = names.Entries
            .OrderBy(e => e.Id)
            .Select(e => new AnimPick(e.Id, $"{e.Id}  {e.Name}", true))
            .ToArray();
        if (picks.Length == 0)
        {
            picks =
            [
                new(88, "88  EMOTION_EFFECT_NOTICE", true),
                new(89, "89  EMOTION_EFFECT_QUESTION", true),
                new(91, "91  EMOTION_EFFECT_SHOCK", true),
                new(92, "92  EMOTION_EFFECT_SWEAT", true),
                new(93, "93  EMOTION_EFFECT_SMILE", true),
                new(94, "94  EMOTION_EFFECT_ANGRY", true),
            ];
        }

        FillCombo(picks, effectId);
        var info = atlas?.TryGetSequence(effectId);
        if (info is null)
        {
            ApplyScrub(
                AnimScrubber.ForEffect(effectId, new EffectAnimInfo(effectId, 0, false, AxAnimSequence.FromFrames([])), names),
                emptyHint: "No effect clip in this ROM.");
            return;
        }

        ApplyScrub(AnimScrubber.ForEffect(effectId, info.Value, names), emptyHint: null);
    }

    public void BindGroundEffect(GroundEffectAtlas? atlas, byte typeId)
    {
        _scrub = null;
        _actors = null;
        _effects = null;
        _animBox.IsEnabled = false;
        _slider.IsEnabled = false;
        _empty.IsVisible = false;
        _mapLabel.Text = GroundEffectAtlas.ShouldPreviewSectorEffect(typeId)
            ? $"Ground effect kind {typeId} (efob{typeId:D3})"
            : $"Kind {typeId} is a camera / script host — no sprite.";
        var image = atlas?.TryGetForEffect(typeId);
        _preview.Source = image is null ? null : RgbaBitmap.ToWriteable(image);
        if (image is null)
            _mapLabel.Text += " — no sheet.";
    }

    private void FillCombo(IReadOnlyList<AnimMapping> mappings, int selectedId, bool actor)
    {
        FillCombo(mappings.Select(m => new AnimPick(m.ScriptAnimId, $"{m.ScriptAnimId}  {m.ConstantName}", !actor)).ToArray(), selectedId);
    }

    private void FillCombo(IReadOnlyList<AnimPick> picks, int selectedId)
    {
        _suppress = true;
        try
        {
            _animBox.IsEnabled = true;
            _animBox.ItemsSource = picks;
            _animBox.SelectedItem = picks.FirstOrDefault(p => p.Id == selectedId) ?? picks.FirstOrDefault();
        }
        finally
        {
            _suppress = false;
        }
    }

    private void ApplyScrub(AnimScrubber scrub, string? emptyHint)
    {
        _scrub = scrub;
        _empty.IsVisible = emptyHint is not null && scrub.Sequence.Frames.Count <= 1 && scrub.Current.PoseId == 0;
        _empty.Text = emptyHint ?? "";
        _mapLabel.Text = scrub.Mapping.Kind == AnimScrubKind.Actor
            ? $"{scrub.Mapping.SelectAnimationLabel} → AX {scrub.Mapping.AxAnimIndex} · {scrub.Mapping.PlaybackMode}"
            : $"{scrub.Mapping.SelectAnimationLabel} → slot {scrub.Mapping.AxAnimIndex} · {scrub.Mapping.PlaybackMode}";
        _suppress = true;
        try
        {
            _slider.Maximum = scrub.MaxTick;
            _slider.Value = scrub.Tick;
            _slider.IsEnabled = scrub.MaxTick > 0;
        }
        finally
        {
            _suppress = false;
        }

        PaintPreview();
    }

    private void OnAnimPicked()
    {
        if (_suppress || _animBox.SelectedItem is not AnimPick pick)
            return;
        if (pick.Effect)
            EffectIdChosen?.Invoke(pick.Id);
        else
            ActorAnimChosen?.Invoke(pick.Id);
    }

    private void PaintPreview()
    {
        if (_scrub is null)
            return;

        var frame = _scrub.Current;
        ToolTip.SetTip(
            _preview,
            $"frame {_scrub.FrameIndex + 1}/{Math.Max(1, _scrub.Sequence.Frames.Count)}  " +
            $"tick {_scrub.Tick}/{_scrub.MaxTick}  pose {frame.PoseId}  {frame.DurationFrames}f  " +
            $"off {frame.OffsetX},{frame.OffsetY}" +
            (_scrub.Mapping.HoldFirstFrame ? "  · Scene Play holds first" : ""));

        RgbaImage? image = null;
        if (_scrub.Mapping.Kind == AnimScrubKind.Actor && _actors is not null && _speciesId > 0)
        {
            image = _actors.TryGetAnimatedSprite(
                _speciesId,
                _scrub.Mapping.ScriptAnimId,
                _scrub.Direction,
                _scrub.Tick,
                applyRetailPlayback: false)?.Image;
        }
        else if (_scrub.Mapping.Kind == AnimScrubKind.Effect)
        {
            image = _effects?.TryGetFrame(_scrub.Mapping.ScriptAnimId, _scrub.Tick)?.Image;
        }

        _preview.Source = image is null ? null : RgbaBitmap.ToWriteable(image);
    }

    private sealed record AnimPick(int Id, string Label, bool Effect)
    {
        public override string ToString() => Label;
    }
}
