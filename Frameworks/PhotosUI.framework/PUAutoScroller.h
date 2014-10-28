/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSTimer, UIScrollView;

@interface PUAutoScroller : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    } _distanceFromCenterFrame;
    UIScrollView *_scrollView;
    } _speed;
    NSTimer *_timer;
}

@property struct CGPoint { float x1; float x2; } distanceFromCenterFrame;
@property(retain) UIScrollView * scrollView;
@property struct CGPoint { float x1; float x2; } speed;
@property(retain) NSTimer * timer;

+ (void)_scrollTestFire;
+ (void)performScrollTest:(id)arg1 iterations:(unsigned int)arg2 length:(float)arg3 delta:(float)arg4 vertical:(BOOL)arg5;

- (void).cxx_destruct;
- (void)_handlerTimer:(id)arg1;
- (void)_startTimer;
- (void)_stopTimer;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })distanceFromCenterFrame;
- (id)initWithTargetScrollView:(id)arg1;
- (id)scrollView;
- (void)setDistanceFromCenterFrame:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollView:(id)arg1;
- (void)setSpeed:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTimer:(id)arg1;
- (struct CGPoint { float x1; float x2; })speed;
- (void)stopAndInvalidate;
- (id)timer;
- (void)updateWithGestureRecognizer:(id)arg1;

@end
