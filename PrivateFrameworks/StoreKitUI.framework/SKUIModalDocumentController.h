/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIModalDocumentDelegate>, <SKUIModalSourceViewProvider>, <UINavigationControllerDelegate>, NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIOverlayContainerViewController, UINavigationController, UIPopoverController, UIViewController;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKComposeReviewDelegate, SKUIGiftViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUIClientContext *_clientContext;
    NSMutableArray *_composeReviewViewControllers;
    <SKUIModalDocumentDelegate> *_delegate;
    NSMutableArray *_giftViewControllers;
    <SKUIModalSourceViewProvider> *_modalSourceViewProvider;
    <UINavigationControllerDelegate> *_navigationControllerDelegate;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    UIPopoverController *_popoverController;
    UIViewController *_rootViewController;
    NSMutableArray *_stackItems;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIModalDocumentDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) NSArray * documents;
@property(readonly) unsigned int hash;
@property <SKUIModalSourceViewProvider> * modalSourceViewProvider;
@property <UINavigationControllerDelegate> * navigationControllerDelegate;
@property(retain) UIViewController * rootViewController;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_garbageCollectActivityViewController:(id)arg1;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (id)_overlayStackItems;
- (void)_popDocument:(BOOL)arg1;
- (void)_popOverlayStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_popPopoverStackItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_popoverController:(id)arg1 containsStackItem:(id)arg2;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (id)_presenterViewController;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_pushPlaylistDocument:(id)arg1 options:(id)arg2;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_pushWriteAReviewDocument:(id)arg1 viewController:(id)arg2;
- (void)_sendDidFinishIfApplicable;
- (id)_showOverlayContainerViewController;
- (void)_unloadDocumentForPopoverController:(id)arg1;
- (void)_unloadDocumentForViewController:(id)arg1;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (id)documents;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (id)init;
- (id)modalSourceViewProvider;
- (id)navigationControllerDelegate;
- (id)navigationDocumentForDocument:(id)arg1;
- (id)navigationDocumentForNavigationController:(id)arg1;
- (void)popAllDocuments;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (id)rootViewController;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModalSourceViewProvider:(id)arg1;
- (void)setNavigationControllerDelegate:(id)arg1;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)setRootViewController:(id)arg1;

@end
