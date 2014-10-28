/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIStackedBarDelegate>, NSArray, UIView, _UIBackdropView;

@interface SKUIStackedBar : UIView {
    BOOL _alwaysShowsBackButton;
    _UIBackdropView *_backdropView;
    NSArray *_cells;
    <SKUIStackedBarDelegate> *_delegate;
    BOOL _hidesStatusBar;
    NSArray *_items;
    BOOL _lastItemExpanded;
    UIView *_maskView;
    float _newOffset;
    float _offset;
    BOOL _splitViewStyle;
    UIView *_wrapperView;
    BOOL _zeroHeightWhenFirstChildExpanded;
}

@property BOOL alwaysShowsBackButton;
@property <SKUIStackedBarDelegate> * delegate;
@property BOOL hidesStatusBar;
@property(retain) NSArray * items;
@property BOOL lastItemExpanded;
@property float offset;
@property BOOL splitViewStyle;
@property BOOL zeroHeightWhenFirstChildExpanded;

- (void).cxx_destruct;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_reload;
- (void)_resetNewOffset;
- (void)_selectItemAtIndex:(int)arg1;
- (BOOL)alwaysShowsBackButton;
- (void)animateToFullSizeIfNecessary;
- (id)delegate;
- (BOOL)hidesStatusBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)items;
- (BOOL)lastItemExpanded;
- (void)layoutSubviews;
- (float)offset;
- (void)setAlwaysShowsBackButton:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesStatusBar:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (void)setLastItemExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLastItemExpanded:(BOOL)arg1;
- (void)setOffset:(float)arg1;
- (void)setSplitViewStyle:(BOOL)arg1;
- (void)setZeroHeightWhenFirstChildExpanded:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (BOOL)splitViewStyle;
- (BOOL)zeroHeightWhenFirstChildExpanded;

@end
