/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValue : SASettingCommand {
}

@property BOOL dryRun;
@property BOOL failOnSiriDisconnectWarnings;

+ (id)setValue;
+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)dryRun;
- (id)encodedClassName;
- (BOOL)failOnSiriDisconnectWarnings;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setDryRun:(BOOL)arg1;
- (void)setFailOnSiriDisconnectWarnings:(BOOL)arg1;

@end
