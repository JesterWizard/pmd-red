using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Primitives;
using Avalonia.Controls.Templates;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform.Storage;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class DataTablesWorkspacePanel : UserControl
{
    private const double ListPaneWidth = 280;
    private const double ComboWidth = 200;
    private const double SpinWidth = 72;
    private const double MatchupLabelWidth = 112;

    private readonly ListBox _list;
    private readonly TextBox _filterBox;
    private readonly StackPanel _formHost;
    private readonly TextBlock _status;
    private readonly ToggleButton _monsterTab;
    private readonly ToggleButton _moveTab;
    private readonly ToggleButton _itemTab;
    private readonly ToggleButton _friendTab;
    private readonly ToggleButton _typeTab;
    private readonly ToggleButton _exclusiveTab;
    private readonly ToggleButton _shopTab;
    private readonly IReadOnlyList<ToggleButton> _tableTabs;

    private RomImage? _rom;
    private Charmap? _charmap;
    private AssetCatalog? _catalog;
    private WorkingRom? _workingRom;
    private DataTableTables? _tables;
    private FriendAreaTables? _friendTables;
    private GameplayTableTables? _gameplay;
    private ActorSpriteAtlas? _sprites;
    private DungeonIconAtlas? _icons;
    private IReadOnlyList<DataTablePick> _movePicks = [];
    private IReadOnlyList<DataTablePick> _monsterPicks = [];
    private IReadOnlyList<DataTablePick> _itemPicks = [];
    private IReadOnlyList<ShopTableEntry> _shops = [];
    private AssetDescriptor? _table;
    private AssetDescriptor? _selected;
    private IReadOnlyList<AssetDescriptor> _entries = [];
    private bool _suppress;
    private readonly List<LearnsetRow> _learnsetRows = [];
    private readonly List<ShopItemRow> _shopRows = [];
    private readonly Dictionary<(AssetKind Kind, int Id), Bitmap> _listSpriteCache = [];
    private static readonly IReadOnlyList<DataTablePick> YesNoPicks =
    [
        new(0, "No"),
        new(1, "Yes"),
    ];

    public event EventHandler<AssetDescriptor?>? AssetSelected;

    public DataTablesWorkspacePanel()
    {
        _status = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            VerticalAlignment = VerticalAlignment.Center,
            TextTrimming = TextTrimming.CharacterEllipsis,
        };

        _filterBox = new TextBox
        {
            PlaceholderText = "Filter by name…",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            MinHeight = EditorTheme.ControlHeight,
            Width = 160,
            MinWidth = 120,
            MaxWidth = 200,
        };
        EditorChrome.StyleEditor(_filterBox);
        _filterBox.TextChanged += (_, _) => ApplyFilter();

        _monsterTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[0], isChecked: true);
        _moveTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[1]);
        _itemTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[2]);
        _friendTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[3]);
        _typeTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[4]);
        _exclusiveTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[5]);
        _shopTab = EditorChrome.InspectorTab(DataTablesToolbarLayout.TableTabs[6]);
        _tableTabs = [_monsterTab, _moveTab, _itemTab, _friendTab, _typeTab, _exclusiveTab, _shopTab];
        BindTableTab(_monsterTab, AssetKind.MonsterTable);
        BindTableTab(_moveTab, AssetKind.MoveTable);
        BindTableTab(_itemTab, AssetKind.ItemTable);
        BindTableTab(_friendTab, AssetKind.FriendAreaTable);
        BindTableTab(_typeTab, AssetKind.TypeMatchupTable);
        BindTableTab(_exclusiveTab, AssetKind.ExclusiveTable);
        BindTableTab(_shopTab, AssetKind.ShopTable);

        var title = new TextBlock
        {
            Text = DataTablesToolbarLayout.Title,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontToolbar,
            FontWeight = FontWeight.SemiBold,
            Foreground = EditorTheme.TextPrimaryBrush,
            Margin = new Thickness(EditorTheme.Space2, 0, EditorTheme.Space3, 0),
            VerticalAlignment = VerticalAlignment.Center,
        };
        var actions = new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            VerticalAlignment = VerticalAlignment.Center,
            Children = { _filterBox, AddToolbarButton("Add", AddEntry), AddToolbarButton("Delete", DeleteEntry) },
        };
        var identity = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("Auto,Auto,*"),
            Height = EditorTheme.ToolbarHeight,
            Children = { title, actions, _status },
        };
        Grid.SetColumn(actions, 1);
        Grid.SetColumn(_status, 2);
        _status.Margin = new Thickness(EditorTheme.Space3, 0, 0, 0);
        _status.HorizontalAlignment = HorizontalAlignment.Stretch;

        var tabs = new WrapPanel
        {
            Orientation = Orientation.Horizontal,
            VerticalAlignment = VerticalAlignment.Center,
        };
        foreach (var tab in _tableTabs)
            tabs.Children.Add(tab);

        var toolbarInner = EditorChrome.ToolbarStack(identity, tabs);

        _list = new ListBox
        {
            ItemsPanel = new FuncTemplate<Panel?>(() => new VirtualizingStackPanel()),
        };
        EditorChrome.StyleList(_list);
        _list.ItemTemplate = new FuncDataTemplate<DataTableListItem>((_, _) => new DataTableListRow(this), true);
        _list.SelectionChanged += (_, _) =>
        {
            if (_suppress)
                return;
            if (_list.SelectedItem is DataTableListItem item)
                ShowEntry(item.Asset);
        };

        var listHost = new Border
        {
            Background = EditorTheme.PanelBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 1, 0),
            Child = _list,
        };

        _formHost = new StackPanel { Spacing = EditorTheme.Space1 };
        var formHost = new Border
        {
            Padding = new Thickness(EditorTheme.Space3, EditorTheme.Space2),
            Background = EditorTheme.CanvasBgBrush,
            Child = new ScrollViewer { Content = _formHost },
        };

        var split = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{ListPaneWidth},*"),
            Children = { listHost, formHost },
        };
        Grid.SetColumn(formHost, 1);

        Content = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*"),
            Background = EditorTheme.PanelBgBrush,
            Children = { EditorChrome.ToolbarHost(toolbarInner, DataTablesToolbarLayout.RowCount), split },
        };
        Grid.SetRow(split, 1);
    }

    public void Load(RomImage rom, Charmap charmap, AssetCatalog catalog, WorkingRom? workingRom, AssetDescriptor? asset)
    {
        _rom = rom;
        _charmap = charmap;
        _catalog = catalog;
        _workingRom = workingRom;
        var root = CatalogBuilder.FindRepositoryRoot(rom.Path);
        _sprites = new ActorSpriteAtlas(root);
        _icons = DungeonIconAtlas.TryLoad(ActiveRom, 0);
        _tables = DataTableTables.TryLoad(ActiveRom);
        _friendTables = FriendAreaTables.TryLoad(ActiveRom);
        _gameplay = GameplayTableTables.TryLoad(ActiveRom);
        if (_tables is not null)
        {
            _movePicks = DataTableCodec.AlphabeticalMoves(ActiveRom, _tables, charmap);
            _monsterPicks = DataTableCodec.AlphabeticalMonsters(ActiveRom, _tables, charmap);
            _itemPicks = DataTableCodec.AlphabeticalItems(ActiveRom, _tables, charmap);
        }

        if (_gameplay is not null)
            _shops = GameplayTableCodec.ListShops(ActiveRom, _gameplay);
        ShowAsset(asset ?? catalog.ForCategory(AssetCategory.DataTables).FirstOrDefault());
    }

    public void ShowAsset(AssetDescriptor? asset)
    {
        if (_catalog is null || asset is null)
            return;

        var table = IsEntryKind(asset.Kind)
            ? ParentTable(asset)
            : asset;
        if (table is null)
            return;

        _table = table;
        _monsterTab.IsChecked = table.Kind == AssetKind.MonsterTable;
        _moveTab.IsChecked = table.Kind == AssetKind.MoveTable;
        _itemTab.IsChecked = table.Kind == AssetKind.ItemTable;
        _friendTab.IsChecked = table.Kind == AssetKind.FriendAreaTable;
        _typeTab.IsChecked = table.Kind == AssetKind.TypeMatchupTable;
        _exclusiveTab.IsChecked = table.Kind == AssetKind.ExclusiveTable;
        _shopTab.IsChecked = table.Kind == AssetKind.ShopTable;
        _entries = table.Children;
        _status.Text = table.Description ?? table.Name;
        ApplyFilter();

        var focus = IsEntryKind(asset.Kind)
            ? asset
            : _entries.FirstOrDefault(e => e.Metadata.GetValueOrDefault("id") == "1") ?? _entries.FirstOrDefault();
        if (focus is not null)
            SelectInList(focus);
    }

    private RomImage ActiveRom => _workingRom?.View ?? _rom!;

    private AssetDescriptor? ParentTable(AssetDescriptor entry) =>
        _catalog?.ForCategory(AssetCategory.DataTables).FirstOrDefault(t =>
            t.Children.Any(c => c.Id == entry.Id));

    private static bool IsEntryKind(AssetKind kind) => kind is
        AssetKind.MonsterEntry or AssetKind.MoveEntry or AssetKind.ItemEntry
        or AssetKind.FriendAreaEntry or AssetKind.TypeMatchupEntry
        or AssetKind.ExclusiveEntry or AssetKind.ShopEntry;

    private void BindTableTab(ToggleButton tab, AssetKind kind) =>
        tab.IsCheckedChanged += (_, _) => { if (tab.IsChecked == true) ShowTableKind(kind); };

    private void ShowTableKind(AssetKind kind)
    {
        var table = _catalog?.ForCategory(AssetCategory.DataTables).FirstOrDefault(t => t.Kind == kind);
        if (table is not null)
            ShowAsset(table);
    }

    private void ApplyFilter()
    {
        var query = (_filterBox.Text ?? string.Empty).Trim();
        _suppress = true;
        _list.ItemsSource = _entries
            .Where(a => query.Length == 0 ||
                        a.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                        a.Metadata.GetValueOrDefault("displayName", "").Contains(query, StringComparison.OrdinalIgnoreCase))
            .Select(a => new DataTableListItem(a))
            .ToArray();
        _suppress = false;
    }

    private void SelectInList(AssetDescriptor asset)
    {
        if (_list.ItemsSource is IEnumerable<DataTableListItem> items)
        {
            var match = items.FirstOrDefault(i => i.Asset.Id == asset.Id);
            if (match is not null)
            {
                _suppress = true;
                _list.SelectedItem = match;
                _suppress = false;
            }
        }

        ShowEntry(asset);
    }

    private void ShowEntry(AssetDescriptor asset)
    {
        _selected = asset;
        AssetSelected?.Invoke(this, asset);
        RebuildForm(asset);
    }

    private sealed class DataTableListRow : StackPanel
    {
        private readonly DataTablesWorkspacePanel _owner;
        private readonly Image _image;
        private readonly TextBlock _label;

        public DataTableListRow(DataTablesWorkspacePanel owner)
        {
            _owner = owner;
            Orientation = Orientation.Horizontal;
            Height = 36;
            _image = new Image
            {
                Width = 32,
                Height = 32,
                Stretch = Stretch.Uniform,
                Margin = new Thickness(0, 0, EditorTheme.Space2, 0),
            };
            RenderOptions.SetBitmapInterpolationMode(_image, BitmapInterpolationMode.None);
            _label = new TextBlock
            {
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                Foreground = EditorTheme.TextPrimaryBrush,
                VerticalAlignment = VerticalAlignment.Center,
                TextTrimming = TextTrimming.CharacterEllipsis,
            };
            Children.Add(_image);
            Children.Add(_label);
            DataContextChanged += (_, _) => Bind();
        }

        private void Bind()
        {
            if (DataContext is not DataTableListItem item)
                return;
            var id = int.TryParse(item.Asset.Metadata.GetValueOrDefault("id"), out var parsed) ? parsed : 0;
            _label.Text = ListLabel(item.Asset);
            _owner.ApplyListSprite(_image, item.Asset.Kind, id);
        }
    }

    private static string ListLabel(AssetDescriptor asset)
    {
        var name = asset.Metadata.GetValueOrDefault("displayName");
        if (string.IsNullOrWhiteSpace(name))
            name = asset.Name;
        var id = asset.Metadata.GetValueOrDefault("id");
        return int.TryParse(id, out var n) ? $"{n:D3}  {name}" : name;
    }

    private void ApplyListSprite(Image image, AssetKind kind, int id)
    {
        if (kind is AssetKind.MoveEntry or AssetKind.FriendAreaEntry or AssetKind.TypeMatchupEntry
            or AssetKind.ExclusiveEntry or AssetKind.ShopEntry)
        {
            image.Source = null;
            image.Width = 0;
            return;
        }

        var key = (kind, id);
        if (!_listSpriteCache.TryGetValue(key, out var bitmap))
        {
            RgbaImage? sprite = kind switch
            {
                AssetKind.MonsterEntry => _sprites?.TryGetStandingThumbnail(id),
                AssetKind.ItemEntry => _icons?.TryGetItem(id),
                _ => null,
            };
            if (sprite is null)
            {
                image.Source = null;
                return;
            }

            bitmap = RgbaBitmap.ToWriteable(sprite);
            _listSpriteCache[key] = bitmap;
        }

        image.Source = bitmap;
    }

    private void RebuildForm(AssetDescriptor asset)
    {
        _formHost.Children.Clear();
        _learnsetRows.Clear();
        _shopRows.Clear();
        if (!int.TryParse(asset.Metadata.GetValueOrDefault("id"), out var id))
            return;
        if (asset.Kind is AssetKind.MonsterEntry or AssetKind.MoveEntry or AssetKind.ItemEntry &&
            (_tables is null || _charmap is null))
            return;

        _suppress = true;
        switch (asset.Kind)
        {
            case AssetKind.MonsterEntry:
                BuildMonsterForm(id);
                break;
            case AssetKind.MoveEntry:
                BuildMoveForm(id);
                break;
            case AssetKind.ItemEntry:
                BuildItemForm(id);
                break;
            case AssetKind.FriendAreaEntry:
                BuildFriendAreaForm(id);
                break;
            case AssetKind.TypeMatchupEntry:
                BuildTypeForm(id);
                break;
            case AssetKind.ExclusiveEntry:
                BuildExclusiveForm(id);
                break;
            case AssetKind.ShopEntry:
                BuildShopForm(id);
                break;
        }

        _suppress = false;
    }

    private void BuildMonsterForm(int id)
    {
        var entry = DataTableCodec.ReadMonster(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;

        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("HP", entry.BaseHp, 1, 999, SaveMonster));
        _formHost.Children.Add(SpinRow("Exp yield", entry.ExpYield, 0, 99999, SaveMonster));
        _formHost.Children.Add(SpinRow("Recruit", entry.RecruitRate, -999, 999, SaveMonster));
        _formHost.Children.Add(ComboRow("Type 1", DataTableEnums.TypePicks, entry.Type1, SaveMonster));
        _formHost.Children.Add(ComboRow("Type 2", DataTableEnums.TypePicks, entry.Type2, SaveMonster));
        _formHost.Children.Add(ComboRow("Ability 1", DataTableEnums.AbilityPicks, entry.Ability1, SaveMonster));
        _formHost.Children.Add(ComboRow("Ability 2", DataTableEnums.AbilityPicks, entry.Ability2, SaveMonster));
        _formHost.Children.Add(ComboRow("Friend area", DataTableEnums.FriendAreaPicks, entry.FriendArea, SaveMonster));
        _formHost.Children.Add(SpinRow("Atk", entry.BaseAtk, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Sp. Atk", entry.BaseSpAtk, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Def", entry.BaseDef, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Sp. Def", entry.BaseSpDef, 0, 255, SaveMonster));
        _formHost.Children.Add(SpinRow("Weight", entry.Weight, 0, 65535, SaveMonster));
        _formHost.Children.Add(SpinRow("Size", entry.Size, 0, 65535, SaveMonster));
        _formHost.Children.Add(SpinRow("Body", entry.BodySize, 0, 255, SaveMonster));

        _formHost.Children.Add(EditorChrome.SectionHeader("Evolution"));
        _formHost.Children.Add(ComboRow("From", _monsterPicks, entry.EvolveFrom, SaveMonster));
        _formHost.Children.Add(ComboRow("Method", DataTableEnums.EvolveTypePicks, entry.EvolveType, SaveMonster));
        _formHost.Children.Add(SpinRow("Value", entry.EvolveRequirement, 0, 999, SaveMonster));
        _formHost.Children.Add(ComboRow("Extra", DataTableEnums.EvolveExtraPicks, entry.EvolveExtra, SaveMonster));
        var into = EvolvesIntoNames(id);
        if (into.Count > 0)
        {
            _formHost.Children.Add(new TextBlock
            {
                Text = "Evolves into: " + string.Join(", ", into),
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontMeta,
                Foreground = EditorTheme.TextMutedBrush,
                TextWrapping = TextWrapping.Wrap,
                Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, EditorTheme.Space4, EditorTheme.Space2),
            });
        }

        _formHost.Children.Add(EditorChrome.SectionHeader("Level-up"));
        var learnHost = new StackPanel { Spacing = EditorTheme.Space1, Name = "LearnsetHost" };
        foreach (var move in entry.LevelUpMoves)
            learnHost.Children.Add(BuildLearnsetRow(move));
        _formHost.Children.Add(learnHost);
        var add = EditorChrome.ToolButton("Add move");
        add.HorizontalAlignment = HorizontalAlignment.Left;
        add.Click += (_, _) =>
        {
            var pick = _movePicks.FirstOrDefault();
            learnHost.Children.Add(BuildLearnsetRow(new LevelUpMove(pick?.Id ?? 1, 1)));
            SaveMonster();
        };
        _formHost.Children.Add(add);
    }

    private Control BuildLearnsetRow(LevelUpMove move)
    {
        var level = Spin(move.Level, 1, 100, 56);
        var combo = Combo(_movePicks, move.MoveId, ComboWidth);
        var rowState = new LearnsetRow(level, combo);
        _learnsetRows.Add(rowState);
        level.ValueChanged += (_, _) => SaveMonster();
        combo.SelectionChanged += (_, _) => SaveMonster();
        var remove = EditorChrome.IconButton("−", tip: "Remove");
        remove.Click += (_, _) =>
        {
            _learnsetRows.Remove(rowState);
            if (level.Parent is Control row && row.Parent is Panel host)
                host.Children.Remove(row);
            SaveMonster();
        };
        return new StackPanel
        {
            Orientation = Orientation.Horizontal,
            Spacing = EditorTheme.Space2,
            Children =
            {
                Label("Lv"),
                level,
                combo,
                remove,
            },
        };
    }

    private void BuildMoveForm(int id)
    {
        var entry = DataTableCodec.ReadMove(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("Power", entry.BasePower, 0, 999, SaveMove));
        _formHost.Children.Add(SpinRow("PP", entry.BasePp, 1, 99, SaveMove));
        _formHost.Children.Add(ComboRow("Type", DataTableEnums.TypePicks, entry.Type, SaveMove));
        _formHost.Children.Add(ComboRow("Category", DataTableEnums.MoveCategoryPicks, entry.Category, SaveMove));
        _formHost.Children.Add(SpinRow("Accuracy 1", entry.Accuracy1, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("Accuracy 2", entry.Accuracy2, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("AI accuracy", entry.AccuracyAi, 0, 255, SaveMove));
        _formHost.Children.Add(SpinRow("Crit", entry.CritChance, 0, 255, SaveMove));
        _formHost.Children.Add(DescriptionBox(entry.Description, SaveMove));
    }

    private void BuildItemForm(int id)
    {
        var entry = DataTableCodec.ReadItem(ActiveRom, _tables!, id, _charmap);
        if (entry is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(SpinRow("Buy", (int)entry.BuyPrice, 0, 99999, SaveItem));
        _formHost.Children.Add(SpinRow("Sell", (int)entry.SellPrice, 0, 99999, SaveItem));
        _formHost.Children.Add(ComboRow("Category", DataTableEnums.ItemCategoryPicks, entry.Category, SaveItem));
        _formHost.Children.Add(ComboRow("Effect", _movePicks, entry.MoveId, SaveItem));
        _formHost.Children.Add(DescriptionBox(entry.Description, SaveItem));
    }

    private void BuildFriendAreaForm(int id)
    {
        if (_friendTables is null)
            return;
        var entry = FriendAreaCodec.Read(ActiveRom, _friendTables, id);
        if (entry is null)
            return;

        _formHost.Children.Add(EditorChrome.SectionHeader(entry.Name));
        _formHost.Children.Add(ComboRow("Unlock", FriendAreaCodec.UnlockPicks, (int)entry.Unlock, SaveFriendArea));
        _formHost.Children.Add(SpinRow("Price", (int)entry.Price, 0, 99999, SaveFriendArea));
        _formHost.Children.Add(SpinRow("Capacity", entry.Capacity, 0, 99, SaveFriendArea));
        _formHost.Children.Add(EditorChrome.SectionHeader("Map placement"));
        _formHost.Children.Add(ComboRow("Location", FriendAreaCodec.LocationPicks, entry.LocationId, SaveFriendArea));
        _formHost.Children.Add(SpinRow("Map X", entry.MapX, 0, 512, SaveFriendArea));
        _formHost.Children.Add(SpinRow("Map Y", entry.MapY, 0, 512, SaveFriendArea));
        if (!string.IsNullOrWhiteSpace(entry.SceneBma))
        {
            _formHost.Children.Add(EditorChrome.PropertyRow("Scene", new TextBlock
            {
                Text = GroundMapNames.FormatListName(entry.SceneBma),
                FontFamily = EditorTheme.UiFont,
                FontSize = EditorTheme.FontLabel,
                Foreground = EditorTheme.TextPrimaryBrush,
                VerticalAlignment = VerticalAlignment.Center,
                TextWrapping = TextWrapping.Wrap,
            }));
        }

        _formHost.Children.Add(EditorChrome.SectionHeader("Background"));
        var upload = EditorChrome.ToolButton("Upload new image…");
        upload.HorizontalAlignment = HorizontalAlignment.Left;
        upload.Margin = new Thickness(EditorTheme.Space4, 0, 0, EditorTheme.Space2);
        upload.Click += async (_, _) => await UploadBackgroundAsync(entry.SceneBma);
        _formHost.Children.Add(upload);
        _formHost.Children.Add(new TextBlock
        {
            Text = FriendAreaBackgroundUpload.RestrictionsText,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontMeta,
            Foreground = EditorTheme.TextMutedBrush,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, EditorTheme.Space2),
            TextWrapping = TextWrapping.Wrap,
        });

        var preview = new Image
        {
            Stretch = Stretch.Uniform,
            HorizontalAlignment = HorizontalAlignment.Left,
        };
        RenderOptions.SetBitmapInterpolationMode(preview, BitmapInterpolationMode.None);
        var rgba = FriendAreaIntroArt.TryLoadSceneBackground(ActiveRom, _catalog, entry.SceneBma);
        if (rgba is not null)
        {
        preview.Source = RgbaBitmap.ToWriteable(rgba);
            preview.Width = rgba.Width;
            preview.Height = rgba.Height;
        }

        _formHost.Children.Add(new Border
        {
            HorizontalAlignment = HorizontalAlignment.Left,
            Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space2, 0, EditorTheme.Space4),
            Background = EditorTheme.InputBgBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            ClipToBounds = true,
            Child = rgba is not null
                ? preview
                : new TextBlock
                {
                    Text = "No scene map for this friend area.",
                    FontFamily = EditorTheme.UiFont,
                    FontSize = EditorTheme.FontMeta,
                    Foreground = EditorTheme.TextMutedBrush,
                    TextWrapping = TextWrapping.Wrap,
                    VerticalAlignment = VerticalAlignment.Center,
                    HorizontalAlignment = HorizontalAlignment.Center,
                    Margin = new Thickness(EditorTheme.Space3),
                    Width = 240,
                    Height = 160,
                },
        });
    }

    private IReadOnlyList<string> EvolvesIntoNames(int species)
    {
        if (_tables is null)
            return [];
        var names = new List<string>();
        for (var id = 0; id < _tables.MonsterCount; id++)
        {
            var off = _tables.MonsterData + id * DataTableTables.MonsterEntrySize;
            if (!ActiveRom.IsRangeValid(off + 0x34, 4))
                continue;
            if (ActiveRom.ReadInt16(off + 0x34) != species || ActiveRom.ReadUInt16(off + 0x36) == 0)
                continue;
            names.Add(_monsterPicks.FirstOrDefault(p => p.Id == id)?.Name ?? DungeonBuiltinNames.Species(id));
        }

        return names;
    }

    private void BuildTypeForm(int attack)
    {
        if (_gameplay is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader($"{DataTableEnums.TypeName(attack)} attacking"));
        for (var defend = 0; defend < GameplayTableTables.TypeCount; defend++)
        {
            var value = GameplayTableCodec.ReadMatchup(ActiveRom, _gameplay, attack, defend);
            _formHost.Children.Add(ComboRow($"vs {DataTableEnums.TypeName(defend)}", DataTableEnums.EffectivenessPicks, value, SaveType, MatchupLabelWidth));
        }
    }

    private void BuildExclusiveForm(int index)
    {
        if (_gameplay is null)
            return;
        var entry = GameplayTableCodec.ReadExclusive(ActiveRom, _gameplay, index);
        if (entry is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(DungeonBuiltinNames.Species(entry.Species)));
        _formHost.Children.Add(ComboRow("Species", _monsterPicks, entry.Species, SaveExclusive));
        _formHost.Children.Add(ComboRow("Red", YesNoPicks, entry.InRed ? 1 : 0, SaveExclusive));
        _formHost.Children.Add(ComboRow("Blue", YesNoPicks, entry.InBlue ? 1 : 0, SaveExclusive));
    }

    private void BuildShopForm(int id)
    {
        var shop = _shops.FirstOrDefault(s => s.Id == id);
        if (shop is null)
            return;
        _formHost.Children.Add(EditorChrome.SectionHeader(shop.Name));
        var host = new StackPanel { Spacing = EditorTheme.Space1 };
        foreach (var item in GameplayTableCodec.ReadShop(ActiveRom, shop))
            host.Children.Add(BuildShopItemRow(item));
        _formHost.Children.Add(host);
        var add = EditorChrome.ToolButton("Add item");
        add.HorizontalAlignment = HorizontalAlignment.Left;
        add.Margin = new Thickness(EditorTheme.Space4, EditorTheme.Space1, 0, 0);
        add.Click += (_, _) =>
        {
            var pick = _itemPicks.FirstOrDefault(p => p.Id != 0) ?? _itemPicks.FirstOrDefault();
            host.Children.Add(BuildShopItemRow(new ShopItemWeight(pick?.Id ?? 1, 1000)));
            SaveShop();
        };
        _formHost.Children.Add(add);
    }

    private Control BuildShopItemRow(ShopItemWeight item)
    {
        var combo = Combo(_itemPicks, item.ItemId, ComboWidth);
        var weight = Spin(item.Weight, 1, 10000, SpinWidth);
        var rowState = new ShopItemRow(combo, weight);
        _shopRows.Add(rowState);
        combo.SelectionChanged += (_, _) => SaveShop();
        weight.ValueChanged += (_, _) => SaveShop();
        var remove = EditorChrome.IconButton("−", tip: "Remove");
        remove.Click += (_, _) =>
        {
            _shopRows.Remove(rowState);
            if (combo.Parent is Control row && row.Parent is Panel host)
                host.Children.Remove(row);
            SaveShop();
        };
        var grid = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions("*,Auto,Auto"),
            Margin = new Thickness(EditorTheme.Space4, 0),
            Height = EditorTheme.ControlHeight + 2,
        };
        combo.HorizontalAlignment = HorizontalAlignment.Stretch;
        combo.Width = double.NaN;
        combo.MinWidth = 0;
        grid.Children.Add(combo);
        Grid.SetColumn(weight, 1);
        weight.Margin = new Thickness(EditorTheme.Space2, 0, 0, 0);
        grid.Children.Add(weight);
        Grid.SetColumn(remove, 2);
        grid.Children.Add(remove);
        return grid;
    }

    private static Button AddToolbarButton(string text, Action click)
    {
        var button = EditorChrome.ToolButton(text);
        button.Click += (_, _) => click();
        return button;
    }

    private void AddEntry()
    {
        if (_workingRom is null || _table is null)
            return;
        var cloneId = _selected is not null && int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id)
            ? id
            : 1;
        var buffer = _workingRom.BeginMutate();
        int newId;
        try
        {
            newId = _table.Kind switch
            {
                AssetKind.MonsterTable or AssetKind.MonsterEntry when _tables is not null =>
                    DataTableListEditing.AddMonster(buffer, _tables, cloneId),
                AssetKind.MoveTable or AssetKind.MoveEntry when _tables is not null =>
                    DataTableListEditing.AddMove(buffer, _tables, cloneId),
                AssetKind.ItemTable or AssetKind.ItemEntry when _tables is not null =>
                    DataTableListEditing.AddItem(buffer, _tables, cloneId),
                AssetKind.FriendAreaTable or AssetKind.FriendAreaEntry when _friendTables is not null =>
                    DataTableListEditing.AddFriendArea(buffer, _friendTables, cloneId),
                _ => -1,
            };
        }
        catch (Exception exception)
        {
            _status.Text = exception.Message;
            return;
        }

        if (newId < 0)
        {
            _status.Text = "This table cannot add an entry.";
            return;
        }

        _workingRom.Adopt(buffer);
        ReindexAndSelect(newId);
        _status.Text = $"Added entry {newId:D3} (ROM shifted). Build ROM to export.";
    }

    private void DeleteEntry()
    {
        if (_workingRom is null || _selected is null || _table is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id) || id <= 0)
        {
            _status.Text = "Select an entry to delete.";
            return;
        }

        var buffer = _workingRom.BeginMutate();
        var ok = _table.Kind switch
        {
            AssetKind.MonsterTable or AssetKind.MonsterEntry when _tables is not null =>
                DataTableListEditing.DeleteMonster(buffer, _tables, id),
            AssetKind.MoveTable or AssetKind.MoveEntry when _tables is not null =>
                DataTableListEditing.DeleteMove(buffer, _tables, id),
            AssetKind.ItemTable or AssetKind.ItemEntry when _tables is not null =>
                DataTableListEditing.DeleteItem(buffer, _tables, id),
            AssetKind.FriendAreaTable or AssetKind.FriendAreaEntry when _friendTables is not null && _tables is not null =>
                DataTableListEditing.DeleteFriendArea(buffer, _friendTables, _tables, id),
            _ => false,
        };
        if (!ok)
        {
            _status.Text = "Could not delete this entry.";
            return;
        }

        _workingRom.Adopt(buffer);
        ReindexAndSelect(Math.Max(1, id - 1));
        _status.Text = $"Deleted entry {id:D3}; later IDs shifted down. Build ROM to export.";
    }

    private async Task UploadBackgroundAsync(string sceneBma)
    {
        if (_workingRom is null)
        {
            _status.Text = "Open a ROM to upload a background.";
            return;
        }

        if (string.IsNullOrWhiteSpace(sceneBma))
        {
            _status.Text = "This friend area has no scene map to replace.";
            return;
        }

        var top = TopLevel.GetTopLevel(this);
        if (top is null)
            return;
        var files = await top.StorageProvider.OpenFilePickerAsync(new FilePickerOpenOptions
        {
            Title = "Friend Area background PNG",
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
            _status.Text = "Could not decode that PNG.";
            return;
        }

        var rejected = FriendAreaBackgroundUpload.Validate(image);
        if (rejected is not null)
        {
            _status.Text = rejected;
            return;
        }

        var buffer = _workingRom.BeginMutate();
        var dirty = new List<RomSpan>();
        var error = FriendAreaBackgroundUpload.TryWrite(buffer, _catalog, sceneBma, image, dirty);
        if (error is not null)
        {
            _status.Text = error;
            return;
        }

        _workingRom.CommitDirty(buffer, dirty);

        _status.Text = $"Background saved for {sceneBma} (Build ROM to export).";
        if (_selected is not null)
            RebuildForm(_selected);
    }

    private void ReindexAndSelect(int focusId)
    {
        if (_catalog is null || _charmap is null)
            return;
        var indexed = DataTableIndexer.Index(ActiveRom, _charmap, tables: _tables, friendTables: _friendTables);
        _catalog.ReplaceCategory(AssetCategory.DataTables, indexed);
        var kind = _table?.Kind switch
        {
            AssetKind.MonsterEntry => AssetKind.MonsterTable,
            AssetKind.MoveEntry => AssetKind.MoveTable,
            AssetKind.ItemEntry => AssetKind.ItemTable,
            AssetKind.FriendAreaEntry => AssetKind.FriendAreaTable,
            AssetKind.TypeMatchupEntry => AssetKind.TypeMatchupTable,
            AssetKind.ExclusiveEntry => AssetKind.ExclusiveTable,
            AssetKind.ShopEntry => AssetKind.ShopTable,
            var tableKind => tableKind,
        };
        var table = indexed.FirstOrDefault(a => a.Kind == kind)
                    ?? indexed.FirstOrDefault();
        if (table is null)
            return;
        var focus = table.Children.FirstOrDefault(c => c.Metadata.GetValueOrDefault("id") == focusId.ToString())
                    ?? table.Children.FirstOrDefault();
        ShowAsset(focus ?? table);
    }

    private void SaveMonster()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        var learnset = _learnsetRows
            .Select(row => new LevelUpMove(SelectedId(row.Move), (int)(row.Level.Value ?? 1)))
            .ToArray();
        Apply((buffer, dirty) => DataTableCodec.WriteMonster(buffer, _tables, id, _charmap, new DataTableMonsterPatch(
            BaseHp: IntVal("HP"),
            ExpYield: IntVal("Exp yield"),
            Type1: ComboVal("Type 1"),
            Type2: ComboVal("Type 2"),
            Ability1: ComboVal("Ability 1"),
            Ability2: ComboVal("Ability 2"),
            FriendArea: ComboVal("Friend area"),
            BaseAtk: IntVal("Atk"),
            BaseSpAtk: IntVal("Sp. Atk"),
            BaseDef: IntVal("Def"),
            BaseSpDef: IntVal("Sp. Def"),
            Weight: IntVal("Weight"),
            Size: IntVal("Size"),
            BodySize: IntVal("Body"),
            RecruitRate: IntVal("Recruit"),
            LevelUpMoves: learnset,
            EvolveFrom: ComboVal("From"),
            EvolveType: ComboVal("Method"),
            EvolveRequirement: IntVal("Value"),
            EvolveExtra: ComboVal("Extra")), dirty));
    }

    private void SaveMove()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        Apply((buffer, dirty) => DataTableCodec.WriteMove(buffer, _tables, id, _charmap, new DataTableMovePatch(
            BasePower: IntVal("Power"),
            BasePp: IntVal("PP"),
            Type: ComboVal("Type"),
            Category: ComboVal("Category"),
            Accuracy1: IntVal("Accuracy 1"),
            Accuracy2: IntVal("Accuracy 2"),
            AccuracyAi: IntVal("AI accuracy"),
            CritChance: IntVal("Crit"),
            Description: DescVal()), dirty));
    }

    private void SaveItem()
    {
        if (_suppress || _workingRom is null || _tables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        Apply((buffer, dirty) => DataTableCodec.WriteItem(buffer, _tables, id, _charmap, new DataTableItemPatch(
            BuyPrice: (uint)IntVal("Buy"),
            SellPrice: (uint)IntVal("Sell"),
            Category: ComboVal("Category"),
            MoveId: ComboVal("Effect"),
            Description: DescVal()), dirty));
    }

    private void SaveFriendArea()
    {
        if (_suppress || _workingRom is null || _friendTables is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;

        var locationId = ComboVal("Location");
        var current = FriendAreaCodec.Read(ActiveRom, _friendTables, id);
        var moved = current is not null && current.LocationId != locationId;
        Apply((buffer, dirty) =>
        {
            if (!FriendAreaCodec.WriteSettings(buffer, _friendTables, id, new FriendAreaSettingsPatch(
                    Capacity: IntVal("Capacity"),
                    Unlock: (FriendAreaUnlock)ComboVal("Unlock"),
                    Price: (uint)IntVal("Price")), dirty))
                return false;
            if (moved)
                return FriendAreaCodec.WriteLocation(buffer, _friendTables, id, locationId, dirty);
            return FriendAreaCodec.WriteMapPin(buffer, _friendTables, id, IntVal("Map X"), IntVal("Map Y"), dirty);
        });

        if (moved && _selected is not null)
            RebuildForm(_selected);
    }

    private void SaveType()
    {
        if (_suppress || _workingRom is null || _gameplay is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var attack))
            return;
        Apply((buffer, dirty) =>
        {
            for (var defend = 0; defend < GameplayTableTables.TypeCount; defend++)
            {
                var label = $"vs {DataTableEnums.TypeName(defend)}";
                if (!GameplayTableCodec.WriteMatchup(buffer, _gameplay, attack, defend, ComboVal(label), dirty))
                    return false;
            }

            return true;
        });
    }

    private void SaveExclusive()
    {
        if (_suppress || _workingRom is null || _gameplay is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var index))
            return;
        Apply((buffer, dirty) => GameplayTableCodec.WriteExclusive(buffer, _gameplay, index, new ExclusivePokemonPatch(
            Species: ComboVal("Species"),
            InRed: ComboVal("Red") != 0,
            InBlue: ComboVal("Blue") != 0), dirty));
    }

    private void SaveShop()
    {
        if (_suppress || _workingRom is null || _selected is null)
            return;
        if (!int.TryParse(_selected.Metadata.GetValueOrDefault("id"), out var id))
            return;
        var shop = _shops.FirstOrDefault(s => s.Id == id);
        if (shop is null)
            return;
        var items = _shopRows
            .Select(row => new ShopItemWeight(SelectedId(row.Item), (int)(row.Weight.Value ?? 1)))
            .ToArray();
        Apply((buffer, dirty) => GameplayTableCodec.WriteShopItems(buffer, ActiveRom, shop, items, dirty));
    }

    private void Apply(Func<MutableRom, List<RomSpan>, bool> write)
    {
        if (_workingRom is null)
            return;
        var buffer = _workingRom.BeginMutate();
        var dirty = new List<RomSpan>();
        if (!write(buffer, dirty))
        {
            _status.Text = "Could not write this field in-place.";
            return;
        }

        foreach (var span in dirty)
            _workingRom.Commit(buffer, span.Offset, span.Length);
        _status.Text = "Saved to working ROM (Build ROM to export).";
    }

    private int IntVal(string label) =>
        FindLabeled<CompactSpinBox>(label) is { Value: decimal v } ? (int)v : 0;

    private int ComboVal(string label) =>
        FindLabeled<InstantComboBox>(label) is { SelectedItem: DataTablePick pick } ? pick.Id : 0;

    private string DescVal()
    {
        foreach (var panel in _formHost.Children.OfType<StackPanel>())
        {
            if (panel.Children.OfType<TextBox>().FirstOrDefault() is { } box)
                return box.Text ?? "";
        }

        return "";
    }

    private T? FindLabeled<T>(string label) where T : class
    {
        foreach (var child in _formHost.Children)
        {
            if (child is Grid grid &&
                grid.Children.OfType<TextBlock>().Any(t => t.Text == label))
                return grid.Children.OfType<T>().FirstOrDefault();
        }

        return null;
    }

    private Control SpinRow(string label, int value, int min, int max, Action save)
    {
        var spin = Spin(value, min, max, SpinWidth);
        spin.ValueChanged += (_, _) => save();
        return EditorChrome.PropertyRow(label, spin);
    }

    private Control ComboRow(string label, IReadOnlyList<DataTablePick> picks, int selected, Action save, double? labelWidth = null)
    {
        var combo = Combo(picks, selected, ComboWidth);
        combo.SelectionChanged += (_, _) => save();
        return EditorChrome.PropertyRow(label, combo, labelWidth);
    }

    private Control DescriptionBox(string text, Action save)
    {
        var box = new TextBox
        {
            Text = text,
            AcceptsReturn = true,
            TextWrapping = TextWrapping.Wrap,
            MinHeight = 168,
            Height = 168,
            MaxHeight = 240,
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Padding = new Thickness(6, 6),
            CornerRadius = new CornerRadius(0),
            BorderThickness = new Thickness(1),
            BorderBrush = EditorTheme.BorderSubtleBrush,
            Background = EditorTheme.InputBgBrush,
            Foreground = EditorTheme.TextPrimaryBrush,
        };
        ScrollViewer.SetVerticalScrollBarVisibility(box, Avalonia.Controls.Primitives.ScrollBarVisibility.Auto);
        box.LostFocus += (_, _) => save();
        return new StackPanel
        {
            Children =
            {
                EditorChrome.SectionHeader("Description"),
                box,
            },
        };
    }

    private static CompactSpinBox Spin(int value, int min, int max, double width) => new()
    {
        Minimum = min,
        Maximum = max,
        Value = value,
        Width = width,
        MinWidth = width,
        HorizontalAlignment = HorizontalAlignment.Left,
    };

    private static InstantComboBox Combo(IReadOnlyList<DataTablePick> picks, int selectedId, double width)
    {
        var combo = new InstantComboBox
        {
            ItemsSource = picks,
            SelectedItem = picks.FirstOrDefault(p => p.Id == selectedId) ?? picks.FirstOrDefault(),
            Width = width,
            MinWidth = width,
            HorizontalAlignment = HorizontalAlignment.Left,
            MaxDropDownHeight = 280,
        };
        return combo;
    }

    private static TextBlock Label(string text) => new()
    {
        Text = text,
        FontFamily = EditorTheme.UiFont,
        FontSize = EditorTheme.FontMeta,
        Foreground = EditorTheme.TextMutedBrush,
        VerticalAlignment = VerticalAlignment.Center,
    };

    private static int SelectedId(InstantComboBox combo) =>
        combo.SelectedItem is DataTablePick pick ? pick.Id : 0;

    private sealed record DataTableListItem(AssetDescriptor Asset);

    private sealed record LearnsetRow(CompactSpinBox Level, InstantComboBox Move);

    private sealed record ShopItemRow(InstantComboBox Item, CompactSpinBox Weight);
}
