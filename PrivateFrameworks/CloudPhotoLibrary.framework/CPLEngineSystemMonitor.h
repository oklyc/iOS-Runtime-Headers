/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLEngineLibrary, CPLNetworkWatcher, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent> {
    CPLEngineLibrary *_engineLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_volumeURL;
    CPLNetworkWatcher *_watcher;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id)arg2;
- (id)componentName;
- (unsigned int)diskPressureState;
- (id)engineLibrary;
- (void)getStatusWithCompletionHandler:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isNetworkConnected;
- (void)networkStateDidChangeForNetworkWatched:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;

@end
