/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_purgableRatingsDictionary;
+ (id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2;
+ (id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3;

- (void)cache:(id)arg1 willEvictObject:(id)arg2;

@end
