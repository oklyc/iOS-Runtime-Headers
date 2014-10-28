/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSPointerArray;

@interface TSTStrokeLayerStack : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    int _maxStrokeIndex;
    int _stackKind;
    NSPointerArray *_strokeLayers;
    int _type;
    } mRWLock;
}

@property int maxStrokeIndex;
@property int stackKind;
@property(retain) NSPointerArray * strokeLayers;
@property int type;

+ (float)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 atRowIndex:(int)arg3;
+ (float)maxWidthForLeftStrokes:(id)arg1 mergedWithRightStrokes:(id)arg2 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg3 cachedMax:(float)arg4;
+ (float)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 atColumnIndex:(int)arg3;
+ (float)maxWidthForTopStrokes:(id)arg1 mergedWithBottomStrokes:(id)arg2 inRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg3 cachedMax:(float)arg4;
+ (id)mergeLeftStrokes:(id)arg1 withRightStrokes:(id)arg2;
+ (id)mergeTopStrokes:(id)arg1 withBottomStrokes:(id)arg2;
+ (id)strokeLayerStackWithStackKind:(int)arg1 andStrokeLayer:(id)arg2 atLayerIndex:(int)arg3;
+ (id)strokeLayerStackWithStackKind:(int)arg1;

- (void)dealloc;
- (void)enumerateStrokesAndCapsFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateStrokesAndCapsInRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateStrokesFrom:(unsigned int)arg1 to:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (id)initMergedCopyWithMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2;
- (id)initWithStackKind:(int)arg1;
- (void)insertStroke:(id)arg1 atRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 atLayerIndex:(int)arg3;
- (void)invalidateStrokesAtLayerIndex:(int)arg1 atRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2;
- (void)invalidateStrokesAtLayerIndex:(int)arg1;
- (void)lockForRead;
- (void)lockForWrite;
- (id)lookupStrokeAtIndex:(int)arg1;
- (int)maxStrokeIndex;
- (void)p_invalidateStrokesAtLayerIndex:(int)arg1;
- (BOOL)replaceStrokeLayerAtLayerIndex:(int)arg1 withStrokeLayer:(id)arg2;
- (void)setMaxStrokeIndex:(int)arg1;
- (void)setStackKind:(int)arg1;
- (void)setStrokeLayers:(id)arg1;
- (void)setType:(int)arg1;
- (int)stackKind;
- (id)strokeLayers;
- (int)type;
- (void)unlock;

@end
