/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_desiredKeys;
    NSString *_minimumVersionETag;
    NSArray *_recordIDs;
}

@property(retain) NSArray * desiredKeys;
@property(retain) NSString * minimumVersionETag;
@property(retain) NSArray * recordIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)minimumVersionETag;
- (id)recordIDs;
- (void)setDesiredKeys:(id)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDs:(id)arg1;

@end
