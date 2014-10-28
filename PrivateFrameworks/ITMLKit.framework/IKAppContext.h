/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppContextDelegate>, <IKApplication>, IKJSFoundation, JSContext, NSError, NSMutableArray, NSString;

@interface IKAppContext : NSObject <ISURLOperationDelegate> {
    <IKApplication> *_app;
    BOOL _canAccessPendingQueue;
    <IKAppContextDelegate> *_delegate;
    BOOL _isValid;
    JSContext *_jsContext;
    IKJSFoundation *_jsFoundation;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    unsigned int _mode;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_postEvaluationBlocks;
    id _reloadData;
    BOOL _remoteInspectionEnabled;
    NSError *_responseError;
    NSString *_responseScript;
}

@property(readonly) <IKApplication> * app;
@property BOOL canAccessPendingQueue;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) <IKAppContextDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isValid;
@property(retain) JSContext * jsContext;
@property(retain) IKJSFoundation * jsFoundation;
@property(readonly) unsigned int mode;
@property(retain) NSMutableArray * pendingQueue;
@property(retain) NSMutableArray * postEvaluationBlocks;
@property(retain) id reloadData;
@property BOOL remoteInspectionEnabled;
@property(retain) NSError * responseError;
@property(copy) NSString * responseScript;
@property(readonly) Class superclass;

+ (id)currentAppContext;

- (void).cxx_destruct;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)arg1;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(id)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1;
- (void)_jsThreadMain;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_startWithScript:(id)arg1;
- (void)_startWithURL:(id)arg1 urlTrusted:(BOOL)arg2;
- (void)_stopAndReload:(BOOL)arg1;
- (void)addPostEvaluateBlock:(id)arg1;
- (id)app;
- (BOOL)canAccessPendingQueue;
- (id)delegate;
- (void)evaluate:(id)arg1 completionBlock:(id)arg2;
- (void)evaluateDelegateBlockSync:(id)arg1;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)arg1;
- (void)handleReloadWithUrgencyType:(unsigned int)arg1 data:(id)arg2;
- (id)initWithApplication:(id)arg1 mode:(unsigned int)arg2 delegate:(id)arg3;
- (BOOL)isValid;
- (id)jsContext;
- (id)jsFoundation;
- (void)launchAppWithOptions:(id)arg1;
- (unsigned int)mode;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)pendingQueue;
- (id)postEvaluationBlocks;
- (void)reload;
- (id)reloadData;
- (BOOL)remoteInspectionEnabled;
- (id)responseError;
- (id)responseScript;
- (void)resumeWithOptions:(id)arg1;
- (void)setCanAccessPendingQueue:(BOOL)arg1;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)setIsValid:(BOOL)arg1;
- (void)setJsContext:(id)arg1;
- (void)setJsFoundation:(id)arg1;
- (void)setPendingQueue:(id)arg1;
- (void)setPostEvaluationBlocks:(id)arg1;
- (void)setReloadData:(id)arg1;
- (void)setRemoteInspectionEnabled:(BOOL)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseScript:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspendWithOptions:(id)arg1;
- (BOOL)validateDOMDocument:(id)arg1 error:(id*)arg2;

@end
