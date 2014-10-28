/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPResource;

@interface CKDPCloudDBSharingParams : PBCodable <NSCopying> {
    CKDPResource *_destination;
}

@property(retain) CKDPResource * destination;
@property(readonly) BOOL hasDestination;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (BOOL)hasDestination;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)writeTo:(id)arg1;

@end
