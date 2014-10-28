/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATGrappaSession : NSObject {
    unsigned long _sessionId;
}

- (id)beginHostSessionWithDeviceResponseData:(id)arg1;
- (id)createSignature:(id)arg1 returnedSignature:(id*)arg2;
- (id)deviceInfo;
- (id)establishDeviceSessionRequestData;
- (id)establishDeviceSessionResponseData;
- (id)establishDeviceSessionWithRequestData:(id)arg1;
- (id)establishHostSessionWithDeviceInfo:(id)arg1;
- (id)verifySignature:(id)arg1 signature:(id)arg2;

@end
