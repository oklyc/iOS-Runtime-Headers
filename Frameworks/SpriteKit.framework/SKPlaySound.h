/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {
    struct CGPoint { 
        float x; 
        float y; 
    NSString *_filePath;
    struct SKCPlaySound { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; int x17; float x18; float x19; float x20; float x21; id x22; BOOL x23; BOOL x24; } *_mycaction;
    } _position;
    SKSoundSource *_soundSource;
}

+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 waitForCompletion:(BOOL)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
