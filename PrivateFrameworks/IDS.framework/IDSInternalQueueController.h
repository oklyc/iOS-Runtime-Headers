/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSObject<OS_dispatch_queue>;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)assertQueueIsCurrent;
- (void)assertQueueIsNotCurrent;
- (void)dealloc;
- (id)init;
- (void)performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(id)arg1;
- (id)queue;

@end
