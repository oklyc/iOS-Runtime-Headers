/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class CALayer, GKCollectionViewCell, NSArray, NSString;

@interface GKEditActionsView : UIView <UIActionSheetDelegate> {
    NSArray *_actionButtons;
    GKCollectionViewCell *_cell;
    NSArray *_editActionConstraints;
    CALayer *_maskLayer;
    float _visibleWidth;
}

@property(retain) NSArray * actionButtons;
@property GKCollectionViewCell * cell;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSArray * editActionConstraints;
@property(readonly) unsigned int hash;
@property(retain) CALayer * maskLayer;
@property(readonly) Class superclass;
@property float visibleWidth;

- (id)actionButtons;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (id)cell;
- (void)dealloc;
- (void)didTouchEditAction:(id)arg1;
- (void)didTouchMoreEditAction:(id)arg1;
- (id)editActionConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cell:(id)arg2;
- (id)maskLayer;
- (void)prepareActionButtons;
- (void)setActionButtons:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setEditActionConstraints:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setVisibleWidth:(float)arg1;
- (float)visibleWidth;

@end
