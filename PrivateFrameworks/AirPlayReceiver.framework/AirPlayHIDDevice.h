/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@class AirPlayReceiverContext;

@interface AirPlayHIDDevice : NSObject {
    AirPlayReceiverContext *_apc;
    struct __IOHIDDevice { } *_hidDevice;
    unsigned char _hidOpened;
    char *_hidReportBuf;
    long _hidReportMaxLen;
    struct __CFString { } *_uuid;
}

- (void)dealloc;
- (void)invalidate;

@end
