/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    id changeListener;
    NSMutableArray *deviceList;
    } listLock;
}

@property(copy) id changeListener;

+ (id)defaultDeviceOfType:(unsigned long)arg1;
+ (id)newDeviceList;

- (id)changeListener;
- (void)cleanup;
- (void)dealloc;
- (id)deviceList;
- (id)init;
- (void)setChangeListener:(id)arg1;

@end
