/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {
    IMAccount *_account;
    BOOL _gotNewCredential;
    unsigned int _signinFailureCount;
    BOOL _triedGettingNewCredentials;
}

@property(retain) IMAccount * account;

- (void)_handleTimeout;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_setupAccountHandlers;
- (void)_showBadPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showRequestPasswordAlert;
- (id)account;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)dealloc;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
