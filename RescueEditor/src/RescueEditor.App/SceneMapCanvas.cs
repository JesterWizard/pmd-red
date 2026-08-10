using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Shapes;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using RescueEditor.Core;

namespace RescueEditor.App;

public enum SceneMapTool
{
    Select,
    Pan,
}

/// <summary>Interactive scene map with rulers, hit-testing, drag-move, pan, and grid.</summary>
public sealed class SceneMapCanvas : UserControl
{
    private readonly Image _image;
    private readonly Canvas _overlay;
    private readonly Border _host;
    private readonly ScrollViewer _scroller;
    private readonly Canvas _hRuler;
    private readonly Canvas _vRuler;
    private readonly TextBlock _coordLabel;
    private readonly TextBlock _zoomLabel;
    private readonly TextBlock _sceneLabel;

    private RomImage? _rom;
    private Scene? _scene;
    private SceneEntity? _selected;
    private int _group;
    private int _sector;
    private IReadOnlyCollection<int>? _visibleSectors;
    private ActorSpriteAtlas? _actorSprites;
    private ObjectSpriteAtlas? _objectSprites;
    private GroundEffectAtlas? _groundEffects;
    private bool _showLives = true;
    private bool _showObjects = true;
    private bool _showEffects = true;
    private bool _showEvents = true;
    private bool _showLinks = true;
    private bool _showGrid;
    private string? _hudDialogue;
    private Bitmap? _bitmap;
    private double _imageScale = 1.0;
    private int _imageWidth;
    private int _imageHeight;

    private bool _dragging;
    private bool _panning;
    private Point _dragStart;
    private CompactPos _dragOrigin;
    private Point _panStart;
    private Vector _panOffsetStart;

    public SceneMapTool Tool { get; set; } = SceneMapTool.Select;
    public bool SnapToGrid { get; set; } = true;
    public event EventHandler<SceneEntity?>? EntitySelected;
    public event EventHandler<SceneEntity>? EntityMoved;
    public event EventHandler<(double X, double Y)>? CursorMoved;
    public CompactPos? MovedPending { get; set; }

    public SceneMapCanvas()
    {
        _image = new Image
        {
            Stretch = Stretch.None,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
        };
        _overlay = new Canvas { IsHitTestVisible = false };
        var layer = new Panel { Children = { _image, _overlay } };
        _host = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            Child = layer,
            Cursor = new Cursor(StandardCursorType.Arrow),
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
        };
        _host.PointerPressed += OnPointerPressed;
        _host.PointerMoved += OnPointerMoved;
        _host.PointerReleased += OnPointerReleased;
        _host.PointerCaptureLost += (_, _) => { _dragging = false; _panning = false; };
        _host.PointerWheelChanged += OnWheel;

        _scroller = new ScrollViewer
        {
            HorizontalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            VerticalScrollBarVisibility = Avalonia.Controls.Primitives.ScrollBarVisibility.Auto,
            Content = _host,
            Background = EditorTheme.ViewportWellBrush,
        };
        _scroller.ScrollChanged += (_, _) => DrawRulers();

        _hRuler = new Canvas
        {
            Height = EditorTheme.RulerSize,
            Background = EditorTheme.PanelBgRaisedBrush,
            ClipToBounds = true,
        };
        _vRuler = new Canvas
        {
            Width = EditorTheme.RulerSize,
            Background = EditorTheme.PanelBgRaisedBrush,
            ClipToBounds = true,
        };
        var corner = new Border
        {
            Width = EditorTheme.RulerSize,
            Height = EditorTheme.RulerSize,
            Background = EditorTheme.PanelBgRaisedBrush,
        };

