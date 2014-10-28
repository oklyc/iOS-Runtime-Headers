/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <GEOMapItemPrivate>, GEOAddress, GEOFeatureStyleAttributes, GEOMapRegion, GEOPDFlyover, GEOPlace, MKMapItemMetadata, MKPlacemark, NSData, NSString, NSURL, _MKMapItemPhotosAttribution, _MKMapItemPlaceAttribution, _MKMapItemReviewsAttribution;

@interface MKMapItem : NSObject <GEOURLSerializable> {
    _MKMapItemPlaceAttribution *_attribution;
    NSString *_extSessionGuid;
    <GEOMapItemPrivate> *_geoMapItem;
    BOOL _isCurrentLocation;
    BOOL _isPlaceHolder;
    MKMapItemMetadata *_metadata;
    _MKMapItemPhotosAttribution *_photosAttribution;
    GEOPlace *_place;
    _MKMapItemReviewsAttribution *_reviewsAttribution;
}

@property(getter=_attribution,readonly) _MKMapItemPlaceAttribution * attribution;
@property(getter=_coordinate,readonly) struct { double x1; double x2; } coordinate;
@property(getter=_customIconID,readonly) unsigned long long customIconID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=_disambiguationName,readonly) NSString * disambiguationName;
@property(getter=_displayMapRegion,readonly) GEOMapRegion * displayMapRegion;
@property(copy) NSString * extSessionGuid;
@property(getter=_firstLocalizedCategoryName,readonly) NSString * firstLocalizedCategoryName;
@property(getter=_flyover,readonly) GEOPDFlyover * flyover;
@property(getter=_flyoverAnnouncementMessage,readonly) NSString * flyoverAnnouncement;
@property(readonly) NSString * formattedNumberOfReviews;
@property(readonly) NSString * formattedNumberOfReviewsIncludingProvider;
@property(getter=_formattedTelephone,readonly) NSString * formattedTelephone;
@property(getter=_geoAddress,readonly) GEOAddress * geoAddress;
@property(getter=_geoFenceMapRegion,readonly) GEOMapRegion * geoFenceMapRegion;
@property(getter=_geoMapItem,readonly) <GEOMapItemPrivate> * geoMapItem;
@property(getter=_goodForKids,readonly) BOOL goodForKids;
@property(getter=_hasAnyAmenities,readonly) BOOL hasAnyAmenities;
@property(getter=_hasDelivery,readonly) BOOL hasDelivery;
@property(getter=_hasDeliveryAmenity,readonly) BOOL hasDeliveryAmenity;
@property(getter=_hasDisplayableAmenities,readonly) BOOL hasDisplayableAmenities;
@property(getter=_hasFlyover,readonly) BOOL hasFlyover;
@property(getter=_hasFlyoverAnnouncementMessage,readonly) BOOL hasFlyoverAnnouncement;
@property(getter=_hasFormattedTelephone,readonly) BOOL hasFormattedTelephone;
@property(getter=_hasGoodForKidsAmenity,readonly) BOOL hasGoodForKidsAmenity;
@property(getter=_hasLocalizedOperatingHours,readonly) BOOL hasLocalizedOperatingHours;
@property(getter=_hasMUID,readonly) BOOL hasMUID;
@property(getter=_hasOperatingHours,readonly) BOOL hasOperatingHours;
@property(getter=_hasPriceRange,readonly) BOOL hasPriceRange;
@property(getter=_hasResolvablePartialInformation,readonly) BOOL hasResolvablePartialInformation;
@property(getter=_hasSessionGUID,readonly) BOOL hasSessionGUID;
@property(getter=_hasTakesReservationsAmenity,readonly) BOOL hasTakesReservationsAmenity;
@property(getter=_hasUserRatingScore,readonly) BOOL hasUserRatingScore;
@property(readonly) unsigned int hash;
@property BOOL isCurrentLocation;
@property(getter=_isEmptyContactMapItem,readonly) BOOL isEmptyContactMapItem;
@property(readonly) BOOL isPlaceHolder;
@property(getter=_localizedOperatingHours,readonly) NSString * localizedOperatingHours;
@property(readonly) MKMapItemMetadata * metadata;
@property(getter=_muid,readonly) unsigned long long muid;
@property(copy) NSString * name;
@property(getter=_needsAttribution,readonly) BOOL needsAttribution;
@property(getter=_normalizedUserRatingScore,readonly) float normalizedUserRatingScore;
@property(getter=_openState,readonly) unsigned int openState;
@property(copy) NSString * phoneNumber;
@property(getter=_photosAttribution,readonly) _MKMapItemPhotosAttribution * photosAttribution;
@property(readonly) GEOPlace * place;
@property(getter=_placeAsData,readonly) NSData * placeAsData;
@property(getter=_placeDataAsData,readonly) NSData * placeDataAsData;
@property(readonly) MKPlacemark * placemark;
@property(getter=_poiSurveyURLString,readonly) NSString * poiSurveyURLString;
@property(getter=_priceRangeString,readonly) NSString * priceRangeString;
@property(getter=_providerURL,copy,readonly) NSURL * providerURL;
@property(getter=_reviewsAttribution,readonly) _MKMapItemReviewsAttribution * reviewsAttribution;
@property(getter=_reviewsDisplayName,readonly) NSString * reviewsDisplayName;
@property(getter=_sampleSizeForUserRatingScore,readonly) unsigned int sampleSizeForUserRatingScore;
@property(getter=_sequenceNumber,readonly) unsigned int sequenceNumber;
@property(getter=_sessionGUID,readonly) struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property(getter=_shortAddress,readonly) NSString * shortAddress;
@property(getter=_styleAttributes,readonly) GEOFeatureStyleAttributes * styleAttributes;
@property(readonly) Class superclass;
@property(getter=_takesReservations,readonly) BOOL takesReservations;
@property(retain) NSURL * url;
@property(getter=_vendorID,copy,readonly) NSString * vendorID;
@property(getter=_webURL,copy,readonly) NSURL * webURL;
@property(readonly) NSString * yelpID;

