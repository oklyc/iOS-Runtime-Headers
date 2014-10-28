/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, NSMutableDictionary, UIColor, UIFont;

@interface _UICascadingTextStorage : NSConcreteTextStorage {
    NSMutableDictionary *_defaultAttributes;
}

@property(copy) NSDictionary * defaultAttributes;
@property(retain) UIFont * font;
@property int lineBreakMode;
@property float shadowBlur;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property int textAlignment;
@property(retain) UIColor * textColor;

+ (id)defaultFont;

- (id)_defaultAttributes;
- (void)_restoreOriginalFontAttribute;
- (void)_setShadow:(id)arg1;
- (id)_shadow;
- (BOOL)_shouldSetOriginalFontAttribute;
- (int)_ui_resolvedTextAlignment;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)dealloc;
- (id)defaultAttributes;
- (id)font;
- (int)lineBreakMode;
- (void)setDefaultAttributes:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setShadowBlur:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (float)shadowBlur;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (int)textAlignment;
- (id)textColor;

@end
