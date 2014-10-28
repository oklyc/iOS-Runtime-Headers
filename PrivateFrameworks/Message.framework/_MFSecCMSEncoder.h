/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    long _SecCMSError;
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

@property(readonly) long lastSecCMSError;

- (void)_appendBytes:(const void*)arg1 length:(unsigned long)arg2;
- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id*)arg2;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id*)arg3;
- (long)lastSecCMSError;

@end
