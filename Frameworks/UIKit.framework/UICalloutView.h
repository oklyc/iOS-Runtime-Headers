/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSTimer, UIImageView, UILabel, UIView;

@interface UICalloutView : UIControl {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGPoint { 
            float x; 
            float y; 
        } offset; 
        int position; 
        struct CGPoint { 
            float x; 
            float y; 
        } desiredPoint; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } desiredBounds; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int animated : 1; 
        unsigned int didMoveCalled : 1; 
        unsigned int hasPendingAnimatedLayout : 1; 
        unsigned int canAnchorFromBottom : 1; 
        unsigned int reserved : 28; 
    } _anchor;
    UIImageView *_bottomAnchor;
    id _delegate;
    NSMutableArray *_fadeInViews;
    NSMutableArray *_fadeOutViews;
    } _flags;
    } _frame;
    NSTimer *_layoutAnimationTimer;
    UIImageView *_leftBackground;
    UIImageView *_leftCap;
    UIView *_leftView;
    float _maximumWidth;
    UIImageView *_rightBackground;
    UIImageView *_rightCap;
    UIView *_rightView;
    UILabel *_subtitle;
    UILabel *_temporary;
    UILabel *_title;
    UIImageView *_topAnchor;
}

@property(readonly) float UICalloutViewButtonPadding;
@property(readonly) float UICalloutViewCapHeight;
@property(readonly) float UICalloutViewCapPaddingTop;
@property(readonly) float UICalloutViewHorizontalMargin;
@property(readonly) float UICalloutViewHorizontalPadding;
@property(readonly) double UICalloutViewLayoutDuration;
@property(readonly) float UICalloutViewMinimumWidth;
@property(readonly) float UICalloutViewVerticalMargin;
@property BOOL canAnchorFromBottom;
@property(retain) UIView * leftView;
@property float maximumWidth;
@property(retain) UIView * rightView;
@property int subtitleLineBreakMode;
@property int subtitleTextAlignment;
@property int titleLineBreakMode;
@property int titleTextAlignment;

+ (id)_backgroundImage;
+ (id)_bottomAnchorImage;
+ (id)_leftCapImage;
+ (id)_rightCapImage;
+ (id)_topAnchorImage;
+ (float)defaultHeight;
+ (id)sharedCalloutView;

- (float)UICalloutViewButtonPadding;
- (float)UICalloutViewCapHeight;
- (float)UICalloutViewCapPaddingTop;
- (float)UICalloutViewHorizontalMargin;
- (float)UICalloutViewHorizontalPadding;
- (double)UICalloutViewLayoutDuration;
- (float)UICalloutViewMinimumWidth;
- (float)UICalloutViewVerticalMargin;
- (void)_fadeViewsIn:(BOOL)arg1;
- (void)_layoutAnimation;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_markDidMoveCalled;
- (void)_scheduleLayoutAnimation;
- (void)_scheduleViewToFadeIn:(id)arg1;
- (void)_scheduleViewToFadeOut:(id)arg1;
- (void)_setLayoutAnimationTimer:(id)arg1;
- (void)_setLeftView:(id)arg1;
- (void)_setOriginForScale:(float)arg1;
- (void)_setRightView:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)canAnchorFromBottom;
- (void)completeBounceAnimation;
- (void)dealloc;
- (id)delegate;
- (void)fadeOutWithDuration:(double)arg1;
- (void)getActualAnchorPoint:(struct CGPoint { float x1; float x2; }*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 position:(int*)arg3 forDesiredAnchorPoint:(struct CGPoint { float x1; float x2; })arg4 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isExpanded;
- (id)leftView;
- (float)maximumWidth;
- (struct CGPoint { float x1; float x2; })offset;
- (void)removeTarget:(id)arg1;
- (id)rightView;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 animate:(BOOL)arg3;
- (void)setCanAnchorFromBottom:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1;
- (void)setMaximumWidth:(float)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLineBreakMode:(int)arg1;
- (void)setSubtitleTextAlignment:(int)arg1;
- (void)setTemporaryTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLineBreakMode:(int)arg1;
- (void)setTitleTextAlignment:(int)arg1;
- (id)subtitle;
- (int)subtitleLineBreakMode;
- (int)subtitleTextAlignment;
- (id)temporaryTitle;
- (id)title;
- (int)titleLineBreakMode;
- (int)titleTextAlignment;

@end
