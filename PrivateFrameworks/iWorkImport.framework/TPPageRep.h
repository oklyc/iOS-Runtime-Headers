/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSString, TPMarginAdjustRep;

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {
    CALayer *_separatorLayer;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) TPMarginAdjustRep * marginAdjustRep;
@property(readonly) Class superclass;

- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)bodyReps;
- (BOOL)childRepIsMasterDrawable:(id)arg1;
- (BOOL)childRepIsOnDocSetupCanvas:(id)arg1;
- (id)childRepsForHitTesting;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (id)hitMasterRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (id)layerClass;
- (id)marginAdjustRep;
- (BOOL)masksToBounds;
- (void)p_didUpdateLayer:(id)arg1;
- (BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1;
- (int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)p_hitRep:(struct CGPoint { float x1; float x2; })arg1 passingTest:(id)arg2;
- (BOOL)p_pageRequiresSeparator;
- (id)p_topmostEditingInfo;
- (void)p_updateBorderLayers;
- (void)p_updateLayoutBordersVisibility;
- (void)p_updateSeparatorLayer;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)showHUDForWPRep:(id)arg1 withFlags:(unsigned int)arg2;
- (void)viewScaleDidChange;
- (id)visibleChildLayouts;
- (void)willBeRemoved;

@end
