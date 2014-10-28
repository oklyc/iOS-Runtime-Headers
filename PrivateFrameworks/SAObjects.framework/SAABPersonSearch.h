/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSNumber, NSString, NSURL, SAEmail, SALocation, SAPhone;

@interface SAABPersonSearch : SADomainCommand {
}

@property(copy) NSURL * accountIdentifier;
@property(retain) SALocation * address;
@property(copy) NSDate * birthday;
@property(copy) NSString * company;
@property(retain) SAEmail * email;
@property(copy) NSNumber * me;
@property(copy) NSString * name;
@property(retain) SAPhone * phone;
@property(copy) NSString * relationship;
@property(copy) NSString * scope;

+ (id)personSearch;
+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountIdentifier;
- (id)address;
- (id)birthday;
- (id)company;
- (id)email;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)me;
- (id)name;
- (id)phone;
- (id)relationship;
- (BOOL)requiresResponse;
- (id)scope;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)setRelationship:(id)arg1;
- (void)setScope:(id)arg1;

@end
