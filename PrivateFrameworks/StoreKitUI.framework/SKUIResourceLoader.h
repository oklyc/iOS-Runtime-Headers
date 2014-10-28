/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIResourceLoaderDelegate>, NSMapTable, NSMutableDictionary, NSOperationQueue, SKUIClientContext;

@interface SKUIResourceLoader : NSObject {
    SKUIClientContext *_clientContext;
    <SKUIResourceLoaderDelegate> *_delegate;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_operationsByRequestID;
    NSMapTable *_requestsByCacheKey;
    NSMutableDictionary *_resourcesByRequestID;
}

@property(readonly) SKUIClientContext * clientContext;
@property <SKUIResourceLoaderDelegate> * delegate;
@property(getter=isIdle,readonly) BOOL idle;
@property(readonly) NSOperationQueue * operationQueue;

- (void).cxx_destruct;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (void)_sendDidIdleIfNecessary;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned int)arg2;
- (id)cachedResourceForRequestIdentifier:(unsigned int)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestWithIdentifier:(unsigned int)arg1;
- (id)clientContext;
- (id)delegate;
- (id)init;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)initWithOperationQueue:(id)arg1;
- (BOOL)isIdle;
- (BOOL)loadResourceWithRequest:(id)arg1 reason:(int)arg2;
- (id)operationQueue;
- (void)removeAllCachedResources;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReason:(int)arg1 forRequestWithIdentifier:(unsigned int)arg2;

@end
