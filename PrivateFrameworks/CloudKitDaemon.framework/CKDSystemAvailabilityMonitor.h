/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface CKDSystemAvailabilityMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_availabilityQueue;
    BOOL _systemIsAvailable;
    NSMutableSet *_watchers;
}

@property(retain) NSObject<OS_dispatch_queue> * availabilityQueue;
@property BOOL systemIsAvailable;
@property(retain) NSMutableSet * watchers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)_notifyWatchersOfStateChange;
- (BOOL)_systemMayNowBeReady;
- (id)availabilityQueue;
- (void)dealloc;
- (id)init;
- (void)registerWatcher:(id)arg1;
- (void)setAvailabilityQueue:(id)arg1;
- (void)setSystemIsAvailable:(BOOL)arg1;
- (void)setWatchers:(id)arg1;
- (BOOL)systemIsAvailable;
- (void)unregisterWatcher:(id)arg1;
- (id)watchers;

@end
