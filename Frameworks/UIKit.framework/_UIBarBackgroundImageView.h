/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIImageView *_customImageContainer;
    UIView *_topStripView;
    BOOL _translucent;
}

@property(getter=isTranslucent) BOOL translucent;

- (id)image;
- (BOOL)isTranslucent;
- (void)removeTopStripView;
- (void)setImage:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (id)topStripView;
- (void)updateTopStripViewCreateIfNecessary;

@end
