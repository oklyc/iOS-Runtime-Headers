/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class APSConnection, NSConditionLock, NSCountedSet, NSData, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface MFAPSManager : NSObject <APSConnectionDelegate, MFAPSManager> {
    NSData *_deviceToken;
    NSConditionLock *_deviceTokenLock;
    APSConnection *_pushService;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_unwatchedTopics;
    NSCountedSet *_watchedTopics;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (Class)APSConnection;
+ (id)sharedManager;

- (void)_startAPS_nts;
- (void)_stopAPS_nts;
- (void)connect;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)copyDeviceToken;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)init;
- (void)startWatchingForTopic:(id)arg1;
- (void)stopWatchingForTopic:(id)arg1;
- (void)swapTopic:(id)arg1 forNewTopic:(id)arg2;

@end
