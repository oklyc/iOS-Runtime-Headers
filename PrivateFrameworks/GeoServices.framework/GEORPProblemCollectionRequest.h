/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLocation, GEORPUserCredentials, NSData, NSMutableArray, NSString;

@interface GEORPProblemCollectionRequest : PBRequest <NSCopying> {
    NSString *_countryCode;
    NSData *_devicePushToken;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSString *_osRelease;
    NSMutableArray *_requestElements;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    GEOLocation *_userLocation;
}

@property(retain) NSString * countryCode;
@property(retain) NSData * devicePushToken;
@property(readonly) BOOL hasCountryCode;
@property(readonly) BOOL hasDevicePushToken;
@property(readonly) BOOL hasHwMachine;
@property(readonly) BOOL hasInputLanguage;
@property(readonly) BOOL hasOsRelease;
@property(readonly) BOOL hasUserCredentials;
@property(readonly) BOOL hasUserEmail;
@property(readonly) BOOL hasUserLocation;
@property(retain) NSString * hwMachine;
@property(retain) NSString * inputLanguage;
@property(retain) NSString * osRelease;
@property(retain) NSMutableArray * requestElements;
@property(retain) GEORPUserCredentials * userCredentials;
@property(retain) NSString * userEmail;
@property(retain) GEOLocation * userLocation;

- (void)addRequestElement:(id)arg1;
- (void)clearRequestElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (BOOL)hasCountryCode;
- (BOOL)hasDevicePushToken;
- (BOOL)hasHwMachine;
- (BOOL)hasInputLanguage;
- (BOOL)hasOsRelease;
- (BOOL)hasUserCredentials;
- (BOOL)hasUserEmail;
- (BOOL)hasUserLocation;
- (unsigned int)hash;
- (id)hwMachine;
- (id)inputLanguage;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)osRelease;
- (BOOL)readFrom:(id)arg1;
- (id)requestElementAtIndex:(unsigned int)arg1;
- (id)requestElements;
- (unsigned int)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCountryCode:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setOsRelease:(id)arg1;
- (void)setRequestElements:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
