/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, NSUUID;

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration> {
    NSArray *_uuids;
}

@property(readonly) NSString * UUIDPathString;
@property(readonly) NSUUID * lastUUID;
@property(readonly) NSArray * uuids;

+ (id)lastUUIDFromUUIDPathString:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDPathString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)hash;
- (id)initWithArray:(id)arg1;
- (id)initWithMessage:(const struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::UUID> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (id)initWithUUIDPathString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastUUID;
- (void)saveToMessage:(struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSP::UUID> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1;
- (id)uuids;

@end
