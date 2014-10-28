/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {
    float _averageUserRating;
    int _numberOfUserRatings;
    NSString *_numberOfUserRatingsString;
    int _numberOfUserReviews;
    NSString *_numberOfUserReviewsString;
}

@property float averageUserRating;
@property int numberOfUserRatings;
@property(copy) NSString * numberOfUserRatingsString;
@property int numberOfUserReviews;
@property(copy) NSString * numberOfUserReviewsString;

- (float)averageUserRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (int)numberOfUserRatings;
- (id)numberOfUserRatingsString;
- (int)numberOfUserReviews;
- (id)numberOfUserReviewsString;
- (void)setAverageUserRating:(float)arg1;
- (void)setNumberOfUserRatings:(int)arg1;
- (void)setNumberOfUserRatingsString:(id)arg1;
- (void)setNumberOfUserReviews:(int)arg1;
- (void)setNumberOfUserReviewsString:(id)arg1;

@end
