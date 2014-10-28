/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int resultProviderId : 1; 
    } _has;
    } _muids;
    int _resultProviderId;
}

@property BOOL hasResultProviderId;
@property(readonly) unsigned long long* muids;
@property(readonly) unsigned int muidsCount;
@property int resultProviderId;

- (void)addMuid:(unsigned long long)arg1;
- (void)clearMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasResultProviderId;
- (unsigned int)hash;
- (id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muidAtIndex:(unsigned int)arg1;
- (unsigned long long*)muids;
- (unsigned int)muidsCount;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setMuids:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setResultProviderId:(int)arg1;
- (void)writeTo:(id)arg1;

@end
