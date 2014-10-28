/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSDate;

@interface CKUserPresence : NSObject <NSSecureCoding, NSCopying> {
    long long _additionalStatusFlags;
    NSDate *_lastCustom;
    NSDate *_lastEdited;
    NSDate *_lastInvisible;
    NSDate *_lastViewed;
    int _status;
    CKRecordID *_userRecordID;
}

@property long long additionalStatusFlags;
@property(readonly) NSDate * dateOfLastStatusChange;
@property(copy) NSDate * lastCustom;
@property(copy) NSDate * lastEdited;
@property(copy) NSDate * lastInvisible;
@property(copy) NSDate * lastViewed;
@property int status;
@property(copy) CKRecordID * userRecordID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)additionalStatusFlags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOfLastStatusChange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastCustom;
- (id)lastEdited;
- (id)lastInvisible;
- (id)lastViewed;
- (void)setAdditionalStatusFlags:(long long)arg1;
- (void)setLastCustom:(id)arg1;
- (void)setLastEdited:(id)arg1;
- (void)setLastInvisible:(id)arg1;
- (void)setLastViewed:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setUserRecordID:(id)arg1;
- (int)status;
- (id)userRecordID;

@end
