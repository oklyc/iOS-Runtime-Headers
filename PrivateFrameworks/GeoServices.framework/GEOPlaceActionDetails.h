/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceActionDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int animationID : 1; 
        unsigned int businessID : 1; 
        unsigned int placeID : 1; 
        unsigned int searchResponseRelativeTimestamp : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int resultIndex : 1; 
    unsigned long long _animationID;
    unsigned long long _businessID;
    } _has;
    int _localSearchProviderID;
    long long _placeID;
    int _resultIndex;
    double _searchResponseRelativeTimestamp;
}

@property unsigned long long animationID;
@property unsigned long long businessID;
@property BOOL hasAnimationID;
@property BOOL hasBusinessID;
@property BOOL hasLocalSearchProviderID;
@property BOOL hasPlaceID;
@property BOOL hasResultIndex;
@property BOOL hasSearchResponseRelativeTimestamp;
@property int localSearchProviderID;
@property long long placeID;
@property int resultIndex;
@property double searchResponseRelativeTimestamp;

+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;

- (unsigned long long)animationID;
- (unsigned long long)businessID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAnimationID;
- (BOOL)hasBusinessID;
- (BOOL)hasLocalSearchProviderID;
- (BOOL)hasPlaceID;
- (BOOL)hasResultIndex;
- (BOOL)hasSearchResponseRelativeTimestamp;
- (unsigned int)hash;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (long long)placeID;
- (BOOL)readFrom:(id)arg1;
- (int)resultIndex;
- (double)searchResponseRelativeTimestamp;
- (void)setAnimationID:(unsigned long long)arg1;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setHasAnimationID:(BOOL)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setHasPlaceID:(BOOL)arg1;
- (void)setHasResultIndex:(BOOL)arg1;
- (void)setHasSearchResponseRelativeTimestamp:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlaceID:(long long)arg1;
- (void)setResultIndex:(int)arg1;
- (void)setSearchResponseRelativeTimestamp:(double)arg1;
- (void)writeTo:(id)arg1;

@end
