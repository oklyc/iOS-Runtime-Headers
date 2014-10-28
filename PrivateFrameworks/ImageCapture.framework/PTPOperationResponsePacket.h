/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationResponsePacket : NSObject {
    int _numParameters;
    unsigned long _parameters[5];
    unsigned short _responseCode;
    unsigned long _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2;
- (id)description;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 numParameters:(unsigned long)arg3 parameters:(unsigned int*)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6 parameter5:(unsigned long)arg7;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 parameter4:(unsigned long)arg6;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned long)arg2;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (int)numParameters;
- (unsigned long)parameter1;
- (unsigned long)parameter2;
- (unsigned long)parameter3;
- (unsigned long)parameter4;
- (unsigned long)parameter5;
- (unsigned long)parameterAtIndex:(unsigned long)arg1;
- (unsigned short)responseCode;
- (void)setParameter1:(unsigned long)arg1;
- (void)setParameter2:(unsigned long)arg1;
- (void)setParameter3:(unsigned long)arg1;
- (void)setParameter4:(unsigned long)arg1;
- (void)setParameter5:(unsigned long)arg1;
- (void)setPparameter:(unsigned long)arg1 atIndex:(unsigned long)arg2;
- (void)setResponseCode:(unsigned short)arg1;
- (void)setTransactionID:(unsigned long)arg1;
- (unsigned long)transactionID;

@end
