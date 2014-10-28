/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {
    int _category;
    NSString *_initialCode;
}

@property(copy) NSString * initialCode;
@property(readonly) int redeemCategoryApps;
@property(readonly) int redeemCategoryBooks;
@property(readonly) int redeemCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)initialCode;
- (id)newNativeViewController;
- (int)redeemCategoryApps;
- (int)redeemCategoryBooks;
- (int)redeemCategoryMedia;
- (id)scriptAttributeKeys;
- (void)setInitialCode:(id)arg1;
- (void)setRedeemStyle:(int)arg1;

@end
