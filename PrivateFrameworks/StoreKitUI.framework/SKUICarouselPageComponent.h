/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, SKUICarouselViewElement;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray *_carouselItems;
    double _cycleInterval;
    int _missingItemCount;
}

@property(readonly) NSArray * carouselItems;
@property(readonly) double cycleInterval;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly) SKUICarouselViewElement * viewElement;

- (void).cxx_destruct;
- (id)carouselItems;
- (int)componentType;
- (double)cycleInterval;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;
- (void)updateWithMissingItems:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end
