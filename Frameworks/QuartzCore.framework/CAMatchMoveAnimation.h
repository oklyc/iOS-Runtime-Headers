/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CALayer, NSArray, NSString;

@interface CAMatchMoveAnimation : CAAnimation {
}

@property(getter=isAdditive) BOOL additive;
@property BOOL appliesRotation;
@property BOOL appliesScale;
@property BOOL appliesX;
@property BOOL appliesY;
@property(copy) NSString * keyPath;
@property(retain) CALayer * sourceLayer;
@property(copy) NSArray * sourcePoints;
@property BOOL targetsSuperlayer;

+ (id)defaultValueForKey:(id)arg1;

- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; void *x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 layer:(id)arg2;
- (BOOL)appliesRotation;
- (BOOL)appliesScale;
- (BOOL)appliesX;
- (BOOL)appliesY;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)isAdditive;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setAppliesRotation:(BOOL)arg1;
- (void)setAppliesScale:(BOOL)arg1;
- (void)setAppliesX:(BOOL)arg1;
- (void)setAppliesY:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSourceLayer:(id)arg1;
- (void)setSourcePoints:(id)arg1;
- (void)setTargetsSuperlayer:(BOOL)arg1;
- (id)sourceLayer;
- (id)sourcePoints;
- (BOOL)targetsSuperlayer;

@end
