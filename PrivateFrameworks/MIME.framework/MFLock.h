/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
    id _delegate;
    NSString *_name;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (BOOL)isLockedByMe;
- (void)lock;
- (BOOL)lockBeforeDate:(id)arg1;
- (BOOL)tryLock;
- (void)unlock;

@end
