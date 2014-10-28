/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIDynamicItemBehavior, UIGravityBehavior, UIPushBehavior, UIView, _UIDynamicSliderAnimator;

@interface _UIDynamicSlider : UISlider <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    _UIDynamicSliderAnimator *_animator;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_itemBehavior;
    UIPushBehavior *_pushBehavior;
    UIView *_thumbDynamicsView;
    } _thumbPreviousPoint;
    double _thumbPreviousTime;
    float _thumbVelocity;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void)_clearDynamics;
- (void)_handleConversionToDynamicsTracking;
- (void)_handleDynamicsStep;
- (void)_initializeDynamicsTracking:(id)arg1;
- (void)_updateDynamicsTracking:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)cancelTouchTracking;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint { float x1; float x2; })arg4;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)dynamicAnimatorDidPause:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end
