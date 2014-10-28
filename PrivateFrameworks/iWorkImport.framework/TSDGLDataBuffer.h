/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TSDGLShader;

@interface TSDGLDataBuffer : NSObject <TSDGLDataBufferAccessor> {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _didTeardown;
    unsigned int _drawMode;
    TSDGLShader *_enabledShader;
    BOOL _isDoubleBuffered;
    BOOL _isEnabled;
    BOOL _isUpdatingRawDataBuffer;
    NSArray *_vertexAttributes;
    unsigned int _vertexCount;
    NSMutableArray *mArrayBuffers;
    NSMutableDictionary *mAttributeToArrayBuffersDictionary;
    unsigned int mCurrentBufferIndex;
    unsigned int mElementArrayCount;
    unsigned short *mGLElementData;
    unsigned int mGLElementDataBuffer;
    BOOL mGLElementDataBufferWasSetup;
    } mGLElementMeshSize;
    unsigned int mGLElementQuadParticleCount;
    unsigned int mGLVertexArrayObjects[2];
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property unsigned int drawMode;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isDoubleBuffered;
@property(readonly) Class superclass;
@property(readonly) NSArray * vertexAttributes;
@property(readonly) unsigned int vertexCount;

- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)disableElementArrayBuffer;
- (unsigned int)drawMode;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(BOOL)arg2;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 deactivateShaderWhenDone:(BOOL)arg3;
- (void)drawWithShader:(id)arg1;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)enableElementArrayBuffer;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { float x1; float x2; })arg2;
- (id)initWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned int)arg2;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned int)arg2 indexElementCount:(unsigned int)arg3 doubleBuffered:(BOOL)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { float x1; float x2; })arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { float x1; float x2; })arg3 textureFlipped:(BOOL)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { float x1; float x2; })arg3;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textureFlipped:(BOOL)arg3;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)isDoubleBuffered;
- (BOOL)p_setAttributeUpdateData:(struct { int x1; unsigned int x2; BOOL x3; char *x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8; struct _NSRange { unsigned int x_9_1_1; unsigned int x_9_1_2; } x9; unsigned int x10; }*)arg1 fromAttribute:(id)arg2;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned int)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned int)arg5;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned int)arg2;
- (void)teardown;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(id)arg2;
- (id)vertexAttributeNamed:(id)arg1;
- (id)vertexAttributes;
- (unsigned int)vertexCount;

@end
