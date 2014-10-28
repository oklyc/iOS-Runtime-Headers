/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UITouchPhaseChangeDelegate>, NSArray, NSMutableArray, NSString, UIResponder, UIView, UIWindow;

@interface UITouch : NSObject <_UIResponderForwardable> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
    struct CGSize { 
        float width; 
        float height; 
    <_UITouchPhaseChangeDelegate> *__phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    } _displacement;
    BOOL _eaten;
    int _edgeType;
    NSMutableArray *_forwardingRecord;
    NSMutableArray *_gestureRecognizers;
    } _locationInWindow;
    float _majorRadiusTolerance;
    float _movementMagnitudeSquared;
    unsigned char _pathIdentity;
    unsigned char _pathIndex;
    float _pathMajorRadius;
    int _phase;
    float _pressure;
    } _previousLocationInWindow;
    float _previousPressure;
    int _savedPhase;
    unsigned int _tapCount;
    double _timestamp;
    } _touchFlags;
    UIView *_view;
    UIView *_warpedIntoView;
    UIWindow *_window;
}

@property(setter=_setDisplacement:) struct CGSize { float x1; float x2; } _displacement;
@property(getter=_isEaten,setter=_setEaten:) BOOL _eaten;
@property(setter=_setEdgeType:) int _edgeType;
@property(setter=_setForwardablePhase:) int _forwardablePhase;
@property(setter=_setPathIdentity:) unsigned char _pathIdentity;
@property(setter=_setPathIndex:) unsigned char _pathIndex;
@property(setter=_setPhaseChangeDelegate:,retain) <_UITouchPhaseChangeDelegate> * _phaseChangeDelegate;
@property(readonly) float _pressure;
@property(setter=_setResponder:,retain) UIResponder * _responder;
@property(setter=_setWindowServerHitTestWindow:,retain) UIWindow * _windowServerHitTestWindow;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSArray * gestureRecognizers;
@property(readonly) unsigned int hash;
@property BOOL isTap;
@property float majorRadius;
@property(readonly) float majorRadius;
@property float majorRadiusTolerance;
@property(readonly) float majorRadiusTolerance;
@property int phase;
@property(readonly) int phase;
@property BOOL sentTouchesEnded;
@property(readonly) Class superclass;
@property unsigned int tapCount;
@property(readonly) unsigned int tapCount;
@property double timestamp;
@property(readonly) double timestamp;
@property(retain) UIView * view;
@property(retain,readonly) UIView * view;
@property(retain) UIView * warpedIntoView;
@property(retain) UIWindow * window;
@property(retain,readonly) UIWindow * window;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(int)arg2 view:(id)arg3;

- (void)_abandonForwardingRecord;
- (void)_addGestureRecognizer:(id)arg1;
- (void)_clearGestureRecognizers;
- (int)_compareIndex:(id)arg1;
- (struct CGSize { float x1; float x2; })_displacement;
- (float)_distanceFrom:(id)arg1 inView:(id)arg2;
- (int)_edgeType;
- (int)_forwardablePhase;
- (id)_forwardingRecord;
- (id)_gestureRecognizers;
- (BOOL)_isAbandoningForwardingRecord;
- (BOOL)_isEaten;
- (BOOL)_isFirstTouchForView;
- (BOOL)_isStationaryRelativeToTouches:(id)arg1;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint { float x1; float x2; })_locationInSceneReferenceSpace;
- (struct CGPoint { float x1; float x2; })_locationInWindow:(id)arg1;
- (id)_mutableForwardingRecord;
- (unsigned char)_pathIdentity;
- (unsigned char)_pathIndex;
- (float)_pathMajorRadius;
- (id)_phaseChangeDelegate;
- (id)_phaseDescription;
- (void)_popPhase;
- (float)_pressure;
- (struct CGPoint { float x1; float x2; })_previousLocationInSceneReferenceSpace;
- (struct CGPoint { float x1; float x2; })_previousLocationInWindow:(id)arg1;
- (void)_pushPhase:(int)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (id)_responder;
- (SEL)_responderSelectorForPhase:(int)arg1;
- (void)_setDisplacement:(struct CGSize { float x1; float x2; })arg1;
- (void)_setEaten:(BOOL)arg1;
- (void)_setEdgeType:(int)arg1;
- (void)_setForwardablePhase:(int)arg1;
- (void)_setIsFirstTouchForView:(BOOL)arg1;
- (void)_setLocationInWindow:(struct CGPoint { float x1; float x2; })arg1 resetPrevious:(BOOL)arg2;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(unsigned char)arg1;
- (void)_setPhaseChangeDelegate:(id)arg1;
- (void)_setPressure:(float)arg1 resetPrevious:(BOOL)arg2;
- (void)_setResponder:(id)arg1;
- (void)_setWindowServerHitTestWindow:(id)arg1;
- (void)_updateMovementMagnitudeForLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (id)_windowServerHitTestWindow;
- (void)dealloc;
- (id)description;
- (id)gestureRecognizers;
- (int)info;
- (BOOL)isDelayed;
- (BOOL)isTap;
- (struct CGPoint { float x1; float x2; })locationInNode:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (float)majorRadius;
- (float)majorRadiusTolerance;
- (int)phase;
- (struct CGPoint { float x1; float x2; })previousLocationInNode:(id)arg1;
- (struct CGPoint { float x1; float x2; })previousLocationInView:(id)arg1;
- (BOOL)sentTouchesEnded;
- (void)setIsDelayed:(BOOL)arg1;
- (void)setIsTap:(BOOL)arg1;
- (void)setMajorRadius:(float)arg1;
- (void)setMajorRadiusTolerance:(float)arg1;
- (void)setPhase:(int)arg1;
- (void)setSentTouchesEnded:(BOOL)arg1;
- (void)setTapCount:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (void)setWarpedIntoView:(id)arg1;
- (void)setWindow:(id)arg1;
- (unsigned int)tapCount;
- (double)timestamp;
- (id)view;
- (id)warpedIntoView;
- (id)window;

@end
