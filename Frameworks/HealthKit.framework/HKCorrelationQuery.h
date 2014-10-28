/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HKCorrelationType, NSDictionary, NSString;

@interface HKCorrelationQuery : HKQuery <HKCorrelationQueryClient> {
    id _completionHandler;
    NSDictionary *_filterDictionary;
    NSDictionary *_samplePredicates;
}

@property(readonly) id completionHandler;
@property(copy,readonly) HKCorrelationType * correlationType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSDictionary * samplePredicates;
@property(readonly) Class superclass;

+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (id)_predicateFilterClasses;
- (void)_queue_cleanupAfterDeactivation;
- (id)_queue_errorHandler;
- (void)_queue_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_queue_validate;
- (id)completionHandler;
- (id)correlationType;
- (void)deliverCorrelations:(id)arg1 forQuery:(id)arg2;
- (id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(id)arg4;
- (id)samplePredicates;

@end
