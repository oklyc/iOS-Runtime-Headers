/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    OADColor *mColor;
    int mIndex;
}

- (void)applyToParagraphProperties:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (int)index;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setIndex:(int)arg1;

@end
