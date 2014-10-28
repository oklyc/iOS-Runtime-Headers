/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeAdvertiseStartRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
        unsigned int type : 1; 
    unsigned int _dataLength;
    } _has;
    NSString *_sessionId;
    unsigned long long _timestamp;
    int _type;
}

@property unsigned int dataLength;
@property BOOL hasDataLength;
@property(readonly) BOOL hasSessionId;
@property BOOL hasTimestamp;
@property BOOL hasType;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;
@property int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataLength;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataLength;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDataLength:(unsigned int)arg1;
- (void)setHasDataLength:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (unsigned long long)timestamp;
- (int)type;
- (void)writeTo:(id)arg1;

@end
