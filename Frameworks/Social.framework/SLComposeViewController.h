/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSExtension, NSLayoutConstraint, NSString, UIView, UIViewController;

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol> {
    id _completionHandler;
    BOOL _didCompleteSheet;
    BOOL _didFailLoadingRemoteViewController;
    NSExtension *_extension;
    NSArray *_extensionItems;
    NSString *_initialText;
    NSArray *_itemProviders;
    NSLayoutConstraint *_keyboardTopConstraint;
    UIView *_keyboardTrackingView;
    int _maximumImageCount;
    int _maximumURLCount;
    int _maximumVideoCount;
    int _numImagesAdded;
    int _numURLsAdded;
    int _numVideosAdded;
    UIViewController *_remoteViewController;
    int _savedStatusBarStyle;
    NSString *_serviceType;
    BOOL _wasPresented;
}

@property(copy) id completionHandler;
@property(retain) UIViewController * remoteViewController;
@property(readonly) NSString * serviceType;

+ (id)_extensionIdentifierForServiceType:(id)arg1;
+ (BOOL)_isAvailableForService:(id)arg1;
+ (BOOL)_isServiceType:(id)arg1;
+ (id)_serviceTypeForExtensionIdentifier:(id)arg1;
+ (id)_serviceTypeToExtensionIdentifierMap;
+ (id)_shareExtensionWithIdentifier:(id)arg1;
+ (id)composeViewControllerForExtension:(id)arg1;
+ (id)composeViewControllerForExtensionIdentifier:(id)arg1;
+ (id)composeViewControllerForServiceType:(id)arg1;
+ (id)extensionIdentifierForActivityType:(id)arg1;
+ (BOOL)isAvailableForExtension:(id)arg1;
+ (BOOL)isAvailableForExtensionIdentifier:(id)arg1;
+ (BOOL)isAvailableForServiceType:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_addImageAsset:(id)arg1 preview:(id)arg2;
- (BOOL)_addImageJPEGData:(id)arg1 preview:(id)arg2;
- (BOOL)_addURL:(id)arg1 type:(int)arg2 preview:(id)arg3;
- (BOOL)_addVideoAsset:(id)arg1 preview:(id)arg2;
- (BOOL)_addVideoData:(id)arg1 preview:(id)arg2;
- (void)_handleRemoteViewFailure;
- (id)_urlForUntypedAsset:(id)arg1;
- (BOOL)_useCustomDimmingView;
- (BOOL)addAttachment:(id)arg1;
- (id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (BOOL)addExtensionItem:(id)arg1;
- (BOOL)addImage:(id)arg1;
- (BOOL)addImageAsset:(id)arg1;
- (BOOL)addItemProvider:(id)arg1;
- (BOOL)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (BOOL)addURL:(id)arg1;
- (BOOL)canAddContent;
- (BOOL)canSendTweet;
- (void)completeWithResult:(int)arg1;
- (id)completionHandler;
- (void)dealloc;
- (void)didLoadSheetViewController;
- (id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2;
- (id)initWithExtensionIdentifier:(id)arg1;
- (id)initWithServiceType:(id)arg1;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (id)remoteViewController;
- (void)remoteViewControllerLoadDidTimeout;
- (BOOL)removeAllImages;
- (BOOL)removeAllURLs;
- (id)serviceType;
- (void)setCompletionHandler:(id)arg1;
- (BOOL)setInitialText:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (void)setRemoteViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)supportsImageAsset:(id)arg1;
- (BOOL)supportsVideoAsset:(id)arg1;
- (void)userDidCancel;
- (void)userDidPost;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
