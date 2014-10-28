/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSError, NSMutableDictionary;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {
    NSError *_fetchAllRecordZonesError;
    id _fetchRecordZonesCompletionBlock;
    BOOL _ignorePCSFailures;
    BOOL _isFetchAllRecordZonesOperation;
    NSMutableDictionary *_recordZoneErrors;
    NSArray *_recordZoneIDs;
    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
}

@property(retain) NSError * fetchAllRecordZonesError;
@property(copy) id fetchRecordZonesCompletionBlock;
@property BOOL ignorePCSFailures;
@property BOOL isFetchAllRecordZonesOperation;
@property(retain) NSMutableDictionary * recordZoneErrors;
@property(copy) NSArray * recordZoneIDs;
@property(retain) NSArray * recordZones;
@property(retain) NSMutableDictionary * recordZonesByZoneID;

+ (id)fetchAllRecordZonesOperation;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)fetchAllRecordZonesError;
- (id)fetchRecordZonesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)ignorePCSFailures;
- (id)init;
- (id)initWithRecordZoneIDs:(id)arg1;
- (BOOL)isFetchAllRecordZonesOperation;
- (void)performCKOperation;
- (id)recordZoneErrors;
- (id)recordZoneIDs;
- (id)recordZones;
- (id)recordZonesByZoneID;
- (void)setFetchAllRecordZonesError:(id)arg1;
- (void)setFetchRecordZonesCompletionBlock:(id)arg1;
- (void)setIgnorePCSFailures:(BOOL)arg1;
- (void)setIsFetchAllRecordZonesOperation:(BOOL)arg1;
- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setRecordZones:(id)arg1;
- (void)setRecordZonesByZoneID:(id)arg1;

@end
