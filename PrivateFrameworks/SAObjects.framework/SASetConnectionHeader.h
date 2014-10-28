/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand {
}

@property(copy) NSString * aceHostHeader;
@property(retain) SAConnectionPolicy * connectionPolicy;
@property BOOL reconnectNow;

+ (id)setConnectionHeader;
+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceHostHeader;
- (id)connectionPolicy;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)reconnectNow;
- (BOOL)requiresResponse;
- (void)setAceHostHeader:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setReconnectNow:(BOOL)arg1;

@end
