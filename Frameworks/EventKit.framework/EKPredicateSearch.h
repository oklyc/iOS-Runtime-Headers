/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKEventStore, NSPredicate, NSString;

@interface EKPredicateSearch : NSObject <EKCancellableRemoteOperation> {
    id _callback;
    id _cancellationToken;
    Class _entityClass;
    BOOL _finished;
    BOOL _isCancelled;
    NSPredicate *_predicate;
    EKEventStore *_store;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

- (void)cancel;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
- (id)startWithCompletion:(id)arg1;
- (void)terminate;

@end
