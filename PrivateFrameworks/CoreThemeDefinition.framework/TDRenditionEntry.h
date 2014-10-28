/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    NSData *assetData;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *key;
    const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; } *keyFormat;
    TDRenditionSpec *renditionSpec;
    } stackKey[16];
}

@property(retain,readonly) NSData * assetData;
@property(retain,readonly) TDRenditionSpec * renditionSpec;

- (id)assetData;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 keyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4;
- (id)renditionSpec;

@end
