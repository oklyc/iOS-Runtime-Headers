/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {
    ISSoftwareApplication *_application;
}

@property(readonly) NSNumber * adamID;
@property(readonly) NSString * bundleID;
@property(readonly) NSString * bundleShortVersionString;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSNumber * dsID;
@property(readonly) NSString * environmentProduction;
@property(readonly) NSString * environmentSandbox;
@property(readonly) int launchResultApplicationDisabled;
@property(readonly) int launchResultApplicationNotFound;
@property(readonly) int launchResultInvalidArgument;
@property(readonly) int launchResultLaunchOrSuspendInProgress;
@property(readonly) int launchResultLocked;
@property(readonly) int launchResultLockedOut;
@property(readonly) int launchResultSecurityPolicy;
@property(readonly) int launchResultSpringBoardUnavailable;
@property(readonly) int launchResultSuccess;
@property(readonly) int launchResultSyncing;
@property(readonly) NSNumber * ratingRank;
@property(readonly) NSString * ratingSystem;
@property(readonly) NSString * softwareType;
@property(readonly) NSString * softwareTypeNewsstand;
@property(readonly) NSString * storeFrontID;
@property(readonly) NSNumber * versionID;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (id)bundleID;
- (id)bundleShortVersionString;
- (id)bundleVersion;
- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;
- (void)dealloc;
- (id)dsID;
- (id)environmentProduction;
- (id)environmentSandbox;
- (id)initWithApplication:(id)arg1;
- (int)launchResultApplicationDisabled;
- (int)launchResultApplicationNotFound;
- (int)launchResultInvalidArgument;
- (int)launchResultLaunchOrSuspendInProgress;
- (int)launchResultLocked;
- (int)launchResultLockedOut;
- (int)launchResultSecurityPolicy;
- (int)launchResultSpringBoardUnavailable;
- (int)launchResultSuccess;
- (int)launchResultSyncing;
- (int)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;
- (id)ratingRank;
- (id)ratingSystem;
- (id)scriptAttributeKeys;
- (id)softwareType;
- (id)softwareTypeNewsstand;
- (id)storeFrontID;
- (id)versionID;

@end
