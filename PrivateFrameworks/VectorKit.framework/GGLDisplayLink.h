/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplay, CADisplayLink;

@interface GGLDisplayLink : NSObject {
    CADisplay *_display;
    CADisplayLink *_displayLink;
    int _frameInterval;
    BOOL _paused;
    SEL _selector;
    int _skippedFrames;
    id _target;
}

@property(retain) CADisplay * display;
@property int frameInterval;
@property(getter=isPaused) BOOL paused;
@property(readonly) double timestamp;

- (void)_displayLinkFired:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (int)frameInterval;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (BOOL)isPaused;
- (void)setDisplay:(id)arg1;
- (void)setFrameInterval:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)target;
- (double)timestamp;

@end
