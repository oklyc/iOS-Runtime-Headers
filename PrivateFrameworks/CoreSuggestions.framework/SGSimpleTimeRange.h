/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {
    double _end;
    int _endUTCOffsetSeconds;
    BOOL _floating;
    double _start;
    int _startUTCOffsetSeconds;
}

@property(readonly) double end;
@property(readonly) int endUTCOffsetSeconds;
@property(getter=isFloating,readonly) BOOL floating;
@property(readonly) double start;
@property(readonly) int startUTCOffsetSeconds;

+ (id)dateFromGregorianComponents:(id)arg1;
+ (id)floatingRangeWithStart:(double)arg1 end:(double)arg2;
+ (id)floatingRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (double)fromFloatingTime:(double)arg1;
+ (BOOL)hasYearMonthDayComponents:(id)arg1;
+ (BOOL)isAllDayComponents:(id)arg1;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (double)toFloatingTime:(double)arg1;
+ (id)utcRangeWithStart:(double)arg1 duration:(double)arg2;
+ (id)utcRangeWithStart:(double)arg1 end:(double)arg2;

- (id)absoluteRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (int)endUTCOffsetSeconds;
- (unsigned int)hash;
- (id)initFloatingWithStart:(double)arg1 end:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(double)arg1 startUTCOffsetSeconds:(int)arg2 end:(double)arg3 endUTCOffsetSeconds:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimpleTimeRange:(id)arg1;
- (BOOL)isFloating;
- (id)stableStringRepresentation;
- (double)start;
- (int)startUTCOffsetSeconds;

@end
