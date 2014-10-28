/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKAnnotation>, GEORouteMatch, MKAnnotationManager, MKUserLocationAnnotationViewProxy, NSString, UICalloutView, UIImage, UIView, VKAnchorWrapper, _MKAnnotationViewAnchor;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {
    struct { 
        double latitude; 
        double longitude; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int draggable : 1; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    _MKAnnotationViewAnchor *_anchor;
    BOOL _animatingToCoordinate;
    <MKAnnotation> *_annotation;
    MKAnnotationManager *_annotationManager;
    id _calloutHitTest;
    } _calloutOffset;
    UICalloutView *_calloutView;
    } _centerOffset;
    BOOL _customTransformApplied;
    UIView *_detailCalloutAccessoryView;
    unsigned int _dragState;
    BOOL _explicitlyHidden;
    } _flags;
    BOOL _hiddenForInvalidPoint;
    BOOL _hiddenForOffscreen;
    UIImage *_image;
    BOOL _internalTransformApplied;
    UIView *_leftCalloutAccessoryView;
    } _leftCalloutOffset;
    unsigned int _mapDisplayStyle;
    float _mapPitchRadians;
    float _mapRotationRadians;
    unsigned int _mapType;
    } _presentationCoordinate;
    id _presentationCoordinateChangedCallback;
    double _presentationCourse;
    NSString *_reuseIdentifier;
    UIView *_rightCalloutAccessoryView;
    } _rightCalloutOffset;
    float _rotationRadians;
    GEORouteMatch *_routeMatch;
    BOOL _tracking;
    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    unsigned int _zIndex;
}

@property(getter=_isAnimatingToCoordinate,setter=_setAnimatingToCoordinate:) BOOL _animatingToCoordinate;
@property(setter=_setAnnotationManager:) MKAnnotationManager * _annotationManager;
@property(copy) id _calloutHitTest;
@property(setter=_setPresentationCoordinate:) struct { double x1; double x2; } _presentationCoordinate;
@property(setter=_setPresentationCoordinateChangedCallback:,copy) id _presentationCoordinateChangedCallback;
@property(setter=_setPresentationCourse:) double _presentationCourse;
@property(setter=_setRouteMatch:,retain) GEORouteMatch * _routeMatch;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _significantFrame;
@property(getter=_isTracking,setter=_setTracking:) BOOL _tracking;
@property(readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy;
@property(readonly) VKAnchorWrapper * anchor;
@property(retain) <MKAnnotation> * annotation;
@property struct CGPoint { float x1; float x2; } calloutOffset;
@property BOOL canShowCallout;
@property struct CGPoint { float x1; float x2; } centerOffset;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIView * detailCalloutAccessoryView;
@property unsigned int dragState;
@property(getter=isDraggable) BOOL draggable;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) unsigned int hash;
@property(getter=_isHiddenForInvalidPoint,setter=_setHiddenForInvalidPoint:) BOOL hiddenForInvalidPoint;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * image;
@property(retain) UIView * leftCalloutAccessoryView;
@property struct CGPoint { float x1; float x2; } leftCalloutOffset;
@property(getter=_mapDisplayStyle,setter=_setMapDisplayStyle:) unsigned int mapDisplayStyle;
@property(getter=_mapPitchRadians,setter=_setMapPitchRadians:) float mapPitchRadians;
@property(getter=_mapRotationRadians,setter=_setMapRotationRadians:) float mapRotationRadians;
@property(readonly) NSString * reuseIdentifier;
@property(retain) UIView * rightCalloutAccessoryView;
@property struct CGPoint { float x1; float x2; } rightCalloutOffset;
@property(getter=isSelected) BOOL selected;
@property(getter=_significantBounds,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } significantBounds;
@property(readonly) Class superclass;

+ (id)_disclosureCalloutButton;
+ (BOOL)_followsTerrain;
+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentLocationTitle;
+ (id)droppedPinTitle;

- (void).cxx_destruct;
- (id)_annotationContainer;
- (id)_annotationManager;
- (id)_calloutHitTest;
- (id)_calloutView;
- (BOOL)_canChangeOrientation;
- (BOOL)_canDisplayDisclosureInCallout;
- (BOOL)_canDisplayPlacemarkInCallout;
- (id)_containerView;
- (id)_contentLayer;
- (void)_didUpdatePosition;
- (struct CGPoint { float x1; float x2; })_draggingDropOffset;
- (void)_enableRotationForHeadingMode:(float)arg1;
- (BOOL)_hasAlternateOrientation;
- (BOOL)_isAnimatingToCoordinate;
- (BOOL)_isHiddenForInvalidPoint;
- (BOOL)_isTracking;
- (unsigned int)_mapDisplayStyle;
- (float)_mapPitchRadians;
- (float)_mapRotationRadians;
- (unsigned int)_mapType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mapkit_visibleRect;
- (unsigned int)_orientationCount;
- (float)_pointsForDistance:(double)arg1;
- (struct { double x1; double x2; })_presentationCoordinate;
- (id)_presentationCoordinateChangedCallback;
- (double)_presentationCourse;
- (void)_resetZIndex;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (id)_routeMatch;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setAnnotationManager:(id)arg1;
- (void)_setCalloutView:(id)arg1;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (void)_setHiddenForInvalidPoint:(BOOL)arg1;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (void)_setMapPitchRadians:(float)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)_setPresentationCoordinateChangedCallback:(id)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (void)_setRouteMatch:(id)arg1;
- (void)_setTracking:(BOOL)arg1;
- (void)_setZIndex:(unsigned int)arg1 notify:(BOOL)arg2;
- (void)_setZIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantFrame;
- (void)_transitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3;
- (void)_updateFromMap;
- (id)_userLocationProxy;
- (void)_userTrackingModeDidChange:(id)arg1;
- (id)_vkMarker;
- (unsigned int)_zIndex;
- (id)anchor;
- (id)annotation;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (BOOL)canShowCallout;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)detailCalloutAccessoryView;
- (unsigned int)dragState;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)image;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDraggable;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (BOOL)isPersistent;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { float x1; float x2; })leftCalloutOffset;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { float x1; float x2; })rightCalloutOffset;
- (void)setAnnotation:(id)arg1;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCanShowCallout:(BOOL)arg1;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned int)arg1;
- (void)setDraggable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)set_calloutHitTest:(id)arg1;

@end
