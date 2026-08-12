using Avalonia;
using Avalonia.Controls;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.VisualTree;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class ProjectExplorerPanel : UserControl
{
    private readonly ScrollViewer _scroller;
    private readonly StackPanel _host;
    private readonly TextBox _filterBox;
    private List<ExplorerNode> _roots = new();
    private readonly Dictionary<ExplorerNode, Control> _nodeControls = new();
    private Control? _selectedControl;
    public event EventHandler<ExplorerNode?>? SelectionChanged;

    public ProjectExplorerPanel()
    {
        _host = new StackPanel { Spacing = 0 };
        _scroller = new ScrollViewer
        {
            Content = _host,
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Disabled,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
        };

        _filterBox = new TextBox
        {
            PlaceholderText = "Filter scenes…",
            FontFamily = EditorTheme.UiFont,
            FontSize = EditorTheme.FontLabel,
            Height = EditorTheme.ControlHeight,
            Margin = new Thickness(EditorTheme.Space2),
        };
        EditorChrome.StyleEditor(_filterBox);
        _filterBox.FontFamily = EditorTheme.UiFont;
        _filterBox.TextChanged += (_, _) => ApplyFilter();

        var filterHost = new Border
        {
            Background = EditorTheme.PanelBgRaisedBrush,
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(0, 0, 0, 1),
            Child = _filterBox,
        };

        var body = new DockPanel { LastChildFill = true };
        var header = EditorChrome.PanelHeader("Project");
        DockPanel.SetDock(header, Dock.Top);
        DockPanel.SetDock(filterHost, Dock.Top);
        body.Children.Add(header);
        body.Children.Add(filterHost);
        body.Children.Add(_scroller);

        Content = EditorChrome.VerticalPane(body, rightEdge: true);
        MinWidth = 180;
        MaxWidth = 480;
    }

    public void Clear()
    {
        _roots = new();
        _filterBox.Text = string.Empty;
        _host.Children.Clear();
        _nodeControls.Clear();
        _selectedControl = null;
    }

    public void Build(
        AssetCatalog catalog,
        SceneDatabase? scenes,
        IReadOnlyList<(string Name, AssetCategory Category)> categories)
    {
        var roots = new List<ExplorerNode>();
        foreach (var (name, category) in categories)
        {
            var categoryNode = new CategoryExplorerNode
            {
                Title = $"{name} ({catalog.ForCategory(category).Count})",
                Category = category,
            };

            if (category == AssetCategory.Scenes && scenes is not null)
            {
                var sceneAssets = catalog.ForCategory(AssetCategory.Scenes)
                    .Select(a => a.Metadata.TryGetValue("mapId", out var id) && int.TryParse(id, out var mapId)
                        ? (MapId: mapId, Asset: a)
                        : (MapId: -1, Asset: a))
                    .Where(x => x.MapId >= 0)
                    .GroupBy(x => x.MapId)
                    .ToDictionary(g => g.Key, g => g.First().Asset);

                foreach (var item in SceneExplorerLayout.Build(scenes.Scenes))
                {
                    sceneAssets.TryGetValue(item.MapId, out var asset);
                    categoryNode.Children.Add(new AssetExplorerNode
                    {
                        Title = item.Title,
                        Asset = asset ?? new AssetDescriptor
                        {
                            Id = $"scene-{item.MapId}",
                            Name = item.Title,
                            Category = AssetCategory.Scenes,
                            Kind = AssetKind.Scene,
                            Offset = item.Scene.HeaderOffset,
                            Metadata = new Dictionary<string, string>
                            {
                                ["mapId"] = item.MapId.ToString(),
                            },
                        },
                        Scene = item.Scene,
                    });
                }
            }
            else
            {
                foreach (var asset in catalog.ForCategory(category))
                {
                    categoryNode.Children.Add(new AssetExplorerNode
                    {
                        Title = asset.DisplayName,
                        Asset = asset,
                    });
                }
            }

            roots.Add(categoryNode);
        }

        _roots = roots;
        ApplyFilter();
    }

    public void SelectAsset(AssetDescriptor asset)
    {
        foreach (var (node, control) in _nodeControls)
        {
            if (node is AssetExplorerNode assetNode && ReferenceEquals(assetNode.Asset, asset))
            {
                ExpandAncestors(control);
                SelectControl(control, node);
                return;
            }
        }
    }

    public void SelectScene(int mapId)
    {
        foreach (var (node, control) in _nodeControls)
        {
            if (node is AssetExplorerNode { Scene: { } scene } && scene.MapId == mapId)
            {
                ExpandAncestors(control);
                SelectControl(control, node);
                return;
            }
        }
    }

    private void ApplyFilter()
    {
        var query = (_filterBox.Text ?? string.Empty).Trim();
        var roots = string.IsNullOrEmpty(query) ? _roots : FilterNodes(_roots, query);
        _host.Children.Clear();
        _nodeControls.Clear();
        _selectedControl = null;
        foreach (var node in roots)
            _host.Children.Add(BuildNodeControl(node, depth: 0, expand: !string.IsNullOrEmpty(query)));
    }

    private Control BuildNodeControl(ExplorerNode node, int depth, bool expand)
    {
        if (node.Children.Count > 0)
        {
            // Expander: entire header row toggles open/closed (not chevron-only like TreeView).
            var expander = new Expander
            {
                Header = CreateHeaderLabel(node, depth),
                IsExpanded = expand || (node is CategoryExplorerNode && false),
                HorizontalAlignment = HorizontalAlignment.Stretch,
                HorizontalContentAlignment = HorizontalAlignment.Stretch,
                Padding = new Thickness(0),
                Margin = new Thickness(0),
                Tag = node,
            };
            var childHost = new StackPanel { Spacing = 0 };
            foreach (var child in node.Children)
                childHost.Children.Add(BuildNodeControl(child, depth + 1, expand));
            expander.Content = childHost;
            expander.Expanded += (_, _) => SelectionChanged?.Invoke(this, node);
            _nodeControls[node] = expander;
            return expander;
        }

        var row = CreateSelectableRow(node, depth);
        _nodeControls[node] = row;
        return row;
    }

    private Border CreateSelectableRow(ExplorerNode node, int depth)
    {
        var label = CreateHeaderLabel(node, depth);
        var row = new Border
        {
            Background = Brushes.Transparent,
            Child = label,
            Tag = node,
            HorizontalAlignment = HorizontalAlignment.Stretch,
            Padding = new Thickness(0, 2, 0, 2),
            Cursor = new Cursor(StandardCursorType.Hand),
        };
        row.PointerPressed += (_, e) =>
        {
            if (!e.GetCurrentPoint(row).Properties.IsLeftButtonPressed)
                return;
            SelectControl(row, node);
        };
        return row;
    }

    private static TextBlock CreateHeaderLabel(ExplorerNode node, int depth) => new()
    {
        Text = Prefix(node) + node.Title,
        FontFamily = EditorTheme.UiFont,
        FontSize = node is CategoryExplorerNode ? EditorTheme.FontBody : EditorTheme.FontLabel,
        FontWeight = node is CategoryExplorerNode ? FontWeight.SemiBold : FontWeight.Normal,
        Foreground = node switch
        {
            CategoryExplorerNode => EditorTheme.TextSecondaryBrush,
            SceneGroupExplorerNode => EditorTheme.TextMutedBrush,
            _ => EditorTheme.TextPrimaryBrush,
        },
        VerticalAlignment = VerticalAlignment.Center,
        TextTrimming = TextTrimming.CharacterEllipsis,
        Margin = new Thickness(8 + depth * 12, 4, 8, 4),
    };

    private void SelectControl(Control control, ExplorerNode node)
    {
        if (_selectedControl is Border previous)
            previous.Background = Brushes.Transparent;
        _selectedControl = control;
        if (control is Border border)
            border.Background = EditorTheme.AccentSoftBrush;
        SelectionChanged?.Invoke(this, node);
    }

    private static void ExpandAncestors(Control control)
    {
        Visual? current = control;
        while (current is not null)
        {
            if (current is Expander expander)
                expander.IsExpanded = true;
            current = current.GetVisualParent();
        }
    }

    private static List<ExplorerNode> FilterNodes(IEnumerable<ExplorerNode> nodes, string query)
    {
        var result = new List<ExplorerNode>();
        foreach (var node in nodes)
        {
            if (node is AssetExplorerNode asset)
            {
                if (asset.Title.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                    asset.Asset.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ||
                    (asset.Scene?.Name.Contains(query, StringComparison.OrdinalIgnoreCase) ?? false))
                {
                    result.Add(new AssetExplorerNode
                    {
                        Title = asset.Title,
                        Asset = asset.Asset,
                        Scene = asset.Scene,
                    });
                }
                continue;
            }

            var children = FilterNodes(node.Children, query);
            var selfMatch = node.Title.Contains(query, StringComparison.OrdinalIgnoreCase);
            if (children.Count == 0 && !selfMatch)
                continue;

            ExplorerNode clone = node switch
            {
                CategoryExplorerNode cat => new CategoryExplorerNode
                {
                    Title = cat.Title,
                    Category = cat.Category,
                },
                SceneGroupExplorerNode group => new SceneGroupExplorerNode
                {
                    Title = group.Title,
                    GroupKey = group.GroupKey,
                },
                FolderExplorerNode folder => new FolderExplorerNode { Title = folder.Title },
                _ => new FolderExplorerNode { Title = node.Title },
            };
            foreach (var child in children)
                clone.Children.Add(child);
            if (selfMatch && children.Count == 0)
            {
                foreach (var child in node.Children)
                    clone.Children.Add(child);
            }
            result.Add(clone);
        }
        return result;
    }

    private static string Prefix(ExplorerNode node) => node switch
    {
        CategoryExplorerNode => "",
        SceneGroupExplorerNode => "▾ ",
        AssetExplorerNode => "◇ ",
        _ => "",
    };
}
