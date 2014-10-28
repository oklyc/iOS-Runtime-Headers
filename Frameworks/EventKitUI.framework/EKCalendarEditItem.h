/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKCalendarEditItemDelegate>, <EKStyleProvider>, EKCalendar, EKEventStore;

@interface EKCalendarEditItem : NSObject {
    EKCalendar *_calendar;
    <EKCalendarEditItemDelegate> *_delegate;
    EKEventStore *_store;
    <EKStyleProvider> *_styleProvider;
}

@property(readonly) EKCalendar * calendar;
@property <EKCalendarEditItemDelegate> * delegate;
@property(retain) <EKStyleProvider> * styleProvider;

- (void).cxx_destruct;
- (void)applyStyleProviderToCell:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)calendar;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)delegate;
- (float)footerHeightForSection;
- (id)footerViewForSection;
- (id)headerTitle;
- (void)layoutForWidth:(float)arg1;
- (unsigned int)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
