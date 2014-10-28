/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSNumber, NSString, TSTLayout;

@interface TSTLayoutHint : NSObject <TSDHint> {
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } mCacheHintID;
    } mCellRange;
    } mEffectiveSize;
    BOOL mHorizontal;
    BOOL mIsValid;
    TSTLayout *mLayout;
    } mMaximumSize;
    unsigned int mPartitionPosition;
    NSNumber *mPartitioningPass;
}

@property struct { unsigned short x1; unsigned char x2; unsigned char x3; } cacheHintID;
@property struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } cellRange;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property struct CGSize { float x1; float x2; } effectiveSize;
@property(readonly) unsigned int hash;
@property BOOL horizontal;
@property BOOL isValid;
@property TSTLayout * layout;
@property struct CGSize { float x1; float x2; } maximumSize;
@property unsigned int partitionPosition;
@property(retain) NSNumber * partitioningPass;
@property(readonly) Class superclass;

+ (Class)archivedHintClass;

- (id).cxx_construct;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cacheHintID;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })cellRange;
- (id)copyForArchiving;
- (void)dealloc;
- (id)description;
- (struct CGSize { float x1; float x2; })effectiveSize;
- (id)firstChildHint;
- (BOOL)horizontal;
- (id)init;
- (id)initWithArchive:(const struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CellRange {} *x3; struct CellID {} *x4; struct Size {} *x5; boolx6; boolx7; unsigned int x8; struct Size {} *x9; unsigned int x10; int x11; unsigned int x12[1]; }*)arg1;
- (id)initWithRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 hintId:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 partitionPosition:(unsigned int)arg3 maximumSize:(struct CGSize { float x1; float x2; })arg4 effectiveSize:(struct CGSize { float x1; float x2; })arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8;
- (void)invalidate;
- (BOOL)isFirstHint;
- (BOOL)isValid;
- (id)lastChildHint;
- (id)layout;
- (struct CGSize { float x1; float x2; })maximumSize;
- (void)offsetByDelta:(int)arg1;
- (BOOL)overlapsWithSelection:(id)arg1;
- (unsigned int)partitionPosition;
- (id)partitioningPass;
- (oneway void)release;
- (void)saveToArchive:(struct LayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CellRange {} *x3; struct CellID {} *x4; struct Size {} *x5; boolx6; boolx7; unsigned int x8; struct Size {} *x9; unsigned int x10; int x11; unsigned int x12[1]; }*)arg1;
- (void)setCacheHintID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)setEffectiveSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setHorizontal:(BOOL)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setLayout:(id)arg1;
- (void)setMaximumSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPartitionPosition:(unsigned int)arg1;
- (void)setPartitioningPass:(id)arg1;

@end
