/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {
    ISOperationQueue *_operationQueue;
}

@property(retain) ISOperationQueue * operationQueue;

- (id)_poolOperationForOperation:(id)arg1 flags:(int)arg2;
- (void)addOperation:(id)arg1 withFlags:(int)arg2;
- (void)cancelOperation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
