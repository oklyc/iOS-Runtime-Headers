/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier, NSMutableArray;

@interface CKDPShareParticipantUpdateRequest : PBRequest <NSCopying> {
    NSMutableArray *_participants;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) BOOL hasShareId;
@property(retain) NSMutableArray * participants;
@property(retain) CKDPShareIdentifier * shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShareId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantAtIndex:(unsigned int)arg1;
- (id)participants;
- (unsigned int)participantsCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setParticipants:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
