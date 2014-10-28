/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIViewElementSlideshowDelegate>, NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate> {
    <SKUIViewElementSlideshowDelegate> *_delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    int _selectedIndex;
    NSString *_title;
}

@property(copy,readonly) NSString * debugDescription;
@property <SKUIViewElementSlideshowDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) SKUIViewElementLayoutContext * layoutContext;
@property(readonly) int numberOfSlideshowItems;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (id)layoutContext;
- (int)numberOfItemsInSlideshowViewController:(id)arg1;
- (int)numberOfSlideshowItems;
- (void)presentFromParentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutContext:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(int)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(int)arg2 size:(struct CGSize { float x1; float x2; }*)arg3;
- (void)slideshowViewControllerDidFinish:(id)arg1;

@end
