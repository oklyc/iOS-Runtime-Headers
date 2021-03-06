/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyle : WMStyle {
    BOOL mIsInTextFrame;
}

+ (BOOL)isShadingNull:(id)arg1;

- (void)addParagraphProperties:(id)arg1 fromListLevelProperties:(BOOL)arg2;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (id)initWithWDParagraphProperties:(id)arg1 isInTextFrame:(BOOL)arg2;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2;
- (BOOL)isRTLWithOverridesFromProperties:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (void)mapBorders:(id)arg1;

@end
