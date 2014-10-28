/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedRoute, GEOLocation, GEORouteMatch, NSDate;

@interface GEORouteTrackedLocation : NSObject {
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    struct { 
        double latitude; 
        double longitude; 
    } _lastGoodMatchCoordinate;
    NSDate *_lastTimeInTunnel;
    double _newStepDistanceTraveled;
    } _newStepLastGeoCoord;
    } _newStepLastRouteCoord;
    unsigned int _newStepProgressions;
    GEOLocation *_rawLocation;
    GEOComposedRoute *_route;
    GEORouteMatch *_routeMatch;
}

@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } lastGoodMatchCoordinate;
@property(retain) NSDate * lastTimeInTunnel;
@property(readonly) double newStepDistanceTraveled;
@property(readonly) struct { double x1; double x2; } newStepLastGeoCoord;
@property(readonly) struct PolylineCoordinate { unsigned int x1; float x2; } newStepLastRouteCoord;
@property(readonly) unsigned int newStepProgressions;
@property(readonly) GEOLocation * rawLocation;
@property(readonly) GEOComposedRoute * route;
@property(readonly) GEORouteMatch * routeMatch;
@property(readonly) double timeSinceTunnel;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (void)forceGoodRouteMatch;
- (id)initWithRoute:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })lastGoodMatchCoordinate;
- (id)lastTimeInTunnel;
- (double)newStepDistanceTraveled;
- (struct { double x1; double x2; })newStepLastGeoCoord;
- (struct PolylineCoordinate { unsigned int x1; float x2; })newStepLastRouteCoord;
- (unsigned int)newStepProgressions;
- (id)rawLocation;
- (id)route;
- (id)routeMatch;
- (void)setLastTimeInTunnel:(id)arg1;
- (double)timeSinceTunnel;
- (void)updateWithProjectedRouteMatch:(id)arg1;
- (void)updateWithRouteMatch:(id)arg1 rawLocation:(id)arg2 newStepProgressions:(unsigned int)arg3 newStepDistanceTraveled:(double)arg4 newStepLastRouteCoord:(struct PolylineCoordinate { unsigned int x1; float x2; })arg5 newStepLastGeoCoord:(struct { double x1; double x2; })arg6;
- (void)updateWithRouteMatch:(id)arg1;

@end
