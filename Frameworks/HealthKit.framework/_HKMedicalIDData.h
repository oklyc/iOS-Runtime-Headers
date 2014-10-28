/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity, NSArray, NSData, NSDate, NSNumber, NSString;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying> {
    NSString *_allergyInfo;
    NSDate *_birthdate;
    int _bloodType;
    NSDate *_dateSaved;
    NSArray *_emergencyContacts;
    HKQuantity *_height;
    BOOL _isDisabled;
    NSNumber *_isOrganDonor;
    NSString *_medicalConditions;
    NSString *_medicalNotes;
    NSString *_medicationInfo;
    NSString *_name;
    NSData *_pictureData;
    int _schemaVersion;
    HKQuantity *_weight;
}

@property(retain) NSString * allergyInfo;
@property(retain) NSDate * birthdate;
@property int bloodType;
@property(retain) NSDate * dateSaved;
@property(retain) NSArray * emergencyContacts;
@property(retain) HKQuantity * height;
@property BOOL isDisabled;
@property(retain) NSNumber * isOrganDonor;
@property(retain) NSString * medicalConditions;
@property(retain) NSString * medicalNotes;
@property(retain) NSString * medicationInfo;
@property(retain) NSString * name;
@property(retain) NSData * pictureData;
@property int schemaVersion;
@property(retain) HKQuantity * weight;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allergyInfo;
- (id)birthdate;
- (int)bloodType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSaved;
- (id)emergencyContacts;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAnyData;
- (id)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDisabled;
- (id)isOrganDonor;
- (void)loadDataFromABPerson:(void*)arg1;
- (id)medicalConditions;
- (id)medicalNotes;
- (id)medicationInfo;
- (id)name;
- (id)pictureData;
- (int)schemaVersion;
- (void)setAllergyInfo:(id)arg1;
- (void)setBirthdate:(id)arg1;
- (void)setBloodType:(int)arg1;
- (void)setDateSaved:(id)arg1;
- (void)setEmergencyContacts:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setIsDisabled:(BOOL)arg1;
- (void)setIsOrganDonor:(id)arg1;
- (void)setMedicalConditions:(id)arg1;
- (void)setMedicalNotes:(id)arg1;
- (void)setMedicationInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPictureData:(id)arg1;
- (void)setSchemaVersion:(int)arg1;
- (void)setWeight:(id)arg1;
- (id)weight;

@end
