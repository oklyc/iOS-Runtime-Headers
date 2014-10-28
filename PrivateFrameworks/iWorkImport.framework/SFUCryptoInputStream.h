/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <SFUInputStream>, NSString, SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mBaseStream;
    SFUCryptor *mCryptor;
    long long mOffset;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
