/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, SSDownload, SSDownloadAsset, SSXPCConnection;

@interface SSDownloadSession : NSObject {
    long long _assetID;
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _downloadID;
    long long _sessionID;
}

@property(readonly) SSDownload * download;
@property(readonly) SSDownloadAsset * downloadAsset;

- (id)_copySessionPropertyWithKey:(const char *)arg1;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)download;
- (id)downloadAsset;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
