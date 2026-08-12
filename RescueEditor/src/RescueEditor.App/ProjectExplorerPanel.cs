using Avalonia;
using Avalonia.Controls;
using Avalonia.Layout;
using Avalonia.Media;
using RescueEditor.Core;

namespace RescueEditor.App;

public sealed class ProjectExplorerPanel : UserControl
{
    private readonly TreeView _tree;
    private readonly TextBox _filterBox;
    private List<ExplorerNode> _roots = new();
    public event EventHandler<ExplorerNode?>? SelectionChanged;

    public ProjectExplorerPanel()
    {
        _tree = new TreeView { SelectionMode = SelectionMode.Single };
        EditorChrome.StyleTree(_tree);
        _tree.SelectionChanged += (_, _) =>
        {
            var node = _tree.SelectedItem switch
            {
                ExplorerNode explorerNode => explorerNode,
                TreeViewItem { Tag: ExplorerNode tagged } => tagged,
                _ => null,
            };
            SelectionChanged?.Invoke(this, node);
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
        body.Children.Add(_tree);

        Content = EditorChrome.VerticalPane(body, rightEdge: true);
        MinWidth = 180;
        MaxWidth = 480;
    }

    public void Clear()
    {
        _roots = new();
        _filterBox.Text = string.Empty;
        _tree.ItemsSource = null;
        _tree.SelectedItem = null;
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
        if (_tree.ItemsSource is not IEnumerable<TreeViewItem> roots)
            return;
        foreach (var root in roots)
        {
            if (FindAndSelect(root, asset))
                return;
        }
    }

    public void SelectScene(int mapId)
    {
        if (_tree.ItemsSource is not IEnumerable<TreeViewItem> roots)
            return;
        foreach (var root in roots)
        {
            if (FindAndSelectScene(root, mapId))
                return;
        }
    }

    private void ApplyFilter()
    {
        var query = (_filterBox.Text ?? string.Empty).Trim();
        if (string.IsNullOrEmpty(query))
        {
            _tree.ItemsSource = ToTreeItems(_roots, expandMatches: false);
            return;
        }

        var filtered = FilterNodes(_roots, query);
        _tree.ItemsSource = ToTreeItems(filtered, expandMatches: true);
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

    private static bool FindAndSelect(TreeViewItem item, AssetDescriptor asset)
    {
        if (item.Tag is AssetExplorerNode node && ReferenceEquals(node.Asset, asset))
        {
            item.IsSelected = true;
            ExpandParents(item);
            return true;
        }

        if (item.ItemsSource is IEnumerable<TreeViewItem> children)
        {
            foreach (var child in children)
            {
                if (FindAndSelect(child, asset))
                    return true;
            }
        }
        return false;
    }

    private static bool FindAndSelectScene(TreeViewItem item, int mapId)
    {
        if (item.Tag is AssetExplorerNode { Scene: { } scene } && scene.MapId == mapId)
        {
            item.IsSelected = true;
            ExpandParents(item);
            return true;
        }

        if (item.ItemsSource is IEnumerable<TreeViewItem> children)
        {
            foreach (var child in children)
            {
                if (FindAndSelectScene(child, mapId))
                    return true;
            }
        }
        return false;
    }

    private static void ExpandParents(TreeViewItem item)
    {
        Control? current = item;
        while (current is not null)
        {
            if (current is TreeViewItem tvi)
                tvi.IsExpanded = true;
            current = current.Parent as Control;
        }
    }

    private static List<TreeViewItem> ToTreeItems(IEnumerable<ExplorerNode> nodes, bool expandMatches)
    {
        var items = new List<TreeViewItem>();
        foreach (var node in nodes)
        {
            var item = new TreeViewItem
            {
                Header = Prefix(node) + node.Title,
                Tag = node,
                IsExpanded = expandMatches && node.Children.Count > 0,
                FontFamily = EditorTheme.UiFont,
                FontSize = node is CategoryExplorerNode ? EditorTheme.FontBody : EditorTheme.FontLabel,
                FontWeight = node is CategoryExplorerNode ? FontWeight.SemiBold : FontWeight.Normal,
                Foreground = node switch
                {
                    CategoryExplorerNode => EditorTheme.TextSecondaryBrush,
                    SceneGroupExplorerNode => EditorTheme.TextMutedBrush,
                    _ => EditorTheme.TextPrimaryBrush,
                },
            };
            if (node.Children.Count > 0)
                item.ItemsSource = ToTreeItems(node.Children, expandMatches);
            items.Add(item);
        }
        return items;
    }

    private static string Prefix(ExplorerNode node) => node switch
    {
        CategoryExplorerNode => "",
        SceneGroupExplorerNode => "▾ ",
        AssetExplorerNode => "◇ ",
        _ => "",
    };
}
