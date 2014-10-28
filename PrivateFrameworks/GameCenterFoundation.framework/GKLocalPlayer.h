/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKEventEmitter<GKLocalPlayerListener>, GKInvite, NSDate, NSDictionary, NSInvocation, NSString, UIAlertView, UIViewController, UIViewController<GKAuthenticateViewController>;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener> {
    GKInvite *_acceptedInvite;
    UIViewController *_activeViewController;
    BOOL _appUnrecognized;
    NSDictionary *_authenticateAlertDictionary;
    id _authenticateHandler;
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _authenticatingCurrentAccount;
    id _authenticationCompletionHandler;
    UIAlertView *_currentAlert;
    NSInvocation *_currentFriendRequestInvocation;
    BOOL _didAuthenticate;
    BOOL _enteringForeground;
    int _environment;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    unsigned int _failedLogins;
    NSString *_lastAccountNameAuthenticated;
    NSDate *_lastAuthDate;
    NSString *_lastAuthPlayerID;
    NSString *_lastUsernameAttempted;
    UIAlertView *_loginAlertView;
    BOOL _newToGameCenter;
    UIViewController *_rootViewController;
    UIViewController<GKAuthenticateViewController> *_signInViewController;
    id _validateAccountCompletionHandler;
    BOOL _validatingAccount;
}

@property(retain) GKInvite * acceptedInvite;
@property(retain) NSString * accountName;
@property(retain) UIViewController * activeViewController;
@property(readonly) BOOL allowNearbyMultiplayer;
@property(getter=isAppUnrecognized) BOOL appUnrecognized;
@property(retain) NSDictionary * authenticateAlertDictionary;
@property(copy) id authenticateHandler;
@property(getter=isAuthenticated) BOOL authenticated;
@property(getter=isAuthenticating) BOOL authenticating;
@property BOOL authenticatingCurrentAccount;
@property(copy) id authenticationCompletionHandler;
@property(readonly) BOOL canChangePhoto;
@property UIAlertView * currentAlert;
@property(retain) NSInvocation * currentFriendRequestInvocation;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL didAuthenticate;
@property BOOL enteringForeground;
@property(readonly) int environment;
@property(retain) GKEventEmitter<GKLocalPlayerListener> * eventEmitter;
@property(readonly) NSString * facebookUserID;
@property unsigned int failedLogins;
@property(getter=isFindable,readonly) BOOL findable;
@property(retain) NSString * firstName;
@property(readonly) unsigned int hash;
@property(readonly) NSString * iCloudUserID;
@property(retain) NSString * lastAccountNameAuthenticated;
@property(retain) NSDate * lastAuthDate;
@property(retain) NSString * lastAuthPlayerID;
@property(retain) NSString * lastName;
@property(retain) NSString * lastUsernameAttempted;
@property(retain) UIAlertView * loginAlertView;
@property(getter=isNewToGameCenter) BOOL newToGameCenter;
@property(getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property(retain) UIViewController * rootViewController;
@property(retain) UIViewController<GKAuthenticateViewController> * signInViewController;
@property(readonly) Class superclass;
@property(getter=isUnderage,readonly) BOOL underage;
@property(copy) id validateAccountCompletionHandler;
@property BOOL validatingAccount;

+ (id)accountName;
+ (BOOL)hasAuthenticatedAccount;
+ (id)localPlayer;
+ (BOOL)supportsSecureCoding;

- (void)_addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_showActionRestrictedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_showViewControllerForLegacyApps:(id)arg1;
- (void)_showWelcomeBanner;
- (void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;
- (id)acceptedInvite;
- (id)activeViewController;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)authenticateAlertDictionary;
- (id)authenticateHandler;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (BOOL)authenticatingCurrentAccount;
- (id)authenticationCompletionHandler;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(id)arg2;
- (void)callAuthHandlerWithError:(id)arg1;
- (BOOL)canChangePhoto;
- (void)cancelAuthentication;
- (void)completeAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (id)currentAlert;
- (id)currentFriendRequestInvocation;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)dealloc;
- (void)declineFriendRequestsFromPlayers:(id)arg1 handler:(id)arg2;
- (void)deletePhoto;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (BOOL)didAuthenticate;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)enteringForeground;
- (int)environment;
- (id)eventEmitter;
- (unsigned int)failedLogins;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)friends;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(id)arg1;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (BOOL)hasEmailAddress:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAppUnrecognized;
- (BOOL)isAuthenticated;
- (BOOL)isAuthenticating;
- (BOOL)isNewToGameCenter;
- (id)lastAccountNameAuthenticated;
- (id)lastAuthDate;
- (id)lastAuthPlayerID;
- (id)lastUsernameAttempted;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(id)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(id)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendRequests:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)loadGameRecommendationsWithCompletionHandler:(id)arg1;
- (id)loginAlertView;
- (void)presentError:(id)arg1 forMode:(int)arg2;
- (void)registerListener:(id)arg1;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (id)rootViewController;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id)arg8;
- (void)setAcceptedInvite:(id)arg1;
- (void)setActiveViewController:(id)arg1;
- (void)setAppUnrecognized:(BOOL)arg1;
- (void)setAuthenticateAlertDictionary:(id)arg1;
- (void)setAuthenticateHandler:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticating:(BOOL)arg1;
- (void)setAuthenticatingCurrentAccount:(BOOL)arg1;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (void)setCurrentAlert:(id)arg1;
- (void)setCurrentFriendRequestInvocation:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)setDidAuthenticate:(BOOL)arg1;
- (void)setEnteringForeground:(BOOL)arg1;
- (void)setEventEmitter:(id)arg1;
- (void)setFailedLogins:(unsigned int)arg1;
- (void)setLastAccountNameAuthenticated:(id)arg1;
- (void)setLastAuthDate:(id)arg1;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setLastUsernameAttempted:(id)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setNewToGameCenter:(BOOL)arg1;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (void)setSignInViewController:(id)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setStatus:(id)arg1;
- (void)setValidateAccountCompletionHandler:(id)arg1;
- (void)setValidatingAccount:(BOOL)arg1;
- (void)setupForCloudSavedGames;
- (void)setupMultiplayerNotifications;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showAuthenticateViewController;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)showAuthorizeViewController;
- (void)showCancelledAlertForPlayer:(id)arg1;
- (void)showCreateAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showLoginFailedAlert;
- (void)showSettings;
- (void)showSignInAccountRestrictedAlert;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (id)signInViewController;
- (void)signOutWithCompletionHandler:(id)arg1;
- (void)startAuthentication;
- (void)startLegacyAuthenticationWithCompletionHandler:(id)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)validateAccountCompletionHandler;
- (void)validateAccountWithCompletionHandler:(id)arg1;
- (BOOL)validatingAccount;

@end
