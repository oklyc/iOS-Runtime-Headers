/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
    BOOL _bound;
    unsigned int _decodedBits;
    unsigned long _equalCount;
    NSMutableData *_leftovers;
    const char *_table;
    unsigned long _validBytes;
}

@property BOOL convertCommas;
@property BOOL isBound;
@property(readonly) unsigned long unconverted;

+ (BOOL)isValidBase64:(id)arg1;

- (unsigned long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long)arg4 startingAt:(unsigned long)arg5 outEncodedOffset:(unsigned int*)arg6;
- (int)appendData:(id)arg1;
- (BOOL)convertCommas;
- (void)dealloc;
- (void)done;
- (id)initWithConsumers:(id)arg1;
- (BOOL)isBound;
- (void)setConvertCommas:(BOOL)arg1;
- (void)setIsBound:(BOOL)arg1;
- (unsigned long)unconverted;

@end
