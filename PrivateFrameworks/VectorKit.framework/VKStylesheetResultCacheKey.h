/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOFeatureStyleAttributes, NSString;

@interface VKStylesheetResultCacheKey : NSObject <NSCopying> {
    struct { 
        int vectorType; 
        int timePeriod; 
        int mapOverlayType; 
        BOOL iconTappable; 
        NSString *localeString; 
        BOOL isSelected; 
        unsigned int applicationState; 
    } _clientAttributes;
    GEOFeatureStyleAttributes *_featureAttributes;
}

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)initWithFeatureAttributes:(id)arg1 clientAttributes:(const struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (BOOL)isEqual:(id)arg1;

@end
