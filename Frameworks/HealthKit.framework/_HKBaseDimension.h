/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKBaseUnit, HKUnit, NSString;

@interface _HKBaseDimension : _HKDimension <_HKFactor> {
    NSString *_name;
    HKUnit *_reducedUnit;
    HKBaseUnit *_reducibleBaseUnit;
    double _reductionCoefficient;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSString * name;
@property(retain) HKUnit * reducedUnit;
@property(retain) HKBaseUnit * reducibleBaseUnit;
@property double reductionCoefficient;
@property(readonly) Class superclass;

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(id)arg2;
+ (id)conductance;
+ (id)energy;
+ (id)length;
+ (id)mass;
+ (id)nullDimension;
+ (id)pressure;
+ (id)temperature;
+ (id)time;
+ (id)volume;

- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)_initWithName:(id)arg1;
- (BOOL)canBeReduced;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)reducedUnit;
- (id)reducibleBaseUnit;
- (double)reductionCoefficient;
- (void)setReducedUnit:(id)arg1;
- (void)setReducibleBaseUnit:(id)arg1;
- (void)setReductionCoefficient:(double)arg1;
- (id)unitString;

@end
