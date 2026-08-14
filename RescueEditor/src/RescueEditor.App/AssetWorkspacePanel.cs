using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform.Storage;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

/// <summary>Center workspace for non-scene assets: list/grid browser + preview.</summary>
public sealed class AssetWorkspacePanel : UserControl
{
    private readonly ListBox _assetList;
    private readonly ScrollViewer _assetGridScroller;
    private readonly WrapPanel _assetGrid;
    private readonly Border _browserHost;
    private readonly Border _previewHost;
    private readonly ToggleButton _listViewButton;
    private readonly ToggleButton _gridViewButton;
    private readonly Grid _split;

    private RomImage? _rom;
    private Charmap? _charmap;
    private AssetCatalog? _catalog;
    private SceneDatabase? _scenes;
    private ChangeService? _changes;
    private WorkingRom? _workingRom;
    private PortraitAtlas? _portraitAtlas;
    private bool _useGridView;
    private AssetDescriptor? _selectedAsset;
    private CancellationTokenSource? _thumbnailCts;
    private CancellationTokenSource? _previewCts;
    private SoundPreviewPanel? _soundPreview;
    private AgbplayStreamHost? _soundStreamHost;
    private SoundCacheWarmer? _soundCacheWarmer;
    private Image? _previewImage;
    private ScrollViewer? _previewScroller;
    private TextBlock? _zoomLabel;
    private double _previewZoom = 1.0;
    private double _previewZoomDefault = 1.0;
    private bool _integerPreviewZoom;
    private int _previewPixelWidth;
    private int _previewPixelHeight;

    private EncodedSound? _pendingSound;
    private string? _pendingSoundAssetId;
    private readonly Dictionary<string, byte[]> _appliedSoundPreview = new(StringComparer.Ordinal);

    public event EventHandler<AssetDescriptor?>? AssetSelected;
    public event EventHandler? RequestSceneWorkspace;

    public AssetDescriptor? SelectedAsset => _selectedAsset;

