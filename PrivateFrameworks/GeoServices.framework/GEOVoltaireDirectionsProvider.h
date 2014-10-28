/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORequester, NSString;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
    BOOL _cancelled;
    GEORequester *_requester;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(retain) GEORequester * requester;
@property(readonly) Class superclass;

- (void)cancelProviderRequest;
- (void)cleanupRequester;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startProviderWithRequest:(id)arg1;

@end
