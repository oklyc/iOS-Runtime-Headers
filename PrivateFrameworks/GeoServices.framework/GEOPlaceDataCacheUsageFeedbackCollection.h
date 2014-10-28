/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable <NSCopying> {
    NSMutableArray *_cacheFeedbacks;
}

@property(retain) NSMutableArray * cacheFeedbacks;

- (void)addCacheFeedback:(id)arg1;
- (id)cacheFeedbackAtIndex:(unsigned int)arg1;
- (id)cacheFeedbacks;
- (unsigned int)cacheFeedbacksCount;
- (void)clearCacheFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCacheFeedbacks:(id)arg1;
- (void)writeTo:(id)arg1;

@end
