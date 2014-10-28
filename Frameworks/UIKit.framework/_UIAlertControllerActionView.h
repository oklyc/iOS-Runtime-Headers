/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertControllerVisualStyle, UIGestureRecognizer, UIImageView, UILabel, UIView;

@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, _UIAlertActionRepresenting> {
    UIAlertAction *_action;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    BOOL _discrete;
    BOOL _hasDescriptiveText;
    NSLayoutConstraint *_minimumHeightConstraint;
    unsigned int _roundedCorners;
    UIGestureRecognizer *_selectGestureRecognizer;
    UIAlertControllerVisualStyle *_visualStyle;
    UIImageView *checkView;
    UILabel *descriptiveLabel;
    NSMutableArray *havingDescriptiveLabelConstraints;
    SEL highlightAction;
    id highlightTarget;
    NSMutableArray *highlightedBackgroundConstraints;
    UIView *highlightedBackgroundContainerView;
    UIImageView *imageView;
    UILabel *label;
    UIView *labelContainerView;
    NSMutableArray *notHavingDescriptiveLabelConstraints;
    SEL selectedAction;
    id selectedTarget;
}

@property(copy) UIAlertAction * action;
@property float alignedDescriptiveLabelTextWidth;
@property(readonly) float currentDescriptiveLabelTextWidth;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL discrete;
@property(readonly) unsigned int hash;
@property(getter=isHighlighted) BOOL highlighted;
@property(readonly) Class superclass;
@property UIAlertControllerVisualStyle * visualStyle;

- (void)_action:(id)arg1 changedToChecked:(BOOL)arg2;
- (void)_action:(id)arg1 changedToEnabled:(BOOL)arg2;
- (void)_contentSizeChanged;
- (void)_focusStateDidChange;
- (void)_installSelectGestureRecognizer;
- (BOOL)_isFocusableElement;
- (float)_minimumLabelScaleFactor;
- (void)_prepareConstraints;
- (void)_prepareConstraintsForDescriptiveText:(BOOL)arg1;
- (void)_recomputeBackgroundColor;
- (void)_recomputeTextColor;
- (void)_selectGestureChanged:(id)arg1;
- (id)_titleFont;
- (id)_touchForEvent:(id)arg1;
- (void)_triggerSelect;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundView;
- (void)_updateFontSize;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForDescriptiveText:(BOOL)arg1;
- (id)action;
- (float)alignedDescriptiveLabelTextWidth;
- (float)currentDescriptiveLabelTextWidth;
- (void)dealloc;
- (id)description;
- (BOOL)discrete;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHighlighted;
- (void)setAction:(id)arg1;
- (void)setAlignedDescriptiveLabelTextWidth:(float)arg1;
- (void)setDiscrete:(BOOL)arg1;
- (void)setHighlightTarget:(id)arg1 action:(SEL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelectedTarget:(id)arg1 action:(SEL)arg2;
- (void)setVisualStyle:(id)arg1;
- (id)tintColor;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStyle;

@end
