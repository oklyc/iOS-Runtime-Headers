/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCH3DSceneObject;

@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate> {
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    } mCurrentElement;
    TSCH3DSceneObject *mCurrentSceneObject;
}

@property struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } currentElement;
@property(retain) TSCH3DSceneObject * currentSceneObject;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })currentElement;
- (id)currentSceneObject;
- (void)dealloc;
- (void)didEndProcessingSceneObject:(id)arg1;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass { int x1; })renderPassForSceneObject:(id)arg1;
- (void)setCurrentElement:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (void)setCurrentSceneObject:(id)arg1;
- (void)setOffset:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute { }*)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { }*)arg3;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (BOOL)willProcessElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willRenderElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo { }*)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo { id x1; id x2; id x3; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_4_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_4_1_2; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; }*)arg1 sceneObject:(id)arg2;

@end
