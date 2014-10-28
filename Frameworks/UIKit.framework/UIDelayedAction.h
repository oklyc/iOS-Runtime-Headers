/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSTimer;

@interface UIDelayedAction : NSObject {
    SEL m_action;
    BOOL m_canceled;
    double m_delay;
    NSString *m_runLoopMode;
    id m_target;
    NSTimer *m_timer;
    id m_userInfo;
}

- (void)cancel;
- (void)dealloc;
- (double)delay;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4;
- (BOOL)scheduled;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)timerFired:(id)arg1;
- (void)touch;
- (void)touchWithDelay:(double)arg1;
- (void)unschedule;
- (id)userInfo;

@end
