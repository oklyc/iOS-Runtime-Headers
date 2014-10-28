/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@class <WirelessProximityDelegate>, NSString, XPCClient;

@interface WirelessProximity : NSObject <XPCClientDelegate> {
    XPCClient *_connection;
    <WirelessProximityDelegate> *_delegate;
    int _state;
}

@property(retain) XPCClient * connection;
@property(copy,readonly) NSString * debugDescription;
@property <WirelessProximityDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property int state;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionDied;
- (void)connectionInterrupted;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)messageArrived:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)updateState:(int)arg1;

@end
