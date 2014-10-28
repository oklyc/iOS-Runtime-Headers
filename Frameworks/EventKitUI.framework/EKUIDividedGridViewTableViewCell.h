/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKUIDividedGridViewController, UIView;

@interface EKUIDividedGridViewTableViewCell : UITableViewCell {
    UIView *_bottomDivider;
    EKUIDividedGridViewController *_gridViewController;
    UIView *_topDivider;
}

@property(retain) UIView * bottomDivider;
@property BOOL drawsTopDivider;
@property(retain) EKUIDividedGridViewController * gridViewController;
@property(retain) UIView * topDivider;

- (void).cxx_destruct;
- (BOOL)_isWiderThanMaximum;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (id)bottomDivider;
- (BOOL)drawBottomDivider;
- (BOOL)drawsTopDivider;
- (id)gridViewController;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 gridViewType:(int)arg3 buttonTitles:(id)arg4;
- (void)layoutSubviews;
- (void)setBottomDivider:(id)arg1;
- (void)setDrawBottomDivider:(BOOL)arg1;
- (void)setDrawsTopDivider:(BOOL)arg1;
- (void)setGridViewController:(id)arg1;
- (void)setTopDivider:(id)arg1;
- (id)topDivider;
- (BOOL)wantsDrawBackground;

@end