        var rulerRow = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.RulerSize},*"),
            Children = { corner, _hRuler },
        };
        Grid.SetColumn(_hRuler, 1);

        var mapRow = new Grid
        {
            ColumnDefinitions = new ColumnDefinitions($"{EditorTheme.RulerSize},*"),
            Children = { _vRuler, _scroller },
        };
        Grid.SetColumn(_scroller, 1);

        _coordLabel = new TextBlock
        {
            Text = "X: —   Y: —",
            FontFamily = EditorTheme.MonoFont,
            Foreground = EditorTheme.TextMutedBrush,
            FontSize = EditorTheme.FontMeta,
            VerticalAlignment = VerticalAlignment.Center,
        };
        _sceneLabel = new TextBlock
        {
            FontFamily = EditorTheme.UiFont,
            Foreground = EditorTheme.TextDimBrush,
            FontSize = EditorTheme.FontMeta,
            VerticalAlignment = VerticalAlignment.Center,
            Margin = new Thickness(EditorTheme.Space4, 0, 0, 0),
        };
        _zoomLabel = new TextBlock
        {
            Text = "Zoom: 100%",
            FontFamily = EditorTheme.MonoFont,
            Foreground = EditorTheme.TextMutedBrush,
            FontSize = EditorTheme.FontMeta,
            VerticalAlignment = VerticalAlignment.Center,
            HorizontalAlignment = HorizontalAlignment.Right,
        };

        var status = new Border
        {
            Height = EditorTheme.StatusHeight,
            Background = EditorTheme.PanelBgRaisedBrush,
            Padding = new Thickness(EditorTheme.Space3, 0),
            Child = new Grid
            {
                ColumnDefinitions = new ColumnDefinitions("Auto,*,Auto"),
                Children =
                {
                    new StackPanel
                    {
                        Orientation = Orientation.Horizontal,
                        VerticalAlignment = VerticalAlignment.Center,
                        Children = { _coordLabel, _sceneLabel },
                    },
                    _zoomLabel,
                },
            },
        };
        Grid.SetColumn(_zoomLabel, 2);

        Content = new Grid
        {
            RowDefinitions = new RowDefinitions("Auto,*,Auto"),
            Background = EditorTheme.ViewportWellBrush,
            Children = { rulerRow, mapRow, status },
        };
        Grid.SetRow(mapRow, 1);
        Grid.SetRow(status, 2);
    }

    public void Configure(
        RomImage rom,
        Scene scene,
        int group,
        int sector,
        SceneEntity? selected,
        bool showLives,
        bool showObjects,
        bool showEffects,
        bool showEvents,
        bool showLinks,
        bool showGrid,
        string? hudDialogue = null,
        IReadOnlyCollection<int>? visibleSectors = null,
        ActorSpriteAtlas? actorSprites = null,
        ObjectSpriteAtlas? objectSprites = null,
        GroundEffectAtlas? groundEffects = null)
    {
        _rom = rom;
        _scene = scene;
        _group = group;
        _sector = sector;
        _selected = selected;
        _showLives = showLives;
        _showObjects = showObjects;
        _showEffects = showEffects;
        _showEvents = showEvents;
        _showLinks = showLinks;
        _showGrid = showGrid;
        _hudDialogue = hudDialogue;
        _visibleSectors = visibleSectors;
        _actorSprites = actorSprites;
        _objectSprites = objectSprites;
        _groundEffects = groundEffects;
        _sceneLabel.Text = $"{scene.Name}   g{group} s{sector}";
        Refresh();
    }

    public void SetSelected(SceneEntity? entity)
    {
        _selected = entity;
        Refresh();
    }

    public void Refresh()
    {
        if (_rom is null || _scene is null)
            return;
        try
        {
            var png = SceneCompositor.ComposeScenePng(
                _rom, _scene, _group, _sector, _selected,
                _showLives, _showObjects, _showEffects, _showEvents, _showLinks,
                drawLabels: true,
                showGrid: _showGrid,
                hudDialogue: _hudDialogue,
                visibleSectors: _visibleSectors,
                actorSprites: _actorSprites,
                objectSprites: _objectSprites,
                groundEffects: _groundEffects);
            using var stream = new MemoryStream(png);
            _bitmap?.Dispose();
            _bitmap = new Bitmap(stream);
            _image.Source = _bitmap;
            _imageWidth = _bitmap.PixelSize.Width;
            _imageHeight = _bitmap.PixelSize.Height;
            ApplyZoom();
            DrawRulers();
        }
        catch
        {
            // Keep prior frame on compose failure.
        }
    }

    private void ApplyZoom()
    {
        _image.Width = _imageWidth * _imageScale;
        _image.Height = _imageHeight * _imageScale;
        _overlay.Width = _image.Width;
        _overlay.Height = _image.Height;
        _host.Width = _image.Width;
        _host.Height = _image.Height;
        _zoomLabel.Text = $"Zoom: {_imageScale * 100:0}%";
    }

    private void OnWheel(object? sender, PointerWheelEventArgs e)
    {
        if (!e.KeyModifiers.HasFlag(KeyModifiers.Control))
            return;
        var factor = e.Delta.Y > 0 ? 1.25 : 1 / 1.25;
        _imageScale = Math.Clamp(_imageScale * factor, 0.25, 8.0);
        ApplyZoom();
        DrawRulers();
        e.Handled = true;
    }

    private void DrawRulers()
    {
        _hRuler.Children.Clear();
        _vRuler.Children.Clear();
        if (_imageWidth <= 0 || _imageHeight <= 0)
            return;

        var offsetX = _scroller.Offset.X;
        var offsetY = _scroller.Offset.Y;
        var step = _imageScale >= 2 ? 8 : _imageScale >= 1 ? 16 : 32;
        var major = step * 4;

        for (var world = 0; world <= _imageWidth; world += step)
        {
            var x = world * _imageScale - offsetX;
            if (x < -2 || x > _hRuler.Bounds.Width + 2)
                continue;
            var isMajor = world % major == 0;
            _hRuler.Children.Add(new Line
            {
                StartPoint = new Point(x, isMajor ? 4 : 10),
                EndPoint = new Point(x, EditorTheme.RulerSize),
                Stroke = EditorTheme.TextDimBrush,
                StrokeThickness = 1,
            });
            if (isMajor)
            {
                _hRuler.Children.Add(new TextBlock
                {
                    Text = world.ToString(),
                    FontSize = 8,
                    FontFamily = EditorTheme.MonoFont,
                    Foreground = EditorTheme.TextDimBrush,
                    [Canvas.LeftProperty] = x + 2,
                    [Canvas.TopProperty] = 1,
                });
            }
        }

        for (var world = 0; world <= _imageHeight; world += step)
        {
            var y = world * _imageScale - offsetY;
            if (y < -2 || y > _vRuler.Bounds.Height + 2)
                continue;
            var isMajor = world % major == 0;
            _vRuler.Children.Add(new Line
            {
                StartPoint = new Point(isMajor ? 4 : 10, y),
                EndPoint = new Point(EditorTheme.RulerSize, y),
                Stroke = EditorTheme.TextDimBrush,
                StrokeThickness = 1,
            });
            if (isMajor)
            {
                _vRuler.Children.Add(new TextBlock
                {
                    Text = world.ToString(),
                    FontSize = 8,
                    FontFamily = EditorTheme.MonoFont,
                    Foreground = EditorTheme.TextDimBrush,
                    [Canvas.LeftProperty] = 1,
                    [Canvas.TopProperty] = y + 1,
                });
            }
        }
    }

    private void OnPointerPressed(object? sender, PointerPressedEventArgs e)
    {
        var point = e.GetCurrentPoint(_host);
        var map = ToMap(point.Position);
        CursorMoved?.Invoke(this, (map.X, map.Y));

        if (Tool == SceneMapTool.Pan || point.Properties.IsMiddleButtonPressed)
        {
            _panning = true;
            _panStart = point.Position;
            _panOffsetStart = new Vector(_scroller.Offset.X, _scroller.Offset.Y);
            e.Pointer.Capture(_host);
            return;
        }

        if (!point.Properties.IsLeftButtonPressed || _scene is null)
            return;

        var hit = HitTest((int)map.X, (int)map.Y);
        _selected = hit;
        EntitySelected?.Invoke(this, hit);
        if (hit is not null)
        {
            _dragging = true;
            _dragStart = point.Position;
            _dragOrigin = hit.Position;
            e.Pointer.Capture(_host);
        }
        Refresh();
    }

    private void OnPointerMoved(object? sender, PointerEventArgs e)
    {
        var point = e.GetCurrentPoint(_host);
        var map = ToMap(point.Position);
        CursorMoved?.Invoke(this, (map.X, map.Y));
        _coordLabel.Text = $"X: {map.X:0.0}   Y: {map.Y:0.0}";

        if (_panning)
        {
            var dx = point.Position.X - _panStart.X;
            var dy = point.Position.Y - _panStart.Y;
            _scroller.Offset = new Vector(
                Math.Max(0, _panOffsetStart.X - dx),
                Math.Max(0, _panOffsetStart.Y - dy));
            DrawRulers();
            return;
        }

        if (!_dragging || _selected is null)
            return;

        var startMap = ToMap(_dragStart);
        var rawDx = (map.X - startMap.X) / 8.0;
        var rawDy = (map.Y - startMap.Y) / 8.0;
        var dxTiles = SnapToGrid ? (int)Math.Round(rawDx) : (int)Math.Truncate(rawDx);
        var dyTiles = SnapToGrid ? (int)Math.Round(rawDy) : (int)Math.Truncate(rawDy);
        var next = new CompactPos(
            (byte)Math.Clamp(_dragOrigin.XTiles + dxTiles, 0, 255),
            (byte)Math.Clamp(_dragOrigin.YTiles + dyTiles, 0, 255),
            _dragOrigin.XFlags,
            _dragOrigin.YFlags);
        if (next.XTiles != _selected.Position.XTiles || next.YTiles != _selected.Position.YTiles)
        {
            _selected.Position = next;
            Refresh();
        }
    }

    private void OnPointerReleased(object? sender, PointerReleasedEventArgs e)
    {
        if (_dragging && _selected is not null)
        {
            _dragging = false;
            e.Pointer.Capture(null);
            var final = _selected.Position;
            if (final.XTiles != _dragOrigin.XTiles || final.YTiles != _dragOrigin.YTiles)
            {
                _selected.Position = _dragOrigin;
                MovedPending = final;
                EntityMoved?.Invoke(this, _selected);
            }
            else
            {
                Refresh();
            }
            return;
        }

        _panning = false;
        e.Pointer.Capture(null);
    }

    private Point ToMap(Point hostPoint) =>
        new(hostPoint.X / Math.Max(0.001, _imageScale), hostPoint.Y / Math.Max(0.001, _imageScale));

    private SceneEntity? HitTest(int pixelX, int pixelY)
    {
        if (_scene is null)
            return null;

        SceneEntity? best = null;
        var bestArea = int.MaxValue;
        foreach (var entity in SceneCompositor.EnumerateVisibleEntities(
                     _scene, _group, _sector, _visibleSectors,
                     _showLives, _showObjects, _showEffects, _showEvents))
        {
            int left, top, w, h;
            RgbaImage? sprite = null;
            if (entity.Kind == SceneEntityKind.Live && _rom is not null)
                sprite = _actorSprites?.TryGetForLive(_rom, null, entity.TypeId);
            else if (entity.Kind == SceneEntityKind.Object)
                sprite = _objectSprites?.TryGetForObject(entity.TypeId);

            if (sprite is not null)
            {
                var hitW = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
                var hitH = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
                var cx = entity.PixelX + hitW / 2;
                var cy = entity.PixelY + hitH / 2;
                left = cx - sprite.Width / 2;
                top = cy - sprite.Height / 2;
                w = sprite.Width;
                h = sprite.Height;
            }
            else
            {
                left = entity.PixelX;
                top = entity.PixelY;
                w = Math.Max(8, Math.Max(entity.Width, (byte)1) * 8);
                h = Math.Max(8, Math.Max(entity.Height, (byte)1) * 8);
            }

            if (pixelX >= left && pixelX < left + w &&
                pixelY >= top && pixelY < top + h)
            {
                var area = w * h;
                if (area <= bestArea)
                {
                    bestArea = area;
                    best = entity;
                }
            }
        }
        return best;
    }
}
