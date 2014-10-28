/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@class NSDictionary;

@interface NCInteractiveNotificationViewController : UIViewController <NCInteractiveNotificationServiceInterface> {
    NSDictionary *_context;
    float _maximumHeight;
    BOOL _modal;
}

@property(copy) NSDictionary * context;
@property float maximumHeight;
@property(getter=isModal) BOOL modal;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_didChangeRevealPercent:(float)arg1;
- (void)_getActionContextWithCompletion:(id)arg1;
- (void)_getActionTitlesWithCompletion:(id)arg1;
- (void)_getInitialStateWithCompletion:(id)arg1;
- (void)_handleActionAtIndex:(unsigned int)arg1;
- (void)_handleActionIdentifier:(id)arg1;
- (void)_interactiveNotificationDidAppear;
- (void)_proximityStateDidChange:(BOOL)arg1;
- (void)_setContext:(id)arg1;
- (void)_setMaximumHeight:(float)arg1;
- (void)_setModal:(BOOL)arg1;
- (void)_willPresentFromActionIdentifier:(id)arg1;
- (id)accessoryViewService;
- (id)actionContext;
- (id)actionTitles;
- (float)bottomOverhangHeight;
- (id)context;
- (void)dealloc;
- (void)didChangeRevealPercent:(float)arg1;
- (void)dismissWithContext:(id)arg1;
- (void)handleActionAtIndex:(unsigned int)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (id)inlayViewService;
- (void)interactiveNotificationDidAppear;
- (BOOL)isModal;
- (float)maximumHeight;
- (float)preferredContentHeight;
- (void)proximityStateDidChange:(BOOL)arg1;
- (void)requestPreferredContentHeight:(float)arg1;
- (void)requestProximityMonitoringEnabled:(BOOL)arg1;
- (void)setActionEnabled:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)setContext:(id)arg1;
- (void)setMaximumHeight:(float)arg1;
- (void)setModal:(BOOL)arg1;
- (BOOL)showsKeyboard;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
