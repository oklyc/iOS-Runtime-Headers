/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <SFUInputStream>, NSString;

@interface SFUOffsetInputStream : NSObject <SFUInputStream> {
    long long mInitialOffset;
    <SFUInputStream> *mInputStream;
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
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;
- (id)initWithInputStream:(id)arg1;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
