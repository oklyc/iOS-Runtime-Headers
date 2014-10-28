/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIBannerTargetImplementation>, NSString;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {
    void *_identifier;
    int _idiom;
    <SBUIBannerTargetImplementation> *_implementation;
}

@property(readonly) void* bannerTargetIdentifier;
@property(readonly) int bannerTargetIdiom;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void*)bannerTargetIdentifier;
- (int)bannerTargetIdiom;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(id)arg2;
- (id)currentBannerContextForSource:(id)arg1;
- (id)description;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)initWithTargetImplementation:(id)arg1;
- (void)invalidate;
- (BOOL)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)signalSource:(id)arg1;
- (void)unregisterSource:(id)arg1;

@end
