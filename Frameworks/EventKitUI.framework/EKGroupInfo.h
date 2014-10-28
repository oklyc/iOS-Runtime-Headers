/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    BOOL _selected;
    BOOL _showSelectAllButton;
    EKSource *_source;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    NSString *_typeTitle;
}

@property(retain,readonly) NSArray * calendarInfos;
@property(copy,readonly) NSSet * calendarSet;
@property(readonly) BOOL isSubscribed;
@property(readonly) unsigned int numCalendars;
@property(readonly) unsigned int numSelectableCalendars;
@property(readonly) unsigned int numSelectedCalendars;
@property BOOL selected;
@property(copy,readonly) NSSet * selectedCalendarSet;
@property(readonly) BOOL showAddCalendarButton;
@property(readonly) BOOL showCalendarNameIfSolitary;
@property BOOL showSelectAllButton;
@property(readonly) int sortOrder;
@property(retain) EKSource * source;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * typeTitle;

- (void).cxx_destruct;
- (id)calendarAtIndex:(unsigned int)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (id)description;
- (id)init;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (BOOL)isSubscribed;
- (unsigned int)numCalendars;
- (unsigned int)numSelectableCalendars;
- (unsigned int)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (BOOL)selected;
- (id)selectedCalendarSet;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setShowSelectAllButton:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (BOOL)showAddCalendarButton;
- (BOOL)showCalendarNameIfSolitary;
- (BOOL)showSelectAllButton;
- (int)sortOrder;
- (id)source;
- (id)title;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;

@end
