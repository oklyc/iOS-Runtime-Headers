/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyDetailsCache : NSObject {
    BOOL _isValid;
    BOOL _isValidating;
    unsigned int _pendingInviteCount;
}

@property(readonly) unsigned int pendingInviteCount;

+ (id)sharedCache;

- (void)_fetchPendingInviteCount;
- (void)_setPendingInviteCount:(unsigned int)arg1;
- (void)invalidate;
- (unsigned int)pendingInviteCount;

@end
