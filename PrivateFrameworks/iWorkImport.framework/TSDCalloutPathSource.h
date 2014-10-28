/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    float mCornerRadius;
    BOOL mIsTailAtCenter;
    } mNaturalSize;
    } mTailPosition;
    float mTailSize;
}

@property float cornerRadius;
@property(readonly) BOOL isTailAtCenter;
@property(readonly) float maxCornerRadius;
@property(readonly) float maxTailSize;
@property(readonly) unsigned int numberOfControlKnobs;
@property(readonly) struct CGPoint { float x1; float x2; } tailCenter;
@property struct CGPoint { float x1; float x2; } tailKnobPosition;
@property float tailSize;
@property struct CGPoint { float x1; float x2; } tailSizeKnobPosition;

+ (id)calloutWithCornerRadius:(float)arg1 tailPosition:(struct CGPoint { float x1; float x2; })arg2 tailSize:(float)arg3 naturalSize:(struct CGSize { float x1; float x2; })arg4;
+ (id)quoteBubbleWithTailPosition:(struct CGPoint { float x1; float x2; })arg1 tailSize:(float)arg2 naturalSize:(struct CGSize { float x1; float x2; })arg3;

- (id)bezierPathWithoutFlips;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)cornerRadius;
- (id)description;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;
- (id)getFeedbackStringForKnob:(unsigned int)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (id)initWithCornerRadius:(float)arg1 tailPosition:(struct CGPoint { float x1; float x2; })arg2 tailSize:(float)arg3 naturalSize:(struct CGSize { float x1; float x2; })arg4 tailAtCenter:(BOOL)arg5;
- (id)interiorWrapPath;
- (BOOL)isCircular;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOval;
- (BOOL)isRectangular;
- (BOOL)isTailAtCenter;
- (float)maxCornerRadius;
- (float)maxTailSize;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned int)arg1;
- (unsigned int)numberOfControlKnobs;
- (struct CGPoint { float x1; float x2; })p_adjustedCenterForPath:(id)arg1;
- (id)p_basePath;
- (id)p_buildPath;
- (struct CGPoint { float x1; float x2; })p_getControlKnobPointForRoundedRect;
- (void)p_getTailPath:(id)arg1 center:(struct CGPoint { float x1; float x2; }*)arg2 tailSize:(float*)arg3 intersections:(struct CGPoint { float x1; float x2; }[2])arg4;
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_setCornerRadius:(float)arg1;
- (void)p_setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)p_setTailAtCenter:(BOOL)arg1;
- (void)p_setTailPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)p_setTailSize:(float)arg1;
- (struct CGPoint { float x1; float x2; })p_tailPosition;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (void)scaleToNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setControlKnobPosition:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)setCornerRadius:(float)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTailKnobPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTailSize:(float)arg1;
- (void)setTailSizeKnobPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })tailCenter;
- (struct CGPoint { float x1; float x2; })tailKnobPosition;
- (float)tailSize;
- (struct CGPoint { float x1; float x2; })tailSizeKnobPosition;
- (id)valueForSetSelector:(SEL)arg1;

@end
