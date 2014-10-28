/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

@interface UIStatusBarForegroundView : UIView {
    NSMutableArray *_actionAnimationStack;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
    int _idiom;
    int _ignoreDataLevel;
    BOOL _itemIsEnabled[30];
    UIStatusBarLayoutManager *_layoutManagers[3];
    int _pendedActions;
    UIStatusBarComposedData *_pendedData;
    BOOL _usesVerticalLayout;
}

@property(readonly) UIStatusBarForegroundStyleAttributes * foregroundStyle;
@property int idiom;

- (void)_cleanUpAfterDataChange;
- (void)_cleanUpAfterSimpleReflow;
- (id)_computeVisibleItemsPreservingHistory:(BOOL)arg1;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1;
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(BOOL)arg2;
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (BOOL)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(float*)arg4 allowSwap:(BOOL)arg5 swappedItem:(id*)arg6;
- (void)dealloc;
- (float)edgePadding;
- (id)foregroundStyle;
- (int)idiom;
- (BOOL)ignoringData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(BOOL)arg3;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reflowItemViews:(BOOL)arg1;
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIdiom:(int)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(BOOL)arg3;
- (void)startIgnoringData;
- (void)stopIgnoringData:(BOOL)arg1;

@end
