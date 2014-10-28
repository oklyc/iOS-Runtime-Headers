/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKButton, UILabel;

@interface GKFriendRequestCell : GKBasePlayerCell {
    GKButton *_acceptButton;
    GKButton *_declineButton;
    UILabel *_messageLabel;
    UILabel *_whenLabel;
}

@property(retain) GKButton * acceptButton;
@property(retain) GKButton * declineButton;
@property(retain) UILabel * messageLabel;
@property(retain) UILabel * whenLabel;

+ (void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(BOOL)arg3;
+ (Class)cellClassForPlayer:(id)arg1;
+ (id)itemHeightList;
+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (id)acceptButton;
- (void)dealloc;
- (id)declineButton;
- (void)didTouchAccept:(id)arg1;
- (void)didTouchDecline:(id)arg1;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)messageLabel;
- (void)setAcceptButton:(id)arg1;
- (void)setDeclineButton:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setWhenLabel:(id)arg1;
- (id)whenLabel;

@end
