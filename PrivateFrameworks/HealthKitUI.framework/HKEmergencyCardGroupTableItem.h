/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class NSArray, NSMutableArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem {
    NSMutableArray *_cumulativeRowOffsets;
    BOOL _enabled;
    NSArray *_subitems;
}

@property BOOL enabled;
@property(retain) NSArray * subitems;

- (void).cxx_destruct;
- (void)_getSubitem:(id*)arg1 andSubitemRow:(int*)arg2 forTableViewRow:(int)arg3;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (void)commitEditing;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (BOOL)enabled;
- (BOOL)hasPresentableData;
- (int)numberOfRows;
- (void)setData:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setOwningViewController:(id)arg1;
- (void)setSubitems:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)subitems;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)titleForFooter;

@end
