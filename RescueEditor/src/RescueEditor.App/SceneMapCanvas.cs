using Avalonia;
using Avalonia.Controls;
using Avalonia.Controls.Shapes;
using Avalonia.Input;
using Avalonia.Layout;
using Avalonia.Media;
using Avalonia.Media.Imaging;
using Avalonia.Platform;
using Avalonia.Threading;
using RescueEditor.Core;
using System.Runtime.InteropServices;

namespace RescueEditor.App;

public enum SceneMapTool
{
    Select,
    Pan,
    PaintCollisionAdd,
    PaintCollisionErase,
    DrawLink,
    DrawEvent,
}

/// <summary>Interactive scene map with rulers, hit-testing, drag-move, pan, and grid.</summary>
public sealed class SceneMapCanvas : UserControl
{
    private readonly Image _image;
    private readonly Image _collisionImage;
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
    private bool _showCollision;
    private SceneLink? _selectedLink;
    private GroundCollisionMap? _collision;
    private bool _showGrid;
    private string? _hudDialogue;
    private Bitmap? _bitmap;
    private WriteableBitmap? _collisionBitmap;
    private double _imageScale = 1.0;
    private int _imageWidth;
    private int _imageHeight;

    private bool _dragging;
    private bool _linkDragging;
    private bool _panning;
    private bool _drawing;
    private bool _resizing;
    private Point _dragStart;
    private CompactPos _dragOrigin;
    private SceneVolumeTiles _resizeOrigin;
    private SceneMapResizeHandle _resizeHandle;
    private Point _panStart;
    private Vector _panOffsetStart;
    private readonly Rectangle _rubber;

    private bool _paintStroke;
    private int _paintLastX;
    private int _paintLastY;

    public SceneMapTool Tool { get; set; } = SceneMapTool.Select;
    public bool SnapToGrid { get; set; } = true;
    public event EventHandler<SceneEntity?>? EntitySelected;
    public event EventHandler<SceneMapSelection?>? SelectionChanged;
    public event EventHandler<SceneEntity>? EntityMoved;
    public event EventHandler<SceneLink>? LinkMoved;
    public event EventHandler<SceneVolumeCommit>? VolumeCommitted;
    public event EventHandler<(double X, double Y)>? CursorMoved;
    public event EventHandler<GroundCollisionMap>? CollisionEdited;
    public CompactPos? MovedPending { get; set; }

