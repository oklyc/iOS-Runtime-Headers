/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class HKCorrelationType, NSArray, NSMutableDictionary, NSString, UIColor, UIImage;

@interface HKDataUnitGroup : NSObject {
    unsigned int _categoryID;
    int _chartStyle;
    HKCorrelationType *_correlationType;
    unsigned int _dataUnitGroupID;
    NSArray *_dataUnits;
    NSMutableDictionary *_dataUnitsByType;
    NSArray *_dataUnitsOrderedForDataEntry;
    UIImage *_detailImage;
    NSString *_displayName;
    NSString *_embeddedDisplayName;
    UIColor *_gradientEndColor;
    UIColor *_gradientStartColor;
    BOOL _isCharacteristic;
    BOOL _isNikeFuel;
    BOOL _isSleep;
    NSString *_joinString;
    NSString *_keywords;
    NSArray *_reversedDataUnits;
    NSString *_summary;
}

@property(readonly) unsigned int categoryID;
@property(readonly) int chartStyle;
@property(readonly) HKCorrelationType * correlationType;
@property(readonly) unsigned int dataUnitGroupID;
@property(readonly) NSArray * dataUnits;
@property(readonly) NSArray * dataUnitsOrderedForDataEntry;
@property(readonly) UIImage * detailImage;
@property(readonly) NSString * displayName;
@property(readonly) NSString * embeddedDisplayName;
@property(readonly) UIColor * gradientEndColor;
@property(readonly) UIColor * gradientStartColor;
@property(readonly) UIImage * groupIcon;
@property(readonly) NSString * joinString;
@property(readonly) NSString * keywords;
@property(readonly) UIImage * shareIcon;
@property(readonly) NSString * summary;
@property(readonly) UIImage * unitIcon;

- (void).cxx_destruct;
- (int)_chartStyleFromDictionary:(id)arg1;
- (unsigned int)categoryID;
- (int)chartStyle;
- (id)correlationType;
- (id)dataUnitForType:(id)arg1;
- (unsigned int)dataUnitGroupID;
- (id)dataUnits;
- (id)dataUnitsOrderedForDataEntry;
- (id)detailImage;
- (id)displayName;
- (id)embeddedDisplayName;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (id)groupIcon;
- (unsigned int)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (BOOL)isCharacteristic;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNikeFuel;
- (BOOL)isSleep;
- (id)joinString;
- (id)keywords;
- (id)shareIcon;
- (id)summary;
- (id)unitIcon;

@end
