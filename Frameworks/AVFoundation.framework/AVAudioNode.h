/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AVAudioEngine, AVAudioTime, NSString;

@interface AVAudioNode : NSObject <AVAudioMixing> {
    void *_impl;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) AVAudioEngine * engine;
@property(readonly) unsigned int hash;
@property(readonly) AVAudioTime * lastRenderTime;
@property(readonly) unsigned int numberOfInputs;
@property(readonly) unsigned int numberOfOutputs;
@property(readonly) Class superclass;
@property float volume;

- (struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long *x_5_1_1; unsigned int x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)impl;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)clock;
- (void)dealloc;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1;
- (id)engine;
- (id)init;
- (id)initWithImpl:(struct AVAudioNodeImplBase { int (**x1)(); struct AVAudioEngineImpl {} *x2; struct AVAudioNodeTap {} *x3; id x4; struct vector<bool, std::__1::allocator<bool> > { unsigned long *x_5_1_1; unsigned int x_5_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long x_3_2_1; } x_5_1_3; } x5; boolx6; struct AVAudioMixingImpl {} *x7; }*)arg1;
- (id)inputFormatForBus:(unsigned int)arg1;
- (void)installTapOnBus:(unsigned int)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(id)arg4;
- (id)lastRenderTime;
- (id)nameForInputBus:(unsigned int)arg1;
- (id)nameForOutputBus:(unsigned int)arg1;
- (unsigned int)numberOfInputs;
- (unsigned int)numberOfOutputs;
- (float)obstruction;
- (float)occlusion;
- (id)outputFormatForBus:(unsigned int)arg1;
- (float)pan;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (float)rate;
- (void)removeTapOnBus:(unsigned int)arg1;
- (int)renderingAlgorithm;
- (void)reset;
- (float)reverbBlend;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (BOOL)setOutputFormat:(id)arg1 forBus:(unsigned int)arg2;
- (void)setPan:(float)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(int)arg1;
- (void)setReverbBlend:(float)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
