/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying> {
}

@property(readonly) double anchorTimeStamp;
@property(readonly) double anchorValue;
@property(readonly) double currentValue;
@property(readonly) double rate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (double)currentTimeStamp;
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;

- (struct { double x1; double x2; })_timing;
- (double)anchorTimeStamp;
- (double)anchorValue;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueTiming:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValueTiming:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)rate;
- (double)timeStampForValue:(double)arg1;
- (double)valueForTimeStamp:(double)arg1;

@end
