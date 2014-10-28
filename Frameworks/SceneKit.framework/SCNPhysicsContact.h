/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode;

@interface SCNPhysicsContact : NSObject {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    float _collisionImpulse;
    } _contactNormal;
    } _contactPoint;
    float _distance;
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    id _reserved;
    int _updateCount;
}

@property(readonly) float collisionImpulse;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } contactNormal;
@property(readonly) struct SCNVector3 { float x1; float x2; float x3; } contactPoint;
@property(readonly) SCNNode * nodeA;
@property(readonly) SCNNode * nodeB;
@property(readonly) float penetrationDistance;

+ (id)SCNJSExportProtocol;
+ (id)_contactWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { float x_1_2_1[4]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; struct btVector3 { float x_3_2_1[4]; } x_2_1_3; struct btVector3 { float x_4_2_1[4]; } x_2_1_4; struct btVector3 { float x_5_2_1[4]; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; boolx_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { float x_24_2_1[4]; } x_2_1_24; struct btVector3 { float x_25_2_1[4]; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(int)arg2;

- (id).cxx_construct;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg3 collisionImpulse:(struct SCNVector3 { float x1; float x2; float x3; })arg4 distance:(float)arg5;
- (void)_prepareUpdate;
- (void)_setupWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { float x_1_2_1[4]; } x_2_1_1; struct btVector3 { float x_2_2_1[4]; } x_2_1_2; struct btVector3 { float x_3_2_1[4]; } x_2_1_3; struct btVector3 { float x_4_2_1[4]; } x_2_1_4; struct btVector3 { float x_5_2_1[4]; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; boolx_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { float x_24_2_1[4]; } x_2_1_24; struct btVector3 { float x_25_2_1[4]; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(int)arg2 point:(const struct btManifoldPoint { struct btVector3 { float x_1_1_1[4]; } x1; struct btVector3 { float x_2_1_1[4]; } x2; struct btVector3 { float x_3_1_1[4]; } x3; struct btVector3 { float x_4_1_1[4]; } x4; struct btVector3 { float x_5_1_1[4]; } x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; int x13; void *x14; boolx15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; int x23; struct btVector3 { float x_24_1_1[4]; } x24; struct btVector3 { float x_25_1_1[4]; } x25; }*)arg3;
- (BOOL)_shouldPostUpdate;
- (float)collisionImpulse;
- (struct SCNVector3 { float x1; float x2; float x3; })contactNormal;
- (struct SCNVector3 { float x1; float x2; float x3; })contactPoint;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)nodeA;
- (id)nodeB;
- (float)penetrationDistance;

@end
