/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class <DATask>, DAAccount, DADuetReporter, NSArray, NSMutableArray, NSMutableSet, NSTimer;

@interface DATaskManager : NSObject {
    DAAccount *_account;
    <DATask> *_activeExclusiveTask;
    <DATask> *_activeModalTask;
    <DATask> *_activeQueuedTask;
    BOOL _didLogSyncStart;
    DADuetReporter *_duetReporter;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_independentTasks;
    NSMutableArray *_mQueuedTasks;
    NSTimer *_managerIdleTimer;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableSet *_modalHeldIndependentTasks;
    NSTimer *_powerLogIdleTimer;
    NSMutableArray *_queuedExclusiveTasks;
    NSMutableArray *_queuedModalTasks;
    int _state;
    NSTimer *_userInitiatedSyncTimer;
}

@property DAAccount * account;
@property(retain) <DATask> * activeExclusiveTask;
@property(retain) <DATask> * activeModalTask;
@property(retain) <DATask> * activeQueuedTask;
@property(readonly) NSArray * allTasks;
@property BOOL didLogSyncStart;
@property(retain) DADuetReporter * duetReporter;
@property(retain) NSMutableSet * heldIndependentTasks;
@property(retain) NSMutableSet * independentTasks;
@property(retain) NSMutableArray * mQueuedTasks;
@property(retain) NSTimer * managerIdleTimer;
@property(retain) <DATask> * modalHeldActiveQueuedTask;
@property(retain) NSMutableSet * modalHeldIndependentTasks;
@property(retain) NSTimer * powerLogIdleTimer;
@property(retain) NSMutableArray * queuedExclusiveTasks;
@property(retain) NSMutableArray * queuedModalTasks;
@property(readonly) NSArray * queuedTasks;
@property int state;
@property(retain) NSTimer * userInitiatedSyncTimer;

- (void).cxx_destruct;
- (void)_cancelTasksWithReason:(int)arg1;
- (void)_clearUserInitiatedSyncTimer;
- (BOOL)_hasTasksForcingNetworkConnection;
- (BOOL)_hasTasksIndicatingARunningSync;
- (void)_logSyncEnd;
- (void)_makeStateTransition;
- (void)_performTask:(id)arg1;
- (void)_populateVersionDescriptions;
- (id)_powerLogInfoDictionary;
- (void)_reactivateHeldTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_scheduleStartModal:(id)arg1;
- (void)_startModal:(id)arg1;
- (BOOL)_taskForcesNetworking:(id)arg1;
- (BOOL)_taskInQueueForcesNetworkConnection:(id)arg1;
- (BOOL)_useFakeDescriptions;
- (void)_useOpportunisticSocketsAgain;
- (id)_version;
- (id)account;
- (id)accountID;
- (id)accountPersistentUUID;
- (id)activeExclusiveTask;
- (id)activeModalTask;
- (id)activeQueuedTask;
- (id)allTasks;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)dealloc;
- (id)deviceType;
- (BOOL)didLogSyncStart;
- (id)duetReporter;
- (id)heldIndependentTasks;
- (id)identityPersist;
- (id)independentTasks;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (BOOL)isShutdown;
- (id)mQueuedTasks;
- (id)managerIdleTimer;
- (id)modalHeldActiveQueuedTask;
- (id)modalHeldIndependentTasks;
- (id)password;
- (int)port;
- (id)powerLogIdleTimer;
- (id)queuedExclusiveTasks;
- (id)queuedModalTasks;
- (id)queuedTasks;
- (id)server;
- (void)setAccount:(id)arg1;
- (void)setActiveExclusiveTask:(id)arg1;
- (void)setActiveModalTask:(id)arg1;
- (void)setActiveQueuedTask:(id)arg1;
- (void)setDidLogSyncStart:(BOOL)arg1;
- (void)setDuetReporter:(id)arg1;
- (void)setHeldIndependentTasks:(id)arg1;
- (void)setIndependentTasks:(id)arg1;
- (void)setMQueuedTasks:(id)arg1;
- (void)setManagerIdleTimer:(id)arg1;
- (void)setModalHeldActiveQueuedTask:(id)arg1;
- (void)setModalHeldIndependentTasks:(id)arg1;
- (void)setPowerLogIdleTimer:(id)arg1;
- (void)setQueuedExclusiveTasks:(id)arg1;
- (void)setQueuedModalTasks:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUserInitiatedSyncTimer:(id)arg1;
- (void)shutdown;
- (int)state;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (BOOL)useSSL;
- (id)user;
- (id)userAgent;
- (id)userInitiatedSyncTimer;

@end
