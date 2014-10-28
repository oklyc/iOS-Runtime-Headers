/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding, PQLBindable, PQLResultSetInitializer> {
}

@property(copy,readonly) NSString * UUIDString;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) Class superclass;

+ (id)UUID;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)supportsSecureCoding;

- (id)UUIDString;
- (unsigned long)_cfTypeID;
- (struct __CFString { }*)_cfUUIDString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char[16])arg1;
- (unsigned int)hash;
- (id)init;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; unsigned long long x4; int x5; unsigned int x6[1]; }*)arg1;
- (id)initWithUUIDBytes:(unsigned char[16])arg1;
- (id)initWithUUIDString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (void)saveToMessage:(struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; unsigned long long x4; int x5; unsigned int x6[1]; }*)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
