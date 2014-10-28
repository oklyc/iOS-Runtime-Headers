/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class NSIndexPath, SUAudioPlayer, SUPlayerStatus, SUSegmentedControl;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (BOOL)_handleInlinePreviewForIndexPath:(id)arg1;
- (BOOL)_handleMediaPreviewForIndexPath:(id)arg1;
- (BOOL)_handlePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)_stopPreviewPlayback;
- (void)applicationDidEnterBackground;
- (BOOL)canDisplaySectionGroup:(id)arg1;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (id)init;
- (BOOL)purchaseItemAtIndexPath:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillDisappear:(BOOL)arg1;

@end
