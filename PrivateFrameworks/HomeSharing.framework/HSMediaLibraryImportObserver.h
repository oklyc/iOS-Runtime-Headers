/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class <HSMediaLibraryImportObserverDelegate>, NSTimer;

@interface HSMediaLibraryImportObserver : NSObject {
    unsigned int _consecutiveUpdateFailures;
    <HSMediaLibraryImportObserverDelegate> *_delegate;
    BOOL _stopped;
    double _updateInterval;
    NSTimer *_updateTimer;
    BOOL _updating;
}

@property <HSMediaLibraryImportObserverDelegate> * delegate;
@property double updateInterval;
@property(getter=isUpdating,readonly) BOOL updating;

- (void).cxx_destruct;
- (void)_updateImportStatus:(id)arg1;
- (void)beginUpdating;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isUpdating;
- (void)setDelegate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)stopUpdating;
- (double)updateInterval;

@end
