/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {
    NSString *_clientID;
    unsigned int _contextID;
    NSString *_displayUUID;
    int _pid;
}

@property(readonly) NSString * clientID;
@property(readonly) unsigned int contextID;
@property(readonly) NSString * displayUUID;
@property(readonly) int pid;

+ (id)propertiesWithClientID:(id)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3;
+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 contextID:(unsigned int)arg2;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;

- (id)clientID;
- (unsigned int)contextID;
- (void)dealloc;
- (id)description;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (int)pid;
- (id)propertiesOneLevelMoreGeneric;
- (void)setPid:(int)arg1;

@end
