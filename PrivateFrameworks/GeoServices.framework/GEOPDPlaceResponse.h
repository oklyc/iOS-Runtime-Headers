/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDPlaceGlobalResult, NSMutableArray;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int requestType : 1; 
        unsigned int status : 1; 
    GEOPDPlaceGlobalResult *_globalResult;
    } _has;
    NSMutableArray *_placeResults;
    int _requestType;
    int _status;
}

@property(retain) GEOPDPlaceGlobalResult * globalResult;
@property(readonly) BOOL hasGlobalResult;
@property BOOL hasRequestType;
@property BOOL hasStatus;
@property(retain) NSMutableArray * placeResults;
@property int requestType;
@property int status;

- (id)_disambiguationLabels;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)globalResult;
- (BOOL)hasGlobalResult;
- (BOOL)hasRequestType;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (id)initWithGeocoderPlace:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResultAtIndex:(unsigned int)arg1;
- (id)placeResults;
- (unsigned int)placeResultsCount;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (void)setGlobalResult:(id)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
