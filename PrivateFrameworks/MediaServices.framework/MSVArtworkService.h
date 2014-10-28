/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject {
    NSXPCConnection *_serverConnection;
    NSOperationQueue *_serviceThrottlingOperationQueue;
}

@property(retain) NSXPCConnection * serverConnection;
@property(retain) NSOperationQueue * serviceThrottlingOperationQueue;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sendRequest:(id)arg1 completionHandler:(id)arg2;
- (id)serverConnection;
- (id)serviceThrottlingOperationQueue;
- (void)setServerConnection:(id)arg1;
- (void)setServiceThrottlingOperationQueue:(id)arg1;

@end
