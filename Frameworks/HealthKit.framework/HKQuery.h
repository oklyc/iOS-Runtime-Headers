/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class <HKQueryDelegate>, <NSXPCProxyCreating>, HKSampleType, NSObject<OS_dispatch_queue>, NSPredicate, NSString, NSUUID, _HKFilter;

@interface HKQuery : NSObject <HKQueryClient> {
    NSObject<OS_dispatch_queue> *_activationQueue;
    NSUUID *_activationUUID;
    NSObject<OS_dispatch_queue> *_clientQueue;
    <HKQueryDelegate> *_delegate;
    _HKFilter *_filter;
    BOOL _hasBeenExecuted;
    NSPredicate *_predicate;
    BOOL _receivedInitialResults;
    HKSampleType *_sampleType;
    <NSXPCProxyCreating> *_serverProxy;
}

@property(readonly) NSUUID * activationUUID;
@property(retain) NSObject<OS_dispatch_queue> * clientQueue;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) <HKQueryDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=_filter,retain) _HKFilter * filter;
@property(readonly) BOOL hasBeenExecuted;
@property(readonly) unsigned int hash;
@property(readonly) NSPredicate * predicate;
@property(getter=_hasReceivedInitialResults,readonly) BOOL receivedInitialResults;
@property(readonly) HKSampleType * sampleType;
@property(retain) <NSXPCProxyCreating> * serverProxy;
@property(readonly) Class superclass;

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;
+ (id)_serverInterfaceProtocol;
+ (id)clientInterface;
+ (id)predicateForCategorySamplesWithOperatorType:(unsigned int)arg1 value:(int)arg2;
+ (id)predicateForObjectWithUUID:(id)arg1;
+ (id)predicateForObjectsFromSource:(id)arg1;
+ (id)predicateForObjectsFromSources:(id)arg1;
+ (id)predicateForObjectsFromWorkout:(id)arg1;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1 operatorType:(unsigned int)arg2 value:(id)arg3;
+ (id)predicateForObjectsWithMetadataKey:(id)arg1;
+ (id)predicateForObjectsWithNoCorrelation;
+ (id)predicateForObjectsWithUUIDs:(id)arg1;
+ (id)predicateForQuantitySamplesWithOperatorType:(unsigned int)arg1 quantity:(id)arg2;
+ (id)predicateForSamplesWithStartDate:(id)arg1 endDate:(id)arg2 options:(unsigned int)arg3;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned int)arg1 duration:(double)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned int)arg1 totalDistance:(id)arg2;
+ (id)predicateForWorkoutsWithOperatorType:(unsigned int)arg1 totalEnergyBurned:(id)arg2;
+ (id)predicateForWorkoutsWithWorkoutActivityType:(unsigned int)arg1;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)_client_receivedInitialResults;
- (void)_dispatchAsyncToResourceQueue:(id)arg1;
- (void)_dispatchSyncToResourceQueue:(id)arg1;
- (void)_dispatchToClientForUUID:(id)arg1 block:(id)arg2;
- (id)_filter;
- (BOOL)_hasReceivedInitialResults;
- (id)_initWithDataType:(id)arg1 predicate:(id)arg2;
- (id)_predicateFilterClasses;
- (void)_queue_activateWithConnection:(id)arg1 isReactivation:(BOOL)arg2 withCompletion:(id)arg3;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_deactivate;
- (void)_queue_deliverErrorAndDeactivate:(id)arg1;
- (id)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg1;
- (void)activateWithClientQueue:(id)arg1 connection:(id)arg2 delegate:(id)arg3 withCompletion:(id)arg4;
- (id)activationUUID;
- (id)clientQueue;
- (void)deactivate;
- (id)delegate;
- (void)deliverError:(id)arg1 forQuery:(id)arg2;
- (BOOL)hasBeenExecuted;
- (id)init;
- (id)predicate;
- (void)reactivateWithConnection:(id)arg1;
- (id)sampleType;
- (id)serverProxy;
- (void)setClientQueue:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setServerProxy:(id)arg1;

@end
