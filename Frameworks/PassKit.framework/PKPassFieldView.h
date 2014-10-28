/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKDiffView, PKPassColorProfile, PKPassField, PKPassFieldTemplate, UILabel;

@interface PKPassFieldView : UIView {
    struct CGSize { 
        float width; 
        float height; 
    int _background;
    } _cachedSize;
    PKPassColorProfile *_colorProfile;
    PKDiffView *_diffView;
    PKPassField *_field;
    PKPassFieldTemplate *_fieldTemplate;
    UILabel *_labelLabel;
    BOOL _needsRecalculation;
    UILabel *_valueLabel;
}

@property(retain) PKPassColorProfile * colorProfile;
@property(retain) PKDiffView * diffView;
@property(retain) PKPassField * field;
@property(retain) PKPassFieldTemplate * fieldTemplate;
@property(readonly) UILabel * labelLabel;
@property(readonly) UILabel * valueLabel;

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;

- (id)_labelAttributedStringForColorProfile:(id)arg1 background:(int)arg2;
- (struct CGSize { float x1; float x2; })_resizeMultiLineValueFontForAvailableSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_shouldDisplayLabel;
- (id)_valueAttributedStringForColorProfile:(id)arg1 background:(int)arg2;
- (id)colorProfile;
- (void)dealloc;
- (id)description;
- (id)diffView;
- (id)field;
- (id)fieldTemplate;
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;
- (void)invalidateCachedFieldSize;
- (id)labelLabel;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(id)arg3;
- (void)setColorProfile:(id)arg1 background:(int)arg2;
- (void)setColorProfile:(id)arg1;
- (void)setDiffView:(id)arg1;
- (void)setField:(id)arg1;
- (void)setFieldTemplate:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)valueLabel;

@end
