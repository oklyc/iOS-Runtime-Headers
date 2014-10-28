/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAttachmentViewController, CKConversation, CKTranscriptManagementNameField, CKTranscriptManagementView, FMFMapViewController, NSString;

@interface CKTranscriptManagementController : CKViewController <FMFMapViewControllerDelegate, CKAttachmentViewControllerDelegate, CKTranscriptManagementNameFieldDelegate, UIGestureRecognizerDelegate> {
    CKAttachmentViewController *_attachmentsController;
    CKConversation *_conversation;
    BOOL _initialLoad;
    CKTranscriptManagementView *_managementView;
    FMFMapViewController *_mapController;
    BOOL _mapHidden;
    CKTranscriptManagementNameField *_nameField;
    BOOL _removeMapViewAfterScrollAnimation;
}

@property(retain) CKAttachmentViewController * attachmentsController;
@property(retain) CKConversation * conversation;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isInitialLoad) BOOL initialLoad;
@property(retain) CKTranscriptManagementView * managementView;
@property(retain) FMFMapViewController * mapController;
@property BOOL mapHidden;
@property(retain) CKTranscriptManagementNameField * nameField;
@property BOOL removeMapViewAfterScrollAnimation;
@property(readonly) Class superclass;

- (BOOL)_conversationHasLeft;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_handleDisplayNameChangedNotification:(id)arg1;
- (void)_handleFriendshipStatusChangedNotification:(id)arg1;
- (void)_handleLocationChangedNotification:(id)arg1;
- (float)_mapHeightForCurrentBounds;
- (void)_mapViewTouched:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_navigationBarInsets;
- (void)_scrollAttachmentsToTopAnimated:(BOOL)arg1;
- (void)_updateAttachmentsInsets;
- (void)_updateMapInsets;
- (void*)annotationABRecordForHandle:(id)arg1;
- (id)annotationImageForHandle:(id)arg1;
- (void)attachmentsController:(id)arg1 collectionViewDidChangeEditState:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidEndScrollingAnimation:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewDidScroll:(id)arg2;
- (void)attachmentsController:(id)arg1 collectionViewWillBeginDragging:(id)arg2;
- (id)attachmentsController;
- (id)conversation;
- (void)dealloc;
- (void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
- (void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
- (void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithConversation:(id)arg1;
- (BOOL)isInitialLoad;
- (void)loadView;
- (id)managementView;
- (id)mapController;
- (BOOL)mapHidden;
- (void)nameField:(id)arg1 didCommitGroupName:(id)arg2;
- (id)nameField;
- (BOOL)removeMapViewAfterScrollAnimation;
- (void)setAttachmentsController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setInitialLoad:(BOOL)arg1;
- (void)setManagementView:(id)arg1;
- (void)setMapController:(id)arg1;
- (void)setMapHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMapHidden:(BOOL)arg1;
- (void)setNameField:(id)arg1;
- (void)setRemoveMapViewAfterScrollAnimation:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
