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

    // Changes whenever the App or Core assembly is rebuilt; lets the restore prompt tell an app update from a crash.
    private static readonly string AppBuildId =
        $"{typeof(MainWindow).Assembly.ManifestModule.ModuleVersionId:N}+{typeof(ProjectAutosave).Assembly.ManifestModule.ModuleVersionId:N}";

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
    private readonly IEditorFileSystem _files = OsEditorFileSystem.Instance;
    private readonly string _sessionSettingsPath;
    private EditorSessionSettings _session;
    private System.Diagnostics.Process? _emulatorProcess;
    private readonly MenuItem _recentRomsMenu = new() { Header = "Recent _ROMs" };
    private readonly MenuItem _recentProjectsMenu = new() { Header = "Recent _Projects" };
    private readonly MenuItem _modsMenu = new() { Header = "_Mods" };
    private readonly DispatcherTimer _autosaveTimer;
    private DateTimeOffset? _lastExplicitSaveAt;
    private int _savedUserEditVersion;
    private readonly StackPanel _propertiesBody;
    private readonly Border _loadingOverlay;
    private readonly TextBlock _loadingStage;
    private readonly TextBlock _loadingElapsed;
    private readonly Grid _root;
    private bool _forceClose;

    private readonly AgbplayStreamHost _soundStreamHost = new();
    private readonly SoundCacheWarmer _soundCacheWarmer = new();
    private readonly ChangeService _changes = new();
    private readonly List<RomByteChange> _pendingRomChanges = new();
    private bool _romFlushQueued;
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
    private IReadOnlyDictionary<string, byte>? _modRuntimeBaseline;
    private List<string> _loadedModNames = new();
    private RomImage? _cPatchHostRom;
    private WorkingRom? _cPatchWorkingRom;
    private bool _cPatchesUseDecompHost;
    // RuntimeConfig ROM location when the ROM was last indexed; a C Patch install that moves it forces a full reopen.
    private (int Offset, int Capacity)? _runtimeConfigOpenLayout;
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

        _shellSettingsPath = RescueTemplePaths.ShellSettingsPath;
        _sessionSettingsPath = RescueTemplePaths.SessionSettingsPath;
        _session = EditorSessionSettingsStore.LoadOrDefault(_files, _sessionSettingsPath);
        EditorShellSettingsStore.LoadOrDefault(_shellSettingsPath).ApplyTo(_dock);

        _explorer = new ProjectExplorerPanel();
        _explorer.SelectionChanged += ExplorerOnSelectionChanged;

        _breadcrumb = new BreadcrumbBar();
        _breadcrumb.ModsBadgeClicked += async (_, _) => await OpenModManagerAsync();
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
        _assetWorkspace.DirtyChanged += OnSceneDirty;
        _assetWorkspace.CatalogChanged += (_, _) =>
        {
            if (_catalog is not null)
                _explorer.Build(_catalog, _scenes, Categories);
        };
        _changes.Changed += OnChangesChanged;

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

        _root = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,Auto,*"),
            Children = { menu, _breadcrumb, mainBody },
        };
        Grid.SetRow(menu, 0);
        Grid.SetRow(_breadcrumb, 1);
        Grid.SetRow(mainBody, 2);

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
            Background = new SolidColorBrush(Color.FromArgb(200, 0x1E, 0x1F, 0x22)),
            Child = new Border
            {
                Width = 320,
                Padding = new Thickness(EditorTheme.Space5),
                HorizontalAlignment = HorizontalAlignment.Center,
                VerticalAlignment = VerticalAlignment.Center,
                Background = EditorTheme.PanelBgBrush,
                BorderBrush = EditorTheme.BorderSubtleBrush,
                BorderThickness = new Thickness(1),
                CornerRadius = EditorTheme.OverlayRadius,
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
        DragDrop.SetAllowDrop(this, true);
        DragDrop.AddDragOverHandler(this, OnDragOver);
        DragDrop.AddDropHandler(this, OnDrop);
        _searchPalette.ResultChosen += (_, hit) => OpenSearchHit(hit);
        KeyDown += MainWindowOnKeyDown;
        Closing += OnClosing;
        Opened += OnOpened;
        ApplyDockLayout(sceneOwnsInspector: false);
        RebuildRecentMenus();
        _autosaveTimer = new DispatcherTimer { Interval = TimeSpan.FromMinutes(2) };
        _autosaveTimer.Tick += (_, _) => TryAutosave();
        _autosaveTimer.Start();
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
            Header = "_Save Project",
            InputGesture = new KeyGesture(Key.S, KeyModifiers.Control),
        };
        saveProject.Click += SaveProjectOnClick;
        var saveProjectAs = new MenuItem
        {
            Header = "Save Project _As…",
            InputGesture = new KeyGesture(Key.S, KeyModifiers.Control | KeyModifiers.Shift),
        };
        saveProjectAs.Click += async (_, _) => await SaveProjectAsync(choosePath: true);
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
        file.Items.Add(_recentRomsMenu);
        file.Items.Add(new Separator());
        file.Items.Add(openProject);
        file.Items.Add(_recentProjectsMenu);
        file.Items.Add(saveProject);
        file.Items.Add(saveProjectAs);
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
        undo.Click += (_, _) => ExecuteShellCommand(EditorCommandId.Undo);
        var redo = new MenuItem
        {
            Header = "_Redo",
            InputGesture = new KeyGesture(Key.Y, KeyModifiers.Control),
        };
        redo.Click += (_, _) => ExecuteShellCommand(EditorCommandId.Redo);
        edit.SubmenuOpened += (_, _) =>
        {
            var undoText = _changes.UndoDescription?.Replace("_", "__");
            var redoText = _changes.RedoDescription?.Replace("_", "__");
            undo.Header = undoText is null ? "_Undo" : $"_Undo {undoText}";
            redo.Header = redoText is null ? "_Redo" : $"_Redo {redoText}";
            undo.IsEnabled = _changes.CanUndo;
            redo.IsEnabled = _changes.CanRedo;
        };
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
        menu.Items.Add(_modsMenu);
        RebuildModsMenu();

        var playScene = new MenuItem { Header = "Play _Scene" };
        playScene.Click += async (_, _) =>
        {
            if (_sceneWorkspace is not null && _workspaceHost.Child == _sceneWorkspace)
                await _sceneWorkspace.OpenScenePlayAsync();
            else
                SetStatus("Open a scene first to use Scene Play.");
        };

        var emulatorMenu = new MenuItem { Header = "_Play" };
        var playBuild = new MenuItem
        {
            Header = "Play Last _Build",
            InputGesture = new KeyGesture(Key.F5),
        };
        playBuild.Click += async (_, _) => await PlayInEmulatorAsync();
        var setEmulator = new MenuItem { Header = "Set E_mulator…" };
        setEmulator.Click += async (_, _) => await SetEmulatorAsync();
        var autoDetectEmulator = new MenuItem { Header = "Use _Auto-Detected mGBA" };
        autoDetectEmulator.Click += (_, _) =>
        {
            _session.EmulatorPath = null;
            PersistSession();
            SetStatus("Emulator: auto-detect mGBA.");
        };
        var restartAfterBuild = new MenuItem
        {
            Header = "_Restart After Build",
            ToggleType = MenuItemToggleType.CheckBox,
            IsChecked = _session.RestartEmulatorAfterBuild,
        };
        restartAfterBuild.Click += (_, _) =>
        {
            _session.RestartEmulatorAfterBuild = !_session.RestartEmulatorAfterBuild;
            restartAfterBuild.IsChecked = _session.RestartEmulatorAfterBuild;
            PersistSession();
        };
        emulatorMenu.Items.Add(playScene);
        emulatorMenu.Items.Add(playBuild);
        emulatorMenu.Items.Add(new Separator());
        emulatorMenu.Items.Add(setEmulator);
        emulatorMenu.Items.Add(autoDetectEmulator);
        emulatorMenu.Items.Add(restartAfterBuild);
        menu.Items.Add(emulatorMenu);

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

        var tools = new MenuItem { Header = "_Tools" };
        var wonderMail = new MenuItem { Header = "_Wonder Mail…" };
        wonderMail.Click += (_, _) =>
        {
            var window = new WonderMailWindow();
            window.Show(this);
        };
        var resync = new MenuItem { Header = "Resync from _decomp" };
        resync.Click += (_, _) => ResyncNamedConstantsFromDecomp();
        tools.Items.Add(wonderMail);
        tools.Items.Add(resync);
        menu.Items.Add(tools);
        return menu;
    }

    private async void OnOpened(object? sender, EventArgs e)
    {
        Opened -= OnOpened;
        FitToWorkingArea();
        await Dispatcher.UIThread.InvokeAsync(() => { }, DispatcherPriority.Background);
        FitToWorkingArea();
        Activate();
        await RestoreDocumentSessionAsync();
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
            var bindTask = Task.Run(() =>
            {
                try
                {
                    return (Binding: (CPatchBinding?)CPatchFeaturePayload.Bind(rom, editorDirectory: AppContext.BaseDirectory), Error: (string?)null);
                }
                catch (InvalidOperationException exception)
                {
                    return (Binding: (CPatchBinding?)null, Error: (string?)exception.Message);
                }
            });
            var built = CatalogBuilder.Build(
                rom,
                charmapPathOverride: Path.Combine(AppContext.BaseDirectory, "charmap.txt"),
                progress: progressSink);
            var bind = bindTask.GetAwaiter().GetResult();
            return (rom, built.Catalog, built.Charmap, built.Scenes, bind.Binding, bind.Error);
        });

        try
        {
            var result = await loadTask;
            var elapsed = _loadStopwatch.Elapsed;
            EndLoadingOverlay();

            _rom = result.rom;
            CreateWorkingRom(result.rom, result.Scenes.Profile, result.Charmap);
            _catalog = result.Catalog;
            _charmap = result.Charmap;
            _scenes = result.Scenes;
            _cPatchHostRom = null;
            _cPatchWorkingRom = null;
            _cPatchesUseDecompHost = false;
            if (result.Binding is { } binding)
            {
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
                    _workingRom!.RuntimeConfig = _runtimeConfig;
                    AppendOutput(binding.Status);
                }
            }
            else
            {
                _runtimeConfig = RuntimeConfigCodec.TryLoad(_rom);
                _workingRom!.RuntimeConfig = _runtimeConfig;
                AppendOutput($"C Patches: {result.Error}");
            }
            _runtimeConfigOpenLayout = _runtimeConfig is null ? null : (_runtimeConfig.RomOffset, _runtimeConfig.RomCapacity);

            _project = ProjectDocument.Create(_rom, _scenes.Profile);
            _changes.Attach(_project, _scenes);
            RebuildModsMenu();

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

            _assetWorkspace.Bind(_rom, _charmap, _catalog, _scenes, _changes, _workingRom);
            _explorer.Build(_catalog, _scenes, Categories);
            KickSearchIndexBuild(useDiskCache: true);
            var restoreExplorer = string.Equals(path, _session.LastRomPath, StringComparison.OrdinalIgnoreCase);
            if (!(restoreExplorer && RestoreExplorerFromSession()))
            {
                _selectedCategory = AssetCategory.Scenes;
                _selectedAsset = null;
                ShowScenesPicker();
                _explorer.ExpandCategory(AssetCategory.Scenes);
            }
            RememberRom(path);
            PersistSession();
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

    /// <summary>Creates a fresh working ROM for <paramref name="rom"/> and wires its events. C Patch wiring stays with the caller.</summary>
    private void CreateWorkingRom(RomImage rom, RomProfile? profile, Charmap charmap)
    {
        _workingRom = new WorkingRom(rom);
        _savedUserEditVersion = 0;
        _pendingRomChanges.Clear();
        // A plain Open ROM has no mods; ComposeProjectOntoRom sets these again when a project is applied.
        _modRuntimeBaseline = null;
        _loadedModNames = new();
        _workingRom.UserEdited += (_, _) => Dispatcher.UIThread.Post(UpdateDirtyTitle);
        _workingRom.UserBytesChanged += OnUserBytesChanged;
        _workingRom.BaselineFactory = () => SceneGraphParser.Parse(rom, profile, catalog: null, charmap: charmap);
    }

    /// <summary>Rebuilds scenes and the working ROM from the already-indexed baserom (no re-index). False when it cannot be used.</summary>
    private async Task<bool> TryQuickResetAsync()
    {
        if (_rom is null || _catalog is null || _charmap is null || _scenes is null)
            return false;
        if (_runtimeConfig is not null &&
            _runtimeConfigOpenLayout != (_runtimeConfig.RomOffset, _runtimeConfig.RomCapacity))
            return false;
        if (_isLoading)
            return false;
        var rom = _rom;
        var catalog = _catalog;
        var charmap = _charmap;
        var profile = _scenes.Profile;
        _isLoading = true;
        BeginLoadingOverlay("Applying mods…");
        try
        {
            var scenes = await Task.Run(() => SceneGraphParser.Parse(rom, profile, catalog, charmap, progress: null, parallel: true));
            _scenes = scenes;
            _runtimeConfig?.RestoreSourceSnapshot();
            CreateWorkingRom(rom, profile, charmap);
            if (_cPatchesUseDecompHost && _cPatchHostRom is not null)
                _cPatchWorkingRom = new WorkingRom(_cPatchHostRom) { RuntimeConfig = _runtimeConfig };
            else
                _workingRom!.RuntimeConfig = _runtimeConfig;
            _assetWorkspace.Bind(rom, charmap, catalog, _scenes, _changes, _workingRom);
            _explorer.Build(catalog, _scenes, Categories);
            return true;
        }
        catch (Exception exception) when (exception is not OutOfMemoryException)
        {
            AppendOutput($"Quick mod reload failed ({exception.Message}); re-indexing the ROM instead.");
            return false;
        }
        finally
        {
            _isLoading = false;
            EndLoadingOverlay();
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

        CaptureExplorerToSession();
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
            if (_sceneWorkspace is null)
            {
                _sceneWorkspace = new SceneWorkspacePanel();
                _sceneWorkspace.ScriptEditorKind = ScriptEditorKindCodec.Parse(_session.ScriptEditorKind);
            }
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

    private void ResyncNamedConstantsFromDecomp()
    {
        var preferred = _rom is not null ? CatalogBuilder.FindRepositoryRoot(_rom.Path) : null;
        var root = NamedConstantResync.TryFindRepositoryRoot(preferred);
        if (root is null)
        {
            AppendOutput("Resync failed: could not find decomp headers (include/constants).");
            ShowOutput();
            return;
        }

        var result = NamedConstantResync.Run(root, previous: _scriptNames);
        if (!result.Ok)
        {
            AppendOutput(result.Summary);
            ShowOutput();
            return;
        }

        if (result.Names is not null)
        {
            _scriptNames = result.Names;
            _sceneWorkspace?.SetScriptNames(result.Names);
        }

        AppendOutput(result.Summary);
        var shown = 0;
        foreach (var delta in result.Deltas)
        {
            if (shown >= 40)
            {
                AppendOutput($"… {result.Deltas.Count - shown} more catalog change(s).");
                break;
            }

            AppendOutput(FormatDelta(delta));
            shown++;
        }

        ShowOutput();
        KickSearchIndexBuild();
    }

    private void ShowOutput()
    {
        if (_dock.OutputVisible)
            return;
        _dock.SetVisible(DockPanelId.Output, true);
        ApplyDockLayout(sceneOwnsInspector: OwnsInspector());
        PersistShellSettings();
    }

    private static string FormatDelta(NamedCatalogDelta delta)
    {
        var id = delta.Id.ToString(System.Globalization.CultureInfo.InvariantCulture);
        return delta.Kind switch
        {
            NamedCatalogDeltaKind.Renamed =>
                $"{delta.Catalog}: {delta.EditorName} → {delta.HeaderName} ({id})",
            NamedCatalogDeltaKind.Added =>
                $"{delta.Catalog}: added {delta.HeaderName} ({id})",
            NamedCatalogDeltaKind.Removed =>
                $"{delta.Catalog}: removed {delta.EditorName} ({id})",
            NamedCatalogDeltaKind.ValueChanged =>
                $"{delta.Catalog}: {delta.HeaderName} now {id}",
            _ => $"{delta.Catalog}: {delta.Kind}",
        };
    }

    private void KickSearchIndexBuild(bool useDiskCache = false)
    {
        _searchIndexCts?.Cancel();
        _searchIndexCts = new CancellationTokenSource();
        var token = _searchIndexCts.Token;
        var catalog = _catalog;
        var scenes = _scenes;
        var romPath = _rom?.Path;
        var romSha1 = _rom?.Sha1;
        if (catalog is null || scenes is null || string.IsNullOrWhiteSpace(romPath))
        {
            _projectSearch = ProjectSearchIndex.Empty;
            return;
        }

        var existingNames = _scriptNames;
        _ = Task.Run(() =>
        {
            var names = existingNames ?? ScriptNamedDefinitions.TryLoadBestEffort(CatalogBuilder.FindRepositoryRoot(romPath));
            if (token.IsCancellationRequested)
                return;
            ProjectSearchIndex? index = null;
            string? cachePath = null;
            string? cacheKey = null;
            // Only the post-load build may use the disk cache: it indexes the unedited ROM, keyed by SHA-1 + editor build + names.
            if (useDiskCache && !string.IsNullOrEmpty(romSha1))
            {
                cacheKey = ProjectSearchIndex.CacheKey(romSha1, names);
                cachePath = Path.Combine(RescueTemplePaths.GetAppDataDirectory(), "cache", $"search-{romSha1}.rtsi");
                try
                {
                    if (File.Exists(cachePath))
                    {
                        using var input = new BufferedStream(File.OpenRead(cachePath), 1 << 20);
                        index = ProjectSearchIndex.TryLoad(input, cacheKey);
                    }
                }
                catch (IOException) { }
                catch (UnauthorizedAccessException) { }
            }

            var fromCache = index is not null;
            index ??= ProjectSearchIndex.Build(catalog.Assets, scenes, names);
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

            if (token.IsCancellationRequested)
                return;
            if (!fromCache && cachePath is not null && cacheKey is not null)
            {
                try
                {
                    Directory.CreateDirectory(Path.GetDirectoryName(cachePath)!);
                    var tempPath = cachePath + ".tmp";
                    using (var output = new BufferedStream(File.Create(tempPath), 1 << 20))
                        index.Save(output, cacheKey);
                    File.Move(tempPath, cachePath, overwrite: true);
                }
                catch (IOException) { }
                catch (UnauthorizedAccessException) { }
            }
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
        var dirty = _project?.IsDirty == true || _changes.IsDirty || HasUnsavedRomEdits;
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

    private async void SaveProjectOnClick(object? sender, RoutedEventArgs e) => await SaveProjectAsync(choosePath: false);

    private async Task SaveProjectAsync(bool choosePath)
    {
        if (_project is null)
        {
            await ShowErrorAsync("Save Project", "Open a ROM before saving a project.");
            return;
        }
        CaptureRomPatches();
        if (_workingRom?.HasStructuralEdits == true)
        {
            AppendOutput("Note: an edit resized ROM data (sound or data-table insert). Resized data and direct ROM edits made after it are not stored in the project. Use Build ROM to keep them.");
            ShowOutput();
        }
        if (choosePath || string.IsNullOrWhiteSpace(_project.Path))
        {
            var file = await StorageProvider.SaveFilePickerAsync(new FilePickerSaveOptions
            {
                Title = "Save RescueTemple Project",
                SuggestedFileName = _project.Name + ".rtproj",
                FileTypeChoices =
                [
                    new FilePickerFileType("RescueTemple Project") { Patterns = ["*.rtproj", "*.rescue", "*.json"] },
                ],
            });
            if (file is null) return;
            try
            {
                _project.Save(file.Path.LocalPath);
            }
            catch (Exception exception)
            {
                await ShowErrorAsync("Save Project failed", exception.Message);
                return;
            }
        }
        else
        {
            try
            {
                _project.Save();
            }
            catch (Exception exception)
            {
                await ShowErrorAsync("Save Project failed", exception.Message);
                return;
            }
        }

        _lastExplicitSaveAt = DateTimeOffset.UtcNow;
        _savedUserEditVersion = _workingRom?.UserEditVersion ?? 0;
        _changes.MarkSaved();
        RememberProject(_project.Path!);
        PersistSession();
        TryAutosave(force: true);
        UpdateDirtyTitle();
        SetStatus($"Saved project {_project.Path}");
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
                new FilePickerFileType("RescueTemple Project") { Patterns = ["*.rtproj", "*.rescue", "*.json"] },
                FilePickerFileTypes.All,
            ],
        });
        var file = files.FirstOrDefault();
        if (file is null) return;
        await OpenProjectFromPathAsync(file.Path.LocalPath, restoreExplorer: false);
    }

    private async Task OpenProjectFromPathAsync(string path, bool restoreExplorer)
    {
        try
        {
            var project = ProjectDocument.Load(path);
            var baseRomFound = !string.IsNullOrWhiteSpace(project.BaseRomPath) && File.Exists(project.BaseRomPath);
            var romPath = baseRomFound ? project.BaseRomPath : _rom?.Path;
            var wrongRomMessage =
                $"This project was made for a different ROM (SHA-1 {project.BaseRomSha1}). Open that ROM, then the project.";
            if (romPath is null)
            {
                await ShowErrorAsync("Open Project", "Could not find the project's base ROM. Open the ROM first, then open the project.");
                return;
            }
            // Fallback to the open ROM: reject a different ROM before reopening anything.
            if (!baseRomFound && _rom is not null &&
                !string.IsNullOrWhiteSpace(project.BaseRomSha1) &&
                !string.Equals(project.BaseRomSha1, _rom.Sha1, StringComparison.OrdinalIgnoreCase))
            {
                await ShowErrorAsync("Open Project", wrongRomMessage);
                return;
            }
            var previousWorkingRom = _workingRom;
            await OpenRomAsync(romPath);
            if (_rom is null || _scenes is null || ReferenceEquals(_workingRom, previousWorkingRom))
            {
                await ShowErrorAsync("Open Project", "Could not open the project's base ROM.");
                return;
            }
            if (!string.IsNullOrWhiteSpace(project.BaseRomSha1) &&
                !string.Equals(project.BaseRomSha1, _rom.Sha1, StringComparison.OrdinalIgnoreCase))
            {
                await ShowErrorAsync("Open Project", wrongRomMessage);
                return;
            }
            _lastExplicitSaveAt = new DateTimeOffset(File.GetLastWriteTimeUtc(path), TimeSpan.Zero);
            ComposeProjectOntoRom(project);
            RememberProject(path);
            PersistSession();
            if (restoreExplorer)
                RestoreExplorerFromSession();
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
        // Cancel the post-load search build BEFORE mutating scenes, so it can never cache edited data.
        _searchIndexCts?.Cancel();
        ProjectEditApplier.Apply(project, _scenes, _runtimeConfig);
        _searchDirty = true;
        KickSearchIndexBuild();
    }

    private bool HasUnsavedRomEdits =>
        _workingRom is not null && _workingRom.UserEditVersion != _savedUserEditVersion;

    private void SyncWorkingRom()
    {
        if (_scenes is null)
            return;
        if (_cPatchesUseDecompHost && _cPatchWorkingRom is not null)
            _cPatchWorkingRom.Sync(_scenes, _charmap, _runtimeConfig);
        else
            _workingRom?.Sync(_scenes, _charmap, _runtimeConfig);
    }

    /// <summary>Applies a project to the freshly opened ROM: enabled mods first, then the project's own edits and ROM patches.</summary>
    private void ComposeProjectOntoRom(ProjectDocument project)
    {
        if (_workingRom is null || _scenes is null)
            return;
        _project = project;
        _changes.Attach(project, _scenes);
        _pendingRomChanges.Clear();
        var hasEnabledMods = project.Mods.Any(mod => mod.Enabled);
        if (hasEnabledMods)
        {
            var mods = ModStack.ApplyEnabled(project.Mods, _workingRom, _scenes, _runtimeConfig);
            foreach (var name in mods.Applied)
                AppendOutput($"Mod loaded: {name}");
            foreach (var line in mods.Warnings)
                AppendOutput($"Mod warning: {line}");
            foreach (var line in mods.Errors)
                AppendOutput($"Mod error: {line}");
            if (mods.Errors.Count > 0)
                ShowOutput();
            SyncWorkingRom();
            _workingRom.MarkModBaseline();
            _modRuntimeBaseline = _runtimeConfig is null
                ? null
                : RuntimeConfigSchema.Fields.ToDictionary(field => field.Id, field => _runtimeConfig.Get(field.Id), StringComparer.Ordinal);
            _loadedModNames = mods.Applied.ToList();
        }
        else
        {
            _modRuntimeBaseline = null;
            _loadedModNames = new();
        }
        ApplyProjectEdits(project);
        var patched = ModStack.ApplyRomPatches(project.RomPatches, _workingRom);
        if (hasEnabledMods || project.Edits.Count > 0)
            SyncWorkingRom();
        _savedUserEditVersion = _workingRom.UserEditVersion;
        if (patched > 0)
            AppendOutput($"Restored {patched} direct ROM edit(s) from the project.");
        RebuildModsMenu();
    }

    private void CaptureRomPatches()
    {
        if (_workingRom is null || _project is null)
            return;
        // After a resize, the patches captured just before the first resize are the only ones in baserom layout.
        _project.RomPatches = _workingRom.HasStructuralEdits
            ? _workingRom.PreResizePatches
            : _workingRom.CaptureUserPatches();
    }

    private void OnChangesChanged(object? sender, EventArgs e)
    {
        // Back at the saved point with no unflushed byte edits: the ROM version counts as saved again.
        // Undo/redo of a byte edit bumps UserEditVersion through Overlay, so the version alone would stay dirty.
        if (!_changes.IsDirty && _pendingRomChanges.Count == 0 && _workingRom is { HasStructuralEdits: false })
            _savedUserEditVersion = _workingRom.UserEditVersion;
        UpdateDirtyTitle();
    }

    private void OnUserBytesChanged(object? sender, RomBytesChangedEventArgs e)
    {
        if (!Dispatcher.UIThread.CheckAccess())
        {
            Dispatcher.UIThread.Post(() => OnUserBytesChanged(sender, e));
            return;
        }
        if (!ReferenceEquals(sender, _workingRom))
            return;
        _pendingRomChanges.AddRange(e.Changes);
        if (_romFlushQueued)
            return;
        _romFlushQueued = true;
        // One user action can commit several spans; post once so they become a single undo step.
        Dispatcher.UIThread.Post(FlushRomHistory, DispatcherPriority.Background);
    }

    private void FlushRomHistory()
    {
        _romFlushQueued = false;
        if (_pendingRomChanges.Count == 0 || _workingRom is null)
            return;
        var changes = _pendingRomChanges.ToList();
        _pendingRomChanges.Clear();
        var working = _workingRom;
        var structural = working.StructuralVersion;
        var bytes = changes.Sum(change => change.After.Length);
        _changes.Record(
            $"ROM edit ({bytes:N0} byte(s))",
            apply: () => RestoreRomHistory(working, changes, structural, useAfter: true),
            revert: () => RestoreRomHistory(working, changes, structural, useAfter: false));
    }

    private void RestoreRomHistory(WorkingRom working, IReadOnlyList<RomByteChange> changes, int structuralVersion, bool useAfter)
    {
        if (!ReferenceEquals(working, _workingRom))
            return;
        // A resize since the edit was recorded moved the layout; its offsets would write into the wrong bytes.
        if (working.StructuralVersion != structuralVersion)
        {
            SetStatus("That ROM edit can't be undone after a resize (sound or data-table insert).");
            return;
        }
        working.RestoreBytes(changes, useAfter);
        Dispatcher.UIThread.Post(RefreshCurrentWorkspace, DispatcherPriority.Background);
    }

    /// <summary>Reloads the visible workspace from the working ROM after an undo/redo of a byte edit.</summary>
    private void RefreshCurrentWorkspace()
    {
        var child = _workspaceHost.Child;
        if (child is null)
            return;
        if (ReferenceEquals(child, _dungeonWorkspace))
            OpenDungeons(_selectedAsset);
        else if (ReferenceEquals(child, _dataTablesWorkspace))
            OpenDataTables(_selectedAsset);
        else if (ReferenceEquals(child, _sceneWorkspace))
            OpenSelectedScene();
        else if (ReferenceEquals(child, _assetWorkspace) && _rom is not null && _charmap is not null && _catalog is not null)
        {
            _assetWorkspace.Bind(_rom, _charmap, _catalog, _scenes, _changes, _workingRom);
            if (_selectedAsset is not null)
                _ = _assetWorkspace.ShowAssetAsync(_selectedAsset);
        }
    }

    /// <summary>Re-indexes the ROM and re-applies the project with its current mod list (mods → edits → ROM patches).</summary>
    /// <returns>True only when the project was re-applied; false when the reload was skipped, declined, or failed.</returns>
    private async Task<bool> ReloadWithModsAsync(string reason)
    {
        if (_rom is null || _project is null || _workingRom is null || _isLoading)
            return false;
        if (_workingRom.HasStructuralEdits &&
            !await ConfirmAsync(
                "Reload with mods",
                "An edit resized ROM data (sound or data-table insert). That edit, and direct ROM edits made after it, are lost when the ROM reloads. Build ROM first to keep them.\n\nReload anyway?",
                "Reload"))
            return false;

        CaptureRomPatches();
        CaptureExplorerToSession();
        var project = _project;
        var lastExplicitSave = _lastExplicitSaveAt;
        var stopwatch = System.Diagnostics.Stopwatch.StartNew();
        if (!await TryQuickResetAsync())
        {
            var previousWorkingRom = _workingRom;
            await OpenRomAsync(_rom.Path);
            // OpenRomAsync keeps the old ROM when reopening fails; composing again would apply the project twice.
            if (_rom is null || _scenes is null || ReferenceEquals(_workingRom, previousWorkingRom))
                return false;
        }
        _lastExplicitSaveAt = lastExplicitSave;
        ComposeProjectOntoRom(project);
        project.IsDirty = true;
        RestoreExplorerFromSession();
        _sceneWorkspace?.RefreshFromExternal();
        _cPatchesWorkspace?.RefreshFromExternal();
        UpdateDirtyTitle();
        var active = project.Mods.Count(mod => mod.Enabled);
        SetStatus($"{reason} — {active} mod(s) active. Undo history was cleared.");
        AppendOutput($"{reason} — {active} mod(s) active ({stopwatch.Elapsed.TotalSeconds:0.0}s).");
        return true;
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
        TryAutosave(force: true);
        try
        {
            var report = RomBuilder.Build(
                _rom, _scenes, _project, file.Path.LocalPath, _charmap, _runtimeConfig, _cPatchHostRom,
                workingImage: _workingRom?.View);
            var summary = report.Success
                ? $"Built {file.Path.LocalPath} ({report.Changes.Count} changes). F5 plays it in the emulator."
                : $"Build failed with {report.Errors.Count} error(s).";
            if (report.Success && report.Warnings.Count > 0)
                summary += $" {report.Warnings.Count} warning(s) — see Output.";
            SetStatus(summary);
            if (report.Success)
            {
                _session.LastBuiltRomPath = file.Path.LocalPath;
                PersistSession();
                if (_session.RestartEmulatorAfterBuild && EmulatorRunning)
                    await PlayInEmulatorAsync();
            }
            if (report.Warnings.Count > 0)
            {
                foreach (var warning in report.Warnings)
                    AppendOutput($"Warning: {warning}");
                ShowOutput();
            }
            if (!report.Success)
            {
                var details = string.Join("\n", report.Errors.Take(20));
                await ShowErrorAsync("Build ROM failed", details);
            }
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Build ROM failed", exception.Message);
        }
    }

    private bool EmulatorRunning => _emulatorProcess is { HasExited: false };

    private async Task PlayInEmulatorAsync()
    {
        var emulator = EmulatorPlaytest.ResolveEmulator(
            _session.EmulatorPath,
            EmulatorPlaytest.DefaultEmulatorCandidates(
                OperatingSystem.IsWindows(), OperatingSystem.IsMacOS(), Environment.GetEnvironmentVariable),
            File.Exists);
        if (!emulator.Success)
        {
            await ShowErrorAsync("Play in Emulator", emulator.Error!);
            return;
        }

        if (string.IsNullOrWhiteSpace(_session.LastBuiltRomPath) || !File.Exists(_session.LastBuiltRomPath))
        {
            // PrepareCopy has no side effects on a missing ROM; reuse its message.
            await ShowErrorAsync("Play in Emulator", EmulatorPlaytest.PrepareCopy(_session.LastBuiltRomPath).Error!);
            return;
        }

        // The emulator we launched holds the playtest copy open; close it before refreshing the copy.
        await StopEmulatorAsync();
        var copy = EmulatorPlaytest.PrepareCopy(_session.LastBuiltRomPath);
        if (!copy.Success)
        {
            await ShowErrorAsync("Play in Emulator", copy.Error!);
            return;
        }

        try
        {
            _emulatorProcess = System.Diagnostics.Process.Start(
                EmulatorPlaytest.CreateStartInfo(emulator.Path!, copy.RomPath!));
            SetStatus($"Playing {Path.GetFileName(copy.RomPath)} in " +
                $"{Path.GetFileNameWithoutExtension(emulator.Path)}. F5 restarts it with the latest build.");
        }
        catch (Exception exception) when (exception is System.ComponentModel.Win32Exception or InvalidOperationException)
        {
            await ShowErrorAsync("Play in Emulator",
                $"Could not start the emulator:\n{emulator.Path}\n\n{exception.Message}");
        }
    }

    private async Task StopEmulatorAsync()
    {
        var process = _emulatorProcess;
        _emulatorProcess = null;
        if (process is null)
            return;
        try
        {
            if (!process.HasExited)
            {
                // Ask the window to close first so the emulator can flush its .sav; force it after 3 s.
                if (!process.CloseMainWindow() || !await Task.Run(() => process.WaitForExit(3000)))
                    process.Kill();
                await Task.Run(() => process.WaitForExit(3000));
            }
        }
        catch (Exception exception) when (exception is InvalidOperationException or System.ComponentModel.Win32Exception)
        {
        }
        finally
        {
            process.Dispose();
        }
    }

    private async Task SetEmulatorAsync()
    {
        var filters = new List<FilePickerFileType>();
        if (OperatingSystem.IsWindows())
            filters.Add(new FilePickerFileType("Programs") { Patterns = ["*.exe"] });
        filters.Add(FilePickerFileTypes.All);
        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Choose Emulator (mGBA)",
            AllowMultiple = false,
            FileTypeFilter = filters,
        });
        if (files.Count == 0)
            return;
        _session.EmulatorPath = files[0].Path.LocalPath;
        PersistSession();
        SetStatus($"Emulator set to {_session.EmulatorPath}.");
    }

    private async void ExportSelectedOnClick(object? sender, RoutedEventArgs e)
    {
        if (_rom is null || _charmap is null)
            return;
        if (_selectedAsset is null)
        {
            await ShowErrorAsync("Export Selected", "Select an asset in the explorer first.");
            return;
        }
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
        if (_rom is null || _charmap is null || _catalog is null)
            return;
        if (_selectedCategory is null)
        {
            await ShowErrorAsync("Export Category", "Select a category in the explorer first.");
            return;
        }
        var directory = await ChooseExportDirectoryAsync();
        if (directory is null) return;
        var assets = _catalog.ForCategory(_selectedCategory.Value);
        var result = await Task.Run(() => AssetExportService.ExportMany(_rom, assets, _charmap, directory));
        SetStatus($"Exported {result.Paths.Count} file(s). {result.Errors.Count} skipped.");
        if (result.Errors.Count > 0)
            await ShowErrorAsync("Some assets were skipped", string.Join("\n", result.Errors.Take(12)));
    }

    private void RebuildModsMenu()
    {
        _modsMenu.Items.Clear();
        var manage = new MenuItem
        {
            Header = "_Manage Mods…",
            InputGesture = new KeyGesture(Key.M, KeyModifiers.Control | KeyModifiers.Shift),
        };
        manage.Click += async (_, _) => await OpenModManagerAsync();
        var add = new MenuItem { Header = "_Add Mod…" };
        add.Click += async (_, _) => await AddModsFromPickerAsync();
        _modsMenu.Items.Add(manage);
        _modsMenu.Items.Add(add);
        _modsMenu.Items.Add(new Separator());
        if (_rom is null || _project is null)
        {
            _modsMenu.Items.Add(new MenuItem { Header = "Open a ROM to use mods", IsEnabled = false });
        }
        else if (_project.Mods.Count == 0)
        {
            _modsMenu.Items.Add(new MenuItem { Header = "No mods added", IsEnabled = false });
        }
        else
        {
            foreach (var mod in _project.Mods)
            {
                var entry = mod;
                var name = string.IsNullOrWhiteSpace(entry.Name) ? Path.GetFileNameWithoutExtension(entry.Path) : entry.Name;
                var item = new MenuItem
                {
                    Header = name.Replace("_", "__"),
                    ToggleType = MenuItemToggleType.CheckBox,
                    IsChecked = entry.Enabled,
                };
                ToolTip.SetTip(item, entry.Path);
                item.Click += async (_, _) =>
                {
                    entry.Enabled = !entry.Enabled;
                    _project.IsDirty = true;
                    if (!await ReloadWithModsAsync($"{(entry.Enabled ? "Enabled" : "Disabled")} {name}"))
                    {
                        entry.Enabled = !entry.Enabled;
                        RebuildModsMenu();
                    }
                };
                _modsMenu.Items.Add(item);
            }
        }
        _modsMenu.Items.Add(new Separator());
        var export = new MenuItem { Header = "_Export Project as Mod…" };
        export.Click += ExportModPackageOnClick;
        var merge = new MenuItem { Header = "Mer_ge Mod into Project…" };
        ToolTip.SetTip(merge, "Copies a mod's changes into this project permanently. Use Add Mod… to keep it switchable.");
        merge.Click += ImportModPackageOnClick;
        _modsMenu.Items.Add(export);
        _modsMenu.Items.Add(merge);
        _breadcrumb.SetModsBadge(_project?.Mods.Count(mod => mod.Enabled) ?? 0, _rom is null ? 0 : _project?.Mods.Count ?? 0);
    }

    private async Task OpenModManagerAsync()
    {
        if (_rom is null || _project is null)
        {
            await ShowErrorAsync("Mods", "Open a ROM before managing mods.");
            return;
        }
        var window = new ModManagerWindow(_project.Mods, _rom.Sha1);
        await window.ShowDialog(this);
        if (window.Result is null)
            return;
        var previous = _project.Mods;
        _project.Mods = window.Result;
        _project.IsDirty = true;
        RebuildModsMenu();
        if (await ReloadWithModsAsync("Mods updated"))
            return;
        _project.Mods = previous;
        RebuildModsMenu();
        SetStatus("Mods were not changed.");
    }

    private async Task AddModsFromPickerAsync()
    {
        if (_rom is null || _project is null)
        {
            await ShowErrorAsync("Mods", "Open a ROM before managing mods.");
            return;
        }

        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Add RescueTemple Mod Package",
            AllowMultiple = true,
            FileTypeFilter =
            [
                new FilePickerFileType("RescueTemple Mod Package") { Patterns = ["*.rtmod", "manifest.json"] },
                FilePickerFileTypes.All,
            ],
        });

        await AddModPathsAsync(files.Select(file => file.Path.LocalPath).ToList());
    }

    /// <summary>Adds mod packages or mod folders (or their manifest.json) to the project, then reloads the ROM with them.</summary>
    private async Task AddModPathsAsync(IReadOnlyList<string> paths)
    {
        if (_rom is null || _project is null)
        {
            await ShowErrorAsync("Mods", "Open a ROM before managing mods.");
            return;
        }

        var known = _project.Mods
            .Select(mod => Path.GetFullPath(mod.Path))
            .ToHashSet(StringComparer.OrdinalIgnoreCase);
        var added = new List<ProjectModEntry>();
        foreach (var pickedPath in paths)
        {
            var path = pickedPath;
            if (path.EndsWith("manifest.json", StringComparison.OrdinalIgnoreCase))
                path = Path.GetDirectoryName(path) ?? path;

            var fullPath = Path.GetFullPath(path);
            if (!known.Add(fullPath))
                continue;

            var entry = new ProjectModEntry { Path = fullPath };
            var info = ModStack.Inspect(entry, _rom.Sha1);
            entry.Name = info.DisplayName;
            entry.Enabled = info.Error is null;
            if (info.Error is not null)
                AppendOutput($"Mod not enabled: {info.DisplayName}: {info.Summary}");
            _project.Mods.Add(entry);
            added.Add(entry);
        }

        if (added.Count == 0)
            return;

        _project.IsDirty = true;
        RebuildModsMenu();
        if (added.Any(entry => entry.Enabled))
        {
            if (!await ReloadWithModsAsync($"Added {added.Count} mod(s)"))
            {
                _project.Mods.RemoveAll(mod => added.Contains(mod));
                RebuildModsMenu();
                SetStatus("Mods were not added.");
            }
        }
        else
            SetStatus("Mod added but not enabled — see Output.");
    }

    private static void OnDragOver(object? sender, DragEventArgs e)
    {
        e.DragEffects = e.DataTransfer.TryGetFiles() is { Length: > 0 } ? DragDropEffects.Copy : DragDropEffects.None;
    }

    /// <summary>Opens a dropped project or ROM, or adds dropped mods. A project wins over a ROM, and a ROM wins over mods.</summary>
    private async void OnDrop(object? sender, DragEventArgs e)
    {
        // Set before the first await: the routed event has returned by the time the continuation runs.
        e.Handled = true;
        if (_isLoading)
            return;

        var dropped = (e.DataTransfer.TryGetFiles() ?? Array.Empty<IStorageItem>())
            .Select(item => item.TryGetLocalPath())
            .OfType<string>()
            .Select(path => (FilePath: path, Kind: DroppedFiles.Classify(path, Directory.Exists, File.Exists)))
            .ToList();

        var project = dropped.FirstOrDefault(item => item.Kind == DroppedFileKind.Project).FilePath;
        if (project is not null)
        {
            if (await ConfirmDiscardIfNeededAsync("Open Project"))
                await OpenProjectFromPathAsync(project, restoreExplorer: false);
            return;
        }

        var rom = dropped.FirstOrDefault(item => item.Kind == DroppedFileKind.Rom).FilePath;
        if (rom is not null)
        {
            if (await ConfirmDiscardIfNeededAsync("Open ROM"))
                await OpenRomAsync(rom);
            return;
        }

        var mods = dropped
            .Where(item => item.Kind == DroppedFileKind.Mod)
            .Select(item => item.FilePath)
            .ToList();
        if (mods.Count > 0)
        {
            await AddModPathsAsync(mods);
            return;
        }

        SetStatus("Drop a .gba ROM, a .rtproj project, or .rtmod mods.");
    }

    private async void ExportModPackageOnClick(object? sender, RoutedEventArgs e)
    {
        if (_workingRom is null || _project is null)
        {
            await ShowErrorAsync("Export Project as Mod", "Open a ROM before exporting a mod.");
            return;
        }

        var file = await StorageProvider.SaveFilePickerAsync(new FilePickerSaveOptions
        {
            Title = "Export Project as Mod",
            SuggestedFileName = SanitizeModFileName(_project.Name) + ".rtmod",
            FileTypeChoices =
            [
                new FilePickerFileType("RescueTemple Mod Package") { Patterns = ["*.rtmod"] },
            ],
        });
        if (file is null)
            return;

        try
        {
            // With mods loaded, export only this project's own changes (diffed against the post-mod baseline).
            var modsLoaded = _loadedModNames.Count > 0;
            var package = ModPackage.Collect(
                _workingRom, _project, _scenes, _runtimeConfig, _catalog,
                reference: modsLoaded ? _workingRom.ModBaseline : null,
                runtimeConfigBaseline: modsLoaded ? _modRuntimeBaseline : null,
                builtOnMods: modsLoaded ? _loadedModNames : null);
            await Task.Run(() => ModPackage.ExportArchive(package, file.Path.LocalPath));
            var parts = new List<string>
            {
                $"{package.Edits.Count} edit(s)",
                $"{package.Overlays.Count} overlay(s)",
                $"{package.RuntimeConfig.Count} C Patch field(s)",
            };
            SetStatus($"Exported mod package {file.Path.LocalPath} ({string.Join(", ", parts)}).");
            AppendOutput($"Mod package exported: {file.Path.LocalPath}");
            if (modsLoaded)
                AppendOutput($"Exported only this project's own changes. It builds on: {string.Join(", ", _loadedModNames)}.");
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Export Project as Mod failed", exception.Message);
        }
    }

    private async void ImportModPackageOnClick(object? sender, RoutedEventArgs e)
    {
        if (_workingRom is null || _project is null || _scenes is null)
        {
            await ShowErrorAsync("Merge Mod into Project", "Open the matching baserom before merging a mod.");
            return;
        }

        var files = await StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Merge Mod into Project",
            AllowMultiple = false,
            FileTypeFilter =
            [
                new FilePickerFileType("RescueTemple Mod Package") { Patterns = ["*.rtmod", "manifest.json"] },
                FilePickerFileTypes.All,
            ],
        });
        var file = files.FirstOrDefault();
        if (file is null)
            return;

        try
        {
            var package = await Task.Run(() => ModPackage.Load(file.Path.LocalPath));
            var result = ModPackage.Apply(package, _workingRom, _project, _scenes, _runtimeConfig);
            // The merge's own byte writes are not undoable as one step; drop them and restart history.
            _pendingRomChanges.Clear();
            _changes.Attach(_project, _scenes);
            if (_cPatchesUseDecompHost && _cPatchWorkingRom is not null)
                _cPatchWorkingRom.Sync(_scenes, _charmap, _runtimeConfig);
            else
                _workingRom.Sync(_scenes, _charmap, _runtimeConfig);

            _sceneWorkspace?.RefreshFromExternal();
            _cPatchesWorkspace?.RefreshFromExternal();
            UpdateDirtyTitle();

            var summary =
                $"Merged {result.EditCount} edit(s), {result.OverlayCount} overlay(s), {result.RuntimeConfigCount} C Patch field(s).";
            SetStatus(summary);
            AppendOutput(summary);
            AppendOutput("Merging a mod cannot be undone; undo history was cleared.");
            if (result.Warnings.Count > 0)
            {
                foreach (var warning in result.Warnings)
                    AppendOutput($"Warning: {warning}");
                ShowOutput();
            }
            if (!result.Success)
            {
                var details = string.Join("\n", result.Errors.Take(20));
                await ShowErrorAsync("Merge Mod failed", details);
            }
        }
        catch (Exception exception)
        {
            await ShowErrorAsync("Merge Mod failed", exception.Message);
        }
    }

    private static string SanitizeModFileName(string name)
    {
        var invalid = Path.GetInvalidFileNameChars();
        var builder = new System.Text.StringBuilder(name.Length);
        foreach (var character in name)
            builder.Append(invalid.Contains(character) ? '_' : character);
        var cleaned = builder.ToString().Trim().TrimEnd('.');
        return string.IsNullOrWhiteSpace(cleaned) ? "mod" : cleaned;
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
        RebuildModsMenu();
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
            case EditorCommandId.SaveProjectAs:
                _ = SaveProjectAsync(choosePath: true);
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
            case EditorCommandId.PlayInEmulator:
                _ = PlayInEmulatorAsync();
                return true;
            case EditorCommandId.ManageMods:
                _ = OpenModManagerAsync();
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
        TryAutosave();
        PersistSession();
        PersistShellSettings();
        if (_forceClose)
            return;
        if (!UnsavedChangesGate.RequiresConfirmation(_project?.IsDirty == true || HasUnsavedRomEdits, _changes.IsDirty))
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
        if (!UnsavedChangesGate.RequiresConfirmation(_project?.IsDirty == true || HasUnsavedRomEdits, _changes.IsDirty))
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

    private async Task<bool> ConfirmAsync(string title, string message, string confirmLabel)
    {
        var dialog = new Window
        {
            Title = title,
            Width = 420,
            Height = 190,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            Icon = AppIcon.Get(),
        };
        EditorChrome.StyleDialogWindow(dialog);
        var confirmed = false;
        var body = EditorChrome.MutedBody(message);
        var cancel = EditorChrome.ToolButton("Cancel");
        cancel.Click += (_, _) => dialog.Close();
        var confirm = EditorChrome.ToolButton(confirmLabel, primary: true);
        confirm.Click += (_, _) =>
        {
            confirmed = true;
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
            Children = { buttons, body },
        };
        DockPanel.SetDock(buttons, Dock.Bottom);
        await dialog.ShowDialog(this);
        return confirmed;
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
        var children = new List<Control>
        {
            EditorChrome.PaneTitle("No ROM loaded"),
            EditorChrome.MutedBody("Open baserom.gba to browse scenes, dialogue, and assets."),
            open,
        };
        var recents = RecentDocumentList.Existing(_session.RecentRoms, _files);
        if (recents.Count > 0)
        {
            children.Add(EditorChrome.MutedBody("Recent ROMs"));
            foreach (var path in recents.Take(5))
            {
                var recentPath = path;
                var recent = EditorChrome.ToolButton(Path.GetFileName(recentPath));
                recent.MinWidth = 108;
                ToolTip.SetTip(recent, recentPath);
                recent.Click += async (_, _) =>
                {
                    if (_isLoading) return;
                    if (!await ConfirmDiscardIfNeededAsync("Open ROM"))
                        return;
                    await OpenRomAsync(recentPath);
                };
                children.Add(recent);
            }
        }

        var recentProjects = RecentDocumentList.Existing(_session.RecentProjects, _files);
        if (recentProjects.Count > 0)
        {
            children.Add(EditorChrome.MutedBody("Recent Projects"));
            foreach (var path in recentProjects.Take(5))
            {
                var projectPath = path;
                var project = EditorChrome.ToolButton(Path.GetFileNameWithoutExtension(projectPath));
                project.MinWidth = 108;
                ToolTip.SetTip(project, projectPath);
                project.Click += async (_, _) =>
                {
                    if (_isLoading) return;
                    if (!await ConfirmDiscardIfNeededAsync("Open Project"))
                        return;
                    await OpenProjectFromPathAsync(projectPath, restoreExplorer: true);
                };
                children.Add(project);
            }
        }
        children.Add(EditorChrome.MutedBody("Tip: drag a .gba, .rtproj or .rtmod file onto this window."));

        var panel = new StackPanel
        {
            Spacing = EditorTheme.Space3,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Center,
        };
        foreach (var child in children)
            panel.Children.Add(child);
        return panel;
    }

    private void SetStatus(string text) => _breadcrumb.SetStatus(text);

    private async Task RestoreDocumentSessionAsync()
    {
        var lastProject = _session.LastProjectPath;
        var lastRom = _session.LastRomPath;
        var autosaveKey = !string.IsNullOrWhiteSpace(lastProject) ? lastProject : lastRom;
        if (!string.IsNullOrWhiteSpace(autosaveKey))
        {
            var envelope = ProjectAutosave.TryLoad(_files, RescueTemplePaths.GetAppDataDirectory(), autosaveKey);
            if (envelope is not null &&
                ProjectAutosave.ShouldPrompt(envelope.AutosavedAt, envelope.LastExplicitSaveAt) &&
                _files.FileExists(envelope.RomPath))
            {
                if (await ConfirmRestoreAutosaveAsync(envelope))
                {
                    await ApplyAutosaveEnvelopeAsync(envelope);
                    return;
                }
            }
        }

        if (!string.IsNullOrWhiteSpace(lastProject) && _files.FileExists(lastProject))
        {
            await OpenProjectFromPathAsync(lastProject, restoreExplorer: true);
            return;
        }

        if (!string.IsNullOrWhiteSpace(lastRom) && _files.FileExists(lastRom))
        {
            await OpenRomAsync(lastRom);
            return;
        }

        var recents = RecentDocumentList.Existing(_session.RecentRoms, _files);
        if (recents.Count > 0)
        {
            _workspaceHost.Child = CreateWelcomePanel();
            return;
        }

        var defaultRom = FindDefaultRom();
        if (defaultRom is not null)
            await OpenRomAsync(defaultRom);
    }

    private async Task ApplyAutosaveEnvelopeAsync(AutosaveEnvelope envelope)
    {
        await OpenRomAsync(envelope.RomPath);
        if (_rom is null || _scenes is null)
            return;
        var project = envelope.Project;
        project.Path = envelope.ExplicitSavePath;
        _lastExplicitSaveAt = envelope.LastExplicitSaveAt;
        ComposeProjectOntoRom(project);
        project.IsDirty = true;
        _session.ExplorerCategory = envelope.ExplorerCategory;
        _session.ExplorerAssetId = envelope.ExplorerAssetId;
        _session.ExplorerSceneMapId = envelope.ExplorerSceneMapId;
        RestoreExplorerFromSession();
        if (!string.IsNullOrWhiteSpace(project.Path))
            RememberProject(project.Path);
        PersistSession();
        _sceneWorkspace?.RefreshFromExternal();
        UpdateDirtyTitle();
        SetStatus("Restored unsaved changes.");
    }

    private async Task<bool> ConfirmRestoreAutosaveAsync(AutosaveEnvelope envelope)
    {
        var prompt = ProjectAutosave.DescribeRestore(envelope, AppBuildId);
        var dialog = new Window
        {
            Title = prompt.Title,
            Width = 460,
            Height = 180,
            WindowStartupLocation = WindowStartupLocation.CenterOwner,
            Icon = AppIcon.Get(),
        };
        EditorChrome.StyleDialogWindow(dialog);
        var restore = false;
        var message = EditorChrome.MutedBody(prompt.Message);
        var discard = EditorChrome.ToolButton(prompt.DiscardLabel);
        discard.Click += (_, _) => dialog.Close();
        var confirm = EditorChrome.ToolButton(prompt.ConfirmLabel, primary: true);
        confirm.Click += (_, _) =>
        {
            restore = true;
            dialog.Close();
        };
        var buttons = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            HorizontalAlignment = HorizontalAlignment.Right,
            Spacing = EditorTheme.Space2,
            Margin = new Thickness(0, EditorTheme.Space4, 0, 0),
            Children = { discard, confirm },
        };
        dialog.Content = new DockPanel
        {
            Margin = new Thickness(EditorTheme.Space5),
            LastChildFill = true,
            Children = { buttons, message },
        };
        DockPanel.SetDock(buttons, Dock.Bottom);
        await dialog.ShowDialog(this);
        return restore;
    }

    private void RememberRom(string path)
    {
        _session.RecentRoms = RecentDocumentList.Remember(_session.RecentRoms, path);
        _session.LastRomPath = path;
    }

    private void RememberProject(string path)
    {
        _session.RecentProjects = RecentDocumentList.Remember(_session.RecentProjects, path);
        _session.LastProjectPath = path;
    }

    private void CaptureExplorerToSession()
    {
        _session.ExplorerCategory = _selectedCategory?.ToString();
        _session.ExplorerAssetId = _selectedAsset?.Id;
        _session.ExplorerSceneMapId = null;
        if (_selectedAsset?.Metadata.TryGetValue("mapId", out var mapText) == true &&
            int.TryParse(mapText, out var mapId))
            _session.ExplorerSceneMapId = mapId;
    }

    private bool RestoreExplorerFromSession()
    {
        if (_session.ExplorerSceneMapId is int mapId && _explorer.SelectScene(mapId))
            return true;

        if (!string.IsNullOrWhiteSpace(_session.ExplorerAssetId) &&
            _explorer.TrySelectAssetId(_session.ExplorerAssetId))
            return true;

        if (Enum.TryParse<AssetCategory>(_session.ExplorerCategory, out var category) &&
            _explorer.TrySelectCategory(category))
            return true;

        return false;
    }

    private void PersistSession()
    {
        try
        {
            CaptureExplorerToSession();
            if (_sceneWorkspace is not null)
                _session.ScriptEditorKind = ScriptEditorKindCodec.ToToken(_sceneWorkspace.ScriptEditorKind);
            if (_rom is not null)
                _session.LastRomPath = _rom.Path;
            if (!string.IsNullOrWhiteSpace(_project?.Path))
                _session.LastProjectPath = _project.Path;
            EditorSessionSettingsStore.Save(_files, _sessionSettingsPath, _session);
            RebuildRecentMenus();
        }
        catch (IOException)
        {
        }
        catch (UnauthorizedAccessException)
        {
        }
    }

    private void RebuildRecentMenus()
    {
        FillRecentMenu(_recentRomsMenu, RecentDocumentList.Existing(_session.RecentRoms, _files), "No recent ROMs",
            async path =>
            {
                if (_isLoading) return;
                if (!await ConfirmDiscardIfNeededAsync("Open ROM"))
                    return;
                await OpenRomAsync(path);
            });
        FillRecentMenu(_recentProjectsMenu, RecentDocumentList.Existing(_session.RecentProjects, _files), "No recent projects",
            async path =>
            {
                if (_isLoading) return;
                if (!await ConfirmDiscardIfNeededAsync("Open Project"))
                    return;
                await OpenProjectFromPathAsync(path, restoreExplorer: true);
            });
    }

    private static void FillRecentMenu(
        MenuItem menu,
        IReadOnlyList<string> paths,
        string emptyLabel,
        Func<string, Task> open)
    {
        menu.Items.Clear();
        if (paths.Count == 0)
        {
            menu.Items.Add(new MenuItem { Header = emptyLabel, IsEnabled = false });
            return;
        }

        foreach (var path in paths)
        {
            var captured = path;
            var item = new MenuItem { Header = RecentMenuHeader(captured) };
            item.Click += async (_, _) => await open(captured);
            menu.Items.Add(item);
        }
    }

    private static string RecentMenuHeader(string path)
    {
        var name = Path.GetFileName(path);
        var directory = Path.GetDirectoryName(path);
        return string.IsNullOrEmpty(directory) ? name : $"{name}  ({directory})";
    }

    private bool ShouldAutosave() =>
        _rom is not null &&
        _project is not null &&
        (_changes.IsDirty || _project.Edits.Count > 0 || HasUnsavedRomEdits ||
         (_project.IsDirty && !string.IsNullOrWhiteSpace(_project.Path)));

    private void TryAutosave(bool force = false)
    {
        if (_isLoading)
            return;
        if (_rom is null || _project is null)
            return;
        if (!force && !ShouldAutosave())
            return;
        try
        {
            CaptureRomPatches();
            CaptureExplorerToSession();
            var key = !string.IsNullOrWhiteSpace(_project.Path) ? _project.Path : _rom.Path;
            ProjectAutosave.Write(
                _files,
                RescueTemplePaths.GetAppDataDirectory(),
                key,
                new AutosaveEnvelope
                {
                    AutosavedAt = DateTimeOffset.UtcNow,
                    LastExplicitSaveAt = _lastExplicitSaveAt,
                    ExplicitSavePath = _project.Path,
                    RomPath = _rom.Path,
                    ExplorerCategory = _session.ExplorerCategory,
                    ExplorerAssetId = _session.ExplorerAssetId,
                    ExplorerSceneMapId = _session.ExplorerSceneMapId,
                    AppBuildId = AppBuildId,
                    Project = _project,
                });
        }
        catch (IOException)
        {
        }
        catch (UnauthorizedAccessException)
        {
        }
    }

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
