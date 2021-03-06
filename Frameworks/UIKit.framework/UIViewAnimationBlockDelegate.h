/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface UIViewAnimationBlockDelegate : NSObject {
    BOOL _allowUserInteraction;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _animationDidStopSent;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    BOOL _didBeginBlockAnimation;
    BOOL _isZeroDuration;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _start;

}

@property(readonly) BOOL _allowsUserInteraction;

+ (void)setAnimationBlockDelegateWithDuration:(double)arg1 options:(unsigned int)arg2 start:(id)arg3 completion:(id)arg4;

- (BOOL)_allowsUserInteraction;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (void)_didEndBlockAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sendDeferredCompletion:(id)arg1;
- (void)_willBeginBlockAnimation:(id)arg1 context:(id)arg2;
- (void)dealloc;

@end
