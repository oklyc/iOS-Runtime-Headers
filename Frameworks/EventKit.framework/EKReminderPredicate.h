/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString;

@interface EKReminderPredicate : EKPredicate {
    BOOL _completed;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    BOOL _limitToCompletedOrIncomplete;
    NSString *_listTitle;
    unsigned int _maxResults;
    NSString *_searchTerm;
    int _sortOrder;
    NSString *_title;
    BOOL _useCompletionDateAsAlternate;
    BOOL _useDueDateAsCompletionDate;
}

@property BOOL completed;
@property(retain) NSDate * dueAfter;
@property(retain) NSDate * dueBefore;
@property BOOL limitToCompletedOrIncomplete;
@property(retain) NSString * listTitle;
@property unsigned int maxResults;
@property(retain) NSString * searchTerm;
@property int sortOrder;
@property(retain) NSString * title;
@property BOOL useCompletionDateAsAlternate;
@property BOOL useDueDateAsCompletionDate;

+ (id)predicateWithCalendars:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)completed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dueAfter;
- (id)dueBefore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)limitToCompletedOrIncomplete;
- (id)listTitle;
- (unsigned int)maxResults;
- (id)searchTerm;
- (void)setCompleted:(BOOL)arg1;
- (void)setDueAfter:(id)arg1;
- (void)setDueBefore:(id)arg1;
- (void)setLimitToCompletedOrIncomplete:(BOOL)arg1;
- (void)setListTitle:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseCompletionDateAsAlternate:(BOOL)arg1;
- (void)setUseDueDateAsCompletionDate:(BOOL)arg1;
- (int)sortOrder;
- (id)title;
- (BOOL)useCompletionDateAsAlternate;
- (BOOL)useDueDateAsCompletionDate;

@end
