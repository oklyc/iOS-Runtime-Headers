/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class <TKTonePickerTableViewControllerHelper>, NSString, TKTonePickerItem;

@interface TKToneClassicsTableViewController : UITableViewController <TKTonePickerTableViewLayoutMarginsObserver> {
    TKTonePickerItem *_classicTonesHeaderItem;
    <TKTonePickerTableViewControllerHelper> *_tonePickerTableViewControllerHelper;
}

@property(setter=_setClassicTonesHeaderItem:,retain) TKTonePickerItem * _classicTonesHeaderItem;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property <TKTonePickerTableViewControllerHelper> * tonePickerTableViewControllerHelper;

- (id)_classicTonesHeaderItem;
- (void)_setClassicTonesHeaderItem:(id)arg1;
- (void)dealloc;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (id)initWithClassicTonesHeaderItem:(id)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setTonePickerTableViewControllerHelper:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tonePickerTableViewControllerHelper;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
