/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKInvitePickerDataSource, NSSet;

@interface GKInvitePickerViewController : GKPlayerPickerViewController {
    NSSet *_hiddenPlayers;
    GKInvitePickerDataSource *_invitePickerDataSource;
}

@property(retain) NSSet * hiddenPlayers;
@property(retain) GKInvitePickerDataSource * invitePickerDataSource;

- (void)configureDataSource;
- (void)configureNearbyDataSource;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didEnterNoContentState;
- (id)hiddenPlayers;
- (id)initWithGame:(id)arg1 hiddenPlayers:(id)arg2;
- (id)invitePickerDataSource;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned int)arg2 didSelectDataSourceWithIndex:(int)arg3;
- (void)setHiddenPlayers:(id)arg1;
- (void)setInvitePickerDataSource:(id)arg1;
- (void)setSupportsNearby:(BOOL)arg1;
- (id)splitingDataSource;
- (void)updateNoContentTitles;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
