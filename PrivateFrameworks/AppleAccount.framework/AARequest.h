/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate> {
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    BOOL _flushCache;
    id _handler;
    NSString *_initialURLString;
    NSString *_machineId;
    NSString *_oneTimePassword;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property BOOL flushCache;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) NSURLRequest * urlRequest;

+ (id)protocolVersion;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)bodyDictionary;
- (void)dealloc;
- (BOOL)flushCache;
- (id)initWithURLString:(id)arg1;
- (void)performRequestWithHandler:(id)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setFlushCache:(BOOL)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
