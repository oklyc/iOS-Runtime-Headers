/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEORating : PBCodable <NSCopying> {
    struct { 
        unsigned int maxScore : 1; 
        unsigned int score : 1; 
        unsigned int numberOfRatings : 1; 
        unsigned int numberOfReviews : 1; 
    } _has;
    double _maxScore;
    int _numberOfRatings;
    int _numberOfReviews;
    NSString *_provider;
    NSMutableArray *_reviews;
    double _score;
    NSString *_uRL;
}

@property BOOL hasMaxScore;
@property BOOL hasNumberOfRatings;
@property BOOL hasNumberOfReviews;
@property(readonly) BOOL hasProvider;
@property BOOL hasScore;
@property(readonly) BOOL hasURL;
@property double maxScore;
@property int numberOfRatings;
@property int numberOfReviews;
@property(retain) NSString * provider;
@property(retain) NSMutableArray * reviews;
@property double score;
@property(retain) NSString * uRL;

- (void)addReview:(id)arg1;
- (void)clearReviews;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxScore;
- (BOOL)hasNumberOfRatings;
- (BOOL)hasNumberOfReviews;
- (BOOL)hasProvider;
- (BOOL)hasScore;
- (BOOL)hasURL;
- (unsigned int)hash;
- (id)initWithPlaceDataRating:(id)arg1 reviews:(id)arg2;
- (id)initWithSampleSizeForUserRatingScore:(unsigned int)arg1 normalizedUserRatingScore:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (double)maxScore;
- (void)mergeFrom:(id)arg1;
- (int)numberOfRatings;
- (int)numberOfReviews;
- (id)provider;
- (BOOL)readFrom:(id)arg1;
- (id)reviewAtIndex:(unsigned int)arg1;
- (id)reviews;
- (unsigned int)reviewsCount;
- (double)score;
- (void)setHasMaxScore:(BOOL)arg1;
- (void)setHasNumberOfRatings:(BOOL)arg1;
- (void)setHasNumberOfReviews:(BOOL)arg1;
- (void)setHasScore:(BOOL)arg1;
- (void)setMaxScore:(double)arg1;
- (void)setNumberOfRatings:(int)arg1;
- (void)setNumberOfReviews:(int)arg1;
- (void)setProvider:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setURL:(id)arg1;
- (id)uRL;
- (void)writeTo:(id)arg1;

@end
