/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSMutableDictionary, NSSet;

@interface CKDGetRecordsURLRequest : CKDURLRequest {
    unsigned int _URLOptions;
    NSSet *_assetFieldNamesToPublishURLs;
    NSSet *_desiredKeys;
    unsigned int _recordCount;
    id _recordFetchedBlock;
    NSMutableDictionary *_recordIDByRequestID;
    NSArray *_recordIDs;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    unsigned int _requestedTTL;
}

@property unsigned int URLOptions;
@property(retain) NSSet * assetFieldNamesToPublishURLs;
@property(retain) NSSet * desiredKeys;
@property unsigned int recordCount;
@property(copy) id recordFetchedBlock;
@property(retain) NSMutableDictionary * recordIDByRequestID;
@property(retain) NSArray * recordIDs;
@property(retain) NSDictionary * recordIDsToETags;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property unsigned int requestedTTL;

- (void).cxx_destruct;
- (unsigned int)URLOptions;
- (BOOL)allowsAnonymousAccount;
- (id)assetFieldNamesToPublishURLs;
- (id)desiredKeys;
- (id)initWithRecordIDs:(id)arg1 recordIDsToEtags:(id)arg2 recordIDsToVersionETags:(id)arg3 desiredKeys:(id)arg4;
- (int)operationType;
- (unsigned int)recordCount;
- (id)recordFetchedBlock;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (id)recordIDsToETags;
- (id)recordIDsToVersionETags;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (unsigned int)requestedTTL;
- (void)setAssetFieldNamesToPublishURLs:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setRecordCount:(unsigned int)arg1;
- (void)setRecordFetchedBlock:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordIDsToETags:(id)arg1;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (void)setRequestedTTL:(unsigned int)arg1;
- (void)setURLOptions:(unsigned int)arg1;
- (id)zoneIDsToLock;

@end
