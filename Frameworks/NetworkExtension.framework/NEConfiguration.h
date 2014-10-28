/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEAOVPN, NEContentFilter, NEProfileIngestionPayloadInfo, NEVPN, NEVPNApp, NSString, NSUUID;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NSString *_application;
    NSString *_applicationIdentifier;
    NSString *_applicationName;
    NEContentFilter *_contentFilter;
    NSString *_externalIdentifier;
    int _grade;
    NSUUID *_identifier;
    NSString *_name;
    NEProfileIngestionPayloadInfo *_payloadInfo;
}

@property(copy) NEVPN * VPN;
@property(copy) NEAOVPN * alwaysOnVPN;
@property(copy) NEVPNApp * appVPN;
@property(copy) NSString * application;
@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * applicationName;
@property(copy) NEContentFilter * contentFilter;
@property(copy) NSString * externalIdentifier;
@property(readonly) int grade;
@property(readonly) NSUUID * identifier;
@property(copy) NSString * name;
@property(copy) NEProfileIngestionPayloadInfo * payloadInfo;
@property(readonly) NSString * pluginType;

+ (BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences { }*)arg2;
+ (void)addError:(id)arg1 toList:(id)arg2;
+ (struct __CFDictionary { }*)copyConfigurationForProtocol:(struct __CFString { }*)arg1 inService:(struct __SCNetworkService { }*)arg2;
+ (BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences { }*)arg2;
+ (BOOL)setConfiguration:(struct __CFDictionary { }*)arg1 forProtocol:(struct __CFString { }*)arg2 inService:(struct __SCNetworkService { }*)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VPN;
- (id)alwaysOnVPN;
- (id)appVPN;
- (id)application;
- (id)applicationIdentifier;
- (id)applicationName;
- (BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences { }*)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)clearKeychainInDomain:(int)arg1;
- (void)clearSystemKeychain;
- (void)clearUserKeychain;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 payloadBase:(id)arg2;
- (BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (BOOL)configureL2TPWithPPPOptions:(id)arg1;
- (BOOL)configurePPPCommon:(id)arg1;
- (BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (BOOL)configurePPTPWithPPPOptions:(id)arg1;
- (BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2;
- (BOOL)configureVpnOnDemandRules:(id)arg1;
- (id)contentFilter;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyProfileDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)generateSignature;
- (id)getConfigurationIdentifier;
- (id)getConfigurationPasswordPersist:(id)arg1 account:(id)arg2 description:(id)arg3;
- (id)getConfigurationProtocol;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (int)grade;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)ingestDNSOptions:(id)arg1;
- (BOOL)ingestDisconnectOptions:(id)arg1;
- (BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (BOOL)ingestPPPDict:(id)arg1;
- (BOOL)ingestProxyOptions:(id)arg1;
- (id)initFromSCService:(struct __SCNetworkService { }*)arg1;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithName:(id)arg1 grade:(int)arg2;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupportedBySC;
- (id)name;
- (id)payloadInfo;
- (id)pluginType;
- (void)setAlwaysOnVPN:(id)arg1;
- (BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (void)setAppVPN:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (BOOL)setCertificateContentFilter:(id)arg1;
- (BOOL)setCertificates:(id)arg1;
- (BOOL)setCertificatesAOVpn:(id)arg1;
- (BOOL)setCertificatesAppVPN:(id)arg1;
- (BOOL)setCertificatesVPN:(id)arg1;
- (BOOL)setConfigurationHTTPPassword:(id)arg1;
- (BOOL)setConfigurationPassword:(id)arg1 account:(id)arg2 password:(id)arg3 description:(id)arg4;
- (BOOL)setConfigurationSharedSecret:(id)arg1;
- (BOOL)setConfigurationVPNPassword:(id)arg1;
- (void)setContentFilter:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPayloadInfo:(id)arg1;
- (BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (BOOL)setPayloadInfoIdentity:(id)arg1;
- (BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (BOOL)setPayloadInfoIdentityPIN:(id)arg1;
- (BOOL)setPayloadInfoIdentityProxy:(id)arg1;
- (BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (BOOL)setProfileInfo:(id)arg1;
- (void)setVPN:(id)arg1;
- (void)syncWithKeychainInDomain:(int)arg1;
- (void)syncWithSystemKeychain;
- (void)syncWithUserKeychain;
- (BOOL)updateFromSCService:(struct __SCNetworkService { }*)arg1;

@end
