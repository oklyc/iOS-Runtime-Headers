/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDictionary, NSMutableArray;

@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int statusCode : 1; 
        unsigned int ttl : 1; 
        unsigned int version : 1; 
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    } _has;
    int _statusCode;
    double _timestamp;
    unsigned int _ttl;
    unsigned int _version;
    NSMutableArray *_versionDomains;
}

@property(retain) NSMutableArray * batchPlaceResults;
@property(retain) NSMutableArray * clusters;
@property BOOL hasStatusCode;
@property BOOL hasTimestamp;
@property BOOL hasTtl;
@property BOOL hasVersion;
@property(retain) NSDictionary * httpHeaders;
@property int statusCode;
@property double timestamp;
@property unsigned int ttl;
@property unsigned int version;
@property(retain) NSMutableArray * versionDomains;

- (void)addBatchPlaceResult:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (id)batchPlaceResultAtIndex:(unsigned int)arg1;
- (id)batchPlaceResults;
- (unsigned int)batchPlaceResultsCount;
- (void)clearBatchPlaceResults;
- (void)clearClusters;
- (void)clearVersionDomains;
- (id)clusterAtIndex:(unsigned int)arg1;
- (id)clusters;
- (unsigned int)clustersCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (BOOL)hasTimestamp;
- (BOOL)hasTtl;
- (BOOL)hasVersion;
- (unsigned int)hash;
- (id)httpHeaders;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBatchPlaceResults:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTtl:(BOOL)arg1;
- (void)setHasVersion:(BOOL)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTtl:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setVersionDomains:(id)arg1;
- (int)statusCode;
- (double)timestamp;
- (unsigned int)ttl;
- (unsigned int)version;
- (id)versionDomainAtIndex:(unsigned int)arg1;
- (id)versionDomains;
- (unsigned int)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
