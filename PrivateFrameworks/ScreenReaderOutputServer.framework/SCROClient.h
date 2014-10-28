/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock;

@interface SCROClient : NSObject {
    struct __CFSet { } *_callbackSet;
    unsigned int _identifier;
    NSLock *_lock;
    int _pid;
    unsigned int _port;
    struct __CFArray { } *_queue;
}

+ (id)addClientGetIdentifier:(unsigned int*)arg1 token:(struct { unsigned int x1[8]; })arg2 getPort:(unsigned int*)arg3;
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;
+ (void)initialize;
+ (BOOL)isClientTrustedWithPortToken:(struct { unsigned int x1[8]; })arg1;
+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;
+ (long)removeClientWithPort:(unsigned int)arg1;
+ (void)sendCallback:(id)arg1;

- (id)_dequeueCallbacks;
- (void)_invalidate;
- (void)_lock;
- (void)_registerCallbackWithKey:(int)arg1;
- (void)_sendCallback:(id)arg1;
- (void)_unlock;
- (BOOL)_wantsCallback:(id)arg1;
- (void)dealloc;
- (id)init;

@end
