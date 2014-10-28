/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithRecordID:(int)arg1 vCardData:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;

@end
