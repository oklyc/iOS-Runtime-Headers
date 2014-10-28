/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SASettingEntity;

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) SASettingEntity * setting;
@property(readonly) Class superclass;

+ (id)getValueResponse;
+ (id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
