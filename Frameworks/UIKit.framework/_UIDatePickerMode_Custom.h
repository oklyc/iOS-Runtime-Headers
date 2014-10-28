/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode {
    NSArray *_components;
    int _desiredUnits;
    int _displayedUnits;
    NSString *_originalFormat;
    NSArray *_sortedComponents;
}

- (id)_componentForCalendarUnit:(unsigned int)arg1;
- (unsigned int)calendarUnitForComponent:(int)arg1;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (id)components;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (void)dealloc;
- (int)displayedCalendarUnits;
- (unsigned int)extractableCalendarUnits;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (void)noteCalendarChanged;
- (unsigned int)numberOfComponents;
- (int)numberOfRowsInComponent:(int)arg1;
- (void)resetComponentWidths;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;

@end
