/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSData;

@interface PTPEndDataPacket : NSObject {
    NSData *_data;
    unsigned short _operationCode;
    unsigned long _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (unsigned short)operationCode;
- (void)setData:(id)arg1;
- (void)setOperationCode:(unsigned short)arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;

@end
