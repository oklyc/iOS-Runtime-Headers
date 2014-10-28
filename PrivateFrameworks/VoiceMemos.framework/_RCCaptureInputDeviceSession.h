/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, RCCaptureInputDevice, RCCaptureSession;

@interface _RCCaptureInputDeviceSession : NSObject {
    RCCaptureInputDevice *_captureInputDevice;
    RCCaptureSession *_captureSession;
    BOOL _captureSessionWasActivated;
    NSMutableArray *_sessionFinishedBlocks;
    id _sessionPreparedBlock;
    BOOL _useStartSoundEffect;
}

@property(readonly) RCCaptureInputDevice * captureInputDevice;
@property(retain) RCCaptureSession * captureSession;
@property BOOL captureSessionWasActivated;
@property(copy) id sessionPreparedBlock;
@property BOOL useStartSoundEffect;

- (void).cxx_destruct;
- (void)addSessionFinishedBlock:(id)arg1;
- (id)captureInputDevice;
- (id)captureSession;
- (BOOL)captureSessionWasActivated;
- (void)dealloc;
- (id)description;
- (id)initWithCaptureInputDevice:(id)arg1;
- (void)invokeSessionFinishedBlocksWithError:(id)arg1;
- (id)sessionPreparedBlock;
- (void)setCaptureSession:(id)arg1;
- (void)setCaptureSessionWasActivated:(BOOL)arg1;
- (void)setSessionPreparedBlock:(id)arg1;
- (void)setUseStartSoundEffect:(BOOL)arg1;
- (BOOL)useStartSoundEffect;

@end
