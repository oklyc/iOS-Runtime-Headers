/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNPhysicsCustomField : SCNPhysicsField {
     /* Encoded args for previous method: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}8@0:4 */
    id _block;
}

@property id block;

+ (id)SCNJSExportProtocol;

- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; boolx7; boolx8; boolx9; boolx10; float x11; }*)_createField;
- (id)block;
- (void)dealloc;
- (void)setBlock:(id)arg1;

@end
