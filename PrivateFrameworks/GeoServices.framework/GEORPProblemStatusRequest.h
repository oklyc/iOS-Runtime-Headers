/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPUserCredentials, NSMutableArray, NSString;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    NSMutableArray *_problemIds;
    NSString *_statusNotificationId;
    GEORPUserCredentials *_userCredentials;
}

@property(readonly) BOOL hasStatusNotificationId;
@property(readonly) BOOL hasUserCredentials;
@property(retain) NSMutableArray * problemIds;
@property(retain) NSString * statusNotificationId;
@property(retain) GEORPUserCredentials * userCredentials;

- (void)addProblemId:(id)arg1;
- (void)clearProblemIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusNotificationId;
- (BOOL)hasUserCredentials;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemIdAtIndex:(unsigned int)arg1;
- (id)problemIds;
- (unsigned int)problemIdsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setProblemIds:(id)arg1;
- (void)setStatusNotificationId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationId;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
