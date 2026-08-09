using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
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
    private bool _useGridView;
    private AssetDescriptor? _selectedAsset;
    private CancellationTokenSource? _thumbnailCts;
    private CancellationTokenSource? _previewCts;
    private SoundPreviewPanel? _soundPreview;
    private AgbplayStreamHost? _soundStreamHost;
    private SoundCacheWarmer? _soundCacheWarmer;
    private Image? _previewImage;
    private TextBlock? _zoomLabel;
    private double _previewZoom = 1.0;
    private int _previewPixelWidth;
    private int _previewPixelHeight;

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
            Child = new TextBlock
            {
                Text = "Select an asset.",
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontBody,
                Foreground = EditorTheme.TextMutedBrush,
                VerticalAlignment = VerticalAlignment.Center,
                HorizontalAlignment = HorizontalAlignment.Center,
            },
        };

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

    public void Bind(RomImage rom, Charmap charmap, AssetCatalog catalog, SceneDatabase? scenes, ChangeService changes)
    {
        _rom = rom;
        _charmap = charmap;
        _catalog = catalog;
        _scenes = scenes;
        _changes = changes;
    }

    public void Clear()
    {
        DisposeSoundPreview();
        _rom = null;
        _charmap = null;
        _catalog = null;
        _scenes = null;
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
        if (_catalog is null)
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
                CornerRadius = new CornerRadius(2),
                Tag = asset,
                Child = new StackPanel { Spacing = 2, Children = { imageHost, title } },
            };
            card.PointerPressed += async (_, _) =>
            {
                HighlightGridCard(card);
                await ShowPreviewAsync(asset);
            };
            _assetGrid.Children.Add(card);
            if (asset.Kind is AssetKind.KaoPortrait or AssetKind.TitleBackground or
                AssetKind.Effect or AssetKind.GroundMap or AssetKind.Scene)
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
                : EditorTheme.BorderBrush;
            child.BorderThickness = new Thickness(ReferenceEquals(child, selected) ? 2 : 1);
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
            _soundPreview ??= new SoundPreviewPanel(_soundStreamHost, _soundCacheWarmer);
            _previewHost.Child = _soundPreview;
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
                _soundPreview ??= new SoundPreviewPanel(_soundStreamHost, _soundCacheWarmer);
                _previewHost.Child = _soundPreview;
                await _soundPreview.LoadAsync(_rom, asset, preview.Text ?? string.Empty, cts.Token);
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
                _previewHost.Child = CreateZoomableImagePreview(preview.Title, new Bitmap(stream));
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
            FontSize = 15,
        };
        var sizeLabel = new TextBlock
        {
            Foreground = EditorTheme.TextMutedBrush,
            Margin = new Thickness(0, 4, 0, 0),
        };
        void UpdateSize()
        {
            var len = System.Text.Encoding.ASCII.GetByteCount(editor.Text ?? string.Empty);
            var max = dialogue?.Size ?? asset.Size;
            sizeLabel.Text = $"Encoded size: {len} / {max} bytes";
            sizeLabel.Foreground = len > max ? Brushes.Salmon : EditorTheme.TextMutedBrush;
        }
        UpdateSize();
        editor.TextChanged += (_, _) => UpdateSize();

        var apply = new Button { Content = "Apply (same-size)", Margin = new Thickness(0, 8, 0, 0), HorizontalAlignment = HorizontalAlignment.Left };
        apply.Click += (_, _) =>
        {
            if (dialogue is null || _changes is null || _charmap is null)
                return;
            try
            {
                SceneEditing.ReplaceDialogueSameSize(_changes, dialogue, editor.Text ?? string.Empty, _charmap);
                sizeLabel.Text = "Applied.";
            }
            catch (Exception exception)
            {
                sizeLabel.Text = exception.Message;
                sizeLabel.Foreground = Brushes.Salmon;
            }
        };

        return new ScrollViewer
        {
            Content = new StackPanel
            {
                Spacing = 8,
                Margin = new Thickness(4),
                Children =
                {
                    new TextBlock { Text = asset.Name, FontSize = 18, FontWeight = FontWeight.SemiBold },
                    editor,
                    sizeLabel,
                    apply,
                    new TextBlock { Text = meta, FontSize = 12, Foreground = EditorTheme.TextMutedBrush, TextWrapping = TextWrapping.Wrap },
                },
            },
        };
    }

    private Control CreateZoomableImagePreview(string title, Bitmap bitmap)
    {
        _previewZoom = 1.0;
        _previewPixelWidth = bitmap.PixelSize.Width;
        _previewPixelHeight = bitmap.PixelSize.Height;
        _previewImage = new Image
        {
            Source = bitmap,
            Stretch = Stretch.Fill,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
        };
        ApplyPreviewZoom();
        _zoomLabel = new TextBlock
        {
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(8, 0),
            MinWidth = 56,
            Text = "100%",
        };
        var zoomOut = new Button { Content = "−", Padding = new Thickness(10, 4), Margin = new Thickness(2, 0) };
        var zoomIn = new Button { Content = "+", Padding = new Thickness(10, 4), Margin = new Thickness(2, 0) };
        var zoom100 = new Button { Content = "100%", Padding = new Thickness(10, 4), Margin = new Thickness(2, 0) };
        zoomOut.Click += (_, _) => AdjustPreviewZoom(1 / 1.25);
        zoomIn.Click += (_, _) => AdjustPreviewZoom(1.25);
        zoom100.Click += (_, _) => SetPreviewZoom(1.0);

        return new DockPanel
        {
            Children =
            {
                new StackPanel
                {
                    Orientation = Orientation.Horizontal,
                    Margin = new Thickness(0, 0, 0, 8),
                    [DockPanel.DockProperty] = Dock.Top,
                    Children =
                    {
                        new TextBlock
                        {
                            Text = $"{title}  ({_previewPixelWidth}×{_previewPixelHeight})",
                            FontWeight = FontWeight.SemiBold,
                            VerticalAlignment = VerticalAlignment.Center,
                            Margin = new Thickness(0, 0, 12, 0),
                        },
                        zoomOut, zoomIn, zoom100, _zoomLabel,
                    },
                },
                new ScrollViewer
                {
                    HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
                    VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
                    Content = _previewImage,
                },
            },
        };
    }

    private void AdjustPreviewZoom(double factor) => SetPreviewZoom(_previewZoom * factor);

    private void SetPreviewZoom(double zoom)
    {
        _previewZoom = Math.Clamp(zoom, 0.25, 8.0);
        ApplyPreviewZoom();
    }

    private void ApplyPreviewZoom()
    {
        if (_previewImage is null)
            return;
        _previewImage.Width = _previewPixelWidth * _previewZoom;
        _previewImage.Height = _previewPixelHeight * _previewZoom;
        if (_zoomLabel is not null)
            _zoomLabel.Text = $"{_previewZoom * 100:0}%";
    }

    public void DisposeSoundPreview()
    {
        _soundPreview?.Dispose();
        _soundPreview = null;
    }

    private sealed record AssetListItem(AssetDescriptor Asset)
    {
        public override string ToString() => Asset.DisplayName;
    }
}
