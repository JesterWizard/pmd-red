using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Interactivity;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Platform.Storage;
using Avalonia.Threading;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class MainWindow : Window
{
    private static readonly (string Name, AssetCategory Category)[] Categories =
    [
        ("Scenes", AssetCategory.Scenes),
        ("Dialogue", AssetCategory.Dialogue),
        ("Scripts & Animations", AssetCategory.Scripts),
        ("Portraits", AssetCategory.Portraits),
        ("Backgrounds", AssetCategory.Backgrounds),
        ("Effects", AssetCategory.Effects),
        ("Ground Maps", AssetCategory.GroundMaps),
        ("Music", AssetCategory.Music),
        ("Sound Effects", AssetCategory.SoundEffects),
        ("Raw Archives", AssetCategory.RawArchives),
    ];

    private readonly ProjectExplorerPanel _explorer;
    private readonly BreadcrumbBar _breadcrumb;
    private readonly Border _workspaceHost;
    private readonly Border _propertiesHost;
    private readonly GridSplitter _leftSplitter;
    private readonly GridSplitter _rightSplitter;
    private readonly Grid _contentGrid;
    private readonly EditorKeymap _keymap = EditorKeymap.CreateDefault();
    private readonly EditorDockLayout _dock = new();
    private readonly TextBlock _status;
    private readonly TextBlock _propertiesBody;
    private readonly Border _loadingOverlay;
    private readonly TextBlock _loadingStage;
    private readonly TextBlock _loadingElapsed;
    private readonly Grid _root;

    private readonly AgbplayStreamHost _soundStreamHost = new();
    private readonly SoundCacheWarmer _soundCacheWarmer = new();
    private readonly ChangeService _changes = new();
    private readonly AssetWorkspacePanel _assetWorkspace;
    private SceneWorkspacePanel? _sceneWorkspace;

    private RomImage? _rom;
    private AssetCatalog? _catalog;
    private Charmap? _charmap;
    private SceneDatabase? _scenes;
    private ProjectDocument? _project;
    private bool _isLoading;
    private AssetDescriptor? _selectedAsset;
    private AssetCategory? _selectedCategory;
    private readonly System.Diagnostics.Stopwatch _loadStopwatch = new();
    private DispatcherTimer? _loadTimer;

    public MainWindow()
    {
        Title = "RescueTemple";
        Width = 1440;
        Height = 860;
        MinWidth = 1024;
        MinHeight = 640;
        WindowStartupLocation = WindowStartupLocation.CenterScreen;
        Background = EditorTheme.WindowBgBrush;
        FontFamily = EditorTheme.UiFont;
        FontSize = EditorTheme.FontBody;
        AppIcon.Apply(this);

        _explorer = new ProjectExplorerPanel();
        _explorer.SelectionChanged += ExplorerOnSelectionChanged;

        _breadcrumb = new BreadcrumbBar();
        _workspaceHost = new Border
        {
            Background = EditorTheme.CanvasBgBrush,
            Child = CreateWelcomePanel(),
        };
        _propertiesBody = new TextBlock
        {
            Text = "Select an asset to inspect its properties.",
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            Foreground = EditorTheme.TextMutedBrush,
            LineHeight = 18,
        };
        var propsHeader = EditorChrome.PanelHeader("Inspector");
        var propsBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(propsHeader, Dock.Top);
        propsBody.Children.Add(propsHeader);
        propsBody.Children.Add(new ScrollViewer
        {
            Padding = new Thickness(0),
            Content = _propertiesBody,
        });
        _propertiesHost = new Border
        {
            MinWidth = 220,
            MaxWidth = 480,
            Child = EditorChrome.VerticalPane(propsBody, leftEdge: true),
        };

        _status = new TextBlock
        {
            Text = "Open a baserom.gba to begin.",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };
        var statusInner = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,Auto"),
            Children =
            {
                _status,
                new TextBlock
                {
                    Text = "RescueTemple",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontMeta,
                    Foreground = EditorTheme.TextDimBrush,
                    VerticalAlignment = VerticalAlignment.Center,
                    Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
                    [Grid.ColumnProperty] = 1,
                },
            },
        };

        _assetWorkspace = new AssetWorkspacePanel();
        _assetWorkspace.AttachSound(_soundStreamHost, _soundCacheWarmer);
        _assetWorkspace.AssetSelected += (_, asset) =>
        {
            _selectedAsset = asset;
            UpdateBreadcrumb();
            UpdateProperties();
            UpdateDirtyTitle();
        };
        _assetWorkspace.RequestSceneWorkspace += (_, _) => OpenSelectedScene();

        _leftSplitter = new GridSplitter
        {
            Width = 4,
            Background = EditorTheme.BorderSubtleBrush,
            ResizeDirection = GridResizeDirection.Columns,
        };
        _rightSplitter = new GridSplitter
        {
            Width = 4,
            Background = EditorTheme.BorderSubtleBrush,
            ResizeDirection = GridResizeDirection.Columns,
        };

        _contentGrid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.ExplorerWidth},4,*,4,{EditorTheme.InspectorWidth}"),
            Children = { _explorer, _leftSplitter, _workspaceHost, _rightSplitter, _propertiesHost },
        };
        Grid.SetColumn(_explorer, 0);
        Grid.SetColumn(_leftSplitter, 1);
        Grid.SetColumn(_workspaceHost, 2);
        Grid.SetColumn(_rightSplitter, 3);
        Grid.SetColumn(_propertiesHost, 4);
        var content = _contentGrid;

        var menu = CreateMenu();
        var statusBar = EditorChrome.StatusHost(statusInner);

        _root = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,Auto,*,Auto"),
            Children = { menu, _breadcrumb, content, statusBar },
        };
        Grid.SetRow(menu, 0);
        Grid.SetRow(_breadcrumb, 1);
        Grid.SetRow(content, 2);
        Grid.SetRow(statusBar, 3);

        _loadingStage = new TextBlock
        {
            FontSize = EditorTheme.FontBody,
            FontFamily = EditorTheme.UiFont,
            TextWrapping = TextWrapping.Wrap,
            Foreground = EditorTheme.TextSecondaryBrush,
        };
        _loadingElapsed = new TextBlock
        {
            Foreground = EditorTheme.TextMutedBrush,
            FontSize = EditorTheme.FontMeta,
            FontFamily = EditorTheme.UiFont,
            Margin = new Thickness(0, EditorTheme.Space2, 0, 0),
        };
        _loadingOverlay = new Border
        {
            IsVisible = false,
            Background = new SolidColorBrush(Color.FromArgb(210, 12, 12, 12)),
            Child = new Border
            {
                Width = 360,
                Padding = new Thickness(EditorTheme.Space6),
                HorizontalAlignment = HorizontalAlignment.Center,
                VerticalAlignment = VerticalAlignment.Center,
                Background = EditorTheme.PanelBgRaisedBrush,
                BorderBrush = EditorTheme.BorderBrush,
                BorderThickness = new Thickness(1),
                CornerRadius = new CornerRadius(2),
                Child = new StackPanel
                {
                    Spacing = EditorTheme.Space2,
                    Children =
                    {
                        new TextBlock
                        {
                            Text = "Indexing ROM assets",
                            FontSize = EditorTheme.FontTitle,
                            FontWeight = FontWeight.SemiBold,
                            FontFamily = EditorTheme.UiFont,
                        },
                        _loadingStage,
                        _loadingElapsed,
                        new ProgressBar
                        {
                            IsIndeterminate = true,
                            Height = 3,
                            Margin = new Thickness(0, EditorTheme.Space4, 0, 0),
                        },
                    },
                },
            },
        };

        Content = new Panel { Children = { _root, _loadingOverlay } };
        KeyDown += MainWindowOnKeyDown;
        Opened += OnOpened;
    }

    private Menu CreateMenu()
    {
        var menu = new Menu
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            Background = EditorTheme.MenuBgBrush,
            Height = 24,
            Padding = new Thickness(EditorTheme.Space2, 0),
        };
        var file = new MenuItem { Header = "_File" };
        var open = new MenuItem { Header = "_Open ROM…" };
        open.Click += OpenButtonOnClick;
        var saveProject = new MenuItem { Header = "Save _Project…" };
        saveProject.Click += SaveProjectOnClick;
        var openProject = new MenuItem { Header = "Open Pro_ject…" };
        openProject.Click += OpenProjectOnClick;
        var buildRom = new MenuItem { Header = "_Build ROM…" };
        buildRom.Click += BuildRomOnClick;
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
        file.Items.Add(saveProject);
        file.Items.Add(openProject);
        file.Items.Add(buildRom);
        file.Items.Add(new Separator());
        file.Items.Add(exportSelected);
        file.Items.Add(exportCategory);
        file.Items.Add(new Separator());
        file.Items.Add(close);
        file.Items.Add(exit);
        menu.Items.Add(file);

        var edit = new MenuItem { Header = "_Edit" };
        var undo = new MenuItem { Header = "_Undo" };
        undo.Click += (_, _) => { _changes.Undo(); _sceneWorkspace?.RefreshFromExternal(); UpdateDirtyTitle(); };
        var redo = new MenuItem { Header = "_Redo" };
        redo.Click += (_, _) => { _changes.Redo(); _sceneWorkspace?.RefreshFromExternal(); UpdateDirtyTitle(); };
        edit.Items.Add(undo);
        edit.Items.Add(redo);
        menu.Items.Add(edit);

        var sceneMenu = new MenuItem { Header = "_Scene" };
        var playScene = new MenuItem { Header = "_Play Scene" };
        playScene.Click += async (_, _) =>
        {
            if (_sceneWorkspace is not null && _workspaceHost.Child == _sceneWorkspace)
                await _sceneWorkspace.OpenScenePlayAsync();
            else
                SetStatus("Open a scene first to use Scene Play.");
        };
        sceneMenu.Items.Add(playScene);
        menu.Items.Add(sceneMenu);

        var view = new MenuItem { Header = "_View" };
        var list = new MenuItem { Header = "_List" };
        list.Click += (_, _) => _assetWorkspace.SetViewMode(false);
        var grid = new MenuItem { Header = "_Grid" };
        grid.Click += (_, _) => _assetWorkspace.SetViewMode(true);
        view.Items.Add(list);
        view.Items.Add(grid);
        menu.Items.Add(view);
        return menu;
    }

    private async void OnOpened(object? sender, EventArgs e)
    {
        Opened -= OnOpened;
        FitToWorkingArea();
        await Dispatcher.UIThread.InvokeAsync(() => { }, DispatcherPriority.Background);
        FitToWorkingArea();
        Activate();
        var defaultRom = FindDefaultRom();
        if (defaultRom is not null)
            await OpenRomAsync(defaultRom);
    }

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
        if (WindowState == WindowState.Maximized)
            return;
        Width = Math.Clamp(Width > 1 ? Width : 1400, MinWidth, maxWidth);
        Height = Math.Clamp(Height > 1 ? Height : 820, MinHeight, maxHeight);
        var pixelWidth = (int)Math.Round(Width * scaling);
        var pixelHeight = (int)Math.Round(Height * scaling);
        var x = work.X + Math.Max(0, (work.Width - pixelWidth) / 2);
        var y = work.Y + Math.Max(0, (work.Height - pixelHeight) / 2);
        x = Math.Clamp(x, work.X, Math.Max(work.X, work.X + work.Width - pixelWidth));
        y = Math.Clamp(y, work.Y, Math.Max(work.Y, work.Y + work.Height - pixelHeight));
        Position = new PixelPoint(x, y);
    }

    private async void OpenButtonOnClick(object? sender, RoutedEventArgs e)
    {
        if (_isLoading) return;
        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Open Pokémon Mystery Dungeon ROM",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("Game Boy Advance ROM") { Patterns = ["*.gba", "*.bin"] },
                FilePickerFileTypes.All,
            ],
        });
        var file = files.FirstOrDefault();
        if (file is not null)
            await OpenRomAsync(file.Path.LocalPath);
    }

    private async Task OpenRomAsync(string path)
    {
        if (_isLoading) return;
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
            return (rom, built.Catalog, built.Charmap, built.Scenes);
        });

        try
        {
            var result = await loadTask;
            var elapsed = _loadStopwatch.Elapsed;
            EndLoadingOverlay();

            _rom = result.rom;
            _catalog = result.Catalog;
            _charmap = result.Charmap;
            _scenes = result.Scenes;
            _project = ProjectDocument.Create(_rom, _scenes.Profile);
            _changes.Attach(_project, _scenes);

            var romPath = _rom.Path;
            _ = Task.Run(() =>
            {
                try { _soundStreamHost.EnsureStarted(romPath); }
                catch { }
            });
            // Don't contend with Scene Play / first paint — warm agbplay cache after idle.
            _ = Task.Run(async () =>
            {
                await Task.Delay(4000).ConfigureAwait(false);
                try { _soundCacheWarmer.Start(_rom, _catalog); }
                catch { }
            });

            _assetWorkspace.Bind(_rom, _charmap, _catalog, _scenes, _changes);
            _explorer.Build(_catalog, _scenes, Categories);
            _workspaceHost.Child = _assetWorkspace;
            ApplyDockLayout(sceneOwnsInspector: false);
            _selectedCategory = AssetCategory.Scenes;
            _assetWorkspace.ShowCategory(AssetCategory.Scenes, selectFirst: false);
            UpdateBreadcrumb();
            UpdateDirtyTitle();

            var counts = string.Join("  ", Categories.Select(c =>
                $"{c.Name}:{_catalog.ForCategory(c.Category).Count}"));
            var warning = _catalog.Diagnostics.Count == 0
                ? string.Empty
                : $"  Warnings: {_catalog.Diagnostics.Count}.";
            SetStatus($"{romName}  |  {_rom.Length / 1024 / 1024.0:F2} MiB  |  " +
                      $"{_catalog.Assets.Count:N0} assets in {elapsed.TotalSeconds:0.0}s  |  {counts}{warning}");
        }
        catch (Exception exception) when (exception is IOException or InvalidDataException or ArgumentException)
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

    private void ExplorerOnSelectionChanged(object? sender, ExplorerNode? node)
    {
        if (_catalog is null || _rom is null || _charmap is null)
            return;

        switch (node)
        {
            case CategoryExplorerNode category:
                _selectedCategory = category.Category;
                if (category.Category == AssetCategory.Scenes)
                {
                    _workspaceHost.Child = _assetWorkspace;
                    ApplyDockLayout(sceneOwnsInspector: false);
                    _assetWorkspace.ShowCategory(category.Category, selectFirst: false);
                }
                else
                {
                    _workspaceHost.Child = _assetWorkspace;
                    ApplyDockLayout(sceneOwnsInspector: false);
                    _assetWorkspace.ShowCategory(category.Category, selectFirst: true);
                }
                UpdateBreadcrumb();
                break;

            case AssetExplorerNode assetNode:
                _selectedAsset = assetNode.Asset;
                _selectedCategory = assetNode.Asset.Category;
                if (assetNode.Asset.Kind == AssetKind.Scene || assetNode.Scene is not null)
                {
                    OpenScene(assetNode.Scene, assetNode.Asset);
                }
                else
                {
                    _workspaceHost.Child = _assetWorkspace;
                    ApplyDockLayout(sceneOwnsInspector: false);
                    _ = _assetWorkspace.ShowAssetAsync(assetNode.Asset);
                }
                UpdateBreadcrumb();
                UpdateProperties();
                break;

            case SceneGroupExplorerNode:
                UpdateBreadcrumb();
                break;
        }
    }

    private void OpenSelectedScene()
    {
        if (_selectedAsset is null)
            return;
        Scene? scene = null;
        if (_selectedAsset.Metadata.TryGetValue("mapId", out var mapText) &&
            int.TryParse(mapText, out var mapId))
            scene = _scenes?.FindScene(mapId);
        OpenScene(scene, _selectedAsset);
    }

    private void OpenScene(Scene? scene, AssetDescriptor asset)
    {
        if (_rom is null || _charmap is null || _scenes is null)
            return;
        try
        {
            _selectedAsset = asset;
            _sceneWorkspace ??= new SceneWorkspacePanel();
            _sceneWorkspace.DirtyChanged -= OnSceneDirty;
            _sceneWorkspace.DirtyChanged += OnSceneDirty;
            _sceneWorkspace.Load(_rom, _charmap, _scenes, _changes, scene,
                asset.Metadata.TryGetValue("mapId", out var mapText) && int.TryParse(mapText, out var id) ? id : null);
            // Scene editor owns center+right (SkyTemple style); hide generic properties.
            _workspaceHost.Child = _sceneWorkspace;
            ApplyDockLayout(sceneOwnsInspector: true);
            UpdateBreadcrumb();
            UpdateDirtyTitle();
        }
        catch (Exception exception)
        {
            SetStatus($"Failed to open scene: {exception.Message}");
        }
    }

    private void OnSceneDirty(object? sender, EventArgs e) => UpdateDirtyTitle();

    private void UpdateBreadcrumb()
    {
        var romName = _rom is null ? "RescueTemple" : Path.GetFileName(_rom.Path);
        var category = Categories.FirstOrDefault(c => c.Category == _selectedCategory).Name
                       ?? _selectedCategory?.ToString()
                       ?? "";
        var asset = _selectedAsset?.DisplayName ?? "";
        _breadcrumb.SetPath(romName, category, asset);
    }

    private void UpdateProperties()
    {
        if (_selectedAsset is null)
        {
            _propertiesBody.Text = "Select an asset to inspect its properties.";
            return;
        }
        var a = _selectedAsset;
        _propertiesBody.Text =
            $"{a.DisplayName}\n\n" +
            $"Kind\t{a.Kind}\n" +
            $"Category\t{a.Category}\n" +
            $"Format\t{a.Format}\n" +
            $"Offset\t0x{a.Offset:X}\n" +
            $"Size\t0x{a.Size:X}\n\n" +
            $"{a.Description}";
        _propertiesBody.FontFamily = EditorTheme.MonoFont;
        _propertiesBody.FontSize = EditorTheme.FontLabel;
        _propertiesBody.Foreground = EditorTheme.TextSecondaryBrush;
    }

    private void UpdateDirtyTitle()
    {
        var dirty = _project?.IsDirty == true || _changes.IsDirty;
        var name = _rom is null ? "RescueTemple" : Path.GetFileName(_rom.Path);
        Title = dirty ? $"RescueTemple — {name} *" : $"RescueTemple — {name}";
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

    private async void SaveProjectOnClick(object? sender, RoutedEventArgs e)
    {
        if (_project is null)
        {
            await ShowErrorAsync("Save Project", "Open a ROM before saving a project.");
            return;
        }
        var file = await StorageProvider.SaveFilePickerAsync(new FilePickerSaveOptions
        {
            Title = "Save RescueTemple Project",
            SuggestedFileName = _project.Name + ".rtproj",
            FileTypeChoices =
            [
                new FilePickerFileType("RescueTemple Project") { Patterns = ["*.rtproj", "*.json"] },
            ],
        });
        if (file is null) return;
        try
        {
            _project.Save(file.Path.LocalPath);
            UpdateDirtyTitle();
            SetStatus($"Saved project {_project.Path}");
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Save Project failed", exception.Message);
        }
    }

    private async void OpenProjectOnClick(object? sender, RoutedEventArgs e)
    {
        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Open RescueTemple Project",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("RescueTemple Project") { Patterns = ["*.rtproj", "*.json"] },
                FilePickerFileTypes.All,
            ],
        });
        var file = files.FirstOrDefault();
        if (file is null) return;
        try
        {
            var project = ProjectDocument.Load(file.Path.LocalPath);
            if (!string.IsNullOrWhiteSpace(project.BaseRomPath) && File.Exists(project.BaseRomPath))
                await OpenRomAsync(project.BaseRomPath);
            if (_rom is null || _scenes is null)
            {
                await ShowErrorAsync("Open Project", "Could not open the project's base ROM.");
                return;
            }
            _project = project;
            _changes.Attach(_project, _scenes);
            ApplyProjectEdits(_project);
            SetStatus($"Loaded project {project.Path}");
            _sceneWorkspace?.RefreshFromExternal();
            UpdateDirtyTitle();
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Open Project failed", exception.Message);
        }
    }

    private void ApplyProjectEdits(ProjectDocument project)
    {
        if (_scenes is null) return;
        foreach (var edit in project.Edits)
        {
            if (edit.Kind == "entity.position" &&
                edit.Target.StartsWith("0x", StringComparison.OrdinalIgnoreCase) &&
                int.TryParse(edit.Target[2..], System.Globalization.NumberStyles.HexNumber, null, out var offset) &&
                edit.Values.TryGetValue("x", out var xText) &&
                edit.Values.TryGetValue("y", out var yText) &&
                byte.TryParse(xText, out var x) &&
                byte.TryParse(yText, out var y))
            {
                var entity = _scenes.Scenes.SelectMany(scene => scene.AllEntities)
                    .FirstOrDefault(item => item.RomOffset == offset);
                if (entity is not null)
                {
                    byte.TryParse(edit.Values.GetValueOrDefault("xFlags"), out var xf);
                    byte.TryParse(edit.Values.GetValueOrDefault("yFlags"), out var yf);
                    entity.Position = new CompactPos(x, y, xf, yf);
                }
            }
            else if (edit.Kind == "entity.type" &&
                     edit.Target.StartsWith("0x", StringComparison.OrdinalIgnoreCase) &&
                     int.TryParse(edit.Target[2..], System.Globalization.NumberStyles.HexNumber, null, out var typeOffset) &&
                     edit.Values.TryGetValue("typeId", out var typeText) &&
                     byte.TryParse(typeText, out var typeId))
            {
                var entity = _scenes.Scenes.SelectMany(s => s.AllEntities)
                    .FirstOrDefault(item => item.RomOffset == typeOffset);
                if (entity is not null)
                {
                    entity.TypeId = typeId;
                    entity.DisplayName = $"{entity.Kind} {typeId}";
                }
            }
            else if (edit.Kind == "dialogue.text" &&
                     edit.Target.StartsWith("0x", StringComparison.OrdinalIgnoreCase) &&
                     int.TryParse(edit.Target[2..], System.Globalization.NumberStyles.HexNumber, null, out var textOffset) &&
                     edit.Values.TryGetValue("text", out var text) &&
                     _scenes.DialogueByOffset.TryGetValue(textOffset, out var dialogue))
            {
                dialogue.Text = text;
            }
            else if (edit.Kind == "script.arg" &&
                     edit.Target.StartsWith("0x", StringComparison.OrdinalIgnoreCase) &&
                     int.TryParse(edit.Target[2..], System.Globalization.NumberStyles.HexNumber, null, out var cmdOffset) &&
                     edit.Values.TryGetValue("field", out var field) &&
                     edit.Values.TryGetValue("value", out var valueText) &&
                     int.TryParse(valueText, out var value))
            {
                foreach (var station in _scenes.Scenes.SelectMany(s => s.Groups)
                             .SelectMany(g => g.Sectors).SelectMany(sec => sec.Stations))
                {
                    var cmd = station.Commands.FirstOrDefault(c => c.RomOffset == cmdOffset);
                    if (cmd is null) continue;
                    switch (field)
                    {
                        case "op": cmd.Op = (byte)value; break;
                        case "argByte": cmd.ArgByte = (byte)value; break;
                        case "argShort": cmd.ArgShort = (short)value; break;
                        case "arg1": cmd.Arg1 = value; break;
                        case "arg2": cmd.Arg2 = value; break;
                        case "argPtr": cmd.ArgPtr = unchecked((uint)value); break;
                    }
                    break;
                }
            }
        }
    }

    private async void BuildRomOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _scenes is null || _project is null)
        {
            await ShowErrorAsync("Build ROM", "Open a US 1.0 ROM and project first.");
            return;
        }
        var file = await StorageProvider.SaveFilePickerAsync(new FilePickerSaveOptions
        {
            Title = "Build ROM As",
            SuggestedFileName = Path.GetFileNameWithoutExtension(_rom.Path) + ".edited.gba",
            FileTypeChoices = [new FilePickerFileType("GBA ROM") { Patterns = ["*.gba"] }],
        });
        if (file is null) return;
        try
        {
            var report = RomBuilder.Build(_rom, _scenes, _project, file.Path.LocalPath);
            var summary = report.Success
                ? $"Built {file.Path.LocalPath} ({report.Changes.Count} changes)."
                : $"Build failed with {report.Errors.Count} error(s).";
            SetStatus(summary);
            if (!report.Success || report.Warnings.Count > 0)
            {
                var details = string.Join("\n", report.Errors.Concat(report.Warnings).Take(20));
                await ShowErrorAsync(report.Success ? "Build warnings" : "Build ROM failed", details);
            }
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Build ROM failed", exception.Message);
        }
    }

    private async void ExportSelectedOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _charmap is null || _selectedAsset is null)
            return;
        var directory = await ChooseExportDirectoryAsync();
        if (directory is null) return;
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
        if (_rom is null || _charmap is null || _selectedCategory is null || _catalog is null)
            return;
        var directory = await ChooseExportDirectoryAsync();
        if (directory is null) return;
        var assets = _catalog.ForCategory(_selectedCategory.Value);
        var result = await Task.Run(() => AssetExportService.ExportMany(_rom, assets, _charmap, directory));
        SetStatus($"Exported {result.Paths.Count} file(s). {result.Errors.Count} skipped.");
        if (result.Errors.Count > 0)
            await ShowErrorAsync("Some assets were skipped", string.Join("\n", result.Errors.Take(12)));
    }

    private async Task<string?> ChooseExportDirectoryAsync()
    {
        var folders = await StorageProvider.OpenFolderPickerAsync(new FolderPickerOpenOptions
        {
            Title = "Choose RescueTemple export folder",
            AllowMultiple = false,
        });
        return folders.FirstOrDefault()?.Path.LocalPath;
    }

    private void ClearRom()
    {
        _assetWorkspace.DisposeSoundPreview();
        _soundCacheWarmer.Stop();
        _soundStreamHost.Reset();
        _rom = null;
        _catalog = null;
        _charmap = null;
        _scenes = null;
        _project = null;
        _sceneWorkspace = null;
        _selectedAsset = null;
        _selectedCategory = null;
        _explorer.Clear();
        _assetWorkspace.Clear();
        _workspaceHost.Child = CreateWelcomePanel();
        ApplyDockLayout(sceneOwnsInspector: false);
        _breadcrumb.SetPath("RescueTemple");
        Title = "RescueTemple";
        SetStatus("Open a baserom.gba to begin.");
    }

    private void MainWindowOnKeyDown(object? sender, KeyEventArgs e)
    {
        var chord = new KeyChord(
            e.Key.ToString(),
            e.KeyModifiers.HasFlag(KeyModifiers.Control),
            e.KeyModifiers.HasFlag(KeyModifiers.Shift),
            e.KeyModifiers.HasFlag(KeyModifiers.Alt));
        if (!_keymap.TryResolve(chord, out var command))
            return;

        var sceneFocused = _sceneWorkspace is not null &&
            _workspaceHost.Child == _sceneWorkspace &&
            _sceneWorkspace.IsKeyboardFocusWithin;

        if (sceneFocused && _sceneWorkspace!.TryHandleCommand(command))
        {
            e.Handled = true;
            return;
        }

        // Scene-only commands (entity nudge, etc.) stay gated to the focused workspace.
        if (!sceneFocused && IsSceneOnlyCommand(command))
            return;

        if (ExecuteShellCommand(command))
            e.Handled = true;
    }

    private static bool IsSceneOnlyCommand(EditorCommandId command) => command is
        EditorCommandId.DeleteSelection or
        EditorCommandId.ToggleGrid or
        EditorCommandId.SelectTool or
        EditorCommandId.PanTool;

    private bool ExecuteShellCommand(EditorCommandId command)
    {
        switch (command)
        {
            case EditorCommandId.Undo:
                _changes.Undo();
                _sceneWorkspace?.RefreshFromExternal();
                UpdateDirtyTitle();
                return true;
            case EditorCommandId.Redo:
                _changes.Redo();
                _sceneWorkspace?.RefreshFromExternal();
                UpdateDirtyTitle();
                return true;
            case EditorCommandId.Save:
                SaveProjectOnClick(this, new RoutedEventArgs());
                return true;
            case EditorCommandId.ToggleExplorer:
                _dock.Toggle(DockPanelId.Explorer);
                ApplyDockLayout(sceneOwnsInspector: _workspaceHost.Child == _sceneWorkspace);
                return true;
            case EditorCommandId.ToggleInspector:
                _dock.Toggle(DockPanelId.Inspector);
                ApplyDockLayout(sceneOwnsInspector: _workspaceHost.Child == _sceneWorkspace);
                return true;
            default:
                return false;
        }
    }

    private void ApplyDockLayout(bool sceneOwnsInspector)
    {
        var explorerW = _dock.EffectiveWidth(DockPanelId.Explorer);
        var inspectorW = sceneOwnsInspector ? 0 : _dock.EffectiveWidth(DockPanelId.Inspector);
        _contentGrid.ColumnDefinitions[0].Width = new GridLength(explorerW);
        _contentGrid.ColumnDefinitions[4].Width = new GridLength(inspectorW);
        _explorer.IsVisible = explorerW > 0;
        _leftSplitter.IsVisible = explorerW > 0;
        _propertiesHost.IsVisible = inspectorW > 0;
        _rightSplitter.IsVisible = inspectorW > 0;
        Grid.SetColumnSpan(_workspaceHost, sceneOwnsInspector || inspectorW <= 0 ? 3 : 1);
    }

    private static string? FindDefaultRom()
    {
        foreach (var start in new[] { Environment.CurrentDirectory, AppContext.BaseDirectory })
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

    private static Control CreateWelcomePanel() => new StackPanel
    {
        Spacing = EditorTheme.Space3,
        VerticalAlignment = VerticalAlignment.Center,
        HorizontalAlignment = HorizontalAlignment.Center,
        Children =
        {
            new TextBlock
            {
                Text = "RescueTemple",
                FontSize = 22,
                FontWeight = FontWeight.SemiBold,
                FontFamily = EditorTheme.UiFont,
                Foreground = EditorTheme.TextPrimaryBrush,
                HorizontalAlignment = HorizontalAlignment.Center,
            },
            new TextBlock
            {
                Text = "Open a baserom.gba to browse and edit assets.",
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontBody,
                Foreground = EditorTheme.TextMutedBrush,
            },
        },
    };

    private void SetStatus(string text) => _status.Text = text;

    private async Task ShowErrorAsync(string title, string message)
    {
        var dialog = new Window
        {
            Title = title,
            Width = 480,
            Height = 260,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            Icon = AppIcon.Get(),
        };
        var ok = new Button
        {
            Content = "OK",
            HorizontalAlignment = HorizontalAlignment.Right,
            Margin = new Thickness(0, 12, 0, 0),
        };
        ok.Click += (_, _) => dialog.Close();
        dialog.Content = new DockPanel
        {
            Margin = new Thickness(16),
            Children =
            {
                ok,
                new ScrollViewer
                {
                    Content = new TextBlock { Text = message, TextWrapping = TextWrapping.Wrap },
                },
            },
        };
        DockPanel.SetDock(ok, Dock.Bottom);
        await dialog.ShowDialog(this);
    }
}
