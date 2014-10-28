/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVSpeechSynthesisVoice, NSString;

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding> {
    float _pitchMultiplier;
    double _postUtteranceDelay;
    double _preUtteranceDelay;
    float _rate;
    NSString *_speechString;
    AVSpeechSynthesisVoice *_voice;
    float _volume;
}

@property float pitchMultiplier;
@property double postUtteranceDelay;
@property double preUtteranceDelay;
@property BOOL processEmoticons;
@property float rate;
@property(retain) NSString * speechString;
@property BOOL useCompactVoice;
@property(retain) AVSpeechSynthesisVoice * voice;
@property float volume;

+ (void)initialize;
+ (id)speechUtteranceWithString:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (float)pitchMultiplier;
- (double)postUtteranceDelay;
- (double)preUtteranceDelay;
- (BOOL)processEmoticons;
- (float)rate;
- (void)setPitchMultiplier:(float)arg1;
- (void)setPostUtteranceDelay:(double)arg1;
- (void)setPreUtteranceDelay:(double)arg1;
- (void)setProcessEmoticons:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setSpeechString:(id)arg1;
- (void)setUseCompactVoice:(BOOL)arg1;
- (void)setVoice:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)speechString;
- (BOOL)useCompactVoice;
- (id)voice;
- (float)volume;

@end
