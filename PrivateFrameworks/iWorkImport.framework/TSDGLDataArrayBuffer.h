/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {
    unsigned int _GLDataBufferEntrySize;
    unsigned int _bufferCount;
    unsigned int _bufferUsage;
    unsigned int _currentBufferIndex;
    unsigned long _dataTypeSizeInBytes;
    NSMutableArray *_vertexAttributes;
    NSMutableDictionary *mAttributeOffsetsDictionary;
    char *mGLData;
    BOOL mGLDataBufferHasBeenSetup;
    unsigned int *mGLDataBuffers;
    int *mNeedsUpdateFirstIndex;
    int *mNeedsUpdateLastIndex;
    unsigned int mVertexCount;
}

@property(readonly) unsigned int GLDataBufferEntrySize;
@property(readonly) unsigned int bufferCount;
@property unsigned int currentBufferIndex;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) BOOL hasUpdatedData;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (unsigned int)GLDataBufferEntrySize;
- (char *)GLDataPointer;
- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addAllIndexesNeedUpdate;
- (void)addIndexNeedsUpdate:(int)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)bufferCount;
- (unsigned int)currentBufferIndex;
- (void)dealloc;
- (id)description;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (BOOL)hasUpdatedData;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned int)arg2 bufferCount:(unsigned int)arg3;
- (unsigned int)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned int)arg2 component:(unsigned int)arg3;
- (void)p_setupGLDataBufferIfNecessary;
- (void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setCurrentBufferIndex:(unsigned int)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned int)arg3;
- (void)swapGLDataBuffers;
- (void)updateDataBufferIfNecessary;
- (unsigned int)vertexCount;

@end
