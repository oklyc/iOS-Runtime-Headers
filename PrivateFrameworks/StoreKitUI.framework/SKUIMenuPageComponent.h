/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableArray, NSString, SKUISegmentedControlViewElement;

@interface SKUIMenuPageComponent : SKUIPageComponent {
    NSMutableArray *_childrenComponents;
    int _defaultSelectedIndex;
    int _menuStyle;
    NSString *_menuTitle;
    float _menuTitleFontSize;
    int _menuTitleFontWeight;
    NSMutableArray *_sortURLStrings;
    NSString *_titleForMoreItem;
    NSMutableArray *_titles;
}

@property(readonly) NSArray * allTitles;
@property(readonly) int defaultSelectedIndex;
@property(readonly) int menuStyle;
@property(readonly) NSString * menuTitle;
@property(readonly) float menuTitleFontSize;
@property(readonly) int menuTitleFontWeight;
@property(readonly) int numberOfItems;
@property(readonly) NSString * titleForMoreItem;
@property(readonly) SKUISegmentedControlViewElement * viewElement;

- (void).cxx_destruct;
- (id)_componentWithContext:(id)arg1;
- (void)_setChildComponents:(id)arg1 forIndex:(int)arg2;
- (id)allTitles;
- (id)childComponentsForIndex:(int)arg1;
- (int)componentType;
- (int)defaultSelectedIndex;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithRoomSortData:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (int)menuStyle;
- (id)menuTitle;
- (float)menuTitleFontSize;
- (int)menuTitleFontWeight;
- (int)numberOfItems;
- (id)sortURLForIndex:(int)arg1;
- (id)titleForIndex:(int)arg1;
- (id)titleForMoreItem;

@end
