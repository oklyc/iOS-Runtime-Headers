/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MSMediaStreamDaemon, MSResetServerProtocol, NSString;

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate> {
    MSMediaStreamDaemon *_daemon;
    NSString *_personID;
    MSResetServerProtocol *_protocol;
    id _selfReference;
}

@property MSMediaStreamDaemon * daemon;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * personID;
@property(readonly) Class superclass;

+ (id)resetServerObjectWithPersonID:(id)arg1 baseURL:(id)arg2;

- (void).cxx_destruct;
- (id)daemon;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)personID;
- (void)resetServer;
- (void)resetServerProtocol:(id)arg1 didFinishWithError:(id)arg2;
- (void)resetServerProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)setDaemon:(id)arg1;

@end
