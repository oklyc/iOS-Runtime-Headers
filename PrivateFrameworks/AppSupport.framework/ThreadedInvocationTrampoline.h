/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
    BOOL _immediateForMatchingThread;
    NSThread *_thread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(BOOL)arg3;

@end
