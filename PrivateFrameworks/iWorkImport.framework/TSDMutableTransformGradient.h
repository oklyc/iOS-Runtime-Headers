/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSUColor;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer> {
}

@property struct CGSize { float x1; float x2; } baseNaturalSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property struct CGPoint { float x1; float x2; } endPoint;
@property(retain) TSUColor * firstColor;
@property(retain) NSArray * gradientStops;
@property unsigned int gradientType;
@property(readonly) unsigned int hash;
@property BOOL isAdvancedGradient;
@property(retain) TSUColor * lastColor;
@property float opacity;
@property struct CGPoint { float x1; float x2; } startPoint;
@property(readonly) Class superclass;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(float)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(float)arg1;
- (void)moveStopAtIndex:(unsigned int)arg1 toFraction:(float)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned int)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned int)arg1 toColor:(id)arg2;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1 inShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)setFirstColor:(id)arg1;
- (void)setGradientAngleInDegrees:(float)arg1;
- (void)setGradientStops:(id)arg1;
- (void)setGradientType:(unsigned int)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg1 toInflection:(float)arg2;
- (void)setLastColor:(id)arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1 inShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)swapStopAtIndex:(unsigned int)arg1 withStopAtIndex:(unsigned int)arg2;
- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize { float x1; float x2; })arg1;

@end