    public AssetWorkspacePanel()
    {
        _assetList = new ListBox();
        EditorChrome.StyleList(_assetList);
        _assetList.SelectionChanged += async (_, _) =>
        {
            if (_assetList.SelectedItem is AssetListItem item)
                await ShowPreviewAsync(item.Asset);
        };

        _assetGrid = new WrapPanel { Orientation = Orientation.Horizontal };
        _assetGridScroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
            Content = _assetGrid,
            IsVisible = false,
        };
        _browserHost = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 1, 0),
            Child = new Panel { Children = { _assetList, _assetGridScroller } },
        };
        _previewHost = new Border
        {
            Padding = new Thickness(EditorTheme.Space4),
            Background = EditorTheme.CanvasBgBrush,
            Child = EditorChrome.MutedBody("Select an asset to preview."),
        };
        // Center the empty-state copy in the preview pane.
        if (_previewHost.Child is TextBlock empty)
        {
            empty.VerticalAlignment = VerticalAlignment.Center;
            empty.HorizontalAlignment = HorizontalAlignment.Center;
            empty.TextAlignment = TextAlignment.Center;
        }

        _listViewButton = EditorChrome.ToolToggle("List", isChecked: true);
        _gridViewButton = EditorChrome.ToolToggle("Grid");
        _listViewButton.IsCheckedChanged += (_, _) =>
        {
            if (_listViewButton.IsChecked == true)
                SetViewMode(false);
        };
        _gridViewButton.IsCheckedChanged += (_, _) =>
        {
            if (_gridViewButton.IsChecked == true)
                SetViewMode(true);
        };

        var toolbarInner = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { _listViewButton, _gridViewButton },
        };
        var toolbar = EditorChrome.ToolbarHost(toolbarInner);

        _split = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.AssetBrowserWidth},*"),
            Children = { _browserHost, _previewHost },
        };
        Grid.SetColumn(_browserHost, 0);
        Grid.SetColumn(_previewHost, 1);

        Content = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Background = EditorTheme.PanelBgBrush,
            Children = { toolbar, _split },
        };
        Grid.SetRow(toolbar, 0);
        Grid.SetRow(_split, 1);
    }

    internal void AttachSound(AgbplayStreamHost streamHost, SoundCacheWarmer warmer)
    {
        _soundStreamHost = streamHost;
        _soundCacheWarmer = warmer;
    }

    public void Bind(RomImage rom, Charmap charmap, AssetCatalog catalog, SceneDatabase? scenes, ChangeService changes, WorkingRom? workingRom = null)
    {
        _rom = workingRom?.View ?? rom;
        _charmap = charmap;
        _catalog = catalog;
        _scenes = scenes;
        _changes = changes;
        _workingRom = workingRom;
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _portraitAtlas = new PortraitAtlas(_rom, root);
    }

    public void Clear()
    {
        DisposeSoundPreview();
        _rom = null;
        _charmap = null;
        _catalog = null;
        _scenes = null;
        _changes = null;
        _workingRom = null;
        _portraitAtlas = null;
        _pendingSound = null;
        _pendingSoundAssetId = null;
        _appliedSoundPreview.Clear();
        _selectedAsset = null;
        _assetList.ItemsSource = null;
        _assetGrid.Children.Clear();
        _previewHost.Child = new TextBlock
        {
            Text = "Open a baserom.gba to begin.",
            Foreground = EditorTheme.TextMutedBrush,
            HorizontalAlignment = HorizontalAlignment.Center,
            VerticalAlignment = VerticalAlignment.Center,
        };
    }

    public void ShowCategory(AssetCategory category, bool selectFirst)
    {
        if (_catalog is null || !CategoryWorkspace.UsesAssetBrowser(category))
            return;
        var assets = _catalog.ForCategory(category);
        _thumbnailCts?.Cancel();
        _thumbnailCts = new CancellationTokenSource();
        _selectedAsset = null;

        if (_useGridView)
        {
            _assetList.ItemsSource = null;
            BuildAssetGrid(assets, _thumbnailCts.Token);
        }
        else
        {
            _assetGrid.Children.Clear();
            _assetList.ItemsSource = assets.Select(a => new AssetListItem(a)).ToArray();
        }

        if (selectFirst && assets.Count > 0)
        {
            if (_useGridView)
            {
                if (_assetGrid.Children.Count > 0 && _assetGrid.Children[0] is Border { Tag: AssetDescriptor first })
                    _ = ShowPreviewAsync(first);
            }
            else
            {
                _assetList.SelectedIndex = 0;
            }
        }
        else
        {
            _previewHost.Child = new TextBlock
            {
                Text = $"{assets.Count:N0} entries. Select one to preview.",
                Foreground = EditorTheme.TextMutedBrush,
                HorizontalAlignment = HorizontalAlignment.Center,
                VerticalAlignment = VerticalAlignment.Center,
            };
        }
    }

    public Task ShowAssetAsync(AssetDescriptor asset) => ShowPreviewAsync(asset);

    public Task RevealAssetAsync(AssetDescriptor asset)
    {
        ShowCategory(asset.Category, selectFirst: false);
        if (!_useGridView && _assetList.ItemsSource is IEnumerable<object> items)
        {
            foreach (var item in items)
            {
                if (item is AssetListItem listItem && listItem.Asset.Id == asset.Id)
                {
                    _assetList.SelectedItem = listItem;
                    return Task.CompletedTask;
                }
            }
        }

        return ShowPreviewAsync(asset);
    }

    public void SetViewMode(bool grid)
    {
        _useGridView = grid;
        _listViewButton.IsChecked = !grid;
        _gridViewButton.IsChecked = grid;
        _assetList.IsVisible = !grid;
        _assetGridScroller.IsVisible = grid;
    }

    private void BuildAssetGrid(IReadOnlyList<AssetDescriptor> assets, CancellationToken token)
    {
        _assetGrid.Children.Clear();
        foreach (var asset in assets)
        {
            var title = new TextBlock
            {
                Text = asset.DisplayName,
                FontSize = EditorTheme.FontMeta,
                FontFamily = EditorTheme.UiFont,
                TextWrapping = TextWrapping.Wrap,
                TextAlignment = TextAlignment.Center,
                Foreground = EditorTheme.TextSecondaryBrush,
                MaxHeight = 28,
            };
            var imageHost = new Border
            {
                Width = 56,
                Height = 56,
                Background = EditorTheme.InputBgBrush,
                Child = new TextBlock
                {
                    Text = "▣",
                    FontSize = 14,
                    HorizontalAlignment = HorizontalAlignment.Center,
                    VerticalAlignment = VerticalAlignment.Center,
                    Foreground = EditorTheme.TextDimBrush,
                },
            };
            var card = new Border
            {
                Width = 84,
                Margin = new Thickness(EditorTheme.Space1),
                Padding = new Thickness(EditorTheme.Space2),
                BorderBrush = EditorTheme.BorderSubtleBrush,
                BorderThickness = new Thickness(1),
                CornerRadius = new CornerRadius(0),
                Background = EditorTheme.PanelBgBrush,
                Tag = asset,
                Child = new StackPanel { Spacing = 2, Children = { imageHost, title } },
            };
            card.PointerPressed += async (_, _) =>
            {
                HighlightGridCard(card);
                await ShowPreviewAsync(asset);
            };
            _assetGrid.Children.Add(card);
            if (asset.Kind is AssetKind.KaoPortrait or AssetKind.KaoPortraitSheet or AssetKind.TitleBackground or
                AssetKind.Effect or AssetKind.GroundMap or AssetKind.Scene or AssetKind.Dungeon or AssetKind.DungeonFloor)
                _ = LoadThumbnailAsync(asset, imageHost, token);
        }
    }

    private async Task LoadThumbnailAsync(AssetDescriptor asset, Border imageHost, CancellationToken token)
    {
        if (_rom is null || _charmap is null)
            return;
        try
        {
            var preview = await Task.Run(() => AssetPreviewer.Create(_rom, asset, _charmap), token);
            if (token.IsCancellationRequested || preview.Png is null)
                return;
            await Dispatcher.UIThread.InvokeAsync(() =>
            {
                if (token.IsCancellationRequested) return;
                using var stream = new MemoryStream(preview.Png);
                imageHost.Child = new Image
                {
                    Source = new Bitmap(stream),
                    Stretch = Stretch.Uniform,
                    Width = 56,
                    Height = 56,
                };
            });
        }
        catch { /* keep placeholder */ }
    }

    private void HighlightGridCard(Border selected)
    {
        foreach (var child in _assetGrid.Children.OfType<Border>())
        {
            child.BorderBrush = ReferenceEquals(child, selected)
                ? EditorTheme.AccentBrush
                : EditorTheme.BorderSubtleBrush;
            child.BorderThickness = new Thickness(1);
            child.Background = ReferenceEquals(child, selected)
                ? EditorTheme.AccentSoftBrush
                : EditorTheme.PanelBgBrush;
        }
    }

    private async Task ShowPreviewAsync(AssetDescriptor asset)
    {
        if (_rom is null || _charmap is null)
            return;

        _previewCts?.Cancel();
        var cts = new CancellationTokenSource();
        _previewCts = cts;
        _selectedAsset = asset;
        AssetSelected?.Invoke(this, asset);

        if (asset.Kind == AssetKind.Scene)
        {
            DisposeSoundPreview();
            RequestSceneWorkspace?.Invoke(this, EventArgs.Empty);
            return;
        }

        if (asset.Kind is AssetKind.SoundSong or AssetKind.SoundWave)
        {
            if (_soundStreamHost is null || _soundCacheWarmer is null)
                return;
            _soundPreview = EnsureSoundPreview();
            _soundPreview.StopAudio();
        }
        else
        {
            DisposeSoundPreview();
        }

        try
        {
            var rom = _rom;
            var charmap = _charmap;
            var preview = await Task.Run(() => AssetPreviewer.Create(rom, asset, charmap), cts.Token);
            if (cts.IsCancellationRequested || _rom is null)
                return;

            if (asset.Kind is AssetKind.SoundSong or AssetKind.SoundWave)
            {
                if (_soundStreamHost is null || _soundCacheWarmer is null)
                    return;
                _soundPreview = EnsureSoundPreview();
                _previewHost.Child = _soundPreview;
                _soundPreview.SetApplyEnabled(
                    _pendingSound is not null &&
                    string.Equals(_pendingSoundAssetId, asset.Id, StringComparison.Ordinal));
                byte[]? staged = null;
                string? note = null;
                if (_pendingSound is EncodedSound pending &&
                    string.Equals(_pendingSoundAssetId, asset.Id, StringComparison.Ordinal) &&
                    pending.PreviewWav.Length > 44)
                {
                    staged = pending.PreviewWav;
                    note = "Pending import — preview in Player, then Apply to write into the working ROM.";
                }
                else if (_appliedSoundPreview.TryGetValue(asset.Id, out var applied))
                {
                    staged = applied;
                    note = "Replacement is in the working ROM (Build ROM or export .rtmod to ship it).";
                }

                await _soundPreview.LoadAsync(_rom, asset, preview.Text ?? string.Empty, cts.Token, staged, note);
                return;
            }

            if (asset.Kind == AssetKind.Dialogue && _scenes is not null && _changes is not null)
            {
                _previewHost.Child = BuildDialogueEditor(asset, preview.Text ?? string.Empty);
                return;
            }

            if (preview.IsImage)
            {
                using var stream = new MemoryStream(preview.Png!);
                var initialZoom = AssetPreviewZoom.InitialFor(asset.Kind);
                var integerZoom = asset.Kind is AssetKind.KaoPortrait or AssetKind.KaoPortraitSheet;
                var image = CreateZoomableImagePreview(
                    preview.Title, new Bitmap(stream), initialZoom, integerZoom);
                if (asset.Kind == AssetKind.KaoPortraitSheet)
                {
                    _previewHost.Child = BuildPortraitSheetEditor(asset, image);
                }
                else if (asset.Kind == AssetKind.GroundMap)
                {
                    _previewHost.Child = BuildGroundMapEditor(asset, image);
                }
                else if (asset.Kind is AssetKind.Dungeon or AssetKind.DungeonFloor &&
                    !string.IsNullOrWhiteSpace(preview.Text))
                {
                    var notes = new TextBox
                    {
                        Text = preview.Text,
                        IsReadOnly = true,
                        AcceptsReturn = true,
                        TextWrapping = TextWrapping.Wrap,
                        FontFamily = new FontFamily("Cascadia Mono, Consolas, monospace"),
                        FontSize = 13,
                        MinHeight = 120,
                    };
                    EditorChrome.StyleEditor(notes);
                    var split = new Grid
                    {
                        RowDefinitions = new RowDefinitions("2*,*"),
                        Children = { image, notes },
                    };
                    Grid.SetRow(image, 0);
                    Grid.SetRow(notes, 1);
                    _previewHost.Child = split;
                }
                else
                {
                    _previewHost.Child = image;
                }
            }
            else
            {
                _previewHost.Child = new ScrollViewer
                {
                    Content = new TextBox
                    {
                        Text = preview.Text ?? string.Empty,
                        IsReadOnly = true,
                        AcceptsReturn = true,
                        TextWrapping = TextWrapping.NoWrap,
                        FontFamily = new FontFamily("Cascadia Mono, Consolas, monospace"),
                        FontSize = 13,
                    },
                };
            }
        }
        catch (OperationCanceledException) { }
        catch (Exception exception) when (exception is InvalidDataException or ArgumentOutOfRangeException
                                              or IOException or IndexOutOfRangeException)
        {
            if (!cts.IsCancellationRequested)
            {
                _previewHost.Child = new TextBlock
                {
                    Text = $"{asset.DisplayName}\n\nUnable to preview:\n{exception.Message}",
                    TextWrapping = TextWrapping.Wrap,
                };
            }
        }
    }

    private Control BuildDialogueEditor(AssetDescriptor asset, string body)
    {
        var split = body.Split(["\n\n——\n"], 2, StringSplitOptions.None);
        var dialogueText = split[0];
        var meta = split.Length > 1 ? split[1] : string.Empty;

        DialogueString? dialogue = null;
        if (asset.Metadata.TryGetValue("romOffset", out var offsetText))
        {
            var hex = offsetText.StartsWith("0x", StringComparison.OrdinalIgnoreCase)
                ? offsetText[2..]
                : offsetText;
            if (int.TryParse(hex, System.Globalization.NumberStyles.HexNumber, null, out var offset))
                _scenes?.DialogueByOffset.TryGetValue(offset, out dialogue);
        }
        if (dialogue is null && asset.Offset >= 0)
            _scenes?.DialogueByOffset.TryGetValue(asset.Offset, out dialogue);

        var editor = new TextBox
        {
            Text = dialogue?.Text ?? dialogueText,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.Wrap,
            MinHeight = 160,
            FontSize = EditorTheme.FontBody,
            FontFamily = EditorTheme.MonoFont,
        };
        EditorChrome.StyleEditor(editor);
        editor.Height = double.NaN;
        editor.MinHeight = 160;

        TryShowSpeakerPortrait(asset, out var speakerLabel, out var face, out var placement);

        var previewImage = new Image
        {
            Stretch = Stretch.None,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
            UseLayoutRounding = true,
        };
        RenderOptions.SetBitmapInterpolationMode(previewImage, BitmapInterpolationMode.None);

        Bitmap? previewBitmap = null;
        void RefreshPreview()
        {
            var png = DialogueHudPreview.RenderPng(
                editor.Text,
                speakerLabel: speakerLabel,
                face: face,
                placement: placement);
            using var stream = new MemoryStream(png);
            var next = new Bitmap(stream);
            previewImage.Source = next;
            previewBitmap?.Dispose();
            previewBitmap = next;
        }
        RefreshPreview();

        var sizeLabel = new TextBlock
        {
            Foreground = EditorTheme.TextMutedBrush,
            Margin = new Thickness(0, 4, 0, 0),
        };
        void UpdateSize()
        {
            var max = dialogue?.Size ?? asset.Size;
            var status = DialogueEncodedBudget.Evaluate(editor.Text, max);
            sizeLabel.Text = status.Message;
            sizeLabel.Foreground = status.Warn
                ? EditorTheme.WarningBrush
                : EditorTheme.TextMutedBrush;
        }
        UpdateSize();
        editor.TextChanged += (_, _) =>
        {
            UpdateSize();
            RefreshPreview();
        };

        var apply = EditorChrome.ToolButton("Apply", primary: true);
        apply.Margin = new Thickness(0, EditorTheme.Space3, 0, 0);
        apply.HorizontalAlignment = HorizontalAlignment.Left;
        apply.Click += (_, _) =>
        {
            if (dialogue is null || _changes is null || _charmap is null)
                return;
            try
            {
                SceneEditing.ReplaceDialogue(_changes, dialogue, editor.Text ?? string.Empty, _charmap);
                sizeLabel.Text = "Applied.";
                sizeLabel.Foreground = EditorTheme.TextMutedBrush;
            }
            catch (Exception exception)
            {
                sizeLabel.Text = exception.Message;
                sizeLabel.Foreground = EditorTheme.DangerBrush;
            }
        };

        return new ScrollViewer
        {
            Content = new StackPanel
            {
                Spacing = EditorTheme.Space3,
                Margin = new Thickness(EditorTheme.Space4),
                Children =
                {
                    EditorChrome.PaneTitle(asset.Name),
                    previewImage,
                    editor,
                    sizeLabel,
                    apply,
                    new TextBlock
                    {
                        Text = meta,
                        FontSize = EditorTheme.FontMeta,
                        FontFamily = EditorTheme.MonoFont,
                        Foreground = EditorTheme.TextDimBrush,
                        TextWrapping = TextWrapping.Wrap,
                    },
                },
            },
        };
    }

    private SoundPreviewPanel EnsureSoundPreview()
    {
        if (_soundPreview is not null)
            return _soundPreview;
        if (_soundStreamHost is null)
            throw new InvalidOperationException("Sound playback is not attached.");
        _soundPreview = new SoundPreviewPanel(_soundStreamHost, _soundCacheWarmer);
        _soundPreview.ImportRequested += ImportSoundAsync;
        _soundPreview.ApplyRequested += ApplyPendingSound;
        return _soundPreview;
    }

    private async Task ImportSoundAsync()
    {
        var asset = _selectedAsset;
        if (asset is null || asset.Kind is not (AssetKind.SoundSong or AssetKind.SoundWave))
            return;
        if (_workingRom is null)
        {
            _soundPreview?.SetStatus("Open a ROM to replace this sequence.", warn: true);
            return;
        }

        var top = TopLevel.GetTopLevel(this);
        if (top is null)
            return;
        var files = await top.StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Replace with WAV, AIFF, or M4A sequence",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("Audio")
                {
                    Patterns = ["*.wav", "*.aiff", "*.aif", "*.bin"],
                },
                new FilePickerFileType("WAV") { Patterns = ["*.wav"] },
                new FilePickerFileType("AIFF") { Patterns = ["*.aiff", "*.aif"] },
                new FilePickerFileType("M4A sequence") { Patterns = ["*.bin"] },
            ],
        });
        var file = files.FirstOrDefault();
        if (file is null)
            return;

        await using var stream = await file.OpenReadAsync();
        using var memory = new MemoryStream();
        await stream.CopyToAsync(memory);
        var bytes = memory.ToArray();
        var name = file.Name;

        EncodedSound encoded;
        try
        {
            encoded = asset.Kind == AssetKind.SoundSong
                ? SoundAuthoring.EncodeSong(bytes, name)
                : SoundAuthoring.Encode(bytes, name);
        }
        catch (Exception exception) when (exception is InvalidDataException or ArgumentException)
        {
            _soundPreview?.SetStatus(exception.Message, warn: true);
            return;
        }

        _pendingSound = encoded;
        _pendingSoundAssetId = asset.Id;
        _soundPreview?.SetApplyEnabled(true);
        if (_soundPreview is not null && _rom is not null)
        {
            await _soundPreview.LoadAsync(
                _rom,
                asset,
                SoundAuthoring.RestrictionsText,
                CancellationToken.None,
                encoded.PreviewWav,
                $"Pending import ({name}, {encoded.SampleRate:N0} Hz) — Apply writes it into the working ROM.");
        }
    }

    private void ApplyPendingSound()
    {
        var asset = _selectedAsset;
        if (asset is null || asset.Kind is not (AssetKind.SoundSong or AssetKind.SoundWave))
            return;
        if (_workingRom is null)
        {
            _soundPreview?.SetStatus("Open a ROM to apply this replacement.", warn: true);
            return;
        }

        if (_pendingSound is not EncodedSound encoded ||
            !string.Equals(_pendingSoundAssetId, asset.Id, StringComparison.Ordinal))
        {
            _soundPreview?.SetStatus("Import audio first.", warn: true);
            return;
        }

        var resolved = asset.Kind == AssetKind.SoundWave && _rom is not null
            ? SoundWaveCodec.Resolve(_rom, asset)
            : asset;
        var buffer = _workingRom.BeginMutate();
        var dirty = new List<RomSpan>();
        var error = SoundAuthoring.TryWrite(buffer, resolved, encoded, dirty);
        if (error is not null)
        {
            _soundPreview?.SetStatus(error, warn: true);
            return;
        }

        _workingRom.CommitDirty(buffer, dirty);
        _rom = _workingRom.View;
        if (encoded.PreviewWav.Length > 44)
        {
            _appliedSoundPreview[asset.Id] = encoded.PreviewWav;
            if (asset.Metadata.TryGetValue("songId", out var songIdText) &&
                int.TryParse(songIdText, out var songId))
            {
                var maxLoops = songId >= SoundIndexer.SoundEffectsStartIndex ? 0 : 1;
                try { AgbplayRenderer.SaveCachedWav(_rom.Path, songId, maxLoops, encoded.PreviewWav); }
                catch { /* preview still uses the staged WAV */ }
            }
        }
        _pendingSound = null;
        _pendingSoundAssetId = null;
        _soundPreview?.SetApplyEnabled(false);
        _soundPreview?.SetStatus("Applied to the working ROM (Build ROM or export .rtmod).");
    }

    private Control BuildPortraitSheetEditor(AssetDescriptor sheet, Control preview)
    {
        var faces = sheet.Children.Count > 0 ? sheet.Children : [sheet];
        var selected = 0;
        var status = new TextBlock
        {
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space3, 0, 0, 0),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            TextWrapping = TextWrapping.NoWrap,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };
        void SetStatus(string text, bool warn = false)
        {
            status.Text = text;
            status.Foreground = warn ? EditorTheme.WarningBrush : EditorTheme.TextMutedBrush;
        }
        void DescribeSelection()
        {
            if (selected < 0 || selected >= faces.Count)
            {
                SetStatus("Click a face to select it.");
                return;
            }
            var face = faces[selected];
            var emotion = face.Metadata.GetValueOrDefault("emotion", $"Emotion{selected}");
            SetStatus(
                $"{PortraitSheetPresentation.EmotionLabel(selected, emotion)}  ·  " +
                $"slot {face.Size} bytes  ·  {PortraitFaceCodec.RestrictionsText}");
        }
        DescribeSelection();

        var replace = EditorChrome.ToolButton("Replace face…");
        replace.Click += async (_, _) =>
        {
            if (selected < 0 || selected >= faces.Count)
            {
                SetStatus("Click a face first.", warn: true);
                return;
            }
            if (_workingRom is null)
            {
                SetStatus("Open a ROM to replace portrait faces.", warn: true);
                return;
            }

            var top = TopLevel.GetTopLevel(this);
            if (top is null)
                return;
            var files = await top.StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
            {
                Title = "Portrait face PNG",
                AllowMultiple = false,
                FileTypeFilter =
                [
                    new FilePickerFileType("PNG image") { Patterns = ["*.png"] },
                ],
            });
            var file = files.FirstOrDefault();
            if (file is null)
                return;

            await using var stream = await file.OpenReadAsync();
            using var memory = new MemoryStream();
            await stream.CopyToAsync(memory);
            var image = RgbaImage.FromPng(memory.ToArray());
            if (image is null)
            {
                SetStatus("Could not decode that PNG.", warn: true);
                return;
            }

            var face = faces[selected];
            var buffer = _workingRom.BeginMutate();
            var error = PortraitFaceCodec.TryWrite(buffer, face, image);
            if (error is not null)
            {
                SetStatus(error, warn: true);
                return;
            }

            _workingRom.Commit(buffer, face.Offset, face.Size);
            _workingRom.Commit(buffer, face.AuxiliaryOffset, face.AuxiliarySize);
            _rom = _workingRom.View;
            var root = CatalogBuilder.FindRepositoryRoot(_rom.Path);
            _portraitAtlas = new PortraitAtlas(_rom, root);
            await ShowPreviewAsync(sheet);
        };

        if (_previewImage is not null)
        {
            _previewImage.PointerPressed += (_, e) =>
            {
                if (_previewImage.Bounds.Width < 1 || _previewImage.Bounds.Height < 1)
                    return;
                var pos = e.GetPosition(_previewImage);
                var px = (int)(pos.X * _previewPixelWidth / _previewImage.Bounds.Width);
                var py = (int)(pos.Y * _previewPixelHeight / _previewImage.Bounds.Height);
                var hit = PortraitSheetPresentation.HitTest(px, py, faces.Count);
                if (hit is int index)
                {
                    selected = index;
                    DescribeSelection();
                }
            };
        }

        var bar = EditorChrome.ToolbarHost(new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { replace, status },
        });

        return new DockPanel
        {
            LastChildFill = true,
            Children =
            {
                new Border { [DockPanel.DockProperty] = Dock.Top, Child = bar },
                preview,
            },
        };
    }

    private Control BuildGroundMapEditor(AssetDescriptor asset, Control preview)
    {
        var status = new TextBlock
        {
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space3, 0, 0, 0),
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            TextWrapping = TextWrapping.NoWrap,
            TextTrimming = TextTrimming.CharacterEllipsis,
            Text = GroundMapCodec.RestrictionsText,
        };
        var import = EditorChrome.ToolButton("Import PNG…");
        import.Click += async (_, _) =>
        {
            if (_workingRom is null)
            {
                status.Text = "Open a ROM to import map tiles.";
                status.Foreground = EditorTheme.WarningBrush;
                return;
            }

            var mapName = asset.Metadata.GetValueOrDefault("romName");
            if (string.IsNullOrWhiteSpace(mapName))
            {
                status.Text = "This ground map has no ROM name.";
                status.Foreground = EditorTheme.WarningBrush;
                return;
            }

            var top = TopLevel.GetTopLevel(this);
            if (top is null)
                return;
            var files = await top.StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
            {
                Title = "Ground map PNG",
                AllowMultiple = false,
                FileTypeFilter = [new FilePickerFileType("PNG image") { Patterns = ["*.png"] }],
            });
            var file = files.FirstOrDefault();
            if (file is null)
                return;

            await using var stream = await file.OpenReadAsync();
            using var memory = new MemoryStream();
            await stream.CopyToAsync(memory);
            var image = RgbaImage.FromPng(memory.ToArray());
            if (image is null)
            {
                status.Text = "Could not decode that PNG.";
                status.Foreground = EditorTheme.WarningBrush;
                return;
            }

            var rejected = GroundMapCodec.Validate(image);
            if (rejected is not null)
            {
                status.Text = rejected;
                status.Foreground = EditorTheme.WarningBrush;
                return;
            }

            var buffer = _workingRom.BeginMutate();
            var dirty = new List<RomSpan>();
            var error = GroundMapCodec.TryWrite(buffer, _catalog, mapName, image, dirty);
            if (error is not null)
            {
                status.Text = error;
                status.Foreground = EditorTheme.WarningBrush;
                return;
            }

            _workingRom.CommitDirty(buffer, dirty);
            _rom = _workingRom.View;
            status.Text = $"Imported tiles for {mapName} (Build ROM to export).";
            status.Foreground = EditorTheme.TextMutedBrush;
            await ShowPreviewAsync(asset);
        };

        var bar = EditorChrome.ToolbarHost(new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { import, status },
        });
        return new DockPanel
        {
            LastChildFill = true,
            Children =
            {
                new Border { [DockPanel.DockProperty] = Dock.Top, Child = bar },
                preview,
            },
        };
    }

    private void TryShowSpeakerPortrait(
        AssetDescriptor asset,
        out string? speakerLabel,
        out RgbaImage? face,
        out int placement)
    {
        speakerLabel = null;
        face = null;
        placement = 0;
        if (_rom is null || _portraitAtlas is null)
            return;
        if (!asset.Metadata.TryGetValue("commandOffset", out var cmdText))
            return;

        var hex = cmdText.StartsWith("0x", StringComparison.OrdinalIgnoreCase) ? cmdText[2..] : cmdText;
        if (!int.TryParse(hex, System.Globalization.NumberStyles.HexNumber, null, out var commandOffset))
            return;

        var info = DialogueSpeakerResolver.TryResolve(_rom, commandOffset, _scenes?.Profile, _scenes);
        if (info is null || info.Value.Species <= 0)
            return;

        placement = info.Value.Placement;
        face = _portraitAtlas.TryGet(info.Value.Species, info.Value.Emotion);
        var root = CatalogBuilder.FindRepositoryRoot(_rom.Path);
        var folders = MonsterSpriteFolders.Load(root ?? ".");
        speakerLabel = folders.TryGetValue(info.Value.Species, out var folder)
            ? folder
            : MonsterSpriteFolders.ForSpecies(info.Value.Species, folders);
    }

    private Control CreateZoomableImagePreview(
        string title,
        Bitmap bitmap,
        double initialZoom = 1.0,
        bool integerZoom = false)
    {
        _integerPreviewZoom = integerZoom;
        _previewZoomDefault = initialZoom;
        _previewZoom = integerZoom ? Math.Max(1, Math.Round(initialZoom)) : initialZoom;
        _previewPixelWidth = bitmap.PixelSize.Width;
        _previewPixelHeight = bitmap.PixelSize.Height;
        _previewImage = new Image
        {
            Source = bitmap,
            Stretch = Stretch.Fill,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
            UseLayoutRounding = true,
        };
        // Crisp pixel art: nearest-neighbor + DPI-compensated layout (avoids uneven 125%/150% scaling).
        RenderOptions.SetBitmapInterpolationMode(_previewImage, BitmapInterpolationMode.None);
        _previewImage.AttachedToVisualTree += (_, _) => ApplyPreviewZoom();
        ApplyPreviewZoom();
        _zoomLabel = new TextBlock
        {
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space3, 0),
            MinWidth = 48,
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextMutedBrush,
            Text = $"{_previewZoom * 100:0}%",
        };
        var zoomOut = EditorChrome.IconButton("−", tip: "Zoom out");
        var zoomIn = EditorChrome.IconButton("+", tip: "Zoom in");
        var zoomReset = EditorChrome.ToolButton($"{_previewZoomDefault * 100:0}%");
        ToolTip.SetTip(zoomReset, "Reset zoom");
        zoomOut.Click += (_, _) => AdjustPreviewZoom(zoomIn: false);
        zoomIn.Click += (_, _) => AdjustPreviewZoom(zoomIn: true);
        zoomReset.Click += (_, _) => SetPreviewZoom(_previewZoomDefault, viewportAnchor: null);

        _previewScroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
            VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
            Background = EditorTheme.ViewportWellBrush,
            Content = _previewImage,
        };
        _previewScroller.PointerWheelChanged += OnPreviewWheel;

        return new DockPanel
        {
            LastChildFill = true,
            Children =
            {
                new Border
                {
                    [DockPanel.DockProperty] = Dock.Top,
                    Child = EditorChrome.ToolbarHost(new StackPanel
                    {
                        Orientation = Orientation.Horizontal,
                        VerticalAlignment = VerticalAlignment.Center,
                        Children =
                        {
                            EditorChrome.ToolbarLabel($"{title}  ({_previewPixelWidth}×{_previewPixelHeight})"),
                            EditorChrome.ToolbarSeparator(),
                            zoomOut, zoomIn, zoomReset, _zoomLabel,
                        },
                    }),
                },
                _previewScroller,
            },
        };
    }

    private void OnPreviewWheel(object? sender, PointerWheelEventArgs e)
    {
        if (_previewScroller is null)
            return;
        // Zoom on wheel / trackpad pinch-as-wheel. Leave Shift+wheel for horizontal scroll.
        if (e.KeyModifiers.HasFlag(KeyModifiers.Shift) && !e.KeyModifiers.HasFlag(KeyModifiers.Control))
            return;
        if (Math.Abs(e.Delta.Y) < 0.01)
            return;

        var factor = e.Delta.Y > 0 ? 1.25 : 1 / 1.25;
        var anchor = e.GetPosition(_previewScroller);
        var next = _integerPreviewZoom
            ? _previewZoom + (factor > 1 ? 1 : -1)
            : _previewZoom * factor;
        SetPreviewZoom(next, anchor);
        e.Handled = true;
    }

    private void AdjustPreviewZoom(bool zoomIn)
    {
        Point? center = null;
        if (_previewScroller is not null)
            center = new Point(_previewScroller.Viewport.Width / 2, _previewScroller.Viewport.Height / 2);

        if (_integerPreviewZoom)
            SetPreviewZoom(_previewZoom + (zoomIn ? 1 : -1), center);
        else
            SetPreviewZoom(_previewZoom * (zoomIn ? 1.25 : 1 / 1.25), center);
    }

    private void SetPreviewZoom(double zoom, Point? viewportAnchor)
    {
        if (_integerPreviewZoom)
            zoom = Math.Round(zoom);
        var oldZoom = _previewZoom;
        var nextZoom = Math.Clamp(zoom, _integerPreviewZoom ? 1.0 : 0.25, 8.0);
        if (Math.Abs(nextZoom - oldZoom) < 0.0001)
            return;

        var scroller = _previewScroller;
        var offset = scroller?.Offset ?? default;
        var anchor = viewportAnchor
            ?? (scroller is null
                ? new Point(0, 0)
                : new Point(scroller.Viewport.Width / 2, scroller.Viewport.Height / 2));

        _previewZoom = nextZoom;
        ApplyPreviewZoom();

        if (scroller is null)
            return;

        var (ox, oy) = ZoomViewport.AnchorOffset(
            offset.X, offset.Y, anchor.X, anchor.Y, oldZoom, nextZoom);

        // Offset must be applied after the ScrollViewer measures the new content size.
        Dispatcher.UIThread.Post(() =>
        {
            if (!ReferenceEquals(_previewScroller, scroller))
                return;
            var (cx, cy) = ZoomViewport.ClampOffset(
                ox, oy,
                scroller.Extent.Width, scroller.Extent.Height,
                scroller.Viewport.Width, scroller.Viewport.Height);
            scroller.Offset = new Vector(cx, cy);
        }, DispatcherPriority.Render);
    }

    private void ApplyPreviewZoom()
    {
        if (_previewImage is null)
            return;
        var scaling = TopLevel.GetTopLevel(this)?.RenderScaling ?? 1.0;
        _previewImage.Width = PixelPerfectLayout.LayoutDipSize(_previewPixelWidth, _previewZoom, scaling);
        _previewImage.Height = PixelPerfectLayout.LayoutDipSize(_previewPixelHeight, _previewZoom, scaling);
        if (_zoomLabel is not null)
            _zoomLabel.Text = $"{_previewZoom * 100:0}%";
    }

    public void DisposeSoundPreview()
    {
        if (_soundPreview is not null)
        {
            _soundPreview.ImportRequested -= ImportSoundAsync;
            _soundPreview.ApplyRequested -= ApplyPendingSound;
            _soundPreview.Dispose();
            _soundPreview = null;
        }
    }

    private sealed record AssetListItem(AssetDescriptor Asset)
    {
        public override string ToString() => Asset.DisplayName;
    }
}
