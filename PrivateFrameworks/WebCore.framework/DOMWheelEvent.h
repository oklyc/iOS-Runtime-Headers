/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWheelEvent : DOMMouseEvent {
}

@property(readonly) BOOL isHorizontal;
@property(readonly) int wheelDelta;
@property(readonly) int wheelDeltaX;
@property(readonly) int wheelDeltaY;

- (unsigned int)deltaMode;
- (double)deltaX;
- (double)deltaY;
- (double)deltaZ;
- (void)initWheelEvent:(int)arg1 wheelDeltaY:(int)arg2 view:(id)arg3 screenX:(int)arg4 screenY:(int)arg5 clientX:(int)arg6 clientY:(int)arg7 ctrlKey:(BOOL)arg8 altKey:(BOOL)arg9 shiftKey:(BOOL)arg10 metaKey:(BOOL)arg11;
- (BOOL)isHorizontal;
- (BOOL)webkitDirectionInvertedFromDevice;
- (int)wheelDelta;
- (int)wheelDeltaX;
- (int)wheelDeltaY;

@end
