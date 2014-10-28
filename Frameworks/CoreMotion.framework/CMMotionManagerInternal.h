/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface CMMotionManagerInternal : NSObject {
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } acceleration; 
    struct Sample { 
        double timestamp; 
        struct { 
            float pressure; 
            float temperature; 
        } pressureData; 
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } rotationRate; 
        unsigned short sampleNum; 
        boolfsync; 
    struct Sample { 
        double timestamp; 
        struct { 
            struct { 
                double w; 
                double x; 
                double y; 
                double z; 
            } quaternion; 
            struct { 
                float x; 
                float y; 
                float z; 
            } userAcceleration; 
            struct { 
                float x; 
                float y; 
                float z; 
            } rotationRate; 
            struct { 
                float x; 
                float y; 
                float z; 
            } magneticField; 
            int magneticFieldCalibrationLevel; 
            booldoingYawCorrection; 
            booldoingBiasEstimation; 
            boolisInitialized; 
        } deviceMotion; 
        boolfsync; 
    struct unique_ptr<CLGeomagneticModelProvider_Type::Client, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
        struct __compressed_pair<CLGeomagneticModelProvider_Type::Client *, std::__1::default_delete<CLGeomagneticModelProvider_Type::Client> > { 
            struct Client {} *__first_; 
        } __ptr_; 
    struct { 
        double x; 
        double y; 
        double z; 
        double magnitude; 
        double horizontal; 
        double declination; 
        double inclination; 
        double timestamp; 
    struct Sample { 
        double timestamp; 
        struct { 
            float x; 
            float y; 
            float z; 
        } magneticField; 
    struct unique_ptr<CLIspDataVisitor, std::__1::default_delete<CLIspDataVisitor> > { 
        struct __compressed_pair<CLIspDataVisitor *, std::__1::default_delete<CLIspDataVisitor> > { 
            struct CLIspDataVisitor {} *__first_; 
        } __ptr_; 
    int (*fPrivateAccelerometerDataCallback)();
    int (*fPrivateDeviceMotionCallback)();
    int (*fPrivateDeviceMotionCompassAlignmentCallback)();
    int (*fPrivateDeviceMotionCompassDataCallback)();
    int (*fPrivateGyroBiasAndVarianceCallback)();
    int (*fPrivateGyroDataCallback)();
    int (*fPrivateNotificationCallback)();
    boolfCompassCalibrationHud;
    boolfHaveSentDeviceRequiresMovementError;
    boolfHaveSentTrueNorthUnavailableError;
    boolfInactive;
    boolfPrivateDeviceMotionUse9Axis;
    boolfPrivateUseAccelerometer;
    boolfPrivateWantsPowerConservativeDeviceMotion;
    boolfShowCompassCalibrationHudOnResume;
    boolfShowsDeviceMovementDisplay;
    boolfSidebandSensorFusionEnabled;
    boolfSidebandSensorFusionLatency;
    boolfSidebandSensorFusionSnoop;
    struct Dispatcher { int (**x1)(); id x2; } *fAccelerometerDispatcher;
    id fAccelerometerHandler;
    NSOperationQueue *fAccelerometerQueue;
    double fAccelerometerUpdateInterval;
    struct Dispatcher { int (**x1)(); id x2; } *fAmbientPressureDispatcher;
    id fAmbientPressureHandler;
    NSOperationQueue *fAmbientPressureQueue;
    double fAmbientPressureUpdateInterval;
    int fAttitudeReferenceFrame;
    struct CLConnectionClient { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; id x2; id x3; id x4; struct CLConnection {} *x5; struct CLNameValuePair { int (**x_6_1_1)(); struct __CFDictionary {} *x_6_1_2; } x6; struct CLNameValuePair { int (**x_7_1_1)(); struct __CFDictionary {} *x_7_1_2; } x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; id x9; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x10; id x11; void*x12; struct map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)> > >=^{__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> {} x13; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *> {} x14; } *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    struct Dispatcher { int (**x1)(); id x2; } *fDeviceMotionDispatcher;
    id fDeviceMotionHandler;
    NSOperationQueue *fDeviceMotionQueue;
    double fDeviceMotionStartTimestamp;
    double fDeviceMotionUpdateInterval;
    } fGeomagneticModel;
    } fGeomagneticModelProviderClient;
    struct Dispatcher { int (**x1)(); id x2; } *fGyroDispatcher;
    id fGyroHandler;
    NSOperationQueue *fGyroQueue;
    double fGyroUpdateInterval;
    double fLastAccelerometerNotificationTimestamp;
    double fLastAmbientPressureNotificationTimestamp;
    double fLastDeviceMotionNotificationTimestamp;
    double fLastGyroNotificationTimestamp;
    double fLastMagnetometerNotificationTimestamp;
    } fLatestAccelerometerSample;
    } fLatestAmbientPressureSample;
    } fLatestDeviceMotionSample;
    } fLatestGyroSample;
    } fLatestMagnetometerSample;
    struct Dispatcher { int (**x1)(); id x2; } *fMagnetometerDispatcher;
    id fMagnetometerHandler;
    NSOperationQueue *fMagnetometerQueue;
    double fMagnetometerUpdateInterval;
    void *fPrivateAccelerometerDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateAccelerometerDataDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionAlgorithmDidResetDispatcher;
    void *fPrivateDeviceMotionCallbackInfo;
    void *fPrivateDeviceMotionCompassAlignmentCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionCompassAlignmentDispatcher;
    void *fPrivateDeviceMotionCompassDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionCompassDataDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateDeviceMotionSensorStatusDispatcher;
    void *fPrivateGyroBiasAndVarianceCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateGyroBiasAndVarianceDispatcher;
    void *fPrivateGyroDataCallbackInfo;
    struct Dispatcher { int (**x1)(); id x2; } *fPrivateGyroDataDispatcher;
    void *fPrivateNotificationCallbackInfo;
    int fSampleLock;
    } fSidebandVisitor;
    struct __CFRunLoopTimer { } *fWatchdogTimer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)teardownPrivate;

@end
