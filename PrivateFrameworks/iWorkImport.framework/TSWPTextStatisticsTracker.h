/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPStatisticsControlling>, NSMutableArray, NSString, TSWPStorage, TSWPTextStatistics;

@interface TSWPTextStatisticsTracker : NSObject <TSWPStorageObserver, TSWPTextStatisticsTracking> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    int _modifiedDelta;
    } _modifiedRange;
    NSMutableArray *_paragraphStatistics;
    <TSWPStatisticsControlling> *_statisticsController;
    TSWPStorage *_storage;
    TSWPTextStatistics *_storageStatistics;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) TSWPTextStatistics * statistics;
@property(readonly) Class superclass;

- (void)dealloc;
- (void)incrementallyUpdateStatisticsUntil:(id)arg1;
- (id)initWithController:(id)arg1 andObject:(id)arg2;
- (void)p_applyTextRangeOffset:(int)arg1 startingAtParagraphIndex:(unsigned int)arg2;
- (unsigned int)p_indexOfRangedStatisticForLocation:(unsigned int)arg1;
- (void)p_insertTrackers:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)p_invalidateTrackersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)p_processStorageChanges;
- (void)p_removeTrackersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)p_updateStatisticsInRangedStatistic:(id)arg1;
- (id)statistics;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 delta:(int)arg3 broadcastKind:(int)arg4;
- (void)tearDown;

@end
