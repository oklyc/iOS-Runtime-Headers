/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<OS_dispatch_semaphore>;

@interface TSTMergeRangeSortedSet : NSObject {
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, int> { 
        struct __tree_node<TSTMergeRangeElem, void *> {} *__ptr_; 
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree_node<TSTMergeRangeElem, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTMergeRangeElem, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTMergeRangeElemCompare> { unsigned long x_3_2_1; } x_1_1_3; } x1; } *mSet;
}

- (id).cxx_construct;
- (void)addRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 andSize:(struct CGSize { float x1; float x2; })arg2 andPaddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3 andIsCheckbox:(BOOL)arg4;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })begin;
- (unsigned int)count;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })getPaddingInsets;
- (struct CGSize { float x1; float x2; })getSize;
- (id)init;
- (BOOL)isCheckbox;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })iter;
- (void)reset;

@end
