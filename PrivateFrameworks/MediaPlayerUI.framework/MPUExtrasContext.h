/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUExtrasContextDelegate>, MPMediaItem, MPPlaybackContext, MPUExtrasRootViewController, NSString, NSURL, UIViewController;

@interface MPUExtrasContext : NSObject <MPUExtrasPlaybackDelegate> {
    NSString *_buyParameters;
    <MPUExtrasContextDelegate> *_delegate;
    MPUExtrasRootViewController *_extrasRootViewController;
    MPPlaybackContext *_featurePlaybackContext;
    UIViewController *_featurePlaybackViewController;
    NSURL *_javascriptURL;
    MPMediaItem *_mediaItem;
    long long _storeID;
}

@property(copy,readonly) NSString * buyParameters;
@property(copy,readonly) NSString * debugDescription;
@property <MPUExtrasContextDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) MPUExtrasRootViewController * extrasRootViewController;
@property(retain) MPPlaybackContext * featurePlaybackContext;
@property(retain) UIViewController * featurePlaybackViewController;
@property(readonly) unsigned int hash;
@property(copy,readonly) NSURL * javascriptURL;
@property(readonly) MPMediaItem * mediaItem;
@property(readonly) long long storeID;
@property(readonly) Class superclass;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)arg1;

- (void).cxx_destruct;
- (void)_configureForMediaItem:(id)arg1;
- (id)buyParameters;
- (id)delegate;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(BOOL)arg2;
- (void)extrasRequestsPlaybackStop;
- (id)extrasRootViewController;
- (void)failWithError:(id)arg1;
- (id)featurePlaybackContext;
- (id)featurePlaybackViewController;
- (id)init;
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3;
- (id)initWithMediaItem:(id)arg1;
- (id)javascriptURL;
- (id)mediaItem;
- (void)setDelegate:(id)arg1;
- (void)setFeaturePlaybackContext:(id)arg1;
- (void)setFeaturePlaybackViewController:(id)arg1;
- (long long)storeID;

@end
