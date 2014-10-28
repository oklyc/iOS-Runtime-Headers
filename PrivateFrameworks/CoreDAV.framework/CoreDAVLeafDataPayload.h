/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray, NSData, NSString, NSURL;

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
    NSData *_dataPayload;
    NSURL *_serverID;
    NSString *_syncKey;
}

@property(readonly) NSArray * childrenOrder;
@property(readonly) NSData * dataPayload;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) NSURL * serverID;
@property(readonly) Class superclass;
@property(readonly) NSString * syncKey;

- (id)dataPayload;
- (void)dealloc;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
