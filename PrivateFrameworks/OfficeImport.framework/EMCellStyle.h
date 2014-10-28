/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStyle;

@interface EMCellStyle : CMStyle <NSCopying> {
    double _columnWidth;
    double _contentWidth;
    int _edCellType;
    EDStyle *_edStyle;
    BOOL _isColumnZero;
    BOOL _isRowZero;
    BOOL _resolvedProperties;
    BOOL _truncateContents;
}

+ (id)_parseFontName:(id)arg1 nameContainsBold:(BOOL*)arg2 nameContainsItalic:(BOOL*)arg3;
+ (id)styleForFont:(id)arg1;

- (void)addAlignmentStyle:(id)arg1;
- (void)addBordersStyle:(id)arg1;
- (void)addFillStyle:(id)arg1;
- (void)addFontStyle:(id)arg1;
- (id)cacheFriendlyCSSStyleString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cssStyleString;
- (unsigned int)hash;
- (id)initWithEDStyle:(id)arg1 type:(int)arg2 rowIndex:(unsigned int)arg3 columnIndex:(unsigned int)arg4 columnWidth:(unsigned int)arg5 contentWidth:(unsigned int)arg6 truncateContents:(BOOL)arg7;
- (BOOL)isEqual:(id)arg1;
- (void)resolveBorders;
- (void)resolveContentWidth;
- (void)resolveFormatType;

@end
