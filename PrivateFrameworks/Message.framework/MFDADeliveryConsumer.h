/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {
    unsigned int _bytesRead;
    unsigned int _bytesWritten;
    MFError *_error;
    int _status;
}

@property(readonly) unsigned int bytesRead;
@property(readonly) unsigned int bytesWritten;
@property(retain) MFError * error;
@property(readonly) int status;

- (void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3;
- (unsigned int)bytesRead;
- (unsigned int)bytesWritten;
- (void)dealloc;
- (id)error;
- (void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned int)arg2 receivedBytesCount:(unsigned int)arg3;
- (void)setError:(id)arg1;
- (int)status;

@end
