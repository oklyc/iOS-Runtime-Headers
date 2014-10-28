/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PLCAAnimationDelegate : NSObject {
    id _completion;
    id _start;
}

@property(copy) id completion;
@property(copy) id start;

- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)completion;
- (void)dealloc;
- (void)setCompletion:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
