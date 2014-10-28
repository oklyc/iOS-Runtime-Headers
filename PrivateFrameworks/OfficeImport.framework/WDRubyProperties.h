/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyProperties : NSObject {
    unsigned int mOriginal : 1;
    struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *mOriginalProperties;
}

@property int alignment;
@property unsigned short baseFontSize;
@property unsigned short distanceBetween;
@property unsigned short phoneticGuideFontSize;
@property int phoneticGuideLanguage;

- (int)alignment;
- (unsigned short)baseFontSize;
- (void)clearAlignment;
- (void)clearBaseFontSize;
- (void)clearDistanceBetween;
- (void)clearPhoneticGuideFontSize;
- (void)clearPhoneticGuideLanguage;
- (void)dealloc;
- (unsigned short)distanceBetween;
- (id)init;
- (BOOL)isAlignmentOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isAnythingOverriddenIn:(struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; }*)arg1;
- (BOOL)isBaseFontSizeOverridden;
- (BOOL)isDistanceBetweenOverridden;
- (BOOL)isPhoneticGuideFontSizeOverridden;
- (BOOL)isPhoneticGuideLanguageOverridden;
- (unsigned short)phoneticGuideFontSize;
- (int)phoneticGuideLanguage;
- (void)setAlignment:(int)arg1;
- (void)setBaseFontSize:(unsigned short)arg1;
- (void)setDistanceBetween:(unsigned short)arg1;
- (void)setPhoneticGuideFontSize:(unsigned short)arg1;
- (void)setPhoneticGuideLanguage:(int)arg1;

@end
