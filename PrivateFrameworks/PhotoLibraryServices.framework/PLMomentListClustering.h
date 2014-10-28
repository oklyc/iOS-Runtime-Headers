/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSDateFormatter, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface PLMomentListClustering : NSObject {
    NSMutableDictionary *__cachedCollectionTagByMomentID;
    NSMapTable *__cachedLocationsByMoment;
    NSMutableDictionary *__clustersByYearAndMonth;
    NSDateFormatter *__debugDateFormatter;
    unsigned int __defaultMaxFailuresForExpansion;
    unsigned int __defaultNumberOfAssetsRequiredForSeeding;
    double __maximumDistanceBetweenAccumulatedMoments;
    double __maximumDistanceThresholdBetweenMoments;
    double __maximumDistanceThresholdFromPeak;
    double __maximumTimeThreshold;
    double __maximumTimeThresholdBetweenMomentsWithLocation;
    double __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double __maximumTimeThresholdFromPeakMatch;
    double __maximumTimeThresholdFromPeakWithoutLocation;
    double __megamomentAccumulationMaximumTimeThreshold;
    unsigned int __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned int __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableSet *__visitedMoments;
    BOOL _allowsCollectionAccumulation;
    BOOL _allowsCollectionInfluencing;
    BOOL _allowsYearAccumulation;
}

@property(setter=_setCachedCollectionTagByMomentID:,retain) NSMutableDictionary * _cachedCollectionTagByMomentID;
@property(setter=_setCachedLocationsByMoment:,retain) NSMapTable * _cachedLocationsByMoment;
@property(readonly) NSMutableDictionary * _clustersByYearAndMonth;
@property(readonly) NSDateFormatter * _debugDateFormatter;
@property(readonly) unsigned int _defaultMaxFailuresForExpansion;
@property(readonly) unsigned int _defaultNumberOfAssetsRequiredForSeeding;
@property(readonly) double _maximumDistanceBetweenAccumulatedMoments;
@property(readonly) double _maximumDistanceThresholdBetweenMoments;
@property(readonly) double _maximumDistanceThresholdFromPeak;
@property(readonly) double _maximumTimeThreshold;
@property(readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;
@property(readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;
@property(readonly) double _maximumTimeThresholdFromPeakMatch;
@property(readonly) double _maximumTimeThresholdFromPeakWithoutLocation;
@property(readonly) double _megamomentAccumulationMaximumTimeThreshold;
@property(readonly) unsigned int _minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property(readonly) unsigned int _minimumNumberOfAssetsToAvoidYearAccumulation;
@property(readonly) NSMutableSet * _visitedMoments;
@property BOOL allowsCollectionAccumulation;
@property BOOL allowsCollectionInfluencing;
@property BOOL allowsYearAccumulation;

+ (double)maximumTimeThresholdBetweenMoments;

- (id)_cachedCollectionTagByMomentID;
- (id)_cachedLocationForMoment:(id)arg1;
- (id)_cachedLocationsByMoment;
- (id)_clustersByYearAndMonth;
- (void)_createMomentListClusterCacheForMoments:(id)arg1;
- (void)_createMomentListTagCacheForMoments:(id)arg1;
- (id)_debugDateFormatter;
- (unsigned int)_defaultMaxFailuresForExpansion;
- (unsigned int)_defaultNumberOfAssetsRequiredForSeeding;
- (unsigned int)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(BOOL)arg4 outRejectedMoments:(id)arg5;
- (id)_insertNewMegaMomentListWithMoment:(id)arg1 inManager:(id)arg2;
- (BOOL)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(BOOL)arg4;
- (double)_maximumDistanceBetweenAccumulatedMoments;
- (double)_maximumDistanceThresholdBetweenMoments;
- (double)_maximumDistanceThresholdFromPeak;
- (double)_maximumTimeThreshold;
- (double)_maximumTimeThresholdBetweenMomentsWithLocation;
- (double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
- (double)_maximumTimeThresholdFromPeakMatch;
- (double)_maximumTimeThresholdFromPeakWithoutLocation;
- (double)_megamomentAccumulationMaximumTimeThreshold;
- (unsigned int)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
- (unsigned int)_minimumNumberOfAssetsToAvoidYearAccumulation;
- (void)_setCachedCollectionTagByMomentID:(id)arg1;
- (void)_setCachedLocationsByMoment:(id)arg1;
- (BOOL)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(BOOL)arg6 haveRejectedMomentsForDistance:(BOOL)arg7;
- (BOOL)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2;
- (void)_verifyMomentsAreSorted:(id)arg1;
- (id)_visitedMoments;
- (BOOL)allowsCollectionAccumulation;
- (BOOL)allowsCollectionInfluencing;
- (BOOL)allowsYearAccumulation;
- (void)dealloc;
- (id)generateMegaMomentListsForMoments:(id)arg1 inManager:(id)arg2;
- (id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManager:(id)arg4;
- (id)init;
- (void)setAllowsCollectionAccumulation:(BOOL)arg1;
- (void)setAllowsCollectionInfluencing:(BOOL)arg1;
- (void)setAllowsYearAccumulation:(BOOL)arg1;

@end
