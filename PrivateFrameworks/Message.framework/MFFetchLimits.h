/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFetchLimits : NSObject {
    unsigned int _fetchMaxBytes;
    unsigned int _fetchMinBytes;
    unsigned int _minBytesLeft;
}

@property unsigned int fetchMaxBytes;
@property unsigned int fetchMinBytes;
@property unsigned int minBytesLeft;

- (unsigned int)fetchMaxBytes;
- (unsigned int)fetchMinBytes;
- (id)init;
- (unsigned int)minBytesLeft;
- (void)setFetchMaxBytes:(unsigned int)arg1;
- (void)setFetchMinBytes:(unsigned int)arg1;
- (void)setMinBytesLeft:(unsigned int)arg1;

@end
