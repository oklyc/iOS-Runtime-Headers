/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOMapServiceTraits, NSString;

@interface _GEOReverseGeocodeRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket> {
    BOOL _shiftLocationsIfNeeded;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) GEOMapRegion * resultBoundingRegion;
@property(readonly) NSString * searchQuery;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (id)initWithRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;
- (id)searchQuery;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;

@end
