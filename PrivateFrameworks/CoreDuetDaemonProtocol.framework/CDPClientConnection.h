/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@class CDDXPCConnection, CDDebug, NSString;

@interface CDPClientConnection : NSObject {
    BOOL _admissionOverride;
    BOOL _admissionResult;
    NSString *_clientName;
    CDDXPCConnection *_connection;
    CDDebug *_debug;
}

@property BOOL admissionOverride;
@property BOOL admissionResult;
@property(readonly) NSString * clientName;
@property(readonly) CDDXPCConnection * connection;
@property(readonly) CDDebug * debug;

- (void).cxx_destruct;
- (BOOL)activitySignal:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;
- (BOOL)admissionCheckAndStartedForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(id)arg5;
- (BOOL)admissionOverride;
- (BOOL)admissionResult;
- (BOOL)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(id)arg5;
- (BOOL)bootstrapWithError:(id*)arg1 replyHandler:(id)arg2;
- (id)clientName;
- (id)connection;
- (id)debug;
- (id)init;
- (id)initWithPluginName:(id)arg1 error:(id*)arg2;
- (id)messageWithError:(id*)arg1;
- (BOOL)sendMessage:(int)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(id)arg7;
- (void)setAdmissionOverride:(BOOL)arg1;
- (void)setAdmissionResult:(BOOL)arg1;
- (BOOL)triggerWithConditions:(id)arg1 error:(id*)arg2 replyHandler:(id)arg3;

@end
