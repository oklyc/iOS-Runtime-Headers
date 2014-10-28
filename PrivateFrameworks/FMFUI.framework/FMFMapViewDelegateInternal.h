/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class <FMFMapViewDelegateInternalDelegate>, FMFWildcardGestureRecognizer, NSString;

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate> {
    <FMFMapViewDelegateInternalDelegate> *_delegate;
    FMFWildcardGestureRecognizer *_gr;
    BOOL _respondingToUserTouch;
}

@property(copy,readonly) NSString * debugDescription;
@property <FMFMapViewDelegateInternalDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) FMFWildcardGestureRecognizer * gr;
@property(readonly) unsigned int hash;
@property BOOL respondingToUserTouch;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_moveCenterByOffset:(struct CGPoint { float x1; float x2; })arg1 from:(struct { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)accuracyCircleForLocation:(id)arg1;
- (id)delegate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)endTouches;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (id)gr;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (BOOL)regionIsValid:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)respondingToUserTouch;
- (void)setDelegate:(id)arg1;
- (void)setGr:(id)arg1;
- (void)setRespondingToUserTouch:(BOOL)arg1;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;

@end
