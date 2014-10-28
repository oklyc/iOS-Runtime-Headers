/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIActivityIndicatorView;

@interface CKTranscriptHeaderCell : CKTranscriptCell {
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain) UIActivityIndicatorView * loadingIndicator;

+ (float)defaultCellHeight;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;

@end
