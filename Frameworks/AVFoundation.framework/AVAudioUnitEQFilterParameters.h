/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface AVAudioUnitEQFilterParameters : NSObject {
    void *_impl;
}

@property float bandwidth;
@property BOOL bypass;
@property int filterType;
@property float frequency;
@property float gain;

- (float)bandwidth;
- (BOOL)bypass;
- (void)dealloc;
- (int)filterType;
- (float)frequency;
- (float)gain;
- (id)init;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl { int (**x1)(); }*)arg1;
- (void)setBandwidth:(float)arg1;
- (void)setBypass:(BOOL)arg1;
- (void)setFilterType:(int)arg1;
- (void)setFrequency:(float)arg1;
- (void)setGain:(float)arg1;

@end
