/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPInvitationQueryResponse : PBCodable <NSCopying> {
    NSMutableArray *_invitations;
}

@property(retain) NSMutableArray * invitations;

- (void).cxx_destruct;
- (void)addInvitation:(id)arg1;
- (void)clearInvitations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)invitationAtIndex:(unsigned int)arg1;
- (id)invitations;
- (unsigned int)invitationsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setInvitations:(id)arg1;
- (void)writeTo:(id)arg1;

@end
