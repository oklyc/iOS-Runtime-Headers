/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOClientCapabilities, NSData, NSString;

@interface GEORPProblemNotificationAvailabilityRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int pinType : 1; 
        unsigned int placeType : 1; 
    } _businessIds;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_countryCode;
    NSData *_devicePushToken;
    } _has;
    int _pinType;
    int _placeType;
    } _problemTypes;
}

@property(readonly) unsigned long long* businessIds;
@property(readonly) unsigned int businessIdsCount;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property(retain) NSString * countryCode;
@property(retain) NSData * devicePushToken;
@property(readonly) BOOL hasClientCapabilities;
@property(readonly) BOOL hasCountryCode;
@property(readonly) BOOL hasDevicePushToken;
@property BOOL hasPinType;
@property BOOL hasPlaceType;
@property int pinType;
@property int placeType;
@property(readonly) int* problemTypes;
@property(readonly) unsigned int problemTypesCount;

- (void)addBusinessId:(unsigned long long)arg1;
- (void)addProblemType:(int)arg1;
- (unsigned long long)businessIdAtIndex:(unsigned int)arg1;
- (unsigned long long*)businessIds;
- (unsigned int)businessIdsCount;
- (void)clearBusinessIds;
- (void)clearProblemTypes;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (BOOL)hasClientCapabilities;
- (BOOL)hasCountryCode;
- (BOOL)hasDevicePushToken;
- (BOOL)hasPinType;
- (BOOL)hasPlaceType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pinType;
- (int)placeType;
- (int)problemTypeAtIndex:(unsigned int)arg1;
- (int*)problemTypes;
- (unsigned int)problemTypesCount;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBusinessIds:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (void)setClientCapabilities:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHasPinType:(BOOL)arg1;
- (void)setHasPlaceType:(BOOL)arg1;
- (void)setPinType:(int)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setProblemTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end
