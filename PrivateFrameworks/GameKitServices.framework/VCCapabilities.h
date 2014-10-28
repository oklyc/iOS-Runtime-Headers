/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCCapabilities : NSObject <NSCoding> {
    unsigned int actualAudioCodec;
    unsigned int actualVideoCodec;
    int deviceRole;
    BOOL isAudioEnabled;
    BOOL isAudioPausedToStart;
    BOOL isDTLSEnabled;
    BOOL isDuplexAudioOnly;
    BOOL isDuplexVideoOnly;
    BOOL isKeyExchangeEnabled;
    BOOL isRelayEnabled;
    BOOL isRelayForced;
    BOOL isVideoEnabled;
    BOOL isVideoPausedToStart;
    unsigned int preferredAudioCodec;
    unsigned int preferredVideoCodec;
    BOOL requiresWifi;
}

@property unsigned int actualAudioCodec;
@property unsigned int actualVideoCodec;
@property int deviceRole;
@property BOOL isAudioEnabled;
@property BOOL isAudioPausedToStart;
@property BOOL isDTLSEnabled;
@property BOOL isDuplexAudioOnly;
@property BOOL isDuplexVideoOnly;
@property BOOL isKeyExchangeEnabled;
@property BOOL isRelayEnabled;
@property BOOL isRelayForced;
@property BOOL isVideoEnabled;
@property BOOL isVideoPausedToStart;
@property unsigned int preferredAudioCodec;
@property unsigned int preferredVideoCodec;
@property BOOL requiresWifi;

+ (id)AudioOnlyVCCapabilities;
+ (id)VideoOnlyVCCapabilities;

- (unsigned int)actualAudioCodec;
- (unsigned int)actualVideoCodec;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (int)deviceRole;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (BOOL)isAudioEnabled;
- (BOOL)isAudioPausedToStart;
- (BOOL)isDTLSEnabled;
- (BOOL)isDuplexAudioOnly;
- (BOOL)isDuplexVideoOnly;
- (BOOL)isKeyExchangeEnabled;
- (BOOL)isRelayEnabled;
- (BOOL)isRelayForced;
- (BOOL)isVideoEnabled;
- (BOOL)isVideoPausedToStart;
- (id)newEncodedDictionary;
- (unsigned int)preferredAudioCodec;
- (unsigned int)preferredVideoCodec;
- (BOOL)requiresWifi;
- (void)setActualAudioCodec:(unsigned int)arg1;
- (void)setActualVideoCodec:(unsigned int)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (void)setIsAudioPausedToStart:(BOOL)arg1;
- (void)setIsDTLSEnabled:(BOOL)arg1;
- (void)setIsDuplexAudioOnly:(BOOL)arg1;
- (void)setIsDuplexVideoOnly:(BOOL)arg1;
- (void)setIsKeyExchangeEnabled:(BOOL)arg1;
- (void)setIsRelayEnabled:(BOOL)arg1;
- (void)setIsRelayForced:(BOOL)arg1;
- (void)setIsVideoEnabled:(BOOL)arg1;
- (void)setIsVideoPausedToStart:(BOOL)arg1;
- (void)setPreferredAudioCodec:(unsigned int)arg1;
- (void)setPreferredVideoCodec:(unsigned int)arg1;
- (void)setRequiresWifi:(BOOL)arg1;

@end
