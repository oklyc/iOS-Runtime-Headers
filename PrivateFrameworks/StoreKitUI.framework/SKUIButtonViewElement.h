/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIImageViewElement, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement {
    NSString *_badgeResourceName;
    SKUIViewElementText *_buttonText;
    int _buttonViewType;
    NSString *_confirmationText;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_variantIdentifier;
}

@property(readonly) NSString * badgeResourceName;
@property(readonly) SKUIImageViewElement * buttonImage;
@property(readonly) SKUIViewElementText * buttonText;
@property(readonly) int buttonViewType;
@property(readonly) NSString * confirmationText;
@property(readonly) long long itemIdentifier;
@property(readonly) NSString * variantIdentifier;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)badgeResourceName;
- (id)buttonImage;
- (id)buttonText;
- (int)buttonViewType;
- (BOOL)canPerformLocalActionWithItemState:(id)arg1;
- (BOOL)canPersonalizeUsingItemState:(id)arg1;
- (id)confirmationText;
- (id)description;
- (unsigned int)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (long long)itemIdentifier;
- (int)pageComponentType;
- (id)personalizationLibraryItems;
- (id)variantIdentifier;

@end
