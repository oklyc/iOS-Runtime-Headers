/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding> {
    NSString *_command;
    NSString *_dataClass;
}

@property(copy) NSString * command;
@property(copy) NSString * dataClass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)additionalDescription;
- (id)command;
- (id)dataClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithATPMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3;
- (id)partialResponseWithParameters:(id)arg1;
- (id)responseWithError:(id)arg1 parameters:(id)arg2;
- (void)setCommand:(id)arg1;
- (void)setDataClass:(id)arg1;

@end
