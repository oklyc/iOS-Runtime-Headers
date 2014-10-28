/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLEngineChangePipe, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineRemappedDeletes, CPLEngineResourceDownloadQueue, CPLEngineResourceStorage, CPLEngineResourceUploadQueue, CPLEngineTransientRepository, CPLPlatformObject, NSArray, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {
    BOOL _batchedTransactionDequeueIsScheduled;
    NSMutableArray *_batchedTransactions;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    CPLEngineClientCache *_clientCache;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineResourceDownloadQueue *_downloadQueue;
    CPLEngineLibrary *_engineLibrary;
    CPLEngineIDMapping *_idMapping;
    CPLPlatformObject *_platformObject;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineChangePipe *_pushQueue;
    CPLEngineRemappedDeletes *_remappedDeletes;
    NSMutableArray *_resetEvents;
    NSURL *_resetEventsURL;
    CPLEngineResourceStorage *_resourceStorage;
    unsigned int _state;
    NSHashTable *_storages;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineResourceUploadQueue *_uploadQueue;
}

@property(readonly) CPLEngineClientCache * clientCache;
@property(readonly) CPLEngineCloudCache * cloudCache;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) CPLEngineResourceDownloadQueue * downloadQueue;
@property(readonly) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned int hash;
@property(readonly) CPLEngineIDMapping * idMapping;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) CPLEngineChangePipe * pullQueue;
@property(readonly) CPLEngineChangePipe * pushQueue;
@property(readonly) CPLEngineRemappedDeletes * remappedDeletes;
@property(readonly) CPLEngineResourceStorage * resourceStorage;
@property unsigned int state;
@property(readonly) NSArray * storages;
@property(readonly) Class superclass;
@property(readonly) CPLEngineTransientRepository * transientPullRepository;
@property(readonly) CPLEngineResourceUploadQueue * uploadQueue;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned int)arg1;

- (void).cxx_destruct;
- (BOOL)_canRead;
- (BOOL)_canWrite;
- (id)_currentTransaction;
- (void)_performTransaction:(id)arg1 withBlock:(id)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (id)_resetEventsDescriptions;
- (BOOL)_resetLocalSyncStateWithError:(id*)arg1;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_storeResetEvent:(id)arg1 cause:(id)arg2;
- (void)assertCanRead;
- (void)assertCanWrite;
- (id)clientCache;
- (id)clientCacheIdentifier;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id)arg2;
- (id)cloudCache;
- (id)componentName;
- (id)createNewLibraryVersion;
- (void)dealloc;
- (id)description;
- (id)downloadQueue;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id)arg1;
- (void)getStatusWithCompletionHandler:(id)arg1;
- (id)idMapping;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isClientInSyncWithClientCache;
- (id)libraryVersion;
- (void)openWithCompletionHandler:(id)arg1;
- (void)performBatchedWriteTransactionWithBlock:(id)arg1 completionHandler:(id)arg2;
- (id)performReadTransactionWithBlock:(id)arg1;
- (id)performWriteTransactionWithBlock:(id)arg1 completionHandler:(id)arg2;
- (id)platformObject;
- (id)pullQueue;
- (id)pushQueue;
- (void)registerStorage:(id)arg1;
- (id)remappedDeletes;
- (BOOL)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (BOOL)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (id)resourceStorage;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (id)storages;
- (BOOL)storeClientIsInSyncWithClientCacheWithError:(id*)arg1;
- (BOOL)storeLibraryVersion:(id)arg1 withError:(id*)arg2;
- (BOOL)storeUserIdentifier:(id)arg1 error:(id*)arg2;
- (id)transientPullRepository;
- (id)uploadQueue;
- (id)userIdentifier;

@end
