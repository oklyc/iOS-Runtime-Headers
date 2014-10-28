/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <GEOMapItemPrivate>, NSString, PLRevGeoCompoundNameInfo;

@interface PLRevGeoLocationInfo : NSObject {
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
    <GEOMapItemPrivate> *_geoMapItem;
    BOOL _isHome;
    BOOL _isValid;
    NSString *_providerId;
    unsigned int _providerVersion;
}

@property(retain) PLRevGeoCompoundNameInfo * compoundNameInfo;
@property(retain) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;
@property(copy,readonly) NSString * countryCode;
@property(retain) <GEOMapItemPrivate> * geoMapItem;
@property BOOL isHome;
@property(readonly) BOOL isValid;
@property(retain) NSString * providerId;
@property unsigned int providerVersion;

+ (id)_namingOrderForAssetReverseGeoDescription;
+ (unsigned int)currentVersion;
+ (BOOL)isValidFromData:(id)arg1;
+ (unsigned int)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (id)sortedNameInfoComparatorWithHomeAtEnd:(BOOL)arg1;

- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(int*)arg3;
- (id)compoundNameInfo;
- (id)compoundSecondaryNameInfo;
- (id)countryCode;
- (id)dataForInfo;
- (void)dealloc;
- (id)description;
- (id)geoMapItem;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isHome;
- (BOOL)isValid;
- (id)localizedDescription;
- (id)providerId;
- (unsigned int)providerVersion;
- (void)setCompoundNameInfo:(id)arg1;
- (void)setCompoundSecondaryNameInfo:(id)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setIsHome:(BOOL)arg1;
- (void)setProviderId:(id)arg1;
- (void)setProviderVersion:(unsigned int)arg1;

@end
