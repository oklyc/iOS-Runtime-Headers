/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipientOriginContext, NSArray, NSString;

@interface MFComposeRecipient : NSObject <NSCopying, MFDraggableItem, NSCoding> {
    NSString *_address;
    NSArray *_cachedCompleteMatches;
    NSArray *_cachedMatchedStrings;
    NSArray *_cachedSortedMembers;
    NSString *_countryCode;
    int _identifier;
    NSString *_label;
    MFComposeRecipientOriginContext *_originContext;
    int _property;
    void *_record;
    int _recordID;
}

@property(retain) NSString * countryCode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) MFComposeRecipientOriginContext * originContext;
@property(getter=isRemovableFromSearchResults,readonly) BOOL removableFromSearchResults;
@property(readonly) BOOL showsAccessoryButton;
@property(readonly) Class superclass;

+ (id)mf_recipientWithGALResult:(id)arg1;
+ (id)recipientWithProperty:(int)arg1 address:(id)arg2;
+ (id)recipientWithRecord:(void*)arg1 property:(int)arg2 identifier:(int)arg3;
+ (id)recipientWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4;

- (id)IDSCanonicalAddress;
- (id)_unformattedAddress;
- (id)address;
- (id)canonicalAddress;
- (id)children;
- (id)childrenWithCompleteMatches;
- (id)commentedAddress;
- (id)completelyMatchedAttributedStrings;
- (id)compositeName;
- (struct __CFPhoneNumber { }*)copyPhoneNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (int)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (BOOL)isEmail;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isPhone;
- (BOOL)isRemovableFromSearchResults;
- (id)label;
- (id)normalizedAddress;
- (id)objectForDragType:(id)arg1;
- (id)originContext;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (int)property;
- (id)rawAddress;
- (void*)record;
- (int)recordID;
- (void)setCanonicalAddress:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setOriginContext:(id)arg1;
- (void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)shortName;
- (BOOL)showsAccessoryButton;
- (id)sortedChildren;
- (id)supportedDragTypes;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;
- (BOOL)wasCompleteMatch;

@end
