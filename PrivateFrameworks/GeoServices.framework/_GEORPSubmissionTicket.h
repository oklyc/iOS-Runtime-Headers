/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOMapItemPrivate>, GEOMapServiceTraits, GEORPProblem, GEORPProblemRequest, NSString;

@interface _GEORPSubmissionTicket : NSObject <GEOMapServiceProblemReportTicket> {
    BOOL _canceled;
    <GEOMapItemPrivate> *_place;
    GEORPProblem *_problem;
    GEORPProblemRequest *_problemRequest;
    GEOMapServiceTraits *_traits;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) GEOMapServiceTraits * traits;

- (void)cancel;
- (void)dealloc;
- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;

@end
