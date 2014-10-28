/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class BBBulletin, CKIMDBMessage, NCInteractiveNotificationHostViewController, NSString;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate> {
    NCInteractiveNotificationHostViewController *_audioPlaybackViewController;
    BBBulletin *_bulletin;
    CKIMDBMessage *_message;
    BOOL _playedSound;
    NCInteractiveNotificationHostViewController *_replyViewController;
    BOOL _showingImage;
}

@property(retain) NCInteractiveNotificationHostViewController * audioPlaybackViewController;
@property(retain) BBBulletin * bulletin;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NCInteractiveNotificationHostViewController * replyViewController;
@property BOOL showingImage;
@property(readonly) Class superclass;

+ (int)lastMessageSenderID;
+ (void)playMessageReceived;
+ (void)setLastMessageSenderID:(int)arg1;
+ (void)stopPlayingCurrentAlertTone;

- (id)_groupID;
- (id)accessoryView;
- (id)address;
- (id)alertImage;
- (Class)alertSheetClass;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowMenuButtonDismissal;
- (id)audioPlaybackViewController;
- (id)bulletin;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (void)didDeactivateForReason:(int)arg1;
- (BOOL)dismissOnLock;
- (void)hostViewController:(id)arg1 didDismissPresentedViewController:(id)arg2;
- (void)hostViewController:(id)arg1 didEnable:(BOOL)arg2 actionAtIndex:(unsigned int)arg3;
- (void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(id)arg1;
- (BOOL)isAudioPlaybackAlert;
- (BOOL)isReplyAlert;
- (id)messageText;
- (id)name;
- (void)performUnlockAction;
- (void)reply;
- (id)replyViewController;
- (void)setAudioPlaybackViewController:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReplyViewController:(id)arg1;
- (void)setShowingImage:(BOOL)arg1;
- (BOOL)shouldHideSMSPreview;
- (BOOL)showingImage;
- (void)willPresentAlertView:(id)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end
