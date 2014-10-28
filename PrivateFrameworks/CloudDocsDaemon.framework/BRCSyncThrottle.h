/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSPredicate;

@interface BRCSyncThrottle : BRCThrottle {
    NSPredicate *_predicate;
}

@property(retain) NSPredicate * predicate;

- (void).cxx_destruct;
- (BOOL)_validateThrottleParams:(id)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (BOOL)matchesItem:(id)arg1 nsecsToRetry:(unsigned long long*)arg2 now:(unsigned long long)arg3;
- (id)predicate;
- (void)setPredicate:(id)arg1;

@end
