/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, NSMutableDictionary, TSCHMultiDataChartRepElementIndex;

@interface TSCHMultiDataChartRep : TSCHChartRep <TSCHChartMultiDataRendering> {
    BOOL mAnimatedLayersNeedUpdate;
    TSCHMultiDataChartRepElementIndex *mCurrentRepElementIndex;
    CALayer *mDataSetNameLayer;
    unsigned int mElementLayersMultiDataSetIndex;
    CALayer *mElementsContainerLayer;
    int mGridDirection;
    NSMutableDictionary *mIndexedElements;
    BOOL mIsAnimatingForBuilds;
    BOOL mRenderingBackgroundLayer;
    BOOL mRenderingDataSetNameLayer;
    BOOL mRenderingElementLabelsLayer;
    BOOL mRenderingElementShapeLayer;
    CALayer *mRootLayer;
    BOOL mShouldAnimateLabelsQuickly;
}

@property(copy) TSCHMultiDataChartRepElementIndex * currentRepElementIndex;
@property(readonly) BOOL shouldDisableMultiDataControls;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (void)addKnobsToArray:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedChartImageFrameFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animationDidEndForChunkStage:(int)arg1;
- (BOOL)beginCanvasTextEditingForSelectionPath:(id)arg1;
- (BOOL)buildShouldUseRenderer:(id)arg1;
- (BOOL)canDrawInParallel;
- (void)clearDragHighlightAndPreviewState;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertNaturalRectToRepElement:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)createAnimatedLayersDictionaryWithScale:(float)arg1 forBuildStage:(unsigned int)arg2 buildIn:(BOOL)arg3 duration:(float)arg4 returningAnimatedLayers:(id*)arg5;
- (id)createMultiDataElementShapeLayerForSeriesIndex:(unsigned int)arg1;
- (unsigned int)currentGroupIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentRepElementBoundsInNaturalSpace;
- (id)currentRepElementIndex;
- (unsigned int)currentSeriesIndex;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (BOOL)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInLayerContext:(struct CGContext { }*)arg1;
- (void)endCanvasTextEditing;
- (BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
- (BOOL)hasCurrentRepElementIndex;
- (id)imageFromFill:(id)arg1 forResolutionWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 toRepElementTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 skipIntegral:(BOOL)arg4 returningFillFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)interpolations;
- (BOOL)isHorizontalChart;
- (BOOL)needsAnimationForAnimationInfo:(id)arg1;
- (struct CGImage { }*)newChartImageForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 originOffset:(struct CGPoint { float x1; float x2; })arg2 returningAdjustedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (id)newDataSetNameLayer;
- (BOOL)overlayLabelsForSeriesIndex:(unsigned int)arg1;
- (void)p_addAnimationsForLabelLayer:(id)arg1 contents:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 animationInfo:(id)arg4;
- (void)p_addElementLayersToLayerTreeIfNecessary;
- (id)p_animationDictionaryForAnimationInfos:(id)arg1;
- (void)p_applyAnimationsFromAnimationInfos:(id)arg1;
- (id)p_buildEngineAnimationDictionaryForAnimationInfos:(id)arg1;
- (id)p_buildEngineAnimationDictionaryForAnimationInfosArray:(id)arg1 duration:(float)arg2;
- (id)p_chartModel;
- (id)p_createAnimationInfosArrayWithBuildStages:(id)arg1 returningAnimatedLayers:(id*)arg2;
- (id)p_createAnimationInfosWithBuildStages:(id)arg1 animatedLayers:(id)arg2;
- (id)p_createBackgroundLayer;
- (id)p_createChartBitmapLayerForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 originOffset:(struct CGPoint { float x1; float x2; })arg2 returningAdjustedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (id)p_createDataSetNameLayer;
- (void)p_createElementLayerForSeriesIndex:(unsigned int)arg1 valueIndex:(unsigned int)arg2 removingReusableLayerFromPreviousElements:(id)arg3;
- (void)p_createElementLayersIfNecessary;
- (unsigned int)p_dataSetIndexForBuildStage:(unsigned int)arg1;
- (id)p_dataSetNameLayoutItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_dataSetNameNaturalSpaceRect;
- (id)p_elementLayers;
- (id)p_fadeAnimationInfosForLayers:(id)arg1 duration:(float)arg2;
- (BOOL)p_isDataSetNameRenderer:(id)arg1;
- (id)p_labelsAnimationKeyTimes;
- (BOOL)p_shouldAnimate;
- (id)p_updateAnimatedLayerLayoutsWithAnimationDuration:(float)arg1;
- (void)p_updateAnimatedLayers;
- (void)p_updateDataSetNameLayerWithAnimationInfo:(id)arg1;
- (void)p_updateElementLayerFills;
- (void)p_useNewTemporaryLayersWithAnimationDuration:(float)arg1 inBlock:(id)arg2;
- (BOOL)planeIsVisible:(int)arg1;
- (void)processChanges:(id)arg1;
- (BOOL)renderElements;
- (BOOL)renderLabels;
- (id)renderSeriesIndexSetForFinalElements:(BOOL)arg1 currentChunk:(int)arg2;
- (id)renderValueIndexSetForSeries:(unsigned int)arg1 finalElements:(BOOL)arg2 currentChunk:(int)arg3;
- (BOOL)requireSeparateLabelLayer;
- (void)setCurrentRepElementIndex:(id)arg1;
- (BOOL)shouldDisableMultiDataControls;
- (BOOL)shouldPostCommandForChangingDataSetIndex;
- (BOOL)shouldUseChartAreaRectForEditMenuTargetRectMinY;
- (BOOL)shouldUseLegendLayerForLayerBasedRep;
- (BOOL)shouldUseRenderer:(id)arg1;
- (void)showHitFeedbackForSelectionPath:(id)arg1;
- (id)textureForContext:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToConvertChartLayoutToRepElement;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToConvertNaturalToRepElement;
- (void)tswpTextEditingDidEndEditing:(id)arg1;
- (void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned int)arg2;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4;
- (void)updateElementLabelLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1;
- (void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1;
- (void)updateFromLayout;
- (void)updatePositionsOfKnobs:(id)arg1;
- (void)viewScaleDidChange;

@end
