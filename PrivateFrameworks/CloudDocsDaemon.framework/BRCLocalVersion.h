/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class CKRecord, NSError, NSNumber, NSString;

@interface BRCLocalVersion : BRCVersion <BRCSyncThrottleVersionProtocol> {
    NSError *_uploadError;
    CKRecord *_uploadedAssets;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSNumber * isPackageObj;
@property(readonly) NSNumber * sizeObj;
@property(readonly) Class superclass;
@property(retain) NSError * uploadError;
@property(retain) CKRecord * uploadedAssets;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)clearVersionSignatures:(unsigned int)arg1 isPackage:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)isPackageObj;
- (void)setUploadError:(id)arg1;
- (void)setUploadedAssets:(id)arg1;
- (id)sizeObj;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1;
- (id)uploadError;
- (id)uploadedAssets;

@end
