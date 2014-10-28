/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    TSUIntegerKeyDictionary *mDict;
    } mDictRWLock;
}

- (id)allCells;
- (void)applyBlockToAllCells:(id)arg1;
- (id)cellAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)dealloc;
- (id)init;
- (void)removeAllCells;
- (void)setCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end
