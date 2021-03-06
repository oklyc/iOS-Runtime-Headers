/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {
    NSString *_debugInfo;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _expireHandler;

    SBKProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;
- (void)invalidate;
- (void)performExpirationHandler;

@end
