using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform.Storage;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class MainWindow : Window
{
    private static readonly CategoryItem[] Categories =
    [
        new("Dialogue", AssetCategory.Dialogue),
        new("Scripts & Animations", AssetCategory.Scripts),
        new("Portraits", AssetCategory.Portraits),
        new("Backgrounds", AssetCategory.Backgrounds),
        new("Effects", AssetCategory.Effects),
        new("Ground Maps", AssetCategory.GroundMaps),
        new("Sound", AssetCategory.Sound),
        new("Raw Archives", AssetCategory.RawArchives),
    ];

    private readonly TreeView _categoryTree;
    private readonly ListBox _assetList;
    private readonly ScrollViewer _assetGridScroller;
    private readonly WrapPanel _assetGrid;
    private readonly Panel _browserHost;
    private readonly Border _previewHost;
    private readonly TextBlock _status;
    private readonly Button _exportSelected;
    private readonly Button _exportCategory;
    private readonly ToggleButton _listViewButton;
    private readonly ToggleButton _gridViewButton;
    private readonly Border _loadingOverlay;
    private readonly TextBlock _loadingStage;
    private readonly TextBlock _loadingElapsed;
    private readonly Grid _root;
    private RomImage? _rom;
    private AssetCatalog? _catalog;
    private Charmap? _charmap;
    private bool _isLoading;
    private bool _useGridView;
    private AssetDescriptor? _selectedAsset;
    private CancellationTokenSource? _thumbnailCts;
    private readonly System.Diagnostics.Stopwatch _loadStopwatch = new();
    private DispatcherTimer? _loadTimer;
    private Image? _previewImage;
    private TextBlock? _zoomLabel;
    private double _previewZoom = 1.0;
    private double _pinchBaseZoom = 1.0;
    private bool _pinchActive;
    private int _previewPixelWidth;
    private int _previewPixelHeight;

    public MainWindow()
    {
        Title = "RescueEditor";
        Width = 1280;
        Height = 720;
        MinWidth = 800;
        MinHeight = 500;
        WindowStartupLocation = WindowStartupLocation.CenterScreen;
        WindowState = WindowState.Normal;
        CanResize = true;
        WindowDecorations = WindowDecorations.Full;
        ExtendClientAreaToDecorationsHint = false;

        _categoryTree = new TreeView
        {
            ItemsSource = Categories,
            Margin = new Thickness(8, 8, 4, 8),
            SelectionMode = SelectionMode.Single,
        };
        _categoryTree.SelectionChanged += CategoryTreeOnSelectionChanged;

        _assetList = new ListBox
        {
            Margin = new Thickness(0),
        };
        _assetList.SelectionChanged += AssetListOnSelectionChanged;
        _assetList.DoubleTapped += AssetListOnDoubleTapped;

        _assetGrid = new WrapPanel
        {
            Orientation = Orientation.Horizontal,
        };
        _assetGridScroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
            Content = _assetGrid,
            IsVisible = false,
        };

        _browserHost = new Panel
        {
            Margin = new Thickness(4, 8),
            Children = { _assetList, _assetGridScroller },
        };

        _previewHost = new Border
        {
            Margin = new Thickness(4, 8, 8, 8),
            Padding = new Thickness(16),
            Background = Brushes.Transparent,
            BorderBrush = new SolidColorBrush(Color.FromArgb(60, 128, 128, 128)),
            BorderThickness = new Thickness(1),
            Child = CreateWelcomePanel(),
        };

        _status = new TextBlock
        {
            Text = "Open a baserom.gba to begin.",
            Margin = new Thickness(10, 5),
            TextTrimming = TextTrimming.CharacterEllipsis,
        };

        _exportSelected = new Button
        {
            Content = "Export Selected",
            IsEnabled = false,
            Margin = new Thickness(4, 0),
        };
        _exportSelected.Click += ExportSelectedOnClick;

        _exportCategory = new Button
        {
            Content = "Export Category",
            IsEnabled = false,
            Margin = new Thickness(4, 0),
        };
        _exportCategory.Click += ExportCategoryOnClick;

        var openButton = new Button
        {
            Content = "Open ROM",
            Margin = new Thickness(4, 0),
        };
        openButton.Click += OpenButtonOnClick;

        _listViewButton = new ToggleButton
        {
            Content = "List",
            IsChecked = true,
            Margin = new Thickness(0, 0, 4, 0),
            Padding = new Thickness(12, 4),
        };
        _gridViewButton = new ToggleButton
        {
            Content = "Grid",
            IsChecked = false,
            Margin = new Thickness(0),
            Padding = new Thickness(12, 4),
        };
        _listViewButton.IsCheckedChanged += (_, _) =>
        {
            if (_listViewButton.IsChecked == true)
                SetViewMode(grid: false);
        };
        _gridViewButton.IsCheckedChanged += (_, _) =>
        {
            if (_gridViewButton.IsChecked == true)
                SetViewMode(grid: true);
        };

        var toolbarLeft = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Left,
            Children =
            {
                openButton,
                _exportSelected,
                _exportCategory,
            },
        };
        var toolbarRight = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Right,
            Children =
            {
                _listViewButton,
                _gridViewButton,
            },
        };
        var toolbar = new Grid
        {
            Margin = new Thickness(8, 3),
            ColumnDefinitions = new ColumnDefinitions("*,Auto"),
            Children = { toolbarLeft, toolbarRight },
        };
        Grid.SetColumn(toolbarLeft, 0);
        Grid.SetColumn(toolbarRight, 1);

        var content = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("220,360,*"),
            Children =
            {
                _categoryTree,
                _browserHost,
                _previewHost,
            },
        };
        Grid.SetColumn(_categoryTree, 0);
        Grid.SetColumn(_browserHost, 1);
        Grid.SetColumn(_previewHost, 2);

        var menu = CreateMenu();
        var statusBar = new Border
        {
            BorderBrush = new SolidColorBrush(Color.FromArgb(50, 128, 128, 128)),
            BorderThickness = new Thickness(0, 1, 0, 0),
            Child = _status,
        };
        _root = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,Auto,*,Auto"),
            Children = { menu, toolbar, content, statusBar },
        };
        Grid.SetRow(menu, 0);
        Grid.SetRow(toolbar, 1);
        Grid.SetRow(content, 2);
        Grid.SetRow(statusBar, 3);

        _loadingStage = new TextBlock { FontSize = 14, TextWrapping = TextWrapping.Wrap };
        _loadingElapsed = new TextBlock
        {
            Foreground = Brushes.Gray,
            Margin = new Thickness(0, 8, 0, 0),
        };
        _loadingOverlay = new Border
        {
            IsVisible = false,
            Background = new SolidColorBrush(Color.FromArgb(200, 20, 20, 20)),
            Child = new Border
            {
                Width = 420,
                Padding = new Thickness(24),
                HorizontalAlignment = HorizontalAlignment.Center,
                VerticalAlignment = VerticalAlignment.Center,
                Background = new SolidColorBrush(Color.FromArgb(255, 36, 36, 36)),
                BorderBrush = new SolidColorBrush(Color.FromArgb(80, 180, 180, 180)),
                BorderThickness = new Thickness(1),
                CornerRadius = new CornerRadius(6),
                Child = new StackPanel
                {
                    Spacing = 4,
                    Children =
                    {
                        new TextBlock
                        {
                            Text = "Indexing ROM assets",
                            FontSize = 18,
                            FontWeight = FontWeight.SemiBold,
                        },
                        _loadingStage,
                        _loadingElapsed,
                        new ProgressBar
                        {
                            IsIndeterminate = true,
                            Height = 8,
                            Margin = new Thickness(0, 18, 0, 0),
                        },
                    },
                },
            },
        };

        Content = new Panel
        {
            Children = { _root, _loadingOverlay },
        };
        Opened += OnOpened;
    }

    private Control CreateMenu()
    {
        var menu = new Menu();
        var file = new MenuItem { Header = "_File" };
        var open = new MenuItem { Header = "_Open ROM…" };
        open.Click += OpenButtonOnClick;
        var exportSelected = new MenuItem { Header = "Export _Selected…" };
        exportSelected.Click += ExportSelectedOnClick;
        var exportCategory = new MenuItem { Header = "Export _Category…" };
        exportCategory.Click += ExportCategoryOnClick;
        var close = new MenuItem { Header = "_Close ROM" };
        close.Click += (_, _) => ClearRom();
        var exit = new MenuItem { Header = "E_xit" };
        exit.Click += (_, _) => Close();
        file.Items.Add(open);
        file.Items.Add(new Separator());
        file.Items.Add(exportSelected);
        file.Items.Add(exportCategory);
        file.Items.Add(new Separator());
        file.Items.Add(close);
        file.Items.Add(exit);
        menu.Items.Add(file);

        var view = new MenuItem { Header = "_View" };
        var list = new MenuItem { Header = "_List" };
        list.Click += (_, _) => SetViewMode(grid: false);
        var grid = new MenuItem { Header = "_Grid" };
        grid.Click += (_, _) => SetViewMode(grid: true);
        view.Items.Add(list);
        view.Items.Add(grid);
        menu.Items.Add(view);
        return menu;
    }

    private void SetViewMode(bool grid)
    {
        _useGridView = grid;
        _listViewButton.IsChecked = !grid;
        _gridViewButton.IsChecked = grid;
        _assetList.IsVisible = !grid;
        _assetGridScroller.IsVisible = grid;

        if (_categoryTree.SelectedItem is CategoryItem category && _catalog is not null)
            PopulateAssetBrowser(category, selectFirstAsset: _selectedAsset is null);
    }

    private async void OnOpened(object? sender, EventArgs e)
    {
        Opened -= OnOpened;
        FitToWorkingArea();
        // Give WSLg a frame to map the window before heavy work / overlays.
        await Dispatcher.UIThread.InvokeAsync(() => { }, DispatcherPriority.Background);
        FitToWorkingArea();
        Activate();
        var defaultRom = FindDefaultRom();
        if (defaultRom is not null)
            await OpenRomAsync(defaultRom);
    }

    /// <summary>
    /// Keep the window inside the monitor working area (excludes the Windows taskbar).
    /// </summary>
    private void FitToWorkingArea()
    {
        var screen = Screens.ScreenFromWindow(this) ?? Screens.Primary;
        if (screen is null)
            return;

        const double margin = 12;
        var scaling = Math.Max(0.5, screen.Scaling);
        var work = screen.WorkingArea;
        var maxWidth = Math.Max(640, work.Width / scaling - margin * 2);
        var maxHeight = Math.Max(480, work.Height / scaling - margin * 2);

        MaxWidth = maxWidth;
        MaxHeight = maxHeight;
        MinWidth = Math.Min(MinWidth, maxWidth);
        MinHeight = Math.Min(MinHeight, maxHeight);

        if (WindowState == WindowState.Maximized)
            return;

        Width = Math.Clamp(Width > 1 ? Width : 1280, MinWidth, maxWidth);
        Height = Math.Clamp(Height > 1 ? Height : 800, MinHeight, maxHeight);

        var pixelWidth = (int)Math.Round(Width * scaling);
        var pixelHeight = (int)Math.Round(Height * scaling);
        var x = work.X + Math.Max(0, (work.Width - pixelWidth) / 2);
        var y = work.Y + Math.Max(0, (work.Height - pixelHeight) / 2);
        // Clamp so the window cannot sit under the taskbar or off-screen.
        x = Math.Clamp(x, work.X, Math.Max(work.X, work.X + work.Width - pixelWidth));
        y = Math.Clamp(y, work.Y, Math.Max(work.Y, work.Y + work.Height - pixelHeight));
        Position = new PixelPoint(x, y);
    }

    private async void OpenButtonOnClick(object? sender, RoutedEventArgs e)
    {
        if (_isLoading)
            return;

        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Open Pokémon Mystery Dungeon ROM",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("Game Boy Advance ROM")
                {
                    Patterns = ["*.gba", "*.bin"],
                },
                FilePickerFileTypes.All,
            ],
        });
        var file = files.FirstOrDefault();
        if (file is not null)
            await OpenRomAsync(file.Path.LocalPath);
    }

    private async Task OpenRomAsync(string path)
    {
        if (_isLoading)
            return;

        _isLoading = true;
        var romName = Path.GetFileName(path);
        SetStatus($"Indexing {romName}…");
        BeginLoadingOverlay($"Opening {romName}…");

        var progress = new Progress<string>(stage =>
        {
            if (!Dispatcher.UIThread.CheckAccess())
            {
                Dispatcher.UIThread.Post(() => _loadingStage.Text = stage);
                return;
            }

            _loadingStage.Text = stage;
        });

        IProgress<string> progressSink = progress;
        var loadTask = Task.Run(() =>
        {
            var rom = RomImage.Open(path);
            progressSink.Report($"Opened {rom.Length / 1024 / 1024.0:F2} MiB ROM…");
            var built = CatalogBuilder.Build(
                rom,
                charmapPathOverride: Path.Combine(AppContext.BaseDirectory, "charmap.txt"),
                progress: progressSink);
            return (rom, built.Catalog, built.Charmap);
        });

        try
        {
            var result = await loadTask;
            var elapsed = _loadStopwatch.Elapsed;
            EndLoadingOverlay();

            _rom = result.rom;
            _catalog = result.Catalog;
            _charmap = result.Charmap;

            ShowLoadedCategory(Categories[0], selectFirstAsset: true);

            var counts = string.Join("  ", Categories.Select(category =>
            {
                var count = _catalog.ForCategory(category.Category).Count;
                return $"{category.Name}:{count}";
            }));
            var warning = _catalog.Diagnostics.Count == 0
                ? string.Empty
                : $"  Warnings: {_catalog.Diagnostics.Count}.";
            SetStatus($"{romName}  |  {_rom.Length / 1024 / 1024.0:F2} MiB  |  " +
                      $"{_catalog.Assets.Count:N0} assets in {elapsed.TotalSeconds:0.0}s  |  " +
                      $"{counts}{warning}");
        }
        catch (Exception exception) when (exception is IOException or InvalidDataException or
                                           ArgumentException)
        {
            EndLoadingOverlay();
            SetStatus($"Could not open ROM: {exception.Message}");
            await ShowErrorAsync("Open ROM failed", exception.Message);
        }
        finally
        {
            _isLoading = false;
        }
    }

    private void BeginLoadingOverlay(string stage)
    {
        _loadingStage.Text = stage;
        _loadingElapsed.Text = "Elapsed: 0.0s";
        _loadingOverlay.IsVisible = true;
        _root.IsEnabled = false;
        _loadStopwatch.Restart();
        _loadTimer?.Stop();
        _loadTimer = new DispatcherTimer { Interval = TimeSpan.FromMilliseconds(100) };
        _loadTimer.Tick += (_, _) =>
            _loadingElapsed.Text = $"Elapsed: {_loadStopwatch.Elapsed.TotalSeconds:0.0}s";
        _loadTimer.Start();
    }

    private void EndLoadingOverlay()
    {
        _loadTimer?.Stop();
        _loadTimer = null;
        _loadStopwatch.Stop();
        _loadingOverlay.IsVisible = false;
        _root.IsEnabled = true;
    }

    private void ShowLoadedCategory(CategoryItem category, bool selectFirstAsset)
    {
        _categoryTree.SelectedItem = null;
        _categoryTree.SelectedItem = category;
        PopulateAssetBrowser(category, selectFirstAsset);
    }

    private void CategoryTreeOnSelectionChanged(object? sender, SelectionChangedEventArgs e)
    {
        if (_categoryTree.SelectedItem is not CategoryItem category || _catalog is null)
        {
            _assetList.ItemsSource = null;
            _assetGrid.Children.Clear();
            return;
        }

        PopulateAssetBrowser(category, selectFirstAsset: true);
    }

    private void PopulateAssetBrowser(CategoryItem category, bool selectFirstAsset)
    {
        if (_catalog is null)
            return;

        var assets = _catalog.ForCategory(category.Category);
        _exportCategory.IsEnabled = assets.Count > 0;
        _exportSelected.IsEnabled = false;
        _selectedAsset = null;
        _thumbnailCts?.Cancel();
        _thumbnailCts = new CancellationTokenSource();

        if (assets.Count == 0)
        {
            _assetList.ItemsSource = null;
            _assetGrid.Children.Clear();
            _previewHost.Child = new TextBlock
            {
                Text = $"{category.Name}\n\nNo entries found in this ROM.",
                TextWrapping = TextWrapping.Wrap,
                FontSize = 16,
                Foreground = Brushes.Gray,
            };
            return;
        }

        if (_useGridView)
        {
            _assetList.ItemsSource = null;
            BuildAssetGrid(assets, _thumbnailCts.Token);
        }
        else
        {
            _assetGrid.Children.Clear();
            _assetList.ItemsSource = assets.Select(asset => new AssetListItem(asset)).ToArray();
        }

        _previewHost.Child = CreateCategoryPanel(category, assets.Count);
        if (selectFirstAsset)
        {
            if (_useGridView)
            {
                if (_assetGrid.Children.Count > 0 &&
                    _assetGrid.Children[0] is Border { Tag: AssetDescriptor first })
                    _ = ShowPreviewAsync(first);
            }
            else
            {
                _assetList.SelectedIndex = 0;
            }
        }
        else
        {
            _assetList.SelectedIndex = -1;
        }
    }

    private void BuildAssetGrid(IReadOnlyList<AssetDescriptor> assets, CancellationToken token)
    {
        _assetGrid.Children.Clear();
        foreach (var asset in assets)
        {
            var title = new TextBlock
            {
                Text = asset.DisplayName,
                FontSize = 11,
                TextWrapping = TextWrapping.Wrap,
                TextAlignment = TextAlignment.Center,
                MaxHeight = 34,
            };
            var imageHost = new Border
            {
                Width = 72,
                Height = 72,
                Background = new SolidColorBrush(Color.FromArgb(40, 128, 128, 128)),
                Child = new TextBlock
                {
                    Text = ThumbnailGlyph(asset),
                    FontSize = 18,
                    HorizontalAlignment = HorizontalAlignment.Center,
                    VerticalAlignment = VerticalAlignment.Center,
                    Foreground = Brushes.Gray,
                },
            };
            var card = new Border
            {
                Width = 104,
                Margin = new Thickness(4),
                Padding = new Thickness(6),
                BorderBrush = new SolidColorBrush(Color.FromArgb(70, 160, 160, 160)),
                BorderThickness = new Thickness(1),
                CornerRadius = new CornerRadius(4),
                Tag = asset,
                Child = new StackPanel
                {
                    Spacing = 4,
                    Children = { imageHost, title },
                },
            };
            card.PointerPressed += async (_, _) =>
            {
                HighlightGridCard(card);
                await ShowPreviewAsync(asset);
            };
            _assetGrid.Children.Add(card);

            if (asset.Kind is AssetKind.KaoPortrait or AssetKind.TitleBackground or
                AssetKind.Effect or AssetKind.GroundMap)
            {
                _ = LoadThumbnailAsync(asset, imageHost, token);
            }
        }
    }

    private async Task LoadThumbnailAsync(AssetDescriptor asset, Border imageHost,
        CancellationToken token)
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
                if (token.IsCancellationRequested)
                    return;
                using var stream = new MemoryStream(preview.Png);
                imageHost.Child = new Image
                {
                    Source = new Bitmap(stream),
                    Stretch = Stretch.Uniform,
                    Width = 72,
                    Height = 72,
                };
            });
        }
        catch
        {
            // Keep the placeholder glyph when a thumbnail cannot be built.
        }
    }

    private void HighlightGridCard(Border selected)
    {
        foreach (var child in _assetGrid.Children.OfType<Border>())
        {
            child.BorderBrush = ReferenceEquals(child, selected)
                ? Brushes.DodgerBlue
                : new SolidColorBrush(Color.FromArgb(70, 160, 160, 160));
            child.BorderThickness = new Thickness(ReferenceEquals(child, selected) ? 2 : 1);
        }
    }

    private static string ThumbnailGlyph(AssetDescriptor asset) => asset.Kind switch
    {
        AssetKind.Dialogue => "Aa",
        AssetKind.Script => "{}",
        AssetKind.SoundWave or AssetKind.SoundSong => "♪",
        _ => "▣",
    };

    private async void AssetListOnSelectionChanged(object? sender, SelectionChangedEventArgs e)
    {
        if (_assetList.SelectedItem is not AssetListItem item)
            return;
        await ShowPreviewAsync(item.Asset);
    }

    private async void AssetListOnDoubleTapped(object? sender, TappedEventArgs e)
    {
        if (_assetList.SelectedItem is AssetListItem item)
            await ShowPreviewAsync(item.Asset);
    }

    private async Task ShowPreviewAsync(AssetDescriptor asset)
    {
        if (_rom is null || _charmap is null)
            return;

        _selectedAsset = asset;
        _exportSelected.IsEnabled = true;
        try
        {
            var preview = await Task.Run(() => AssetPreviewer.Create(_rom, asset, _charmap));
            if (preview.IsImage)
            {
                using var stream = new MemoryStream(preview.Png!);
                var bitmap = new Bitmap(stream);
                _previewHost.Child = CreateZoomableImagePreview(preview.Title, bitmap);
            }
            else if (asset.Kind == AssetKind.Dialogue)
            {
                var body = preview.Text ?? string.Empty;
                var split = body.Split(["\n\n——\n"], 2, StringSplitOptions.None);
                var dialogueText = split[0];
                var meta = split.Length > 1 ? split[1] : string.Empty;
                _previewHost.Child = new ScrollViewer
                {
                    HorizontalScrollBarVisibility = ScrollBarVisibility.Disabled,
                    VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
                    Content = new StackPanel
                    {
                        Spacing = 12,
                        Children =
                        {
                            new TextBlock
                            {
                                Text = asset.Name,
                                FontSize = 18,
                                FontWeight = FontWeight.SemiBold,
                            },
                            new TextBlock
                            {
                                Text = dialogueText,
                                TextWrapping = TextWrapping.Wrap,
                                FontSize = 16,
                                LineHeight = 24,
                            },
                            new TextBlock
                            {
                                Text = meta,
                                FontSize = 12,
                                Foreground = Brushes.Gray,
                                TextWrapping = TextWrapping.Wrap,
                            },
                        },
                    },
                };
            }
            else
            {
                _previewHost.Child = new ScrollViewer
                {
                    HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
                    VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
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
        catch (Exception exception) when (exception is InvalidDataException or
                                           ArgumentOutOfRangeException or IOException or
                                           IndexOutOfRangeException)
        {
            _previewHost.Child = new TextBlock
            {
                Text = $"{asset.DisplayName}\n\nUnable to preview this asset:\n{exception.Message}",
                TextWrapping = TextWrapping.Wrap,
            };
        }
    }

    private async void ExportSelectedOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _charmap is null || _selectedAsset is null)
            return;
        var directory = await ChooseExportDirectoryAsync();
        if (directory is null)
            return;

        try
        {
            var asset = _selectedAsset;
            var paths = await Task.Run(() => AssetExportService.Export(_rom, asset, _charmap, directory));
            SetStatus($"Exported {asset.Name}: {paths.Count} file(s) to {directory}");
        }
        catch (Exception exception) when (exception is InvalidDataException or IOException)
        {
            await ShowErrorAsync("Export failed", exception.Message);
        }
    }

    private async void ExportCategoryOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _charmap is null ||
            _categoryTree.SelectedItem is not CategoryItem category || _catalog is null)
            return;
        var directory = await ChooseExportDirectoryAsync();
        if (directory is null)
            return;

        var assets = _catalog.ForCategory(category.Category);
        var result = await Task.Run(() =>
            AssetExportService.ExportMany(_rom, assets, _charmap, directory));
        SetStatus($"Exported {result.Paths.Count} file(s) from {category.Name}. " +
                  $"{result.Errors.Count} skipped.");
        if (result.Errors.Count > 0)
            await ShowErrorAsync("Some assets were skipped", string.Join("\n", result.Errors.Take(12)));
    }

    private async Task<string?> ChooseExportDirectoryAsync()
    {
        var folders = await StorageProvider.OpenFolderPickerAsync(new FolderPickerOpenOptions
        {
            Title = "Choose RescueEditor export folder",
            AllowMultiple = false,
        });
        return folders.FirstOrDefault()?.Path.LocalPath;
    }

    private void ClearRom()
    {
        _rom = null;
        _catalog = null;
        _charmap = null;
        _selectedAsset = null;
        _thumbnailCts?.Cancel();
        _assetList.ItemsSource = null;
        _assetList.SelectedIndex = -1;
        _assetGrid.Children.Clear();
        _categoryTree.SelectedItem = null;
        _previewHost.Child = CreateWelcomePanel();
        _exportSelected.IsEnabled = false;
        _exportCategory.IsEnabled = false;
        SetStatus("Open a baserom.gba to begin.");
    }

    private static string? FindDefaultRom()
    {
        foreach (var start in new[]
                 {
                     Environment.CurrentDirectory,
                     AppContext.BaseDirectory,
                 })
        {
            var current = new DirectoryInfo(start);
            while (current is not null)
            {
                var candidate = Path.Combine(current.FullName, "baserom.gba");
                if (File.Exists(candidate))
                    return candidate;
                current = current.Parent;
            }
        }

        return null;
    }

    private Control CreateCategoryPanel(CategoryItem category, int count)
    {
        return new TextBlock
        {
            Text = $"{category.Name}\n\n{count:N0} entries. Select one to preview.",
            TextWrapping = TextWrapping.Wrap,
            FontSize = 16,
            Foreground = Brushes.Gray,
        };
    }

    private static Control CreateWelcomePanel()
    {
        return new StackPanel
        {
            Spacing = 10,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Center,
            Children =
            {
                new TextBlock
                {
                    Text = "RescueEditor",
                    FontSize = 30,
                    FontWeight = FontWeight.Bold,
                    HorizontalAlignment = HorizontalAlignment.Center,
                },
                new TextBlock
                {
                    Text = "Open a baserom.gba to browse its assets.",
                    Foreground = Brushes.Gray,
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

        var toolbar = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = 2,
            Children =
            {
                new TextBlock
                {
                    Text = $"{title}  ({_previewPixelWidth}×{_previewPixelHeight})",
                    FontWeight = FontWeight.SemiBold,
                    VerticalAlignment = VerticalAlignment.Center,
                    Margin = new Thickness(0, 0, 12, 0),
                },
                zoomOut,
                zoomIn,
                zoom100,
                _zoomLabel,
            },
        };

        var imageHost = new Border
        {
            Background = new SolidColorBrush(Color.FromRgb(0x2A, 0x2A, 0x2A)),
            Padding = new Thickness(8),
            HorizontalAlignment = HorizontalAlignment.Left,
            Child = _previewImage,
        };

        // Mouse/trackpad wheel zoom and touch pinch (scale is cumulative per gesture).
        imageHost.GestureRecognizers.Add(new PinchGestureRecognizer());
        imageHost.PointerWheelChanged += (_, e) =>
        {
            var factor = e.Delta.Y > 0 ? 1.1 : 1 / 1.1;
            AdjustPreviewZoom(factor);
            e.Handled = true;
        };
        imageHost.AddHandler(InputElement.PinchEvent, (_, e) =>
        {
            if (!_pinchActive)
            {
                _pinchActive = true;
                _pinchBaseZoom = _previewZoom;
            }

            SetPreviewZoom(_pinchBaseZoom * e.Scale);
            e.Handled = true;
        }, RoutingStrategies.Bubble);
        imageHost.AddHandler(InputElement.PinchEndedEvent, (_, _) =>
        {
            _pinchActive = false;
        }, RoutingStrategies.Bubble);

        var scroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = ScrollBarVisibility.Auto,
            VerticalScrollBarVisibility = ScrollBarVisibility.Auto,
            Content = imageHost,
        };

        return new DockPanel
        {
            LastChildFill = true,
            Children =
            {
                new Border
                {
                    [DockPanel.DockProperty] = Dock.Top,
                    Margin = new Thickness(0, 0, 0, 8),
                    Child = toolbar,
                },
                scroller,
            },
        };
    }

    private void AdjustPreviewZoom(double factor) =>
        SetPreviewZoom(_previewZoom * factor);

    private void SetPreviewZoom(double zoom)
    {
        _previewZoom = Math.Clamp(zoom, 0.1, 8.0);
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

    private void SetStatus(string text) => _status.Text = text;

    private async Task ShowErrorAsync(string title, string message)
    {
        var dialog = new Window
        {
            Title = title,
            Width = 560,
            Height = 260,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            WindowDecorations = WindowDecorations.Full,
            Content = new StackPanel
            {
                Margin = new Thickness(20),
                Spacing = 16,
                Children =
                {
                    new TextBlock { Text = message, TextWrapping = TextWrapping.Wrap },
                    new Button
                    {
                        Content = "Close",
                        HorizontalAlignment = HorizontalAlignment.Right,
                        Padding = new Thickness(18, 7),
                    },
                },
            },
        };
        if (dialog.Content is Panel panel && panel.Children[^1] is Button close)
            close.Click += (_, _) => dialog.Close();
        await dialog.ShowDialog(this);
    }

    private sealed record CategoryItem(string Name, AssetCategory Category)
    {
        public override string ToString() => Name;
    }

    private sealed class AssetListItem
    {
        public AssetListItem(AssetDescriptor asset)
        {
            Asset = asset;
            Text = asset.Kind == AssetKind.Dialogue ? asset.Name : asset.DisplayName;
        }

        public AssetDescriptor Asset { get; }
        public string Text { get; }
        public override string ToString() => Text;
    }
}
