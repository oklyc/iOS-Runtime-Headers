/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureFigAudioDevice_FigRecorder, AVCaptureFigVideoDevice_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, AVRunLoopCondition, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface AVCaptureSessionInternal_FigRecorder : NSObject {
    BOOL adjustingDeviceActiveFormat;
    AVCaptureFigAudioDevice_FigRecorder *audioDevice;
    BOOL automaticallyConfiguresApplicationAudioSession;
    int beginConfigRefCount;
    NSMutableDictionary *captureOptions;
    NSMutableArray *connections;
    NSMutableDictionary *figRecorderOptions;
    NSMutableArray *inputs;
    BOOL interrupted;
    NSMutableArray *liveConnections;
    struct OpaqueCMClock { } *masterClock;
    NSMutableArray *outputs;
    struct OpaqueFigRecorder { } *recorder;
    BOOL recording;
    int resolvedSessionPresetChangeSeed;
    int resolvedVideoDeviceChangeSeed;
    AVRunLoopCondition *runLoopCondition;
    BOOL running;
    NSString *sessionPreset;
    int sessionPresetChangeSeed;
    NSError *stopError;
    BOOL usesApplicationAudioSession;
    AVCaptureFigVideoDevice_FigRecorder *videoDevice;
    int videoDeviceChangeSeed;
    AVCaptureVideoPreviewLayer_FigRecorder *videoPreviewLayer;
    BOOL waitingForRecorderDidStartPreviewing;
    BOOL waitingForRecorderDidStartRecording;
    BOOL waitingForRecorderDidStopPreviewing;
    BOOL waitingForRecorderDidStopRecording;
    BOOL waitingForRecorderDidStopSource;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