    public SceneMapCanvas()
    {
        _image = new Image
        {
            // Fill + explicit size scales the whole bitmap. Stretch.None ignored zoom and
            // only changed the clip rect (left-stuck zoom-in, chunked zoom-out).
            Stretch = Stretch.Fill,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
            UseLayoutRounding = false,
        };
        RenderOptions.SetBitmapInterpolationMode(_image, BitmapInterpolationMode.None);
        _collisionImage = new Image
        {
            Stretch = Stretch.Fill,
            HorizontalAlignment = HorizontalAlignment.Left,
            VerticalAlignment = VerticalAlignment.Top,
            UseLayoutRounding = false,
            IsHitTestVisible = false,
        };
        RenderOptions.SetBitmapInterpolationMode(_collisionImage, BitmapInterpolationMode.None);
        _overlay = new Canvas { IsHitTestVisible = false };
        _rubber = new Rectangle
        {
            Stroke = Brushes.White,
            StrokeThickness = 1,
            Fill = new SolidColorBrush(Color.FromArgb(40, 255, 255, 255)),
            IsVisible = false,
        };
        _overlay.Children.Add(_rubber);
        var layer = new Panel { Children = { _image, _collisionImage, _overlay } };
        _host = new Border
        {
            Background = EditorTheme.ViewportWellBrush,
            Child = layer,
            Cursor = new Cursor(StandardCursorType.Arrow),
            BorderBrush = EditorTheme.BorderSubtleBrush,
            BorderThickness = new Thickness(1),
            ClipToBounds = true,
        };
        _host.PointerPressed += OnPointerPressed;
        _host.PointerMoved += OnPointerMoved;
        _host.PointerReleased += OnPointerReleased;
        _host.PointerCaptureLost += (_, _) => AbortPointer();
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
        GroundEffectAtlas? groundEffects = null,
        bool showCollision = false,
        SceneLink? selectedLink = null)
    {
        _rom = rom;
        _scene = scene;
        _group = group;
        _sector = sector;
        _selected = selected;
        _selectedLink = selectedLink;
        _showLives = showLives;
        _showObjects = showObjects;
        _showEffects = showEffects;
        _showEvents = showEvents;
        _showLinks = showLinks;
        _showCollision = showCollision || IsCollisionPaint(Tool);
        if (!_paintStroke)
            _collision = _showCollision ? BmaCollisionDecoder.TryLoadOrEmpty(rom, scene) : null;
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
                groundEffects: _groundEffects,
                collision: null,
                showCollision: false,
                selectedLink: _selectedLink);
            using var stream = new MemoryStream(png);
            _bitmap?.Dispose();
            _bitmap = new Bitmap(stream);
            _image.Source = _bitmap;
            _imageWidth = _bitmap.PixelSize.Width;
            _imageHeight = _bitmap.PixelSize.Height;
            ApplyZoom();
            RebuildCollisionOverlay();
            DrawRulers();
            DrawVolumeChrome();
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
        _collisionImage.Width = _image.Width;
        _collisionImage.Height = _image.Height;
        _overlay.Width = _image.Width;
        _overlay.Height = _image.Height;
        _host.Width = _image.Width;
        _host.Height = _image.Height;
        _zoomLabel.Text = $"Zoom: {_imageScale * 100:0}%";
    }

    private void OnWheel(object? sender, PointerWheelEventArgs e)
    {
        // Zoom toward cursor (Ctrl+wheel / trackpad pinch-as-wheel with Ctrl).
        if (!e.KeyModifiers.HasFlag(KeyModifiers.Control))
            return;
        if (Math.Abs(e.Delta.Y) < 0.01)
            return;

        var oldZoom = _imageScale;
        var factor = e.Delta.Y > 0 ? 1.25 : 1 / 1.25;
        var nextZoom = Math.Clamp(oldZoom * factor, 0.25, 8.0);
        if (Math.Abs(nextZoom - oldZoom) < 0.0001)
        {
            e.Handled = true;
            return;
        }

        var anchor = e.GetPosition(_scroller);
        var offset = _scroller.Offset;
        _imageScale = nextZoom;
        ApplyZoom();

        var (ox, oy) = ZoomViewport.AnchorOffset(
            offset.X, offset.Y, anchor.X, anchor.Y, oldZoom, nextZoom);

        Dispatcher.UIThread.Post(() =>
        {
            var (cx, cy) = ZoomViewport.ClampOffset(
                ox, oy,
                _scroller.Extent.Width, _scroller.Extent.Height,
                _scroller.Viewport.Width, _scroller.Viewport.Height);
            _scroller.Offset = new Vector(cx, cy);
            DrawRulers();
        }, DispatcherPriority.Render);

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

        if (IsVolumeDraw(Tool))
        {
            _drawing = true;
            _dragStart = point.Position;
            ShowRubber(map, map);
            e.Pointer.Capture(_host);
            return;
        }

        if (IsCollisionPaint(Tool))
        {
            if (_collision is null && _rom is not null)
                _collision = BmaCollisionDecoder.TryLoadOrEmpty(_rom, _scene);
            if (_collision is null)
                return;
            _paintStroke = true;
            _showCollision = true;
            _paintLastX = (int)map.X;
            _paintLastY = (int)map.Y;
            EnsureCollisionOverlay();
            GroundCollisionPaint.ApplyLine(
                _collision, _paintLastX, _paintLastY, _paintLastX, _paintLastY,
                paintSolid: Tool == SceneMapTool.PaintCollisionAdd, StampCollisionTile);
            e.Pointer.Capture(_host);
            return;
        }

        var hit = SceneMapOverlay.HitTest(
            _scene, (int)map.X, (int)map.Y, _group, _sector, _visibleSectors,
            _showLives, _showObjects, _showEffects, _showEvents, _showLinks,
            _rom, _actorSprites, _objectSprites);

        var selectedRect = SelectedVolumeRect();
        if (selectedRect is { } rect)
        {
            var handle = SceneMapOverlay.HitHandle(rect, (int)map.X, (int)map.Y);
            if (handle is not SceneMapResizeHandle.None and not SceneMapResizeHandle.Body)
            {
                _resizing = true;
                _resizeHandle = handle;
                _dragStart = point.Position;
                _resizeOrigin = SelectedVolumeTiles()!.Value;
                e.Pointer.Capture(_host);
                return;
            }
        }

        _selected = hit?.Entity;
        _selectedLink = hit?.Link;
        SelectionChanged?.Invoke(this, hit);
        EntitySelected?.Invoke(this, hit?.Entity);
        if (hit?.Entity is not null)
        {
            _dragging = true;
            _dragStart = point.Position;
            _dragOrigin = hit.Entity.Position;
            e.Pointer.Capture(_host);
        }
        else if (hit?.Link is not null)
        {
            _linkDragging = true;
            _dragStart = point.Position;
            _dragOrigin = hit.Link.Position;
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

        if (_drawing)
        {
            ShowRubber(ToMap(_dragStart), map);
            return;
        }

        if (_paintStroke && _collision is not null)
        {
            var x = (int)map.X;
            var y = (int)map.Y;
            GroundCollisionPaint.ApplyLine(
                _collision, _paintLastX, _paintLastY, x, y,
                paintSolid: Tool == SceneMapTool.PaintCollisionAdd, StampCollisionTile);
            _paintLastX = x;
            _paintLastY = y;
            return;
        }

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

        if (_resizing)
        {
            var next = SceneMapOverlay.ResizeVolume(
                _resizeOrigin, _resizeHandle, (int)map.X, (int)map.Y, SnapToGrid);
            ApplyVolumePreview(next);
            Refresh();
            return;
        }

        if (_linkDragging && _selectedLink is not null)
        {
            var next = DraggedPosition(map);
            if (next.XTiles != _selectedLink.Position.XTiles || next.YTiles != _selectedLink.Position.YTiles)
            {
                _selectedLink.Position = next;
                Refresh();
            }
            return;
        }

        if (!_dragging || _selected is null)
            return;

        var moved = DraggedPosition(map);
        if (moved.XTiles != _selected.Position.XTiles || moved.YTiles != _selected.Position.YTiles)
        {
            _selected.Position = moved;
            Refresh();
        }
    }

    private void OnPointerReleased(object? sender, PointerReleasedEventArgs e)
    {
        var map = ToMap(e.GetCurrentPoint(_host).Position);
        if (_drawing)
        {
            _drawing = false;
            _rubber.IsVisible = false;
            e.Pointer.Capture(null);
            var start = ToMap(_dragStart);
            var volume = SceneMapOverlay.VolumeFromPixels(
                (int)start.X, (int)start.Y, (int)map.X, (int)map.Y, SnapToGrid);
            VolumeCommitted?.Invoke(this, new SceneVolumeCommit(
                IsCreate: true,
                IsLink: Tool == SceneMapTool.DrawLink,
                Link: null,
                Entity: null,
                Position: volume.Position,
                Width: volume.Width,
                Height: volume.Height));
            return;
        }

        if (_paintStroke)
        {
            _paintStroke = false;
            e.Pointer.Capture(null);
            if (_collision is not null)
                CollisionEdited?.Invoke(this, _collision);
            return;
        }

        if (_resizing)
        {
            _resizing = false;
            e.Pointer.Capture(null);
            var current = SelectedVolumeTiles();
            ApplyVolumePreview(_resizeOrigin);
            if (current is { } volume &&
                (volume.Position.XTiles != _resizeOrigin.Position.XTiles ||
                 volume.Position.YTiles != _resizeOrigin.Position.YTiles ||
                 volume.Width != _resizeOrigin.Width ||
                 volume.Height != _resizeOrigin.Height))
            {
                VolumeCommitted?.Invoke(this, new SceneVolumeCommit(
                    IsCreate: false,
                    IsLink: _selectedLink is not null,
                    Link: _selectedLink,
                    Entity: _selectedLink is null ? _selected : null,
                    Position: volume.Position,
                    Width: volume.Width,
                    Height: volume.Height));
            }
            else
            {
                Refresh();
            }
            return;
        }

        if (_linkDragging && _selectedLink is not null)
        {
            _linkDragging = false;
            e.Pointer.Capture(null);
            var final = _selectedLink.Position;
            if (final.XTiles != _dragOrigin.XTiles || final.YTiles != _dragOrigin.YTiles)
            {
                _selectedLink.Position = _dragOrigin;
                MovedPending = final;
                LinkMoved?.Invoke(this, _selectedLink);
            }
            else
            {
                Refresh();
            }
            return;
        }

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

    private void AbortPointer()
    {
        if (_resizing)
            ApplyVolumePreview(_resizeOrigin);
        if (_dragging && _selected is not null)
            _selected.Position = _dragOrigin;
        if (_linkDragging && _selectedLink is not null)
            _selectedLink.Position = _dragOrigin;
        _dragging = false;
        _linkDragging = false;
        _panning = false;
        _paintStroke = false;
        _drawing = false;
        _resizing = false;
        _rubber.IsVisible = false;
        if (_scene is not null)
            Refresh();
    }

    private CompactPos DraggedPosition(Point map)
    {
        var startMap = ToMap(_dragStart);
        var rawDx = (map.X - startMap.X) / 8.0;
        var rawDy = (map.Y - startMap.Y) / 8.0;
        var dxTiles = SnapToGrid ? (int)Math.Round(rawDx) : (int)Math.Truncate(rawDx);
        var dyTiles = SnapToGrid ? (int)Math.Round(rawDy) : (int)Math.Truncate(rawDy);
        return new CompactPos(
            (byte)Math.Clamp(_dragOrigin.XTiles + dxTiles, 0, 255),
            (byte)Math.Clamp(_dragOrigin.YTiles + dyTiles, 0, 255),
            _dragOrigin.XFlags,
            _dragOrigin.YFlags);
    }

    private SceneMapHitRect? SelectedVolumeRect()
    {
        if (_selectedLink is not null)
            return SceneMapOverlay.BoundsOf(_selectedLink);
        if (_selected?.Kind == SceneEntityKind.Event)
            return SceneMapOverlay.BoundsOf(_selected);
        return null;
    }

    private SceneVolumeTiles? SelectedVolumeTiles()
    {
        if (_selectedLink is not null)
            return new SceneVolumeTiles(_selectedLink.Position, _selectedLink.Width, _selectedLink.Height);
        if (_selected?.Kind == SceneEntityKind.Event)
            return new SceneVolumeTiles(_selected.Position, _selected.Width, _selected.Height);
        return null;
    }

    private void ApplyVolumePreview(SceneVolumeTiles volume)
    {
        if (_selectedLink is not null)
        {
            _selectedLink.Position = volume.Position;
            _selectedLink.Width = volume.Width;
            _selectedLink.Height = volume.Height;
            return;
        }

        if (_selected?.Kind != SceneEntityKind.Event)
            return;
        _selected.Position = volume.Position;
        _selected.Width = volume.Width;
        _selected.Height = volume.Height;
    }

    private void ShowRubber(Point start, Point end)
    {
        var left = Math.Min(start.X, end.X) * _imageScale;
        var top = Math.Min(start.Y, end.Y) * _imageScale;
        var width = Math.Max(1, Math.Abs(end.X - start.X) * _imageScale);
        var height = Math.Max(1, Math.Abs(end.Y - start.Y) * _imageScale);
        Canvas.SetLeft(_rubber, left);
        Canvas.SetTop(_rubber, top);
        _rubber.Width = width;
        _rubber.Height = height;
        _rubber.IsVisible = true;
    }

    private void DrawVolumeChrome()
    {
        _overlay.Children.Clear();
        _overlay.Children.Add(_rubber);
        var rect = SelectedVolumeRect();
        if (rect is not { } bounds)
            return;

        var s = _imageScale;
        var handle = SceneMapOverlay.ResizeHandlePixels * s;
        void AddHandle(double x, double y)
        {
            var box = new Rectangle
            {
                Width = handle,
                Height = handle,
                Fill = Brushes.White,
                Stroke = Brushes.Black,
                StrokeThickness = 1,
            };
            Canvas.SetLeft(box, x * s - handle / 2);
            Canvas.SetTop(box, y * s - handle / 2);
            _overlay.Children.Add(box);
        }

        var l = bounds.Left;
        var t = bounds.Top;
        var r = bounds.Left + bounds.Width;
        var b = bounds.Top + bounds.Height;
        var cx = (l + r) / 2.0;
        var cy = (t + b) / 2.0;
        AddHandle(l, t);
        AddHandle(cx, t);
        AddHandle(r, t);
        AddHandle(l, cy);
        AddHandle(r, cy);
        AddHandle(l, b);
        AddHandle(cx, b);
        AddHandle(r, b);
    }

    private Point ToMap(Point hostPoint) =>
        new(hostPoint.X / Math.Max(0.001, _imageScale), hostPoint.Y / Math.Max(0.001, _imageScale));

    private static bool IsCollisionPaint(SceneMapTool tool) =>
        tool is SceneMapTool.PaintCollisionAdd or SceneMapTool.PaintCollisionErase;

    private static bool IsVolumeDraw(SceneMapTool tool) =>
        tool is SceneMapTool.DrawLink or SceneMapTool.DrawEvent;

    private void EnsureCollisionOverlay()
    {
        if (_imageWidth <= 0 || _imageHeight <= 0)
            return;
        if (_collisionBitmap is not null &&
            _collisionBitmap.PixelSize.Width == _imageWidth &&
            _collisionBitmap.PixelSize.Height == _imageHeight)
        {
            _collisionImage.Source = _collisionBitmap;
            _collisionImage.IsVisible = true;
            return;
        }

        RebuildCollisionOverlay();
    }

    private void RebuildCollisionOverlay()
    {
        if (!_showCollision || _collision is null || _imageWidth <= 0 || _imageHeight <= 0)
        {
            _collisionImage.IsVisible = false;
            return;
        }

        if (_collisionBitmap is null ||
            _collisionBitmap.PixelSize.Width != _imageWidth ||
            _collisionBitmap.PixelSize.Height != _imageHeight)
        {
            _collisionBitmap?.Dispose();
            _collisionBitmap = new WriteableBitmap(
                new PixelSize(_imageWidth, _imageHeight),
                new Vector(96, 96),
                PixelFormat.Rgba8888,
                AlphaFormat.Unpremul);
        }

        using (var fb = _collisionBitmap.Lock())
        {
            var stride = fb.RowBytes;
            var buffer = new byte[stride * _imageHeight];
            for (var ty = 0; ty < _collision.HeightTiles; ty++)
            for (var tx = 0; tx < _collision.WidthTiles; tx++)
            {
                if (_collision.IsSolidTile(tx, ty))
                    SceneMapOverlay.WriteOverlayTile(buffer, stride, _imageWidth, _imageHeight, tx, ty, solid: true);
            }

            Marshal.Copy(buffer, 0, fb.Address, buffer.Length);
        }

        _collisionImage.Source = _collisionBitmap;
        _collisionImage.IsVisible = true;
    }

    private void StampCollisionTile(int tileX, int tileY)
    {
        if (_collisionBitmap is null || _collision is null)
            return;
        var solid = _collision.IsSolidTile(tileX, tileY);
        var pixel = solid
            ? new byte[]
            {
                SceneMapOverlay.CollisionTintR,
                SceneMapOverlay.CollisionTintG,
                SceneMapOverlay.CollisionTintB,
                SceneMapOverlay.CollisionTintA,
            }
            : new byte[] { 0, 0, 0, 0 };
        using var fb = _collisionBitmap.Lock();
        var x0 = tileX * 8;
        var y0 = tileY * 8;
        for (var row = 0; row < 8; row++)
        {
            var py = y0 + row;
            if ((uint)py >= (uint)_imageHeight)
                continue;
            for (var col = 0; col < 8; col++)
            {
                var px = x0 + col;
                if ((uint)px >= (uint)_imageWidth)
                    continue;
                Marshal.Copy(pixel, 0, fb.Address + py * fb.RowBytes + px * 4, 4);
            }
        }

        _collisionImage.InvalidateVisual();
    }
}
