/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSMutableDictionary, NSOperation;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation {
    unsigned int _URLOptions;
    id _assetPublishedBlock;
    NSOperation *_fetchRecordsOperation;
    NSMutableDictionary *_fetchedRecordsByID;
    NSDictionary *_fileNamesByAssetFieldNames;
    NSArray *_recordIDs;
    unsigned int _requestedTTL;
}

@property unsigned int URLOptions;
@property(copy) id assetPublishedBlock;
@property(retain) NSOperation * fetchRecordsOperation;
@property(retain) NSMutableDictionary * fetchedRecordsByID;
@property(retain) NSDictionary * fileNamesByAssetFieldNames;
@property(retain) NSArray * recordIDs;
@property unsigned int requestedTTL;

- (void).cxx_destruct;
- (unsigned int)URLOptions;
- (void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(struct _OpaquePCSShareProtection { }*)arg3 error:(id)arg4;
- (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
- (void)_fetchPCSForRecords;
- (void)_fetchRecords;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)assetPublishedBlock;
- (void)cancel;
- (id)fetchRecordsOperation;
- (id)fetchedRecordsByID;
- (id)fileNamesByAssetFieldNames;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (BOOL)makeStateTransition;
- (id)nameForState:(unsigned int)arg1;
- (id)recordIDs;
- (unsigned int)requestedTTL;
- (void)setAssetPublishedBlock:(id)arg1;
- (void)setFetchRecordsOperation:(id)arg1;
- (void)setFetchedRecordsByID:(id)arg1;
- (void)setFileNamesByAssetFieldNames:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setURLOptions:(unsigned int)arg1;

@end
