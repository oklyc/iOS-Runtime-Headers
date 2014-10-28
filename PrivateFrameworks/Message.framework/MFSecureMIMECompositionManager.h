/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFSecureMIMECompositionManagerDelegate>, MFError, MailAccount, NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface MFSecureMIMECompositionManager : NSObject {
    NSMutableDictionary *_certificatesByRecipient;
    <MFSecureMIMECompositionManagerDelegate> *_delegate;
    struct __SecIdentity { } *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    int _encryptionPolicy;
    int _encryptionStatus;
    unsigned int _encryptionStatusSemaphore;
    NSMutableDictionary *_errorsByRecipient;
    BOOL _invalidated;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_recipients;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity { } *_signingIdentity;
    MFError *_signingIdentityError;
    int _signingPolicy;
    int _signingStatus;
    unsigned int _signingStatusSemaphore;
}

@property <MFSecureMIMECompositionManagerDelegate> * delegate;
@property(readonly) int encryptionPolicy;
@property(readonly) int encryptionStatus;
@property(readonly) NSSet * recipients;
@property(readonly) MailAccount * sendingAccount;
@property(copy) NSString * sendingAddress;
@property(readonly) int signingPolicy;
@property(readonly) int signingStatus;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;

- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity { }*)arg4 error:(id)arg5;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity { }*)arg2 error:(id)arg3;
- (void)_setEncryptionIdentityError_nts:(id)arg1;
- (void)_setSigningIdentityError_nts:(id)arg1;
- (BOOL)_shouldAllowSend_nts;
- (BOOL)_shouldEncrypt_nts;
- (BOOL)_shouldSign_nts;
- (BOOL)_updateEncryptionStatus_nts;
- (BOOL)_updateSigningStatus_nts;
- (void)addRecipients:(id)arg1;
- (id)compositionSpecification;
- (void)dealloc;
- (id)delegate;
- (int)encryptionPolicy;
- (int)encryptionStatus;
- (id)init;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (void)invalidate;
- (id)recipients;
- (void)removeRecipients:(id)arg1;
- (id)sendingAccount;
- (id)sendingAddress;
- (void)setDelegate:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (BOOL)shouldAllowSend;
- (int)signingPolicy;
- (int)signingStatus;

@end
