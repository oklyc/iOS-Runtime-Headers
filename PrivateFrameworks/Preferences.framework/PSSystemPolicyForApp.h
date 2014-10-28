/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSSystemPolicyForApp : NSObject {
    NSString *_bundleIdentifier;
    BOOL _forcePolicyOptions;
    unsigned int _policyOptions;
}

@property(copy) NSString * bundleIdentifier;

+ (BOOL)isServiceRestricted:(id)arg1;

- (BOOL)_isBackgroundAppRefreshRestricted;
- (BOOL)_isCellularDataRestricted;
- (BOOL)_isLocationServicesRestricted;
- (id)_privacyAccessForService:(struct __CFString { }*)arg1;
- (id)_sectionInfo;
- (BOOL)_supportsBackgroundAppRefresh;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (id)authLevelStringForStatus:(int)arg1;
- (id)backgroundAppRefreshSpecifier;
- (id)bundleIdentifier;
- (id)cellularSpecifier;
- (struct __CFBundle { }*)copyTCCBundleForService:(struct __CFString { }*)arg1;
- (id)dataUsageWorkspaceInfo;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)isBackgroundRefreshEnabled:(id)arg1;
- (BOOL)isCellularBundleID:(id)arg1;
- (id)locationServicesSpecifier;
- (id)locationStatus:(id)arg1;
- (id)notificationSpecifier;
- (id)privacyAccessForSpecifier:(id)arg1;
- (id)privacySpecifierForService:(struct __CFString { }*)arg1;
- (id)privacySpecifiers;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBackgroundRefreshEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPrivacyAccess:(id)arg1 forSpecifier:(id)arg2;
- (id)specifiers;
- (id)specifiersForPolicyOptions:(unsigned int)arg1 force:(BOOL)arg2;

@end
