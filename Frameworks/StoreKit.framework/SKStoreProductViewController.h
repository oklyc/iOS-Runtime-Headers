/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SKStoreProductViewControllerDelegate>, <SKStoreProductViewControllerDelegatePrivate>, GKGame, NSDictionary, NSString, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, SKRemoteProductViewController, _UIAsyncInvocation;

@interface SKStoreProductViewController : UIViewController {
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    BOOL _askToBuy;
    BOOL _automaticallyDismisses;
    NSString *_cancelButtonTitle;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> *_delegate;
    id _loadBlock;
    int _originalStatusBarStyle;
    int _productPageStyle;
    NSString *_promptString;
    SKRemoteProductViewController *_remoteViewController;
    NSString *_rightBarButtonTitle;
    NSDictionary *_scriptContextDictionary;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    BOOL _showsRightBarButton;
    BOOL _showsStoreButton;
}

@property(copy) id _gkCompletionHandler;
@property(retain) GKGame * _gkGame;
@property(copy) NSString * additionalBuyParameters;
@property(copy) NSString * affiliateIdentifier;
@property BOOL askToBuy;
@property BOOL automaticallyDismisses;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * clientIdentifier;
@property <SKStoreProductViewControllerDelegate> * delegate;
@property int productPageStyle;
@property(copy) NSString * promptString;
@property(copy) NSString * rightBarButtonTitle;
@property(copy) NSDictionary * scriptContextDictionary;
@property BOOL showsRightBarButton;
@property BOOL showsStoreButton;

+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id)arg3;
+ (void)getCanLoadURL:(id)arg1 completionBlock:(id)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;

- (void)_addRemoteView;
- (void)_didFinish;
- (void)_didFinishWithResult:(int)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (id)_gkCompletionHandler;
- (id)_gkGame;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_setLoadBlock:(id)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_throwUnsupportedPresentationException;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)additionalBuyParameters;
- (id)affiliateIdentifier;
- (BOOL)askToBuy;
- (BOOL)automaticallyDismisses;
- (id)cancelButtonTitle;
- (id)clientIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)finishImmediately;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)loadView;
- (int)productPageStyle;
- (id)promptString;
- (id)rightBarButtonTitle;
- (id)scriptContextDictionary;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(BOOL)arg1;
- (void)setAutomaticallyDismisses:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProductPageStyle:(int)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(BOOL)arg1;
- (void)setShowsStoreButton:(BOOL)arg1;
- (void)set_gkCompletionHandler:(id)arg1;
- (void)set_gkGame:(id)arg1;
- (BOOL)showsRightBarButton;
- (BOOL)showsStoreButton;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
