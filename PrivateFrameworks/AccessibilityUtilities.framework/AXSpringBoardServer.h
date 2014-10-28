/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSMutableArray, NSMutableDictionary;

@interface AXSpringBoardServer : AXServer {
    AXAccessQueue *_accessQueue;
    NSMutableArray *_actionHandlers;
    id _currentAlertHandler;
    NSMutableArray *_gestureOverrides;
    NSMutableDictionary *_reachabilityHandlers;
}

@property(retain) AXAccessQueue * accessQueue;
@property(retain) NSMutableArray * actionHandlers;
@property(copy) id currentAlertHandler;
@property(retain) NSMutableArray * gestureOverrides;
@property(retain) NSMutableDictionary * reachabilityHandlers;

+ (id)server;

- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1;
- (id)_serviceName;
- (BOOL)_shouldDispatchLocally;
- (BOOL)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)accessQueue;
- (id)actionHandlers;
- (int)activeApplicationOrientation;
- (int)activeInterfaceOrientation;
- (id)applicationWithIdentifier:(id)arg1;
- (BOOL)areSystemGesturesDisabledByAccessibility;
- (BOOL)areSystemGesturesDisabledNatively;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (void)copyStringToPasteboard:(id)arg1;
- (id)currentAlertHandler;
- (void)dealloc;
- (void)dismissAppSwitcher;
- (void)dismissSiri;
- (id)focusedAppPID;
- (id)focusedAppProcess;
- (id)gestureOverrides;
- (BOOL)hasActiveCall;
- (BOOL)hasActiveOrPendingCall;
- (BOOL)hasActiveOrPendingCallOrFaceTime;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (id)installedApps;
- (BOOL)isAppSwitcherVisible;
- (BOOL)isControlCenterVisible;
- (BOOL)isGuidedAccessActive;
- (BOOL)isInspectorMinimized;
- (BOOL)isMakingEmergencyCall;
- (BOOL)isMediaPlaying;
- (BOOL)isNotificationCenterVisible;
- (BOOL)isOrientationLocked;
- (BOOL)isPointInsideAccessibilityInspector:(id)arg1;
- (BOOL)isPurpleBuddyAppFrontmost;
- (BOOL)isRingerMuted;
- (BOOL)isScreenLockedWithPasscode:(BOOL*)arg1;
- (BOOL)isSettingsAppFrontmost;
- (BOOL)isSideSwitchUsedForOrientation;
- (BOOL)isSiriTalkingOrListening;
- (BOOL)isSiriVisible;
- (BOOL)isSpeakThisTemporarilyDisabled;
- (BOOL)isSyncingRestoringResettingOrUpdating;
- (BOOL)isSystemAppFrontmost;
- (BOOL)isSystemAppFrontmostExludingSiri;
- (BOOL)isSystemAppShowingAnAlert;
- (BOOL)isSystemSleeping;
- (BOOL)isVoiceControlRunning;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCommonTasks;
- (void)openSCATCustomGestureCreation;
- (void)openSiri;
- (void)openVoiceControl;
- (void)pauseMedia;
- (int)pid;
- (int)purpleBuddyPID;
- (id)reachabilityHandlers;
- (float)reachabilityOffset;
- (void)registerOverrideIntentForGesture:(unsigned int)arg1 withHandler:(id)arg2 withIdentifierCallback:(id)arg3;
- (void)registerReachabilityHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeOverrideIntent:(id)arg1;
- (void)removeReachabilityHandler:(id)arg1;
- (void)resetDimTimer;
- (void)resumeMedia;
- (id)runningAppPIDs;
- (id)runningAppProcesses;
- (void)setAccessQueue:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setCancelGestureActivation:(unsigned int)arg1 cancelEnabled:(BOOL)arg2;
- (void)setCurrentAlertHandler:(id)arg1;
- (void)setGestureOverrides:(id)arg1;
- (void)setHearingAidControlVisible:(BOOL)arg1;
- (void)setOrientationLocked:(BOOL)arg1;
- (void)setReachabilityHandlers:(id)arg1;
- (void)setShowSpeechPlaybackControls:(BOOL)arg1;
- (void)setSiriIsTalking:(BOOL)arg1;
- (void)setVolume:(float)arg1;
- (void)showAlert:(int)arg1 withHandler:(id)arg2 withData:(id)arg3;
- (void)showAlert:(int)arg1 withHandler:(id)arg2;
- (void)showControlCenter:(BOOL)arg1;
- (BOOL)showNotificationCenter:(BOOL)arg1;
- (void)showNotificationCenter;
- (void)startHearingAidServer;
- (id)systemAppInfoWithQuery:(unsigned int)arg1;
- (void)takeScreenshot;
- (void)toggleNotificationCenter;
- (int)topEventPidOverride;
- (void)unlockDevice;
- (float)volumeLevel;

@end
