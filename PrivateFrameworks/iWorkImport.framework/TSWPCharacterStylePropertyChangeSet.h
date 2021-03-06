/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDSpecShadow, TSSSpecBool, TSSSpecColor, TSSSpecDouble, TSSSpecInteger, TSSSpecString, TSWPSpecFontFeatures;

@interface TSWPCharacterStylePropertyChangeSet : TSSStylePropertyChangeSet {
    TSSSpecDouble *_baselineShift;
    TSSSpecBool *_bold;
    TSSSpecInteger *_capitalization;
    TSSSpecString *_compatibilityFontName;
    BOOL _definedBaselineShift;
    BOOL _definedBold;
    BOOL _definedCapitalization;
    BOOL _definedCompatibilityFontName;
    BOOL _definedEmphasisMarks;
    BOOL _definedFontColor;
    BOOL _definedFontFeatures;
    BOOL _definedFontName;
    BOOL _definedFontSize;
    BOOL _definedFontSizeDelta;
    BOOL _definedItalic;
    BOOL _definedKerning;
    BOOL _definedLanguage;
    BOOL _definedLigatures;
    BOOL _definedOutline;
    BOOL _definedOutlineColor;
    BOOL _definedStrikethru;
    BOOL _definedStrikethruColor;
    BOOL _definedStrikethruWidth;
    BOOL _definedSuperscript;
    BOOL _definedTextBackground;
    BOOL _definedTextShadow;
    BOOL _definedTracking;
    BOOL _definedUnderline;
    BOOL _definedUnderlineColor;
    BOOL _definedUnderlineWidth;
    BOOL _definedWordStrikethru;
    BOOL _definedWordUnderline;
    BOOL _definedWritingDirection;
    TSSSpecString *_emphasisMarks;
    TSSSpecColor *_fontColor;
    TSWPSpecFontFeatures *_fontFeatures;
    TSSSpecString *_fontName;
    TSSSpecDouble *_fontSize;
    TSSSpecDouble *_fontSizeDelta;
    TSSSpecBool *_italic;
    TSSSpecDouble *_kerning;
    TSSSpecString *_language;
    TSSSpecInteger *_ligatures;
    TSSSpecDouble *_outline;
    TSSSpecColor *_outlineColor;
    TSSSpecInteger *_strikethru;
    TSSSpecColor *_strikethruColor;
    TSSSpecDouble *_strikethruWidth;
    TSSSpecInteger *_superscript;
    TSSSpecColor *_textBackground;
    TSDSpecShadow *_textShadow;
    TSSSpecDouble *_tracking;
    TSSSpecInteger *_underline;
    TSSSpecColor *_underlineColor;
    TSSSpecDouble *_underlineWidth;
    TSSSpecBool *_wordStrikethru;
    TSSSpecBool *_wordUnderline;
    TSSSpecInteger *_writingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(id)arg1;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setUnsetSpecForProperty:(int)arg1;

@end
