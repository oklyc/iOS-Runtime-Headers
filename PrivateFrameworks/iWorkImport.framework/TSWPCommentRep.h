/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer;

@interface TSWPCommentRep : TSWPShapeRep {
    CALayer *_authorLayer;
    CALayer *_dateLayer;
    BOOL _didNavigate;
    CALayer *_headerLayer;
    BOOL _needsAuthorOrDateUpdate;
    BOOL _shouldShowNavigationKnobs;
}

- (void)addKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForHighlightLayer;
- (BOOL)canBeUsedForImageMask;
- (BOOL)canMakePathEditable;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)arg1;
- (void)dealloc;
- (void)didEndZooming;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)dynamicDragDidEnd;
- (void)dynamicOperationDidBegin;
- (unsigned long long)enabledKnobMask;
- (BOOL)exclusivelyProvidesGuidesWhileAligning;
- (BOOL)forcesPlacementOnTop;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateComments;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (id)newTrackerForKnob:(id)arg1;
- (void)p_deleteComment;
- (float)p_effectiveBorderStrokeWidthInPoints;
- (id)p_imageForString:(id)arg1 ofSize:(struct CGSize { float x1; float x2; })arg2 baselineOffsetFromBottom:(float)arg3 foregroundColor:(struct CGColor { }*)arg4;
- (void)p_nextAnnotation;
- (void)p_previousAnnotation;
- (BOOL)p_shouldDraw;
- (BOOL)providesGuidesWhileAligning;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (void)screenScaleDidChange;
- (struct CGColor { }*)selectionHighlightColor;
- (float)selectionHighlightWidth;
- (BOOL)shouldHideSelectionHighlightDueToRectangularPath;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldShowSmartShapeKnobs;
- (void)viewScaleDidChange;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
