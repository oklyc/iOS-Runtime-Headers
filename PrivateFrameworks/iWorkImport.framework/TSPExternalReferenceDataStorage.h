/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (void)archiveInfoMessage:(struct DataInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x9; int x10; unsigned int x11[1]; }*)arg1 archiver:(id)arg2;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isReadable;
- (void)performReadWithAccessor:(id)arg1;
- (id)storageForDataCopyFromOtherContext;

@end
