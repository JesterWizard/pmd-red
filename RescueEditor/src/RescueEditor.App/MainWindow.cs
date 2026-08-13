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
        ("C Patches", AssetCategory.CPatches),
        ("Dialogue", AssetCategory.Dialogue),
        ("Scripts & Animations", AssetCategory.Scripts),
        ("Portraits", AssetCategory.Portraits),
        ("Backgrounds", AssetCategory.Backgrounds),
        ("Effects", AssetCategory.Effects),
        ("Ground Maps", AssetCategory.GroundMaps),
        ("Dungeons", AssetCategory.Dungeons),
        ("Data Tables", AssetCategory.DataTables),
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
    private readonly GridSplitter _outputSplitter;
    private readonly Border _outputHost;
    private readonly ListBox _outputList;
    private readonly Grid _contentGrid;
    private readonly EditorKeymap _keymap = EditorKeymap.CreateDefault();
    private readonly EditorDockLayout _dock = new();
    private readonly GlobalSearchPalette _searchPalette = new();
    private readonly string _shellSettingsPath;
    private readonly TextBlock _status;
    private readonly StackPanel _propertiesBody;
    private readonly Border _loadingOverlay;
    private readonly TextBlock _loadingStage;
    private readonly TextBlock _loadingElapsed;
    private readonly Grid _root;
    private bool _forceClose;

    private readonly AgbplayStreamHost _soundStreamHost = new();
    private readonly SoundCacheWarmer _soundCacheWarmer = new();
    private readonly ChangeService _changes = new();
    private readonly AssetWorkspacePanel _assetWorkspace;
    private SceneWorkspacePanel? _sceneWorkspace;
    private CPatchesWorkspacePanel? _cPatchesWorkspace;
    private DungeonWorkspacePanel? _dungeonWorkspace;
    private DataTablesWorkspacePanel? _dataTablesWorkspace;
    private ProjectSearchIndex _projectSearch = ProjectSearchIndex.Empty;
    private ScriptNamedDefinitions? _scriptNames;
    private CancellationTokenSource? _searchIndexCts;
    private bool _searchDirty;

    private RomImage? _rom;
    private WorkingRom? _workingRom;
    private AssetCatalog? _catalog;
    private Charmap? _charmap;
    private SceneDatabase? _scenes;
    private ProjectDocument? _project;
    private RuntimeConfigState? _runtimeConfig;
    private RomImage? _cPatchHostRom;
    private WorkingRom? _cPatchWorkingRom;
    private bool _cPatchesUseDecompHost;
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

        _shellSettingsPath = Path.Combine(
            Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData),
            "RescueTemple",
            "shell.json");
        EditorShellSettingsStore.LoadOrDefault(_shellSettingsPath).ApplyTo(_dock);

        _explorer = new ProjectExplorerPanel();
        _explorer.SelectionChanged += ExplorerOnSelectionChanged;

        _breadcrumb = new BreadcrumbBar();
        _workspaceHost = new Border
        {
            Background = EditorTheme.CanvasBgBrush,
            Child = CreateWelcomePanel(),
        };
        _propertiesBody = new StackPanel { Spacing = 0 };
        ShowInspectorEmpty();
        var propsHeader = EditorChrome.PanelHeader("Inspector");
        var propsBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(propsHeader, Dock.Top);
        propsBody.Children.Add(propsHeader);
        propsBody.Children.Add(new ScrollViewer
        {
            Padding = new Thickness(0, 0, 0, EditorTheme.Space3),
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

        _leftSplitter = EditorChrome.ColumnSplitter();
        _rightSplitter = EditorChrome.ColumnSplitter();

        _contentGrid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.ExplorerWidth},3,*,3,{EditorTheme.InspectorWidth}"),
            Children = { _explorer, _leftSplitter, _workspaceHost, _rightSplitter, _propertiesHost },
        };
        Grid.SetColumn(_explorer, 0);
        Grid.SetColumn(_leftSplitter, 1);
        Grid.SetColumn(_workspaceHost, 2);
        Grid.SetColumn(_rightSplitter, 3);
        Grid.SetColumn(_propertiesHost, 4);

        _outputList = new ListBox();
        EditorChrome.StyleList(_outputList);
        _outputList.FontFamily = EditorTheme.MonoFont;
        _outputList.FontSize = EditorTheme.FontMeta;
        var outputHeader = EditorChrome.PanelHeader("Output");
        var outputBody = new DockPanel { LastChildFill = true };
        DockPanel.SetDock(outputHeader, Dock.Top);
        outputBody.Children.Add(outputHeader);
        outputBody.Children.Add(_outputList);
        _outputHost = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 1, 0, 0),
            Child = outputBody,
        };
        _outputSplitter = EditorChrome.RowSplitter();

        var mainBody = new Grid
        {
            RowDefinitions = new RowDefinitions("*,Auto,Auto"),
            Children = { _contentGrid, _outputSplitter, _outputHost },
        };
        Grid.SetRow(_contentGrid, 0);
        Grid.SetRow(_outputSplitter, 1);
        Grid.SetRow(_outputHost, 2);

        var menu = CreateMenu();
        var statusBar = EditorChrome.StatusHost(statusInner);

        _root = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,Auto,*,Auto"),
            Children = { menu, _breadcrumb, mainBody, statusBar },
        };
        Grid.SetRow(menu, 0);
        Grid.SetRow(_breadcrumb, 1);
        Grid.SetRow(mainBody, 2);
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
            Background = new SolidColorBrush(Color.FromArgb(200, 0x1B, 0x1B, 0x1C)),
            Child = new Border
            {
                Width = 320,
                Padding = new Thickness(EditorTheme.Space5),
                HorizontalAlignment = HorizontalAlignment.Center,
                VerticalAlignment = VerticalAlignment.Center,
                Background = EditorTheme.PanelBgBrush,
                BorderBrush = EditorTheme.BorderSubtleBrush,
                BorderThickness = new Thickness(1),
                CornerRadius = new CornerRadius(0),
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
                            Foreground = EditorTheme.TextPrimaryBrush,
                        },
                        _loadingStage,
                        _loadingElapsed,
                        new ProgressBar
                        {
                            IsIndeterminate = true,
                            Height = 2,
                            Margin = new Thickness(0, EditorTheme.Space3, 0, 0),
                        },
                    },
                },
            },
        };

        Content = new Panel { Children = { _root, _loadingOverlay, _searchPalette } };
        _searchPalette.ResultChosen += (_, hit) => OpenSearchHit(hit);
        KeyDown += MainWindowOnKeyDown;
        Closing += OnClosing;
        Opened += OnOpened;
        ApplyDockLayout(sceneOwnsInspector: false);
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
        var saveProject = new MenuItem
        {
            Header = "Save _Project…",
            InputGesture = new KeyGesture(Key.S, KeyModifiers.Control),
        };
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
        close.Click += async (_, _) =>
        {
            if (await ConfirmDiscardIfNeededAsync("Close ROM"))
                ClearRom();
        };
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
        var undo = new MenuItem
        {
            Header = "_Undo",
            InputGesture = new KeyGesture(Key.Z, KeyModifiers.Control),
        };
        undo.Click += (_, _) => { _changes.Undo(); _sceneWorkspace?.RefreshFromExternal(); UpdateDirtyTitle(); };
        var redo = new MenuItem
        {
            Header = "_Redo",
            InputGesture = new KeyGesture(Key.Y, KeyModifiers.Control),
        };
        redo.Click += (_, _) => { _changes.Redo(); _sceneWorkspace?.RefreshFromExternal(); UpdateDirtyTitle(); };
        var find = new MenuItem
        {
            Header = "_Find in Project…",
            InputGesture = new KeyGesture(Key.P, KeyModifiers.Control),
        };
        find.Click += (_, _) => OpenGlobalSearch();
        edit.Items.Add(undo);
        edit.Items.Add(redo);
        edit.Items.Add(new Separator());
        edit.Items.Add(find);
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
        var toggleExplorer = new MenuItem
        {
            Header = "_Explorer",
            InputGesture = new KeyGesture(Key.OemOpenBrackets, KeyModifiers.Control),
        };
        toggleExplorer.Click += (_, _) => ExecuteShellCommand(EditorCommandId.ToggleExplorer);
        var toggleInspector = new MenuItem
        {
            Header = "_Inspector",
            InputGesture = new KeyGesture(Key.OemCloseBrackets, KeyModifiers.Control),
        };
        toggleInspector.Click += (_, _) => ExecuteShellCommand(EditorCommandId.ToggleInspector);
        var toggleOutput = new MenuItem
        {
            Header = "_Output",
            InputGesture = new KeyGesture(Key.U, KeyModifiers.Control | KeyModifiers.Shift),
        };
        toggleOutput.Click += (_, _) => ExecuteShellCommand(EditorCommandId.ToggleOutput);
        view.Items.Add(list);
        view.Items.Add(grid);
        view.Items.Add(new Separator());
        view.Items.Add(toggleExplorer);
        view.Items.Add(toggleInspector);
        view.Items.Add(toggleOutput);
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
        if (!await ConfirmDiscardIfNeededAsync("Open ROM"))
            return;
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
        AppendOutput($"Opening {romName}…");
        BeginLoadingOverlay($"Opening {romName}…");

        var progress = new Progress<string>(stage =>
        {
            void Apply()
            {
                _loadingStage.Text = stage;
                AppendOutput(stage);
            }
            if (!Dispatcher.UIThread.CheckAccess())
            {
                Dispatcher.UIThread.Post(Apply);
                return;
            }
            Apply();
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
            _workingRom = new WorkingRom(result.rom);
            _catalog = result.Catalog;
            _charmap = result.Charmap;
            _scenes = result.Scenes;
            _workingRom.Baseline = SceneClone.Clone(_scenes);
            _cPatchHostRom = null;
            _cPatchWorkingRom = null;
            _cPatchesUseDecompHost = false;
            try
            {
                var binding = CPatchFeaturePayload.Bind(
                    _rom,
                    editorDirectory: AppContext.BaseDirectory);
                _cPatchHostRom = binding.FeatureRom;
                _cPatchesUseDecompHost = binding.UsesPayload;
                _runtimeConfig = binding.Config;
                if (_cPatchesUseDecompHost)
                {
                    _cPatchWorkingRom = new WorkingRom(_cPatchHostRom) { RuntimeConfig = _runtimeConfig };
                    AppendOutput(binding.Status);
                }
                else
                {
                    _workingRom.RuntimeConfig = _runtimeConfig;
                    AppendOutput(binding.Status);
                }
            }
            catch (InvalidOperationException exception)
            {
                _runtimeConfig = RuntimeConfigCodec.TryLoad(_rom);
                _workingRom.RuntimeConfig = _runtimeConfig;
                AppendOutput($"C Patches: {exception.Message}");
            }

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
            KickSearchIndexBuild();
            _selectedCategory = AssetCategory.Scenes;
            _selectedAsset = null;
            ShowScenesPicker();
            _explorer.ExpandCategory(AssetCategory.Scenes);
            UpdateBreadcrumb();
            UpdateDirtyTitle();

            var counts = string.Join("  ", Categories.Select(c =>
                $"{c.Name}:{_catalog.ForCategory(c.Category).Count}"));
            var warning = _catalog.Diagnostics.Count == 0
                ? string.Empty
                : $"  Warnings: {_catalog.Diagnostics.Count}.";
            SetStatus($"{romName}  |  {_rom.Length / 1024 / 1024.0:F2} MiB  |  " +
                      $"{_catalog.Assets.Count:N0} assets in {elapsed.TotalSeconds:0.0}s  |  {counts}{warning}");
            AppendOutput($"Indexed {romName} — {_catalog.Assets.Count:N0} assets in {elapsed.TotalSeconds:0.0}s.");
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
                _selectedAsset = null;
                switch (CategoryWorkspace.Resolve(category.Category))
                {
                    case CategoryWorkspaceKind.CPatches:
                        OpenCPatches();
                        break;
                    case CategoryWorkspaceKind.Dungeons:
                        OpenDungeons();
                        break;
                    case CategoryWorkspaceKind.DataTables:
                        OpenDataTables();
                        break;
                    case CategoryWorkspaceKind.SceneExplorer:
                        ShowScenesPicker();
                        _explorer.ExpandCategory(AssetCategory.Scenes);
                        break;
                    default:
                        _workspaceHost.Child = _assetWorkspace;
                        ApplyDockLayout(sceneOwnsInspector: false);
                        _assetWorkspace.ShowCategory(category.Category, selectFirst: true);
                        break;
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
                else if (assetNode.Asset.Kind == AssetKind.RuntimeConfig ||
                         assetNode.Asset.Category == AssetCategory.CPatches)
                {
                    OpenCPatches(assetNode.Asset);
                }
                else if (assetNode.Asset.Category == AssetCategory.Dungeons)
                {
                    OpenDungeons(assetNode.Asset);
                }
                else if (assetNode.Asset.Category == AssetCategory.DataTables)
                {
                    OpenDataTables(assetNode.Asset);
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
                _selectedCategory = AssetCategory.Scenes;
                if (_workspaceHost.Child != _sceneWorkspace)
                    ShowScenesPicker();
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
                asset.Metadata.TryGetValue("mapId", out var mapText) && int.TryParse(mapText, out var id) ? id : null,
                _workingRom,
                _scriptNames);
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

    private void OnSceneDirty(object? sender, EventArgs e)
    {
        UpdateDirtyTitle();
        _searchDirty = true;
    }

    private void OpenCPatches(AssetDescriptor? asset = null)
    {
        if (_rom is null || _runtimeConfig is null)
            return;

        _selectedCategory = AssetCategory.CPatches;
        _selectedAsset = asset ?? _catalog?.ForCategory(AssetCategory.CPatches).FirstOrDefault();
        var focusField = asset?.Metadata.GetValueOrDefault("fieldId");
        _cPatchesWorkspace ??= new CPatchesWorkspacePanel();
        _cPatchesWorkspace.DirtyChanged -= OnSceneDirty;
        _cPatchesWorkspace.DirtyChanged += OnSceneDirty;
        _cPatchesWorkspace.Load(
            _runtimeConfig,
            _changes,
            _cPatchesUseDecompHost ? _cPatchWorkingRom : _workingRom,
            _scenes,
            _charmap,
            focusField,
            hostMode: _cPatchesUseDecompHost ? "retail + decomp features" : null);
        _workspaceHost.Child = _cPatchesWorkspace;
        ApplyDockLayout(sceneOwnsInspector: false);
        UpdateBreadcrumb();
        UpdateProperties();
        UpdateDirtyTitle();
        SetStatus(_cPatchesUseDecompHost
            ? "C Patches: install options, then Build ROM for a playable patched game"
            : _runtimeConfig.StatusMessage);
    }

    private void OpenDungeons(AssetDescriptor? asset = null)
    {
        if (_rom is null || _catalog is null)
            return;
        _selectedCategory = AssetCategory.Dungeons;
        _selectedAsset = asset ?? _catalog.ForCategory(AssetCategory.Dungeons).FirstOrDefault();
        _dungeonWorkspace ??= new DungeonWorkspacePanel();
        _dungeonWorkspace.Load(_rom, _catalog, _workingRom, _selectedAsset);
        if (asset is not null)
            _dungeonWorkspace.ShowAsset(asset);
        _workspaceHost.Child = _dungeonWorkspace;
        ApplyDockLayout(sceneOwnsInspector: false);
        UpdateBreadcrumb();
        UpdateProperties();
        SetStatus("Dungeons: generated floors are cached after the first preview.");
    }

    private void OpenDataTables(AssetDescriptor? asset = null)
    {
        if (_rom is null || _catalog is null || _charmap is null)
            return;
        _selectedCategory = AssetCategory.DataTables;
        _selectedAsset = asset ?? _catalog.ForCategory(AssetCategory.DataTables).FirstOrDefault();
        _dataTablesWorkspace ??= new DataTablesWorkspacePanel();
        _dataTablesWorkspace.AssetSelected -= OnDataTableSelected;
        _dataTablesWorkspace.AssetSelected += OnDataTableSelected;
        _dataTablesWorkspace.Load(_rom, _charmap, _catalog, _workingRom, _selectedAsset);
        _workspaceHost.Child = _dataTablesWorkspace;
        ApplyDockLayout(sceneOwnsInspector: true);
        UpdateBreadcrumb();
            SetStatus("Data tables: edit stats, learnsets, descriptions, and friend areas. Build ROM to export.");
    }

    private void OnDataTableSelected(object? sender, AssetDescriptor? asset)
    {
        _selectedAsset = asset;
        UpdateBreadcrumb();
    }

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
        _propertiesBody.Children.Clear();
        if (_selectedAsset is null)
        {
            ShowInspectorEmpty();
            return;
        }

        var a = _selectedAsset;
        _propertiesBody.Children.Add(EditorChrome.SectionHeader("Asset"));
        _propertiesBody.Children.Add(InspectorValueRow("Name", a.DisplayName));
        _propertiesBody.Children.Add(InspectorValueRow("Kind", a.Kind.ToString()));
        _propertiesBody.Children.Add(InspectorValueRow("Category", a.Category.ToString()));
        _propertiesBody.Children.Add(InspectorValueRow("Format", a.Format));
        _propertiesBody.Children.Add(InspectorValueRow("Offset", $"0x{a.Offset:X}"));
        _propertiesBody.Children.Add(InspectorValueRow("Size", $"0x{a.Size:X}"));
        if (!string.IsNullOrWhiteSpace(a.Description))
        {
            _propertiesBody.Children.Add(EditorChrome.SectionHeader("Notes"));
            _propertiesBody.Children.Add(new TextBlock
            {
                Text = a.Description,
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, 0),
                TextWrapping = TextWrapping.Wrap,
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                Foreground = EditorTheme.TextMutedBrush,
            });
        }

        if (a.Category == AssetCategory.DataTables && a.Metadata.Count > 0)
        {
            _propertiesBody.Children.Add(EditorChrome.SectionHeader("Fields"));
            foreach (var (key, value) in a.Metadata)
            {
                if (string.IsNullOrWhiteSpace(value) || key is "id" or "table")
                    continue;
                _propertiesBody.Children.Add(InspectorValueRow(key, value));
            }
        }

        AddAssetReferences(a);
    }

    private void AddAssetReferences(AssetDescriptor asset)
    {
        if (_scenes is null || asset.Category == AssetCategory.DataTables)
            return;

        var hits = _scenes.References.FindForAsset(asset);
        _propertiesBody.Children.Add(EditorChrome.SectionHeader(
            hits.Count == 0 ? "References" : $"References ({hits.Count})"));
        if (hits.Count == 0)
        {
            _propertiesBody.Children.Add(new TextBlock
            {
                Text = "No scene scripts reference this asset.",
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space2),
                TextWrapping = TextWrapping.Wrap,
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontMeta,
                Foreground = EditorTheme.TextMutedBrush,
            });
            return;
        }

        foreach (var hit in hits.Take(24))
        {
            var captured = hit;
            var row = new TextBlock
            {
                Text = $"{hit.SceneName} · {hit.LocationLabel}",
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, 0),
                TextWrapping = TextWrapping.Wrap,
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontMeta,
                Foreground = EditorTheme.AccentBrush,
                Cursor = new Cursor(StandardCursorType.Hand),
            };
            ToolTip.SetTip(row, "Open script at this use");
            row.PointerPressed += (_, e) =>
            {
                OpenScriptReference(captured);
                e.Handled = true;
            };
            _propertiesBody.Children.Add(row);
        }

        if (hits.Count > 24)
        {
            _propertiesBody.Children.Add(new TextBlock
            {
                Text = $"…and {hits.Count - 24} more",
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space2),
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontMeta,
                Foreground = EditorTheme.TextMutedBrush,
            });
        }
    }

    private void OpenScriptReference(ScriptAssetHit hit)
    {
        if (_scenes is null || _rom is null || _charmap is null)
            return;
        if (hit.Site == ScriptSiteKind.Function)
        {
            SetStatus($"Function script '{hit.SiteName}' is not attached to a scene source.");
            return;
        }

        var scene = _scenes.FindScene(hit.MapId);
        if (scene is null)
        {
            SetStatus($"No scene for map {hit.MapId}.");
            return;
        }

        var mapText = hit.MapId.ToString();
        var asset = _catalog?.Assets.FirstOrDefault(candidate =>
                        candidate.Kind == AssetKind.Scene &&
                        candidate.Metadata.TryGetValue("mapId", out var id) &&
                        id == mapText)
                    ?? new AssetDescriptor
                    {
                        Id = $"scene:{hit.MapId}",
                        Name = scene.Name,
                        Category = AssetCategory.Scenes,
                        Kind = AssetKind.Scene,
                        Metadata = new Dictionary<string, string> { ["mapId"] = mapText },
                    };

        OpenScene(scene, asset);
        _sceneWorkspace?.OpenScriptAt(hit);
    }

    private void KickSearchIndexBuild()
    {
        _searchIndexCts?.Cancel();
        _searchIndexCts = new CancellationTokenSource();
        var token = _searchIndexCts.Token;
        var catalog = _catalog;
        var scenes = _scenes;
        var romPath = _rom?.Path;
        if (catalog is null || scenes is null || string.IsNullOrWhiteSpace(romPath))
        {
            _projectSearch = ProjectSearchIndex.Empty;
            return;
        }

        _ = Task.Run(() =>
        {
            var names = ScriptNamedDefinitions.TryLoadBestEffort(CatalogBuilder.FindRepositoryRoot(romPath));
            if (token.IsCancellationRequested)
                return;
            var index = ProjectSearchIndex.Build(catalog.Assets, scenes, names);
            if (token.IsCancellationRequested)
                return;
            Dispatcher.UIThread.Post(() =>
            {
                if (token.IsCancellationRequested)
                    return;
                _scriptNames = names;
                _projectSearch = index;
                _searchDirty = false;
                _sceneWorkspace?.SetScriptNames(names);
                _searchPalette.UpdateIndex(index);
            });
        }, token);
    }

    private void OpenGlobalSearch()
    {
        if (_rom is null || _catalog is null)
        {
            SetStatus("Open a ROM to search dialogue and scripts.");
            return;
        }

        if (_searchDirty || _projectSearch.DocumentCount == 0)
            KickSearchIndexBuild();
        _searchPalette.Show(_projectSearch);
    }

    private void OpenSearchHit(ProjectSearchHit hit)
    {
        if (hit.Script is { } scriptHit)
        {
            OpenScriptReference(scriptHit);
            var label = hit.Kind == ProjectSearchKind.Dialogue ? "Dialogue" : "Script";
            SetStatus($"{label}  ·  {scriptHit.SceneName}  ·  {scriptHit.LocationLabel}");
            return;
        }

        var asset = _catalog?.Assets.FirstOrDefault(candidate =>
                        candidate.Kind == AssetKind.Dialogue &&
                        (candidate.Id == hit.AssetId || candidate.Offset == hit.DialogueOffset));
        if (asset is null)
        {
            SetStatus(hit.DialogueOffset >= 0
                ? $"Dialogue 0x{hit.DialogueOffset:X} is not in the dialogue catalog."
                : "Could not open search result.");
            return;
        }

        _selectedCategory = AssetCategory.Dialogue;
        _selectedAsset = asset;
        _explorer.ExpandCategory(AssetCategory.Dialogue);
        _workspaceHost.Child = _assetWorkspace;
        ApplyDockLayout(sceneOwnsInspector: false);
        _assetWorkspace.ShowCategory(AssetCategory.Dialogue, selectFirst: false);
        _ = _assetWorkspace.RevealAssetAsync(asset);
        UpdateBreadcrumb();
        UpdateProperties();
        SetStatus($"Dialogue  ·  {asset.DisplayName}");
    }

    private void ShowInspectorEmpty()
    {
        _propertiesBody.Children.Clear();
        _propertiesBody.Children.Add(new TextBlock
        {
            Text = "Select an asset to inspect its properties.",
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space3),
            TextWrapping = TextWrapping.Wrap,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontBody,
            Foreground = EditorTheme.TextMutedBrush,
        });
    }

    private static Control InspectorValueRow(string label, string value)
    {
        var valueBox = new TextBlock
        {
            Text = value,
            FontFamily = EditorTheme.MonoFont,
            FontSize = EditorTheme.FontLabel,
            Foreground = EditorTheme.TextPrimaryBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };
        return EditorChrome.PropertyRow(label, valueBox);
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
        if (!await ConfirmDiscardIfNeededAsync("Open Project"))
            return;
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
        if (_scenes is null)
            return;
        ProjectEditApplier.Apply(project, _scenes);
    }

    private async void BuildRomOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _scenes is null || _project is null)
        {
            await ShowErrorAsync("Build ROM", "Open a ROM and project first.");
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
            var report = RomBuilder.Build(
                _rom, _scenes, _project, file.Path.LocalPath, _charmap, _runtimeConfig, _cPatchHostRom,
                workingImage: _workingRom?.View);
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
        _workingRom = null;
        _catalog = null;
        _charmap = null;
        _scenes = null;
        _project = null;
        _runtimeConfig = null;
        _cPatchHostRom = null;
        _cPatchWorkingRom = null;
        _cPatchesUseDecompHost = false;
        _sceneWorkspace = null;
        _cPatchesWorkspace = null;
        _dungeonWorkspace = null;
        _projectSearch = ProjectSearchIndex.Empty;
        _scriptNames = null;
        _searchIndexCts?.Cancel();
        _searchIndexCts = null;
        _searchPalette.Dismiss();
        _selectedAsset = null;
        _selectedCategory = null;
        _explorer.Clear();
        _assetWorkspace.Clear();
        _workspaceHost.Child = CreateWelcomePanel();
        ApplyDockLayout(sceneOwnsInspector: false);
        _breadcrumb.SetPath("RescueTemple");
        Title = "RescueTemple";
        SetStatus("Open a baserom.gba to begin.");
        AppendOutput("ROM closed.");
    }

    private void MainWindowOnKeyDown(object? sender, KeyEventArgs e)
    {
        var sceneFocused = _sceneWorkspace is not null &&
            _workspaceHost.Child == _sceneWorkspace &&
            _sceneWorkspace.IsKeyboardFocusWithin;
        var focus = EditorShellFocus.Resolve(this, sceneFocused);
        var chord = new KeyChord(
            e.Key.ToString(),
            e.KeyModifiers.HasFlag(KeyModifiers.Control),
            e.KeyModifiers.HasFlag(KeyModifiers.Shift),
            e.KeyModifiers.HasFlag(KeyModifiers.Alt));
        if (!EditorCommandRouter.TryResolve(_keymap, chord, focus, out var command))
            return;

        if (sceneFocused && _sceneWorkspace!.TryHandleCommand(command))
        {
            e.Handled = true;
            return;
        }

        if (ExecuteShellCommand(command))
            e.Handled = true;
    }

    private bool ExecuteShellCommand(EditorCommandId command)
    {
        switch (command)
        {
            case EditorCommandId.Undo:
                _changes.Undo();
                _sceneWorkspace?.RefreshFromExternal();
                _cPatchesWorkspace?.RefreshFromExternal();
                if (_cPatchesUseDecompHost && _cPatchWorkingRom is not null && _scenes is not null)
                    _cPatchWorkingRom.Sync(_scenes, _charmap, _runtimeConfig);
                else if (_workingRom is not null && _scenes is not null)
                    _workingRom.Sync(_scenes, _charmap, _runtimeConfig);
                UpdateDirtyTitle();
                return true;
            case EditorCommandId.Redo:
                _changes.Redo();
                _sceneWorkspace?.RefreshFromExternal();
                _cPatchesWorkspace?.RefreshFromExternal();
                if (_cPatchesUseDecompHost && _cPatchWorkingRom is not null && _scenes is not null)
                    _cPatchWorkingRom.Sync(_scenes, _charmap, _runtimeConfig);
                else if (_workingRom is not null && _scenes is not null)
                    _workingRom.Sync(_scenes, _charmap, _runtimeConfig);
                UpdateDirtyTitle();
                return true;
            case EditorCommandId.Save:
                SaveProjectOnClick(this, new RoutedEventArgs());
                return true;
            case EditorCommandId.ToggleExplorer:
                _dock.Toggle(DockPanelId.Explorer);
                ApplyDockLayout(sceneOwnsInspector: OwnsInspector());
                PersistShellSettings();
                return true;
            case EditorCommandId.ToggleInspector:
                _dock.Toggle(DockPanelId.Inspector);
                ApplyDockLayout(sceneOwnsInspector: OwnsInspector());
                PersistShellSettings();
                return true;
            case EditorCommandId.ToggleOutput:
                _dock.Toggle(DockPanelId.Output);
                ApplyDockLayout(sceneOwnsInspector: OwnsInspector());
                PersistShellSettings();
                return true;
            case EditorCommandId.GlobalSearch:
                OpenGlobalSearch();
                return true;
            default:
                return false;
        }
    }

    private bool OwnsInspector() =>
        _workspaceHost.Child == _sceneWorkspace || _workspaceHost.Child == _dataTablesWorkspace;

    private void ApplyDockLayout(bool sceneOwnsInspector)
    {
        var explorerW = _dock.EffectiveWidth(DockPanelId.Explorer);
        var inspectorW = sceneOwnsInspector ? 0 : _dock.EffectiveWidth(DockPanelId.Inspector);
        var outputH = _dock.EffectiveWidth(DockPanelId.Output);
        _contentGrid.ColumnDefinitions[0].Width = new GridLength(explorerW);
        _contentGrid.ColumnDefinitions[4].Width = new GridLength(inspectorW);
        _explorer.IsVisible = explorerW > 0;
        _leftSplitter.IsVisible = explorerW > 0;
        _propertiesHost.IsVisible = inspectorW > 0;
        _rightSplitter.IsVisible = inspectorW > 0;
        Grid.SetColumnSpan(_workspaceHost, sceneOwnsInspector || inspectorW <= 0 ? 3 : 1);

        var showOutput = outputH > 0;
        _outputHost.IsVisible = showOutput;
        _outputSplitter.IsVisible = showOutput;
        _outputHost.Height = showOutput ? outputH : 0;
        _outputHost.MinHeight = showOutput ? EditorDockLayout.MinOutputHeight : 0;
    }

    private void SyncDockFromUi()
    {
        var explorerCol = _contentGrid.ColumnDefinitions[0].Width;
        if (_dock.ExplorerVisible && explorerCol.IsAbsolute && explorerCol.Value >= EditorDockLayout.MinSideWidth)
            _dock.SetWidth(DockPanelId.Explorer, explorerCol.Value);

        var inspectorCol = _contentGrid.ColumnDefinitions[4].Width;
        if (_dock.InspectorVisible && inspectorCol.IsAbsolute && inspectorCol.Value >= EditorDockLayout.MinSideWidth)
            _dock.SetWidth(DockPanelId.Inspector, inspectorCol.Value);

        if (_dock.OutputVisible && _outputHost.Height >= EditorDockLayout.MinOutputHeight)
            _dock.SetWidth(DockPanelId.Output, _outputHost.Height);
    }

    private void PersistShellSettings()
    {
        try
        {
            SyncDockFromUi();
            EditorShellSettingsStore.Save(_shellSettingsPath, EditorShellSettings.FromDock(_dock));
        }
        catch (IOException)
        {
        }
        catch (UnauthorizedAccessException)
        {
        }
    }

    private async void OnClosing(object? sender, WindowClosingEventArgs e)
    {
        PersistShellSettings();
        if (_forceClose)
            return;
        if (!UnsavedChangesGate.RequiresConfirmation(_project?.IsDirty == true, _changes.IsDirty))
            return;

        e.Cancel = true;
        if (await ConfirmDiscardIfNeededAsync("Exit"))
        {
            _forceClose = true;
            Close();
        }
    }

    private async Task<bool> ConfirmDiscardIfNeededAsync(string action)
    {
        if (!UnsavedChangesGate.RequiresConfirmation(_project?.IsDirty == true, _changes.IsDirty))
            return true;

        var dialog = new Window
        {
            Title = "Unsaved changes",
            Width = 420,
            Height = 150,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            Icon = AppIcon.Get(),
        };
        EditorChrome.StyleDialogWindow(dialog);
        var discard = false;
        var message = EditorChrome.MutedBody($"You have unsaved changes. {action} anyway?");
        var cancel = EditorChrome.ToolButton("Cancel");
        cancel.Click += (_, _) => dialog.Close();
        var confirm = EditorChrome.ToolButton(action, primary: true);
        confirm.Click += (_, _) =>
        {
            discard = true;
            dialog.Close();
        };
        var buttons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            HorizontalAlignment = HorizontalAlignment.Right,
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(0, EditorTheme.Space4, 0, 0),
            Children = { cancel, confirm },
        };
        dialog.Content = new DockPanel
        {
            Margin = new Thickness(EditorTheme.Space5),
            LastChildFill = true,
            Children = { buttons, message },
        };
        DockPanel.SetDock(buttons, Dock.Bottom);
        await dialog.ShowDialog(this);
        return discard;
    }

    private void AppendOutput(string line)
    {
        _outputList.Items.Add(line);
        while (_outputList.ItemCount > 500)
            _outputList.Items.RemoveAt(0);
        if (_outputList.ItemCount > 0)
            _outputList.ScrollIntoView(_outputList.ItemCount - 1);
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

    private void ShowScenesPicker()
    {
        _workspaceHost.Child = CreateScenesPickerPanel();
        ApplyDockLayout(sceneOwnsInspector: false);
        ShowInspectorEmpty();
    }

    private static Control CreateScenesPickerPanel() => new StackPanel
    {
        Spacing = EditorTheme.Space3,
        VerticalAlignment = VerticalAlignment.Center,
        HorizontalAlignment = HorizontalAlignment.Center,
        Children =
        {
            EditorChrome.PaneTitle("Scenes"),
            EditorChrome.MutedBody("Open a scene from the Project panel (Scenes → Story / Friend Areas / Post Game)."),
        },
    };

    private Control CreateWelcomePanel()
    {
        var open = EditorChrome.ToolButton("Open ROM…", primary: true);
        open.MinWidth = 108;
        open.Click += OpenButtonOnClick;
        return new StackPanel
        {
            Spacing = EditorTheme.Space3,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Center,
            Children =
            {
                EditorChrome.PaneTitle("No ROM loaded"),
                EditorChrome.MutedBody("Open baserom.gba to browse scenes, dialogue, and assets."),
                open,
            },
        };
    }

    private void SetStatus(string text) => _status.Text = text;

    private async Task ShowErrorAsync(string title, string message)
    {
        var dialog = new Window
        {
            Title = title,
            Width = 480,
            Height = 240,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            Icon = AppIcon.Get(),
        };
        EditorChrome.StyleDialogWindow(dialog);
        var ok = EditorChrome.ToolButton("OK", primary: true);
        ok.HorizontalAlignment = HorizontalAlignment.Right;
        ok.Click += (_, _) => dialog.Close();
        dialog.Content = new DockPanel
        {
            Margin = new Thickness(EditorTheme.Space5),
            LastChildFill = true,
            Children =
            {
                ok,
                new ScrollViewer
                {
                    Content = EditorChrome.MutedBody(message),
                },
            },
        };
        DockPanel.SetDock(ok, Dock.Bottom);
        await dialog.ShowDialog(this);
    }
}
