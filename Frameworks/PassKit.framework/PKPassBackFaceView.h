/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class BluetoothManager, NSArray, NSMutableDictionary, NSString, NSTimer, PKLinkedAppView, PKSettingTableCell, UIButton, UILabel, UIRefreshControl, UITableView, UIView;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    PKSettingTableCell *_automaticUpdates;
    UITableView *_bodyTable;
    BluetoothManager *_btManager;
    UIButton *_doneButton;
    NSMutableDictionary *_fieldCellsByIndexPath;
    unsigned int _fieldsSection;
    BOOL _isBluetoothEnabled;
    BOOL _isLocationEnabled;
    BOOL _isWifiEnabled;
    PKLinkedAppView *_linkedApp;
    unsigned int _linkedAppSection;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    NSTimer *_refreshTimeoutTimer;
    NSArray *_rowCountBySection;
    unsigned int _settingsSection;
    PKSettingTableCell *_showInLockScreen;
    BOOL _showsDelete;
    BOOL _showsLinkedApp;
    BOOL _showsLinks;
    BOOL _showsSettings;
    BOOL _tall;
    UILabel *_updateDateLabel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property PKLinkedAppView * linkedApp;
@property BOOL showsDelete;
@property BOOL showsLinkedApp;
@property BOOL showsLinks;
@property BOOL showsSettings;
@property(readonly) Class superclass;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (BOOL)isWifiEnabled;

- (void)_bluetoothPowerChanged:(id)arg1;
- (void)_deleteButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_fieldForIndexPath:(id)arg1;
- (BOOL)_isBluetoothEnabled;
- (BOOL)_linkedAppAvailable;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (void)_refreshTimeoutFired;
- (id)_relevantBuckets;
- (BOOL)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned int)arg1;
- (id)_updateLabelAttributedStringWithDate:(id)arg1;
- (id)_updateLabelAttributedStringWithString:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)createBodyInvariantViews;
- (void)dealloc;
- (BOOL)deleteEnabled;
- (void)didMoveToWindow;
- (id)initTall:(BOOL)arg1;
- (BOOL)isFrontFace;
- (void)layoutSubviews;
- (id)linkedApp;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (void)setLinkedApp:(id)arg1;
- (void)setShowsDelete:(BOOL)arg1;
- (void)setShowsLinkedApp:(BOOL)arg1;
- (void)setShowsLinks:(BOOL)arg1;
- (void)setShowsSettings:(BOOL)arg1;
- (void)setupRefreshControl:(id)arg1;
- (BOOL)shouldAllowRefresh;
- (BOOL)showBackgroundMatte;
- (BOOL)showUpdateDateLabel;
- (BOOL)showsDelete;
- (BOOL)showsLinkedApp;
- (BOOL)showsLinks;
- (BOOL)showsSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)willMoveToSuperview:(id)arg1;

@end
