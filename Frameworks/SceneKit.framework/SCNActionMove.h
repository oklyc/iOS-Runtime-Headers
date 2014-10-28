/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionMove : SCNAction {
    struct SCNCActionMove { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; float x9; float x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; int x17; float x18; float x19; float x20; float x21; float x22; BOOL x23; BOOL x24; } *_mycaction;
}

+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
