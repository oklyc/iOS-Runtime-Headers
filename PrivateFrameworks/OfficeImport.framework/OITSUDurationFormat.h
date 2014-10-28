/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
    NSString *mFormat;
    NSString *mName;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)format;
- (id)formatName;
- (unsigned int)hash;
- (id)initWithFormat:(id)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setFormatName:(id)arg1;

@end
