/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload {
    NSArray *_APNs;
    MCAPNConfiguration *_attachAPN;
}

@property(retain) NSArray * APNs;
@property(retain) MCAPNConfiguration * attachAPN;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)APNConfigurationDescription;
- (id)APNs;
- (id)APNsDescription;
- (id)APNsLabel;
- (id)attachAPN;
- (id)attachAPNConfigurationLabel;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (void)setAPNs:(id)arg1;
- (void)setAttachAPN:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
