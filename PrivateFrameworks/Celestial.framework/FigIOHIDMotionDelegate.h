/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigIOHIDMotionDelegate : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    int accelRingIndex;
    double accelRingTime[64];
    float accelRingX[64];
    float accelRingY[64];
    float accelRingZ[64];
    BOOL manageAccel;
    } ringMutex;
}

- (void)dealloc;
- (void)deferOnRunloop_initManagerUsingIOHID;
- (void)deferOnRunloop_stopEvents;
- (void)didUpdateAccelerationWithEventInfo:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithOptions:(BOOL)arg1 enableRotation:(BOOL)arg2 enableAttitude:(BOOL)arg3;
- (BOOL)managingAccel;

@end