+ (void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2;
+ (id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2;
+ (id)_itemWithGeoMapItem:(id)arg1;
+ (id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
+ (void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(id)arg2;
+ (id)mapItemForCurrentLocation;
+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemWithSerializedPlaceData:(id)arg1;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2;
+ (id)plistCompatibleDictionaryFromStandardOptions:(id)arg1;
+ (id)standardOptionsFromPlistCompatibleDictionary:(id)arg1;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)_attribution;
- (id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3;
- (struct { double x1; double x2; })_coordinate;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_displayMapRegion;
- (id)_firstLocalizedCategoryName;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (id)_formattedTelephone;
- (id)_geoAddress;
- (id)_geoFenceMapRegion;
- (id)_geoMapItem;
- (id)_getBusiness;
- (BOOL)_goodForKids;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasDisplayableAmenities;
- (BOOL)_hasFlyover;
- (BOOL)_hasFlyoverAnnouncementMessage;
- (BOOL)_hasFormattedTelephone;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasLocalizedOperatingHours;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasSessionGUID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasUserRatingScore;
- (id)_infoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (BOOL)_isEmptyContactMapItem;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedOperatingHours;
- (id)_mapsDataString;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned int)_openState;
- (id)_photoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_photosAttribution;
- (id)_placeAsData;
- (id)_placeCardContact;
- (id)_placeDataAsData;
- (id)_poiSurveyURLString;
- (id)_priceRangeString;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (id)_reviewsAttribution;
- (id)_reviewsAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2;
- (id)_reviewsDisplayName;
- (unsigned int)_sampleSizeForUserRatingScore;
- (unsigned int)_sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })_sessionGUID;
- (void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4;
- (id)_shortAddress;
- (id)_styleAttributes;
- (BOOL)_takesReservations;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
- (id)_urlForReviewWithUID:(id)arg1;
- (id)_urlForWritingAReview;
- (id)_vendorID;
- (id)_webURL;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extSessionGuid;
- (id)formattedNumberOfReviews;
- (id)formattedNumberOfReviewsIncludingProvider;
- (unsigned int)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2;
- (id)initWithPlace:(id)arg1 sessionGuid:(id)arg2;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (BOOL)isCurrentLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlaceHolder;
- (id)metadata;
- (id)name;
- (BOOL)openInMapsWithLaunchOptions:(id)arg1;
- (id)phoneNumber;
- (id)place;
- (id)placemark;
- (void)setExtSessionGuid:(id)arg1;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sharingURL;
- (id)thumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 annotationView:(id)arg2;
- (id)url;
- (id)urlRepresentation;
- (id)yelpID;

@end
