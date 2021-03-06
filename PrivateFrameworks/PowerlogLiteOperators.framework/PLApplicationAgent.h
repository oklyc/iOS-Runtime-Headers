/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableSet, PLAccountingGroup, PLNSNotificationOperatorComposition;

@interface PLApplicationAgent : PLAgent {
    PLAccountingGroup *_accountingGroupApplication;
    PLAccountingGroup *_appAccountingGroup;
    NSMutableSet *_keyboardPlugins;
    PLNSNotificationOperatorComposition *_notificationSBApplicationStateChanged;
}

@property(readonly) PLAccountingGroup * accountingGroupApplication;
@property(retain) PLAccountingGroup * appAccountingGroup;
@property(retain) NSMutableSet * keyboardPlugins;
@property(readonly) PLNSNotificationOperatorComposition * notificationSBApplicationStateChanged;

+ (id)accountingGroupDefinitions;
+ (id)appNameForBundleID:(id)arg1;
+ (id)entryAggregateDefinitionApplicationReason;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneAllApps;
+ (id)entryEventNoneAllPlugins;
+ (id)entryEventNoneDefinitionApplicationMetadata;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionApplication;
+ (id)entryEventPointDefinitions;
+ (id)installedBundleIDs;
+ (id)installedPlugins;
+ (void)load;
+ (id)pluginEntryFromProxy:(id)arg1;

- (void).cxx_destruct;
- (id)accountingGroupApplication;
- (void)addAccountingEvent:(id)arg1;
- (id)appAccountingGroup;
- (id)init;
- (void)initOperatorDependancies;
- (id)keyboardPlugins;
- (void)log;
- (void)logAllApps;
- (void)logAllPlugins;
- (void)logEventPointApplication;
- (void)logEventPointApplicationForDisplayID:(id)arg1;
- (void)logEventPointApplicationForDisplayID:(id)arg1 withPid:(int)arg2 withState:(id)arg3 withReasons:(id)arg4;
- (void)logInstalledApp:(id)arg1;
- (void)logInstalledPlugin:(id)arg1;
- (void)logUninstalledApp:(id)arg1;
- (id)notificationSBApplicationStateChanged;
- (void)setAppAccountingGroup:(id)arg1;
- (void)setKeyboardPlugins:(id)arg1;
- (void)storeInstalledAppsInfo:(id)arg1;
- (void)storeUninstalledAppsInfo:(id)arg1;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;

@end
