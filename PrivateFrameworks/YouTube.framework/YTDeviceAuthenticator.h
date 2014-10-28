/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSData, NSMutableData, NSString, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    NSData *_hmac;
    int _phase;
    NSData *_r1;
    NSData *_r1Hash;
    NSData *_r2;
    NSMutableData *_responseData;
    double _timeTokenGranted;
    NSString *_token;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)sharedAuthenticator;

- (BOOL)_authenticate1;
- (BOOL)_authenticate2;
- (void)_clearNonces;
- (void)_connectionDidEnd;
- (void)_copyCertificateData:(id*)arg1 privateKey:(struct __SecKey {}**)arg2;
- (void)_failWithErrorCode:(int)arg1;
- (void)_loadStatusChanged;
- (void)_succeeded;
- (void)authenticate;
- (BOOL)canAuthenticate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)invalidateToken;
- (BOOL)isAuthenticating;
- (id)token;

@end
