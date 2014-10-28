/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSNumber, NSString;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding> {
    NSString *_format;
    NSString *_manufacturerDescription;
    NSNumber *_maxLength;
    NSNumber *_maximumValue;
    NSNumber *_minimumValue;
    NSNumber *_stepValue;
    NSString *_units;
}

@property(copy,readonly) NSString * format;
@property(copy,readonly) NSString * manufacturerDescription;
@property(readonly) NSNumber * maxLength;
@property(readonly) NSNumber * maximumValue;
@property(readonly) NSNumber * minimumValue;
@property(readonly) NSNumber * stepValue;
@property(copy,readonly) NSString * units;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)units;

@end
