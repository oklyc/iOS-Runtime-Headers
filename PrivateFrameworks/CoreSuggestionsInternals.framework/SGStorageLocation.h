/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding> {
    double _accuracy;
    NSString *_address;
    NSString *_label;
    double _latitude;
    unsigned int _locationType;
    double _longitude;
    double _quality;
}

@property(readonly) double accuracy;
@property(readonly) NSString * address;
@property(readonly) NSString * label;
@property(readonly) double latitude;
@property(readonly) unsigned int locationType;
@property(readonly) double longitude;
@property(readonly) double quality;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (id)address;
- (int)compare:(id)arg1;
- (id)convertToLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned int)arg1 label:(id)arg2 address:(id)arg3 accuracy:(double)arg4 quality:(double)arg5;
- (id)initWithType:(unsigned int)arg1 label:(id)arg2 address:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (id)initWithType:(unsigned int)arg1 label:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToStorageLocation:(id)arg1;
- (id)label;
- (double)latitude;
- (unsigned int)locationType;
- (double)longitude;
- (double)quality;

@end
