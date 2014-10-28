/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, NSMutableArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {
    long long _configurationID;
    BOOL _configuresAppAudioSession;
    NSMutableArray *_connections;
    BOOL _usesAppAudioSession;
}

@property long long configurationID;
@property BOOL configuresAppAudioSession;
@property(readonly) NSArray * connectionConfigurations;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * sinkConfigurations;
@property(readonly) NSArray * sourceConfigurations;
@property(readonly) Class superclass;
@property BOOL usesAppAudioSession;

+ (void)initialize;

- (void)addConnectionConfiguration:(id)arg1;
- (long long)configurationID;
- (BOOL)configuresAppAudioSession;
- (id)connectionConfigurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeConnectionConfiguration:(id)arg1;
- (void)setConfigurationID:(long long)arg1;
- (void)setConfiguresAppAudioSession:(BOOL)arg1;
- (void)setUsesAppAudioSession:(BOOL)arg1;
- (id)sinkConfigurations;
- (id)sourceConfigurations;
- (BOOL)usesAppAudioSession;

@end
