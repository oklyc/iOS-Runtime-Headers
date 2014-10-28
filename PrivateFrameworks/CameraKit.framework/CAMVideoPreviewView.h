/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class AVCaptureVideoPreviewLayer, CAMEffectsFullsizeView, CAMEffectsGridLabelsView, CAMEffectsGridView, NSString, UIView;

@interface CAMVideoPreviewView : UIView {
    BOOL _disableLayoutForEffectsFullsizeView;
    BOOL _disableLayoutForEffectsGridViews;
    BOOL _disableLayoutForPreviewView;
    CAMEffectsFullsizeView *_effectsFullsizeView;
    CAMEffectsGridLabelsView *_effectsGridLabelsView;
    CAMEffectsGridView *_effectsGridView;
    UIView *_fadeOutView;
    int _orientation;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIView *_previewLayerView;
    BOOL _square;
    NSString *_videoGravity;
}

@property(getter=isDisabledLayoutForEffectsFullsizeView) BOOL disableLayoutForEffectsFullsizeView;
@property(getter=isDisabledLayoutForEffectsGridViews) BOOL disableLayoutForEffectsGridViews;
@property(getter=isDisabledLayoutForPreviewView) BOOL disableLayoutForPreviewView;
@property(retain,readonly) CAMEffectsFullsizeView * effectsFullsizeView;
@property(retain,readonly) CAMEffectsGridLabelsView * effectsGridLabelsView;
@property(retain,readonly) CAMEffectsGridView * effectsGridView;
@property(retain,readonly) UIView * fadeOutView;
@property int orientation;
@property(retain) AVCaptureVideoPreviewLayer * previewLayer;
@property(retain,readonly) UIView * previewLayerView;
@property(getter=isSquare) BOOL square;
@property(copy) NSString * videoGravity;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForSubviewsAccountForSquare:(BOOL)arg1;
- (void)_updateGravityForLayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toSublayer:(id)arg2;
- (void)createEffectsFullsizeView;
- (void)createEffectsGridViews;
- (void)dealloc;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(BOOL)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(BOOL)arg1;
- (id)effectsFullsizeView;
- (id)effectsGridLabelsView;
- (id)effectsGridView;
- (id)fadeOutView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisabledLayoutForEffectsFullsizeView;
- (BOOL)isDisabledLayoutForEffectsGridViews;
- (BOOL)isDisabledLayoutForPreviewView;
- (BOOL)isSquare;
- (void)layoutSubviews;
- (int)orientation;
- (id)previewLayer;
- (id)previewLayerView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForCaptureDeviceFace:(id)arg1;
- (void)setDisableLayoutForEffectsFullsizeView:(BOOL)arg1;
- (void)setDisableLayoutForEffectsGridViews:(BOOL)arg1;
- (void)setDisableLayoutForPreviewView:(BOOL)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)setOrientation:(int)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setSquare:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSquare:(BOOL)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (id)videoGravity;

@end
