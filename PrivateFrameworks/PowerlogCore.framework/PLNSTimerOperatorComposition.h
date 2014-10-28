/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, NSObject<OS_dispatch_queue>, NSTimer, PLOperator;

@interface PLNSTimerOperatorComposition : NSObject {
    NSDate *_fireDate;
    double _interval;
    PLOperator *_operator;
    id _operatorBlock;
    BOOL _repeats;
    NSTimer *_timer;
    double _tolerance;
    id _userInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSDate * fireDate;
@property double interval;
@property PLOperator * operator;
@property(copy) id operatorBlock;
@property BOOL repeats;
@property(retain) NSTimer * timer;
@property BOOL timerActive;
@property double tolerance;
@property(retain) id userInfo;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fireDate;
- (void)fireTimerEarly;
- (void)handleTimerFire;
- (id)initWithOperator:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(BOOL)arg5 withUserInfo:(id)arg6 withBlock:(id)arg7;
- (id)initWithWorkQueue:(id)arg1 withFireDate:(id)arg2 withInterval:(double)arg3 withTolerance:(double)arg4 repeats:(BOOL)arg5 withUserInfo:(id)arg6 withBlock:(id)arg7;
- (double)interval;
- (id)operator;
- (id)operatorBlock;
- (BOOL)repeats;
- (void)setFireDate:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setRepeats:(BOOL)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerActive:(BOOL)arg1;
- (void)setTolerance:(double)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)timer;
- (BOOL)timerActive;
- (double)tolerance;
- (id)userInfo;
- (id)workQueue;

@end
