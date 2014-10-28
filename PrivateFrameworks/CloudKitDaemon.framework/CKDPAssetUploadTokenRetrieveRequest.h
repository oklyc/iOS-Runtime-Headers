/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

@property(retain) NSMutableArray * assets;
@property(retain) CKDPRecordFieldIdentifier * field;
@property(readonly) BOOL hasField;
@property(readonly) BOOL hasType;
@property(retain) CKDPRecordType * type;
@property(retain) NSMutableArray * uploads;

+ (id)options;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (void)addUploads:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned int)arg1;
- (unsigned int)assetsCount;
- (void)clearAssets;
- (void)clearUploads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (BOOL)hasField;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAssets:(id)arg1;
- (void)setField:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUploads:(id)arg1;
- (id)type;
- (id)uploads;
- (id)uploadsAtIndex:(unsigned int)arg1;
- (unsigned int)uploadsCount;
- (void)writeTo:(id)arg1;

@end
