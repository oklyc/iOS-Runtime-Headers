/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSString, PUAdjustmentsMode, PUAdjustmentsModeBadge, PUPhotoEditLevelSlider, UILabel;

@interface PUAdjustmentsModeSliderCell : UICollectionViewCell <PUPhotoEditLayoutStaticAdaptable> {
    PUAdjustmentsMode *_adjustmentsMode;
    BOOL _enabled;
    int _layoutOrientation;
    PUPhotoEditLevelSlider *_levelSlider;
    NSArray *_levelSliderConstraints;
    float _sliderShortSideLength;
    NSString *_title;
    PUAdjustmentsModeBadge *_titleBackground;
    NSArray *_titleBackgroundConstraints;
    UILabel *_titleLabel;
    NSArray *_titleLabelConstraints;
    int _titleLabelPosition;
    BOOL _toggleable;
}

@property(retain) PUAdjustmentsMode * adjustmentsMode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEnabled) BOOL enabled;
@property(readonly) unsigned int hash;
@property(readonly) int layoutOrientation;
@property(retain) PUPhotoEditLevelSlider * levelSlider;
@property float sliderShortSideLength;
@property(readonly) Class superclass;
@property(copy) NSString * title;
@property int titleLabelPosition;
@property(getter=isToggleable) BOOL toggleable;

+ (float)sliderTopMarginVerticalForTitleLabelPosition:(int)arg1;

- (void).cxx_destruct;
- (void)_updateTitleViews;
- (id)adjustmentsMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isToggleable;
- (int)layoutOrientation;
- (id)levelSlider;
- (void)setAdjustmentsMode:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setLevelSlider:(id)arg1;
- (void)setSliderShortSideLength:(float)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabelPosition:(int)arg1;
- (void)setToggleable:(BOOL)arg1;
- (void)setupWithLayoutOrientation:(int)arg1;
- (float)sliderShortSideLength;
- (id)title;
- (int)titleLabelPosition;
- (void)updateConstraints;

@end
