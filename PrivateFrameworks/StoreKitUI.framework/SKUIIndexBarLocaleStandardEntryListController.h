/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKViewElementStyle, NSSet, SKUIIndexBarEntryListViewElement;

@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController {
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (void).cxx_destruct;
- (id)entryDescriptorAtIndex:(int)arg1;
- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;
- (int)numberOfEntryDescriptors;
- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(int)arg1 returningRelativeSectionIndex:(out int*)arg2;

@end
