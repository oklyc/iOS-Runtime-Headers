/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@class AAUIFamilySetupPrompter, FAFamilySettings, NSString, SSAccount, UIViewController;

@interface FAFamilySettings : FAFamilyCircleRequest <AAUIFamilySetupPrompterDelegate> {
    SSAccount *_iTunesAccount;
    BOOL _isFirstRun;
    UIViewController *_presentingViewController;
    AAUIFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) SSAccount * iTunesAccount;
@property BOOL isFirstRun;
@property UIViewController * presentingViewController;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchPrefsUsingDaemon;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (id)iTunesAccount;
- (BOOL)isFirstRun;
- (void)launchiCloudFamilySettings;
- (id)presentingViewController;
- (void)setITunesAccount:(id)arg1;
- (void)setIsFirstRun:(BOOL)arg1;
- (void)setPresentingViewController:(id)arg1;

@end
