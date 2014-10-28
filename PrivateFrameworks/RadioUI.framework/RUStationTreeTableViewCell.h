/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSString, RUAudioPreviewView, SKUICircleProgressIndicator, UIButton, UILabel, UIView;

@interface RUStationTreeTableViewCell : RUTableViewCell {
    SKUICircleProgressIndicator *_activityIndicator;
    UIButton *_addButton;
    RUAudioPreviewView *_audioPreviewView;
    int _cellDisplayStyle;
    UILabel *_nowPlayingTextLabel;
    BOOL _playing;
    UIView *_rightAccessoryView;
    BOOL _showsActivityIndicator;
    UILabel *_titleLabel;
}

@property(readonly) UIButton * addButton;
@property(readonly) RUAudioPreviewView * audioPreviewView;
@property int cellDisplayStyle;
@property(copy) NSString * nowPlayingText;
@property(getter=isPlaying) BOOL playing;
@property BOOL showsActivityIndicator;
@property(copy) NSString * title;

+ (BOOL)_audioPreviewViewShowsFaceWhenNotPlaying;
+ (struct CGSize { float x1; float x2; })_audioPreviewViewSize;
+ (id)_nowPlayingTextLabelFont;
+ (id)_titleLabelFontWithEmphasis:(BOOL)arg1;
+ (float)defaultHeightForTraitCollection:(id)arg1 includingNowPlayingText:(BOOL)arg2;

- (void).cxx_destruct;
- (void)_applyAttributesForChangedCellStyleAnimated:(BOOL)arg1;
- (id)_audioPreviewAnimationForShowing:(BOOL)arg1;
- (float)_audioPreviewViewMinX;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_layoutSubviewsForcingTitleLabelCentered:(BOOL)arg1 alignLabelsHorizontallyForPlaying:(BOOL)arg2;
- (void)_showChangeToPlaying:(BOOL)arg1 animated:(BOOL)arg2;
- (float)_textLabelMinXWhenPlaying:(BOOL)arg1;
- (id)addButton;
- (id)audioPreviewView;
- (int)cellDisplayStyle;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (id)nowPlayingText;
- (void)setCellDisplayStyle:(int)arg1;
- (void)setNowPlayingText:(id)arg1 animated:(BOOL)arg2;
- (void)setNowPlayingText:(id)arg1;
- (void)setPlaying:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPlaying:(BOOL)arg1;
- (void)setShowsActivityIndicator:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsActivityIndicator;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
