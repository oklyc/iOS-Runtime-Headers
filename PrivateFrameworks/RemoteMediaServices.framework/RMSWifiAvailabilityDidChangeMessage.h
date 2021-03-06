/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionIdentifier : 1; 
        unsigned int wifiAvailable : 1; 
    } _has;
    int _sessionIdentifier;
    BOOL _wifiAvailable;
}

@property BOOL hasSessionIdentifier;
@property BOOL hasWifiAvailable;
@property int sessionIdentifier;
@property BOOL wifiAvailable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionIdentifier;
- (BOOL)hasWifiAvailable;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)sessionIdentifier;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setHasWifiAvailable:(BOOL)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)setWifiAvailable:(BOOL)arg1;
- (BOOL)wifiAvailable;
- (void)writeTo:(id)arg1;

@end
