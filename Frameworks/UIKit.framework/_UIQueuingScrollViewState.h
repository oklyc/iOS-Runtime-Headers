/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UIViewController;

@interface _UIQueuingScrollViewState : _UITransitionState {
    BOOL _manual;
    UIView *_view;
    UIViewController *_viewController;
}

@property(getter=isManual,readonly) BOOL manual;
@property(readonly) UIView * view;

- (void)dealloc;
- (id)description;
- (id)initWithTransitionDirection:(int)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(id)arg4;
- (BOOL)isCompatibleWithTransitionInDirection:(int)arg1;
- (BOOL)isManual;
- (id)view;

@end
