/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPPlaybackControlsDelegate><MPTransportControlsTarget><MPUMiniPlayerActionsViewControllerDelegate>, MPUMiniPlayerActionsViewController, MPUMiniPlayerTransportControls, MPUNowPlayingTitlesView, MPUProspectivePlaybackInformation, MPUSkipLimitView, MPVolumeSlider, NSString, SKUICircleProgressIndicator, UIButton, UIPopoverController, UIView;

@interface MPUMiniPlayerPlaybackControlsView : MPPlaybackControlsView <MPUMiniPlayerActionsViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUICircleProgressIndicator *_createActivityIndicatorView;
    UIButton *_createButton;
    UIPopoverController *_createPopoverController;
    MPUMiniPlayerActionsViewController *_createViewController;
    UIView *_hairlineView;
    BOOL _isDetailScrubbing;
    MPUProspectivePlaybackInformation *_prospectivePlaybackInformation;
    BOOL _showingCreateLoadingIndicator;
    MPUSkipLimitView *_skipLimitView;
    MPUNowPlayingTitlesView *_titlesView;
    MPUMiniPlayerTransportControls *_transportControls;
    MPVolumeSlider *_volumeSlider;
}

@property(readonly) UIView * _createButton;
@property(getter=_isDetailScrubbing,readonly) BOOL _detailScrubbing;
@property(readonly) float _titleBaselineY;
@property(readonly) MPUMiniPlayerTransportControls * _transportControls;
@property(copy,readonly) NSString * debugDescription;
@property <MPPlaybackControlsDelegate><MPTransportControlsTarget><MPUMiniPlayerActionsViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) MPUProspectivePlaybackInformation * prospectivePlaybackInformation;
@property(getter=isShowingCreateLoadingIndicator) BOOL showingCreateLoadingIndicator;
@property(readonly) MPUSkipLimitView * skipLimitView;
@property(readonly) Class superclass;
@property(readonly) float titleMaxX;

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (id)_albumTextForItem:(id)arg1;
- (BOOL)_allowsScrubbingForItem:(id)arg1;
- (id)_artistTextForItem:(id)arg1;
- (id)_createButton;
- (void)_createButtonAction:(id)arg1;
- (BOOL)_isDetailScrubbing;
- (void)_itemIsExplicitDidChangeNotification:(id)arg1;
- (void)_itemTitlesDidChangeNotification:(id)arg1;
- (void)_layoutSkipLimitView;
- (Class)_miniPlayerActionsViewControllerClass;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playerContentsChangedNotification:(id)arg1;
- (void)_setupVisibleAndDisabledPartsForItem:(id)arg1;
- (float)_titleBaselineY;
- (id)_titleTextForItem:(id)arg1;
- (id)_transportControls;
- (Class)_transportControlsClassForItem:(id)arg1;
- (void)_updateForChangedShowingCreateLoadingIndicator;
- (void)_updateMarqueeStatusAllowingCurrentMarqueeToFinish:(BOOL)arg1;
- (void)_updatePlaybackControls;
- (void)_updatePlaybackControlsAnimated:(BOOL)arg1;
- (void)_updateTitles;
- (BOOL)_updateTitlesInView:(id)arg1 forItem:(id)arg2;
- (BOOL)_wantsCreateButtonForItem:(id)arg1;
- (int)buttonType;
- (void)dealloc;
- (BOOL)detailScrubbingHidesControls;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingCreateLoadingIndicator;
- (void)layoutSubviews;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(int)arg2;
- (id)newProgressIndicator;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)prospectivePlaybackInformation;
- (id)repeatButtonImage;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setProspectivePlaybackInformation:(id)arg1 animated:(BOOL)arg2;
- (void)setProspectivePlaybackInformation:(id)arg1;
- (void)setShowingCreateLoadingIndicator:(BOOL)arg1;
- (BOOL)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (id)skipLimitView;
- (void)tintColorDidChange;
- (float)titleMaxX;
- (void)transportControlsDidLayoutSubviews:(id)arg1;

@end
