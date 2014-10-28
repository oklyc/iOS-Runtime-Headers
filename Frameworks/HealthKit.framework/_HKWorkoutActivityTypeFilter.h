/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutActivityTypeFilter : _HKFilter {
    unsigned int _operatorType;
    unsigned int _workoutActivityType;
}

@property(readonly) unsigned int operatorType;
@property(readonly) unsigned int workoutActivityType;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithWorkoutActivityType:(unsigned int)arg1 operatorType:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;

- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;
- (unsigned int)workoutActivityType;

@end
