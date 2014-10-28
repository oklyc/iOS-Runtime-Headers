/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsJointPin : SKPhysicsJoint {
    struct CGPoint { 
        float x; 
        float y; 
    } _anchor;
    float _frictionTorque;
    float _lowerAngleLimit;
    float _rotationSpeed;
    BOOL _shouldEnableLimits;
    float _upperAngleLimit;
}

@property(readonly) struct CGPoint { float x1; float x2; } anchor;
@property float frictionTorque;
@property float lowerAngleLimit;
@property float rotationSpeed;
@property BOOL shouldEnableLimits;
@property float upperAngleLimit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3;

- (id).cxx_construct;
- (struct CGPoint { float x1; float x2; })anchor;
- (float)frictionTorque;
- (float)lowerAngleLimit;
- (float)rotationSpeed;
- (void)setFrictionTorque:(float)arg1;
- (void)setLowerAngleLimit:(float)arg1;
- (void)setRotationSpeed:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperAngleLimit:(float)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperAngleLimit;

@end
